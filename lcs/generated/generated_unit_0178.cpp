#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0178[4085] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0,
    0, 0, 14, 0, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0, 22, 0,
    0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 26, 0, 0, 27, 0, 28, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 32, 0, 33,
    0, 34, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 45, 0,
    0, 46, 0, 0, 47, 0, 48, 0, 49, 0, 0, 50, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 55, 0, 0,
    0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 64, 65, 0, 0, 0,
    0, 0, 66, 0, 67, 0, 68, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0,
    0, 78, 0, 0, 0, 79, 0, 0, 80, 0, 81, 0, 82, 0, 83, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 87, 88, 0, 0, 0,
    0, 0, 0, 89, 0, 90, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 94, 95, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0,
    0, 98, 0, 99, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0,
    0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 113, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116,
    0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0,
    0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 135, 0, 136, 0, 137,
    0, 0, 0, 138, 0, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 146,
    0, 147, 0, 0, 0, 0, 148, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 155,
    0, 156, 0, 157, 0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 165, 166, 0,
    0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 171, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 175, 0, 176, 0, 177, 0,
    0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 191, 192, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 196, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 206,
    0, 0, 0, 207, 0, 208, 0, 0, 209, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0,
    0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 217, 0, 0, 218, 0, 219, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 222, 0, 223, 0, 0, 0,
    224, 0, 0, 225, 0, 0, 0, 226, 0, 0, 227, 0, 228, 0, 229, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 232, 0, 0, 233, 0, 234, 235,
    0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 239, 0, 0, 240, 0, 0, 0, 0, 241, 0,
    242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 247, 0, 0, 248, 0, 0, 0, 0,
    249, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 256, 257, 0, 258, 0, 0, 0,
    259, 0, 0, 0, 0, 260, 0, 0, 261, 0, 262, 263, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 266, 267, 0, 268, 0, 0, 269, 0, 270, 0,
    0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 276, 0, 277, 0, 0, 0, 0, 278, 0,
    0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 283, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 298, 0,
    0, 0, 0, 299, 0, 300, 0, 0, 301, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 309, 0, 310, 0, 311, 0,
    0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 316, 0, 317, 318, 0, 319,
    0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 325, 0, 0, 326, 0, 0, 327, 0, 328, 0, 329, 0,
    0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 333, 0, 0, 334, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0,
    0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 339, 0, 340, 0, 0, 341, 0, 0, 0, 342, 0, 343, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0,
    0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0,
    0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 356, 0, 357, 0, 0, 0, 358, 0, 359, 0, 0, 360, 0, 361, 0, 0, 0, 362,
    0, 0, 0, 363, 0, 364, 0, 365, 0, 0, 366, 367, 368, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 372, 0, 373, 0, 0, 374, 375, 376,
    0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 380, 0, 381, 0, 0, 382, 383, 384, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 388, 0,
    0, 0, 389, 0, 0, 390, 0, 391, 0, 392, 0, 393, 0, 394, 0, 395, 396, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0,
    404, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 408, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 0, 0,
    411, 0, 0, 412, 0, 413, 0, 0, 414, 0, 0, 415, 0, 0, 416, 0, 417, 0, 418, 0, 419, 420, 0, 421, 0, 0, 0, 422, 0, 0, 423, 0,
    424, 0, 0, 425, 0, 0, 0, 426, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 429, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 431, 0, 432, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 437, 438, 0, 0, 0, 0,
    0, 439, 440, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 449, 450, 0,
    451, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 457, 0, 0, 0, 0,
    458, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0, 462, 463, 0, 0, 464, 0, 0, 0,
    465, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 469, 0, 470, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 475, 0, 0, 0, 0, 476, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 481, 0, 482, 0, 0, 0, 483, 0,
    484, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 490,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 510, 0, 511, 0, 512, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0, 522, 0, 0, 0, 0, 0, 523,
    0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 527, 0, 0, 0, 528, 0, 529, 0, 0, 0, 0, 530, 0,
    531, 0, 532, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0,
    0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 543, 0,
    0, 544, 545, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    550, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 554, 0, 0, 0, 555, 0, 556, 0, 0, 557, 0, 0, 558, 0, 559, 0, 560, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 563, 0, 0,
    0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 0, 569, 0, 570, 0, 0,
    571, 0, 572, 0, 0, 573, 574, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0,
    577, 0, 0, 0, 578, 0, 579, 0, 0, 580, 0, 581, 0, 0, 582, 0, 0, 0, 583, 0, 0, 584, 0, 0, 585, 0, 0, 0, 0, 586, 0, 0,
    0, 0, 587, 0, 0, 588, 0, 0, 589, 0, 0, 590, 0, 0, 591, 0, 592, 0, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 0, 596, 0, 0,
    0, 0, 597, 0, 598, 0, 0, 599, 0, 0, 600, 0, 0, 0, 0, 601, 0, 602, 0, 0, 0, 0, 0, 0, 603, 0, 604, 0, 605, 0, 0, 0,
    606, 0, 0, 607, 0, 0, 0, 0, 608, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 612, 613, 0, 0, 0,
    0, 614, 0, 615, 0, 0, 616, 0, 617, 618, 0, 0, 619, 0, 620, 0, 0, 0, 0, 621, 0, 622, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0,
    624, 0, 0, 625, 0, 0, 0, 626, 0, 627, 0, 0, 628, 0, 629, 0, 0, 0, 630, 0, 0, 631, 0, 0, 632, 0, 633, 0, 634, 0, 0, 0,
    635, 0, 0, 0, 636, 0, 0, 637, 0, 0, 0, 638, 0, 0, 639, 0, 0, 640, 0, 0, 0, 641, 0, 0, 642, 0, 643, 0, 644, 0, 0, 645,
    0, 0, 646, 0, 0, 647, 0, 0, 648, 0, 0, 649, 0, 0, 650, 0, 651, 0, 652, 0, 0, 653, 0, 654, 0, 0, 0, 655, 0, 0, 0, 0,
    656, 0, 0, 657, 0, 0, 0, 658, 0, 659, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 662, 0,
    0, 0, 663, 0, 664, 0, 665, 0, 666, 0, 0, 667, 0, 668, 0, 669, 0, 670, 0, 671, 0, 672, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0,
    0, 0, 0, 0, 0, 674, 0, 0, 0, 675, 0, 676, 0, 677, 0, 678, 0, 0, 679, 0, 680, 0, 681, 0, 682, 0, 683, 0, 684, 0, 0, 0,
    0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 687, 0, 688, 0, 689, 0, 690, 0, 0, 691, 0, 692, 0, 693, 0, 694,
    0, 695, 0, 696, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 699, 0, 0, 700, 0, 0, 701, 0, 0, 0,
    0, 702, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 705, 0, 0, 706, 0, 707, 0, 708, 0, 0, 0, 709,
    0, 0, 710, 0, 0, 0, 0, 711, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 715, 0,
    716, 717, 0, 718, 0, 719, 0, 0, 720, 0, 0, 0, 721, 0, 0, 722, 0, 0, 0, 0, 723, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 725,
    0, 0, 0, 0, 0, 726, 0, 0, 0, 727, 0, 728, 729, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0,
    732, 0, 733, 0, 0, 0, 734, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 737, 0, 0, 738, 0, 0, 0,
    739, 0, 0, 740, 0, 0, 0, 741, 0, 0, 742, 0, 0, 0, 743, 0, 0, 744, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 746, 0, 0,
    0, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 749, 0, 0, 0, 750, 0, 0, 0, 751, 0, 0, 752, 0, 0, 753, 0, 0,
    0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 756, 0, 0, 757, 0, 0, 0, 0, 0, 758, 0, 759, 0, 760, 0, 0, 0,
    761, 762, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 764, 0, 0, 765, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 767, 0, 0, 0,
    0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 769, 0, 0, 770, 0, 0, 771, 0, 772, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0,
    774, 0, 0, 775, 0, 0, 776, 0, 777, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 0, 780, 0,
    0, 781, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 784, 0, 0, 785, 0, 0, 0, 786, 0, 0, 787, 0, 0, 788, 0,
    0, 0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 790, 0, 0, 791, 0, 0, 792, 0, 793, 0, 0, 0, 0, 794, 0, 0, 0, 0, 0,
    0, 0, 0, 795, 0, 0, 796, 0, 0, 797, 0, 0, 0, 0, 0, 0, 798, 0, 0, 799, 0, 0, 0, 800, 0, 0, 801, 0, 802, 0, 803, 0,
    0, 804, 0, 0, 805, 0, 806, 807, 0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 0, 0, 0, 0, 809, 0, 0, 810, 0, 0, 811, 0, 0, 0,
    0, 0, 0, 812, 0, 0, 813, 0, 0, 0, 814, 0, 0, 815, 0, 816, 0, 817, 0, 0, 818, 0, 0, 819, 0, 820, 821, 0, 0, 0, 0, 0,
    822, 0, 0, 0, 0, 0, 0, 0, 0, 0, 823, 0, 0, 0, 824, 0, 825, 0, 826, 0, 0, 827, 0, 0, 0, 828, 0, 829, 0, 830, 0, 0,
    831, 0, 0, 832, 0, 0, 0, 833, 0, 834, 0, 0, 835, 0, 0, 0, 836, 0, 837, 0, 838, 0, 839, 0, 840, 0, 0, 0, 841, 0, 842, 0,
    843, 0, 0, 844, 0, 845, 0, 0, 0, 846, 0, 847, 0, 848, 0, 0, 0, 849, 850, 0, 0, 0, 0, 0, 0, 851, 0, 0, 0, 0, 0, 0,
    0, 0, 852, 0, 0, 853, 0, 0, 854, 0, 0, 0, 855, 0, 856, 0, 857, 0, 0, 0, 858, 859, 0, 0, 0, 0, 0, 860, 0, 0, 0, 0,
    0, 0, 0, 0, 861, 0, 0, 862, 0, 0, 863, 0, 0, 0, 0, 0, 0, 864, 0, 0, 865, 0, 0, 0, 866, 0, 0, 867, 0, 868, 0, 869,
    0, 0, 870, 0, 0, 871, 0, 872, 873, 0, 0, 0, 0, 0, 874, 0, 0, 0, 0, 0, 0, 0, 0, 875, 0, 0, 876, 0, 0, 877, 0, 878,
    0, 0, 879, 0, 0, 880, 0, 881, 0, 0, 0, 0, 0, 882, 883, 0, 0, 0, 0, 0, 884, 0, 0, 0, 0, 0, 885, 0, 0, 0, 0, 0,
    0, 886, 0, 0, 0, 887, 0, 0, 0, 0, 0, 0, 0, 0, 888, 0, 0, 0, 889, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 0, 0, 891,
    0, 0, 0, 0, 0, 0, 0, 0, 892, 0, 0, 893, 0, 0, 894, 0, 0, 0, 0, 895, 0, 0, 0, 0, 896, 897, 0, 0, 0, 0, 0, 898,
    0, 0, 0, 0, 0, 0, 0, 899, 0, 0, 0, 900, 0, 0, 0, 0, 0, 0, 0, 901, 0, 0, 0, 902, 0, 0, 0, 0, 0, 0, 903, 0,
    0, 904, 0, 0, 0, 0, 905, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 906, 0, 0, 0, 0, 907, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    908, 0, 0, 909, 0, 910, 0, 0, 0, 0, 0, 0, 911, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 912, 0, 0, 0, 0, 913, 0, 0, 914,
    0, 0, 0, 0, 0, 0, 915, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 916, 0, 917, 0, 918, 0, 919, 0, 0, 0, 0, 0, 0, 0,
    920, 0, 0, 0, 0, 0, 0, 0, 0, 0, 921, 0, 0, 0, 922, 923, 0, 0, 0, 0, 0, 0, 924, 0, 0, 0, 0, 0, 925, 0, 0, 0,
    0, 0, 0, 0, 0, 926, 0, 0, 927, 0, 0, 928, 0, 0, 0, 0, 929, 0, 930, 0, 931, 0, 0, 0, 932, 933, 0, 0, 0, 0, 0, 934,
    0, 0, 0, 0, 0, 0, 0, 0, 935, 0, 0, 936, 0, 0, 937, 0, 0, 0, 0, 938, 0, 0, 939, 940, 0, 0, 0, 0, 0, 941, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 942, 0, 0, 0, 0, 0, 943, 944, 945, 0, 946, 0, 0, 947,
};
void recomp_unit_0178_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08ACC000u;
        entry_id = (entry_delta < 16340u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0178[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08ACC000;
    case 2u: goto L_08ACC010;
    case 3u: goto L_08ACC020;
    case 4u: goto L_08ACC02C;
    case 5u: goto L_08ACC038;
    case 6u: goto L_08ACC04C;
    case 7u: goto L_08ACC064;
    case 8u: goto L_08ACC0B0;
    case 9u: goto L_08ACC0B8;
    case 10u: goto L_08ACC0C4;
    case 11u: goto L_08ACC0D4;
    case 12u: goto L_08ACC0E8;
    case 13u: goto L_08ACC0F8;
    case 14u: goto L_08ACC108;
    case 15u: goto L_08ACC118;
    case 16u: goto L_08ACC120;
    case 17u: goto L_08ACC128;
    case 18u: goto L_08ACC138;
    case 19u: goto L_08ACC158;
    case 20u: goto L_08ACC168;
    case 21u: goto L_08ACC170;
    case 22u: goto L_08ACC178;
    case 23u: goto L_08ACC188;
    case 24u: goto L_08ACC194;
    case 25u: goto L_08ACC1A0;
    case 26u: goto L_08ACC1A8;
    case 27u: goto L_08ACC1B4;
    case 28u: goto L_08ACC1BC;
    case 29u: goto L_08ACC1C8;
    case 30u: goto L_08ACC1D8;
    case 31u: goto L_08ACC1E8;
    case 32u: goto L_08ACC1F4;
    case 33u: goto L_08ACC1FC;
    case 34u: goto L_08ACC204;
    case 35u: goto L_08ACC20C;
    case 36u: goto L_08ACC218;
    case 37u: goto L_08ACC248;
    case 38u: goto L_08ACC284;
    case 39u: goto L_08ACC298;
    case 40u: goto L_08ACC2B4;
    case 41u: goto L_08ACC2C0;
    case 42u: goto L_08ACC2CC;
    case 43u: goto L_08ACC2E4;
    case 44u: goto L_08ACC2EC;
    case 45u: goto L_08ACC2F8;
    case 46u: goto L_08ACC304;
    case 47u: goto L_08ACC310;
    case 48u: goto L_08ACC318;
    case 49u: goto L_08ACC320;
    case 50u: goto L_08ACC32C;
    case 51u: goto L_08ACC330;
    case 52u: goto L_08ACC340;
    case 53u: goto L_08ACC350;
    case 54u: goto L_08ACC370;
    case 55u: goto L_08ACC374;
    case 56u: goto L_08ACC388;
    case 57u: goto L_08ACC394;
    case 58u: goto L_08ACC3AC;
    case 59u: goto L_08ACC3B4;
    case 60u: goto L_08ACC3BC;
    case 61u: goto L_08ACC3C4;
    case 62u: goto L_08ACC3D4;
    case 63u: goto L_08ACC3E4;
    case 64u: goto L_08ACC3EC;
    case 65u: goto L_08ACC3F0;
    case 66u: goto L_08ACC408;
    case 67u: goto L_08ACC410;
    case 68u: goto L_08ACC418;
    case 69u: goto L_08ACC420;
    case 70u: goto L_08ACC42C;
    case 71u: goto L_08ACC444;
    case 72u: goto L_08ACC44C;
    case 73u: goto L_08ACC45C;
    case 74u: goto L_08ACC490;
    case 75u: goto L_08ACC4C4;
    case 76u: goto L_08ACC4DC;
    case 77u: goto L_08ACC4E4;
    case 78u: goto L_08ACC504;
    case 79u: goto L_08ACC514;
    case 80u: goto L_08ACC520;
    case 81u: goto L_08ACC528;
    case 82u: goto L_08ACC530;
    case 83u: goto L_08ACC538;
    case 84u: goto L_08ACC548;
    case 85u: goto L_08ACC554;
    case 86u: goto L_08ACC564;
    case 87u: goto L_08ACC56C;
    case 88u: goto L_08ACC570;
    case 89u: goto L_08ACC58C;
    case 90u: goto L_08ACC594;
    case 91u: goto L_08ACC598;
    case 92u: goto L_08ACC5B4;
    case 93u: goto L_08ACC5C4;
    case 94u: goto L_08ACC5CC;
    case 95u: goto L_08ACC5D0;
    case 96u: goto L_08ACC5E8;
    case 97u: goto L_08ACC5F4;
    case 98u: goto L_08ACC604;
    case 99u: goto L_08ACC60C;
    case 100u: goto L_08ACC610;
    case 101u: goto L_08ACC644;
    case 102u: goto L_08ACC694;
    case 103u: goto L_08ACC6A0;
    case 104u: goto L_08ACC6A8;
    case 105u: goto L_08ACC6B4;
    case 106u: goto L_08ACC6D0;
    case 107u: goto L_08ACC6E8;
    case 108u: goto L_08ACC6F0;
    case 109u: goto L_08ACC6F8;
    case 110u: goto L_08ACC704;
    case 111u: goto L_08ACC72C;
    case 112u: goto L_08ACC744;
    case 113u: goto L_08ACC74C;
    case 114u: goto L_08ACC754;
    case 115u: goto L_08ACC76C;
    case 116u: goto L_08ACC77C;
    case 117u: goto L_08ACC78C;
    case 118u: goto L_08ACC79C;
    case 119u: goto L_08ACC7B4;
    case 120u: goto L_08ACC7E8;
    case 121u: goto L_08ACC808;
    case 122u: goto L_08ACC818;
    case 123u: goto L_08ACC840;
    case 124u: goto L_08ACC850;
    case 125u: goto L_08ACC868;
    case 126u: goto L_08ACC878;
    case 127u: goto L_08ACC88C;
    case 128u: goto L_08ACC894;
    case 129u: goto L_08ACC8A8;
    case 130u: goto L_08ACC8B0;
    case 131u: goto L_08ACC8C0;
    case 132u: goto L_08ACC8C8;
    case 133u: goto L_08ACC8D8;
    case 134u: goto L_08ACC8E4;
    case 135u: goto L_08ACC8EC;
    case 136u: goto L_08ACC8F4;
    case 137u: goto L_08ACC8FC;
    case 138u: goto L_08ACC90C;
    case 139u: goto L_08ACC918;
    case 140u: goto L_08ACC920;
    case 141u: goto L_08ACC928;
    case 142u: goto L_08ACC93C;
    case 143u: goto L_08ACC94C;
    case 144u: goto L_08ACC958;
    case 145u: goto L_08ACC96C;
    case 146u: goto L_08ACC97C;
    case 147u: goto L_08ACC984;
    case 148u: goto L_08ACC998;
    case 149u: goto L_08ACC9A0;
    case 150u: goto L_08ACC9A8;
    case 151u: goto L_08ACC9B0;
    case 152u: goto L_08ACC9D8;
    case 153u: goto L_08ACC9E8;
    case 154u: goto L_08ACC9F4;
    case 155u: goto L_08ACC9FC;
    case 156u: goto L_08ACCA04;
    case 157u: goto L_08ACCA0C;
    case 158u: goto L_08ACCA14;
    case 159u: goto L_08ACCA20;
    case 160u: goto L_08ACCA30;
    case 161u: goto L_08ACCA38;
    case 162u: goto L_08ACCA44;
    case 163u: goto L_08ACCA58;
    case 164u: goto L_08ACCA6C;
    case 165u: goto L_08ACCA74;
    case 166u: goto L_08ACCA78;
    case 167u: goto L_08ACCA88;
    case 168u: goto L_08ACCA90;
    case 169u: goto L_08ACCAA8;
    case 170u: goto L_08ACCAB0;
    case 171u: goto L_08ACCABC;
    case 172u: goto L_08ACCAC4;
    case 173u: goto L_08ACCACC;
    case 174u: goto L_08ACCAD4;
    case 175u: goto L_08ACCAE8;
    case 176u: goto L_08ACCAF0;
    case 177u: goto L_08ACCAF8;
    case 178u: goto L_08ACCB0C;
    case 179u: goto L_08ACCB14;
    case 180u: goto L_08ACCB28;
    case 181u: goto L_08ACCB30;
    case 182u: goto L_08ACCB38;
    case 183u: goto L_08ACCB44;
    case 184u: goto L_08ACCB4C;
    case 185u: goto L_08ACCB6C;
    case 186u: goto L_08ACCBA0;
    case 187u: goto L_08ACCBB8;
    case 188u: goto L_08ACCBC4;
    case 189u: goto L_08ACCBD4;
    case 190u: goto L_08ACCBE8;
    case 191u: goto L_08ACCBF0;
    case 192u: goto L_08ACCBF4;
    case 193u: goto L_08ACCC10;
    case 194u: goto L_08ACCC24;
    case 195u: goto L_08ACCC38;
    case 196u: goto L_08ACCC40;
    case 197u: goto L_08ACCC44;
    case 198u: goto L_08ACCC60;
    case 199u: goto L_08ACCC88;
    case 200u: goto L_08ACCC98;
    case 201u: goto L_08ACCCB0;
    case 202u: goto L_08ACCCC0;
    case 203u: goto L_08ACCCCC;
    case 204u: goto L_08ACCCE4;
    case 205u: goto L_08ACCCF4;
    case 206u: goto L_08ACCCFC;
    case 207u: goto L_08ACCD0C;
    case 208u: goto L_08ACCD14;
    case 209u: goto L_08ACCD20;
    case 210u: goto L_08ACCD34;
    case 211u: goto L_08ACCD3C;
    case 212u: goto L_08ACCD50;
    case 213u: goto L_08ACCD6C;
    case 214u: goto L_08ACCD78;
    case 215u: goto L_08ACCD90;
    case 216u: goto L_08ACCDA0;
    case 217u: goto L_08ACCDA8;
    case 218u: goto L_08ACCDB4;
    case 219u: goto L_08ACCDBC;
    case 220u: goto L_08ACCDD0;
    case 221u: goto L_08ACCDD8;
    case 222u: goto L_08ACCDE8;
    case 223u: goto L_08ACCDF0;
    case 224u: goto L_08ACCE00;
    case 225u: goto L_08ACCE0C;
    case 226u: goto L_08ACCE1C;
    case 227u: goto L_08ACCE28;
    case 228u: goto L_08ACCE30;
    case 229u: goto L_08ACCE38;
    case 230u: goto L_08ACCE48;
    case 231u: goto L_08ACCE54;
    case 232u: goto L_08ACCE64;
    case 233u: goto L_08ACCE70;
    case 234u: goto L_08ACCE78;
    case 235u: goto L_08ACCE7C;
    case 236u: goto L_08ACCEA0;
    case 237u: goto L_08ACCF3C;
    case 238u: goto L_08ACCF50;
    case 239u: goto L_08ACCF58;
    case 240u: goto L_08ACCF64;
    case 241u: goto L_08ACCF78;
    case 242u: goto L_08ACCF80;
    case 243u: goto L_08ACCF90;
    case 244u: goto L_08ACCFB4;
    case 245u: goto L_08ACCFD0;
    case 246u: goto L_08ACCFD8;
    case 247u: goto L_08ACCFE0;
    case 248u: goto L_08ACCFEC;
    case 249u: goto L_08ACD000;
    case 250u: goto L_08ACD010;
    case 251u: goto L_08ACD01C;
    case 252u: goto L_08ACD02C;
    case 253u: goto L_08ACD034;
    case 254u: goto L_08ACD050;
    case 255u: goto L_08ACD05C;
    case 256u: goto L_08ACD064;
    case 257u: goto L_08ACD068;
    case 258u: goto L_08ACD070;
    case 259u: goto L_08ACD080;
    case 260u: goto L_08ACD094;
    case 261u: goto L_08ACD0A0;
    case 262u: goto L_08ACD0A8;
    case 263u: goto L_08ACD0AC;
    case 264u: goto L_08ACD0C0;
    case 265u: goto L_08ACD0CC;
    case 266u: goto L_08ACD0D8;
    case 267u: goto L_08ACD0DC;
    case 268u: goto L_08ACD0E4;
    case 269u: goto L_08ACD0F0;
    case 270u: goto L_08ACD0F8;
    case 271u: goto L_08ACD10C;
    case 272u: goto L_08ACD11C;
    case 273u: goto L_08ACD130;
    case 274u: goto L_08ACD140;
    case 275u: goto L_08ACD154;
    case 276u: goto L_08ACD15C;
    case 277u: goto L_08ACD164;
    case 278u: goto L_08ACD178;
    case 279u: goto L_08ACD190;
    case 280u: goto L_08ACD1A0;
    case 281u: goto L_08ACD1BC;
    case 282u: goto L_08ACD1C4;
    case 283u: goto L_08ACD1CC;
    case 284u: goto L_08ACD1D4;
    case 285u: goto L_08ACD1E0;
    case 286u: goto L_08ACD218;
    case 287u: goto L_08ACD224;
    case 288u: goto L_08ACD25C;
    case 289u: goto L_08ACD268;
    case 290u: goto L_08ACD2A0;
    case 291u: goto L_08ACD2AC;
    case 292u: goto L_08ACD2E4;
    case 293u: goto L_08ACD2F0;
    case 294u: goto L_08ACD324;
    case 295u: goto L_08ACD330;
    case 296u: goto L_08ACD360;
    case 297u: goto L_08ACD368;
    case 298u: goto L_08ACD378;
    case 299u: goto L_08ACD38C;
    case 300u: goto L_08ACD394;
    case 301u: goto L_08ACD3A0;
    case 302u: goto L_08ACD3A8;
    case 303u: goto L_08ACD3D8;
    case 304u: goto L_08ACD3E0;
    case 305u: goto L_08ACD400;
    case 306u: goto L_08ACD40C;
    case 307u: goto L_08ACD444;
    case 308u: goto L_08ACD460;
    case 309u: goto L_08ACD468;
    case 310u: goto L_08ACD470;
    case 311u: goto L_08ACD478;
    case 312u: goto L_08ACD48C;
    case 313u: goto L_08ACD4A8;
    case 314u: goto L_08ACD4CC;
    case 315u: goto L_08ACD4E0;
    case 316u: goto L_08ACD4E8;
    case 317u: goto L_08ACD4F0;
    case 318u: goto L_08ACD4F4;
    case 319u: goto L_08ACD4FC;
    case 320u: goto L_08ACD508;
    case 321u: goto L_08ACD520;
    case 322u: goto L_08ACD52C;
    case 323u: goto L_08ACD538;
    case 324u: goto L_08ACD544;
    case 325u: goto L_08ACD550;
    case 326u: goto L_08ACD55C;
    case 327u: goto L_08ACD568;
    case 328u: goto L_08ACD570;
    case 329u: goto L_08ACD578;
    case 330u: goto L_08ACD58C;
    case 331u: goto L_08ACD5B0;
    case 332u: goto L_08ACD5B8;
    case 333u: goto L_08ACD5C0;
    case 334u: goto L_08ACD5CC;
    case 335u: goto L_08ACD5D4;
    case 336u: goto L_08ACD5E8;
    case 337u: goto L_08ACD60C;
    case 338u: goto L_08ACD620;
    case 339u: goto L_08ACD628;
    case 340u: goto L_08ACD630;
    case 341u: goto L_08ACD63C;
    case 342u: goto L_08ACD64C;
    case 343u: goto L_08ACD654;
    case 344u: goto L_08ACD660;
    case 345u: goto L_08ACD674;
    case 346u: goto L_08ACD684;
    case 347u: goto L_08ACD690;
    case 348u: goto L_08ACD6AC;
    case 349u: goto L_08ACD6B4;
    case 350u: goto L_08ACD6C8;
    case 351u: goto L_08ACD6DC;
    case 352u: goto L_08ACD6F0;
    case 353u: goto L_08ACD704;
    case 354u: goto L_08ACD718;
    case 355u: goto L_08ACD72C;
    case 356u: goto L_08ACD738;
    case 357u: goto L_08ACD740;
    case 358u: goto L_08ACD750;
    case 359u: goto L_08ACD758;
    case 360u: goto L_08ACD764;
    case 361u: goto L_08ACD76C;
    case 362u: goto L_08ACD77C;
    case 363u: goto L_08ACD78C;
    case 364u: goto L_08ACD794;
    case 365u: goto L_08ACD79C;
    case 366u: goto L_08ACD7A8;
    case 367u: goto L_08ACD7AC;
    case 368u: goto L_08ACD7B0;
    case 369u: goto L_08ACD7B8;
    case 370u: goto L_08ACD7C8;
    case 371u: goto L_08ACD7D8;
    case 372u: goto L_08ACD7E0;
    case 373u: goto L_08ACD7E8;
    case 374u: goto L_08ACD7F4;
    case 375u: goto L_08ACD7F8;
    case 376u: goto L_08ACD7FC;
    case 377u: goto L_08ACD804;
    case 378u: goto L_08ACD814;
    case 379u: goto L_08ACD824;
    case 380u: goto L_08ACD82C;
    case 381u: goto L_08ACD834;
    case 382u: goto L_08ACD840;
    case 383u: goto L_08ACD844;
    case 384u: goto L_08ACD848;
    case 385u: goto L_08ACD850;
    case 386u: goto L_08ACD860;
    case 387u: goto L_08ACD870;
    case 388u: goto L_08ACD878;
    case 389u: goto L_08ACD888;
    case 390u: goto L_08ACD894;
    case 391u: goto L_08ACD89C;
    case 392u: goto L_08ACD8A4;
    case 393u: goto L_08ACD8AC;
    case 394u: goto L_08ACD8B4;
    case 395u: goto L_08ACD8BC;
    case 396u: goto L_08ACD8C0;
    case 397u: goto L_08ACD8C8;
    case 398u: goto L_08ACD910;
    case 399u: goto L_08ACD91C;
    case 400u: goto L_08ACD938;
    case 401u: goto L_08ACD940;
    case 402u: goto L_08ACD948;
    case 403u: goto L_08ACD95C;
    case 404u: goto L_08ACD980;
    case 405u: goto L_08ACD984;
    case 406u: goto L_08ACD994;
    case 407u: goto L_08ACD9C4;
    case 408u: goto L_08ACD9C8;
    case 409u: goto L_08ACD9DC;
    case 410u: goto L_08ACD9E4;
    case 411u: goto L_08ACDA00;
    case 412u: goto L_08ACDA0C;
    case 413u: goto L_08ACDA14;
    case 414u: goto L_08ACDA20;
    case 415u: goto L_08ACDA2C;
    case 416u: goto L_08ACDA38;
    case 417u: goto L_08ACDA40;
    case 418u: goto L_08ACDA48;
    case 419u: goto L_08ACDA50;
    case 420u: goto L_08ACDA54;
    case 421u: goto L_08ACDA5C;
    case 422u: goto L_08ACDA6C;
    case 423u: goto L_08ACDA78;
    case 424u: goto L_08ACDA80;
    case 425u: goto L_08ACDA8C;
    case 426u: goto L_08ACDA9C;
    case 427u: goto L_08ACDAA4;
    case 428u: goto L_08ACDACC;
    case 429u: goto L_08ACDAD0;
    case 430u: goto L_08ACDAD8;
    case 431u: goto L_08ACDB08;
    case 432u: goto L_08ACDB10;
    case 433u: goto L_08ACDB24;
    case 434u: goto L_08ACDB30;
    case 435u: goto L_08ACDB48;
    case 436u: goto L_08ACDB54;
    case 437u: goto L_08ACDB68;
    case 438u: goto L_08ACDB6C;
    case 439u: goto L_08ACDB84;
    case 440u: goto L_08ACDB88;
    case 441u: goto L_08ACDB9C;
    case 442u: goto L_08ACDBC0;
    case 443u: goto L_08ACDC04;
    case 444u: goto L_08ACDC20;
    case 445u: goto L_08ACDC28;
    case 446u: goto L_08ACDC30;
    case 447u: goto L_08ACDC54;
    case 448u: goto L_08ACDC6C;
    case 449u: goto L_08ACDC74;
    case 450u: goto L_08ACDC78;
    case 451u: goto L_08ACDC80;
    case 452u: goto L_08ACDC8C;
    case 453u: goto L_08ACDC98;
    case 454u: goto L_08ACDCA4;
    case 455u: goto L_08ACDCB0;
    case 456u: goto L_08ACDCE8;
    case 457u: goto L_08ACDCEC;
    case 458u: goto L_08ACDD00;
    case 459u: goto L_08ACDD18;
    case 460u: goto L_08ACDD40;
    case 461u: goto L_08ACDD58;
    case 462u: goto L_08ACDD60;
    case 463u: goto L_08ACDD64;
    case 464u: goto L_08ACDD70;
    case 465u: goto L_08ACDD80;
    case 466u: goto L_08ACDD90;
    case 467u: goto L_08ACDDA0;
    case 468u: goto L_08ACDDB0;
    case 469u: goto L_08ACDDC0;
    case 470u: goto L_08ACDDC8;
    case 471u: goto L_08ACDDD0;
    case 472u: goto L_08ACDDE4;
    case 473u: goto L_08ACDDF4;
    case 474u: goto L_08ACDE30;
    case 475u: goto L_08ACDE34;
    case 476u: goto L_08ACDE48;
    case 477u: goto L_08ACDE4C;
    case 478u: goto L_08ACDE80;
    case 479u: goto L_08ACDEC0;
    case 480u: goto L_08ACDED8;
    case 481u: goto L_08ACDEE0;
    case 482u: goto L_08ACDEE8;
    case 483u: goto L_08ACDEF8;
    case 484u: goto L_08ACDF00;
    case 485u: goto L_08ACDF10;
    case 486u: goto L_08ACDF3C;
    case 487u: goto L_08ACDF4C;
    case 488u: goto L_08ACDF58;
    case 489u: goto L_08ACDF74;
    case 490u: goto L_08ACDF7C;
    case 491u: goto L_08ACDFA8;
    case 492u: goto L_08ACDFD4;
    case 493u: goto L_08ACE000;
    case 494u: goto L_08ACE02C;
    case 495u: goto L_08ACE058;
    case 496u: goto L_08ACE084;
    case 497u: goto L_08ACE0B0;
    case 498u: goto L_08ACE0DC;
    case 499u: goto L_08ACE108;
    case 500u: goto L_08ACE134;
    case 501u: goto L_08ACE160;
    case 502u: goto L_08ACE18C;
    case 503u: goto L_08ACE1B8;
    case 504u: goto L_08ACE1E4;
    case 505u: goto L_08ACE210;
    case 506u: goto L_08ACE23C;
    case 507u: goto L_08ACE268;
    case 508u: goto L_08ACE294;
    case 509u: goto L_08ACE2A0;
    case 510u: goto L_08ACE2AC;
    case 511u: goto L_08ACE2B4;
    case 512u: goto L_08ACE2BC;
    case 513u: goto L_08ACE2D4;
    case 514u: goto L_08ACE2DC;
    case 515u: goto L_08ACE304;
    case 516u: goto L_08ACE3CC;
    case 517u: goto L_08ACE3F4;
    case 518u: goto L_08ACE420;
    case 519u: goto L_08ACE428;
    case 520u: goto L_08ACE450;
    case 521u: goto L_08ACE458;
    case 522u: goto L_08ACE464;
    case 523u: goto L_08ACE47C;
    case 524u: goto L_08ACE498;
    case 525u: goto L_08ACE4B4;
    case 526u: goto L_08ACE4BC;
    case 527u: goto L_08ACE4CC;
    case 528u: goto L_08ACE4DC;
    case 529u: goto L_08ACE4E4;
    case 530u: goto L_08ACE4F8;
    case 531u: goto L_08ACE500;
    case 532u: goto L_08ACE508;
    case 533u: goto L_08ACE514;
    case 534u: goto L_08ACE524;
    case 535u: goto L_08ACE538;
    case 536u: goto L_08ACE578;
    case 537u: goto L_08ACE58C;
    case 538u: goto L_08ACE5AC;
    case 539u: goto L_08ACE5B4;
    case 540u: goto L_08ACE5C8;
    case 541u: goto L_08ACE5DC;
    case 542u: goto L_08ACE5F0;
    case 543u: goto L_08ACE5F8;
    case 544u: goto L_08ACE604;
    case 545u: goto L_08ACE608;
    case 546u: goto L_08ACE610;
    case 547u: goto L_08ACE63C;
    case 548u: goto L_08ACE65C;
    case 549u: goto L_08ACE6D4;
    case 550u: goto L_08ACE700;
    case 551u: goto L_08ACE720;
    case 552u: goto L_08ACE730;
    case 553u: goto L_08ACE740;
    case 554u: goto L_08ACE784;
    case 555u: goto L_08ACE794;
    case 556u: goto L_08ACE79C;
    case 557u: goto L_08ACE7A8;
    case 558u: goto L_08ACE7B4;
    case 559u: goto L_08ACE7BC;
    case 560u: goto L_08ACE7C4;
    case 561u: goto L_08ACE7CC;
    case 562u: goto L_08ACE7E8;
    case 563u: goto L_08ACE7F4;
    case 564u: goto L_08ACE818;
    case 565u: goto L_08ACE82C;
    case 566u: goto L_08ACE83C;
    case 567u: goto L_08ACE84C;
    case 568u: goto L_08ACE85C;
    case 569u: goto L_08ACE86C;
    case 570u: goto L_08ACE874;
    case 571u: goto L_08ACE880;
    case 572u: goto L_08ACE888;
    case 573u: goto L_08ACE894;
    case 574u: goto L_08ACE898;
    case 575u: goto L_08ACE8B8;
    case 576u: goto L_08ACE8F4;
    case 577u: goto L_08ACE900;
    case 578u: goto L_08ACE910;
    case 579u: goto L_08ACE918;
    case 580u: goto L_08ACE924;
    case 581u: goto L_08ACE92C;
    case 582u: goto L_08ACE938;
    case 583u: goto L_08ACE948;
    case 584u: goto L_08ACE954;
    case 585u: goto L_08ACE960;
    case 586u: goto L_08ACE974;
    case 587u: goto L_08ACE988;
    case 588u: goto L_08ACE994;
    case 589u: goto L_08ACE9A0;
    case 590u: goto L_08ACE9AC;
    case 591u: goto L_08ACE9B8;
    case 592u: goto L_08ACE9C0;
    case 593u: goto L_08ACE9CC;
    case 594u: goto L_08ACE9D8;
    case 595u: goto L_08ACE9E4;
    case 596u: goto L_08ACE9F4;
    case 597u: goto L_08ACEA08;
    case 598u: goto L_08ACEA10;
    case 599u: goto L_08ACEA1C;
    case 600u: goto L_08ACEA28;
    case 601u: goto L_08ACEA3C;
    case 602u: goto L_08ACEA44;
    case 603u: goto L_08ACEA60;
    case 604u: goto L_08ACEA68;
    case 605u: goto L_08ACEA70;
    case 606u: goto L_08ACEA80;
    case 607u: goto L_08ACEA8C;
    case 608u: goto L_08ACEAA0;
    case 609u: goto L_08ACEAAC;
    case 610u: goto L_08ACEABC;
    case 611u: goto L_08ACEAE4;
    case 612u: goto L_08ACEAEC;
    case 613u: goto L_08ACEAF0;
    case 614u: goto L_08ACEB04;
    case 615u: goto L_08ACEB0C;
    case 616u: goto L_08ACEB18;
    case 617u: goto L_08ACEB20;
    case 618u: goto L_08ACEB24;
    case 619u: goto L_08ACEB30;
    case 620u: goto L_08ACEB38;
    case 621u: goto L_08ACEB4C;
    case 622u: goto L_08ACEB54;
    case 623u: goto L_08ACEB74;
    case 624u: goto L_08ACEB80;
    case 625u: goto L_08ACEB8C;
    case 626u: goto L_08ACEB9C;
    case 627u: goto L_08ACEBA4;
    case 628u: goto L_08ACEBB0;
    case 629u: goto L_08ACEBB8;
    case 630u: goto L_08ACEBC8;
    case 631u: goto L_08ACEBD4;
    case 632u: goto L_08ACEBE0;
    case 633u: goto L_08ACEBE8;
    case 634u: goto L_08ACEBF0;
    case 635u: goto L_08ACEC00;
    case 636u: goto L_08ACEC10;
    case 637u: goto L_08ACEC1C;
    case 638u: goto L_08ACEC2C;
    case 639u: goto L_08ACEC38;
    case 640u: goto L_08ACEC44;
    case 641u: goto L_08ACEC54;
    case 642u: goto L_08ACEC60;
    case 643u: goto L_08ACEC68;
    case 644u: goto L_08ACEC70;
    case 645u: goto L_08ACEC7C;
    case 646u: goto L_08ACEC88;
    case 647u: goto L_08ACEC94;
    case 648u: goto L_08ACECA0;
    case 649u: goto L_08ACECAC;
    case 650u: goto L_08ACECB8;
    case 651u: goto L_08ACECC0;
    case 652u: goto L_08ACECC8;
    case 653u: goto L_08ACECD4;
    case 654u: goto L_08ACECDC;
    case 655u: goto L_08ACECEC;
    case 656u: goto L_08ACED00;
    case 657u: goto L_08ACED0C;
    case 658u: goto L_08ACED1C;
    case 659u: goto L_08ACED24;
    case 660u: goto L_08ACED28;
    case 661u: goto L_08ACED58;
    case 662u: goto L_08ACED78;
    case 663u: goto L_08ACED88;
    case 664u: goto L_08ACED90;
    case 665u: goto L_08ACED98;
    case 666u: goto L_08ACEDA0;
    case 667u: goto L_08ACEDAC;
    case 668u: goto L_08ACEDB4;
    case 669u: goto L_08ACEDBC;
    case 670u: goto L_08ACEDC4;
    case 671u: goto L_08ACEDCC;
    case 672u: goto L_08ACEDD4;
    case 673u: goto L_08ACEDF4;
    case 674u: goto L_08ACEE14;
    case 675u: goto L_08ACEE24;
    case 676u: goto L_08ACEE2C;
    case 677u: goto L_08ACEE34;
    case 678u: goto L_08ACEE3C;
    case 679u: goto L_08ACEE48;
    case 680u: goto L_08ACEE50;
    case 681u: goto L_08ACEE58;
    case 682u: goto L_08ACEE60;
    case 683u: goto L_08ACEE68;
    case 684u: goto L_08ACEE70;
    case 685u: goto L_08ACEE90;
    case 686u: goto L_08ACEEB0;
    case 687u: goto L_08ACEEC0;
    case 688u: goto L_08ACEEC8;
    case 689u: goto L_08ACEED0;
    case 690u: goto L_08ACEED8;
    case 691u: goto L_08ACEEE4;
    case 692u: goto L_08ACEEEC;
    case 693u: goto L_08ACEEF4;
    case 694u: goto L_08ACEEFC;
    case 695u: goto L_08ACEF04;
    case 696u: goto L_08ACEF0C;
    case 697u: goto L_08ACEF2C;
    case 698u: goto L_08ACEF48;
    case 699u: goto L_08ACEF58;
    case 700u: goto L_08ACEF64;
    case 701u: goto L_08ACEF70;
    case 702u: goto L_08ACEF84;
    case 703u: goto L_08ACEFA0;
    case 704u: goto L_08ACEFC8;
    case 705u: goto L_08ACEFD0;
    case 706u: goto L_08ACEFDC;
    case 707u: goto L_08ACEFE4;
    case 708u: goto L_08ACEFEC;
    case 709u: goto L_08ACEFFC;
    case 710u: goto L_08ACF008;
    case 711u: goto L_08ACF01C;
    case 712u: goto L_08ACF028;
    case 713u: goto L_08ACF048;
    case 714u: goto L_08ACF068;
    case 715u: goto L_08ACF078;
    case 716u: goto L_08ACF080;
    case 717u: goto L_08ACF084;
    case 718u: goto L_08ACF08C;
    case 719u: goto L_08ACF094;
    case 720u: goto L_08ACF0A0;
    case 721u: goto L_08ACF0B0;
    case 722u: goto L_08ACF0BC;
    case 723u: goto L_08ACF0D0;
    case 724u: goto L_08ACF0DC;
    case 725u: goto L_08ACF0FC;
    case 726u: goto L_08ACF114;
    case 727u: goto L_08ACF124;
    case 728u: goto L_08ACF12C;
    case 729u: goto L_08ACF130;
    case 730u: goto L_08ACF148;
    case 731u: goto L_08ACF160;
    case 732u: goto L_08ACF180;
    case 733u: goto L_08ACF188;
    case 734u: goto L_08ACF198;
    case 735u: goto L_08ACF1B0;
    case 736u: goto L_08ACF1CC;
    case 737u: goto L_08ACF1E4;
    case 738u: goto L_08ACF1F0;
    case 739u: goto L_08ACF200;
    case 740u: goto L_08ACF20C;
    case 741u: goto L_08ACF21C;
    case 742u: goto L_08ACF228;
    case 743u: goto L_08ACF238;
    case 744u: goto L_08ACF244;
    case 745u: goto L_08ACF260;
    case 746u: goto L_08ACF274;
    case 747u: goto L_08ACF290;
    case 748u: goto L_08ACF2AC;
    case 749u: goto L_08ACF2BC;
    case 750u: goto L_08ACF2CC;
    case 751u: goto L_08ACF2DC;
    case 752u: goto L_08ACF2E8;
    case 753u: goto L_08ACF2F4;
    case 754u: goto L_08ACF30C;
    case 755u: goto L_08ACF330;
    case 756u: goto L_08ACF33C;
    case 757u: goto L_08ACF348;
    case 758u: goto L_08ACF360;
    case 759u: goto L_08ACF368;
    case 760u: goto L_08ACF370;
    case 761u: goto L_08ACF380;
    case 762u: goto L_08ACF384;
    case 763u: goto L_08ACF39C;
    case 764u: goto L_08ACF3B8;
    case 765u: goto L_08ACF3C4;
    case 766u: goto L_08ACF3D8;
    case 767u: goto L_08ACF3F0;
    case 768u: goto L_08ACF414;
    case 769u: goto L_08ACF430;
    case 770u: goto L_08ACF43C;
    case 771u: goto L_08ACF448;
    case 772u: goto L_08ACF450;
    case 773u: goto L_08ACF464;
    case 774u: goto L_08ACF480;
    case 775u: goto L_08ACF48C;
    case 776u: goto L_08ACF498;
    case 777u: goto L_08ACF4A0;
    case 778u: goto L_08ACF4B4;
    case 779u: goto L_08ACF4DC;
    case 780u: goto L_08ACF4F8;
    case 781u: goto L_08ACF504;
    case 782u: goto L_08ACF518;
    case 783u: goto L_08ACF530;
    case 784u: goto L_08ACF544;
    case 785u: goto L_08ACF550;
    case 786u: goto L_08ACF560;
    case 787u: goto L_08ACF56C;
    case 788u: goto L_08ACF578;
    case 789u: goto L_08ACF598;
    case 790u: goto L_08ACF5B4;
    case 791u: goto L_08ACF5C0;
    case 792u: goto L_08ACF5CC;
    case 793u: goto L_08ACF5D4;
    case 794u: goto L_08ACF5E8;
    case 795u: goto L_08ACF60C;
    case 796u: goto L_08ACF618;
    case 797u: goto L_08ACF624;
    case 798u: goto L_08ACF640;
    case 799u: goto L_08ACF64C;
    case 800u: goto L_08ACF65C;
    case 801u: goto L_08ACF668;
    case 802u: goto L_08ACF670;
    case 803u: goto L_08ACF678;
    case 804u: goto L_08ACF684;
    case 805u: goto L_08ACF690;
    case 806u: goto L_08ACF698;
    case 807u: goto L_08ACF69C;
    case 808u: goto L_08ACF6B4;
    case 809u: goto L_08ACF6D8;
    case 810u: goto L_08ACF6E4;
    case 811u: goto L_08ACF6F0;
    case 812u: goto L_08ACF70C;
    case 813u: goto L_08ACF718;
    case 814u: goto L_08ACF728;
    case 815u: goto L_08ACF734;
    case 816u: goto L_08ACF73C;
    case 817u: goto L_08ACF744;
    case 818u: goto L_08ACF750;
    case 819u: goto L_08ACF75C;
    case 820u: goto L_08ACF764;
    case 821u: goto L_08ACF768;
    case 822u: goto L_08ACF780;
    case 823u: goto L_08ACF7A8;
    case 824u: goto L_08ACF7B8;
    case 825u: goto L_08ACF7C0;
    case 826u: goto L_08ACF7C8;
    case 827u: goto L_08ACF7D4;
    case 828u: goto L_08ACF7E4;
    case 829u: goto L_08ACF7EC;
    case 830u: goto L_08ACF7F4;
    case 831u: goto L_08ACF800;
    case 832u: goto L_08ACF80C;
    case 833u: goto L_08ACF81C;
    case 834u: goto L_08ACF824;
    case 835u: goto L_08ACF830;
    case 836u: goto L_08ACF840;
    case 837u: goto L_08ACF848;
    case 838u: goto L_08ACF850;
    case 839u: goto L_08ACF858;
    case 840u: goto L_08ACF860;
    case 841u: goto L_08ACF870;
    case 842u: goto L_08ACF878;
    case 843u: goto L_08ACF880;
    case 844u: goto L_08ACF88C;
    case 845u: goto L_08ACF894;
    case 846u: goto L_08ACF8A4;
    case 847u: goto L_08ACF8AC;
    case 848u: goto L_08ACF8B4;
    case 849u: goto L_08ACF8C4;
    case 850u: goto L_08ACF8C8;
    case 851u: goto L_08ACF8E4;
    case 852u: goto L_08ACF908;
    case 853u: goto L_08ACF914;
    case 854u: goto L_08ACF920;
    case 855u: goto L_08ACF930;
    case 856u: goto L_08ACF938;
    case 857u: goto L_08ACF940;
    case 858u: goto L_08ACF950;
    case 859u: goto L_08ACF954;
    case 860u: goto L_08ACF96C;
    case 861u: goto L_08ACF990;
    case 862u: goto L_08ACF99C;
    case 863u: goto L_08ACF9A8;
    case 864u: goto L_08ACF9C4;
    case 865u: goto L_08ACF9D0;
    case 866u: goto L_08ACF9E0;
    case 867u: goto L_08ACF9EC;
    case 868u: goto L_08ACF9F4;
    case 869u: goto L_08ACF9FC;
    case 870u: goto L_08ACFA08;
    case 871u: goto L_08ACFA14;
    case 872u: goto L_08ACFA1C;
    case 873u: goto L_08ACFA20;
    case 874u: goto L_08ACFA38;
    case 875u: goto L_08ACFA5C;
    case 876u: goto L_08ACFA68;
    case 877u: goto L_08ACFA74;
    case 878u: goto L_08ACFA7C;
    case 879u: goto L_08ACFA88;
    case 880u: goto L_08ACFA94;
    case 881u: goto L_08ACFA9C;
    case 882u: goto L_08ACFAB4;
    case 883u: goto L_08ACFAB8;
    case 884u: goto L_08ACFAD0;
    case 885u: goto L_08ACFAE8;
    case 886u: goto L_08ACFB04;
    case 887u: goto L_08ACFB14;
    case 888u: goto L_08ACFB38;
    case 889u: goto L_08ACFB48;
    case 890u: goto L_08ACFB6C;
    case 891u: goto L_08ACFB7C;
    case 892u: goto L_08ACFBA0;
    case 893u: goto L_08ACFBAC;
    case 894u: goto L_08ACFBB8;
    case 895u: goto L_08ACFBCC;
    case 896u: goto L_08ACFBE0;
    case 897u: goto L_08ACFBE4;
    case 898u: goto L_08ACFBFC;
    case 899u: goto L_08ACFC1C;
    case 900u: goto L_08ACFC2C;
    case 901u: goto L_08ACFC4C;
    case 902u: goto L_08ACFC5C;
    case 903u: goto L_08ACFC78;
    case 904u: goto L_08ACFC84;
    case 905u: goto L_08ACFC98;
    case 906u: goto L_08ACFCC4;
    case 907u: goto L_08ACFCD8;
    case 908u: goto L_08ACFD00;
    case 909u: goto L_08ACFD0C;
    case 910u: goto L_08ACFD14;
    case 911u: goto L_08ACFD30;
    case 912u: goto L_08ACFD5C;
    case 913u: goto L_08ACFD70;
    case 914u: goto L_08ACFD7C;
    case 915u: goto L_08ACFD98;
    case 916u: goto L_08ACFDC8;
    case 917u: goto L_08ACFDD0;
    case 918u: goto L_08ACFDD8;
    case 919u: goto L_08ACFDE0;
    case 920u: goto L_08ACFE00;
    case 921u: goto L_08ACFE28;
    case 922u: goto L_08ACFE38;
    case 923u: goto L_08ACFE3C;
    case 924u: goto L_08ACFE58;
    case 925u: goto L_08ACFE70;
    case 926u: goto L_08ACFE94;
    case 927u: goto L_08ACFEA0;
    case 928u: goto L_08ACFEAC;
    case 929u: goto L_08ACFEC0;
    case 930u: goto L_08ACFEC8;
    case 931u: goto L_08ACFED0;
    case 932u: goto L_08ACFEE0;
    case 933u: goto L_08ACFEE4;
    case 934u: goto L_08ACFEFC;
    case 935u: goto L_08ACFF20;
    case 936u: goto L_08ACFF2C;
    case 937u: goto L_08ACFF38;
    case 938u: goto L_08ACFF4C;
    case 939u: goto L_08ACFF58;
    case 940u: goto L_08ACFF5C;
    case 941u: goto L_08ACFF74;
    case 942u: goto L_08ACFF9C;
    case 943u: goto L_08ACFFB4;
    case 944u: goto L_08ACFFB8;
    case 945u: goto L_08ACFFBC;
    case 946u: goto L_08ACFFC4;
    case 947u: goto L_08ACFFD0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08ACC000:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACC010u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 437u, 0x08A4B684u>(ctx, &aot_mem) && ctx.pc == 0x08ACC010u) goto L_08ACC010;
    return;
L_08ACC010:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08ACC020u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 437u, 0x08A4B684u>(ctx, &aot_mem) && ctx.pc == 0x08ACC020u) goto L_08ACC020;
    return;
