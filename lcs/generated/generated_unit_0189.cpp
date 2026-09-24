#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0189[4091] = {
    1, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 14, 0,
    0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0,
    0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0,
    0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 44, 0, 0, 0, 45, 0, 0, 46, 47, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 57, 0, 0, 0, 0,
    0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0,
    0, 0, 0, 64, 0, 65, 0, 0, 66, 0, 0, 0, 67, 0, 68, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0,
    0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 84, 0, 85, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 101, 0, 102, 0, 103, 0, 104, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 111,
    0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 122, 123, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 127, 0, 0,
    128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0,
    135, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 139, 140, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 143, 144, 0, 0, 0, 0, 145,
    146, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0,
    0, 152, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 158, 0, 0, 159, 0, 0, 160, 0, 161, 0, 0,
    0, 0, 162, 0, 163, 0, 164, 0, 0, 0, 165, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 170, 0, 0,
    171, 0, 0, 172, 0, 0, 173, 0, 0, 174, 175, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 180, 0, 181,
    0, 182, 0, 0, 183, 0, 0, 184, 0, 185, 0, 0, 186, 0, 0, 187, 0, 188, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0,
    0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 197, 0, 0, 198, 0, 0, 199, 0, 200, 0, 0,
    0, 0, 201, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 210,
    0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 215, 0, 0, 0, 216, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0,
    0, 0, 0, 220, 0, 0, 221, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 225, 0, 226, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0,
    0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 235,
    0, 236, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 242,
    243, 0, 0, 244, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0,
    0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 254, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 258, 0, 259, 0, 0, 260, 0, 0, 261, 0, 262, 0, 263, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    266, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 278, 0, 0, 0, 0,
    0, 279, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0,
    0, 286, 0, 0, 0, 0, 287, 0, 0, 288, 289, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 292, 0, 0, 0, 0, 293, 0, 294, 0, 295, 0,
    296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 299, 0, 0, 300, 0, 301, 302, 0, 0, 303, 0, 0, 304, 0, 305, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0,
    0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 314, 315, 0, 0, 0, 0, 0, 0,
    0, 316, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 325, 326, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330,
    0, 0, 331, 0, 332, 333, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 339, 0, 340,
    0, 0, 0, 0, 341, 0, 342, 0, 343, 0, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349,
    0, 350, 0, 351, 0, 352, 0, 353, 0, 0, 0, 354, 0, 0, 0, 355, 0, 356, 0, 357, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0,
    360, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 363, 0, 0, 364, 0, 365, 366, 0, 367, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0,
    0, 0, 370, 0, 371, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 374, 0, 0, 375, 0, 376, 0, 0, 0, 377, 0, 378, 0, 0, 379, 0, 0,
    0, 0, 0, 380, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0,
    0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0,
    0, 388, 0, 0, 0, 389, 0, 390, 0, 0, 0, 391, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0,
    0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 402, 0, 403, 0, 0, 404, 0, 0, 0, 405, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413,
    0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0,
    420, 0, 421, 422, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 433, 0, 434, 0, 435, 0, 436, 0, 437, 0, 438, 0, 439, 0, 440, 0, 0, 0, 0, 0, 441, 0,
    0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0,
    450, 0, 0, 0, 451, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 455, 0, 456, 0, 457, 0, 458, 0, 459, 0, 0,
    460, 0, 0, 461, 0, 0, 0, 0, 462, 463, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 468, 0, 469, 0, 0,
    0, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0, 472, 0, 473, 0, 474, 475, 0, 476, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0,
    0, 0, 479, 0, 0, 480, 0, 0, 481, 0, 0, 482, 0, 483, 0, 0, 484, 0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0,
    487, 0, 488, 0, 0, 0, 489, 0, 0, 490, 0, 491, 492, 0, 493, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0,
    497, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 502, 0, 503, 0, 0, 504, 0,
    0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 507, 0, 0, 508, 0, 509, 0, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0,
    512, 0, 513, 0, 0, 0, 0, 0, 514, 0, 0, 515, 516, 0, 517, 0, 518, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0,
    0, 521, 0, 0, 0, 522, 523, 0, 524, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 0, 528, 0, 529, 530, 0, 0, 531,
    0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 534, 0, 0, 535, 0, 536, 537, 0, 0, 538, 0, 0, 539, 0, 0, 0, 0, 540,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 547, 0, 548, 0, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0,
    0, 551, 0, 552, 553, 0, 0, 554, 0, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 557, 0, 0, 0, 558, 0, 0, 559, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 563, 0, 0, 0,
    564, 0, 0, 0, 565, 0, 0, 566, 0, 0, 0, 0, 567, 0, 568, 0, 0, 0, 569, 0, 0, 570, 0, 0, 0, 571, 0, 0, 572, 0, 573, 0,
    0, 574, 0, 0, 0, 0, 575, 0, 576, 577, 0, 578, 0, 0, 0, 579, 0, 0, 580, 0, 0, 0, 0, 581, 0, 582, 583, 0, 0, 0, 584, 585,
    0, 586, 0, 587, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 592, 0, 593, 0, 0, 0, 0, 594, 0, 0, 595, 0, 596, 597, 0,
    0, 0, 598, 0, 0, 599, 0, 0, 0, 600, 0, 0, 601, 0, 602, 0, 0, 0, 603, 0, 0, 604, 0, 0, 0, 605, 0, 606, 0, 0, 607, 0,
    608, 0, 0, 609, 0, 0, 0, 610, 0, 0, 611, 0, 612, 613, 0, 614, 0, 0, 615, 0, 0, 616, 0, 0, 0, 617, 0, 0, 618, 0, 619, 620,
    0, 0, 0, 0, 621, 0, 0, 0, 622, 0, 623, 0, 624, 0, 0, 625, 0, 626, 627, 0, 628, 629, 0, 630, 0, 631, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 635, 0, 0, 636, 0, 637, 0,
    0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 641, 0, 642, 0, 643, 0, 644, 0,
    645, 0, 0, 0, 0, 646, 647, 0, 648, 0, 649, 0, 650, 0, 651, 0, 652, 0, 653, 0, 0, 0, 654, 0, 0, 0, 655, 0, 656, 0, 657, 0,
    0, 658, 0, 659, 660, 0, 661, 0, 662, 0, 0, 663, 0, 664, 0, 665, 0, 666, 0, 0, 0, 0, 0, 667, 0, 0, 668, 669, 0, 670, 0, 671,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0,
    0, 0, 0, 0, 674, 0, 0, 0, 675, 0, 0, 676, 0, 0, 677, 0, 678, 679, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 681, 0, 0,
    0, 682, 0, 0, 683, 0, 684, 0, 685, 0, 686, 0, 0, 687, 0, 0, 688, 0, 689, 690, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0,
    0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0,
    696, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 700, 0, 0, 0, 701, 0, 702,
    0, 703, 0, 0, 704, 0, 705, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 707, 0, 0, 708, 0, 709, 710, 0, 0, 711, 0, 0, 712,
    0, 0, 0, 0, 713, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 716, 0, 0, 717, 0, 0, 0, 0, 0, 0, 718,
    0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 721, 0, 0, 0, 722, 0, 723, 0, 0, 724, 0, 725, 0, 726,
    0, 0, 0, 727, 0, 0, 728, 0, 0, 729, 0, 0, 730, 0, 731, 0, 0, 732, 0, 733, 0, 0, 0, 734, 0, 0, 735, 0, 0, 0, 736, 0,
    0, 737, 0, 0, 738, 0, 739, 0, 0, 740, 0, 741, 0, 742, 0, 743, 0, 744, 0, 745, 0, 0, 0, 0, 0, 0, 746, 0, 0, 747, 0, 0,
    0, 748, 0, 0, 749, 0, 750, 751, 0, 752, 0, 753, 0, 0, 0, 0, 754, 0, 0, 0, 0, 755, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 760, 0, 0, 0, 761, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0,
    765, 0, 0, 766, 0, 0, 0, 0, 0, 767, 0, 0, 768, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 771,
    0, 0, 0, 0, 0, 772, 0, 0, 773, 0, 0, 774, 0, 775, 0, 0, 776, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 778, 0, 0,
    0, 0, 779, 0, 0, 780, 0, 781, 0, 0, 0, 0, 0, 782, 0, 0, 783, 784, 0, 785, 0, 786, 0, 0, 0, 0, 787, 0, 788, 0, 0, 0,
    789, 0, 0, 790, 0, 791, 0, 0, 0, 792, 0, 793, 0, 0, 0, 0, 0, 0, 794, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 795, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 798, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 799, 800, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 804, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0,
    0, 0, 0, 0, 0, 806, 0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 0, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0,
    0, 810, 0, 0, 0, 0, 0, 811, 0, 0, 0, 0, 0, 0, 0, 812, 0, 0, 813, 0, 0, 0, 0, 0, 814, 0, 0, 815, 0, 0, 0, 0,
    816, 0, 0, 0, 0, 0, 0, 0, 0, 817, 0, 0, 0, 0, 0, 0, 818, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 820, 0, 821, 0, 822, 0, 823, 0, 0, 0, 0, 0, 0, 824, 0, 0, 0, 825, 0, 0, 0, 826, 0, 827, 0, 0, 828, 0, 0, 829,
    0, 830, 0, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 834, 835,
    0, 836, 0, 0, 0, 0, 0, 0, 0, 837, 0, 0, 0, 0, 0, 0, 0, 0, 0, 838, 839, 0, 840, 0, 0, 0, 0, 0, 0, 0, 841, 0,
    0, 0, 0, 842, 843, 0, 844, 0, 0, 0, 0, 0, 0, 845, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    846, 0, 0, 0, 0, 0, 0, 0, 847, 0, 0, 0, 848, 0, 0, 849, 0, 0, 850, 0, 851, 852, 0, 0, 0, 0, 0, 0, 0, 853, 0, 0,
    0, 854, 0, 0, 0, 855, 0, 0, 856, 0, 857, 0, 858, 0, 859, 0, 0, 860, 0, 0, 861, 0, 862, 863, 0, 0, 0, 0, 0, 0, 864, 0,
    0, 0, 0, 0, 0, 0, 0, 865, 0, 0, 0, 0, 0, 0, 0, 0, 0, 866, 0, 867, 0, 0, 0, 868, 0, 0, 0, 869, 0, 0, 870, 0,
    0, 871, 0, 0, 0, 0, 0, 0, 0, 0, 872, 0, 0, 873, 0, 0, 874, 0, 875, 0, 0, 0, 0, 0, 0, 876, 877, 0, 878, 0, 879, 0,
    0, 880, 0, 0, 0, 0, 0, 0, 0, 0, 881, 0, 0, 882, 0, 0, 883, 0, 884, 0, 0, 0, 0, 0, 0, 885, 886, 0, 887, 0, 0, 0,
    0, 0, 0, 888, 0, 0, 889, 0, 0, 0, 890, 0, 0, 0, 891, 0, 892, 0, 0, 0, 893, 0, 0, 0, 0, 894, 895, 0, 896, 897, 0, 898,
    0, 0, 899, 0, 0, 0, 900, 0, 901, 0, 0, 902, 0, 0, 0, 903, 0, 0, 0, 904, 0, 905, 0, 0, 0, 0, 906, 0, 0, 0, 0, 907,
    0, 908, 0, 0, 0, 909, 0, 910, 0, 0, 0, 0, 911, 0, 912, 0, 0, 0, 913, 0, 914, 915, 0, 0, 916, 0, 0, 0, 917, 0, 918, 0,
    0, 0, 0, 919, 0, 920, 0, 0, 0, 921, 0, 922, 923, 0, 0, 924, 0, 0, 0, 0, 925, 0, 0, 0, 0, 926, 0, 927, 0, 0, 0, 0,
    928, 0, 0, 929, 0, 0, 0, 930, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 931,
};
void recomp_unit_0189_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AF8000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0189[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AF8000;
    case 2u: goto L_08AF800C;
    case 3u: goto L_08AF801C;
    case 4u: goto L_08AF802C;
    case 5u: goto L_08AF8040;
    case 6u: goto L_08AF805C;
    case 7u: goto L_08AF8080;
    case 8u: goto L_08AF8090;
    case 9u: goto L_08AF809C;
    case 10u: goto L_08AF80B8;
    case 11u: goto L_08AF80C8;
    case 12u: goto L_08AF80D8;
    case 13u: goto L_08AF80F4;
    case 14u: goto L_08AF80F8;
    case 15u: goto L_08AF8104;
    case 16u: goto L_08AF8124;
    case 17u: goto L_08AF8138;
    case 18u: goto L_08AF8144;
    case 19u: goto L_08AF8160;
    case 20u: goto L_08AF8168;
    case 21u: goto L_08AF8178;
    case 22u: goto L_08AF8194;
    case 23u: goto L_08AF81B4;
    case 24u: goto L_08AF81C4;
    case 25u: goto L_08AF81E0;
    case 26u: goto L_08AF81F4;
    case 27u: goto L_08AF8208;
    case 28u: goto L_08AF8224;
    case 29u: goto L_08AF8248;
    case 30u: goto L_08AF8258;
    case 31u: goto L_08AF8264;
    case 32u: goto L_08AF8280;
    case 33u: goto L_08AF8290;
    case 34u: goto L_08AF82A0;
    case 35u: goto L_08AF82BC;
    case 36u: goto L_08AF82C4;
    case 37u: goto L_08AF8310;
    case 38u: goto L_08AF8324;
    case 39u: goto L_08AF8334;
    case 40u: goto L_08AF8350;
    case 41u: goto L_08AF8360;
    case 42u: goto L_08AF8380;
    case 43u: goto L_08AF83D0;
    case 44u: goto L_08AF83D4;
    case 45u: goto L_08AF83E4;
    case 46u: goto L_08AF83F0;
    case 47u: goto L_08AF83F4;
    case 48u: goto L_08AF8474;
    case 49u: goto L_08AF84C0;
    case 50u: goto L_08AF84D4;
    case 51u: goto L_08AF8560;
    case 52u: goto L_08AF8570;
    case 53u: goto L_08AF85B4;
    case 54u: goto L_08AF85C0;
    case 55u: goto L_08AF85DC;
    case 56u: goto L_08AF85E4;
    case 57u: goto L_08AF85EC;
    case 58u: goto L_08AF8608;
    case 59u: goto L_08AF8618;
    case 60u: goto L_08AF8630;
    case 61u: goto L_08AF8638;
    case 62u: goto L_08AF8644;
    case 63u: goto L_08AF8670;
    case 64u: goto L_08AF868C;
    case 65u: goto L_08AF8694;
    case 66u: goto L_08AF86A0;
    case 67u: goto L_08AF86B0;
    case 68u: goto L_08AF86B8;
    case 69u: goto L_08AF86C0;
    case 70u: goto L_08AF86CC;
    case 71u: goto L_08AF86EC;
    case 72u: goto L_08AF86F4;
    case 73u: goto L_08AF870C;
    case 74u: goto L_08AF8714;
    case 75u: goto L_08AF8734;
    case 76u: goto L_08AF873C;
    case 77u: goto L_08AF8744;
    case 78u: goto L_08AF876C;
    case 79u: goto L_08AF8774;
    case 80u: goto L_08AF8780;
    case 81u: goto L_08AF87A8;
    case 82u: goto L_08AF87B0;
    case 83u: goto L_08AF87BC;
    case 84u: goto L_08AF8804;
    case 85u: goto L_08AF880C;
    case 86u: goto L_08AF8810;
    case 87u: goto L_08AF8820;
    case 88u: goto L_08AF8840;
    case 89u: goto L_08AF885C;
    case 90u: goto L_08AF8864;
    case 91u: goto L_08AF8870;
    case 92u: goto L_08AF88B0;
    case 93u: goto L_08AF88B8;
    case 94u: goto L_08AF88BC;
    case 95u: goto L_08AF88CC;
    case 96u: goto L_08AF891C;
    case 97u: goto L_08AF8924;
    case 98u: goto L_08AF8928;
    case 99u: goto L_08AF8938;
    case 100u: goto L_08AF8958;
    case 101u: goto L_08AF895C;
    case 102u: goto L_08AF8964;
    case 103u: goto L_08AF896C;
    case 104u: goto L_08AF8974;
    case 105u: goto L_08AF89A4;
    case 106u: goto L_08AF89AC;
    case 107u: goto L_08AF89B0;
    case 108u: goto L_08AF89C0;
    case 109u: goto L_08AF89F0;
    case 110u: goto L_08AF89F8;
    case 111u: goto L_08AF89FC;
    case 112u: goto L_08AF8A0C;
    case 113u: goto L_08AF8A34;
    case 114u: goto L_08AF8A3C;
    case 115u: goto L_08AF8A48;
    case 116u: goto L_08AF8A80;
    case 117u: goto L_08AF8A8C;
    case 118u: goto L_08AF8AA4;
    case 119u: goto L_08AF8AC4;
    case 120u: goto L_08AF8ACC;
    case 121u: goto L_08AF8AD4;
    case 122u: goto L_08AF8AF0;
    case 123u: goto L_08AF8AF4;
    case 124u: goto L_08AF8B10;
    case 125u: goto L_08AF8B64;
    case 126u: goto L_08AF8B6C;
    case 127u: goto L_08AF8B74;
    case 128u: goto L_08AF8B80;
    case 129u: goto L_08AF8B88;
    case 130u: goto L_08AF8BB8;
    case 131u: goto L_08AF8BC0;
    case 132u: goto L_08AF8BC4;
    case 133u: goto L_08AF8BD0;
    case 134u: goto L_08AF8BEC;
    case 135u: goto L_08AF8C00;
    case 136u: goto L_08AF8C0C;
    case 137u: goto L_08AF8C18;
    case 138u: goto L_08AF8C24;
    case 139u: goto L_08AF8C2C;
    case 140u: goto L_08AF8C30;
    case 141u: goto L_08AF8C44;
    case 142u: goto L_08AF8C4C;
    case 143u: goto L_08AF8C64;
    case 144u: goto L_08AF8C68;
    case 145u: goto L_08AF8C7C;
    case 146u: goto L_08AF8C80;
    case 147u: goto L_08AF8C94;
    case 148u: goto L_08AF8CA4;
    case 149u: goto L_08AF8CC0;
    case 150u: goto L_08AF8CDC;
    case 151u: goto L_08AF8CF8;
    case 152u: goto L_08AF8D04;
    case 153u: goto L_08AF8D1C;
    case 154u: goto L_08AF8D24;
    case 155u: goto L_08AF8D30;
    case 156u: goto L_08AF8D3C;
    case 157u: goto L_08AF8D4C;
    case 158u: goto L_08AF8D54;
    case 159u: goto L_08AF8D60;
    case 160u: goto L_08AF8D6C;
    case 161u: goto L_08AF8D74;
    case 162u: goto L_08AF8D88;
    case 163u: goto L_08AF8D90;
    case 164u: goto L_08AF8D98;
    case 165u: goto L_08AF8DA8;
    case 166u: goto L_08AF8DAC;
    case 167u: goto L_08AF8DCC;
    case 168u: goto L_08AF8DDC;
    case 169u: goto L_08AF8DEC;
    case 170u: goto L_08AF8DF4;
    case 171u: goto L_08AF8E00;
    case 172u: goto L_08AF8E0C;
    case 173u: goto L_08AF8E18;
    case 174u: goto L_08AF8E24;
    case 175u: goto L_08AF8E28;
    case 176u: goto L_08AF8E34;
    case 177u: goto L_08AF8E40;
    case 178u: goto L_08AF8E64;
    case 179u: goto L_08AF8E6C;
    case 180u: goto L_08AF8E74;
    case 181u: goto L_08AF8E7C;
    case 182u: goto L_08AF8E84;
    case 183u: goto L_08AF8E90;
    case 184u: goto L_08AF8E9C;
    case 185u: goto L_08AF8EA4;
    case 186u: goto L_08AF8EB0;
    case 187u: goto L_08AF8EBC;
    case 188u: goto L_08AF8EC4;
    case 189u: goto L_08AF8ECC;
    case 190u: goto L_08AF8EDC;
    case 191u: goto L_08AF8EEC;
    case 192u: goto L_08AF8F0C;
    case 193u: goto L_08AF8F1C;
    case 194u: goto L_08AF8F2C;
    case 195u: goto L_08AF8F38;
    case 196u: goto L_08AF8F4C;
    case 197u: goto L_08AF8F54;
    case 198u: goto L_08AF8F60;
    case 199u: goto L_08AF8F6C;
    case 200u: goto L_08AF8F74;
    case 201u: goto L_08AF8F88;
    case 202u: goto L_08AF8F8C;
    case 203u: goto L_08AF8FAC;
    case 204u: goto L_08AF8FB8;
    case 205u: goto L_08AF8FC4;
    case 206u: goto L_08AF8FD0;
    case 207u: goto L_08AF8FDC;
    case 208u: goto L_08AF8FE8;
    case 209u: goto L_08AF8FF4;
    case 210u: goto L_08AF8FFC;
    case 211u: goto L_08AF9004;
    case 212u: goto L_08AF9014;
    case 213u: goto L_08AF9030;
    case 214u: goto L_08AF9038;
    case 215u: goto L_08AF9040;
    case 216u: goto L_08AF9050;
    case 217u: goto L_08AF9054;
    case 218u: goto L_08AF9064;
    case 219u: goto L_08AF9070;
    case 220u: goto L_08AF908C;
    case 221u: goto L_08AF9098;
    case 222u: goto L_08AF90A0;
    case 223u: goto L_08AF90AC;
    case 224u: goto L_08AF90C4;
    case 225u: goto L_08AF90CC;
    case 226u: goto L_08AF90D4;
    case 227u: goto L_08AF90E0;
    case 228u: goto L_08AF90F0;
    case 229u: goto L_08AF9104;
    case 230u: goto L_08AF9110;
    case 231u: goto L_08AF912C;
    case 232u: goto L_08AF9134;
    case 233u: goto L_08AF915C;
    case 234u: goto L_08AF9168;
    case 235u: goto L_08AF917C;
    case 236u: goto L_08AF9184;
    case 237u: goto L_08AF918C;
    case 238u: goto L_08AF9198;
    case 239u: goto L_08AF91B0;
    case 240u: goto L_08AF91DC;
    case 241u: goto L_08AF91F8;
    case 242u: goto L_08AF91FC;
    case 243u: goto L_08AF9200;
    case 244u: goto L_08AF920C;
    case 245u: goto L_08AF9214;
    case 246u: goto L_08AF921C;
    case 247u: goto L_08AF9240;
    case 248u: goto L_08AF9248;
    case 249u: goto L_08AF9254;
    case 250u: goto L_08AF9260;
    case 251u: goto L_08AF9284;
    case 252u: goto L_08AF9290;
    case 253u: goto L_08AF92AC;
    case 254u: goto L_08AF92B0;
    case 255u: goto L_08AF92B8;
    case 256u: goto L_08AF92D0;
    case 257u: goto L_08AF92DC;
    case 258u: goto L_08AF9304;
    case 259u: goto L_08AF930C;
    case 260u: goto L_08AF9318;
    case 261u: goto L_08AF9324;
    case 262u: goto L_08AF932C;
    case 263u: goto L_08AF9334;
    case 264u: goto L_08AF9340;
    case 265u: goto L_08AF9350;
    case 266u: goto L_08AF9380;
    case 267u: goto L_08AF9388;
    case 268u: goto L_08AF93A4;
    case 269u: goto L_08AF93BC;
    case 270u: goto L_08AF93C8;
    case 271u: goto L_08AF9404;
    case 272u: goto L_08AF9424;
    case 273u: goto L_08AF942C;
    case 274u: goto L_08AF9434;
    case 275u: goto L_08AF9440;
    case 276u: goto L_08AF945C;
    case 277u: goto L_08AF9468;
    case 278u: goto L_08AF946C;
    case 279u: goto L_08AF9484;
    case 280u: goto L_08AF948C;
    case 281u: goto L_08AF9498;
    case 282u: goto L_08AF94CC;
    case 283u: goto L_08AF94E8;
    case 284u: goto L_08AF94F0;
    case 285u: goto L_08AF94F8;
    case 286u: goto L_08AF9504;
    case 287u: goto L_08AF9518;
    case 288u: goto L_08AF9524;
    case 289u: goto L_08AF9528;
    case 290u: goto L_08AF9540;
    case 291u: goto L_08AF9548;
    case 292u: goto L_08AF9554;
    case 293u: goto L_08AF9568;
    case 294u: goto L_08AF9570;
    case 295u: goto L_08AF9578;
    case 296u: goto L_08AF9580;
    case 297u: goto L_08AF9590;
    case 298u: goto L_08AF95B8;
    case 299u: goto L_08AF95C0;
    case 300u: goto L_08AF95CC;
    case 301u: goto L_08AF95D4;
    case 302u: goto L_08AF95D8;
    case 303u: goto L_08AF95E4;
    case 304u: goto L_08AF95F0;
    case 305u: goto L_08AF95F8;
    case 306u: goto L_08AF9634;
    case 307u: goto L_08AF9650;
    case 308u: goto L_08AF9668;
    case 309u: goto L_08AF9684;
    case 310u: goto L_08AF9694;
    case 311u: goto L_08AF96AC;
    case 312u: goto L_08AF96BC;
    case 313u: goto L_08AF96CC;
    case 314u: goto L_08AF96E0;
    case 315u: goto L_08AF96E4;
    case 316u: goto L_08AF9704;
    case 317u: goto L_08AF9714;
    case 318u: goto L_08AF9724;
    case 319u: goto L_08AF9748;
    case 320u: goto L_08AF9760;
    case 321u: goto L_08AF9774;
    case 322u: goto L_08AF9780;
    case 323u: goto L_08AF979C;
    case 324u: goto L_08AF97A8;
    case 325u: goto L_08AF97B0;
    case 326u: goto L_08AF97B4;
    case 327u: goto L_08AF97C0;
    case 328u: goto L_08AF97CC;
    case 329u: goto L_08AF97E0;
    case 330u: goto L_08AF97FC;
    case 331u: goto L_08AF9808;
    case 332u: goto L_08AF9810;
    case 333u: goto L_08AF9814;
    case 334u: goto L_08AF9820;
    case 335u: goto L_08AF982C;
    case 336u: goto L_08AF9840;
    case 337u: goto L_08AF9854;
    case 338u: goto L_08AF986C;
    case 339u: goto L_08AF9874;
    case 340u: goto L_08AF987C;
    case 341u: goto L_08AF9890;
    case 342u: goto L_08AF9898;
    case 343u: goto L_08AF98A0;
    case 344u: goto L_08AF98B8;
    case 345u: goto L_08AF98C0;
    case 346u: goto L_08AF98C8;
    case 347u: goto L_08AF98D4;
    case 348u: goto L_08AF98E0;
    case 349u: goto L_08AF98FC;
    case 350u: goto L_08AF9904;
    case 351u: goto L_08AF990C;
    case 352u: goto L_08AF9914;
    case 353u: goto L_08AF991C;
    case 354u: goto L_08AF992C;
    case 355u: goto L_08AF993C;
    case 356u: goto L_08AF9944;
    case 357u: goto L_08AF994C;
    case 358u: goto L_08AF995C;
    case 359u: goto L_08AF9964;
    case 360u: goto L_08AF9980;
    case 361u: goto L_08AF999C;
    case 362u: goto L_08AF99A4;
    case 363u: goto L_08AF99B4;
    case 364u: goto L_08AF99C0;
    case 365u: goto L_08AF99C8;
    case 366u: goto L_08AF99CC;
    case 367u: goto L_08AF99D4;
    case 368u: goto L_08AF99DC;
    case 369u: goto L_08AF99F0;
    case 370u: goto L_08AF9A08;
    case 371u: goto L_08AF9A10;
    case 372u: goto L_08AF9A24;
    case 373u: goto L_08AF9A2C;
    case 374u: goto L_08AF9A3C;
    case 375u: goto L_08AF9A48;
    case 376u: goto L_08AF9A50;
    case 377u: goto L_08AF9A60;
    case 378u: goto L_08AF9A68;
    case 379u: goto L_08AF9A74;
    case 380u: goto L_08AF9A8C;
    case 381u: goto L_08AF9A94;
    case 382u: goto L_08AF9A9C;
    case 383u: goto L_08AF9AC4;
    case 384u: goto L_08AF9AE8;
    case 385u: goto L_08AF9B0C;
    case 386u: goto L_08AF9B34;
    case 387u: goto L_08AF9B60;
    case 388u: goto L_08AF9B84;
    case 389u: goto L_08AF9B94;
    case 390u: goto L_08AF9B9C;
    case 391u: goto L_08AF9BAC;
    case 392u: goto L_08AF9BB8;
    case 393u: goto L_08AF9BC0;
    case 394u: goto L_08AF9BEC;
    case 395u: goto L_08AF9C18;
    case 396u: goto L_08AF9C28;
    case 397u: goto L_08AF9C48;
    case 398u: goto L_08AF9C50;
    case 399u: goto L_08AF9C6C;
    case 400u: goto L_08AF9C90;
    case 401u: goto L_08AF9CA0;
    case 402u: goto L_08AF9CB0;
    case 403u: goto L_08AF9CB8;
    case 404u: goto L_08AF9CC4;
    case 405u: goto L_08AF9CD4;
    case 406u: goto L_08AF9CDC;
    case 407u: goto L_08AF9CE4;
    case 408u: goto L_08AF9D1C;
    case 409u: goto L_08AF9D30;
    case 410u: goto L_08AF9D4C;
    case 411u: goto L_08AF9D54;
    case 412u: goto L_08AF9D68;
    case 413u: goto L_08AF9D7C;
    case 414u: goto L_08AF9D90;
    case 415u: goto L_08AF9DA4;
    case 416u: goto L_08AF9DB8;
    case 417u: goto L_08AF9DC0;
    case 418u: goto L_08AF9DE0;
    case 419u: goto L_08AF9DF0;
    case 420u: goto L_08AF9E00;
    case 421u: goto L_08AF9E08;
    case 422u: goto L_08AF9E0C;
    case 423u: goto L_08AF9E14;
    case 424u: goto L_08AF9E38;
    case 425u: goto L_08AF9E5C;
    case 426u: goto L_08AF9E6C;
    case 427u: goto L_08AF9E94;
    case 428u: goto L_08AF9EA4;
    case 429u: goto L_08AF9ECC;
    case 430u: goto L_08AF9EF0;
    case 431u: goto L_08AF9F18;
    case 432u: goto L_08AF9F20;
    case 433u: goto L_08AF9F28;
    case 434u: goto L_08AF9F30;
    case 435u: goto L_08AF9F38;
    case 436u: goto L_08AF9F40;
    case 437u: goto L_08AF9F48;
    case 438u: goto L_08AF9F50;
    case 439u: goto L_08AF9F58;
    case 440u: goto L_08AF9F60;
    case 441u: goto L_08AF9F78;
    case 442u: goto L_08AF9F84;
    case 443u: goto L_08AF9FA8;
    case 444u: goto L_08AF9FB4;
    case 445u: goto L_08AFA028;
    case 446u: goto L_08AFA0A8;
    case 447u: goto L_08AFA0B0;
    case 448u: goto L_08AFA0D4;
    case 449u: goto L_08AFA0F8;
    case 450u: goto L_08AFA100;
    case 451u: goto L_08AFA110;
    case 452u: goto L_08AFA118;
    case 453u: goto L_08AFA13C;
    case 454u: goto L_08AFA14C;
    case 455u: goto L_08AFA154;
    case 456u: goto L_08AFA15C;
    case 457u: goto L_08AFA164;
    case 458u: goto L_08AFA16C;
    case 459u: goto L_08AFA174;
    case 460u: goto L_08AFA180;
    case 461u: goto L_08AFA18C;
    case 462u: goto L_08AFA1A0;
    case 463u: goto L_08AFA1A4;
    case 464u: goto L_08AFA1AC;
    case 465u: goto L_08AFA1B4;
    case 466u: goto L_08AFA1D0;
    case 467u: goto L_08AFA1E4;
    case 468u: goto L_08AFA1EC;
    case 469u: goto L_08AFA1F4;
    case 470u: goto L_08AFA218;
    case 471u: goto L_08AFA220;
    case 472u: goto L_08AFA22C;
    case 473u: goto L_08AFA234;
    case 474u: goto L_08AFA23C;
    case 475u: goto L_08AFA240;
    case 476u: goto L_08AFA248;
    case 477u: goto L_08AFA260;
    case 478u: goto L_08AFA268;
    case 479u: goto L_08AFA288;
    case 480u: goto L_08AFA294;
    case 481u: goto L_08AFA2A0;
    case 482u: goto L_08AFA2AC;
    case 483u: goto L_08AFA2B4;
    case 484u: goto L_08AFA2C0;
    case 485u: goto L_08AFA2C8;
    case 486u: goto L_08AFA2E4;
    case 487u: goto L_08AFA300;
    case 488u: goto L_08AFA308;
    case 489u: goto L_08AFA318;
    case 490u: goto L_08AFA324;
    case 491u: goto L_08AFA32C;
    case 492u: goto L_08AFA330;
    case 493u: goto L_08AFA338;
    case 494u: goto L_08AFA340;
    case 495u: goto L_08AFA354;
    case 496u: goto L_08AFA364;
    case 497u: goto L_08AFA380;
    case 498u: goto L_08AFA388;
    case 499u: goto L_08AFA39C;
    case 500u: goto L_08AFA3C0;
    case 501u: goto L_08AFA3D0;
    case 502u: goto L_08AFA3E4;
    case 503u: goto L_08AFA3EC;
    case 504u: goto L_08AFA3F8;
    case 505u: goto L_08AFA408;
    case 506u: goto L_08AFA420;
    case 507u: goto L_08AFA42C;
    case 508u: goto L_08AFA438;
    case 509u: goto L_08AFA440;
    case 510u: goto L_08AFA44C;
    case 511u: goto L_08AFA468;
    case 512u: goto L_08AFA480;
    case 513u: goto L_08AFA488;
    case 514u: goto L_08AFA4A0;
    case 515u: goto L_08AFA4AC;
    case 516u: goto L_08AFA4B0;
    case 517u: goto L_08AFA4B8;
    case 518u: goto L_08AFA4C0;
    case 519u: goto L_08AFA4D4;
    case 520u: goto L_08AFA4F0;
    case 521u: goto L_08AFA504;
    case 522u: goto L_08AFA514;
    case 523u: goto L_08AFA518;
    case 524u: goto L_08AFA520;
    case 525u: goto L_08AFA528;
    case 526u: goto L_08AFA53C;
    case 527u: goto L_08AFA558;
    case 528u: goto L_08AFA564;
    case 529u: goto L_08AFA56C;
    case 530u: goto L_08AFA570;
    case 531u: goto L_08AFA57C;
    case 532u: goto L_08AFA588;
    case 533u: goto L_08AFA59C;
    case 534u: goto L_08AFA5B8;
    case 535u: goto L_08AFA5C4;
    case 536u: goto L_08AFA5CC;
    case 537u: goto L_08AFA5D0;
    case 538u: goto L_08AFA5DC;
    case 539u: goto L_08AFA5E8;
    case 540u: goto L_08AFA5FC;
    case 541u: goto L_08AFA638;
    case 542u: goto L_08AFA660;
    case 543u: goto L_08AFA688;
    case 544u: goto L_08AFA698;
    case 545u: goto L_08AFA6B0;
    case 546u: goto L_08AFA6BC;
    case 547u: goto L_08AFA6C8;
    case 548u: goto L_08AFA6D0;
    case 549u: goto L_08AFA6DC;
    case 550u: goto L_08AFA6F8;
    case 551u: goto L_08AFA704;
    case 552u: goto L_08AFA70C;
    case 553u: goto L_08AFA710;
    case 554u: goto L_08AFA71C;
    case 555u: goto L_08AFA728;
    case 556u: goto L_08AFA73C;
    case 557u: goto L_08AFA788;
    case 558u: goto L_08AFA798;
    case 559u: goto L_08AFA7A4;
    case 560u: goto L_08AFA7AC;
    case 561u: goto L_08AFA7C4;
    case 562u: goto L_08AFA7DC;
    case 563u: goto L_08AFA7F0;
    case 564u: goto L_08AFA800;
    case 565u: goto L_08AFA810;
    case 566u: goto L_08AFA81C;
    case 567u: goto L_08AFA830;
    case 568u: goto L_08AFA838;
    case 569u: goto L_08AFA848;
    case 570u: goto L_08AFA854;
    case 571u: goto L_08AFA864;
    case 572u: goto L_08AFA870;
    case 573u: goto L_08AFA878;
    case 574u: goto L_08AFA884;
    case 575u: goto L_08AFA898;
    case 576u: goto L_08AFA8A0;
    case 577u: goto L_08AFA8A4;
    case 578u: goto L_08AFA8AC;
    case 579u: goto L_08AFA8BC;
    case 580u: goto L_08AFA8C8;
    case 581u: goto L_08AFA8DC;
    case 582u: goto L_08AFA8E4;
    case 583u: goto L_08AFA8E8;
    case 584u: goto L_08AFA8F8;
    case 585u: goto L_08AFA8FC;
    case 586u: goto L_08AFA904;
    case 587u: goto L_08AFA90C;
    case 588u: goto L_08AFA914;
    case 589u: goto L_08AFA944;
    case 590u: goto L_08AFA9A8;
    case 591u: goto L_08AFA9B8;
    case 592u: goto L_08AFA9C4;
    case 593u: goto L_08AFA9CC;
    case 594u: goto L_08AFA9E0;
    case 595u: goto L_08AFA9EC;
    case 596u: goto L_08AFA9F4;
    case 597u: goto L_08AFA9F8;
    case 598u: goto L_08AFAA08;
    case 599u: goto L_08AFAA14;
    case 600u: goto L_08AFAA24;
    case 601u: goto L_08AFAA30;
    case 602u: goto L_08AFAA38;
    case 603u: goto L_08AFAA48;
    case 604u: goto L_08AFAA54;
    case 605u: goto L_08AFAA64;
    case 606u: goto L_08AFAA6C;
    case 607u: goto L_08AFAA78;
    case 608u: goto L_08AFAA80;
    case 609u: goto L_08AFAA8C;
    case 610u: goto L_08AFAA9C;
    case 611u: goto L_08AFAAA8;
    case 612u: goto L_08AFAAB0;
    case 613u: goto L_08AFAAB4;
    case 614u: goto L_08AFAABC;
    case 615u: goto L_08AFAAC8;
    case 616u: goto L_08AFAAD4;
    case 617u: goto L_08AFAAE4;
    case 618u: goto L_08AFAAF0;
    case 619u: goto L_08AFAAF8;
    case 620u: goto L_08AFAAFC;
    case 621u: goto L_08AFAB10;
    case 622u: goto L_08AFAB20;
    case 623u: goto L_08AFAB28;
    case 624u: goto L_08AFAB30;
    case 625u: goto L_08AFAB3C;
    case 626u: goto L_08AFAB44;
    case 627u: goto L_08AFAB48;
    case 628u: goto L_08AFAB50;
    case 629u: goto L_08AFAB54;
    case 630u: goto L_08AFAB5C;
    case 631u: goto L_08AFAB64;
    case 632u: goto L_08AFABB0;
    case 633u: goto L_08AFABC0;
    case 634u: goto L_08AFABD8;
    case 635u: goto L_08AFABE4;
    case 636u: goto L_08AFABF0;
    case 637u: goto L_08AFABF8;
    case 638u: goto L_08AFAC04;
    case 639u: goto L_08AFAC34;
    case 640u: goto L_08AFAC50;
    case 641u: goto L_08AFAC60;
    case 642u: goto L_08AFAC68;
    case 643u: goto L_08AFAC70;
    case 644u: goto L_08AFAC78;
    case 645u: goto L_08AFAC80;
    case 646u: goto L_08AFAC94;
    case 647u: goto L_08AFAC98;
    case 648u: goto L_08AFACA0;
    case 649u: goto L_08AFACA8;
    case 650u: goto L_08AFACB0;
    case 651u: goto L_08AFACB8;
    case 652u: goto L_08AFACC0;
    case 653u: goto L_08AFACC8;
    case 654u: goto L_08AFACD8;
    case 655u: goto L_08AFACE8;
    case 656u: goto L_08AFACF0;
    case 657u: goto L_08AFACF8;
    case 658u: goto L_08AFAD04;
    case 659u: goto L_08AFAD0C;
    case 660u: goto L_08AFAD10;
    case 661u: goto L_08AFAD18;
    case 662u: goto L_08AFAD20;
    case 663u: goto L_08AFAD2C;
    case 664u: goto L_08AFAD34;
    case 665u: goto L_08AFAD3C;
    case 666u: goto L_08AFAD44;
    case 667u: goto L_08AFAD5C;
    case 668u: goto L_08AFAD68;
    case 669u: goto L_08AFAD6C;
    case 670u: goto L_08AFAD74;
    case 671u: goto L_08AFAD7C;
    case 672u: goto L_08AFADA4;
    case 673u: goto L_08AFADF0;
    case 674u: goto L_08AFAE10;
    case 675u: goto L_08AFAE20;
    case 676u: goto L_08AFAE2C;
    case 677u: goto L_08AFAE38;
    case 678u: goto L_08AFAE40;
    case 679u: goto L_08AFAE44;
    case 680u: goto L_08AFAE64;
    case 681u: goto L_08AFAE74;
    case 682u: goto L_08AFAE84;
    case 683u: goto L_08AFAE90;
    case 684u: goto L_08AFAE98;
    case 685u: goto L_08AFAEA0;
    case 686u: goto L_08AFAEA8;
    case 687u: goto L_08AFAEB4;
    case 688u: goto L_08AFAEC0;
    case 689u: goto L_08AFAEC8;
    case 690u: goto L_08AFAECC;
    case 691u: goto L_08AFAEE8;
    case 692u: goto L_08AFAF0C;
    case 693u: goto L_08AFAF40;
    case 694u: goto L_08AFAF50;
    case 695u: goto L_08AFAF68;
    case 696u: goto L_08AFAF80;
    case 697u: goto L_08AFAFA0;
    case 698u: goto L_08AFAFB4;
    case 699u: goto L_08AFAFD0;
    case 700u: goto L_08AFAFE4;
    case 701u: goto L_08AFAFF4;
    case 702u: goto L_08AFAFFC;
    case 703u: goto L_08AFB004;
    case 704u: goto L_08AFB010;
    case 705u: goto L_08AFB018;
    case 706u: goto L_08AFB030;
    case 707u: goto L_08AFB04C;
    case 708u: goto L_08AFB058;
    case 709u: goto L_08AFB060;
    case 710u: goto L_08AFB064;
    case 711u: goto L_08AFB070;
    case 712u: goto L_08AFB07C;
    case 713u: goto L_08AFB090;
    case 714u: goto L_08AFB0A4;
    case 715u: goto L_08AFB0CC;
    case 716u: goto L_08AFB0D4;
    case 717u: goto L_08AFB0E0;
    case 718u: goto L_08AFB0FC;
    case 719u: goto L_08AFB11C;
    case 720u: goto L_08AFB138;
    case 721u: goto L_08AFB148;
    case 722u: goto L_08AFB158;
    case 723u: goto L_08AFB160;
    case 724u: goto L_08AFB16C;
    case 725u: goto L_08AFB174;
    case 726u: goto L_08AFB17C;
    case 727u: goto L_08AFB18C;
    case 728u: goto L_08AFB198;
    case 729u: goto L_08AFB1A4;
    case 730u: goto L_08AFB1B0;
    case 731u: goto L_08AFB1B8;
    case 732u: goto L_08AFB1C4;
    case 733u: goto L_08AFB1CC;
    case 734u: goto L_08AFB1DC;
    case 735u: goto L_08AFB1E8;
    case 736u: goto L_08AFB1F8;
    case 737u: goto L_08AFB204;
    case 738u: goto L_08AFB210;
    case 739u: goto L_08AFB218;
    case 740u: goto L_08AFB224;
    case 741u: goto L_08AFB22C;
    case 742u: goto L_08AFB234;
    case 743u: goto L_08AFB23C;
    case 744u: goto L_08AFB244;
    case 745u: goto L_08AFB24C;
    case 746u: goto L_08AFB268;
    case 747u: goto L_08AFB274;
    case 748u: goto L_08AFB284;
    case 749u: goto L_08AFB290;
    case 750u: goto L_08AFB298;
    case 751u: goto L_08AFB29C;
    case 752u: goto L_08AFB2A4;
    case 753u: goto L_08AFB2AC;
    case 754u: goto L_08AFB2C0;
    case 755u: goto L_08AFB2D4;
    case 756u: goto L_08AFB2E4;
    case 757u: goto L_08AFB314;
    case 758u: goto L_08AFB32C;
    case 759u: goto L_08AFB348;
    case 760u: goto L_08AFB35C;
    case 761u: goto L_08AFB36C;
    case 762u: goto L_08AFB3AC;
    case 763u: goto L_08AFB3C8;
    case 764u: goto L_08AFB3E0;
    case 765u: goto L_08AFB400;
    case 766u: goto L_08AFB40C;
    case 767u: goto L_08AFB424;
    case 768u: goto L_08AFB430;
    case 769u: goto L_08AFB448;
    case 770u: goto L_08AFB46C;
    case 771u: goto L_08AFB47C;
    case 772u: goto L_08AFB494;
    case 773u: goto L_08AFB4A0;
    case 774u: goto L_08AFB4AC;
    case 775u: goto L_08AFB4B4;
    case 776u: goto L_08AFB4C0;
    case 777u: goto L_08AFB4DC;
    case 778u: goto L_08AFB4F4;
    case 779u: goto L_08AFB508;
    case 780u: goto L_08AFB514;
    case 781u: goto L_08AFB51C;
    case 782u: goto L_08AFB534;
    case 783u: goto L_08AFB540;
    case 784u: goto L_08AFB544;
    case 785u: goto L_08AFB54C;
    case 786u: goto L_08AFB554;
    case 787u: goto L_08AFB568;
    case 788u: goto L_08AFB570;
    case 789u: goto L_08AFB580;
    case 790u: goto L_08AFB58C;
    case 791u: goto L_08AFB594;
    case 792u: goto L_08AFB5A4;
    case 793u: goto L_08AFB5AC;
    case 794u: goto L_08AFB5C8;
    case 795u: goto L_08AFB62C;
    case 796u: goto L_08AFB634;
    case 797u: goto L_08AFB660;
    case 798u: goto L_08AFB674;
    case 799u: goto L_08AFB6AC;
    case 800u: goto L_08AFB6B0;
    case 801u: goto L_08AFB6B8;
    case 802u: goto L_08AFB720;
    case 803u: goto L_08AFB744;
    case 804u: goto L_08AFB74C;
    case 805u: goto L_08AFB778;
    case 806u: goto L_08AFB794;
    case 807u: goto L_08AFB79C;
    case 808u: goto L_08AFB7C0;
    case 809u: goto L_08AFB7E8;
    case 810u: goto L_08AFB804;
    case 811u: goto L_08AFB81C;
    case 812u: goto L_08AFB83C;
    case 813u: goto L_08AFB848;
    case 814u: goto L_08AFB860;
    case 815u: goto L_08AFB86C;
    case 816u: goto L_08AFB880;
    case 817u: goto L_08AFB8A4;
    case 818u: goto L_08AFB8C0;
    case 819u: goto L_08AFB8C8;
    case 820u: goto L_08AFB908;
    case 821u: goto L_08AFB910;
    case 822u: goto L_08AFB918;
    case 823u: goto L_08AFB920;
    case 824u: goto L_08AFB93C;
    case 825u: goto L_08AFB94C;
    case 826u: goto L_08AFB95C;
    case 827u: goto L_08AFB964;
    case 828u: goto L_08AFB970;
    case 829u: goto L_08AFB97C;
    case 830u: goto L_08AFB984;
    case 831u: goto L_08AFB990;
    case 832u: goto L_08AFB9BC;
    case 833u: goto L_08AFB9DC;
    case 834u: goto L_08AFB9F8;
    case 835u: goto L_08AFB9FC;
    case 836u: goto L_08AFBA04;
    case 837u: goto L_08AFBA24;
    case 838u: goto L_08AFBA4C;
    case 839u: goto L_08AFBA50;
    case 840u: goto L_08AFBA58;
    case 841u: goto L_08AFBA78;
    case 842u: goto L_08AFBA8C;
    case 843u: goto L_08AFBA90;
    case 844u: goto L_08AFBA98;
    case 845u: goto L_08AFBAB4;
    case 846u: goto L_08AFBB00;
    case 847u: goto L_08AFBB20;
    case 848u: goto L_08AFBB30;
    case 849u: goto L_08AFBB3C;
    case 850u: goto L_08AFBB48;
    case 851u: goto L_08AFBB50;
    case 852u: goto L_08AFBB54;
    case 853u: goto L_08AFBB74;
    case 854u: goto L_08AFBB84;
    case 855u: goto L_08AFBB94;
    case 856u: goto L_08AFBBA0;
    case 857u: goto L_08AFBBA8;
    case 858u: goto L_08AFBBB0;
    case 859u: goto L_08AFBBB8;
    case 860u: goto L_08AFBBC4;
    case 861u: goto L_08AFBBD0;
    case 862u: goto L_08AFBBD8;
    case 863u: goto L_08AFBBDC;
    case 864u: goto L_08AFBBF8;
    case 865u: goto L_08AFBC1C;
    case 866u: goto L_08AFBC44;
    case 867u: goto L_08AFBC4C;
    case 868u: goto L_08AFBC5C;
    case 869u: goto L_08AFBC6C;
    case 870u: goto L_08AFBC78;
    case 871u: goto L_08AFBC84;
    case 872u: goto L_08AFBCA8;
    case 873u: goto L_08AFBCB4;
    case 874u: goto L_08AFBCC0;
    case 875u: goto L_08AFBCC8;
    case 876u: goto L_08AFBCE4;
    case 877u: goto L_08AFBCE8;
    case 878u: goto L_08AFBCF0;
    case 879u: goto L_08AFBCF8;
    case 880u: goto L_08AFBD04;
    case 881u: goto L_08AFBD28;
    case 882u: goto L_08AFBD34;
    case 883u: goto L_08AFBD40;
    case 884u: goto L_08AFBD48;
    case 885u: goto L_08AFBD64;
    case 886u: goto L_08AFBD68;
    case 887u: goto L_08AFBD70;
    case 888u: goto L_08AFBD8C;
    case 889u: goto L_08AFBD98;
    case 890u: goto L_08AFBDA8;
    case 891u: goto L_08AFBDB8;
    case 892u: goto L_08AFBDC0;
    case 893u: goto L_08AFBDD0;
    case 894u: goto L_08AFBDE4;
    case 895u: goto L_08AFBDE8;
    case 896u: goto L_08AFBDF0;
    case 897u: goto L_08AFBDF4;
    case 898u: goto L_08AFBDFC;
    case 899u: goto L_08AFBE08;
    case 900u: goto L_08AFBE18;
    case 901u: goto L_08AFBE20;
    case 902u: goto L_08AFBE2C;
    case 903u: goto L_08AFBE3C;
    case 904u: goto L_08AFBE4C;
    case 905u: goto L_08AFBE54;
    case 906u: goto L_08AFBE68;
    case 907u: goto L_08AFBE7C;
    case 908u: goto L_08AFBE84;
    case 909u: goto L_08AFBE94;
    case 910u: goto L_08AFBE9C;
    case 911u: goto L_08AFBEB0;
    case 912u: goto L_08AFBEB8;
    case 913u: goto L_08AFBEC8;
    case 914u: goto L_08AFBED0;
    case 915u: goto L_08AFBED4;
    case 916u: goto L_08AFBEE0;
    case 917u: goto L_08AFBEF0;
    case 918u: goto L_08AFBEF8;
    case 919u: goto L_08AFBF0C;
    case 920u: goto L_08AFBF14;
    case 921u: goto L_08AFBF24;
    case 922u: goto L_08AFBF2C;
    case 923u: goto L_08AFBF30;
    case 924u: goto L_08AFBF3C;
    case 925u: goto L_08AFBF50;
    case 926u: goto L_08AFBF64;
    case 927u: goto L_08AFBF6C;
    case 928u: goto L_08AFBF80;
    case 929u: goto L_08AFBF8C;
    case 930u: goto L_08AFBF9C;
    case 931u: goto L_08AFBFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AF8000:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 853u, 0x08AF7FF0u>(ctx, &aot_mem); return;
      }
      goto L_08AF800C;
    }