L_08ACC020:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC02Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x08ACC02Cu) goto L_08ACC02C;
    return;
L_08ACC02C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08ACC038u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACC038u) goto L_08ACC038;
    return;
L_08ACC038:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08ACC04Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16744));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BDECu>(ctx, &aot_mem) && ctx.pc == 0x08ACC04Cu) goto L_08ACC04C;
    return;
L_08ACC04C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACC064:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACC0B0u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 594u, 0x0890B7CCu>(ctx, &aot_mem) && ctx.pc == 0x08ACC0B0u) goto L_08ACC0B0;
    return;
L_08ACC0B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC1BC;
      }
      goto L_08ACC0B8;
    }
L_08ACC0B8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACC0C4u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 625u, 0x0890B974u>(ctx, &aot_mem) && ctx.pc == 0x08ACC0C4u) goto L_08ACC0C4;
    return;
L_08ACC0C4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACC0D4u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 637u, 0x0890BA20u>(ctx, &aot_mem) && ctx.pc == 0x08ACC0D4u) goto L_08ACC0D4;
    return;
L_08ACC0D4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[23] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ACC1B4;
      }
      goto L_08ACC0E8;
    }
L_08ACC0E8:
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25176));
    ctx.gpr[21] = (0u | 37u);
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(1036));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    goto L_08ACC0F8;
L_08ACC0F8:
    ctx.gpr[20] = (ctx.gpr[18] + ctx.gpr[23]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACC138;
      }
      goto L_08ACC108;
    }
L_08ACC108:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[22] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08ACC128;
    }
    goto L_08ACC118;
L_08ACC118:
    ctx.gpr[31] = (0x08ACC120u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 589u, 0x08A4BF74u>(ctx, &aot_mem) && ctx.pc == 0x08ACC120u) goto L_08ACC120;
    return;
L_08ACC120:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08ACC128;
L_08ACC128:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ACC1A8;
      }
      goto L_08ACC138;
    }
L_08ACC138:
    ctx.gpr[20] = (ctx.gpr[18] + ctx.gpr[23]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACC188;
      }
      goto L_08ACC158;
    }
L_08ACC158:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[22] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08ACC178;
    }
    goto L_08ACC168;
L_08ACC168:
    ctx.gpr[31] = (0x08ACC170u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 589u, 0x08A4BF74u>(ctx, &aot_mem) && ctx.pc == 0x08ACC170u) goto L_08ACC170;
    return;
L_08ACC170:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08ACC178;
L_08ACC178:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ACC1A8;
      }
      goto L_08ACC188;
    }
L_08ACC188:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08ACC194u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 532u, 0x08ACB1BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACC194u) goto L_08ACC194;
    return;
L_08ACC194:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC1A0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 683u, 0x08ACBB24u>(ctx, &aot_mem) && ctx.pc == 0x08ACC1A0u) goto L_08ACC1A0;
    return;
L_08ACC1A0:
    ctx.gpr[31] = (0x08ACC1A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 6u, 0x08A4C078u>(ctx, &aot_mem) && ctx.pc == 0x08ACC1A8u) goto L_08ACC1A8;
    return;
L_08ACC1A8:
    ctx.gpr[4] = (ctx.gpr[23] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC0F8;
      }
      goto L_08ACC1B4;
    }
L_08ACC1B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC218;
      }
      goto L_08ACC1BC;
    }
L_08ACC1BC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACC1C8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x08ACC1C8u) goto L_08ACC1C8;
    return;
L_08ACC1C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACC1D8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 691u, 0x08ACBBBCu>(ctx, &aot_mem) && ctx.pc == 0x08ACC1D8u) goto L_08ACC1D8;
    return;
L_08ACC1D8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACC1E8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 50u, 0x0890C488u>(ctx, &aot_mem) && ctx.pc == 0x08ACC1E8u) goto L_08ACC1E8;
    return;
L_08ACC1E8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACC1F4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 594u, 0x0890B7CCu>(ctx, &aot_mem) && ctx.pc == 0x08ACC1F4u) goto L_08ACC1F4;
    return;
L_08ACC1F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC20C;
      }
      goto L_08ACC1FC;
    }
L_08ACC1FC:
    ctx.gpr[31] = (0x08ACC204u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 6u, 0x08A4C078u>(ctx, &aot_mem) && ctx.pc == 0x08ACC204u) goto L_08ACC204;
    return;
L_08ACC204:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC218;
      }
      goto L_08ACC20C;
    }
L_08ACC20C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACC218u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x08ACC218u) goto L_08ACC218;
    return;