L_08AF800C:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2664));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(56));
    goto L_08AF801C;
L_08AF801C:
    ctx.gpr[2] = (ctx.lo);
    ctx.gpr[3] = (ctx.gpr[3] - ctx.gpr[9]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    (void)rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 829u, 0x08AF7DE8u>(ctx, &aot_mem); return;
L_08AF802C:
    ctx.gpr[6] = (ctx.gpr[11] + 0u);
    ctx.gpr[7] = (0u + 0u);
    ctx.gpr[5] = (ctx.gpr[3] - ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[12] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08AF805C;
      }
      goto L_08AF8040;
    }
L_08AF8040:
    ctx.gpr[15] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF8040;
      }
      goto L_08AF805C;
    }
L_08AF805C:
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[25])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[24] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2664));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(56));
    ctx.gpr[10] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[8] + 0u);
    goto L_08AF8080;
L_08AF8080:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF80C8;
      }
      goto L_08AF8090;
    }
L_08AF8090:
    ctx.gpr[6] = (ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF80B8;
      }
      goto L_08AF809C;
    }
L_08AF809C:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF809C;
      }
      goto L_08AF80B8;
    }
L_08AF80B8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    goto L_08AF8080;
L_08AF80C8:
    ctx.gpr[5] = (ctx.gpr[11] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF80F4;
      }
      goto L_08AF80D8;
    }