L_08ACC218:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACC248:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1376));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1332), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1336), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1340), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1344), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1348), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1352), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1356), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1360), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1364), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1368), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACC284u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 437u, 0x08A4B684u>(ctx, &aot_mem) && ctx.pc == 0x08ACC284u) goto L_08ACC284;
    return;
L_08ACC284:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08ACC298u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 437u, 0x08A4B684u>(ctx, &aot_mem) && ctx.pc == 0x08ACC298u) goto L_08ACC298;
    return;
L_08ACC298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ACC2C0;
      }
      goto L_08ACC2B4;
    }
L_08ACC2B4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ACC2C0;
L_08ACC2C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC2CCu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 460u, 0x08A4B7FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACC2CCu) goto L_08ACC2CC;
    return;
L_08ACC2CC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[5] = (0u | 94u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ACC2EC;
      }
      goto L_08ACC2E4;
    }
L_08ACC2E4:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (0u | 1u);
    goto L_08ACC2EC;
L_08ACC2EC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08ACC2F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x08ACC2F8u) goto L_08ACC2F8;
    return;
L_08ACC2F8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (2227u << 16u);
      if (branch_taken) {
          goto L_08ACC330;
      }
      goto L_08ACC304;
    }
L_08ACC304:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC310u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 594u, 0x0890B7CCu>(ctx, &aot_mem) && ctx.pc == 0x08ACC310u) goto L_08ACC310;
    return;
L_08ACC310:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08ACC340;
      }
      goto L_08ACC318;
    }
L_08ACC318:
    ctx.gpr[31] = (0x08ACC320u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08ACC320u) goto L_08ACC320;
    return;
L_08ACC320:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACC340;
      }
      goto L_08ACC32C;
    }
L_08ACC32C:
    ctx.gpr[6] = (2227u << 16u);
    goto L_08ACC330;
L_08ACC330:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08ACC340u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-15196));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 361u, 0x08A4B144u>(ctx, &aot_mem) && ctx.pc == 0x08ACC340u) goto L_08ACC340;
    return;
L_08ACC340:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1328), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC350u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 17u, 0x08A4C150u>(ctx, &aot_mem) && ctx.pc == 0x08ACC350u) goto L_08ACC350;
    return;
L_08ACC350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08ACC42C;
      }
      goto L_08ACC370;
    }
L_08ACC370:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1328));
    goto L_08ACC374;
L_08ACC374:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC388u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_08ACC818;
L_08ACC388:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC3AC;
      }
      goto L_08ACC394;
    }
L_08ACC394:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC3ACu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_08ACC064;
L_08ACC3AC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACC3C4;
      }
      goto L_08ACC3B4;
    }
L_08ACC3B4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC3C4;
      }
      goto L_08ACC3BC;
    }
L_08ACC3BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08ACC410;
      }
      goto L_08ACC3C4;
    }
L_08ACC3C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC408;
      }
      goto L_08ACC3D4;
    }
L_08ACC3D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[21] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08ACC3F0;
    }
    goto L_08ACC3E4;
L_08ACC3E4:
    ctx.gpr[31] = (0x08ACC3ECu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 589u, 0x08A4BF74u>(ctx, &aot_mem) && ctx.pc == 0x08ACC3ECu) goto L_08ACC3EC;
    return;
L_08ACC3EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_08ACC3F0;
L_08ACC3F0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ACC410;
      }
      goto L_08ACC408;
    }
L_08ACC408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC42C;
      }
      goto L_08ACC410;
    }
L_08ACC410:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC420;
      }
      goto L_08ACC418;
    }
L_08ACC418:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC42C;
      }
      goto L_08ACC420;
    }
L_08ACC420:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC374;
      }
      goto L_08ACC42C;
    }
L_08ACC42C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ACC444u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 593u, 0x08A4BFACu>(ctx, &aot_mem) && ctx.pc == 0x08ACC444u) goto L_08ACC444;
    return;
L_08ACC444:
    ctx.gpr[31] = (0x08ACC44Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 3u, 0x08A4C040u>(ctx, &aot_mem) && ctx.pc == 0x08ACC44Cu) goto L_08ACC44C;
    return;
L_08ACC44C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC45Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACC45Cu) goto L_08ACC45C;
    return;
L_08ACC45C:
    ctx.gpr[2] = (0u | 2u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1344)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1348)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1356)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1368)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1376));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACC490:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACC4C4u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 437u, 0x08A4B684u>(ctx, &aot_mem) && ctx.pc == 0x08ACC4C4u) goto L_08ACC4C4;
    return;
L_08ACC4C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(1036));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 34u);
      if (branch_taken) {
          goto L_08ACC4E4;
      }
      goto L_08ACC4DC;
    }
L_08ACC4DC:
    ctx.gpr[31] = (0x08ACC4E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 589u, 0x08A4BF74u>(ctx, &aot_mem) && ctx.pc == 0x08ACC4E4u) goto L_08ACC4E4;
    return;
L_08ACC4E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ACC5F4;
      }
      goto L_08ACC504;
    }
L_08ACC504:
    ctx.gpr[22] = (2227u << 16u);
    ctx.gpr[20] = (0u | 92u);
    ctx.gpr[21] = (0u | 10u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-15168));
    goto L_08ACC514;
L_08ACC514:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08ACC554;
      }
      goto L_08ACC520;
    }
L_08ACC520:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08ACC554;
      }
      goto L_08ACC528;
    }
L_08ACC528:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08ACC554;
      }
      goto L_08ACC530;
    }
L_08ACC530:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC5B4;
      }
      goto L_08ACC538;
    }
L_08ACC538:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08ACC548u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 593u, 0x08A4BFACu>(ctx, &aot_mem) && ctx.pc == 0x08ACC548u) goto L_08ACC548;
    return;
L_08ACC548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ACC5E8;
      }
      goto L_08ACC554;
    }
L_08ACC554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08ACC570;
    }
    goto L_08ACC564;
L_08ACC564:
    ctx.gpr[31] = (0x08ACC56Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 589u, 0x08A4BF74u>(ctx, &aot_mem) && ctx.pc == 0x08ACC56Cu) goto L_08ACC56C;
    return;
L_08ACC56C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08ACC570;
L_08ACC570:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08ACC598;
    }
    goto L_08ACC58C;
L_08ACC58C:
    ctx.gpr[31] = (0x08ACC594u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 589u, 0x08A4BF74u>(ctx, &aot_mem) && ctx.pc == 0x08ACC594u) goto L_08ACC594;
    return;
L_08ACC594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08ACC598;
L_08ACC598:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ACC5E8;
      }
      goto L_08ACC5B4;
    }
L_08ACC5B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08ACC5D0;
    }
    goto L_08ACC5C4;
L_08ACC5C4:
    ctx.gpr[31] = (0x08ACC5CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 589u, 0x08A4BF74u>(ctx, &aot_mem) && ctx.pc == 0x08ACC5CCu) goto L_08ACC5CC;
    return;
L_08ACC5CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08ACC5D0;
L_08ACC5D0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_08ACC5E8;
L_08ACC5E8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ACC514;
      }
      goto L_08ACC5F4;
    }
L_08ACC5F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08ACC610;
    }
    goto L_08ACC604;
L_08ACC604:
    ctx.gpr[31] = (0x08ACC60Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 589u, 0x08A4BF74u>(ctx, &aot_mem) && ctx.pc == 0x08ACC60Cu) goto L_08ACC60C;
    return;
L_08ACC60C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08ACC610;
L_08ACC610:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
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
L_08ACC644:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25176));
    ctx.gpr[21] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-15160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    goto L_08ACC694;
L_08ACC694:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08ACC6A0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 412u, 0x08AED718u>(ctx, &aot_mem) && ctx.pc == 0x08ACC6A0u) goto L_08ACC6A0;
    return;
L_08ACC6A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC6B4;
      }
      goto L_08ACC6A8;
    }
L_08ACC6A8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08ACC694;
      }
      goto L_08ACC6B4;
    }
L_08ACC6B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC6E8;
      }
      goto L_08ACC6D0;
    }
L_08ACC6D0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    goto L_08ACC6E8;
L_08ACC6E8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC6F8;
      }
      goto L_08ACC6F0;
    }
L_08ACC6F0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    goto L_08ACC6F8;
L_08ACC6F8:
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACC754;
      }
      goto L_08ACC704;
    }
L_08ACC704:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[19] = (ctx.gpr[19] & 4u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC744;
      }
      goto L_08ACC72C;
    }
L_08ACC72C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[19] = (ctx.gpr[19] & 4u);
    goto L_08ACC744;
L_08ACC744:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC754;
      }
      goto L_08ACC74C;
    }
L_08ACC74C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    goto L_08ACC754;
L_08ACC754:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[20] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08ACC77C;
      }
      goto L_08ACC76C;
    }
L_08ACC76C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC77Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15152));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 389u, 0x08A4B374u>(ctx, &aot_mem) && ctx.pc == 0x08ACC77Cu) goto L_08ACC77C;
    return;
L_08ACC77C:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC79C;
      }
      goto L_08ACC78C;
    }
L_08ACC78C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC79Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15104));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 389u, 0x08A4B374u>(ctx, &aot_mem) && ctx.pc == 0x08ACC79Cu) goto L_08ACC79C;
    return;
L_08ACC79C:
    ctx.gpr[4] = (0u | 37u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08ACC7B4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x08ACC7B4u) goto L_08ACC7B4;
    return;
L_08ACC7B4:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_08ACC7E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15076));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACC808u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30272));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 488u, 0x08A4B984u>(ctx, &aot_mem) && ctx.pc == 0x08ACC808u) goto L_08ACC808;
    return;
L_08ACC808:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACC818:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    goto L_08ACC840;
L_08ACC840:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(42) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCA38;
      }
      goto L_08ACC850;
    }
L_08ACC850:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-14864)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACC868:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACC894;
      }
      goto L_08ACC878;
    }
L_08ACC878:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC88Cu);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 650u, 0x08ACB8B0u>(ctx, &aot_mem) && ctx.pc == 0x08ACC88Cu) goto L_08ACC88C;
    return;
L_08ACC88C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCB4C;
      }
      goto L_08ACC894;
    }
L_08ACC894:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC8A8u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 650u, 0x08ACB8B0u>(ctx, &aot_mem) && ctx.pc == 0x08ACC8A8u) goto L_08ACC8A8;
    return;
L_08ACC8A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCB4C;
      }
      goto L_08ACC8B0;
    }
L_08ACC8B0:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC8C0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 657u, 0x08ACB960u>(ctx, &aot_mem) && ctx.pc == 0x08ACC8C0u) goto L_08ACC8C0;
    return;
L_08ACC8C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCB4C;
      }
      goto L_08ACC8C8;
    }
L_08ACC8C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 102u);
      if (branch_taken) {
          goto L_08ACC8EC;
      }
      goto L_08ACC8D8;
    }
L_08ACC8D8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 98 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC9B0;
      }
      goto L_08ACC8E4;
    }
L_08ACC8E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC8FC;
      }
      goto L_08ACC8EC;
    }
L_08ACC8EC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACC928;
      }
      goto L_08ACC8F4;
    }
L_08ACC8F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC9B0;
      }
      goto L_08ACC8FC;
    }
L_08ACC8FC:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC90Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 611u, 0x08ACB660u>(ctx, &aot_mem) && ctx.pc == 0x08ACC90Cu) goto L_08ACC90C;
    return;
L_08ACC90C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC920;
      }
      goto L_08ACC918;
    }
L_08ACC918:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ACC840;
      }
      goto L_08ACC920;
    }
L_08ACC920:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACCB4C;
      }
      goto L_08ACC928;
    }
L_08ACC928:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 91u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACC94C;
      }
      goto L_08ACC93C;
    }
L_08ACC93C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08ACC94Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15068));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 389u, 0x08A4B374u>(ctx, &aot_mem) && ctx.pc == 0x08ACC94Cu) goto L_08ACC94C;
    return;
L_08ACC94C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC958u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 545u, 0x08ACB27Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC958u) goto L_08ACC958;
    return;
L_08ACC958:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[17] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-1))))));
        goto L_08ACC96C;
    }
    goto L_08ACC96C;
L_08ACC96C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08ACC97Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 583u, 0x08ACB4C4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC97Cu) goto L_08ACC97C;
    return;
L_08ACC97C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC9A8;
      }
      goto L_08ACC984;
    }
L_08ACC984:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08ACC998u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 583u, 0x08ACB4C4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC998u) goto L_08ACC998;
    return;
L_08ACC998:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC9A8;
      }
      goto L_08ACC9A0;
    }
L_08ACC9A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08ACC840;
      }
      goto L_08ACC9A8;
    }
L_08ACC9A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACCB4C;
      }
      goto L_08ACC9B0;
    }
L_08ACC9B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25176));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCA04;
      }
      goto L_08ACC9D8;
    }
L_08ACC9D8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC9E8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 662u, 0x08ACB9D8u>(ctx, &aot_mem) && ctx.pc == 0x08ACC9E8u) goto L_08ACC9E8;
    return;
L_08ACC9E8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC9FC;
      }
      goto L_08ACC9F4;
    }
L_08ACC9F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ACC840;
      }
      goto L_08ACC9FC;
    }
L_08ACC9FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACCB4C;
      }
      goto L_08ACCA04;
    }
L_08ACCA04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCA38;
      }
      goto L_08ACCA0C;
    }
L_08ACCA0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08ACCB4C;
      }
      goto L_08ACCA14;
    }
L_08ACCA14:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCA38;
      }
      goto L_08ACCA20;
    }
L_08ACCA20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 0u);
    if (ctx.gpr[17] == ctx.gpr[4]) {
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
        goto L_08ACCA30;
    }
    goto L_08ACCA30;
L_08ACCA30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCB4C;
      }
      goto L_08ACCA38;
    }
L_08ACCA38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACCA44u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 545u, 0x08ACB27Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACCA44u) goto L_08ACCA44;
    return;
L_08ACCA44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACCA78;
      }
      goto L_08ACCA58;
    }
L_08ACCA58:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08ACCA6Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 601u, 0x08ACB5E0u>(ctx, &aot_mem) && ctx.pc == 0x08ACCA6Cu) goto L_08ACCA6C;
    return;
L_08ACCA6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCA78;
      }
      goto L_08ACCA74;
    }
L_08ACCA74:
    ctx.gpr[20] = (0u | 1u);
    goto L_08ACCA78;
L_08ACCA78:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 42 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 64 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACCB30;
      }
      goto L_08ACCA88;
    }
L_08ACCA88:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-42));
      if (branch_taken) {
          goto L_08ACCB30;
      }
      goto L_08ACCA90;
    }
L_08ACCA90:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-14696)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACCAA8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACCAC4;
      }
      goto L_08ACCAB0;
    }
L_08ACCAB0:
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08ACCABCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ACC818;
L_08ACCABC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCACC;
      }
      goto L_08ACCAC4;
    }
L_08ACCAC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACC840;
      }
      goto L_08ACCACC;
    }
L_08ACCACC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCB4C;
      }
      goto L_08ACCAD4;
    }
L_08ACCAD4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACCAE8u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 627u, 0x08ACB730u>(ctx, &aot_mem) && ctx.pc == 0x08ACCAE8u) goto L_08ACCAE8;
    return;
L_08ACCAE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCB4C;
      }
      goto L_08ACCAF0;
    }
L_08ACCAF0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACCB0C;
      }
      goto L_08ACCAF8;
    }
L_08ACCAF8:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACCB0Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 627u, 0x08ACB730u>(ctx, &aot_mem) && ctx.pc == 0x08ACCB0Cu) goto L_08ACCB0C;
    return;
L_08ACCB0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCB4C;
      }
      goto L_08ACCB14;
    }
L_08ACCB14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACCB28u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 639u, 0x08ACB7FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACCB28u) goto L_08ACCB28;
    return;
L_08ACCB28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCB4C;
      }
      goto L_08ACCB30;
    }
L_08ACCB30:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCB44;
      }
      goto L_08ACCB38;
    }
L_08ACCB38:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08ACC840;
      }
      goto L_08ACCB44;
    }
L_08ACCB44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACCB4C;
      }
      goto L_08ACCB4C;
    }
L_08ACCB4C:
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
L_08ACCB6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1632));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1596), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1608), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1600), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1604), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1612), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1616), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1620), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACCBA0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 437u, 0x08A4B684u>(ctx, &aot_mem) && ctx.pc == 0x08ACCBA0u) goto L_08ACCBA0;
    return;
L_08ACCBA0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[17] = (ctx.gpr[18] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08ACCBB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 17u, 0x08A4C150u>(ctx, &aot_mem) && ctx.pc == 0x08ACCBB8u) goto L_08ACCBB8;
    return;
L_08ACCBB8:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCE70;
      }
      goto L_08ACCBC4;
    }
L_08ACCBC4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACCC10;
      }
      goto L_08ACCBD4;
    }
L_08ACCBD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08ACCBF4;
      }
      goto L_08ACCBE8;
    }
L_08ACCBE8:
    ctx.gpr[31] = (0x08ACCBF0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 589u, 0x08A4BF74u>(ctx, &aot_mem) && ctx.pc == 0x08ACCBF0u) goto L_08ACCBF0;
    return;
L_08ACCBF0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08ACCBF4;
L_08ACCBF4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ACCE64;
      }
      goto L_08ACCC10;
    }
L_08ACCC10:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 37u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1588), 0u);
        goto L_08ACCC60;
    }
    goto L_08ACCC24;
L_08ACCC24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08ACCC44;
      }
      goto L_08ACCC38;
    }
L_08ACCC38:
    ctx.gpr[31] = (0x08ACCC40u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 589u, 0x08A4BF74u>(ctx, &aot_mem) && ctx.pc == 0x08ACCC40u) goto L_08ACCC40;
    return;
L_08ACCC40:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08ACCC44;
L_08ACCC44:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ACCE64;
      }
      goto L_08ACCC60;
    }
L_08ACCC60:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25176));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCC98;
      }
      goto L_08ACCC88;
    }
L_08ACCC88:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACCCFC;
      }
      goto L_08ACCC98;
    }
L_08ACCC98:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(1588));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACCCB0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08ACC644;
L_08ACCCB0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 69 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACCCE4;
      }
      goto L_08ACCCC0;
    }
L_08ACCCC0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 121 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-69));
      if (branch_taken) {
          goto L_08ACCCE4;
      }
      goto L_08ACCCCC;
    }
L_08ACCCCC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-14608)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACCCE4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACCCF4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14996));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 389u, 0x08A4B374u>(ctx, &aot_mem) && ctx.pc == 0x08ACCCF4u) goto L_08ACCCF4;
    return;
L_08ACCCF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCE7C;
      }
      goto L_08ACCCFC;
    }
L_08ACCCFC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACCD0Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15032));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 389u, 0x08A4B374u>(ctx, &aot_mem) && ctx.pc == 0x08ACCD0Cu) goto L_08ACCD0C;
    return;
L_08ACCD0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCE7C;
      }
      goto L_08ACCD14;
    }
L_08ACCD14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACCD20u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08ACCD20u) goto L_08ACCD20;
    return;
L_08ACCD20:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1076));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[31] = (0x08ACCD34u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACCD34u) goto L_08ACCD34;
    return;
L_08ACCD34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCE48;
      }
      goto L_08ACCD3C;
    }
L_08ACCD3C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1076));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACCD50u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08ACCD50u) goto L_08ACCD50;
    return;
L_08ACCD50:
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_08ACCD78;
      }
      goto L_08ACCD6C;
    }
L_08ACCD6C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ACCD90;
      }
      goto L_08ACCD78;
    }
L_08ACCD78:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08ACCD90;
L_08ACCD90:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ACCDA0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACCDA0u) goto L_08ACCDA0;
    return;
L_08ACCDA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCE48;
      }
      goto L_08ACCDA8;
    }
L_08ACCDA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACCDB4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08ACCDB4u) goto L_08ACCDB4;
    return;
L_08ACCDB4:
    ctx.gpr[31] = (0x08ACCDBCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08ACCDBCu) goto L_08ACCDBC;
    return;
L_08ACCDBC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1076));
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[31] = (0x08ACCDD0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACCDD0u) goto L_08ACCDD0;
    return;
L_08ACCDD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCE48;
      }
      goto L_08ACCDD8;
    }
L_08ACCDD8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACCDE8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08ACC490;
L_08ACCDE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCE64;
      }
      goto L_08ACCDF0;
    }
L_08ACCDF0:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1592));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACCE00u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 437u, 0x08A4B684u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE00u) goto L_08ACCE00;
    return;
L_08ACCE00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1588)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ACCE38;
      }
      goto L_08ACCE0C;
    }
L_08ACCE0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1592)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCE38;
      }
      goto L_08ACCE1C;
    }
L_08ACCE1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACCE28u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE28u) goto L_08ACCE28;
    return;
L_08ACCE28:
    ctx.gpr[31] = (0x08ACCE30u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 6u, 0x08A4C078u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE30u) goto L_08ACCE30;
    return;
L_08ACCE30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCE64;
      }
      goto L_08ACCE38;
    }
L_08ACCE38:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1076));
    ctx.gpr[31] = (0x08ACCE48u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACCE48u) goto L_08ACCE48;
    return;
L_08ACCE48:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1076));
    ctx.gpr[31] = (0x08ACCE54u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE54u) goto L_08ACCE54;
    return;
L_08ACCE54:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ACCE64u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 593u, 0x08A4BFACu>(ctx, &aot_mem) && ctx.pc == 0x08ACCE64u) goto L_08ACCE64;
    return;
L_08ACCE64:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCBC4;
      }
      goto L_08ACCE70;
    }
L_08ACCE70:
    ctx.gpr[31] = (0x08ACCE78u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 3u, 0x08A4C040u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE78u) goto L_08ACCE78;
    return;
L_08ACCE78:
    ctx.gpr[2] = (0u | 1u);
    goto L_08ACCE7C;
L_08ACCE7C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1596)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1600)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1604)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1608)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1612)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1616)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1620)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1632));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACCEA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08ACCF3C;
L_08ACCF3C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(816), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ACCF3C;
      }
      goto L_08ACCF50;
    }
L_08ACCF50:
    ctx.gpr[31] = (0x08ACCF58u);
    // nop
    goto L_08ACD9C4;
L_08ACCF58:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACCF64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACCF78u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08ACD8C8;
L_08ACCF78:
    ctx.gpr[31] = (0x08ACCF80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ACCEA0;
L_08ACCF80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACCF90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACCFD8;
      }
      goto L_08ACCFB4;
    }
L_08ACCFB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(20000));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCFE0;
      }
      goto L_08ACCFD0;
    }
L_08ACCFD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCFEC;
      }
      goto L_08ACCFD8;
    }
L_08ACCFD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD178;
      }
      goto L_08ACCFE0;
    }
L_08ACCFE0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    goto L_08ACCFEC;
L_08ACCFEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD178;
      }
      goto L_08ACD000;
    }
L_08ACD000:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD064;
      }
      goto L_08ACD010;
    }
L_08ACD010:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08ACD01Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08ACD01Cu) goto L_08ACD01C;
    return;
L_08ACD01C:
    ctx.gpr[5] = (16784u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACD02Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08ACDBC0;
L_08ACD02C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD05C;
      }
      goto L_08ACD034;
    }
L_08ACD034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 0 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 0u);
        goto L_08ACD050;
    }
    goto L_08ACD050;
L_08ACD050:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[31] = (0x08ACD05Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ACD190;
L_08ACD05C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD068;
      }
      goto L_08ACD064;
    }
L_08ACD064:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08ACD068;
L_08ACD068:
    ctx.gpr[31] = (0x08ACD070u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ACDAD8;
L_08ACD070:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_08ACD080;
L_08ACD080:
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD0A8;
      }
      goto L_08ACD094;
    }
L_08ACD094:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08ACD0AC;
      }
      goto L_08ACD0A0;
    }
L_08ACD0A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACD0AC;
      }
      goto L_08ACD0A8;
    }
L_08ACD0A8:
    ctx.gpr[4] = (0u | 1u);
    goto L_08ACD0AC;
L_08ACD0AC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD080;
      }
      goto L_08ACD0C0;
    }
L_08ACD0C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACD0DC;
      }
      goto L_08ACD0CC;
    }
L_08ACD0CC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08ACD0D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14400));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACD0D8u) goto L_08ACD0D8;
    return;
L_08ACD0D8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08ACD0DC;
L_08ACD0DC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD178;
      }
      goto L_08ACD0E4;
    }
L_08ACD0E4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08ACD0F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14360));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACD0F0u) goto L_08ACD0F0;
    return;
L_08ACD0F0:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08ACD0F8;
L_08ACD0F8:
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD164;
      }
      goto L_08ACD10C;
    }
L_08ACD10C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD154;
      }
      goto L_08ACD11C;
    }
L_08ACD11C:
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[16] + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD140;
      }
      goto L_08ACD130;
    }
L_08ACD130:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(816), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(816), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACD154;
      }
      goto L_08ACD140;
    }
L_08ACD140:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD11C;
      }
      goto L_08ACD154;
    }
L_08ACD154:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD164;
      }
      goto L_08ACD15C;
    }
L_08ACD15C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD178;
      }
      goto L_08ACD164;
    }
L_08ACD164:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD0F8;
      }
      goto L_08ACD178;
    }
L_08ACD178:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD190:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD1C4;
      }
      goto L_08ACD1A0;
    }
L_08ACD1A0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-30112)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08ACD1CC;
      }
      goto L_08ACD1BC;
    }
L_08ACD1BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD1D4;
      }
      goto L_08ACD1C4;
    }
L_08ACD1C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD3A0;
      }
      goto L_08ACD1CC;
    }
L_08ACD1CC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    goto L_08ACD1D4;
L_08ACD1D4:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4800 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD218;
      }
      goto L_08ACD1E0;
    }
L_08ACD1E0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7824)));
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7824), ctx.gpr[7]);
    ctx.gpr[7] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 30u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ACD38C;
      }
      goto L_08ACD218;
    }
L_08ACD218:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2400 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD25C;
      }
      goto L_08ACD224;
    }
L_08ACD224:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7824)));
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(5));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7824), ctx.gpr[7]);
    ctx.gpr[7] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 8u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ACD38C;
      }
      goto L_08ACD25C;
    }
L_08ACD25C:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD2A0;
      }
      goto L_08ACD268;
    }
L_08ACD268:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7824)));
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7824), ctx.gpr[7]);
    ctx.gpr[7] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 6u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ACD38C;
      }
      goto L_08ACD2A0;
    }
L_08ACD2A0:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 550 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD2E4;
      }
      goto L_08ACD2AC;
    }
L_08ACD2AC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7824)));
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7824), ctx.gpr[7]);
    ctx.gpr[7] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ACD38C;
      }
      goto L_08ACD2E4;
    }
L_08ACD2E4:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 180 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD324;
      }
      goto L_08ACD2F0;
    }
L_08ACD2F0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7824)));
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7824), ctx.gpr[7]);
    ctx.gpr[7] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08ACD38C;
      }
      goto L_08ACD324;
    }
L_08ACD324:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACD360;
      }
      goto L_08ACD330;
    }
L_08ACD330:
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-7824)));
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[9] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-7824), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ACD38C;
      }
      goto L_08ACD360;
    }
L_08ACD360:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACD378;
      }
      goto L_08ACD368;
    }
L_08ACD368:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820), ctx.gpr[7]);
    goto L_08ACD378;
L_08ACD378:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    ctx.gpr[7] = (0u | 0u);
    goto L_08ACD38C;
L_08ACD38C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACD3A0;
      }
      goto L_08ACD394;
    }
L_08ACD394:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08ACD3A0;
L_08ACD3A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD3A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08ACD3E0;
      }
      goto L_08ACD3D8;
    }
L_08ACD3D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD400;
      }
      goto L_08ACD3E0;
    }
L_08ACD3E0:
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08ACD400u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08ACD9E4;
L_08ACD400:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD40C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08ACD470;
      }
      goto L_08ACD444;
    }
L_08ACD444:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08ACD460u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    goto L_08ACD9E4;
L_08ACD460:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD478;
      }
      goto L_08ACD468;
    }
L_08ACD468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD48C;
      }
      goto L_08ACD470;
    }
L_08ACD470:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD48C;
      }
      goto L_08ACD478;
    }
L_08ACD478:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACD48Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_08ACDE80;
L_08ACD48C:
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
L_08ACD4A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ACD4E8;
      }
      goto L_08ACD4CC;
    }
L_08ACD4CC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30116)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD4F0;
      }
      goto L_08ACD4E0;
    }
L_08ACD4E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD4F4;
      }
      goto L_08ACD4E8;
    }
L_08ACD4E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD578;
      }
      goto L_08ACD4F0;
    }
L_08ACD4F0:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08ACD4F4;
L_08ACD4F4:
    ctx.gpr[31] = (0x08ACD4FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ACD9C4;
L_08ACD4FC:
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD570;
      }
      goto L_08ACD508;
    }
L_08ACD508:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[16]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-14256)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD520:
    ctx.gpr[4] = (0u | 70u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACD570;
      }
      goto L_08ACD52C;
    }
L_08ACD52C:
    ctx.gpr[4] = (0u | 200u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACD570;
      }
      goto L_08ACD538;
    }
L_08ACD538:
    ctx.gpr[4] = (0u | 570u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACD570;
      }
      goto L_08ACD544;
    }
L_08ACD544:
    ctx.gpr[4] = (0u | 1220u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACD570;
      }
      goto L_08ACD550;
    }
L_08ACD550:
    ctx.gpr[4] = (0u | 2420u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACD570;
      }
      goto L_08ACD55C;
    }
L_08ACD55C:
    ctx.gpr[4] = (0u | 4820u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACD570;
      }
      goto L_08ACD568;
    }
L_08ACD568:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08ACD570;
      }
      goto L_08ACD570;
    }
L_08ACD570:
    ctx.gpr[31] = (0x08ACD578u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ACD190;
L_08ACD578:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD58C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ACD5B8;
      }
      goto L_08ACD5B0;
    }
L_08ACD5B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD5D4;
      }
      goto L_08ACD5B8;
    }
L_08ACD5B8:
    ctx.gpr[31] = (0x08ACD5C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ACD674;
L_08ACD5C0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACD5CCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ACD4A8;
L_08ACD5CC:
    ctx.gpr[31] = (0x08ACD5D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ACD190;
L_08ACD5D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD5E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ACD628;
      }
      goto L_08ACD60C;
    }
L_08ACD60C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD630;
      }
      goto L_08ACD620;
    }
L_08ACD620:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD63C;
      }
      goto L_08ACD628;
    }
L_08ACD628:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD660;
      }
      goto L_08ACD630;
    }
L_08ACD630:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08ACD63Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ACD4A8;
L_08ACD63C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD654;
      }
      goto L_08ACD64C;
    }
L_08ACD64C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD660;
      }
      goto L_08ACD654;
    }
L_08ACD654:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACD660u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ACD4A8;
L_08ACD660:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD674:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD6AC;
      }
      goto L_08ACD684;
    }
L_08ACD684:
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACD738;
      }
      goto L_08ACD690;
    }
L_08ACD690:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-14224)));
    jump_target = ctx.gpr[1];
    ctx.gpr[4] = (2230u << 16u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD6AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD738;
      }
      goto L_08ACD6B4;
    }
L_08ACD6B4:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30116), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 115u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30112), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ACD738;
      }
      goto L_08ACD6C8;
    }
L_08ACD6C8:
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30116), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 365u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30112), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ACD738;
      }
      goto L_08ACD6DC;
    }
L_08ACD6DC:
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30116), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 875u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30112), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ACD738;
      }
      goto L_08ACD6F0;
    }
L_08ACD6F0:
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30116), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 1800u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30112), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ACD738;
      }
      goto L_08ACD704;
    }
L_08ACD704:
    ctx.gpr[6] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30116), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 3600u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30112), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ACD738;
      }
      goto L_08ACD718;
    }
L_08ACD718:
    ctx.gpr[6] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30116), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 7200u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30112), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ACD738;
      }
      goto L_08ACD72C;
    }
L_08ACD72C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30116), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30112), 0u);
      if (branch_taken) {
          goto L_08ACD738;
      }
      goto L_08ACD738;
    }
L_08ACD738:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD740:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD758;
      }
      goto L_08ACD750;
    }
L_08ACD750:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACD764;
      }
      goto L_08ACD758;
    }
L_08ACD758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] ^ 1u);
    goto L_08ACD764;
L_08ACD764:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD76C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD794;
      }
      goto L_08ACD77C;
    }
L_08ACD77C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACD7A8;
      }
      goto L_08ACD78C;
    }
L_08ACD78C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
      if (branch_taken) {
          goto L_08ACD79C;
      }
      goto L_08ACD794;
    }
L_08ACD794:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACD7B0;
      }
      goto L_08ACD79C;
    }
L_08ACD79C:
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD7AC;
      }
      goto L_08ACD7A8;
    }
L_08ACD7A8:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ACD7AC;
L_08ACD7AC:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08ACD7B0;
L_08ACD7B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD7B8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD7E0;
      }
      goto L_08ACD7C8;
    }
L_08ACD7C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACD7F4;
      }
      goto L_08ACD7D8;
    }
L_08ACD7D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
      if (branch_taken) {
          goto L_08ACD7E8;
      }
      goto L_08ACD7E0;
    }
L_08ACD7E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACD7FC;
      }
      goto L_08ACD7E8;
    }
L_08ACD7E8:
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD7F8;
      }
      goto L_08ACD7F4;
    }
L_08ACD7F4:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ACD7F8;
L_08ACD7F8:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08ACD7FC;
L_08ACD7FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD804:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD82C;
      }
      goto L_08ACD814;
    }
L_08ACD814:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACD840;
      }
      goto L_08ACD824;
    }
L_08ACD824:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
      if (branch_taken) {
          goto L_08ACD834;
      }
      goto L_08ACD82C;
    }
L_08ACD82C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACD848;
      }
      goto L_08ACD834;
    }
L_08ACD834:
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD844;
      }
      goto L_08ACD840;
    }
L_08ACD840:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ACD844;
L_08ACD844:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08ACD848;
L_08ACD848:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD850:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD8A4;
      }
      goto L_08ACD860;
    }
L_08ACD860:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[6] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08ACD89C;
      }
      goto L_08ACD870;
    }
L_08ACD870:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD89C;
      }
      goto L_08ACD878;
    }
L_08ACD878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
        goto L_08ACD8AC;
    }
    goto L_08ACD888;
L_08ACD888:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD8BC;
      }
      goto L_08ACD894;
    }
L_08ACD894:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACD8C0;
      }
      goto L_08ACD89C;
    }
L_08ACD89C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACD8C0;
      }
      goto L_08ACD8A4;
    }
L_08ACD8A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACD8C0;
      }
      goto L_08ACD8AC;
    }
L_08ACD8AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD894;
      }
      goto L_08ACD8B4;
    }
L_08ACD8B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACD8C0;
      }
      goto L_08ACD8BC;
    }
L_08ACD8BC:
    ctx.gpr[2] = (0u | 1u);
    goto L_08ACD8C0;
L_08ACD8C0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD8C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30100)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[22] = (0u | 55u);
    ctx.gpr[23] = (0u | 54u);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30104)));
    goto L_08ACD910;
L_08ACD910:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD984;
      }
      goto L_08ACD91C;
    }
L_08ACD91C:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2072), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(592), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(596), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(848), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08ACD980;
      }
      goto L_08ACD938;
    }
L_08ACD938:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08ACD980;
      }
      goto L_08ACD940;
    }
L_08ACD940:
    ctx.gpr[31] = (0x08ACD948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08ACD948u) goto L_08ACD948;
    return;
L_08ACD948:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08ACD95Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08ACD95Cu) goto L_08ACD95C;
    return;
L_08ACD95C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08ACD980u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x08ACD980u) goto L_08ACD980;
    return;
L_08ACD980:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(816), 0u);
    goto L_08ACD984;
L_08ACD984:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ACD910;
      }
      goto L_08ACD994;
    }
L_08ACD994:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
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
L_08ACD9C4:
    ctx.gpr[5] = (0u | 0u);
    goto L_08ACD9C8;
L_08ACD9C8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08ACD9C8;
      }
      goto L_08ACD9DC;
    }
L_08ACD9DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD9E4:
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[8] = (ctx.gpr[10] & 255u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDA0C;
      }
      goto L_08ACDA00;
    }
L_08ACDA00:
    ctx.gpr[11] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACDA14;
      }
      goto L_08ACDA0C;
    }
L_08ACDA0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACDAD0;
      }
      goto L_08ACDA14;
    }
L_08ACDA14:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACDA5C;
      }
      goto L_08ACDA20;
    }
L_08ACDA20:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08ACDA5C;
      }
      goto L_08ACDA2C;
    }
L_08ACDA2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDA48;
      }
      goto L_08ACDA38;
    }
L_08ACDA38:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDA50;
      }
      goto L_08ACDA40;
    }
L_08ACDA40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDA54;
      }
      goto L_08ACDA48;
    }
L_08ACDA48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACDAD0;
      }
      goto L_08ACDA50;
    }
L_08ACDA50:
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[9]));
    goto L_08ACDA54;
L_08ACDA54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACDAD0;
      }
      goto L_08ACDA5C;
    }
L_08ACDA5C:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08ACDA14;
      }
      goto L_08ACDA6C;
    }
L_08ACDA6C:
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08ACDA78;
L_08ACDA78:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDA9C;
      }
      goto L_08ACDA80;
    }
L_08ACDA80:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDA9C;
      }
      goto L_08ACDA8C;
    }
L_08ACDA8C:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[11]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACDA78;
      }
      goto L_08ACDA9C;
    }
L_08ACDA9C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDACC;
      }
      goto L_08ACDAA4;
    }
L_08ACDAA4:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_08ACDACC;
L_08ACDACC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACDAD0;
L_08ACDAD0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACDAD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACDB10;
      }
      goto L_08ACDB08;
    }
L_08ACDB08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDB9C;
      }
      goto L_08ACDB10;
    }
L_08ACDB10:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[20] + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (2230u << 16u);
    goto L_08ACDB24;
L_08ACDB24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDB88;
      }
      goto L_08ACDB30;
    }
L_08ACDB30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(500));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDB6C;
      }
      goto L_08ACDB48;
    }
L_08ACDB48:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDB6C;
      }
      goto L_08ACDB54;
    }
L_08ACDB54:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(81)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACDB68u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08ACDE80;
L_08ACDB68:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08ACDB6C;
L_08ACDB6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDB88;
      }
      goto L_08ACDB84;
    }
L_08ACDB84:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), 0u);
    goto L_08ACDB88;
L_08ACDB88:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08ACDB24;
      }
      goto L_08ACDB9C;
    }
L_08ACDB9C:
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
L_08ACDBC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACDC28;
      }
      goto L_08ACDC04;
    }
L_08ACDC04:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[3] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ACDC30;
      }
      goto L_08ACDC20;
    }
L_08ACDC20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDD00;
      }
      goto L_08ACDC28;
    }
L_08ACDC28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACDE4C;
      }
      goto L_08ACDC30;
    }