L_08AF80D8:
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[7] < ctx.gpr[10] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF80D8;
      }
      goto L_08AF80F4;
    }
L_08AF80F4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    goto L_08AF80F8;
L_08AF80F8:
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[10]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8104:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2664));
    ctx.gpr[15] = (ctx.lo);
    ctx.gpr[3] = (ctx.gpr[15] + ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 112 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
        goto L_08AF81F4;
    }
    goto L_08AF8124;
L_08AF8124:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    ctx.gpr[25] = (ctx.gpr[3] + static_cast<std::uint32_t>(112));
    ctx.gpr[24] = (static_cast<std::int32_t>(ctx.gpr[25]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.gpr[9] = (ctx.gpr[4] - ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AF8168;
      }
      goto L_08AF8138;
    }
L_08AF8138:
    ctx.gpr[4] = (ctx.gpr[12] + ctx.gpr[3]);
    ctx.gpr[5] = (ctx.gpr[11] + 0u);
    ctx.gpr[6] = (0u + 0u);
    goto L_08AF8144;
L_08AF8144:
    ctx.gpr[14] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (ctx.gpr[6] < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF8144;
      }
      goto L_08AF8160;
    }
L_08AF8160:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(76));
    (void)rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 839u, 0x08AF7EB0u>(ctx, &aot_mem); return;
L_08AF8168:
    ctx.gpr[6] = (ctx.gpr[12] + ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[11] + 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF8194;
      }
      goto L_08AF8178;
    }
L_08AF8178:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF8178;
      }
      goto L_08AF8194;
    }
L_08AF8194:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(112));
    ctx.gpr[2] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2664));
    ctx.gpr[7] = (ctx.gpr[4] - ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[11] + ctx.gpr[9]);
    ctx.gpr[15] = (ctx.lo);
    ctx.gpr[11] = (ctx.gpr[15] + ctx.gpr[2]);
    goto L_08AF81B4;
L_08AF81B4:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF81E0;
      }
      goto L_08AF81C4;
    }
L_08AF81C4:
    ctx.gpr[24] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[24]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF81C4;
      }
      goto L_08AF81E0;
    }
L_08AF81E0:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2664));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(112));
    goto L_08AF801C;
L_08AF81F4:
    ctx.gpr[6] = (ctx.gpr[11] + 0u);
    ctx.gpr[7] = (0u + 0u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[12] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08AF8224;
      }
      goto L_08AF8208;
    }
L_08AF8208:
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[25] = (ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF8208;
      }
      goto L_08AF8224;
    }
L_08AF8224:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[15] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2664));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(112));
    ctx.gpr[10] = (ctx.gpr[2] - ctx.gpr[5]);
    ctx.gpr[14] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[14] + ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[8] + 0u);
    goto L_08AF8248;
L_08AF8248:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF8290;
      }
      goto L_08AF8258;
    }
L_08AF8258:
    ctx.gpr[6] = (ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF8280;
      }
      goto L_08AF8264;
    }
L_08AF8264:
    ctx.gpr[25] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[24] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[25]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF8264;
      }
      goto L_08AF8280;
    }
L_08AF8280:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_08AF8248;
L_08AF8290:
    ctx.gpr[5] = (ctx.gpr[11] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF80F4;
      }
      goto L_08AF82A0;
    }
L_08AF82A0:
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[7] < ctx.gpr[10] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF82A0;
      }
      goto L_08AF82BC;
    }
L_08AF82BC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    goto L_08AF80F8;
L_08AF82C4:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] + 0u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[25] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2056));
    ctx.gpr[17] = (ctx.gpr[3] + static_cast<std::uint32_t>(-2664));
    ctx.gpr[3] = (33026u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[13] = (ctx.gpr[25] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[6] + 0u);
    ctx.gpr[15] = (0u + 0u);
    ctx.gpr[11] = (ctx.gpr[25] + ctx.gpr[17]);
    ctx.gpr[24] = (ctx.gpr[3] | 1033u);
    ctx.gpr[14] = (ctx.gpr[6] + 0u);
    goto L_08AF8310;
L_08AF8310:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (16u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] & ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[12] = (0u + static_cast<std::uint32_t>(127));
      if (branch_taken) {
          goto L_08AF85E4;
      }
      goto L_08AF8324;
    }
L_08AF8324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] == 0u) {
    rt.unsupported(0x08AF8330u, 0x000001CDu, "special? not lowered yet"); return;
        goto L_08AF8334;
    }
    goto L_08AF8334;
L_08AF8334:
    ctx.gpr[3] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[12] = (ctx.gpr[3] << 7u);
    ctx.gpr[10] = (ctx.gpr[12] - ctx.gpr[3]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[10]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF85DC;
      }
      goto L_08AF8350;
    }
L_08AF8350:
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AF83D0;
      }
      goto L_08AF8360;
    }
L_08AF8360:
    ctx.gpr[9] = (65519u << 16u);
    ctx.gpr[8] = (ctx.gpr[9] | 65535u);
    ctx.gpr[12] = (ctx.gpr[6] & ctx.gpr[8]);
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[12] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24), ctx.gpr[12]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(64), 0u);
      if (branch_taken) {
          goto L_08AF8560;
      }
      goto L_08AF8380;
    }
L_08AF8380:
    ctx.gpr[2] = (65534u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(52)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(44)));
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[2] = (ctx.gpr[12] & ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(52), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(40), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(44), ctx.gpr[10]);
    goto L_08AF83D0;
L_08AF83D0:
    ctx.gpr[4] = (ctx.gpr[25] + ctx.gpr[17]);
    goto L_08AF83D4;