L_08ACDC30:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(3248));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 2u);
    ctx.gpr[9] = (0u | 3u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.lo);
    goto L_08ACDC54;
L_08ACDC54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08ACDC74;
    }
    goto L_08ACDC6C;
L_08ACDC6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACDC78;
      }
      goto L_08ACDC74;
    }
L_08ACDC74:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_08ACDC78;
L_08ACDC78:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDCEC;
      }
      goto L_08ACDC80;
    }
L_08ACDC80:
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACDCB0;
      }
      goto L_08ACDC8C;
    }
L_08ACDC8C:
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08ACDCB0;
      }
      goto L_08ACDC98;
    }
L_08ACDC98:
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08ACDCB0;
      }
      goto L_08ACDCA4;
    }
L_08ACDCA4:
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08ACDCEC;
      }
      goto L_08ACDCB0;
    }
L_08ACDCB0:
    { const std::uint32_t vfpu_address = ctx.gpr[12] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACDCEC;
      }
      goto L_08ACDCE8;
    }
L_08ACDCE8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08ACDCEC;
L_08ACDCEC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3248));
      if (branch_taken) {
          goto L_08ACDC54;
      }
      goto L_08ACDD00;
    }
L_08ACDD00:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08ACDE48;
      }
      goto L_08ACDD18;
    }
L_08ACDD18:
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[19] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[30] = (0u | 80u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08ACDD40;
L_08ACDD40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_08ACDD60;
    }
    goto L_08ACDD58;
L_08ACDD58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACDD64;
      }
      goto L_08ACDD60;
    }
L_08ACDD60:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_08ACDD64;
L_08ACDD64:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDE34;
      }
      goto L_08ACDD70;
    }
L_08ACDD70:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDDC0;
      }
      goto L_08ACDD80;
    }
L_08ACDD80:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 199u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACDDC0;
      }
      goto L_08ACDD90;
    }
L_08ACDD90:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 196u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACDDC0;
      }
      goto L_08ACDDA0;
    }
L_08ACDDA0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 157u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACDDC0;
      }
      goto L_08ACDDB0;
    }
L_08ACDDB0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 158u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACDE34;
      }
      goto L_08ACDDC0;
    }
L_08ACDDC0:
    ctx.gpr[31] = (0x08ACDDC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08ACDDC8u) goto L_08ACDDC8;
    return;
L_08ACDDC8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACDE34;
      }
      goto L_08ACDDD0;
    }
L_08ACDDD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACDE34;
      }
      goto L_08ACDDE4;
    }
L_08ACDDE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08ACDE34;
      }
      goto L_08ACDDF4;
    }
L_08ACDDF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACDE34;
      }
      goto L_08ACDE30;
    }
L_08ACDE30:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08ACDE34;
L_08ACDE34:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1760));
      if (branch_taken) {
          goto L_08ACDD40;
      }
      goto L_08ACDE48;
    }
L_08ACDE48:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    goto L_08ACDE4C;
L_08ACDE4C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACDE80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ACDEE0;
      }
      goto L_08ACDEC0;
    }
L_08ACDEC0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7076)));
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ACDEE8;
      }
      goto L_08ACDED8;
    }
L_08ACDED8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDEF8;
      }
      goto L_08ACDEE0;
    }
L_08ACDEE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE2DC;
      }
      goto L_08ACDEE8;
    }
L_08ACDEE8:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08ACDEF8;
L_08ACDEF8:
    ctx.gpr[31] = (0x08ACDF00u);
    ctx.gpr[21] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 444u, 0x08ACAA28u>(ctx, &aot_mem) && ctx.pc == 0x08ACDF00u) goto L_08ACDF00;
    return;
L_08ACDF00:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 100u);
        goto L_08ACDF10;
    }
    goto L_08ACDF10;
L_08ACDF10:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[19] == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08ACDF4C;
      }
      goto L_08ACDF3C;
    }
L_08ACDF3C:
    ctx.gpr[4] = (16042u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32506u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08ACDF4C;
L_08ACDF4C:
    ctx.gpr[4] = (ctx.gpr[20] < static_cast<std::uint32_t>(19) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE294;
      }
      goto L_08ACDF58;
    }
L_08ACDF58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[20]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-14192)));
    jump_target = ctx.gpr[1];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACDF74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE2AC;
      }
      goto L_08ACDF7C;
    }
L_08ACDF7C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE2AC;
      }
      goto L_08ACDFA8;
    }
L_08ACDFA8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16948u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE2AC;
      }
      goto L_08ACDFD4;
    }
L_08ACDFD4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE2AC;
      }
      goto L_08ACE000;
    }
L_08ACE000:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE2AC;
      }
      goto L_08ACE02C;
    }
L_08ACE02C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE2AC;
      }
      goto L_08ACE058;
    }
L_08ACE058:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE2AC;
      }
      goto L_08ACE084;
    }
L_08ACE084:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE2AC;
      }
      goto L_08ACE0B0;
    }
L_08ACE0B0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE2AC;
      }
      goto L_08ACE0DC;
    }
L_08ACE0DC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE2AC;
      }
      goto L_08ACE108;
    }
L_08ACE108:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE2AC;
      }
      goto L_08ACE134;
    }
L_08ACE134:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16784u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE2AC;
      }
      goto L_08ACE160;
    }
L_08ACE160:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE2AC;
      }
      goto L_08ACE18C;
    }
L_08ACE18C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17352u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE2AC;
      }
      goto L_08ACE1B8;
    }
L_08ACE1B8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE2AC;
      }
      goto L_08ACE1E4;
    }
L_08ACE1E4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE2AC;
      }
      goto L_08ACE210;
    }
L_08ACE210:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE2AC;
      }
      goto L_08ACE23C;
    }
L_08ACE23C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17402u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE2AC;
      }
      goto L_08ACE268;
    }
L_08ACE268:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE2AC;
      }
      goto L_08ACE294;
    }
L_08ACE294:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08ACE2A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14304));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 541u, 0x08AFA638u>(ctx, &aot_mem) && ctx.pc == 0x08ACE2A0u) goto L_08ACE2A0;
    return;
L_08ACE2A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_08ACE2AC;
L_08ACE2AC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE2BC;
      }
      goto L_08ACE2B4;
    }
L_08ACE2B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACE2BC;
      }
      goto L_08ACE2BC;
    }
L_08ACE2BC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACE2D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 122u, 0x088648A0u>(ctx, &aot_mem) && ctx.pc == 0x08ACE2D4u) goto L_08ACE2D4;
    return;
L_08ACE2D4:
    ctx.gpr[31] = (0x08ACE2DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ACD190;
L_08ACE2DC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE304:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30164)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30168)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[10] = (2230u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30136)));
    ctx.gpr[11] = (2230u << 16u);
    ctx.gpr[14] = (2230u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[15] = (2230u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[3] = (2230u << 16u);
    ctx.gpr[2] = (2230u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[9] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-30160), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-30140)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-30132), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-30124), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (16281u << 16u);
    ctx.gpr[8] = (16268u << 16u);
    ctx.gpr[12] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] | 39322u);
    ctx.gpr[13] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[7] = (ctx.gpr[8] | 52429u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[24] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30156), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-30148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-30144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30128), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE3CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13552));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    goto L_08ACE3F4;
L_08ACE3F4:
    ctx.gpr[8] = (ctx.gpr[7] << 5u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE3F4;
      }
      goto L_08ACE420;
    }
L_08ACE420:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE428:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[11] = (ctx.gpr[4] << 16u);
    ctx.gpr[10] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13552));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08ACE450;
L_08ACE450:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE47C;
      }
      goto L_08ACE458;
    }
L_08ACE458:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACE47C;
      }
      goto L_08ACE464;
    }
L_08ACE464:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[7] = (ctx.gpr[9] << 5u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 200 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08ACE450;
      }
      goto L_08ACE47C;
    }
L_08ACE47C:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE498:
    ctx.gpr[8] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (0u | 200u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13552));
    goto L_08ACE4B4;
L_08ACE4B4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
      if (branch_taken) {
          goto L_08ACE4DC;
      }
      goto L_08ACE4BC;
    }
L_08ACE4BC:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08ACE4DC;
      }
      goto L_08ACE4CC;
    }
L_08ACE4CC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 200 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE4B4;
      }
      goto L_08ACE4DC;
    }
L_08ACE4DC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08ACE4F8;
      }
      goto L_08ACE4E4;
    }
L_08ACE4E4:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[10] = (ctx.gpr[7] << 5u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 200 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE500;
      }
      goto L_08ACE4F8;
    }
L_08ACE4F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE5AC;
      }
      goto L_08ACE500;
    }
L_08ACE500:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE524;
      }
      goto L_08ACE508;
    }
L_08ACE508:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08ACE524;
      }
      goto L_08ACE514;
    }
L_08ACE514:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 200 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE500;
      }
      goto L_08ACE524;
    }
L_08ACE524:
    ctx.gpr[9] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
      if (branch_taken) {
          goto L_08ACE578;
      }
      goto L_08ACE538;
    }
L_08ACE538:
    ctx.gpr[10] = (ctx.gpr[5] << 5u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[4]);
    ctx.gpr[11] = (ctx.gpr[7] << 5u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[4]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
      if (branch_taken) {
          goto L_08ACE538;
      }
      goto L_08ACE578;
    }
L_08ACE578:
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ACE5AC;
      }
      goto L_08ACE58C;
    }
L_08ACE58C:
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE58C;
      }
      goto L_08ACE5AC;
    }
L_08ACE5AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE5B4:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13552));
    goto L_08ACE5C8;
L_08ACE5C8:
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACE5F8;
      }
      goto L_08ACE5DC;
    }
L_08ACE5DC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE5C8;
      }
      goto L_08ACE5F0;
    }
L_08ACE5F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE604;
      }
      goto L_08ACE5F8;
    }
L_08ACE5F8:
    ctx.gpr[2] = (ctx.gpr[6] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08ACE608;
      }
      goto L_08ACE604;
    }
L_08ACE604:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08ACE608;
L_08ACE608:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE610:
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13552));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
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
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE63C:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13552));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE65C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30092)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30096)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[11] = (2230u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-30088), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-30080), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30084), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-30076), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-30072), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE6D4:
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
L_08ACE700:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACE720u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13332));
    goto L_08ACE6D4;
L_08ACE720:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] & 255u);
    ctx.gpr[31] = (0x08ACE730u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 312u, 0x088A9560u>(ctx, &aot_mem) && ctx.pc == 0x08ACE730u) goto L_08ACE730;
    return;
L_08ACE730:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE740:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (2232u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(136)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(5000) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACE79C;
      }
      goto L_08ACE784;
    }
L_08ACE784:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE7BC;
      }
      goto L_08ACE794;
    }
L_08ACE794:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE7C4;
      }
      goto L_08ACE79C;
    }
L_08ACE79C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08ACE7A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13288));
    goto L_08ACE6D4;
L_08ACE7A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACE7B4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE7B4u) goto L_08ACE7B4;
    return;
L_08ACE7B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08ACE898;
      }
      goto L_08ACE7BC;
    }
L_08ACE7BC:
    ctx.gpr[31] = (0x08ACE7C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACE7C4u) goto L_08ACE7C4;
    return;
L_08ACE7C4:
    ctx.gpr[31] = (0x08ACE7CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 312u, 0x08A09410u>(ctx, &aot_mem) && ctx.pc == 0x08ACE7CCu) goto L_08ACE7CC;
    return;
L_08ACE7CC:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(269)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[19] << (ctx.gpr[4] & 31u));
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08ACE82C;
      }
      goto L_08ACE7E8;
    }
L_08ACE7E8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08ACE7F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13252));
    goto L_08ACE6D4;
L_08ACE7F4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-5944)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ACE818u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x08ACE818u) goto L_08ACE818;
    return;
L_08ACE818:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08ACE82Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 312u, 0x088A9560u>(ctx, &aot_mem) && ctx.pc == 0x08ACE82Cu) goto L_08ACE82C;
    return;
L_08ACE82C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE83Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13228));
    goto L_08ACE6D4;
L_08ACE83C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE888;
      }
      goto L_08ACE84C;
    }
L_08ACE84C:
    ctx.gpr[5] = (ctx.gpr[19] << (ctx.gpr[4] & 31u));
    ctx.gpr[5] = (ctx.gpr[17] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE874;
      }
      goto L_08ACE85C;
    }
L_08ACE85C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE84C;
      }
      goto L_08ACE86C;
    }
L_08ACE86C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE888;
      }
      goto L_08ACE874;
    }
L_08ACE874:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACE880u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE880u) goto L_08ACE880;
    return;
L_08ACE880:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08ACE898;
      }
      goto L_08ACE888;
    }
L_08ACE888:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACE894u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE894u) goto L_08ACE894;
    return;
L_08ACE894:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08ACE898;
L_08ACE898:
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
L_08ACE8B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACE8F4u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE8F4u) goto L_08ACE8F4;
    return;
L_08ACE8F4:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACECC8;
      }
      goto L_08ACE900;
    }
L_08ACE900:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE910u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13188));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 409u, 0x08A4B4B8u>(ctx, &aot_mem) && ctx.pc == 0x08ACE910u) goto L_08ACE910;
    return;
L_08ACE910:
    ctx.gpr[31] = (0x08ACE918u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x08ACE918u) goto L_08ACE918;
    return;
L_08ACE918:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE924u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE924u) goto L_08ACE924;
    return;
L_08ACE924:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE994;
      }
      goto L_08ACE92C;
    }
L_08ACE92C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE938u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x08ACE938u) goto L_08ACE938;
    return;
L_08ACE938:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE948u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13188));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 394u, 0x08A4B400u>(ctx, &aot_mem) && ctx.pc == 0x08ACE948u) goto L_08ACE948;
    return;
L_08ACE948:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE954u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x08ACE954u) goto L_08ACE954;
    return;
L_08ACE954:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE960u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 34u, 0x0890C354u>(ctx, &aot_mem) && ctx.pc == 0x08ACE960u) goto L_08ACE960;
    return;
L_08ACE960:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08ACE974u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13176));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BC28u>(ctx, &aot_mem) && ctx.pc == 0x08ACE974u) goto L_08ACE974;
    return;
L_08ACE974:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08ACE988u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13168));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BC28u>(ctx, &aot_mem) && ctx.pc == 0x08ACE988u) goto L_08ACE988;
    return;
L_08ACE988:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE994u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 28u, 0x0890C258u>(ctx, &aot_mem) && ctx.pc == 0x08ACE994u) goto L_08ACE994;
    return;
L_08ACE994:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE9A0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x08ACE9A0u) goto L_08ACE9A0;
    return;
L_08ACE9A0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE9ACu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 706u, 0x0890BF8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACE9ACu) goto L_08ACE9AC;
    return;
L_08ACE9AC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE9B8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE9B8u) goto L_08ACE9B8;
    return;
L_08ACE9B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEA44;
      }
      goto L_08ACE9C0;
    }
L_08ACE9C0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE9CCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE9CCu) goto L_08ACE9CC;
    return;
L_08ACE9CC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACEA10;
      }
      goto L_08ACE9D8;
    }
L_08ACE9D8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE9E4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x08ACE9E4u) goto L_08ACE9E4;
    return;
L_08ACE9E4:
    ctx.gpr[4] = (11u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(181));
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACEA08;
      }
      goto L_08ACE9F4;
    }
L_08ACE9F4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08ACED28;
      }
      goto L_08ACEA08;
    }
L_08ACEA08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[30] | 0u);
      if (branch_taken) {
          goto L_08ACED28;
      }
      goto L_08ACEA10;
    }
L_08ACEA10:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEA1Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 560u, 0x0890B504u>(ctx, &aot_mem) && ctx.pc == 0x08ACEA1Cu) goto L_08ACEA1C;
    return;
L_08ACEA1C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEA28u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACEA28u) goto L_08ACEA28;
    return;
L_08ACEA28:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[31] = (0x08ACEA3Cu);
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x08ACEA3Cu) goto L_08ACEA3C;
    return;
L_08ACEA3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08ACED28;
      }
      goto L_08ACEA44;
    }
L_08ACEA44:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[23] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEA60u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 82u, 0x0890C708u>(ctx, &aot_mem) && ctx.pc == 0x08ACEA60u) goto L_08ACEA60;
    return;
L_08ACEA60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEA70;
      }
      goto L_08ACEA68;
    }
L_08ACEA68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACEBE8;
      }
      goto L_08ACEA70;
    }
L_08ACEA70:
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEA80u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 469u, 0x08A02044u>(ctx, &aot_mem) && ctx.pc == 0x08ACEA80u) goto L_08ACEA80;
    return;
L_08ACEA80:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08ACEBC8;
      }
      goto L_08ACEA8C;
    }
L_08ACEA8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[23] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[22] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ACEABC;
      }
      goto L_08ACEAA0;
    }
L_08ACEAA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
        goto L_08ACEAAC;
    }
    goto L_08ACEAAC;
L_08ACEAAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACEBC8;
      }
      goto L_08ACEABC;
    }
L_08ACEABC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACEAEC;
      }
      goto L_08ACEAE4;
    }
L_08ACEAE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08ACEAF0;
      }
      goto L_08ACEAEC;
    }
L_08ACEAEC:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    goto L_08ACEAF0;
L_08ACEAF0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACEB24;
      }
      goto L_08ACEB04;
    }
L_08ACEB04:
    ctx.gpr[31] = (0x08ACEB0Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08ACEB0Cu) goto L_08ACEB0C;
    return;
L_08ACEB0C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEB24;
      }
      goto L_08ACEB18;
    }
L_08ACEB18:
    ctx.gpr[31] = (0x08ACEB20u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08ACEB20u) goto L_08ACEB20;
    return;
L_08ACEB20:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08ACEB24;
L_08ACEB24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[18] != ctx.gpr[4]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
        goto L_08ACEB38;
    }
    goto L_08ACEB30;
L_08ACEB30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08ACEB54;
      }
      goto L_08ACEB38;
    }
L_08ACEB38:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[18] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACEB4Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08ACEB4Cu) goto L_08ACEB4C;
    return;
L_08ACEB4C:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08ACEB54;
L_08ACEB54:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[31] = (0x08ACEB74u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACEB74u) goto L_08ACEB74;
    return;
L_08ACEB74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08ACEBA4;
      }
      goto L_08ACEB80;
    }
L_08ACEB80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[18]);
      if (branch_taken) {
          goto L_08ACEBA4;
      }
      goto L_08ACEB8C;
    }
L_08ACEB8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACEB9Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08ACEB9Cu) goto L_08ACEB9C;
    return;
L_08ACEB9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08ACEBA4;
      }
      goto L_08ACEBA4;
    }
L_08ACEBA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ACEBB8;
      }
      goto L_08ACEBB0;
    }
L_08ACEBB0:
    ctx.gpr[31] = (0x08ACEBB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08ACEBB8u) goto L_08ACEBB8;
    return;
L_08ACEBB8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_08ACEBC8;
L_08ACEBC8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEBD4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x08ACEBD4u) goto L_08ACEBD4;
    return;
L_08ACEBD4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEBE0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 82u, 0x0890C708u>(ctx, &aot_mem) && ctx.pc == 0x08ACEBE0u) goto L_08ACEBE0;
    return;
L_08ACEBE0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEA70;
      }
      goto L_08ACEBE8;
    }
L_08ACEBE8:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEC70;
      }
      goto L_08ACEBF0;
    }
L_08ACEBF0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08ACEC00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 642u, 0x088A7D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEC00u) goto L_08ACEC00;
    return;
L_08ACEC00:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEC10u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x08ACEC10u) goto L_08ACEC10;
    return;