L_08AF83D4:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (ctx.gpr[3] & 256u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
        goto L_08AF83F4;
    }
    goto L_08AF83E4;
L_08AF83E4:
    ctx.gpr[9] = (ctx.gpr[3] & 512u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
        goto L_08AF84D4;
    }
    goto L_08AF83F0;
L_08AF83F0:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    goto L_08AF83F4;
L_08AF83F4:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[14] + static_cast<std::uint32_t>(0))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[12] = (ctx.gpr[15] << 2u);
    ctx.gpr[6] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.gpr[2] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[24])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.gpr[7] = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[24])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 6u));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[8]);
    ctx.gpr[3] = (ctx.hi);
    ctx.gpr[8] = (ctx.gpr[3] + ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 6u));
    ctx.gpr[2] = (ctx.gpr[7] - ctx.gpr[10]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[8] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[9] >> 20u);
    ctx.gpr[10] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 12u));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[5] >> 20u);
    ctx.gpr[3] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 12u));
    goto L_08AF8474;
L_08AF8474:
    ctx.gpr[5] = (ctx.gpr[12] + ctx.gpr[16]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(32767));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-32768));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[10]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? ctx.gpr[6] : ctx.gpr[4]);
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[9]) < -32768 ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[2]) ? ctx.gpr[6] : ctx.gpr[2]);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < -32768 ? 1u : 0u);
    if (ctx.gpr[12] != 0u) ctx.gpr[9] = (ctx.gpr[3]);
    if (ctx.gpr[4] != 0u) ctx.gpr[8] = (ctx.gpr[3]);
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[15]) < 28 ? 1u : 0u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_08AF8310;
      }
      goto L_08AF84C0;
    }
L_08AF84C0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF84D4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[12] = (ctx.gpr[15] << 2u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[9] = (ctx.gpr[12] + ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.gpr[4] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[24])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[8] = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[24])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 6u));
    ctx.gpr[4] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[3] = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[9] = (ctx.gpr[3] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 6u));
    ctx.gpr[2] = (ctx.gpr[6] - ctx.gpr[10]);
    ctx.gpr[3] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[5] = (ctx.gpr[10] >> 20u);
    ctx.gpr[7] = (ctx.gpr[3] + ctx.gpr[5]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 12u));
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 31u));
    ctx.gpr[8] = (ctx.gpr[4] >> 20u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 12u));
    goto L_08AF8474;
L_08AF8560:
    ctx.gpr[3] = (2u << 16u);
    ctx.gpr[10] = (ctx.gpr[12] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[8] = (4u << 16u);
      if (branch_taken) {
          goto L_08AF85B4;
      }
      goto L_08AF8570;
    }
L_08AF8570:
    ctx.gpr[10] = (65533u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(52)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(40)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(44)));
    ctx.gpr[3] = (ctx.gpr[10] | 65535u);
    ctx.gpr[10] = (ctx.gpr[12] & ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    goto L_08AF83D0;
L_08AF85B4:
    ctx.gpr[9] = (ctx.gpr[12] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[25] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AF83D4;
      }
      goto L_08AF85C0;
    }
L_08AF85C0:
    ctx.gpr[4] = (65531u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[4] | 65535u);
    ctx.gpr[6] = (ctx.gpr[12] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    goto L_08AF83D0;
L_08AF85DC:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(56), 0u);
    goto L_08AF8350;
L_08AF85E4:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(56), ctx.gpr[12]);
    goto L_08AF83D0;
L_08AF85EC:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-1408)));
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (32834u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (ctx.gpr[3] | 256u);
      if (branch_taken) {
          goto L_08AF8638;
      }
      goto L_08AF8608;
    }
L_08AF8608:
    ctx.gpr[5] = (32834u << 16u);
    ctx.gpr[3] = (ctx.gpr[4] & 63u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 5u);
      if (branch_taken) {
          goto L_08AF8638;
      }
      goto L_08AF8618;
    }
L_08AF8618:
    ctx.gpr[2] = (2232u << 16u);
    ctx.gpr[7] = (32834u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1344));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[2] = (ctx.gpr[7] | 5u);
      if (branch_taken) {
          goto L_08AF8638;
      }
      goto L_08AF8630;
    }
L_08AF8630:
    ctx.gpr[31] = (0x08AF8638u);
    // nop
    ctx.pc = 0x08B0BA64u;
    return;
L_08AF8638:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8644:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[2] = (32834u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-1408)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[3] = (ctx.gpr[2] | 257u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AF86CC;
      }
      goto L_08AF8670;
    }
L_08AF8670:
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1344));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(256));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (0u + 0u);
    ctx.gpr[31] = (0x08AF868Cu);
    ctx.gpr[8] = (0u | 44100u);
    ctx.pc = 0x08B0BAC4u;
    return;
L_08AF868C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[3] = (ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AF86CC;
      }
      goto L_08AF8694;
    }
L_08AF8694:
    ctx.gpr[16] = (0u + 0u);
    ctx.gpr[19] = (ctx.gpr[17] + 0u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-1408)));
    goto L_08AF86A0;
L_08AF86A0:
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1344));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(4096));
      if (branch_taken) {
          goto L_08AF86EC;
      }
      goto L_08AF86B0;
    }
L_08AF86B0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    goto L_08AF86B8;
L_08AF86B8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-1408)));
      if (branch_taken) {
          goto L_08AF86A0;
      }
      goto L_08AF86C0;
    }
L_08AF86C0:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-1408), ctx.gpr[5]);
    ctx.gpr[3] = (0u + 0u);
    goto L_08AF86CC;
L_08AF86CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF86EC:
    ctx.gpr[31] = (0x08AF86F4u);
    // nop
    ctx.pc = 0x08B0BA84u;
    return;
L_08AF86F4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-1408)));
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1344));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(15));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(24512));
      if (branch_taken) {
          goto L_08AF86B0;
      }
      goto L_08AF870C;
    }
L_08AF870C:
    ctx.gpr[31] = (0x08AF8714u);
    // nop
    ctx.pc = 0x08B0BABCu;
    return;
L_08AF8714:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-1408)));
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1344));
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[7] = (0u + 0u);
    ctx.gpr[8] = (0u + 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF86B0;
      }
      goto L_08AF8734;
    }
L_08AF8734:
    ctx.gpr[31] = (0x08AF873Cu);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B0BA7Cu;
    return;
L_08AF873C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    goto L_08AF86B8;
L_08AF8744:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1408)));
    ctx.gpr[2] = (2232u << 16u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (32834u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1344));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[3] | 256u);
      if (branch_taken) {
          goto L_08AF8774;
      }
      goto L_08AF876C;
    }
L_08AF876C:
    ctx.gpr[31] = (0x08AF8774u);
    // nop
    ctx.pc = 0x08B0BAD4u;
    return;
L_08AF8774:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8780:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1408)));
    ctx.gpr[2] = (2232u << 16u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (32834u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1344));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[3] | 256u);
      if (branch_taken) {
          goto L_08AF87B0;
      }
      goto L_08AF87A8;
    }
L_08AF87A8:
    ctx.gpr[31] = (0x08AF87B0u);
    // nop
    ctx.pc = 0x08B0BACCu;
    return;
L_08AF87B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF87BC:
    ctx.gpr[14] = (2232u << 16u);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(-1408)));
    ctx.gpr[9] = (ctx.gpr[6] + 0u);
    ctx.gpr[10] = (ctx.gpr[4] + 0u);
    ctx.gpr[12] = (2232u << 16u);
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    ctx.gpr[2] = (ctx.gpr[7] + 0u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[11] = (32834u << 16u);
    ctx.gpr[4] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1344));
    ctx.gpr[7] = (ctx.gpr[9] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[9] = (ctx.gpr[8] + 0u);
    ctx.gpr[5] = (ctx.gpr[10] + 0u);
    ctx.gpr[6] = (ctx.gpr[3] + 0u);
    ctx.gpr[8] = (ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[12] = (ctx.gpr[11] | 256u);
      if (branch_taken) {
          goto L_08AF8810;
      }
      goto L_08AF8804;
    }
L_08AF8804:
    ctx.gpr[31] = (0x08AF880Cu);
    // nop
    ctx.pc = 0x08B0BA7Cu;
    return;
L_08AF880C:
    ctx.gpr[12] = (ctx.gpr[2] + 0u);
    goto L_08AF8810;
L_08AF8810:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[12] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8820:
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-1408)));
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (32834u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[7] = (ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[3] | 256u);
      if (branch_taken) {
          goto L_08AF8864;
      }
      goto L_08AF8840;
    }
L_08AF8840:
    ctx.gpr[2] = (2232u << 16u);
    ctx.gpr[8] = (32834u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + 0u);
    ctx.gpr[6] = (ctx.gpr[7] + 0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1344));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (ctx.gpr[8] | 18u);
      if (branch_taken) {
          goto L_08AF8864;
      }
      goto L_08AF885C;
    }
L_08AF885C:
    ctx.gpr[31] = (0x08AF8864u);
    // nop
    ctx.pc = 0x08B0BA84u;
    return;
L_08AF8864:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8870:
    ctx.gpr[11] = (2232u << 16u);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-1408)));
    ctx.gpr[8] = (ctx.gpr[5] + 0u);
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (ctx.gpr[6] + 0u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[10] = (32834u << 16u);
    ctx.gpr[9] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[8] = (ctx.gpr[7] + 0u);
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1344));
    ctx.gpr[5] = (ctx.gpr[2] + 0u);
    ctx.gpr[7] = (ctx.gpr[3] + 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[11] = (ctx.gpr[10] | 256u);
      if (branch_taken) {
          goto L_08AF88BC;
      }
      goto L_08AF88B0;
    }
L_08AF88B0:
    ctx.gpr[31] = (0x08AF88B8u);
    // nop
    ctx.pc = 0x08B0BA8Cu;
    return;
L_08AF88B8:
    ctx.gpr[11] = (ctx.gpr[2] + 0u);
    goto L_08AF88BC;
L_08AF88BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[11] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF88CC:
    ctx.gpr[24] = (2232u << 16u);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(-1408)));
    ctx.gpr[12] = (ctx.gpr[5] + 0u);
    ctx.gpr[10] = (ctx.gpr[6] + 0u);
    ctx.gpr[14] = (ctx.gpr[4] + 0u);
    ctx.gpr[2] = (ctx.gpr[7] + 0u);
    ctx.gpr[3] = (ctx.gpr[8] + 0u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[11] = (32834u << 16u);
    ctx.gpr[15] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[12] + 0u);
    ctx.gpr[7] = (ctx.gpr[10] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[10] = (ctx.gpr[9] + 0u);
    ctx.gpr[4] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1344));
    ctx.gpr[5] = (ctx.gpr[14] + 0u);
    ctx.gpr[8] = (ctx.gpr[2] + 0u);
    ctx.gpr[9] = (ctx.gpr[3] + 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[12] = (ctx.gpr[11] | 256u);
      if (branch_taken) {
          goto L_08AF8928;
      }
      goto L_08AF891C;
    }
L_08AF891C:
    ctx.gpr[31] = (0x08AF8924u);
    // nop
    ctx.pc = 0x08B0BA9Cu;
    return;
L_08AF8924:
    ctx.gpr[12] = (ctx.gpr[2] + 0u);
    goto L_08AF8928;
L_08AF8928:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[12] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8938:
    ctx.gpr[3] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1408)));
    ctx.gpr[2] = (2232u << 16u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1344));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF8964;
      }
      goto L_08AF8958;
    }
L_08AF8958:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08AF895C;
L_08AF895C:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8964:
    ctx.gpr[31] = (0x08AF896Cu);
    // nop
    ctx.pc = 0x08B0BA74u;
    return;
L_08AF896C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08AF895C;
L_08AF8974:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-1408)));
    ctx.gpr[7] = (ctx.gpr[4] + 0u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (32834u << 16u);
    ctx.gpr[2] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[7] + 0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1344));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[3] | 256u);
      if (branch_taken) {
          goto L_08AF89B0;
      }
      goto L_08AF89A4;
    }
L_08AF89A4:
    ctx.gpr[31] = (0x08AF89ACu);
    // nop
    ctx.pc = 0x08B0BADCu;
    return;
L_08AF89AC:
    ctx.gpr[7] = (ctx.gpr[2] + 0u);
    goto L_08AF89B0;
L_08AF89B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF89C0:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-1408)));
    ctx.gpr[7] = (ctx.gpr[4] + 0u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (32834u << 16u);
    ctx.gpr[2] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[7] + 0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1344));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[3] | 256u);
      if (branch_taken) {
          goto L_08AF89FC;
      }
      goto L_08AF89F0;
    }
L_08AF89F0:
    ctx.gpr[31] = (0x08AF89F8u);
    // nop
    ctx.pc = 0x08B0BAE4u;
    return;
L_08AF89F8:
    ctx.gpr[7] = (ctx.gpr[2] + 0u);
    goto L_08AF89FC;
L_08AF89FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8A0C:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1408)));
    ctx.gpr[2] = (2232u << 16u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (32834u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1344));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[3] | 256u);
      if (branch_taken) {
          goto L_08AF8A3C;
      }
      goto L_08AF8A34;
    }
L_08AF8A34:
    ctx.gpr[31] = (0x08AF8A3Cu);
    // nop
    ctx.pc = 0x08B0BAECu;
    return;
L_08AF8A3C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8A48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[7] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[7] = (0u + 0u);
    ctx.gpr[17] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    ctx.gpr[16] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (ctx.gpr[6] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF8A80u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1));
    goto L_08AF8B10;
L_08AF8A80:
    ctx.gpr[3] = (32768u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[6] = (ctx.gpr[3] | 264u);
      if (branch_taken) {
          goto L_08AF8AF4;
      }
      goto L_08AF8A8C;
    }
L_08AF8A8C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[2] = (ctx.gpr[6] & 15u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[6] = (ctx.gpr[5] | 4u);
      if (branch_taken) {
          goto L_08AF8AF4;
      }
      goto L_08AF8AA4;
    }
L_08AF8AA4:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1)));
    ctx.gpr[8] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
    ctx.gpr[3] = (ctx.gpr[9] & 32u);
    ctx.gpr[5] = (ctx.gpr[17] + 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[6] = (ctx.gpr[8] | 4u);
      if (branch_taken) {
          goto L_08AF8AF4;
      }
      goto L_08AF8AC4;
    }
L_08AF8AC4:
    ctx.gpr[31] = (0x08AF8ACCu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08AF8BD0;
L_08AF8ACC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[6] = (ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AF8AF4;
      }
      goto L_08AF8AD4;
    }
L_08AF8AD4:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[3] = (rt.memory().aot_load_word_left(ctx.gpr[10] + static_cast<std::uint32_t>(3), ctx.gpr[3]));
    ctx.gpr[3] = (rt.memory().aot_load_word_right(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[3]));
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(15), ctx.gpr[3]);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AF8AF4;
      }
      goto L_08AF8AF0;
    }
L_08AF8AF0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    goto L_08AF8AF4;
L_08AF8AF4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (ctx.gpr[6] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8B10:
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[2] = (2114u << 16u);
    ctx.gpr[25] = (ctx.gpr[12] << 8u);
    ctx.gpr[11] = (ctx.gpr[25] | ctx.gpr[10]);
    ctx.gpr[14] = (ctx.gpr[2] | 4229u);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[11]) * static_cast<std::uint64_t>(ctx.gpr[14]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.gpr[14] = (32768u << 16u);
    ctx.gpr[13] = (ctx.gpr[4] + 0u);
    ctx.gpr[9] = (ctx.gpr[4] + 0u);
    ctx.gpr[15] = (ctx.hi);
    ctx.gpr[24] = (ctx.gpr[11] - ctx.gpr[15]);
    ctx.gpr[3] = (ctx.gpr[24] >> 1u);
    ctx.gpr[25] = (ctx.gpr[15] + ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[25] >> 4u);
    ctx.gpr[24] = (ctx.gpr[2] << 5u);
    ctx.gpr[15] = (ctx.gpr[24] - ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[11] - ctx.gpr[15]);
    ctx.gpr[2] = (ctx.gpr[3] & 65535u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[11] = (ctx.gpr[14] | 264u);
      if (branch_taken) {
          goto L_08AF8BC4;
      }
      goto L_08AF8B64;
    }
L_08AF8B64:
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
        goto L_08AF8B6C;
    }
    goto L_08AF8B6C;
L_08AF8B6C:
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
        goto L_08AF8B74;
    }
    goto L_08AF8B74;
L_08AF8B74:
    ctx.gpr[4] = (ctx.gpr[10] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AF8BB8;
      }
      goto L_08AF8B80;
    }
L_08AF8B80:
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
        goto L_08AF8BB8;
    }
    goto L_08AF8B88;
L_08AF8B88:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(2)));
    ctx.gpr[14] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(2)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(3)));
    ctx.gpr[15] = (ctx.gpr[3] << 24u);
    ctx.gpr[24] = (ctx.gpr[14] << 16u);
    ctx.gpr[5] = (ctx.gpr[15] | ctx.gpr[24]);
    ctx.gpr[13] = (ctx.gpr[11] << 8u);
    ctx.gpr[10] = (ctx.gpr[5] | ctx.gpr[13]);
    ctx.gpr[6] = (ctx.gpr[10] | ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    goto L_08AF8BB8;
L_08AF8BB8:
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
        goto L_08AF8BC0;
    }
    goto L_08AF8BC0;
L_08AF8BC0:
    ctx.gpr[11] = (0u + 0u);
    goto L_08AF8BC4;
L_08AF8BC4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[11] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8BD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-896));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[14] = (ctx.gpr[4] + 0u);
    ctx.gpr[15] = (2227u << 16u);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1536));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(784), ctx.gpr[31]);
    goto L_08AF8BEC;
L_08AF8BEC:
    ctx.gpr[25] = (ctx.gpr[6] & 3u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[25]);
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[25] = (ctx.gpr[25] << 3u);
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    goto L_08AF8C00;
L_08AF8C00:
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) > 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08AF8CA4;
      }
      goto L_08AF8C0C;
    }
L_08AF8C0C:
    ctx.gpr[3] = ((ctx.gpr[2] >> 30u) & 0x00000003u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[10] = ((ctx.gpr[2] >> 29u) & 0x00000001u);
      if (branch_taken) {
          goto L_08AF9134;
      }
      goto L_08AF8C18;
    }
L_08AF8C18:
    ctx.gpr[8] = (ctx.gpr[3] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(788), static_cast<std::uint16_t>(ctx.gpr[10]));
      if (branch_taken) {
          goto L_08AF8CF8;
      }
      goto L_08AF8C24;
    }
L_08AF8C24:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(0));
      if (branch_taken) {
          goto L_08AF918C;
      }
      goto L_08AF8C2C;
    }
L_08AF8C2C:
    ctx.gpr[20] = (ctx.gpr[15] + static_cast<std::uint32_t>(108));
    goto L_08AF8C30;
L_08AF8C30:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[15];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-4), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF8C30;
      }
      goto L_08AF8C44;
    }
L_08AF8C44:
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(144));
    goto L_08AF8C4C;
L_08AF8C4C:
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(144));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(304), static_cast<std::uint16_t>(ctx.gpr[8]));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[20];
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AF8C4C;
      }
      goto L_08AF8C64;
    }
L_08AF8C64:
    ctx.gpr[20] = (ctx.gpr[15] + static_cast<std::uint32_t>(16));
    goto L_08AF8C68;
L_08AF8C68:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[15];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-4), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF8C68;
      }
      goto L_08AF8C7C;
    }
L_08AF8C7C:
    ctx.gpr[20] = (ctx.gpr[15] + static_cast<std::uint32_t>(64));
    goto L_08AF8C80;
L_08AF8C80:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[15];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(280), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF8C80;
      }
      goto L_08AF8C94;
    }
L_08AF8C94:
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-188));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(666), static_cast<std::uint16_t>(ctx.gpr[11]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(636), static_cast<std::uint16_t>(ctx.gpr[11]));
    goto L_08AF8DCC;
L_08AF8CA4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    goto L_08AF8C0C;
L_08AF8CC0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    goto L_08AF8D04;
L_08AF8CDC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    goto L_08AF8D30;
L_08AF8CF8:
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(14));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) > 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08AF8CC0;
      }
      goto L_08AF8D04;
    }
L_08AF8D04:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(860), ctx.gpr[2]);
    ctx.gpr[20] = ((ctx.gpr[2] >> 28u) & 0x0000000Fu);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(760));
    ctx.gpr[8] = (ctx.gpr[15] + 0u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[15]);
    goto L_08AF8D1C;
L_08AF8D1C:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[20];
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF8D4C;
      }
      goto L_08AF8D24;
    }
L_08AF8D24:
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) > 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08AF8CDC;
      }
      goto L_08AF8D30;
    }
L_08AF8D30:
    ctx.gpr[2] = (ctx.gpr[2] >> 29u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(5))))));
      if (branch_taken) {
          goto L_08AF8D1C;
      }
      goto L_08AF8D3C;
    }
L_08AF8D3C:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(2));
    ctx.gpr[10] = ((ctx.gpr[10] & ~0x00007E00u) | ((ctx.gpr[2] & 0x0000003Fu) << 9u));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[10]));
    goto L_08AF8D1C;
L_08AF8D4C:
    ctx.gpr[31] = (0x08AF8D54u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(760));
    goto L_08AF90AC;
L_08AF8D54:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(860)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(0));
      if (branch_taken) {
          goto L_08AF918C;
      }
      goto L_08AF8D60;
    }
L_08AF8D60:
    ctx.gpr[13] = ((ctx.gpr[13] >> 18u) & 0x0000001Fu);
    ctx.gpr[31] = (0x08AF8D6Cu);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(257));
    goto L_08AF8F8C;
L_08AF8D6C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(0));
      if (branch_taken) {
          goto L_08AF918C;
      }
      goto L_08AF8D74;
    }
L_08AF8D74:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(60))))));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.gpr[10] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[9];
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_08AF8D90;
      }
      goto L_08AF8D88;
    }
L_08AF8D88:
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[15]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(60))))));
    goto L_08AF8D90;
L_08AF8D90:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[11];
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08AF8D74;
      }
      goto L_08AF8D98;
    }
L_08AF8D98:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(860)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(636));
    ctx.gpr[31] = (0x08AF8DA8u);
    ctx.gpr[13] = ((ctx.gpr[13] >> 23u) & 0x0000001Fu);
    goto L_08AF8F88;
L_08AF8DA8:
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    goto L_08AF8DAC;
L_08AF8DAC:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(760))))));
    ctx.gpr[9] = (ctx.gpr[9] & 31u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[15]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(124))))));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[29];
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(758), static_cast<std::uint16_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08AF8DAC;
      }
      goto L_08AF8DCC;
    }
L_08AF8DCC:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    ctx.gpr[31] = (0x08AF8DDCu);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(2));
    goto L_08AF8F0C;
L_08AF8DDC:
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(638));
    ctx.gpr[10] = ([](std::uint32_t value) { value = ((value >> 1u) & 0x55555555u) | ((value & 0x55555555u) << 1u); value = ((value >> 2u) & 0x33333333u) | ((value & 0x33333333u) << 2u); value = ((value >> 4u) & 0x0F0F0F0Fu) | ((value & 0x0F0F0F0Fu) << 4u); value = ((value >> 8u) & 0x00FF00FFu) | ((value & 0x00FF00FFu) << 8u); return (value >> 16u) | (value << 16u); }(ctx.gpr[2]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 4u));
      if (branch_taken) {
          goto L_08AF8E64;
      }
      goto L_08AF8DEC;
    }
L_08AF8DEC:
    ctx.gpr[31] = (0x08AF8DF4u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) < 0;
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(666)));
      if (branch_taken) {
          goto L_08AF8E90;
      }
      goto L_08AF8DF4;
    }
L_08AF8DF4:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(636))))));
    ctx.gpr[31] = (0x08AF8E00u);
    ctx.gpr[1] = (ctx.gpr[4] - ctx.gpr[20]);
    goto L_08AF8F0C;
L_08AF8E00:
    ctx.gpr[20] = (ctx.gpr[5] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(std::countl_zero(ctx.gpr[2])));
      if (branch_taken) {
          goto L_08AF9198;
      }
      goto L_08AF8E0C;
    }
L_08AF8E0C:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-30));
    ctx.gpr[31] = (0x08AF8E18u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) < 0;
    ctx.gpr[20] = (ctx.gpr[4] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF8E74;
      }
      goto L_08AF8E18;
    }
L_08AF8E18:
    ctx.gpr[10] = (ctx.gpr[14] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF918C;
      }
      goto L_08AF8E24;
    }
L_08AF8E24:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-1)));
    goto L_08AF8E28;
L_08AF8E28:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[1] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_08AF8DCC;
      }
      goto L_08AF8E34;
    }
L_08AF8E34:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-1)));
    goto L_08AF8E28;
L_08AF8E40:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    ctx.gpr[2] = (ctx.gpr[2] >> (ctx.gpr[10] & 31u));
    jump_target = ctx.gpr[31];
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8E64:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF9198;
      }
      goto L_08AF8E6C;
    }
L_08AF8E6C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AF8DCC;
L_08AF8E74:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[25] = (ctx.gpr[25] - ctx.gpr[10]);
      if (branch_taken) {
          goto L_08AF918C;
      }
      goto L_08AF8E7C;
    }
L_08AF8E7C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) > 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08AF8E40;
      }
      goto L_08AF8E84;
    }
L_08AF8E84:
    ctx.gpr[2] = (ctx.gpr[2] >> (ctx.gpr[10] & 31u));
    jump_target = ctx.gpr[31];
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8E90:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 28u));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[10];
    ctx.gpr[25] = (ctx.gpr[25] - ctx.gpr[10]);
      if (branch_taken) {
          goto L_08AF8EB0;
      }
      goto L_08AF8E9C;
    }
L_08AF8E9C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) > 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08AF8E40;
      }
      goto L_08AF8EA4;
    }
L_08AF8EA4:
    ctx.gpr[2] = (ctx.gpr[2] >> (ctx.gpr[10] & 31u));
    jump_target = ctx.gpr[31];
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8EB0:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(788))))));
      if (branch_taken) {
          goto L_08AF918C;
      }
      goto L_08AF8EBC;
    }
L_08AF8EBC:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[25] = (ctx.gpr[25] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_08AF8C00;
      }
      goto L_08AF8EC4;
    }
L_08AF8EC4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[14]);
      if (branch_taken) {
          goto L_08AF8EDC;
      }
      goto L_08AF8ECC;
    }
L_08AF8ECC:
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(39));
    ctx.gpr[9] = (ctx.gpr[25] >> 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08AF8EDC;
L_08AF8EDC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(784)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(776)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8EEC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((0u & 0x0000FFFFu) << 0u));
    goto L_08AF8F1C;
L_08AF8F0C:
    ctx.gpr[2] = (ctx.gpr[24] >> (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] - ctx.gpr[10]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) > 0;
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[10] & 31u));
      if (branch_taken) {
          goto L_08AF8EEC;
      }
      goto L_08AF8F1C;
    }
L_08AF8F1C:
    ctx.gpr[2] = ([](std::uint32_t value) { value = ((value >> 1u) & 0x55555555u) | ((value & 0x55555555u) << 1u); value = ((value >> 2u) & 0x33333333u) | ((value & 0x33333333u) << 2u); value = ((value >> 4u) & 0x0F0F0F0Fu) | ((value & 0x0F0F0F0Fu) << 4u); value = ((value >> 8u) & 0x00FF00FFu) | ((value & 0x00FF00FFu) << 8u); return (value >> 16u) | (value << 16u); }(ctx.gpr[2]));
    ctx.gpr[10] = (ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF8F4C;
      }
      goto L_08AF8F2C;
    }
L_08AF8F2C:
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[8]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(58))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8F38:
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[8]);
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[10]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(60))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8F4C:
    { const bool branch_taken = ctx.gpr[25] == 0u;
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(30)));
      if (branch_taken) {
          goto L_08AF8F74;
      }
      goto L_08AF8F54;
    }
L_08AF8F54:
    ctx.gpr[10] = (ctx.gpr[24] >> (ctx.gpr[25] & 31u));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x00000001u) | ((ctx.gpr[10] & 0x00000001u) << 0u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(1));
    goto L_08AF8F60;
L_08AF8F60:
    ctx.gpr[3] = (ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF8F38;
      }
      goto L_08AF8F6C;
    }
L_08AF8F6C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    goto L_08AF8F4C;
L_08AF8F74:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(-31));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x00000001u) | ((ctx.gpr[24] & 0x00000001u) << 0u));
    goto L_08AF8F60;
L_08AF8F88:
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
    goto L_08AF8F8C;
L_08AF8F8C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[12] = (0u + 0u);
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[11] = (ctx.gpr[20] + 0u);
    ctx.hi = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(7));
    goto L_08AF8FAC;
L_08AF8FAC:
    ctx.gpr[8] = (ctx.gpr[12] < ctx.gpr[13] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(760))))));
      if (branch_taken) {
          goto L_08AF90A0;
      }
      goto L_08AF8FB8;
    }
L_08AF8FB8:
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(790)));
    ctx.gpr[31] = (0x08AF8FC4u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(762));
    goto L_08AF8F0C;
L_08AF8FC4:
    ctx.gpr[8] = (ctx.gpr[2] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? ctx.gpr[8] : ctx.gpr[9]);
      if (branch_taken) {
          goto L_08AF8FF4;
      }
      goto L_08AF8FD0;
    }
L_08AF8FD0:
    ctx.gpr[25] = (ctx.gpr[25] + ctx.gpr[10]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) > 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08AF9014;
      }
      goto L_08AF8FDC;
    }
L_08AF8FDC:
    { const bool signed_ok = ctx.execute_signed_sub(10u, 0u, 10u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08AF8FDCu, 0x000A5022u); return; } }
    ctx.gpr[2] = (ctx.gpr[2] >> (ctx.gpr[10] & 31u));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[2]);
    goto L_08AF8FE8;
L_08AF8FE8:
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[8]);
    ctx.gpr[1] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    goto L_08AF8FAC;
L_08AF8FF4:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF9030;
      }
      goto L_08AF8FFC;
    }
L_08AF8FFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[1] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF8FAC;
      }
      goto L_08AF9004;
    }
L_08AF9004:
    ctx.gpr[1] = ((ctx.gpr[1] & ~0x00007E00u) | ((ctx.gpr[2] & 0x0000003Fu) << 9u));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[1]));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(2));
    goto L_08AF8FAC;
L_08AF9014:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    goto L_08AF8FDC;
L_08AF9030:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[1]) < 0;
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AF918C;
      }
      goto L_08AF9038;
    }
L_08AF9038:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) > 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08AF9070;
      }
      goto L_08AF9040;
    }
L_08AF9040:
    ctx.gpr[2] = (ctx.gpr[2] >> 30u);
    ctx.gpr[8] = (ctx.gpr[1] & 32256u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[2] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AF8FE8;
      }
      goto L_08AF9050;
    }
L_08AF9050:
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[1]);
    goto L_08AF9054;
L_08AF9054:
    ctx.gpr[1] = (ctx.gpr[1] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[1]));
    { const bool branch_taken = ctx.gpr[1] != ctx.gpr[8];
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AF9054;
      }
      goto L_08AF9064;
    }
L_08AF9064:
    ctx.gpr[12] = (ctx.gpr[1] & 511u);
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_08AF8FAC;
L_08AF9070:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    goto L_08AF9040;
L_08AF908C:
    ctx.gpr[2] = (ctx.gpr[1] >> (ctx.gpr[8] & 31u));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF918C;
      }
      goto L_08AF9098;
    }
L_08AF9098:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[1]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF90A0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), 0u);
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[13];
    ctx.gpr[31] = (ctx.hi);
      if (branch_taken) {
          goto L_08AF918C;
      }
      goto L_08AF90AC;
    }
L_08AF90AC:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[8] = (0u + 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[9] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), 0u);
    goto L_08AF90C4;
L_08AF90C4:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[20];
    ctx.gpr[12] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AF908C;
      }
      goto L_08AF90CC;
    }
L_08AF90CC:
    ctx.gpr[1] = (ctx.gpr[1] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(60))))));
    goto L_08AF90D4;
L_08AF90D4:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[12];
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AF90F0;
      }
      goto L_08AF90E0;
    }
L_08AF90E0:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[3]) > static_cast<std::int32_t>(ctx.gpr[2]) ? ctx.gpr[3] : ctx.gpr[2]);
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? ctx.gpr[3] : ctx.gpr[2]);
    goto L_08AF90D4;
L_08AF90F0:
    ctx.gpr[12] = (ctx.gpr[2] >> 9u);
    ctx.gpr[2] = (ctx.gpr[2] & 511u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[12];
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AF90C4;
      }
      goto L_08AF9104;
    }
L_08AF9104:
    ctx.gpr[10] = (ctx.gpr[8] - ctx.gpr[12]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[12] + 0u);
      if (branch_taken) {
          goto L_08AF912C;
      }
      goto L_08AF9110;
    }
L_08AF9110:
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[1]));
    ctx.gpr[1] = (std::rotr(ctx.gpr[1], static_cast<int>(ctx.gpr[10] & 31u)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[20] - ctx.gpr[1]);
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[1]);
    ctx.gpr[10] = (ctx.gpr[9] - ctx.gpr[10]);
    goto L_08AF912C;
L_08AF912C:
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(-2), static_cast<std::uint16_t>(ctx.gpr[10]));
    goto L_08AF90C4;
L_08AF9134:
    { const bool signed_ok = ctx.execute_signed_sub(8u, 0u, 25u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08AF9134u, 0x00194022u); return; } }
    ctx.gpr[8] = (ctx.gpr[8] >> 3u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[8]);
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(7), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]));
    ctx.gpr[3] = (ctx.gpr[8] & 65535u);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[9] = (~(ctx.gpr[8] | 0u));
      if (branch_taken) {
          goto L_08AF9198;
      }
      goto L_08AF915C;
    }
L_08AF915C:
    ctx.gpr[9] = (std::rotr(ctx.gpr[9], 16));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08AF918C;
      }
      goto L_08AF9168;
    }
L_08AF9168:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08AF9168;
      }
      goto L_08AF917C;
    }
L_08AF917C:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AF8EC4;
      }
      goto L_08AF9184;
    }
L_08AF9184:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_08AF8BEC;
L_08AF918C:
    ctx.gpr[2] = (32768u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 264u);
    goto L_08AF8EDC;
L_08AF9198:
    ctx.gpr[2] = (32768u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 260u);
    goto L_08AF8EDC;
L_08AF91B0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.gpr[3] = (ctx.gpr[6] + static_cast<std::uint32_t>(10240));
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(9216));
    ctx.gpr[7] = (ctx.gpr[3] & 65535u);
    ctx.gpr[10] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(1024) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[6] << 16u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[7] = (ctx.gpr[10] < static_cast<std::uint32_t>(1024) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF920C;
      }
      goto L_08AF91DC;
    }
L_08AF91DC:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[12] = (ctx.gpr[9] + static_cast<std::uint32_t>(9216));
    ctx.gpr[11] = (ctx.gpr[12] & 65535u);
    ctx.gpr[6] = (ctx.gpr[11] < static_cast<std::uint32_t>(1024) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[3] = (ctx.gpr[8] | ctx.gpr[9]);
      if (branch_taken) {
          goto L_08AF9200;
      }
      goto L_08AF91F8;
    }
L_08AF91F8:
    ctx.gpr[13] = (2232u << 16u);
    goto L_08AF91FC;
L_08AF91FC:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(2312)));
    goto L_08AF9200;
L_08AF9200:
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF920C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[3] = (ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08AF9200;
      }
      goto L_08AF9214;
    }
L_08AF9214:
    ctx.gpr[13] = (2232u << 16u);
    goto L_08AF91FC;
L_08AF921C:
    ctx.gpr[7] = (16u << 16u);
    ctx.gpr[9] = (65535u << 16u);
    ctx.gpr[2] = (ctx.gpr[9] | 10240u);
    ctx.gpr[8] = (ctx.gpr[7] | 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[8] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[6] < static_cast<std::uint32_t>(2048) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF9248;
      }
      goto L_08AF9240;
    }
L_08AF9240:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[11] = (0u | 65535u);
      if (branch_taken) {
          goto L_08AF9254;
      }
      goto L_08AF9248;
    }
L_08AF9248:
    ctx.gpr[3] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2312)));
    ctx.gpr[11] = (0u | 65535u);
    goto L_08AF9254;
L_08AF9254:
    ctx.gpr[10] = (ctx.gpr[11] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
        goto L_08AF9284;
    }
    goto L_08AF9260;
L_08AF9260:
    ctx.gpr[24] = (65535u << 16u);
    ctx.gpr[14] = (ctx.gpr[5] + ctx.gpr[24]);
    ctx.gpr[15] = (ctx.gpr[14] >> 10u);
    ctx.gpr[12] = (ctx.gpr[15] + static_cast<std::uint32_t>(-10240));
    ctx.gpr[13] = (ctx.gpr[14] & 1023u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.gpr[5] = (ctx.gpr[13] + static_cast<std::uint32_t>(-9216));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08AF9284;
L_08AF9284:
    ctx.gpr[25] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[25]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9290:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.gpr[4] = (ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08AF92B8;
      }
      goto L_08AF92AC;
    }
L_08AF92AC:
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    goto L_08AF92B0;
L_08AF92B0:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF92B8:
    ctx.gpr[6] = (ctx.gpr[3] + static_cast<std::uint32_t>(62));
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] < static_cast<std::uint32_t>(51) ? 1u : 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[3] & 127u);
      if (branch_taken) {
          goto L_08AF92DC;
      }
      goto L_08AF92D0;
    }
L_08AF92D0:
    ctx.gpr[3] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2308)));
    goto L_08AF92AC;
L_08AF92DC:
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[13] = (ctx.gpr[4] & ctx.gpr[14]);
    ctx.gpr[10] = (ctx.gpr[13] << 6u);
    ctx.gpr[11] = (ctx.gpr[12] & 63u);
    ctx.gpr[4] = (ctx.gpr[10] | ctx.gpr[11]);
    ctx.gpr[6] = (ctx.gpr[6] << 5u);
    ctx.gpr[9] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF92DC;
      }
      goto L_08AF9304;
    }
L_08AF9304:
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    goto L_08AF92B0;
L_08AF930C:
    ctx.gpr[10] = (ctx.gpr[4] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF93BC;
      }
      goto L_08AF9318;
    }
L_08AF9318:
    ctx.gpr[3] = (ctx.gpr[5] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    if (ctx.gpr[3] == 0u) {
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(2048) ? 1u : 0u);
        goto L_08AF9334;
    }
    goto L_08AF9324;
L_08AF9324:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08AF932C;
L_08AF932C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9334:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(2048));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF9350;
      }
      goto L_08AF9340;
    }
L_08AF9340:
    ctx.gpr[3] = (ctx.gpr[3] << 5u);
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF9340;
      }
      goto L_08AF9350;
    }
L_08AF9350:
    ctx.gpr[15] = (0u + static_cast<std::uint32_t>(7));
    ctx.gpr[14] = (ctx.gpr[15] - ctx.gpr[7]);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[13] << (ctx.gpr[14] & 31u));
    ctx.gpr[12] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[11];
    ctx.gpr[6] = (ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AF93A4;
      }
      goto L_08AF9380;
    }