L_08ACEC10:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEC1Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 560u, 0x0890B504u>(ctx, &aot_mem) && ctx.pc == 0x08ACEC1Cu) goto L_08ACEC1C;
    return;
L_08ACEC1C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEC2Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACEC2Cu) goto L_08ACEC2C;
    return;
L_08ACEC2C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEC38u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 28u, 0x0890C258u>(ctx, &aot_mem) && ctx.pc == 0x08ACEC38u) goto L_08ACEC38;
    return;
L_08ACEC38:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEC44u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x08ACEC44u) goto L_08ACEC44;
    return;
L_08ACEC44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ACEC68;
      }
      goto L_08ACEC54;
    }
L_08ACEC54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEC68;
      }
      goto L_08ACEC60;
    }
L_08ACEC60:
    ctx.gpr[31] = (0x08ACEC68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08ACEC68u) goto L_08ACEC68;
    return;
L_08ACEC68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08ACED28;
      }
      goto L_08ACEC70;
    }
L_08ACEC70:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEC7Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x08ACEC7Cu) goto L_08ACEC7C;
    return;
L_08ACEC7C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEC88u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08ACEC88u) goto L_08ACEC88;
    return;
L_08ACEC88:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEC94u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 28u, 0x0890C258u>(ctx, &aot_mem) && ctx.pc == 0x08ACEC94u) goto L_08ACEC94;
    return;
L_08ACEC94:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACECA0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x08ACECA0u) goto L_08ACECA0;
    return;
L_08ACECA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ACECC0;
      }
      goto L_08ACECAC;
    }
L_08ACECAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACECC0;
      }
      goto L_08ACECB8;
    }
L_08ACECB8:
    ctx.gpr[31] = (0x08ACECC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08ACECC0u) goto L_08ACECC0;
    return;
L_08ACECC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACECDC;
      }
      goto L_08ACECC8;
    }
L_08ACECC8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACECD4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 467u, 0x08A02020u>(ctx, &aot_mem) && ctx.pc == 0x08ACECD4u) goto L_08ACECD4;
    return;
L_08ACECD4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACED00;
      }
      goto L_08ACECDC;
    }
L_08ACECDC:
    ctx.gpr[4] = (11u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(181));
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACED24;
      }
      goto L_08ACECEC;
    }
L_08ACECEC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08ACED28;
      }
      goto L_08ACED00;
    }
L_08ACED00:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACED0Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 469u, 0x08A02044u>(ctx, &aot_mem) && ctx.pc == 0x08ACED0Cu) goto L_08ACED0C;
    return;
L_08ACED0C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACED1Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 560u, 0x0890B504u>(ctx, &aot_mem) && ctx.pc == 0x08ACED1Cu) goto L_08ACED1C;
    return;
L_08ACED1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08ACED28;
      }
      goto L_08ACED24;
    }
L_08ACED24:
    ctx.gpr[2] = (ctx.gpr[30] | 0u);
    goto L_08ACED28;
L_08ACED28:
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
L_08ACED58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACED78u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x08ACED78u) goto L_08ACED78;
    return;
L_08ACED78:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-21276)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACEDB4;
      }
      goto L_08ACED88;
    }
L_08ACED88:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACEDA0;
      }
      goto L_08ACED90;
    }
L_08ACED90:
    ctx.gpr[31] = (0x08ACED98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 329u, 0x08AF97E0u>(ctx, &aot_mem) && ctx.pc == 0x08ACED98u) goto L_08ACED98;
    return;
L_08ACED98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-21276)));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    goto L_08ACEDA0;
L_08ACEDA0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACEDACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08ACEDACu) goto L_08ACEDAC;
    return;
L_08ACEDAC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-21276)));
    goto L_08ACEDB4;
L_08ACEDB4:
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_08ACEDCC;
    }
    goto L_08ACEDBC;
L_08ACEDBC:
    ctx.gpr[31] = (0x08ACEDC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 329u, 0x08AF97E0u>(ctx, &aot_mem) && ctx.pc == 0x08ACEDC4u) goto L_08ACEDC4;
    return;
L_08ACEDC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-21276)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08ACEDCC;
L_08ACEDCC:
    ctx.gpr[31] = (0x08ACEDD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACEDD4u) goto L_08ACEDD4;
    return;
L_08ACEDD4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08ACEDF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACEE14u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x08ACEE14u) goto L_08ACEE14;
    return;
L_08ACEE14:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-21276)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACEE50;
      }
      goto L_08ACEE24;
    }
L_08ACEE24:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACEE3C;
      }
      goto L_08ACEE2C;
    }
L_08ACEE2C:
    ctx.gpr[31] = (0x08ACEE34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 329u, 0x08AF97E0u>(ctx, &aot_mem) && ctx.pc == 0x08ACEE34u) goto L_08ACEE34;
    return;
L_08ACEE34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-21276)));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    goto L_08ACEE3C;
L_08ACEE3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACEE48u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08ACEE48u) goto L_08ACEE48;
    return;
L_08ACEE48:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-21276)));
    goto L_08ACEE50;
L_08ACEE50:
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_08ACEE68;
    }
    goto L_08ACEE58;
L_08ACEE58:
    ctx.gpr[31] = (0x08ACEE60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 329u, 0x08AF97E0u>(ctx, &aot_mem) && ctx.pc == 0x08ACEE60u) goto L_08ACEE60;
    return;
L_08ACEE60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-21276)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08ACEE68;
L_08ACEE68:
    ctx.gpr[31] = (0x08ACEE70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACEE70u) goto L_08ACEE70;
    return;
L_08ACEE70:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08ACEE90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACEEB0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x08ACEEB0u) goto L_08ACEEB0;
    return;
L_08ACEEB0:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-21276)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACEEEC;
      }
      goto L_08ACEEC0;
    }
L_08ACEEC0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACEED8;
      }
      goto L_08ACEEC8;
    }
L_08ACEEC8:
    ctx.gpr[31] = (0x08ACEED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 329u, 0x08AF97E0u>(ctx, &aot_mem) && ctx.pc == 0x08ACEED0u) goto L_08ACEED0;
    return;
L_08ACEED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-21276)));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    goto L_08ACEED8;
L_08ACEED8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACEEE4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08ACEEE4u) goto L_08ACEEE4;
    return;
L_08ACEEE4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-21276)));
    goto L_08ACEEEC;
L_08ACEEEC:
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08ACEF04;
    }
    goto L_08ACEEF4;
L_08ACEEF4:
    ctx.gpr[31] = (0x08ACEEFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 329u, 0x08AF97E0u>(ctx, &aot_mem) && ctx.pc == 0x08ACEEFCu) goto L_08ACEEFC;
    return;
L_08ACEEFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-21276)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08ACEF04;
L_08ACEF04:
    ctx.gpr[31] = (0x08ACEF0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACEF0Cu) goto L_08ACEF0C;
    return;
L_08ACEF0C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08ACEF2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACEF48u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x08ACEF48u) goto L_08ACEF48;
    return;
L_08ACEF48:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5736));
      if (branch_taken) {
          goto L_08ACEF70;
      }
      goto L_08ACEF58;
    }
L_08ACEF58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACEF64u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08ACEF64u) goto L_08ACEF64;
    return;
L_08ACEF64:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    goto L_08ACEF70;
L_08ACEF70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08ACEF84u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACEF84u) goto L_08ACEF84;
    return;
L_08ACEF84:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08ACEFA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20932)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACEFD0;
      }
      goto L_08ACEFC8;
    }
L_08ACEFC8:
    ctx.gpr[31] = (0x08ACEFD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEFD0u) goto L_08ACEFD0;
    return;
L_08ACEFD0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08ACEFE4;
      }
      goto L_08ACEFDC;
    }
L_08ACEFDC:
    ctx.gpr[31] = (0x08ACEFE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEFE4u) goto L_08ACEFE4;
    return;
L_08ACEFE4:
    ctx.gpr[31] = (0x08ACEFECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20932)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 302u, 0x08A09374u>(ctx, &aot_mem) && ctx.pc == 0x08ACEFECu) goto L_08ACEFEC;
    return;
L_08ACEFEC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEFFCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 235u, 0x08A08F14u>(ctx, &aot_mem) && ctx.pc == 0x08ACEFFCu) goto L_08ACEFFC;
    return;
L_08ACEFFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08ACF008u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08ACF008u) goto L_08ACF008;
    return;
L_08ACF008:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08ACF028;
      }
      goto L_08ACF01C;
    }
L_08ACF01C:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF028u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF028u) goto L_08ACF028;
    return;
L_08ACF028:
    ctx.gpr[2] = (0u | 1u);
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
L_08ACF048:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF068u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.pc = 0x08B0B9A4u;
    return;
L_08ACF068:
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20932)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20932)));
        goto L_08ACF084;
    }
    goto L_08ACF078;
L_08ACF078:
    ctx.gpr[31] = (0x08ACF080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF080u) goto L_08ACF080;
    return;
L_08ACF080:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20932)));
    goto L_08ACF084;
L_08ACF084:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08ACF094;
      }
      goto L_08ACF08C;
    }
L_08ACF08C:
    ctx.gpr[31] = (0x08ACF094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF094u) goto L_08ACF094;
    return;
L_08ACF094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[31] = (0x08ACF0A0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 139u, 0x08A0899Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF0A0u) goto L_08ACF0A0;
    return;
L_08ACF0A0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACF0B0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 235u, 0x08A08F14u>(ctx, &aot_mem) && ctx.pc == 0x08ACF0B0u) goto L_08ACF0B0;
    return;
L_08ACF0B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08ACF0BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08ACF0BCu) goto L_08ACF0BC;
    return;
L_08ACF0BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08ACF0DC;
      }
      goto L_08ACF0D0;
    }
L_08ACF0D0:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF0DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF0DCu) goto L_08ACF0DC;
    return;
L_08ACF0DC:
    ctx.gpr[2] = (0u | 1u);
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
L_08ACF0FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF114u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.pc = 0x08B0B9A4u;
    return;
L_08ACF114:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
        goto L_08ACF130;
    }
    goto L_08ACF124;
L_08ACF124:
    ctx.gpr[31] = (0x08ACF12Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF12Cu) goto L_08ACF12C;
    return;
L_08ACF12C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    goto L_08ACF130;
L_08ACF130:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[5] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x08ACF148u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08ACF148u) goto L_08ACF148;
    return;
L_08ACF148:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF160:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACF188;
      }
      goto L_08ACF180;
    }
L_08ACF180:
    ctx.gpr[31] = (0x08ACF188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF188u) goto L_08ACF188;
    return;
L_08ACF188:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF198u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08ACF198u) goto L_08ACF198;
    return;
L_08ACF198:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF1B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF1CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13164));
    goto L_08ACE6D4;
L_08ACF1CC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF1E4u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13132));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 86u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x08ACF1E4u) goto L_08ACF1E4;
    return;
L_08ACF1E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACF1F0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08ACE6D4;
L_08ACF1F0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF200u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13116));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 90u, 0x088A84D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACF200u) goto L_08ACF200;
    return;
L_08ACF200:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACF20Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08ACE6D4;
L_08ACF20C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF21Cu);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13100));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 92u, 0x088A84E4u>(ctx, &aot_mem) && ctx.pc == 0x08ACF21Cu) goto L_08ACF21C;
    return;
L_08ACF21C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACF228u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08ACE6D4;
L_08ACF228:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF238u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13084));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 94u, 0x088A84F4u>(ctx, &aot_mem) && ctx.pc == 0x08ACF238u) goto L_08ACF238;
    return;
L_08ACF238:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACF244u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08ACE6D4;
L_08ACF244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13068));
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[31] = (0x08ACF260u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08ACE6D4;
L_08ACF260:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13052));
    ctx.gpr[31] = (0x08ACF274u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    goto L_08ACE6D4;
L_08ACF274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & 4u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13036));
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[31] = (0x08ACF290u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08ACE6D4;
L_08ACF290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13016));
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[31] = (0x08ACF2ACu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08ACE6D4;
L_08ACF2AC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08ACF2BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13000));
    goto L_08ACE6D4;
L_08ACF2BC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(37)));
    ctx.gpr[31] = (0x08ACF2CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12976));
    goto L_08ACE6D4;
L_08ACF2CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[31] = (0x08ACF2DCu);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12952));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 77u, 0x088A8464u>(ctx, &aot_mem) && ctx.pc == 0x08ACF2DCu) goto L_08ACF2DC;
    return;
L_08ACF2DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF2E8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08ACE6D4;
L_08ACF2E8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08ACF2F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12932));
    goto L_08ACE6D4;
L_08ACF2F4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF30C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF330u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B774u>(ctx, &aot_mem) && ctx.pc == 0x08ACF330u) goto L_08ACF330;
    return;
L_08ACF330:
    ctx.gpr[17] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5736));
      if (branch_taken) {
          goto L_08ACF368;
      }
      goto L_08ACF33C;
    }
L_08ACF33C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF348u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACF348u) goto L_08ACF348;
    return;
L_08ACF348:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08ACF360u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 287u, 0x088A93D8u>(ctx, &aot_mem) && ctx.pc == 0x08ACF360u) goto L_08ACF360;
    return;
L_08ACF360:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACF384;
      }
      goto L_08ACF368;
    }
L_08ACF368:
    ctx.gpr[31] = (0x08ACF370u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 290u, 0x088A9424u>(ctx, &aot_mem) && ctx.pc == 0x08ACF370u) goto L_08ACF370;
    return;
L_08ACF370:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF380u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACF380u) goto L_08ACF380;
    return;
L_08ACF380:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08ACF384;
L_08ACF384:
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
L_08ACF39C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF3B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 277u, 0x088A9370u>(ctx, &aot_mem) && ctx.pc == 0x08ACF3B8u) goto L_08ACF3B8;
    return;
L_08ACF3B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF3C4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08ACF3C4u) goto L_08ACF3C4;
    return;
L_08ACF3C4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF3D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF3F0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x08ACF3F0u) goto L_08ACF3F0;
    return;
L_08ACF3F0:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF414:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF430u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 271u, 0x088A9340u>(ctx, &aot_mem) && ctx.pc == 0x08ACF430u) goto L_08ACF430;
    return;
L_08ACF430:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ACF448;
      }
      goto L_08ACF43C;
    }
L_08ACF43C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ACF448;
L_08ACF448:
    ctx.gpr[31] = (0x08ACF450u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACF450u) goto L_08ACF450;
    return;
L_08ACF450:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF464:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF480u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 272u, 0x088A9348u>(ctx, &aot_mem) && ctx.pc == 0x08ACF480u) goto L_08ACF480;
    return;
L_08ACF480:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ACF498;
      }
      goto L_08ACF48C;
    }
L_08ACF48C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ACF498;
L_08ACF498:
    ctx.gpr[31] = (0x08ACF4A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACF4A0u) goto L_08ACF4A0;
    return;
L_08ACF4A0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF4B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF4DCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACF4DCu) goto L_08ACF4DC;
    return;
L_08ACF4DC:
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (2232u << 16u);
      if (branch_taken) {
          goto L_08ACF504;
      }
      goto L_08ACF4F8;
    }
L_08ACF4F8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ACF518;
      }
      goto L_08ACF504;
    }
L_08ACF504:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08ACF518;
L_08ACF518:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(5736));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08ACF530u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACF530u) goto L_08ACF530;
    return;
L_08ACF530:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
        goto L_08ACF550;
    }
    goto L_08ACF544;
L_08ACF544:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ACF560;
      }
      goto L_08ACF550;
    }
L_08ACF550:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08ACF560;
L_08ACF560:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08ACF56Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 273u, 0x088A9350u>(ctx, &aot_mem) && ctx.pc == 0x08ACF56Cu) goto L_08ACF56C;
    return;
L_08ACF56C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(5736));
    ctx.gpr[31] = (0x08ACF578u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 274u, 0x088A9358u>(ctx, &aot_mem) && ctx.pc == 0x08ACF578u) goto L_08ACF578;
    return;
L_08ACF578:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08ACF598:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF5B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 272u, 0x088A9348u>(ctx, &aot_mem) && ctx.pc == 0x08ACF5B4u) goto L_08ACF5B4;
    return;
L_08ACF5B4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ACF5CC;
      }
      goto L_08ACF5C0;
    }
L_08ACF5C0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ACF5CC;
L_08ACF5CC:
    ctx.gpr[31] = (0x08ACF5D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACF5D4u) goto L_08ACF5D4;
    return;
L_08ACF5D4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF5E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF60Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B774u>(ctx, &aot_mem) && ctx.pc == 0x08ACF60Cu) goto L_08ACF60C;
    return;
L_08ACF60C:
    ctx.gpr[16] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5736));
      if (branch_taken) {
          goto L_08ACF670;
      }
      goto L_08ACF618;
    }
L_08ACF618:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACF624u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACF624u) goto L_08ACF624;
    return;
L_08ACF624:
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_08ACF64C;
    }
    goto L_08ACF640;
L_08ACF640:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ACF65C;
      }
      goto L_08ACF64C;
    }
L_08ACF64C:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08ACF65C;
L_08ACF65C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08ACF668u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 85u, 0x088A84ACu>(ctx, &aot_mem) && ctx.pc == 0x08ACF668u) goto L_08ACF668;
    return;
L_08ACF668:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACF69C;
      }
      goto L_08ACF670;
    }
L_08ACF670:
    ctx.gpr[31] = (0x08ACF678u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 86u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x08ACF678u) goto L_08ACF678;
    return;
L_08ACF678:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ACF690;
      }
      goto L_08ACF684;
    }
L_08ACF684:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ACF690;
L_08ACF690:
    ctx.gpr[31] = (0x08ACF698u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACF698u) goto L_08ACF698;
    return;
L_08ACF698:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08ACF69C;
L_08ACF69C:
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
L_08ACF6B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF6D8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B774u>(ctx, &aot_mem) && ctx.pc == 0x08ACF6D8u) goto L_08ACF6D8;
    return;
L_08ACF6D8:
    ctx.gpr[16] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5736));
      if (branch_taken) {
          goto L_08ACF73C;
      }
      goto L_08ACF6E4;
    }
L_08ACF6E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACF6F0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACF6F0u) goto L_08ACF6F0;
    return;
L_08ACF6F0:
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_08ACF718;
    }
    goto L_08ACF70C;
L_08ACF70C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ACF728;
      }
      goto L_08ACF718;
    }
L_08ACF718:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08ACF728;
L_08ACF728:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08ACF734u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 87u, 0x088A84BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACF734u) goto L_08ACF734;
    return;
L_08ACF734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACF768;
      }
      goto L_08ACF73C;
    }
L_08ACF73C:
    ctx.gpr[31] = (0x08ACF744u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 90u, 0x088A84D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACF744u) goto L_08ACF744;
    return;
L_08ACF744:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ACF75C;
      }
      goto L_08ACF750;
    }
L_08ACF750:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ACF75C;
L_08ACF75C:
    ctx.gpr[31] = (0x08ACF764u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACF764u) goto L_08ACF764;
    return;
L_08ACF764:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08ACF768;
L_08ACF768:
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
L_08ACF780:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF7A8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B774u>(ctx, &aot_mem) && ctx.pc == 0x08ACF7A8u) goto L_08ACF7A8;
    return;
L_08ACF7A8:
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5736));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u | 3u);
      if (branch_taken) {
          goto L_08ACF848;
      }
      goto L_08ACF7B8;
    }
L_08ACF7B8:
    ctx.gpr[31] = (0x08ACF7C0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 86u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x08ACF7C0u) goto L_08ACF7C0;
    return;
L_08ACF7C0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ACF7EC;
      }
      goto L_08ACF7C8;
    }
L_08ACF7C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF7D4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACF7D4u) goto L_08ACF7D4;
    return;