L_08AF9380:
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-128));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AF9388;
L_08AF9388:
    ctx.gpr[25] = (ctx.gpr[5] & 63u);
    ctx.gpr[24] = (ctx.gpr[25] | ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[24]));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[3];
    ctx.gpr[5] = (ctx.gpr[5] >> 6u);
      if (branch_taken) {
          goto L_08AF9388;
      }
      goto L_08AF93A4;
    }
L_08AF93A4:
    ctx.gpr[11] = (ctx.gpr[9] >> 1u);
    ctx.gpr[8] = (ctx.gpr[5] & ctx.gpr[11]);
    ctx.gpr[7] = (~(0u | ctx.gpr[9]));
    ctx.gpr[5] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AF932C;
L_08AF93BC:
    ctx.gpr[3] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2308)));
    goto L_08AF9318;
L_08AF93C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] + 0u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[3] = (0u + 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (0u + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AF9424;
      }
      goto L_08AF9404;
    }
L_08AF9404:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9424:
    ctx.gpr[31] = (0x08AF942Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08AF9290;
L_08AF942C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AF948C;
      }
      goto L_08AF9434;
    }
L_08AF9434:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AF9440u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[29]);
    goto L_08AF921C;
L_08AF9440:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[3] - ctx.gpr[29]);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF948C;
      }
      goto L_08AF945C;
    }
L_08AF945C:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_08AF9484;
      }
      goto L_08AF9468;
    }
L_08AF9468:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AF946C;
L_08AF946C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AF946C;
      }
      goto L_08AF9484;
    }
L_08AF9484:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AF9424;
L_08AF948C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[3] = (ctx.gpr[18] + 0u);
    goto L_08AF9404;
L_08AF9498:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[2] = (0u + 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (0u + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AF94E8;
      }
      goto L_08AF94CC;
    }
L_08AF94CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF94E8:
    ctx.gpr[31] = (0x08AF94F0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08AF91B0;
L_08AF94F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AF9548;
      }
      goto L_08AF94F8;
    }
L_08AF94F8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AF9504u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[29]);
    goto L_08AF930C;
L_08AF9504:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[3] - ctx.gpr[29]);
    ctx.gpr[2] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF9548;
      }
      goto L_08AF9518;
    }
L_08AF9518:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[3] = (ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_08AF9540;
      }
      goto L_08AF9524;
    }
L_08AF9524:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AF9528;
L_08AF9528:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF9528;
      }
      goto L_08AF9540;
    }
L_08AF9540:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AF94E8;
L_08AF9548:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[18] + 0u);
    goto L_08AF94CC;
L_08AF9554:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (0u + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AF9568;
L_08AF9568:
    ctx.gpr[31] = (0x08AF9570u);
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    goto L_08AF9290;
L_08AF9570:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08AF9580;
      }
      goto L_08AF9578;
    }
L_08AF9578:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08AF9568;
L_08AF9580:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9590:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[4] + 0u);
    ctx.gpr[16] = (ctx.gpr[4] + 0u);
    ctx.gpr[7] = (ctx.gpr[6] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(30));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[6] = (ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08AF95E4;
      }
      goto L_08AF95B8;
    }
L_08AF95B8:
    ctx.gpr[31] = (0x08AF95C0u);
    // nop
    ctx.pc = 0x08B0B6B4u;
    return;
L_08AF95C0:
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(30));
      if (branch_taken) {
          goto L_08AF95D4;
      }
      goto L_08AF95CC;
    }
L_08AF95CC:
    ctx.gpr[31] = (0x08AF95D4u);
    // nop
    ctx.pc = 0x08B0B6C4u;
    return;
L_08AF95D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08AF95D8;
L_08AF95D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF95E4:
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08AF95F0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(30));
    ctx.pc = 0x08B0B6BCu;
    return;
L_08AF95F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08AF95D8;
L_08AF95F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] << 24u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5440));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF9694;
      }
      goto L_08AF9634;
    }
L_08AF9634:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AF9650u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 814u, 0x08AA3D54u>(ctx, &aot_mem) && ctx.pc == 0x08AF9650u) goto L_08AF9650;
    return;
L_08AF9650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
      if (branch_taken) {
          goto L_08AF96BC;
      }
      goto L_08AF9668;
    }
L_08AF9668:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[31] = (0x08AF9684u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 715u, 0x08AA3578u>(ctx, &aot_mem) && ctx.pc == 0x08AF9684u) goto L_08AF9684;
    return;
L_08AF9684:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
      if (branch_taken) {
          goto L_08AF96BC;
      }
      goto L_08AF9694;
    }
L_08AF9694:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[31] = (0x08AF96ACu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08AF96ACu) goto L_08AF96AC;
    return;
L_08AF96AC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    goto L_08AF96BC;
L_08AF96BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF96E4;
      }
      goto L_08AF96CC;
    }
L_08AF96CC:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[16] - ctx.gpr[6]);
    ctx.gpr[31] = (0x08AF96E0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AF96E0u) goto L_08AF96E0;
    return;
L_08AF96E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08AF96E4;
L_08AF96E4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9704:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AF9724;
      }
      goto L_08AF9714;
    }
L_08AF9714:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF9774;
      }
      goto L_08AF9724;
    }
L_08AF9724:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08AF9748u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08AF9748u) goto L_08AF9748;
    return;
L_08AF9748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08AF9760u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF9760u) goto L_08AF9760;
    return;
L_08AF9760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08AF9774;
L_08AF9774:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9780:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF979Cu);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AF979Cu) goto L_08AF979C;
    return;
L_08AF979C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF97B4;
      }
      goto L_08AF97A8;
    }
L_08AF97A8:
    ctx.gpr[31] = (0x08AF97B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 12u, 0x0883C0DCu>(ctx, &aot_mem) && ctx.pc == 0x08AF97B0u) goto L_08AF97B0;
    return;
L_08AF97B0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AF97B4;
L_08AF97B4:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[31] = (0x08AF97C0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 261u, 0x08A29668u>(ctx, &aot_mem) && ctx.pc == 0x08AF97C0u) goto L_08AF97C0;
    return;
L_08AF97C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[31] = (0x08AF97CCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 259u, 0x08A29650u>(ctx, &aot_mem) && ctx.pc == 0x08AF97CCu) goto L_08AF97CC;
    return;
L_08AF97CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF97E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF97FCu);
    ctx.gpr[4] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AF97FCu) goto L_08AF97FC;
    return;
L_08AF97FC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9814;
      }
      goto L_08AF9808;
    }
L_08AF9808:
    ctx.gpr[31] = (0x08AF9810u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 470u, 0x08A8E3D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF9810u) goto L_08AF9810;
    return;
L_08AF9810:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AF9814;
L_08AF9814:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[31] = (0x08AF9820u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-21276), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 261u, 0x08A29668u>(ctx, &aot_mem) && ctx.pc == 0x08AF9820u) goto L_08AF9820;
    return;
L_08AF9820:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21276)));
    ctx.gpr[31] = (0x08AF982Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 259u, 0x08A29650u>(ctx, &aot_mem) && ctx.pc == 0x08AF982Cu) goto L_08AF982C;
    return;
L_08AF982C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9840:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9854:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF9874;
      }
      goto L_08AF986C;
    }
L_08AF986C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AF9874;
      }
      goto L_08AF9874;
    }
L_08AF9874:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF987C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF9898;
      }
      goto L_08AF9890;
    }
L_08AF9890:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF9898;
      }
      goto L_08AF9898;
    }
L_08AF9898:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF98A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF98C0;
      }
      goto L_08AF98B8;
    }
L_08AF98B8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AF98C0;
      }
      goto L_08AF98C0;
    }
L_08AF98C0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF98C8:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF98D4:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF98E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF98FC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9904:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF990C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9914:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF991C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF992Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08AF992Cu) goto L_08AF992C;
    return;
L_08AF992C:
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF993C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9944:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF994C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[2] = (ctx.gpr[4] & 512u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF995C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9964:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9980:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF99DC;
      }
      goto L_08AF999C;
    }
L_08AF999C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08AF99CC;
      }
      goto L_08AF99A4;
    }
L_08AF99A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08AF99CC;
      }
      goto L_08AF99B4;
    }
L_08AF99B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08AF99CC;
    }
    goto L_08AF99C0;
L_08AF99C0:
    ctx.gpr[31] = (0x08AF99C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08AF99C8u) goto L_08AF99C8;
    return;
L_08AF99C8:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08AF99CC;
L_08AF99CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF99DC;
      }
      goto L_08AF99D4;
    }
L_08AF99D4:
    ctx.gpr[31] = (0x08AF99DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF99DCu) goto L_08AF99DC;
    return;
L_08AF99DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF99F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-21272)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13480));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_08AF9A08;
L_08AF9A08:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9A3C;
      }
      goto L_08AF9A10;
    }
L_08AF9A10:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AF9A24u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 790u, 0x089C31B4u>(ctx, &aot_mem) && ctx.pc == 0x08AF9A24u) goto L_08AF9A24;
    return;
L_08AF9A24:
    ctx.gpr[31] = (0x08AF9A2Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 242u, 0x08AECC58u>(ctx, &aot_mem) && ctx.pc == 0x08AF9A2Cu) goto L_08AF9A2C;
    return;
L_08AF9A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (2230u << 16u);
    goto L_08AF9A3C;
L_08AF9A3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AF9A48u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF9A48u) goto L_08AF9A48;
    return;
L_08AF9A48:
    ctx.gpr[31] = (0x08AF9A50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08AF9A50u) goto L_08AF9A50;
    return;
L_08AF9A50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[7] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF9A68;
      }
      goto L_08AF9A60;
    }
L_08AF9A60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-21272)));
      if (branch_taken) {
          goto L_08AF9A08;
      }
      goto L_08AF9A68;
    }
L_08AF9A68:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9A74:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF9A94;
      }
      goto L_08AF9A8C;
    }
L_08AF9A8C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08AF9A94;
      }
      goto L_08AF9A94;
    }
L_08AF9A94:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9A9C:
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
L_08AF9AC4:
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
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9AE8:
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
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9B0C:
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
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9B34:
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9B60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[0])) && ctx.fpr[13] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08AF9B9C;
      }
      goto L_08AF9B84;
    }
L_08AF9B84:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[0])) && ctx.fpr[12] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF9B9C;
      }
      goto L_08AF9B94;
    }
L_08AF9B94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9BAC;
      }
      goto L_08AF9B9C;
    }
L_08AF9B9C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08AF9BACu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF9BACu) goto L_08AF9BAC;
    return;
L_08AF9BAC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9BB8:
    jump_target = ctx.gpr[31];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9BC0:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9BEC:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9C18:
    ctx.fpr[0] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<2u>(ctx.fpr[12]));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9C28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9C48:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9C50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9C6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[0])) && ctx.fpr[13] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08AF9CA0;
      }
      goto L_08AF9C90;
    }
L_08AF9C90:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[0])) && ctx.fpr[12] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF9CB8;
      }
      goto L_08AF9CA0;
    }
L_08AF9CA0:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08AF9CB0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF9CB0u) goto L_08AF9CB0;
    return;
L_08AF9CB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9CB8;
      }
      goto L_08AF9CB8;
    }
L_08AF9CB8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9CC4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9CD4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9CDC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9CE4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF9D30;
      }
      goto L_08AF9D1C;
    }
L_08AF9D1C:
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AF9D4C;
      }
      goto L_08AF9D30;
    }
L_08AF9D30:
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[2] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    goto L_08AF9D4C;
L_08AF9D4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9D54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[2] = (ctx.gpr[4] ^ 2u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[2] = (ctx.gpr[4] ^ 4u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9D7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[2] = (ctx.gpr[4] ^ 6u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9D90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[2] = (ctx.gpr[4] ^ 8u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9DA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[2] = (ctx.gpr[4] ^ 12u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9DB8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9DC0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[5] = (ctx.gpr[5] & 31u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[2] = (ctx.gpr[4] & 496u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] >> 4u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9DF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9E08;
      }
      goto L_08AF9E00;
    }
L_08AF9E00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF9E0C;
      }
      goto L_08AF9E08;
    }
L_08AF9E08:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AF9E0C;
L_08AF9E0C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9E14:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 12u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9E38:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 14u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9E5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[2] = (ctx.gpr[4] & 16384u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9E6C:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (65535u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32767));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 15u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9E94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[2] = (ctx.gpr[4] & 32768u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9EA4:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (65534u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 17u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9ECC:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9EF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9F18:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9F20:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9F28:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9F30:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9F38:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9F40:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9F48:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(266), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9F50:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(296)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9F58:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9F60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF9F78u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08AF9F78u) goto L_08AF9F78;
    return;
L_08AF9F78:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9F84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF9FA8u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 288u, 0x08A0E2E0u>(ctx, &aot_mem) && ctx.pc == 0x08AF9FA8u) goto L_08AF9FA8;
    return;
L_08AF9FA8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9FB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA028:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA0A8:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(292)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA0B0:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(160))))));
    ctx.gpr[2] = (ctx.gpr[4] ^ 82u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA0D4:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(160))))));
    ctx.gpr[2] = (ctx.gpr[4] ^ 70u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA0F8:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA100:
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA110:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA118:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA13C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[2] = (ctx.gpr[4] & 32u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA14C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA154:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA15C:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(588)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA164:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA16C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA174:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFA1A4;
      }
      goto L_08AFA180;
    }
L_08AFA180:
    ctx.gpr[7] = (0u | 65535u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AFA1A4;
      }
      goto L_08AFA18C;
    }
L_08AFA18C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFA1A4;
      }
      goto L_08AFA1A0;
    }
L_08AFA1A0:
    ctx.gpr[6] = (0u | 1u);
    goto L_08AFA1A4;
L_08AFA1A4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[6] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA1AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA1B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFA1D0u);
    ctx.gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA1D0u) goto L_08AFA1D0;
    return;
L_08AFA1D0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA1E4:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1560)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA1EC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA1F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFA248;
      }
      goto L_08AFA218;
    }
L_08AFA218:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFA248;
      }
      goto L_08AFA220;
    }
L_08AFA220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA240;
      }
      goto L_08AFA22C;
    }
L_08AFA22C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA23C;
      }
      goto L_08AFA234;
    }
L_08AFA234:
    ctx.gpr[31] = (0x08AFA23Cu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08AFA23Cu) goto L_08AFA23C;
    return;
L_08AFA23C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_08AFA240;
L_08AFA240:
    ctx.gpr[31] = (0x08AFA248u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x08AFA248u) goto L_08AFA248;
    return;
L_08AFA248:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA260:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA268:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA288:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] & 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA294:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8048)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA2A0:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8047)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA2AC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA2B4:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-23884));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA2C0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA2C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA2E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFA340;
      }
      goto L_08AFA300;
    }
L_08AFA300:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08AFA330;
      }
      goto L_08AFA308;
    }
L_08AFA308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08AFA330;
      }
      goto L_08AFA318;
    }
L_08AFA318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08AFA330;
    }
    goto L_08AFA324;
L_08AFA324:
    ctx.gpr[31] = (0x08AFA32Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08AFA32Cu) goto L_08AFA32C;
    return;
L_08AFA32C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08AFA330;
L_08AFA330:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA340;
      }
      goto L_08AFA338;
    }
L_08AFA338:
    ctx.gpr[31] = (0x08AFA340u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08AFA340u) goto L_08AFA340;
    return;
L_08AFA340:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[2] = (ctx.gpr[4] & 14u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] >> 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA364:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20932)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA388;
      }
      goto L_08AFA380;
    }
L_08AFA380:
    ctx.gpr[31] = (0x08AFA388u);
    // nop
    goto L_08AFA53C;
L_08AFA388:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA39C:
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA3C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA3EC;
      }
      goto L_08AFA3D0;
    }
L_08AFA3D0:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9948));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFA3EC;
      }
      goto L_08AFA3E4;
    }
L_08AFA3E4:
    ctx.gpr[31] = (0x08AFA3ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08AFA3ECu) goto L_08AFA3EC;
    return;
L_08AFA3EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA3F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA440;
      }
      goto L_08AFA408;
    }
L_08AFA408:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9932));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-20928), 0u);
      if (branch_taken) {
          goto L_08AFA42C;
      }
      goto L_08AFA420;
    }
L_08AFA420:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9948));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08AFA42C;
L_08AFA42C:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA440;
      }
      goto L_08AFA438;
    }
L_08AFA438:
    ctx.gpr[31] = (0x08AFA440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08AFA440u) goto L_08AFA440;
    return;
L_08AFA440:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA44C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFA4C0;
      }
      goto L_08AFA468;
    }
L_08AFA468:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9916));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08AFA480u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 54u, 0x088B83F8u>(ctx, &aot_mem) && ctx.pc == 0x08AFA480u) goto L_08AFA480;
    return;
L_08AFA480:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08AFA4B0;
      }
      goto L_08AFA488;
    }
L_08AFA488:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9932));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-20928), 0u);
      if (branch_taken) {
          goto L_08AFA4AC;
      }
      goto L_08AFA4A0;
    }
L_08AFA4A0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9948));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08AFA4AC;
L_08AFA4AC:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08AFA4B0;
L_08AFA4B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA4C0;
      }
      goto L_08AFA4B8;
    }
L_08AFA4B8:
    ctx.gpr[31] = (0x08AFA4C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08AFA4C0u) goto L_08AFA4C0;
    return;
L_08AFA4C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA4D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFA528;
      }
      goto L_08AFA4F0;
    }
L_08AFA4F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08AFA518;
    }
    goto L_08AFA504;
L_08AFA504:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08AFA514u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA514u) goto L_08AFA514;
    return;
L_08AFA514:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08AFA518;
L_08AFA518:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA528;
      }
      goto L_08AFA520;
    }
L_08AFA520:
    ctx.gpr[31] = (0x08AFA528u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08AFA528u) goto L_08AFA528;
    return;
L_08AFA528:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA53C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFA558u);
    ctx.gpr[4] = (0u | 3188u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AFA558u) goto L_08AFA558;
    return;
L_08AFA558:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA570;
      }
      goto L_08AFA564;
    }
L_08AFA564:
    ctx.gpr[31] = (0x08AFA56Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 357u, 0x08A09770u>(ctx, &aot_mem) && ctx.pc == 0x08AFA56Cu) goto L_08AFA56C;
    return;
L_08AFA56C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AFA570;
L_08AFA570:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[31] = (0x08AFA57Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-20932), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 261u, 0x08A29668u>(ctx, &aot_mem) && ctx.pc == 0x08AFA57Cu) goto L_08AFA57C;
    return;
L_08AFA57C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[31] = (0x08AFA588u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 259u, 0x08A29650u>(ctx, &aot_mem) && ctx.pc == 0x08AFA588u) goto L_08AFA588;
    return;
L_08AFA588:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA59C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFA5B8u);
    ctx.gpr[4] = (0u | 260u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AFA5B8u) goto L_08AFA5B8;
    return;
L_08AFA5B8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA5D0;
      }
      goto L_08AFA5C4;
    }
L_08AFA5C4:
    ctx.gpr[31] = (0x08AFA5CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 485u, 0x0882BCC4u>(ctx, &aot_mem) && ctx.pc == 0x08AFA5CCu) goto L_08AFA5CC;
    return;
L_08AFA5CC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AFA5D0;
L_08AFA5D0:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[31] = (0x08AFA5DCu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-20928), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 261u, 0x08A29668u>(ctx, &aot_mem) && ctx.pc == 0x08AFA5DCu) goto L_08AFA5DC;
    return;
L_08AFA5DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20928)));
    ctx.gpr[31] = (0x08AFA5E8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 259u, 0x08A29650u>(ctx, &aot_mem) && ctx.pc == 0x08AFA5E8u) goto L_08AFA5E8;
    return;
L_08AFA5E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA5FC:
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA638:
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
L_08AFA660:
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
    ctx.execute_vfpu_vrot(1u, 64u, 2u, 4u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<33u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA688:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA6D0;
      }
      goto L_08AFA698;
    }
L_08AFA698:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9900));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-20908), 0u);
      if (branch_taken) {
          goto L_08AFA6BC;
      }
      goto L_08AFA6B0;
    }
L_08AFA6B0:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9948));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08AFA6BC;
L_08AFA6BC:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA6D0;
      }
      goto L_08AFA6C8;
    }
L_08AFA6C8:
    ctx.gpr[31] = (0x08AFA6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08AFA6D0u) goto L_08AFA6D0;
    return;
L_08AFA6D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA6DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFA6F8u);
    ctx.gpr[4] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AFA6F8u) goto L_08AFA6F8;
    return;
L_08AFA6F8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA710;
      }
      goto L_08AFA704;
    }
L_08AFA704:
    ctx.gpr[31] = (0x08AFA70Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 1u, 0x08838004u>(ctx, &aot_mem) && ctx.pc == 0x08AFA70Cu) goto L_08AFA70C;
    return;
L_08AFA70C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AFA710;
L_08AFA710:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[31] = (0x08AFA71Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-20908), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 261u, 0x08A29668u>(ctx, &aot_mem) && ctx.pc == 0x08AFA71Cu) goto L_08AFA71C;
    return;
L_08AFA71C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20908)));
    ctx.gpr[31] = (0x08AFA728u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 259u, 0x08A29650u>(ctx, &aot_mem) && ctx.pc == 0x08AFA728u) goto L_08AFA728;
    return;
L_08AFA728:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA73C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[9] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 3u));
    ctx.gpr[9] = (ctx.gpr[9] >> 29u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 3u));
    ctx.gpr[7] = (ctx.gpr[17] < ctx.gpr[8] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AFA798;
      }
      goto L_08AFA788;
    }
L_08AFA788:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AFA7A4;
      }
      goto L_08AFA798;
    }
L_08AFA798:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
    goto L_08AFA7A4;
L_08AFA7A4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFA800;
      }
      goto L_08AFA7AC;
    }
L_08AFA7AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AFA7C4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08AFA7C4u) goto L_08AFA7C4;
    return;
L_08AFA7C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08AFA800;
      }
      goto L_08AFA7DC;
    }
L_08AFA7DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AFA7F0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08AF99F0;
L_08AFA7F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08AFA800;
L_08AFA800:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFA838;
      }
      goto L_08AFA810;
    }
L_08AFA810:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
        goto L_08AFA830;
    }
    goto L_08AFA81C;
L_08AFA81C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    goto L_08AFA830;
L_08AFA830:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AFA810;
      }
      goto L_08AFA838;
    }
L_08AFA838:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08AFA870;
      }
      goto L_08AFA848;
    }
L_08AFA848:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA864;
      }
      goto L_08AFA854;
    }
L_08AFA854:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08AFA864;
L_08AFA864:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFA8A4;
      }
      goto L_08AFA870;
    }
L_08AFA870:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFA8A0;
      }
      goto L_08AFA878;
    }
L_08AFA878:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_08AFA898;
    }
    goto L_08AFA884;
L_08AFA884:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_08AFA898;
L_08AFA898:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AFA878;
      }
      goto L_08AFA8A0;
    }
L_08AFA8A0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFA8A4;
L_08AFA8A4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA8E8;
      }
      goto L_08AFA8AC;
    }
L_08AFA8AC:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFA8E8;
      }
      goto L_08AFA8BC;
    }
L_08AFA8BC:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
        goto L_08AFA8DC;
    }
    goto L_08AFA8C8;
L_08AFA8C8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_08AFA8DC;
L_08AFA8DC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AFA8BC;
      }
      goto L_08AFA8E4;
    }
L_08AFA8E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFA8E8;
L_08AFA8E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFA904;
      }
      goto L_08AFA8F8;
    }
L_08AFA8F8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    goto L_08AFA8FC;
L_08AFA8FC:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AFA8FC;
      }
      goto L_08AFA904;
    }
L_08AFA904:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA914;
      }
      goto L_08AFA90C;
    }
L_08AFA90C:
    ctx.gpr[31] = (0x08AFA914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA914u) goto L_08AFA914;
    return;
L_08AFA914:
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA944:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (0u | 12u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[11]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[9] & 255u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AFA9B8;
      }
      goto L_08AFA9A8;
    }
L_08AFA9A8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFA9C4;
      }
      goto L_08AFA9B8;
    }
L_08AFA9B8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    goto L_08AFA9C4;
L_08AFA9C4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFA9F8;
      }
      goto L_08AFA9CC;
    }
L_08AFA9CC:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[31] = (0x08AFA9E0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08AFA9E0u) goto L_08AFA9E0;
    return;
L_08AFA9E0:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08AFA9F8;
      }
      goto L_08AFA9EC;
    }
L_08AFA9EC:
    ctx.gpr[31] = (0x08AFA9F4u);
    // nop
    goto L_08AF99F0;
L_08AFA9F4:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    goto L_08AFA9F8;
L_08AFA9F8:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[23] | 0u);
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFAA38;
      }
      goto L_08AFAA08;
    }
L_08AFAA08:
    ctx.gpr[30] = (ctx.gpr[23] | 0u);
    if (ctx.gpr[30] == 0u) {
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
        goto L_08AFAA30;
    }
    goto L_08AFAA14;
L_08AFAA14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFAA24u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_08AF9704;
L_08AFAA24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
    goto L_08AFAA30;
L_08AFAA30:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[17];
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFAA08;
      }
      goto L_08AFAA38;
    }
L_08AFAA38:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFAA78;
      }
      goto L_08AFAA48;
    }
L_08AFAA48:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAA6C;
      }
      goto L_08AFAA54;
    }
L_08AFAA54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFAA64u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AF9704;
L_08AFAA64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AFAA6C;
L_08AFAA6C:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFAAB4;
      }
      goto L_08AFAA78;
    }
L_08AFAA78:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFAAB0;
      }
      goto L_08AFAA80;
    }
L_08AFAA80:
    ctx.gpr[30] = (ctx.gpr[23] | 0u);
    if (ctx.gpr[30] == 0u) {
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
        goto L_08AFAAA8;
    }
    goto L_08AFAA8C;
L_08AFAA8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFAA9Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_08AF9704;
L_08AFAA9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08AFAAA8;
L_08AFAAA8:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFAA80;
      }
      goto L_08AFAAB0;
    }
L_08AFAAB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFAAB4;
L_08AFAAB4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAAFC;
      }
      goto L_08AFAABC;
    }
L_08AFAABC:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFAAFC;
      }
      goto L_08AFAAC8;
    }
L_08AFAAC8:
    ctx.gpr[19] = (ctx.gpr[23] | 0u);
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
        goto L_08AFAAF0;
    }
    goto L_08AFAAD4;
L_08AFAAD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFAAE4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08AF9704;
L_08AFAAE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    goto L_08AFAAF0;
L_08AFAAF0:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFAAC8;
      }
      goto L_08AFAAF8;
    }
L_08AFAAF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFAAFC;
L_08AFAAFC:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFAB54;
      }
      goto L_08AFAB10;
    }
L_08AFAB10:
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[22] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-21288));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(5440));
    goto L_08AFAB20;
L_08AFAB20:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
        goto L_08AFAB48;
    }
    goto L_08AFAB28;
L_08AFAB28:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
        goto L_08AFAB48;
    }
    goto L_08AFAB30;
L_08AFAB30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFAB44;
      }
      goto L_08AFAB3C;
    }
L_08AFAB3C:
    ctx.gpr[31] = (0x08AFAB44u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFAB44u) goto L_08AFAB44;
    return;
L_08AFAB44:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    goto L_08AFAB48;
L_08AFAB48:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AFAB20;
      }
      goto L_08AFAB50;
    }
L_08AFAB50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AFAB54;
L_08AFAB54:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAB64;
      }
      goto L_08AFAB5C;
    }
L_08AFAB5C:
    ctx.gpr[31] = (0x08AFAB64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFAB64u) goto L_08AFAB64;
    return;
L_08AFAB64:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
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
L_08AFABB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFABF8;
      }
      goto L_08AFABC0;
    }
L_08AFABC0:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9884));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-20904), 0u);
      if (branch_taken) {
          goto L_08AFABE4;
      }
      goto L_08AFABD8;
    }
L_08AFABD8:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9948));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08AFABE4;
L_08AFABE4:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFABF8;
      }
      goto L_08AFABF0;
    }
L_08AFABF0:
    ctx.gpr[31] = (0x08AFABF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08AFABF8u) goto L_08AFABF8;
    return;
L_08AFABF8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFAC04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFAD7C;
      }
      goto L_08AFAC34;
    }
L_08AFAC34:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9868));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFAC78;
      }
      goto L_08AFAC50;
    }
L_08AFAC50:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFAC78;
      }
      goto L_08AFAC60;
    }
L_08AFAC60:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAC78;
      }
      goto L_08AFAC68;
    }
L_08AFAC68:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAC78;
      }
      goto L_08AFAC70;
    }
L_08AFAC70:
    ctx.gpr[31] = (0x08AFAC78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFAC78u) goto L_08AFAC78;
    return;
L_08AFAC78:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFACC0;
      }
      goto L_08AFAC80;
    }
L_08AFAC80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFACA0;
      }
      goto L_08AFAC94;
    }
L_08AFAC94:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_08AFAC98;
L_08AFAC98:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AFAC98;
      }
      goto L_08AFACA0;
    }
L_08AFACA0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFACC0;
      }
      goto L_08AFACA8;
    }
L_08AFACA8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFACC0;
      }
      goto L_08AFACB0;
    }
L_08AFACB0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFACC0;
      }
      goto L_08AFACB8;
    }
L_08AFACB8:
    ctx.gpr[31] = (0x08AFACC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFACC0u) goto L_08AFACC0;
    return;
L_08AFACC0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAD3C;
      }
      goto L_08AFACC8;
    }
L_08AFACC8:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFAD18;
      }
      goto L_08AFACD8;
    }
L_08AFACD8:
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[22] = (2232u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-21288));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(5440));
    goto L_08AFACE8;
L_08AFACE8:
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
        goto L_08AFAD10;
    }
    goto L_08AFACF0;
L_08AFACF0:
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
        goto L_08AFAD10;
    }
    goto L_08AFACF8;
L_08AFACF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFAD0C;
      }
      goto L_08AFAD04;
    }
L_08AFAD04:
    ctx.gpr[31] = (0x08AFAD0Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFAD0Cu) goto L_08AFAD0C;
    return;
L_08AFAD0C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    goto L_08AFAD10;
L_08AFAD10:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AFACE8;
      }
      goto L_08AFAD18;
    }
L_08AFAD18:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAD3C;
      }
      goto L_08AFAD20;
    }
L_08AFAD20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAD3C;
      }
      goto L_08AFAD2C;
    }
L_08AFAD2C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAD3C;
      }
      goto L_08AFAD34;
    }
L_08AFAD34:
    ctx.gpr[31] = (0x08AFAD3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFAD3Cu) goto L_08AFAD3C;
    return;
L_08AFAD3C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08AFAD6C;
      }
      goto L_08AFAD44;
    }
L_08AFAD44:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9884));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904), 0u);
      if (branch_taken) {
          goto L_08AFAD68;
      }
      goto L_08AFAD5C;
    }
L_08AFAD5C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9948));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08AFAD68;
L_08AFAD68:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    goto L_08AFAD6C;
L_08AFAD6C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAD7C;
      }
      goto L_08AFAD74;
    }
L_08AFAD74:
    ctx.gpr[31] = (0x08AFAD7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08AFAD7Cu) goto L_08AFAD7C;
    return;
L_08AFAD7C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFADA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFAEE8;
      }
      goto L_08AFADF0;
    }
L_08AFADF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 2u));
      if (branch_taken) {
          goto L_08AFAEA0;
      }
      goto L_08AFAE10;
    }
L_08AFAE10:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFAE44;
      }
      goto L_08AFAE20;
    }
L_08AFAE20:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[31] = (0x08AFAE2Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08AFAE2Cu) goto L_08AFAE2C;
    return;
L_08AFAE2C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AFAE44;
      }
      goto L_08AFAE38;
    }
L_08AFAE38:
    ctx.gpr[31] = (0x08AFAE40u);
    // nop
    goto L_08AF99F0;
L_08AFAE40:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08AFAE44;
L_08AFAE44:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AFAE64u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AFB090;
L_08AFAE64:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFAE84;
      }
      goto L_08AFAE74;
    }
L_08AFAE74:
    ctx.gpr[6] = (ctx.gpr[20] - ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AFAE84u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFAE84u) goto L_08AFAE84;
    return;
L_08AFAE84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFAECC;
      }
      goto L_08AFAE90;
    }
L_08AFAE90:
    ctx.gpr[31] = (0x08AFAE98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFAE98u) goto L_08AFAE98;
    return;
L_08AFAE98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAECC;
      }
      goto L_08AFAEA0;
    }
L_08AFAEA0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFAECC;
      }
      goto L_08AFAEA8;
    }
L_08AFAEA8:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[31] = (0x08AFAEB4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08AFAEB4u) goto L_08AFAEB4;
    return;
L_08AFAEB4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08AFAECC;
      }
      goto L_08AFAEC0;
    }
L_08AFAEC0:
    ctx.gpr[31] = (0x08AFAEC8u);
    // nop
    goto L_08AF99F0;
L_08AFAEC8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08AFAECC;
L_08AFAECC:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_08AFAEE8;
L_08AFAEE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFAF0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-21288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AFAFFC;
      }
      goto L_08AFAF40;
    }
L_08AFAF40:
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(5440));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFAFB4;
      }
      goto L_08AFAF50;
    }
L_08AFAF50:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08AFAF68u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 814u, 0x08AA3D54u>(ctx, &aot_mem) && ctx.pc == 0x08AFAF68u) goto L_08AFAF68;
    return;
L_08AFAF68:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[2] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AFAFE4;
      }
      goto L_08AFAF80;
    }
L_08AFAF80:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08AFAFA0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 715u, 0x08AA3578u>(ctx, &aot_mem) && ctx.pc == 0x08AFAFA0u) goto L_08AFAFA0;
    return;
L_08AFAFA0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AFAFE4;
      }
      goto L_08AFAFB4;
    }
L_08AFAFB4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[31] = (0x08AFAFD0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08AFAFD0u) goto L_08AFAFD0;
    return;
L_08AFAFD0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08AFAFE4;
L_08AFAFE4:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AFAFF4u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AFAFF4u) goto L_08AFAFF4;
    return;
L_08AFAFF4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AFB018;
      }
      goto L_08AFAFFC;
    }
L_08AFAFFC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AFB018;
      }
      goto L_08AFB004;
    }
L_08AFB004:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08AFB010u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFB010u) goto L_08AFB010;
    return;
L_08AFB010:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_08AFB018;
L_08AFB018:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB030:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFB04Cu);
    ctx.gpr[4] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AFB04Cu) goto L_08AFB04C;
    return;
L_08AFB04C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB064;
      }
      goto L_08AFB058;
    }
L_08AFB058:
    ctx.gpr[31] = (0x08AFB060u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 198u, 0x08838CECu>(ctx, &aot_mem) && ctx.pc == 0x08AFB060u) goto L_08AFB060;
    return;
L_08AFB060:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AFB064;
L_08AFB064:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[31] = (0x08AFB070u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-20904), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 261u, 0x08A29668u>(ctx, &aot_mem) && ctx.pc == 0x08AFB070u) goto L_08AFB070;
    return;
L_08AFB070:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20904)));
    ctx.gpr[31] = (0x08AFB07Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 259u, 0x08A29650u>(ctx, &aot_mem) && ctx.pc == 0x08AFB07Cu) goto L_08AFB07C;
    return;
L_08AFB07C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB090:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB0A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AFB0D4;
      }
      goto L_08AFB0CC;
    }
L_08AFB0CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB11C;
      }
      goto L_08AFB0D4;
    }
L_08AFB0D4:
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AFB11C;
      }
      goto L_08AFB0E0;
    }
L_08AFB0E0:
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    jump_target = ctx.gpr[16];
    ctx.gpr[31] = (0x08AFB0FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AFB0FCu) goto L_08AFB0FC;
    return;
L_08AFB0FC:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFB0E0;
      }
      goto L_08AFB11C;
    }
L_08AFB11C:
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
L_08AFB138:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AFB160;
      }
      goto L_08AFB148;
    }
L_08AFB148:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13548));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFB160;
      }
      goto L_08AFB158;
    }
L_08AFB158:
    ctx.gpr[31] = (0x08AFB160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08AFB160u) goto L_08AFB160;
    return;
L_08AFB160:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB16C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB174:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB17C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AFB1B8;
      }
      goto L_08AFB18C;
    }
L_08AFB18C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-17516));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFB1A4;
      }
      goto L_08AFB198;
    }
L_08AFB198:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13548));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_08AFB1A4;
L_08AFB1A4:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB1B8;
      }
      goto L_08AFB1B0;
    }
L_08AFB1B0:
    ctx.gpr[31] = (0x08AFB1B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08AFB1B8u) goto L_08AFB1B8;
    return;
L_08AFB1B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB1C4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB1CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AFB218;
      }
      goto L_08AFB1DC;
    }
L_08AFB1DC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-20900));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFB204;
      }
      goto L_08AFB1E8;
    }
L_08AFB1E8:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-17516));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFB204;
      }
      goto L_08AFB1F8;
    }
L_08AFB1F8:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13548));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_08AFB204;
L_08AFB204:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB218;
      }
      goto L_08AFB210;
    }
L_08AFB210:
    ctx.gpr[31] = (0x08AFB218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08AFB218u) goto L_08AFB218;
    return;
L_08AFB218:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB224:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB22C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB234:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB23C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB244:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB24C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFB2AC;
      }
      goto L_08AFB268;
    }
L_08AFB268:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08AFB29C;
      }
      goto L_08AFB274;
    }
L_08AFB274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08AFB29C;
      }
      goto L_08AFB284;
    }
L_08AFB284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08AFB29C;
    }
    goto L_08AFB290;
L_08AFB290:
    ctx.gpr[31] = (0x08AFB298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08AFB298u) goto L_08AFB298;
    return;
L_08AFB298:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08AFB29C;
L_08AFB29C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB2AC;
      }
      goto L_08AFB2A4;
    }
L_08AFB2A4:
    ctx.gpr[31] = (0x08AFB2ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08AFB2ACu) goto L_08AFB2AC;
    return;
L_08AFB2AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB2C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08AFB2E4;
      }
      goto L_08AFB2D4;
    }
L_08AFB2D4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AFB35C;
      }
      goto L_08AFB2E4;
    }
L_08AFB2E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08AFB314u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08AFB314u) goto L_08AFB314;
    return;
L_08AFB314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AFB32Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AFB32Cu) goto L_08AFB32C;
    return;
L_08AFB32C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08AFB348u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AFB348u) goto L_08AFB348;
    return;
L_08AFB348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08AFB35C;
L_08AFB35C:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB36C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21288));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5440));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFB40C;
      }
      goto L_08AFB3AC;
    }
L_08AFB3AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AFB3C8u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 814u, 0x08AA3D54u>(ctx, &aot_mem) && ctx.pc == 0x08AFB3C8u) goto L_08AFB3C8;
    return;
L_08AFB3C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AFB430;
      }
      goto L_08AFB3E0;
    }
L_08AFB3E0:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08AFB400u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 715u, 0x08AA3578u>(ctx, &aot_mem) && ctx.pc == 0x08AFB400u) goto L_08AFB400;
    return;
L_08AFB400:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AFB430;
      }
      goto L_08AFB40C;
    }
L_08AFB40C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AFB424u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08AFB424u) goto L_08AFB424;
    return;
L_08AFB424:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08AFB430;
L_08AFB430:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFB448u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AFB448u) goto L_08AFB448;
    return;
L_08AFB448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB46C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB4B4;
      }
      goto L_08AFB47C;
    }
L_08AFB47C:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9852));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-21280), 0u);
      if (branch_taken) {
          goto L_08AFB4A0;
      }
      goto L_08AFB494;
    }