L_08ACF7D4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACF7E4u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 95u, 0x088A84FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACF7E4u) goto L_08ACF7E4;
    return;
L_08ACF7E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF840;
      }
      goto L_08ACF7EC;
    }
L_08ACF7EC:
    ctx.gpr[31] = (0x08ACF7F4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 86u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x08ACF7F4u) goto L_08ACF7F4;
    return;
L_08ACF7F4:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACF824;
      }
      goto L_08ACF800;
    }
L_08ACF800:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF80Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACF80Cu) goto L_08ACF80C;
    return;
L_08ACF80C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACF81Cu);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x088A850Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF81Cu) goto L_08ACF81C;
    return;
L_08ACF81C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF840;
      }
      goto L_08ACF824;
    }
L_08ACF824:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF830u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACF830u) goto L_08ACF830;
    return;
L_08ACF830:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACF840u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 91u, 0x088A84DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACF840u) goto L_08ACF840;
    return;
L_08ACF840:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACF8C8;
      }
      goto L_08ACF848;
    }
L_08ACF848:
    ctx.gpr[31] = (0x08ACF850u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 86u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x08ACF850u) goto L_08ACF850;
    return;
L_08ACF850:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ACF878;
      }
      goto L_08ACF858;
    }
L_08ACF858:
    ctx.gpr[31] = (0x08ACF860u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 96u, 0x088A8504u>(ctx, &aot_mem) && ctx.pc == 0x08ACF860u) goto L_08ACF860;
    return;
L_08ACF860:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF870u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACF870u) goto L_08ACF870;
    return;
L_08ACF870:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF8C4;
      }
      goto L_08ACF878;
    }
L_08ACF878:
    ctx.gpr[31] = (0x08ACF880u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 86u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x08ACF880u) goto L_08ACF880;
    return;
L_08ACF880:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACF8AC;
      }
      goto L_08ACF88C;
    }
L_08ACF88C:
    ctx.gpr[31] = (0x08ACF894u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 98u, 0x088A8514u>(ctx, &aot_mem) && ctx.pc == 0x08ACF894u) goto L_08ACF894;
    return;
L_08ACF894:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF8A4u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACF8A4u) goto L_08ACF8A4;
    return;
L_08ACF8A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF8C4;
      }
      goto L_08ACF8AC;
    }
L_08ACF8AC:
    ctx.gpr[31] = (0x08ACF8B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 92u, 0x088A84E4u>(ctx, &aot_mem) && ctx.pc == 0x08ACF8B4u) goto L_08ACF8B4;
    return;
L_08ACF8B4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF8C4u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACF8C4u) goto L_08ACF8C4;
    return;
L_08ACF8C4:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08ACF8C8;
L_08ACF8C8:
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
L_08ACF8E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF908u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B774u>(ctx, &aot_mem) && ctx.pc == 0x08ACF908u) goto L_08ACF908;
    return;
L_08ACF908:
    ctx.gpr[17] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5736));
      if (branch_taken) {
          goto L_08ACF938;
      }
      goto L_08ACF914;
    }
L_08ACF914:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF920u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACF920u) goto L_08ACF920;
    return;
L_08ACF920:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACF930u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 93u, 0x088A84ECu>(ctx, &aot_mem) && ctx.pc == 0x08ACF930u) goto L_08ACF930;
    return;
L_08ACF930:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACF954;
      }
      goto L_08ACF938;
    }
L_08ACF938:
    ctx.gpr[31] = (0x08ACF940u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 94u, 0x088A84F4u>(ctx, &aot_mem) && ctx.pc == 0x08ACF940u) goto L_08ACF940;
    return;
L_08ACF940:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF950u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACF950u) goto L_08ACF950;
    return;
L_08ACF950:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08ACF954;
L_08ACF954:
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
L_08ACF96C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF990u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B774u>(ctx, &aot_mem) && ctx.pc == 0x08ACF990u) goto L_08ACF990;
    return;
L_08ACF990:
    ctx.gpr[16] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5736));
      if (branch_taken) {
          goto L_08ACF9F4;
      }
      goto L_08ACF99C;
    }
L_08ACF99C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACF9A8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACF9A8u) goto L_08ACF9A8;
    return;
L_08ACF9A8:
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_08ACF9D0;
    }
    goto L_08ACF9C4;
L_08ACF9C4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ACF9E0;
      }
      goto L_08ACF9D0;
    }
L_08ACF9D0:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08ACF9E0;
L_08ACF9E0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08ACF9ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 275u, 0x088A9360u>(ctx, &aot_mem) && ctx.pc == 0x08ACF9ECu) goto L_08ACF9EC;
    return;
L_08ACF9EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACFA20;
      }
      goto L_08ACF9F4;
    }
L_08ACF9F4:
    ctx.gpr[31] = (0x08ACF9FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 276u, 0x088A9368u>(ctx, &aot_mem) && ctx.pc == 0x08ACF9FCu) goto L_08ACF9FC;
    return;
L_08ACF9FC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ACFA14;
      }
      goto L_08ACFA08;
    }
L_08ACFA08:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ACFA14;
L_08ACFA14:
    ctx.gpr[31] = (0x08ACFA1Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACFA1Cu) goto L_08ACFA1C;
    return;
L_08ACFA1C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08ACFA20;
L_08ACFA20:
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
L_08ACFA38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACFA5Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08ACFA5Cu) goto L_08ACFA5C;
    return;
L_08ACFA5C:
    ctx.gpr[17] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5736));
      if (branch_taken) {
          goto L_08ACFA9C;
      }
      goto L_08ACFA68;
    }
L_08ACFA68:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACFA74u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x08ACFA74u) goto L_08ACFA74;
    return;
L_08ACFA74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08ACFA88;
      }
      goto L_08ACFA7C;
    }
L_08ACFA7C:
    ctx.gpr[4] = (ctx.gpr[16] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACFA94;
      }
      goto L_08ACFA88;
    }
L_08ACFA88:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[16] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_08ACFA94;
L_08ACFA94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACFAB8;
      }
      goto L_08ACFA9C;
    }
L_08ACFA9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[31] = (0x08ACFAB4u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08ACFAB4u) goto L_08ACFAB4;
    return;
L_08ACFAB4:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08ACFAB8;
L_08ACFAB8:
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
L_08ACFAD0:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[4]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACFAE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACFB04u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08ACFB04u) goto L_08ACFB04;
    return;
L_08ACFB04:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACFB14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACFB38u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08ACFB38u) goto L_08ACFB38;
    return;
L_08ACFB38:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACFB48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACFB6Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08ACFB6Cu) goto L_08ACFB6C;
    return;
L_08ACFB6C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACFB7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACFBA0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B774u>(ctx, &aot_mem) && ctx.pc == 0x08ACFBA0u) goto L_08ACFBA0;
    return;
L_08ACFBA0:
    ctx.gpr[17] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5736));
      if (branch_taken) {
          goto L_08ACFBCC;
      }
      goto L_08ACFBAC;
    }
L_08ACFBAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACFBB8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFBB8u) goto L_08ACFBB8;
    return;
L_08ACFBB8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ACFBE4;
      }
      goto L_08ACFBCC;
    }
L_08ACFBCC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08ACFBE0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACFBE0u) goto L_08ACFBE0;
    return;
L_08ACFBE0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08ACFBE4;
L_08ACFBE4:
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
L_08ACFBFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(54)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08ACFC1Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACFC1Cu) goto L_08ACFC1C;
    return;
L_08ACFC1C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACFC2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08ACFC4Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACFC4Cu) goto L_08ACFC4C;
    return;
L_08ACFC4C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACFC5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACFC78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 77u, 0x088A8464u>(ctx, &aot_mem) && ctx.pc == 0x08ACFC78u) goto L_08ACFC78;
    return;
L_08ACFC78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACFC84u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08ACFC84u) goto L_08ACFC84;
    return;
L_08ACFC84:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACFC98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACFCC4u);
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFCC4u) goto L_08ACFCC4;
    return;
L_08ACFCC4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08ACFCD8u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 103u, 0x088A853Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFCD8u) goto L_08ACFCD8;
    return;
L_08ACFCD8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ACFD0C;
      }
      goto L_08ACFD00;
    }
L_08ACFD00:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ACFD0C;
L_08ACFD0C:
    ctx.gpr[31] = (0x08ACFD14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACFD14u) goto L_08ACFD14;
    return;
L_08ACFD14:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08ACFD30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACFD5Cu);
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFD5Cu) goto L_08ACFD5C;
    return;
L_08ACFD5C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08ACFD70u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 18u, 0x088A810Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFD70u) goto L_08ACFD70;
    return;
L_08ACFD70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACFD7Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFD7Cu) goto L_08ACFD7C;
    return;
L_08ACFD7C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08ACFD98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(27452), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4832));
      if (branch_taken) {
          goto L_08ACFDD0;
      }
      goto L_08ACFDC8;
    }
L_08ACFDC8:
    ctx.gpr[31] = (0x08ACFDD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFDD0u) goto L_08ACFDD0;
    return;
L_08ACFDD0:
    ctx.gpr[31] = (0x08ACFDD8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 123u, 0x08A08884u>(ctx, &aot_mem) && ctx.pc == 0x08ACFDD8u) goto L_08ACFDD8;
    return;
L_08ACFDD8:
    ctx.gpr[31] = (0x08ACFDE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 180u, 0x08AE4F44u>(ctx, &aot_mem) && ctx.pc == 0x08ACFDE0u) goto L_08ACFDE0;
    return;
L_08ACFDE0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25838), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25839), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08ACFE00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 669u, 0x08ADE850u>(ctx, &aot_mem) && ctx.pc == 0x08ACFE00u) goto L_08ACFE00;
    return;
L_08ACFE00:
    ctx.gpr[4] = (0u | 14u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4832), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25764)));
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACFE3C;
      }
      goto L_08ACFE28;
    }
L_08ACFE28:
    ctx.gpr[18] = (0u | 7u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACFE38u);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 435u, 0x08AD9CFCu>(ctx, &aot_mem) && ctx.pc == 0x08ACFE38u) goto L_08ACFE38;
    return;
L_08ACFE38:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4832), ctx.gpr[18]);
    goto L_08ACFE3C;
L_08ACFE3C:
    ctx.gpr[2] = (0u | 1u);
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
L_08ACFE58:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[4]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACFE70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACFE94u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B774u>(ctx, &aot_mem) && ctx.pc == 0x08ACFE94u) goto L_08ACFE94;
    return;
L_08ACFE94:
    ctx.gpr[17] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5736));
      if (branch_taken) {
          goto L_08ACFEC8;
      }
      goto L_08ACFEA0;
    }
L_08ACFEA0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACFEACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFEACu) goto L_08ACFEAC;
    return;
L_08ACFEAC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08ACFEC0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 295u, 0x088A9454u>(ctx, &aot_mem) && ctx.pc == 0x08ACFEC0u) goto L_08ACFEC0;
    return;
L_08ACFEC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACFEE4;
      }
      goto L_08ACFEC8;
    }
L_08ACFEC8:
    ctx.gpr[31] = (0x08ACFED0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 296u, 0x088A945Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFED0u) goto L_08ACFED0;
    return;
L_08ACFED0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACFEE0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACFEE0u) goto L_08ACFEE0;
    return;
L_08ACFEE0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08ACFEE4;
L_08ACFEE4:
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
L_08ACFEFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACFF20u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08ACFF20u) goto L_08ACFF20;
    return;
L_08ACFF20:
    ctx.gpr[17] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5736));
      if (branch_taken) {
          goto L_08ACFF4C;
      }
      goto L_08ACFF2C;
    }
L_08ACFF2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACFF38u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x08ACFF38u) goto L_08ACFF38;
    return;
L_08ACFF38:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACFF5C;
      }
      goto L_08ACFF4C;
    }
L_08ACFF4C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08ACFF58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08ACFF58u) goto L_08ACFF58;
    return;
L_08ACFF58:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08ACFF5C;
L_08ACFF5C:
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
L_08ACFF74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACFFB8;
      }
      goto L_08ACFF9C;
    }
L_08ACFF9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08ACFFBC;
      }
      goto L_08ACFFB4;
    }
L_08ACFFB4:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ACFFB8;
L_08ACFFB8:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08ACFFBC;
L_08ACFFBC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 5u, 0x08AD0034u>(ctx, &aot_mem); return;
      }
      goto L_08ACFFC4;
    }
L_08ACFFC4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACFFD0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10002));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFFD0u) goto L_08ACFFD0;
    return;
L_08ACFFD0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.pc = 0x08AD0000u; return;
}

void recomp_unit_0178(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0178_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_178(Runtime &runtime) {
    runtime.register_generated_unit(178u, 0x08ACC000u, 16384u, &recomp_unit_0178, &recomp_unit_0178_entry);
    runtime.register_function(0x08ACC000u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC010u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC020u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC02Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC038u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC04Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC064u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC108u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC118u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC120u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC128u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC138u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC158u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC168u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC170u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC178u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC188u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC194u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC204u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC20Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC218u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC248u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC284u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC298u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC304u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC310u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC318u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC320u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC32Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC330u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC340u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC350u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC370u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC374u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC388u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC394u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC408u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC410u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC418u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC420u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC42Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC444u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC44Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC45Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC490u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC4C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC4DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC4E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC504u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC514u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC520u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC528u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC530u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC538u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC548u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC554u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC564u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC56Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC570u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC58Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC594u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC598u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC604u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC60Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC610u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC644u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC694u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC6A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC6A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC6B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC6D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC6E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC6F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC6F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC704u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC72Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC744u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC74Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC754u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC76Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC77Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC78Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC79Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC808u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC818u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC840u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC850u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC868u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC878u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC88Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC894u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC8A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC8B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC8C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC8C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC8D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC8E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC8ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC8F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC8FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC90Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC918u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC920u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC928u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC93Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC94Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC958u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC96Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC97Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC984u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC998u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA14u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA44u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA74u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA78u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA88u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCAA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCAB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCABCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCAC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCACCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCAD4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCAE8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCAF0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCAF8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB14u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB44u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCBA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCBB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCBC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCBD4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCBE8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCBF0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCBF4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC24u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC40u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC44u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC88u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC98u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCC0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCCCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCF4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD14u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD3Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD78u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCDA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCDA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCDB4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCDBCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCDD0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCDD8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCDE8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCDF0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE48u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE54u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE64u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE70u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE78u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCEA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF3Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF64u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF78u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF80u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFB4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFD0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFD8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFE0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD000u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD010u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD01Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD02Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD034u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD050u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD05Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD064u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD068u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD070u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD080u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD094u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD10Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD11Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD130u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD140u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD154u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD15Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD164u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD178u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD190u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD1A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD1BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD1C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD1CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD1D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD1E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD218u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD224u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD25Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD268u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD2A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD2ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD2E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD2F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD324u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD330u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD360u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD368u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD378u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD38Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD394u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD3A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD3A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD3D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD3E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD400u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD40Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD444u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD460u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD468u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD470u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD478u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD48Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD4A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD4CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD4E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD4E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD4F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD4F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD4FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD508u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD520u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD52Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD538u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD544u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD550u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD55Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD568u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD570u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD578u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD58Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD5B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD5B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD5C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD5CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD5D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD5E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD60Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD620u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD628u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD630u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD63Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD64Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD654u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD660u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD674u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD684u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD690u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD704u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD718u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD72Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD738u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD740u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD750u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD758u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD764u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD76Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD77Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD78Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD794u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD79Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD804u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD814u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD824u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD82Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD834u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD840u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD844u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD848u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD850u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD860u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD870u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD878u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD888u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD894u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD89Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD910u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD91Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD938u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD940u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD948u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD95Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD980u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD984u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD994u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD9C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD9C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD9DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD9E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA14u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA40u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA48u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA54u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA5Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA78u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA80u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA8Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDAA4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDACCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDAD0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDAD8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB08u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB24u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB48u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB54u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB84u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB88u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDBC0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC54u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC74u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC78u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC80u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC8Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC98u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCA4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCE8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD18u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD40u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD64u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD70u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD80u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDDA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDDB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDDC0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDDC8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDDD0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDDE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDDF4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE48u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE80u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDEC0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDED8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDEE0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDEE8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDEF8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF3Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF74u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDFA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDFD4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE000u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE02Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE058u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE084u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE0B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE0DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE108u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE134u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE160u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE18Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE1B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE1E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE210u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE23Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE268u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE294u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE2A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE2ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE2B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE2BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE2D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE2DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE304u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE420u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE428u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE450u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE458u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE464u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE47Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE498u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE500u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE508u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE514u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE524u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE538u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE578u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE58Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE5ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE5B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE5C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE5DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE5F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE5F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE604u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE608u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE610u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE63Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE65Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE6D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE700u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE720u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE730u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE740u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE784u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE794u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE79Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE7A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE7B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE7BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE7C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE7CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE7E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE7F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE818u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE82Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE83Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE84Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE85Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE86Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE874u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE880u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE888u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE894u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE898u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE8B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE8F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE900u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE910u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE918u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE924u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE92Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE938u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE948u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE954u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE960u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE974u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE988u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE994u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE9A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE9ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE9B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE9C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE9CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE9D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE9E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE9F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA08u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA3Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA44u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA70u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA80u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA8Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEAA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEAACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEABCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEAE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEAECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEAF0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB18u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB24u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB54u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB74u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB80u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB8Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEBA4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEBB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEBB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEBC8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEBD4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEBE0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEBE8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEBF0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC44u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC54u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC70u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC88u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC94u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECC0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECC8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECD4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECDCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED24u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED78u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED88u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED98u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDB4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDBCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDCCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDD4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDF4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE14u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE24u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE3Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE48u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE70u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEEB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEEC0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEEC8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEED0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEED8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEEE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEEECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEEF4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEEFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF48u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF64u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF70u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF84u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEFA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEFC8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEFD0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEFDCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEFE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEFECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEFFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF008u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF01Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF028u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF048u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF068u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF078u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF080u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF084u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF08Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF094u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF0A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF0B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF0BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF0D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF0DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF0FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF114u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF124u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF12Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF130u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF148u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF160u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF180u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF188u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF198u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF1B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF1CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF1E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF1F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF200u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF20Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF21Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF228u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF238u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF244u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF260u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF274u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF290u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF2ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF2BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF2CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF2DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF2E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF2F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF30Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF330u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF33Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF348u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF360u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF368u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF370u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF380u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF384u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF39Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF3B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF3C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF3D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF3F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF414u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF430u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF43Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF448u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF450u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF464u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF480u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF48Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF498u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF4A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF4B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF4DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF4F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF504u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF518u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF530u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF544u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF550u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF560u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF56Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF578u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF598u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF60Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF618u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF624u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF640u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF64Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF65Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF668u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF670u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF678u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF684u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF690u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF698u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF69Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF70Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF718u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF728u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF734u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF73Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF744u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF750u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF75Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF764u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF768u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF780u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF800u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF80Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF81Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF824u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF830u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF840u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF848u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF850u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF858u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF860u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF870u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF878u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF880u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF88Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF894u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF8A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF8ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF8B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF8C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF8C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF8E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF908u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF914u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF920u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF930u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF938u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF940u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF950u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF954u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF96Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF990u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF99Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF9A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF9C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF9D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF9E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF9ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF9F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF9FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA08u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA14u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA5Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA74u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA88u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA94u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAB4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAD0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAE8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB14u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB48u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFBA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFBACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFBB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFBCCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFBE0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFBE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFBFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC5Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC78u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC84u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC98u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFCC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFCD8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD14u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD5Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD70u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD98u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFDC8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFDD0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFDD8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFDE0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE3Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE70u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE94u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFEA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFEACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFEC0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFEC8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFED0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFEE0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFEE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFEFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF5Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF74u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFFB4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFFB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFFBCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFFC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFFD0u, &recomp_unit_0178, "recomp_unit_0178");
}
} // namespace psprecomp