L_08AFB494:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9948));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08AFB4A0;
L_08AFB4A0:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB4B4;
      }
      goto L_08AFB4AC;
    }
L_08AFB4AC:
    ctx.gpr[31] = (0x08AFB4B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08AFB4B4u) goto L_08AFB4B4;
    return;
L_08AFB4B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB4C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFB554;
      }
      goto L_08AFB4DC;
    }
L_08AFB4DC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9836));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB514;
      }
      goto L_08AFB4F4;
    }
L_08AFB4F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFB514;
      }
      goto L_08AFB508;
    }
L_08AFB508:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08AFB514u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFB514u) goto L_08AFB514;
    return;
L_08AFB514:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08AFB544;
      }
      goto L_08AFB51C;
    }
L_08AFB51C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9852));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-21280), 0u);
      if (branch_taken) {
          goto L_08AFB540;
      }
      goto L_08AFB534;
    }
L_08AFB534:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9948));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08AFB540;
L_08AFB540:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08AFB544;
L_08AFB544:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB554;
      }
      goto L_08AFB54C;
    }
L_08AFB54C:
    ctx.gpr[31] = (0x08AFB554u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08AFB554u) goto L_08AFB554;
    return;
L_08AFB554:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB568:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB570:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08AFB580;
L_08AFB580:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AFB5AC;
      }
      goto L_08AFB58C;
    }
L_08AFB58C:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB5A4;
      }
      goto L_08AFB594;
    }
L_08AFB594:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFB5AC;
      }
      goto L_08AFB5A4;
    }
L_08AFB5A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFB62C;
      }
      goto L_08AFB5AC;
    }
L_08AFB5AC:
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB580;
      }
      goto L_08AFB5C8;
    }
L_08AFB5C8:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-128));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] & 127u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] & 127u);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_08AFB62C;
L_08AFB62C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB634:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.gpr[6] = (ctx.gpr[6] << 5u);
    ctx.gpr[8] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFB660u);
    ctx.gpr[16] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_08AFB6B8;
L_08AFB660:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB674:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 544u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] | 128u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB6B0;
      }
      goto L_08AFB6AC;
    }
L_08AFB6AC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08AFB6B0;
L_08AFB6B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB6B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-128));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] & 127u);
    ctx.gpr[5] = (ctx.gpr[7] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 128u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB744;
      }
      goto L_08AFB720;
    }
L_08AFB720:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 128u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB720;
      }
      goto L_08AFB744;
    }
L_08AFB744:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB74C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 544u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[5] << 8u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 544u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB794:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB79C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFB7C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08AFB7C0u) goto L_08AFB7C0;
    return;
L_08AFB7C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21288));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5440));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFB848;
      }
      goto L_08AFB7E8;
    }
L_08AFB7E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AFB804u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 814u, 0x08AA3D54u>(ctx, &aot_mem) && ctx.pc == 0x08AFB804u) goto L_08AFB804;
    return;
L_08AFB804:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AFB86C;
      }
      goto L_08AFB81C;
    }
L_08AFB81C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08AFB83Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 715u, 0x08AA3578u>(ctx, &aot_mem) && ctx.pc == 0x08AFB83Cu) goto L_08AFB83C;
    return;
L_08AFB83C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AFB86C;
      }
      goto L_08AFB848;
    }
L_08AFB848:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AFB860u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08AFB860u) goto L_08AFB860;
    return;
L_08AFB860:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08AFB86C;
L_08AFB86C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08AFB880u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AFB880u) goto L_08AFB880;
    return;
L_08AFB880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB8A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB8C0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB8C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB908:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB910:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB918:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB920:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1428));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB93C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB94C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[4] & ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB95C:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB970:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1724)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB97C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1724)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB984:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-18044));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB990:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
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
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB9BC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AFB9F8;
      }
      goto L_08AFB9DC;
    }
L_08AFB9DC:
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFB9FC;
      }
      goto L_08AFB9F8;
    }
L_08AFB9F8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AFB9FC;
L_08AFB9FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBA04:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
      if (branch_taken) {
          goto L_08AFBA4C;
      }
      goto L_08AFBA24;
    }
L_08AFBA24:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFBA50;
      }
      goto L_08AFBA4C;
    }
L_08AFBA4C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AFBA50;
L_08AFBA50:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBA58:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(3248));
      if (branch_taken) {
          goto L_08AFBA8C;
      }
      goto L_08AFBA78;
    }
L_08AFBA78:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFBA90;
      }
      goto L_08AFBA8C;
    }
L_08AFBA8C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AFBA90;
L_08AFBA90:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBA98:
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
L_08AFBAB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFBBF8;
      }
      goto L_08AFBB00;
    }
L_08AFBB00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 2u));
      if (branch_taken) {
          goto L_08AFBBB0;
      }
      goto L_08AFBB20;
    }
L_08AFBB20:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFBB54;
      }
      goto L_08AFBB30;
    }
L_08AFBB30:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[31] = (0x08AFBB3Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08AFBB3Cu) goto L_08AFBB3C;
    return;
L_08AFBB3C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AFBB54;
      }
      goto L_08AFBB48;
    }
L_08AFBB48:
    ctx.gpr[31] = (0x08AFBB50u);
    // nop
    goto L_08AF99F0;
L_08AFBB50:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08AFBB54;
L_08AFBB54:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AFBB74u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AFBF3C;
L_08AFBB74:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFBB94;
      }
      goto L_08AFBB84;
    }
L_08AFBB84:
    ctx.gpr[6] = (ctx.gpr[20] - ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AFBB94u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFBB94u) goto L_08AFBB94;
    return;
L_08AFBB94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFBBDC;
      }
      goto L_08AFBBA0;
    }
L_08AFBBA0:
    ctx.gpr[31] = (0x08AFBBA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFBBA8u) goto L_08AFBBA8;
    return;
L_08AFBBA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBBDC;
      }
      goto L_08AFBBB0;
    }
L_08AFBBB0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFBBDC;
      }
      goto L_08AFBBB8;
    }
L_08AFBBB8:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[31] = (0x08AFBBC4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08AFBBC4u) goto L_08AFBBC4;
    return;
L_08AFBBC4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08AFBBDC;
      }
      goto L_08AFBBD0;
    }
L_08AFBBD0:
    ctx.gpr[31] = (0x08AFBBD8u);
    // nop
    goto L_08AF99F0;
L_08AFBBD8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08AFBBDC;
L_08AFBBDC:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_08AFBBF8;
L_08AFBBF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBC1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_08AFBC44;
L_08AFBC44:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFBD70;
      }
      goto L_08AFBC4C;
    }
L_08AFBC4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBD70;
      }
      goto L_08AFBC5C;
    }
L_08AFBC5C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFBCF0;
      }
      goto L_08AFBC6C;
    }
L_08AFBC6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBCA8;
      }
      goto L_08AFBC78;
    }
L_08AFBC78:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBCA8;
      }
      goto L_08AFBC84;
    }
L_08AFBC84:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFBCE8;
      }
      goto L_08AFBCA8;
    }
L_08AFBCA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[17] != ctx.gpr[5]) {
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
        goto L_08AFBCC8;
    }
    goto L_08AFBCB4;
L_08AFBCB4:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AFBCC0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AFBE84;
L_08AFBCC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_08AFBCC8;
L_08AFBCC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AFBCE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08AFBEE0;
L_08AFBCE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AFBCE8;
L_08AFBCE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBD68;
      }
      goto L_08AFBCF0;
    }
L_08AFBCF0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBD28;
      }
      goto L_08AFBCF8;
    }
L_08AFBCF8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBD28;
      }
      goto L_08AFBD04;
    }
L_08AFBD04:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFBD68;
      }
      goto L_08AFBD28;
    }
L_08AFBD28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[17] != ctx.gpr[5]) {
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
        goto L_08AFBD48;
    }
    goto L_08AFBD34;
L_08AFBD34:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AFBD40u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AFBEE0;
L_08AFBD40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_08AFBD48;
L_08AFBD48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AFBD64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08AFBE84;
L_08AFBD64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AFBD68;
L_08AFBD68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBC44;
      }
      goto L_08AFBD70;
    }
L_08AFBD70:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
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
L_08AFBD8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBDC0;
      }
      goto L_08AFBD98;
    }
L_08AFBD98:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBDF4;
      }
      goto L_08AFBDA8;
    }
L_08AFBDA8:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBDA8;
      }
      goto L_08AFBDB8;
    }
L_08AFBDB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBDF4;
      }
      goto L_08AFBDC0;
    }
L_08AFBDC0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AFBDE8;
      }
      goto L_08AFBDD0;
    }
L_08AFBDD0:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFBDD0;
      }
      goto L_08AFBDE4;
    }
L_08AFBDE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08AFBDE8;
L_08AFBDE8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AFBDF4;
      }
      goto L_08AFBDF0;
    }
L_08AFBDF0:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08AFBDF4;
L_08AFBDF4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBDFC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBE20;
      }
      goto L_08AFBE08;
    }
L_08AFBE08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFBE20;
      }
      goto L_08AFBE18;
    }
L_08AFBE18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AFBE7C;
      }
      goto L_08AFBE20;
    }
L_08AFBE20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBE54;
      }
      goto L_08AFBE2C;
    }
L_08AFBE2C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBE4C;
      }
      goto L_08AFBE3C;
    }
L_08AFBE3C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBE3C;
      }
      goto L_08AFBE4C;
    }
L_08AFBE4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBE7C;
      }
      goto L_08AFBE54;
    }
L_08AFBE54:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AFBE7C;
      }
      goto L_08AFBE68;
    }
L_08AFBE68:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AFBE68;
      }
      goto L_08AFBE7C;
    }
L_08AFBE7C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBE84:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AFBE9C;
      }
      goto L_08AFBE94;
    }
L_08AFBE94:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08AFBE9C;
L_08AFBE9C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AFBEB8;
      }
      goto L_08AFBEB0;
    }
L_08AFBEB0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFBED4;
      }
      goto L_08AFBEB8;
    }
L_08AFBEB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AFBED0;
      }
      goto L_08AFBEC8;
    }
L_08AFBEC8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFBED4;
      }
      goto L_08AFBED0;
    }
L_08AFBED0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    goto L_08AFBED4;
L_08AFBED4:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBEE0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AFBEF8;
      }
      goto L_08AFBEF0;
    }
L_08AFBEF0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08AFBEF8;
L_08AFBEF8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AFBF14;
      }
      goto L_08AFBF0C;
    }
L_08AFBF0C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFBF30;
      }
      goto L_08AFBF14;
    }
L_08AFBF14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AFBF2C;
      }
      goto L_08AFBF24;
    }
L_08AFBF24:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFBF30;
      }
      goto L_08AFBF2C;
    }
L_08AFBF2C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    goto L_08AFBF30;
L_08AFBF30:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBF3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBF50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBF64:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBF6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBF80:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBF8C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBF9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[4]);
    ctx.gpr[6] = (0u | 40u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 6u, 0x08AFC04Cu>(ctx, &aot_mem); return;
      }
      goto L_08AFBFE8;
    }
L_08AFBFE8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2))))));
    ctx.pc = 0x08AFC000u; return;
}

void recomp_unit_0189(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0189_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_189(Runtime &runtime) {
    runtime.register_generated_unit(189u, 0x08AF8000u, 16384u, &recomp_unit_0189, &recomp_unit_0189_entry);
    runtime.register_function(0x08AF8000u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF800Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF801Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF802Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8040u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF805Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8080u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8090u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF809Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF80B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF80C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF80D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF80F4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF80F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8104u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8124u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8138u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8144u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8160u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8168u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8178u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8194u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF81B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF81C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF81E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF81F4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8208u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8224u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8248u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8258u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8264u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8280u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8290u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF82A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF82BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF82C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8310u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8324u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8334u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8350u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8360u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8380u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF83D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF83D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF83E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF83F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF83F4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8474u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF84C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF84D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8560u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8570u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF85B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF85C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF85DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF85E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF85ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8608u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8618u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8630u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8638u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8644u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8670u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF868Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8694u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF86A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF86B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF86B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF86C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF86CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF86ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF86F4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF870Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8714u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8734u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF873Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8744u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF876Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8774u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8780u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF87A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF87B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF87BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8804u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF880Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8810u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8820u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8840u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF885Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8864u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8870u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF88B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF88B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF88BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF88CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF891Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8924u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8928u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8938u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8958u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF895Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8964u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF896Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8974u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF89A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF89ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF89B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF89C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF89F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF89F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF89FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8A0Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8A34u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8A3Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8A48u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8A80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8A8Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8AA4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8AC4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8ACCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8AD4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8AF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8AF4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8B10u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8B64u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8B6Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8B74u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8B80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8B88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8BB8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8BC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8BC4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8BD0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8BECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C00u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C0Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C18u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C24u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C2Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C44u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C64u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C94u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8CA4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8CC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8CDCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8CF8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D04u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D1Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D24u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D3Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D54u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D60u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D6Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D74u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D90u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D98u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8DA8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8DACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8DCCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8DDCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8DECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8DF4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E00u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E0Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E18u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E24u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E28u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E34u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E40u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E64u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E6Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E74u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E84u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E90u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8EA4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8EB0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8EBCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8EC4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8ECCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8EDCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8EECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F0Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F1Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F2Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F38u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F54u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F60u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F6Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F74u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F8Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FB8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FC4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FD0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FDCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FE8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FF4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FFCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9004u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9014u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9030u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9038u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9040u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9050u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9054u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9064u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9070u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF908Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9098u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF90A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF90ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF90C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF90CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF90D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF90E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF90F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9104u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9110u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF912Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9134u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF915Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9168u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF917Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9184u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF918Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9198u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF91B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF91DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF91F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF91FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9200u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF920Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9214u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF921Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9240u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9248u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9254u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9260u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9284u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9290u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF92ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF92B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF92B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF92D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF92DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9304u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF930Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9318u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9324u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF932Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9334u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9340u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9350u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9380u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9388u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF93A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF93BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF93C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9404u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9424u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF942Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9434u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9440u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF945Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9468u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF946Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9484u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF948Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9498u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF94CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF94E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF94F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF94F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9504u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9518u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9524u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9528u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9540u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9548u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9554u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9568u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9570u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9578u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9580u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9590u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF95B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF95C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF95CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF95D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF95D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF95E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF95F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF95F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9634u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9650u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9668u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9684u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9694u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF96ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF96BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF96CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF96E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF96E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9704u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9714u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9724u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9748u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9760u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9774u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9780u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF979Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9808u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9810u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9814u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9820u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF982Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9840u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9854u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF986Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9874u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF987Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9890u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9898u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF98A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF98B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF98C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF98C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF98D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF98E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF98FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9904u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF990Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9914u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF991Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF992Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF993Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9944u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF994Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF995Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9964u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9980u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF999Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF99A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF99B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF99C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF99C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF99CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF99D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF99DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF99F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A08u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A10u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A24u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A2Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A3Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A48u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A60u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A74u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A8Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A94u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9AC4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9AE8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B0Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B34u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B60u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B84u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B94u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BB8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C18u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C28u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C48u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C6Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C90u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9CA0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9CB0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9CB8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9CC4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9CD4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9CDCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9CE4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9D1Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9D30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9D4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9D54u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9D68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9D7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9D90u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9DA4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9DB8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9DC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9DE0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9DF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E00u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E08u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E0Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E14u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E38u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E5Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E6Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E94u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9EA4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9ECCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9EF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9F18u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9F20u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9F28u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9F30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9F38u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9F40u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9F48u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9F50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9F58u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9F60u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9F78u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9F84u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9FA8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9FB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA028u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA0A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA0B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA0D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA0F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA100u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA110u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA118u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA13Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA14Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA154u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA15Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA164u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA16Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA174u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA180u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA18Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1F4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA218u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA220u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA22Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA234u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA23Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA240u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA248u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA260u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA268u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA288u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA294u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA2A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA2ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA2B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA2C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA2C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA2E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA300u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA308u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA318u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA324u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA32Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA330u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA338u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA340u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA354u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA364u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA380u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA388u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA39Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA3C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA3D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA3E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA3ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA3F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA408u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA420u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA42Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA438u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA440u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA44Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA468u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA480u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA488u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA4A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA4ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA4B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA4B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA4C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA4D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA4F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA504u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA514u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA518u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA520u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA528u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA53Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA558u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA564u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA56Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA570u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA57Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA588u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA59Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA5B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA5C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA5CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA5D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA5DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA5E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA5FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA638u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA660u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA688u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA698u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA6B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA6BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA6C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA6D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA6DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA6F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA704u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA70Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA710u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA71Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA728u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA73Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA788u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA798u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA7A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA7ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA7C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA7DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA7F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA800u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA810u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA81Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA830u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA838u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA848u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA854u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA864u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA870u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA878u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA884u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA898u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA8A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA8A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA8ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA8BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA8C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA8DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA8E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA8E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA8F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA8FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA904u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA90Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA914u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA944u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA9A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA9B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA9C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA9CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA9E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA9ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA9F4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA9F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA08u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA14u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA24u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA38u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA48u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA54u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA64u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA6Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA78u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA8Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAAA8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAAB0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAAB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAABCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAAC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAAD4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAAE4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAAF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAAF8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAAFCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB10u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB20u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB28u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB3Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB44u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB48u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB54u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB5Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB64u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFABB0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFABC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFABD8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFABE4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFABF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFABF8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC04u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC34u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC60u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC70u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC78u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC94u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC98u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFACA0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFACA8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFACB0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFACB8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFACC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFACC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFACD8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFACE8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFACF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFACF8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD04u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD0Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD10u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD18u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD20u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD2Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD34u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD3Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD44u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD5Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD6Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD74u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFADA4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFADF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE10u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE20u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE2Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE38u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE40u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE44u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE64u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE74u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE84u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE90u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE98u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAEA0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAEA8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAEB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAEC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAEC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAECCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAEE8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF0Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF40u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAFA0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAFB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAFD0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAFE4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAFF4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAFFCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB004u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB010u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB018u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB030u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB04Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB058u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB060u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB064u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB070u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB07Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB090u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB0A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB0CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB0D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB0E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB0FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB11Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB138u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB148u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB158u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB160u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB16Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB174u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB17Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB18Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB198u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB1A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB1B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB1B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB1C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB1CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB1DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB1E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB1F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB204u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB210u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB218u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB224u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB22Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB234u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB23Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB244u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB24Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB268u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB274u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB284u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB290u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB298u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB29Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB2A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB2ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB2C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB2D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB2E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB314u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB32Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB348u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB35Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB36Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB3ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB3C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB3E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB400u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB40Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB424u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB430u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB448u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB46Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB47Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB494u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB4A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB4ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB4B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB4C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB4DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB4F4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB508u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB514u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB51Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB534u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB540u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB544u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB54Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB554u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB568u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB570u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB580u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB58Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB594u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB5A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB5ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB5C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB62Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB634u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB660u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB674u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB6ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB6B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB6B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB720u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB744u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB74Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB778u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB794u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB79Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB7C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB7E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB804u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB81Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB83Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB848u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB860u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB86Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB880u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB8A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB8C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB8C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB908u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB910u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB918u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB920u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB93Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB94Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB95Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB964u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB970u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB97Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB984u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB990u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB9BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB9DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB9F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB9FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBA04u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBA24u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBA4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBA50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBA58u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBA78u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBA8Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBA90u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBA98u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBAB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB00u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB20u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB3Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB48u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB54u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB74u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB84u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB94u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBBA0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBBA8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBBB0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBBB8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBBC4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBBD0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBBD8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBBDCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBBF8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC1Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC44u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC5Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC6Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC78u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC84u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBCA8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBCB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBCC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBCC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBCE4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBCE8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBCF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBCF8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD04u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD28u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD34u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD40u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD48u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD64u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD70u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD8Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD98u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDA8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDB8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDD0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDE4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDE8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDF4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDFCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE08u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE18u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE20u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE2Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE3Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE54u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE84u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE94u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBEB0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBEB8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBEC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBED0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBED4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBEE0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBEF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBEF8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF0Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF14u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF24u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF2Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF3Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF64u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF6Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF8Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBFE8u, &recomp_unit_0189, "recomp_unit_0189");
}
} // namespace psprecomp
