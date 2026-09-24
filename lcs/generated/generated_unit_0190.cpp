#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0190[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 6, 0, 0, 7, 0, 8, 0, 0, 9, 0, 10, 0, 0,
    11, 0, 12, 0, 13, 0, 14, 0, 15, 0, 0, 16, 0, 17, 0, 18, 0, 19, 0, 20, 0, 0, 21, 0, 22, 0, 23, 24, 0, 25, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28,
    0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0,
    0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    47, 0, 0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 54, 0, 0, 0,
    0, 0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 58, 0, 59, 0, 0, 60, 0, 61, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0,
    0, 64, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 70, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 78, 0,
    0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 81, 0, 82, 0, 0, 83, 0, 84, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0,
    0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 92, 0, 93, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 101, 0,
    102, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0,
    0, 110, 0, 0, 111, 0, 112, 0, 0, 0, 0, 113, 0, 0, 114, 0, 115, 116, 0, 0, 0, 117, 0, 0, 118, 0, 119, 120, 0, 121, 0, 0,
    0, 122, 0, 0, 123, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 128, 129, 0, 130, 131, 0, 132, 0, 0, 133, 0, 0, 134, 0,
    135, 136, 0, 137, 138, 0, 0, 0, 0, 139, 0, 140, 0, 0, 141, 0, 142, 0, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 0, 0, 148, 0,
    149, 0, 150, 0, 151, 0, 152, 0, 0, 153, 0, 154, 0, 155, 156, 0, 157, 158, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0,
    0, 164, 0, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 0, 169, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0,
    179, 0, 0, 180, 0, 181, 0, 182, 183, 0, 184, 0, 185, 0, 186, 187, 0, 188, 0, 189, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0,
    197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 0,
    0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 208, 0, 209, 0, 0, 210, 0, 211, 0, 212, 0, 0, 213, 0, 0, 214,
    0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 0, 220, 0, 221, 0, 222, 0, 223, 0, 0, 0,
    0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 231, 0, 0, 232, 0, 233, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0,
    0, 0, 236, 0, 0, 0, 237, 0, 0, 238, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243,
    0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248,
    0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0,
    256, 0, 0, 257, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 263, 0, 0, 264, 0, 265, 0, 0, 0,
    0, 0, 0, 266, 0, 0, 0, 267, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 272, 0,
    273, 0, 274, 275, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 280, 0, 281, 0, 0, 282,
    0, 0, 283, 0, 284, 285, 0, 0, 286, 0, 0, 287, 0, 0, 0, 288, 0, 289, 0, 290, 0, 0, 0, 0, 291, 292, 0, 293, 0, 0, 294, 0,
    0, 0, 0, 295, 0, 296, 0, 297, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0,
    0, 301, 0, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0,
    0, 0, 0, 308, 0, 0, 0, 0, 309, 310, 0, 0, 311, 0, 312, 0, 0, 313, 0, 314, 0, 0, 315, 0, 316, 0, 0, 317, 0, 318, 0, 319,
    0, 0, 0, 320, 0, 321, 0, 322, 323, 0, 324, 0, 325, 0, 0, 0, 326, 0, 327, 0, 0, 0, 328, 0, 329, 330, 0, 0, 331, 0, 332, 0,
    333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 342, 0, 343, 0, 0, 344, 0, 345, 0, 346, 0,
    0, 347, 0, 348, 0, 0, 349, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 354, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359,
    360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 363, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 366, 0, 0, 0,
    367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0,
    0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0,
    0, 0, 0, 0, 0, 0, 377, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 391,
    0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408,
    0, 0, 0, 409, 0, 0, 0, 410, 0, 411, 0, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 417, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 420, 421, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 427, 0, 0, 0,
    0, 0, 0, 428, 0, 0, 0, 429, 430, 0, 431, 0, 432, 0, 0, 0, 0, 433, 434, 0, 0, 435, 0, 436, 0, 0, 437, 0, 438, 0, 0, 439,
    0, 440, 0, 0, 441, 0, 442, 0, 443, 0, 0, 0, 444, 0, 445, 0, 446, 447, 0, 448, 0, 449, 0, 0, 0, 450, 0, 451, 0, 0, 0, 452,
    0, 453, 454, 0, 0, 455, 0, 456, 0, 457, 0, 0, 0, 0, 458, 459, 0, 0, 0, 0, 0, 0, 460, 461, 0, 0, 0, 462, 0, 463, 0, 0,
    0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 467, 0, 468, 469, 0, 0, 470, 0, 0, 471, 0, 0, 0, 0,
    472, 0, 473, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 476, 0, 0, 477, 0, 0, 478, 0, 479, 0, 0, 480, 0, 0, 0, 481, 0, 0, 482,
    0, 483, 0, 0, 0, 484, 0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 490, 0, 491, 0, 0, 0, 0, 0, 0,
    492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0,
    0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 501, 0, 502, 0,
    503, 0, 504, 0, 505, 0, 506, 0, 507, 0, 508, 0, 509, 0, 510, 0, 511, 0, 512, 0, 513, 0, 514, 0, 515, 0, 516, 0, 517, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 518, 0, 519, 0, 0, 0, 520, 0, 0, 521, 0, 522, 0, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0, 0, 525,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 527, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 529, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0,
    0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 538, 0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0,
    0, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 543, 0, 544, 0, 545, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0,
    0, 548, 0, 0, 549, 0, 550, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 553, 0, 554, 0, 0, 0, 555, 0, 0, 0,
    556, 557, 0, 558, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 562, 0, 0, 0, 0,
    0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 565, 0, 566, 0, 0, 567, 0, 0, 0, 568, 0, 569, 570, 0, 0, 0, 571, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 575, 576, 0, 577, 578, 0, 0, 0, 0, 579, 0, 0, 580, 0,
    0, 0, 581, 0, 0, 0, 582, 583, 0, 584, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 0, 0, 0, 588,
    589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 594, 595, 0, 0, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 598, 0, 0, 599, 0, 600,
    601, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 605,
    0, 606, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 611, 0, 0, 612, 0, 0,
    0, 613, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 617, 0, 0, 0, 0, 618, 0, 0, 0, 0, 619,
    0, 0, 0, 620, 0, 0, 621, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 624, 625, 0, 0, 0, 0, 0, 0, 626, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 630, 0, 631, 0, 632, 0, 0, 0, 0,
    0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 636, 637, 0, 638, 0,
    639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 641, 0, 642, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 650, 0, 651, 0, 652, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 654, 0, 0, 0, 0, 655, 0, 0,
    0, 656, 0, 0, 657, 0, 0, 658, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 661, 0, 0, 0, 662, 0, 663,
    0, 0, 0, 0, 664, 0, 0, 0, 0, 665, 0, 0, 0, 666, 0, 0, 667, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0,
    670, 671, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 675, 0,
    0, 676, 0, 677, 0, 678, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0,
    0, 0, 681, 0, 0, 682, 683, 0, 684, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 687, 0, 688, 0, 0, 0, 0, 0, 0, 689,
    0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 693, 0, 0, 0, 694, 0,
    0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697,
    0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 700, 0, 0, 701, 0, 0, 0, 702, 0,
    703, 0, 0, 0, 0, 704, 0, 0, 0, 705, 0, 0, 0, 706, 707, 0, 0, 708, 0, 709, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 711, 712,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 715, 0, 0, 0, 716, 0, 717, 0, 718, 719, 0, 0, 720, 0, 721,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 724, 0, 725, 0, 0, 726, 0, 0, 727, 0, 728, 729, 0, 0, 730,
    0, 0, 731, 0, 0, 0, 732, 0, 733, 0, 734, 0, 0, 0, 0, 735, 736, 0, 737, 0, 0, 738, 0, 0, 0, 0, 739, 0, 740, 0, 741, 0,
    742, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 746, 0, 747,
    0, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 749, 0, 0, 0, 0, 750, 0, 0, 0, 751, 0, 0, 752, 0, 0, 753, 0, 0, 0, 0,
    0, 0, 754, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 757, 0, 0, 0, 758, 0, 759, 0, 0, 0, 0, 760, 0,
    0, 0, 0, 761, 0, 0, 0, 762, 0, 0, 763, 0, 0, 764, 0, 0, 0, 0, 0, 0, 765, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0,
    767, 768, 0, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0, 772, 0,
    0, 0, 0, 773, 0, 774, 0, 775, 0, 0, 776, 0, 0, 0, 777, 0, 778, 0, 779, 0, 780, 0, 781, 0, 0, 0, 0, 0, 782, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 0, 0, 784, 0, 0, 785, 786, 0, 787, 0, 788, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 789, 0, 790, 0, 791, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 0, 794,
    0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 796, 0, 0, 0, 797, 0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 799, 0, 800, 0, 801, 0, 802, 0, 0, 0, 803, 0, 0, 0, 804, 805, 0, 806, 0, 0, 0, 0, 0, 0, 807, 0, 0, 808,
    0, 809, 0, 0, 0, 0, 0, 810, 0, 811, 0, 812, 0, 0, 813, 0, 0, 0, 814, 0, 0, 815, 0, 816, 817, 0, 0, 0, 0, 0, 818, 0,
    819, 820, 0, 0, 821, 0, 0, 822, 0, 0, 0, 823, 0, 0, 824, 0, 825, 0, 826, 0, 0, 827, 0, 0, 828, 0, 0, 0, 829, 830, 0, 0,
    831, 832, 0, 0, 833, 0, 0, 834, 0, 0, 835, 0, 0, 0, 836, 837, 0, 0, 838, 839, 0, 0, 840, 0, 0, 841, 0, 842, 0, 843, 0, 0,
    844, 0, 0, 845, 0, 0, 0, 846, 0, 0, 0, 0, 847, 848, 0, 0, 849, 0, 0, 850, 0, 851, 0, 0, 852, 0, 0, 0, 0, 853, 0, 854,
    0, 0, 855, 0, 856, 857, 0, 0, 858, 859, 0, 0, 0, 0, 0, 860, 861, 0, 0, 862, 0, 863, 0, 864, 0, 0, 865, 0, 0, 0, 0, 866,
    867, 0, 0, 868, 0, 0, 869, 0, 870, 0, 0, 871, 0, 0, 0, 0, 872, 0, 873, 0, 0, 874, 0, 875, 876, 0, 0, 877, 878, 0, 0, 0,
    0, 0, 879, 880, 0, 0, 881, 0, 882, 0, 883, 0, 884, 885, 0, 0, 0, 0, 0, 0, 0, 0, 0, 886, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 887, 0, 0, 888, 0, 0, 0, 0, 0, 0, 0, 0, 0, 889, 0, 0, 0, 0, 0, 0, 890, 0, 891, 0, 0, 0,
    892, 0, 0, 893, 0, 0, 0, 0, 0, 0, 0, 0, 894, 0, 0, 895, 0, 0, 0, 896, 0, 0, 0, 0, 0, 0, 0, 0, 0, 897, 0, 898,
    0, 0, 0, 0, 0, 0, 899, 0, 900, 0, 0, 901, 0, 0, 0, 0, 902, 0, 0, 0, 0, 0, 0, 903, 0, 904, 0, 0, 0, 0, 0, 0,
    905, 0, 906, 0, 0, 0, 907, 0, 0, 908, 0, 0, 0, 909, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 910, 0, 0, 0, 0, 0, 0,
    0, 0, 911, 0, 912, 0, 0, 0, 913, 0, 0, 914, 0, 0, 915, 0, 0, 0, 0, 0, 0, 0, 0, 0, 916, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 917, 0, 0, 0, 0, 918, 0, 0, 0, 0, 0, 0, 919, 0, 920, 0, 0, 0, 0, 0, 0, 921, 0, 922, 0, 0, 923, 0, 0, 924,
    0, 0, 0, 0, 0, 0, 925, 0, 926, 0, 927, 0, 0, 0, 928, 0, 0, 0, 0, 0, 0, 0, 0, 0, 929, 0, 0, 0, 0, 930, 0, 0,
    0, 0, 0, 0, 931, 0, 932, 0, 0, 0, 0, 0, 0, 933, 0, 934, 0, 935, 0, 0, 936, 0, 0, 0, 937, 0, 0, 938, 0, 0, 0, 0,
    0, 0, 0, 939, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 940, 0, 0, 941, 0, 0, 0, 0, 0, 0, 0, 0, 0, 942,
};
void recomp_unit_0190_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AFC000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0190[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AFC000;
    case 2u: goto L_08AFC010;
    case 3u: goto L_08AFC020;
    case 4u: goto L_08AFC030;
    case 5u: goto L_08AFC048;
    case 6u: goto L_08AFC04C;
    case 7u: goto L_08AFC058;
    case 8u: goto L_08AFC060;
    case 9u: goto L_08AFC06C;
    case 10u: goto L_08AFC074;
    case 11u: goto L_08AFC080;
    case 12u: goto L_08AFC088;
    case 13u: goto L_08AFC090;
    case 14u: goto L_08AFC098;
    case 15u: goto L_08AFC0A0;
    case 16u: goto L_08AFC0AC;
    case 17u: goto L_08AFC0B4;
    case 18u: goto L_08AFC0BC;
    case 19u: goto L_08AFC0C4;
    case 20u: goto L_08AFC0CC;
    case 21u: goto L_08AFC0D8;
    case 22u: goto L_08AFC0E0;
    case 23u: goto L_08AFC0E8;
    case 24u: goto L_08AFC0EC;
    case 25u: goto L_08AFC0F4;
    case 26u: goto L_08AFC11C;
    case 27u: goto L_08AFC15C;
    case 28u: goto L_08AFC17C;
    case 29u: goto L_08AFC18C;
    case 30u: goto L_08AFC1B4;
    case 31u: goto L_08AFC1C4;
    case 32u: goto L_08AFC1D8;
    case 33u: goto L_08AFC1E8;
    case 34u: goto L_08AFC1F8;
    case 35u: goto L_08AFC208;
    case 36u: goto L_08AFC218;
    case 37u: goto L_08AFC238;
    case 38u: goto L_08AFC248;
    case 39u: goto L_08AFC258;
    case 40u: goto L_08AFC260;
    case 41u: goto L_08AFC288;
    case 42u: goto L_08AFC298;
    case 43u: goto L_08AFC2AC;
    case 44u: goto L_08AFC2BC;
    case 45u: goto L_08AFC2CC;
    case 46u: goto L_08AFC2F0;
    case 47u: goto L_08AFC300;
    case 48u: goto L_08AFC30C;
    case 49u: goto L_08AFC31C;
    case 50u: goto L_08AFC324;
    case 51u: goto L_08AFC348;
    case 52u: goto L_08AFC358;
    case 53u: goto L_08AFC368;
    case 54u: goto L_08AFC370;
    case 55u: goto L_08AFC388;
    case 56u: goto L_08AFC398;
    case 57u: goto L_08AFC3A4;
    case 58u: goto L_08AFC3AC;
    case 59u: goto L_08AFC3B4;
    case 60u: goto L_08AFC3C0;
    case 61u: goto L_08AFC3C8;
    case 62u: goto L_08AFC3CC;
    case 63u: goto L_08AFC3F4;
    case 64u: goto L_08AFC404;
    case 65u: goto L_08AFC418;
    case 66u: goto L_08AFC420;
    case 67u: goto L_08AFC448;
    case 68u: goto L_08AFC458;
    case 69u: goto L_08AFC464;
    case 70u: goto L_08AFC478;
    case 71u: goto L_08AFC480;
    case 72u: goto L_08AFC4A4;
    case 73u: goto L_08AFC4B4;
    case 74u: goto L_08AFC4C0;
    case 75u: goto L_08AFC4D4;
    case 76u: goto L_08AFC4DC;
    case 77u: goto L_08AFC4F0;
    case 78u: goto L_08AFC4F8;
    case 79u: goto L_08AFC508;
    case 80u: goto L_08AFC538;
    case 81u: goto L_08AFC58C;
    case 82u: goto L_08AFC594;
    case 83u: goto L_08AFC5A0;
    case 84u: goto L_08AFC5A8;
    case 85u: goto L_08AFC5AC;
    case 86u: goto L_08AFC5E8;
    case 87u: goto L_08AFC5F8;
    case 88u: goto L_08AFC60C;
    case 89u: goto L_08AFC614;
    case 90u: goto L_08AFC638;
    case 91u: goto L_08AFC640;
    case 92u: goto L_08AFC64C;
    case 93u: goto L_08AFC654;
    case 94u: goto L_08AFC658;
    case 95u: goto L_08AFC694;
    case 96u: goto L_08AFC6A4;
    case 97u: goto L_08AFC6B8;
    case 98u: goto L_08AFC6C0;
    case 99u: goto L_08AFC6E4;
    case 100u: goto L_08AFC6EC;
    case 101u: goto L_08AFC6F8;
    case 102u: goto L_08AFC700;
    case 103u: goto L_08AFC704;
    case 104u: goto L_08AFC740;
    case 105u: goto L_08AFC750;
    case 106u: goto L_08AFC764;
    case 107u: goto L_08AFC76C;
    case 108u: goto L_08AFC794;
    case 109u: goto L_08AFC7F4;
    case 110u: goto L_08AFC804;
    case 111u: goto L_08AFC810;
    case 112u: goto L_08AFC818;
    case 113u: goto L_08AFC82C;
    case 114u: goto L_08AFC838;
    case 115u: goto L_08AFC840;
    case 116u: goto L_08AFC844;
    case 117u: goto L_08AFC854;
    case 118u: goto L_08AFC860;
    case 119u: goto L_08AFC868;
    case 120u: goto L_08AFC86C;
    case 121u: goto L_08AFC874;
    case 122u: goto L_08AFC884;
    case 123u: goto L_08AFC890;
    case 124u: goto L_08AFC898;
    case 125u: goto L_08AFC8A4;
    case 126u: goto L_08AFC8B4;
    case 127u: goto L_08AFC8C0;
    case 128u: goto L_08AFC8C8;
    case 129u: goto L_08AFC8CC;
    case 130u: goto L_08AFC8D4;
    case 131u: goto L_08AFC8D8;
    case 132u: goto L_08AFC8E0;
    case 133u: goto L_08AFC8EC;
    case 134u: goto L_08AFC8F8;
    case 135u: goto L_08AFC900;
    case 136u: goto L_08AFC904;
    case 137u: goto L_08AFC90C;
    case 138u: goto L_08AFC910;
    case 139u: goto L_08AFC924;
    case 140u: goto L_08AFC92C;
    case 141u: goto L_08AFC938;
    case 142u: goto L_08AFC940;
    case 143u: goto L_08AFC94C;
    case 144u: goto L_08AFC954;
    case 145u: goto L_08AFC95C;
    case 146u: goto L_08AFC964;
    case 147u: goto L_08AFC96C;
    case 148u: goto L_08AFC978;
    case 149u: goto L_08AFC980;
    case 150u: goto L_08AFC988;
    case 151u: goto L_08AFC990;
    case 152u: goto L_08AFC998;
    case 153u: goto L_08AFC9A4;
    case 154u: goto L_08AFC9AC;
    case 155u: goto L_08AFC9B4;
    case 156u: goto L_08AFC9B8;
    case 157u: goto L_08AFC9C0;
    case 158u: goto L_08AFC9C4;
    case 159u: goto L_08AFC9CC;
    case 160u: goto L_08AFC9D4;
    case 161u: goto L_08AFCA1C;
    case 162u: goto L_08AFCA70;
    case 163u: goto L_08AFCA78;
    case 164u: goto L_08AFCA84;
    case 165u: goto L_08AFCA90;
    case 166u: goto L_08AFCA98;
    case 167u: goto L_08AFCAA8;
    case 168u: goto L_08AFCAB4;
    case 169u: goto L_08AFCAC0;
    case 170u: goto L_08AFCAC4;
    case 171u: goto L_08AFCAD8;
    case 172u: goto L_08AFCAFC;
    case 173u: goto L_08AFCB24;
    case 174u: goto L_08AFCB30;
    case 175u: goto L_08AFCB3C;
    case 176u: goto L_08AFCB4C;
    case 177u: goto L_08AFCB68;
    case 178u: goto L_08AFCB74;
    case 179u: goto L_08AFCB80;
    case 180u: goto L_08AFCB8C;
    case 181u: goto L_08AFCB94;
    case 182u: goto L_08AFCB9C;
    case 183u: goto L_08AFCBA0;
    case 184u: goto L_08AFCBA8;
    case 185u: goto L_08AFCBB0;
    case 186u: goto L_08AFCBB8;
    case 187u: goto L_08AFCBBC;
    case 188u: goto L_08AFCBC4;
    case 189u: goto L_08AFCBCC;
    case 190u: goto L_08AFCBD4;
    case 191u: goto L_08AFCBE0;
    case 192u: goto L_08AFCC00;
    case 193u: goto L_08AFCC08;
    case 194u: goto L_08AFCC28;
    case 195u: goto L_08AFCC6C;
    case 196u: goto L_08AFCC74;
    case 197u: goto L_08AFCC80;
    case 198u: goto L_08AFCC90;
    case 199u: goto L_08AFCCA0;
    case 200u: goto L_08AFCCAC;
    case 201u: goto L_08AFCCB8;
    case 202u: goto L_08AFCCD8;
    case 203u: goto L_08AFCCE8;
    case 204u: goto L_08AFCCF8;
    case 205u: goto L_08AFCD1C;
    case 206u: goto L_08AFCD2C;
    case 207u: goto L_08AFCD38;
    case 208u: goto L_08AFCD40;
    case 209u: goto L_08AFCD48;
    case 210u: goto L_08AFCD54;
    case 211u: goto L_08AFCD5C;
    case 212u: goto L_08AFCD64;
    case 213u: goto L_08AFCD70;
    case 214u: goto L_08AFCD7C;
    case 215u: goto L_08AFCD90;
    case 216u: goto L_08AFCD9C;
    case 217u: goto L_08AFCDB0;
    case 218u: goto L_08AFCDBC;
    case 219u: goto L_08AFCDC8;
    case 220u: goto L_08AFCDD8;
    case 221u: goto L_08AFCDE0;
    case 222u: goto L_08AFCDE8;
    case 223u: goto L_08AFCDF0;
    case 224u: goto L_08AFCE04;
    case 225u: goto L_08AFCE2C;
    case 226u: goto L_08AFCE50;
    case 227u: goto L_08AFCE5C;
    case 228u: goto L_08AFCE84;
    case 229u: goto L_08AFCEA8;
    case 230u: goto L_08AFCEB8;
    case 231u: goto L_08AFCEC0;
    case 232u: goto L_08AFCECC;
    case 233u: goto L_08AFCED4;
    case 234u: goto L_08AFCED8;
    case 235u: goto L_08AFCEF8;
    case 236u: goto L_08AFCF08;
    case 237u: goto L_08AFCF18;
    case 238u: goto L_08AFCF24;
    case 239u: goto L_08AFCF2C;
    case 240u: goto L_08AFCF3C;
    case 241u: goto L_08AFCF54;
    case 242u: goto L_08AFCF68;
    case 243u: goto L_08AFCF7C;
    case 244u: goto L_08AFCF84;
    case 245u: goto L_08AFCFA0;
    case 246u: goto L_08AFCFB4;
    case 247u: goto L_08AFCFEC;
    case 248u: goto L_08AFCFFC;
    case 249u: goto L_08AFD00C;
    case 250u: goto L_08AFD018;
    case 251u: goto L_08AFD03C;
    case 252u: goto L_08AFD078;
    case 253u: goto L_08AFD0A0;
    case 254u: goto L_08AFD0C4;
    case 255u: goto L_08AFD0F0;
    case 256u: goto L_08AFD100;
    case 257u: goto L_08AFD10C;
    case 258u: goto L_08AFD11C;
    case 259u: goto L_08AFD124;
    case 260u: goto L_08AFD138;
    case 261u: goto L_08AFD148;
    case 262u: goto L_08AFD158;
    case 263u: goto L_08AFD15C;
    case 264u: goto L_08AFD168;
    case 265u: goto L_08AFD170;
    case 266u: goto L_08AFD18C;
    case 267u: goto L_08AFD19C;
    case 268u: goto L_08AFD1A0;
    case 269u: goto L_08AFD1CC;
    case 270u: goto L_08AFD1DC;
    case 271u: goto L_08AFD1E8;
    case 272u: goto L_08AFD1F8;
    case 273u: goto L_08AFD200;
    case 274u: goto L_08AFD208;
    case 275u: goto L_08AFD20C;
    case 276u: goto L_08AFD218;
    case 277u: goto L_08AFD220;
    case 278u: goto L_08AFD24C;
    case 279u: goto L_08AFD25C;
    case 280u: goto L_08AFD268;
    case 281u: goto L_08AFD270;
    case 282u: goto L_08AFD27C;
    case 283u: goto L_08AFD288;
    case 284u: goto L_08AFD290;
    case 285u: goto L_08AFD294;
    case 286u: goto L_08AFD2A0;
    case 287u: goto L_08AFD2AC;
    case 288u: goto L_08AFD2BC;
    case 289u: goto L_08AFD2C4;
    case 290u: goto L_08AFD2CC;
    case 291u: goto L_08AFD2E0;
    case 292u: goto L_08AFD2E4;
    case 293u: goto L_08AFD2EC;
    case 294u: goto L_08AFD2F8;
    case 295u: goto L_08AFD30C;
    case 296u: goto L_08AFD314;
    case 297u: goto L_08AFD31C;
    case 298u: goto L_08AFD324;
    case 299u: goto L_08AFD338;
    case 300u: goto L_08AFD364;
    case 301u: goto L_08AFD384;
    case 302u: goto L_08AFD394;
    case 303u: goto L_08AFD3A0;
    case 304u: goto L_08AFD3AC;
    case 305u: goto L_08AFD3D0;
    case 306u: goto L_08AFD3D8;
    case 307u: goto L_08AFD3F4;
    case 308u: goto L_08AFD40C;
    case 309u: goto L_08AFD420;
    case 310u: goto L_08AFD424;
    case 311u: goto L_08AFD430;
    case 312u: goto L_08AFD438;
    case 313u: goto L_08AFD444;
    case 314u: goto L_08AFD44C;
    case 315u: goto L_08AFD458;
    case 316u: goto L_08AFD460;
    case 317u: goto L_08AFD46C;
    case 318u: goto L_08AFD474;
    case 319u: goto L_08AFD47C;
    case 320u: goto L_08AFD48C;
    case 321u: goto L_08AFD494;
    case 322u: goto L_08AFD49C;
    case 323u: goto L_08AFD4A0;
    case 324u: goto L_08AFD4A8;
    case 325u: goto L_08AFD4B0;
    case 326u: goto L_08AFD4C0;
    case 327u: goto L_08AFD4C8;
    case 328u: goto L_08AFD4D8;
    case 329u: goto L_08AFD4E0;
    case 330u: goto L_08AFD4E4;
    case 331u: goto L_08AFD4F0;
    case 332u: goto L_08AFD4F8;
    case 333u: goto L_08AFD500;
    case 334u: goto L_08AFD514;
    case 335u: goto L_08AFD554;
    case 336u: goto L_08AFD560;
    case 337u: goto L_08AFD568;
    case 338u: goto L_08AFD59C;
    case 339u: goto L_08AFD5A4;
    case 340u: goto L_08AFD5BC;
    case 341u: goto L_08AFD5C4;
    case 342u: goto L_08AFD5D4;
    case 343u: goto L_08AFD5DC;
    case 344u: goto L_08AFD5E8;
    case 345u: goto L_08AFD5F0;
    case 346u: goto L_08AFD5F8;
    case 347u: goto L_08AFD604;
    case 348u: goto L_08AFD60C;
    case 349u: goto L_08AFD618;
    case 350u: goto L_08AFD620;
    case 351u: goto L_08AFD634;
    case 352u: goto L_08AFD650;
    case 353u: goto L_08AFD660;
    case 354u: goto L_08AFD664;
    case 355u: goto L_08AFD68C;
    case 356u: goto L_08AFD6A4;
    case 357u: goto L_08AFD6B0;
    case 358u: goto L_08AFD6EC;
    case 359u: goto L_08AFD6FC;
    case 360u: goto L_08AFD700;
    case 361u: goto L_08AFD718;
    case 362u: goto L_08AFD740;
    case 363u: goto L_08AFD744;
    case 364u: goto L_08AFD754;
    case 365u: goto L_08AFD768;
    case 366u: goto L_08AFD770;
    case 367u: goto L_08AFD780;
    case 368u: goto L_08AFD790;
    case 369u: goto L_08AFD7B0;
    case 370u: goto L_08AFD7E4;
    case 371u: goto L_08AFD808;
    case 372u: goto L_08AFD820;
    case 373u: goto L_08AFD828;
    case 374u: goto L_08AFD834;
    case 375u: goto L_08AFD850;
    case 376u: goto L_08AFD874;
    case 377u: goto L_08AFD898;
    case 378u: goto L_08AFD89C;
    case 379u: goto L_08AFD8C4;
    case 380u: goto L_08AFD8CC;
    case 381u: goto L_08AFD8E0;
    case 382u: goto L_08AFD910;
    case 383u: goto L_08AFD918;
    case 384u: goto L_08AFD92C;
    case 385u: goto L_08AFD960;
    case 386u: goto L_08AFD96C;
    case 387u: goto L_08AFD9AC;
    case 388u: goto L_08AFD9B8;
    case 389u: goto L_08AFD9DC;
    case 390u: goto L_08AFD9E4;
    case 391u: goto L_08AFD9FC;
    case 392u: goto L_08AFDA14;
    case 393u: goto L_08AFDA30;
    case 394u: goto L_08AFDA3C;
    case 395u: goto L_08AFDA64;
    case 396u: goto L_08AFDA70;
    case 397u: goto L_08AFDA98;
    case 398u: goto L_08AFDAA8;
    case 399u: goto L_08AFDAC4;
    case 400u: goto L_08AFDACC;
    case 401u: goto L_08AFDAD8;
    case 402u: goto L_08AFDAEC;
    case 403u: goto L_08AFDB24;
    case 404u: goto L_08AFDB2C;
    case 405u: goto L_08AFDB38;
    case 406u: goto L_08AFDB44;
    case 407u: goto L_08AFDB68;
    case 408u: goto L_08AFDB7C;
    case 409u: goto L_08AFDB8C;
    case 410u: goto L_08AFDB9C;
    case 411u: goto L_08AFDBA4;
    case 412u: goto L_08AFDBB4;
    case 413u: goto L_08AFDBC0;
    case 414u: goto L_08AFDBCC;
    case 415u: goto L_08AFDBF8;
    case 416u: goto L_08AFDC28;
    case 417u: goto L_08AFDC2C;
    case 418u: goto L_08AFDC50;
    case 419u: goto L_08AFDC5C;
    case 420u: goto L_08AFDC84;
    case 421u: goto L_08AFDC88;
    case 422u: goto L_08AFDC98;
    case 423u: goto L_08AFDCA4;
    case 424u: goto L_08AFDCBC;
    case 425u: goto L_08AFDCD0;
    case 426u: goto L_08AFDCE8;
    case 427u: goto L_08AFDCF0;
    case 428u: goto L_08AFDD0C;
    case 429u: goto L_08AFDD1C;
    case 430u: goto L_08AFDD20;
    case 431u: goto L_08AFDD28;
    case 432u: goto L_08AFDD30;
    case 433u: goto L_08AFDD44;
    case 434u: goto L_08AFDD48;
    case 435u: goto L_08AFDD54;
    case 436u: goto L_08AFDD5C;
    case 437u: goto L_08AFDD68;
    case 438u: goto L_08AFDD70;
    case 439u: goto L_08AFDD7C;
    case 440u: goto L_08AFDD84;
    case 441u: goto L_08AFDD90;
    case 442u: goto L_08AFDD98;
    case 443u: goto L_08AFDDA0;
    case 444u: goto L_08AFDDB0;
    case 445u: goto L_08AFDDB8;
    case 446u: goto L_08AFDDC0;
    case 447u: goto L_08AFDDC4;
    case 448u: goto L_08AFDDCC;
    case 449u: goto L_08AFDDD4;
    case 450u: goto L_08AFDDE4;
    case 451u: goto L_08AFDDEC;
    case 452u: goto L_08AFDDFC;
    case 453u: goto L_08AFDE04;
    case 454u: goto L_08AFDE08;
    case 455u: goto L_08AFDE14;
    case 456u: goto L_08AFDE1C;
    case 457u: goto L_08AFDE24;
    case 458u: goto L_08AFDE38;
    case 459u: goto L_08AFDE3C;
    case 460u: goto L_08AFDE58;
    case 461u: goto L_08AFDE5C;
    case 462u: goto L_08AFDE6C;
    case 463u: goto L_08AFDE74;
    case 464u: goto L_08AFDE88;
    case 465u: goto L_08AFDEA0;
    case 466u: goto L_08AFDEBC;
    case 467u: goto L_08AFDEC8;
    case 468u: goto L_08AFDED0;
    case 469u: goto L_08AFDED4;
    case 470u: goto L_08AFDEE0;
    case 471u: goto L_08AFDEEC;
    case 472u: goto L_08AFDF00;
    case 473u: goto L_08AFDF08;
    case 474u: goto L_08AFDF18;
    case 475u: goto L_08AFDF24;
    case 476u: goto L_08AFDF34;
    case 477u: goto L_08AFDF40;
    case 478u: goto L_08AFDF4C;
    case 479u: goto L_08AFDF54;
    case 480u: goto L_08AFDF60;
    case 481u: goto L_08AFDF70;
    case 482u: goto L_08AFDF7C;
    case 483u: goto L_08AFDF84;
    case 484u: goto L_08AFDF94;
    case 485u: goto L_08AFDF9C;
    case 486u: goto L_08AFDFB8;
    case 487u: goto L_08AFE018;
    case 488u: goto L_08AFE020;
    case 489u: goto L_08AFE058;
    case 490u: goto L_08AFE05C;
    case 491u: goto L_08AFE064;
    case 492u: goto L_08AFE080;
    case 493u: goto L_08AFE0A8;
    case 494u: goto L_08AFE0D4;
    case 495u: goto L_08AFE0F0;
    case 496u: goto L_08AFE10C;
    case 497u: goto L_08AFE128;
    case 498u: goto L_08AFE144;
    case 499u: goto L_08AFE160;
    case 500u: goto L_08AFE168;
    case 501u: goto L_08AFE170;
    case 502u: goto L_08AFE178;
    case 503u: goto L_08AFE180;
    case 504u: goto L_08AFE188;
    case 505u: goto L_08AFE190;
    case 506u: goto L_08AFE198;
    case 507u: goto L_08AFE1A0;
    case 508u: goto L_08AFE1A8;
    case 509u: goto L_08AFE1B0;
    case 510u: goto L_08AFE1B8;
    case 511u: goto L_08AFE1C0;
    case 512u: goto L_08AFE1C8;
    case 513u: goto L_08AFE1D0;
    case 514u: goto L_08AFE1D8;
    case 515u: goto L_08AFE1E0;
    case 516u: goto L_08AFE1E8;
    case 517u: goto L_08AFE1F0;
    case 518u: goto L_08AFE21C;
    case 519u: goto L_08AFE224;
    case 520u: goto L_08AFE234;
    case 521u: goto L_08AFE240;
    case 522u: goto L_08AFE248;
    case 523u: goto L_08AFE258;
    case 524u: goto L_08AFE260;
    case 525u: goto L_08AFE27C;
    case 526u: goto L_08AFE2F0;
    case 527u: goto L_08AFE2F8;
    case 528u: goto L_08AFE330;
    case 529u: goto L_08AFE334;
    case 530u: goto L_08AFE33C;
    case 531u: goto L_08AFE368;
    case 532u: goto L_08AFE384;
    case 533u: goto L_08AFE3AC;
    case 534u: goto L_08AFE3B8;
    case 535u: goto L_08AFE3E8;
    case 536u: goto L_08AFE418;
    case 537u: goto L_08AFE438;
    case 538u: goto L_08AFE450;
    case 539u: goto L_08AFE45C;
    case 540u: goto L_08AFE470;
    case 541u: goto L_08AFE490;
    case 542u: goto L_08AFE4A0;
    case 543u: goto L_08AFE4AC;
    case 544u: goto L_08AFE4B4;
    case 545u: goto L_08AFE4BC;
    case 546u: goto L_08AFE4D4;
    case 547u: goto L_08AFE4F4;
    case 548u: goto L_08AFE504;
    case 549u: goto L_08AFE510;
    case 550u: goto L_08AFE518;
    case 551u: goto L_08AFE520;
    case 552u: goto L_08AFE538;
    case 553u: goto L_08AFE558;
    case 554u: goto L_08AFE560;
    case 555u: goto L_08AFE570;
    case 556u: goto L_08AFE580;
    case 557u: goto L_08AFE584;
    case 558u: goto L_08AFE58C;
    case 559u: goto L_08AFE5A8;
    case 560u: goto L_08AFE5C8;
    case 561u: goto L_08AFE5E0;
    case 562u: goto L_08AFE5EC;
    case 563u: goto L_08AFE608;
    case 564u: goto L_08AFE618;
    case 565u: goto L_08AFE628;
    case 566u: goto L_08AFE630;
    case 567u: goto L_08AFE63C;
    case 568u: goto L_08AFE64C;
    case 569u: goto L_08AFE654;
    case 570u: goto L_08AFE658;
    case 571u: goto L_08AFE668;
    case 572u: goto L_08AFE69C;
    case 573u: goto L_08AFE6A8;
    case 574u: goto L_08AFE6B8;
    case 575u: goto L_08AFE6C8;
    case 576u: goto L_08AFE6CC;
    case 577u: goto L_08AFE6D4;
    case 578u: goto L_08AFE6D8;
    case 579u: goto L_08AFE6EC;
    case 580u: goto L_08AFE6F8;
    case 581u: goto L_08AFE708;
    case 582u: goto L_08AFE718;
    case 583u: goto L_08AFE71C;
    case 584u: goto L_08AFE724;
    case 585u: goto L_08AFE728;
    case 586u: goto L_08AFE754;
    case 587u: goto L_08AFE75C;
    case 588u: goto L_08AFE77C;
    case 589u: goto L_08AFE780;
    case 590u: goto L_08AFE7B4;
    case 591u: goto L_08AFE7D4;
    case 592u: goto L_08AFE7E0;
    case 593u: goto L_08AFE7F4;
    case 594u: goto L_08AFE820;
    case 595u: goto L_08AFE824;
    case 596u: goto L_08AFE83C;
    case 597u: goto L_08AFE84C;
    case 598u: goto L_08AFE868;
    case 599u: goto L_08AFE874;
    case 600u: goto L_08AFE87C;
    case 601u: goto L_08AFE880;
    case 602u: goto L_08AFE8A4;
    case 603u: goto L_08AFE8C8;
    case 604u: goto L_08AFE8F4;
    case 605u: goto L_08AFE8FC;
    case 606u: goto L_08AFE904;
    case 607u: goto L_08AFE924;
    case 608u: goto L_08AFE938;
    case 609u: goto L_08AFE94C;
    case 610u: goto L_08AFE95C;
    case 611u: goto L_08AFE968;
    case 612u: goto L_08AFE974;
    case 613u: goto L_08AFE984;
    case 614u: goto L_08AFE9A4;
    case 615u: goto L_08AFE9BC;
    case 616u: goto L_08AFE9CC;
    case 617u: goto L_08AFE9D4;
    case 618u: goto L_08AFE9E8;
    case 619u: goto L_08AFE9FC;
    case 620u: goto L_08AFEA0C;
    case 621u: goto L_08AFEA18;
    case 622u: goto L_08AFEA24;
    case 623u: goto L_08AFEA34;
    case 624u: goto L_08AFEA58;
    case 625u: goto L_08AFEA5C;
    case 626u: goto L_08AFEA78;
    case 627u: goto L_08AFEAA0;
    case 628u: goto L_08AFEAC0;
    case 629u: goto L_08AFEAD0;
    case 630u: goto L_08AFEADC;
    case 631u: goto L_08AFEAE4;
    case 632u: goto L_08AFEAEC;
    case 633u: goto L_08AFEB04;
    case 634u: goto L_08AFEB40;
    case 635u: goto L_08AFEB60;
    case 636u: goto L_08AFEB6C;
    case 637u: goto L_08AFEB70;
    case 638u: goto L_08AFEB78;
    case 639u: goto L_08AFEB80;
    case 640u: goto L_08AFEBA8;
    case 641u: goto L_08AFEBB0;
    case 642u: goto L_08AFEBB8;
    case 643u: goto L_08AFEBD4;
    case 644u: goto L_08AFEBE8;
    case 645u: goto L_08AFEC10;
    case 646u: goto L_08AFEC2C;
    case 647u: goto L_08AFEC40;
    case 648u: goto L_08AFEC50;
    case 649u: goto L_08AFEC70;
    case 650u: goto L_08AFEC9C;
    case 651u: goto L_08AFECA4;
    case 652u: goto L_08AFECAC;
    case 653u: goto L_08AFECCC;
    case 654u: goto L_08AFECE0;
    case 655u: goto L_08AFECF4;
    case 656u: goto L_08AFED04;
    case 657u: goto L_08AFED10;
    case 658u: goto L_08AFED1C;
    case 659u: goto L_08AFED2C;
    case 660u: goto L_08AFED4C;
    case 661u: goto L_08AFED64;
    case 662u: goto L_08AFED74;
    case 663u: goto L_08AFED7C;
    case 664u: goto L_08AFED90;
    case 665u: goto L_08AFEDA4;
    case 666u: goto L_08AFEDB4;
    case 667u: goto L_08AFEDC0;
    case 668u: goto L_08AFEDCC;
    case 669u: goto L_08AFEDDC;
    case 670u: goto L_08AFEE00;
    case 671u: goto L_08AFEE04;
    case 672u: goto L_08AFEE20;
    case 673u: goto L_08AFEE48;
    case 674u: goto L_08AFEE68;
    case 675u: goto L_08AFEE78;
    case 676u: goto L_08AFEE84;
    case 677u: goto L_08AFEE8C;
    case 678u: goto L_08AFEE94;
    case 679u: goto L_08AFEEAC;
    case 680u: goto L_08AFEEE8;
    case 681u: goto L_08AFEF08;
    case 682u: goto L_08AFEF14;
    case 683u: goto L_08AFEF18;
    case 684u: goto L_08AFEF20;
    case 685u: goto L_08AFEF28;
    case 686u: goto L_08AFEF50;
    case 687u: goto L_08AFEF58;
    case 688u: goto L_08AFEF60;
    case 689u: goto L_08AFEF7C;
    case 690u: goto L_08AFEF90;
    case 691u: goto L_08AFEFB8;
    case 692u: goto L_08AFEFD4;
    case 693u: goto L_08AFEFE8;
    case 694u: goto L_08AFEFF8;
    case 695u: goto L_08AFF018;
    case 696u: goto L_08AFF054;
    case 697u: goto L_08AFF07C;
    case 698u: goto L_08AFF0A0;
    case 699u: goto L_08AFF0CC;
    case 700u: goto L_08AFF0DC;
    case 701u: goto L_08AFF0E8;
    case 702u: goto L_08AFF0F8;
    case 703u: goto L_08AFF100;
    case 704u: goto L_08AFF114;
    case 705u: goto L_08AFF124;
    case 706u: goto L_08AFF134;
    case 707u: goto L_08AFF138;
    case 708u: goto L_08AFF144;
    case 709u: goto L_08AFF14C;
    case 710u: goto L_08AFF168;
    case 711u: goto L_08AFF178;
    case 712u: goto L_08AFF17C;
    case 713u: goto L_08AFF1A8;
    case 714u: goto L_08AFF1B8;
    case 715u: goto L_08AFF1C4;
    case 716u: goto L_08AFF1D4;
    case 717u: goto L_08AFF1DC;
    case 718u: goto L_08AFF1E4;
    case 719u: goto L_08AFF1E8;
    case 720u: goto L_08AFF1F4;
    case 721u: goto L_08AFF1FC;
    case 722u: goto L_08AFF228;
    case 723u: goto L_08AFF238;
    case 724u: goto L_08AFF244;
    case 725u: goto L_08AFF24C;
    case 726u: goto L_08AFF258;
    case 727u: goto L_08AFF264;
    case 728u: goto L_08AFF26C;
    case 729u: goto L_08AFF270;
    case 730u: goto L_08AFF27C;
    case 731u: goto L_08AFF288;
    case 732u: goto L_08AFF298;
    case 733u: goto L_08AFF2A0;
    case 734u: goto L_08AFF2A8;
    case 735u: goto L_08AFF2BC;
    case 736u: goto L_08AFF2C0;
    case 737u: goto L_08AFF2C8;
    case 738u: goto L_08AFF2D4;
    case 739u: goto L_08AFF2E8;
    case 740u: goto L_08AFF2F0;
    case 741u: goto L_08AFF2F8;
    case 742u: goto L_08AFF300;
    case 743u: goto L_08AFF314;
    case 744u: goto L_08AFF340;
    case 745u: goto L_08AFF36C;
    case 746u: goto L_08AFF374;
    case 747u: goto L_08AFF37C;
    case 748u: goto L_08AFF39C;
    case 749u: goto L_08AFF3B0;
    case 750u: goto L_08AFF3C4;
    case 751u: goto L_08AFF3D4;
    case 752u: goto L_08AFF3E0;
    case 753u: goto L_08AFF3EC;
    case 754u: goto L_08AFF408;
    case 755u: goto L_08AFF414;
    case 756u: goto L_08AFF434;
    case 757u: goto L_08AFF44C;
    case 758u: goto L_08AFF45C;
    case 759u: goto L_08AFF464;
    case 760u: goto L_08AFF478;
    case 761u: goto L_08AFF48C;
    case 762u: goto L_08AFF49C;
    case 763u: goto L_08AFF4A8;
    case 764u: goto L_08AFF4B4;
    case 765u: goto L_08AFF4D0;
    case 766u: goto L_08AFF4DC;
    case 767u: goto L_08AFF500;
    case 768u: goto L_08AFF504;
    case 769u: goto L_08AFF520;
    case 770u: goto L_08AFF548;
    case 771u: goto L_08AFF568;
    case 772u: goto L_08AFF578;
    case 773u: goto L_08AFF58C;
    case 774u: goto L_08AFF594;
    case 775u: goto L_08AFF59C;
    case 776u: goto L_08AFF5A8;
    case 777u: goto L_08AFF5B8;
    case 778u: goto L_08AFF5C0;
    case 779u: goto L_08AFF5C8;
    case 780u: goto L_08AFF5D0;
    case 781u: goto L_08AFF5D8;
    case 782u: goto L_08AFF5F0;
    case 783u: goto L_08AFF62C;
    case 784u: goto L_08AFF64C;
    case 785u: goto L_08AFF658;
    case 786u: goto L_08AFF65C;
    case 787u: goto L_08AFF664;
    case 788u: goto L_08AFF66C;
    case 789u: goto L_08AFF694;
    case 790u: goto L_08AFF69C;
    case 791u: goto L_08AFF6A4;
    case 792u: goto L_08AFF6C0;
    case 793u: goto L_08AFF6D4;
    case 794u: goto L_08AFF6FC;
    case 795u: goto L_08AFF718;
    case 796u: goto L_08AFF72C;
    case 797u: goto L_08AFF73C;
    case 798u: goto L_08AFF75C;
    case 799u: goto L_08AFF790;
    case 800u: goto L_08AFF798;
    case 801u: goto L_08AFF7A0;
    case 802u: goto L_08AFF7A8;
    case 803u: goto L_08AFF7B8;
    case 804u: goto L_08AFF7C8;
    case 805u: goto L_08AFF7CC;
    case 806u: goto L_08AFF7D4;
    case 807u: goto L_08AFF7F0;
    case 808u: goto L_08AFF7FC;
    case 809u: goto L_08AFF804;
    case 810u: goto L_08AFF81C;
    case 811u: goto L_08AFF824;
    case 812u: goto L_08AFF82C;
    case 813u: goto L_08AFF838;
    case 814u: goto L_08AFF848;
    case 815u: goto L_08AFF854;
    case 816u: goto L_08AFF85C;
    case 817u: goto L_08AFF860;
    case 818u: goto L_08AFF878;
    case 819u: goto L_08AFF880;
    case 820u: goto L_08AFF884;
    case 821u: goto L_08AFF890;
    case 822u: goto L_08AFF89C;
    case 823u: goto L_08AFF8AC;
    case 824u: goto L_08AFF8B8;
    case 825u: goto L_08AFF8C0;
    case 826u: goto L_08AFF8C8;
    case 827u: goto L_08AFF8D4;
    case 828u: goto L_08AFF8E0;
    case 829u: goto L_08AFF8F0;
    case 830u: goto L_08AFF8F4;
    case 831u: goto L_08AFF900;
    case 832u: goto L_08AFF904;
    case 833u: goto L_08AFF910;
    case 834u: goto L_08AFF91C;
    case 835u: goto L_08AFF928;
    case 836u: goto L_08AFF938;
    case 837u: goto L_08AFF93C;
    case 838u: goto L_08AFF948;
    case 839u: goto L_08AFF94C;
    case 840u: goto L_08AFF958;
    case 841u: goto L_08AFF964;
    case 842u: goto L_08AFF96C;
    case 843u: goto L_08AFF974;
    case 844u: goto L_08AFF980;
    case 845u: goto L_08AFF98C;
    case 846u: goto L_08AFF99C;
    case 847u: goto L_08AFF9B0;
    case 848u: goto L_08AFF9B4;
    case 849u: goto L_08AFF9C0;
    case 850u: goto L_08AFF9CC;
    case 851u: goto L_08AFF9D4;
    case 852u: goto L_08AFF9E0;
    case 853u: goto L_08AFF9F4;
    case 854u: goto L_08AFF9FC;
    case 855u: goto L_08AFFA08;
    case 856u: goto L_08AFFA10;
    case 857u: goto L_08AFFA14;
    case 858u: goto L_08AFFA20;
    case 859u: goto L_08AFFA24;
    case 860u: goto L_08AFFA3C;
    case 861u: goto L_08AFFA40;
    case 862u: goto L_08AFFA4C;
    case 863u: goto L_08AFFA54;
    case 864u: goto L_08AFFA5C;
    case 865u: goto L_08AFFA68;
    case 866u: goto L_08AFFA7C;
    case 867u: goto L_08AFFA80;
    case 868u: goto L_08AFFA8C;
    case 869u: goto L_08AFFA98;
    case 870u: goto L_08AFFAA0;
    case 871u: goto L_08AFFAAC;
    case 872u: goto L_08AFFAC0;
    case 873u: goto L_08AFFAC8;
    case 874u: goto L_08AFFAD4;
    case 875u: goto L_08AFFADC;
    case 876u: goto L_08AFFAE0;
    case 877u: goto L_08AFFAEC;
    case 878u: goto L_08AFFAF0;
    case 879u: goto L_08AFFB08;
    case 880u: goto L_08AFFB0C;
    case 881u: goto L_08AFFB18;
    case 882u: goto L_08AFFB20;
    case 883u: goto L_08AFFB28;
    case 884u: goto L_08AFFB30;
    case 885u: goto L_08AFFB34;
    case 886u: goto L_08AFFB5C;
    case 887u: goto L_08AFFB98;
    case 888u: goto L_08AFFBA4;
    case 889u: goto L_08AFFBCC;
    case 890u: goto L_08AFFBE8;
    case 891u: goto L_08AFFBF0;
    case 892u: goto L_08AFFC00;
    case 893u: goto L_08AFFC0C;
    case 894u: goto L_08AFFC30;
    case 895u: goto L_08AFFC3C;
    case 896u: goto L_08AFFC4C;
    case 897u: goto L_08AFFC74;
    case 898u: goto L_08AFFC7C;
    case 899u: goto L_08AFFC98;
    case 900u: goto L_08AFFCA0;
    case 901u: goto L_08AFFCAC;
    case 902u: goto L_08AFFCC0;
    case 903u: goto L_08AFFCDC;
    case 904u: goto L_08AFFCE4;
    case 905u: goto L_08AFFD00;
    case 906u: goto L_08AFFD08;
    case 907u: goto L_08AFFD18;
    case 908u: goto L_08AFFD24;
    case 909u: goto L_08AFFD34;
    case 910u: goto L_08AFFD64;
    case 911u: goto L_08AFFD88;
    case 912u: goto L_08AFFD90;
    case 913u: goto L_08AFFDA0;
    case 914u: goto L_08AFFDAC;
    case 915u: goto L_08AFFDB8;
    case 916u: goto L_08AFFDE0;
    case 917u: goto L_08AFFE08;
    case 918u: goto L_08AFFE1C;
    case 919u: goto L_08AFFE38;
    case 920u: goto L_08AFFE40;
    case 921u: goto L_08AFFE5C;
    case 922u: goto L_08AFFE64;
    case 923u: goto L_08AFFE70;
    case 924u: goto L_08AFFE7C;
    case 925u: goto L_08AFFE98;
    case 926u: goto L_08AFFEA0;
    case 927u: goto L_08AFFEA8;
    case 928u: goto L_08AFFEB8;
    case 929u: goto L_08AFFEE0;
    case 930u: goto L_08AFFEF4;
    case 931u: goto L_08AFFF10;
    case 932u: goto L_08AFFF18;
    case 933u: goto L_08AFFF34;
    case 934u: goto L_08AFFF3C;
    case 935u: goto L_08AFFF44;
    case 936u: goto L_08AFFF50;
    case 937u: goto L_08AFFF60;
    case 938u: goto L_08AFFF6C;
    case 939u: goto L_08AFFF8C;
    case 940u: goto L_08AFFFC8;
    case 941u: goto L_08AFFFD4;
    case 942u: goto L_08AFFFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AFC000:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08AFC010u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    goto L_08AFCE5C;
L_08AFC010:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AFC020u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    goto L_08AFCE5C;
L_08AFC020:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08AFC030u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
    goto L_08AFCE5C;
L_08AFC030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 931u, 0x08AFBFE8u>(ctx, &aot_mem); return;
      }
      goto L_08AFC048;
    }
L_08AFC048:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFC04C;
L_08AFC04C:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC0F4;
      }
      goto L_08AFC058;
    }
L_08AFC058:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08AFC0E8;
      }
      goto L_08AFC060;
    }
L_08AFC060:
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AFC090;
      }
      goto L_08AFC06C;
    }
L_08AFC06C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC090;
      }
      goto L_08AFC074;
    }
L_08AFC074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC090;
      }
      goto L_08AFC080;
    }
L_08AFC080:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC090;
      }
      goto L_08AFC088;
    }
L_08AFC088:
    ctx.gpr[31] = (0x08AFC090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC090u) goto L_08AFC090;
    return;
L_08AFC090:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC0BC;
      }
      goto L_08AFC098;
    }
L_08AFC098:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC0BC;
      }
      goto L_08AFC0A0;
    }
L_08AFC0A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC0BC;
      }
      goto L_08AFC0AC;
    }
L_08AFC0AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC0BC;
      }
      goto L_08AFC0B4;
    }
L_08AFC0B4:
    ctx.gpr[31] = (0x08AFC0BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC0BCu) goto L_08AFC0BC;
    return;
L_08AFC0BC:
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(40));
        goto L_08AFC0EC;
    }
    goto L_08AFC0C4;
L_08AFC0C4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC0E8;
      }
      goto L_08AFC0CC;
    }
L_08AFC0CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(40));
        goto L_08AFC0EC;
    }
    goto L_08AFC0D8;
L_08AFC0D8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(40));
        goto L_08AFC0EC;
    }
    goto L_08AFC0E0;
L_08AFC0E0:
    ctx.gpr[31] = (0x08AFC0E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC0E8u) goto L_08AFC0E8;
    return;
L_08AFC0E8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(40));
    goto L_08AFC0EC;
L_08AFC0EC:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AFC058;
      }
      goto L_08AFC0F4;
    }
L_08AFC0F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
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
L_08AFC11C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[6] | 0u);
    ctx.gpr[21] = (ctx.gpr[7] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[21];
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFC508;
      }
      goto L_08AFC15C;
    }
L_08AFC15C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] - ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFC370;
      }
      goto L_08AFC17C;
    }
L_08AFC17C:
    ctx.gpr[17] = (ctx.gpr[22] - ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08AFC260;
      }
      goto L_08AFC18C;
    }
L_08AFC18C:
    ctx.gpr[17] = (ctx.gpr[22] - ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(43))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(46))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AFC1B4u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 925u, 0x08AFBF50u>(ctx, &aot_mem) && ctx.pc == 0x08AFC1B4u) goto L_08AFC1B4;
    return;
L_08AFC1B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFC1D8;
      }
      goto L_08AFC1C4;
    }
L_08AFC1C4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AFC1F8;
      }
      goto L_08AFC1D8;
    }
L_08AFC1D8:
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AFC1E8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFC1E8u) goto L_08AFC1E8;
    return;
L_08AFC1E8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
    goto L_08AFC1F8;
L_08AFC1F8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[20]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC218;
      }
      goto L_08AFC208;
    }
L_08AFC208:
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AFC218u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFC218u) goto L_08AFC218;
    return;
L_08AFC218:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(49))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AFC238u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 925u, 0x08AFBF50u>(ctx, &aot_mem) && ctx.pc == 0x08AFC238u) goto L_08AFC238;
    return;
L_08AFC238:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[16];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFC258;
      }
      goto L_08AFC248;
    }
L_08AFC248:
    ctx.gpr[6] = (ctx.gpr[21] - ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AFC258u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFC258u) goto L_08AFC258;
    return;
L_08AFC258:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC368;
      }
      goto L_08AFC260;
    }
L_08AFC260:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(59))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[23] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08AFC288u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 925u, 0x08AFBF50u>(ctx, &aot_mem) && ctx.pc == 0x08AFC288u) goto L_08AFC288;
    return;
L_08AFC288:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100))))));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFC2AC;
      }
      goto L_08AFC298;
    }
L_08AFC298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFC2CC;
      }
      goto L_08AFC2AC;
    }
L_08AFC2AC:
    ctx.gpr[6] = (ctx.gpr[21] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AFC2BCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFC2BCu) goto L_08AFC2BC;
    return;
L_08AFC2BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    goto L_08AFC2CC;
L_08AFC2CC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(62))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(65))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AFC2F0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 925u, 0x08AFBF50u>(ctx, &aot_mem) && ctx.pc == 0x08AFC2F0u) goto L_08AFC2F0;
    return;
L_08AFC2F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(104))))));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[20];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFC30C;
      }
      goto L_08AFC300;
    }
L_08AFC300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AFC324;
      }
      goto L_08AFC30C;
    }
L_08AFC30C:
    ctx.gpr[6] = (ctx.gpr[16] - ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AFC31Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFC31Cu) goto L_08AFC31C;
    return;
L_08AFC31C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_08AFC324;
L_08AFC324:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(68))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(71))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(67), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[19] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AFC348u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 925u, 0x08AFBF50u>(ctx, &aot_mem) && ctx.pc == 0x08AFC348u) goto L_08AFC348;
    return;
L_08AFC348:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(108))))));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[19];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFC368;
      }
      goto L_08AFC358;
    }
L_08AFC358:
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AFC368u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFC368u) goto L_08AFC368;
    return;
L_08AFC368:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC508;
      }
      goto L_08AFC370;
    }
L_08AFC370:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (ctx.gpr[30] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[30] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08AFC398;
      }
      goto L_08AFC388;
    }
L_08AFC388:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[30] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFC3A4;
      }
      goto L_08AFC398;
    }
L_08AFC398:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (ctx.gpr[30] + ctx.gpr[4]);
    goto L_08AFC3A4;
L_08AFC3A4:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFC3CC;
      }
      goto L_08AFC3AC;
    }
L_08AFC3AC:
    ctx.gpr[31] = (0x08AFC3B4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08AFC3B4u) goto L_08AFC3B4;
    return;
L_08AFC3B4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC3CC;
      }
      goto L_08AFC3C0;
    }
L_08AFC3C0:
    ctx.gpr[31] = (0x08AFC3C8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC3C8u) goto L_08AFC3C8;
    return;
L_08AFC3C8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08AFC3CC;
L_08AFC3CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(74))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(77))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AFC3F4u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 925u, 0x08AFBF50u>(ctx, &aot_mem) && ctx.pc == 0x08AFC3F4u) goto L_08AFC3F4;
    return;
L_08AFC3F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(112))))));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[16];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFC420;
      }
      goto L_08AFC404;
    }
L_08AFC404:
    ctx.gpr[17] = (ctx.gpr[20] - ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFC418u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFC418u) goto L_08AFC418;
    return;
L_08AFC418:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AFC420;
      }
      goto L_08AFC420;
    }
L_08AFC420:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(83))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AFC448u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 925u, 0x08AFBF50u>(ctx, &aot_mem) && ctx.pc == 0x08AFC448u) goto L_08AFC448;
    return;
L_08AFC448:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(116))))));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[16];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFC464;
      }
      goto L_08AFC458;
    }
L_08AFC458:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFC480;
      }
      goto L_08AFC464;
    }
L_08AFC464:
    ctx.gpr[17] = (ctx.gpr[21] - ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFC478u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFC478u) goto L_08AFC478;
    return;
L_08AFC478:
    ctx.gpr[16] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_08AFC480;
L_08AFC480:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(86))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(89), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFC4A4u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 925u, 0x08AFBF50u>(ctx, &aot_mem) && ctx.pc == 0x08AFC4A4u) goto L_08AFC4A4;
    return;
L_08AFC4A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(120))))));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[20];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFC4C0;
      }
      goto L_08AFC4B4;
    }
L_08AFC4B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFC4DC;
      }
      goto L_08AFC4C0;
    }
L_08AFC4C0:
    ctx.gpr[16] = (ctx.gpr[17] - ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AFC4D4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFC4D4u) goto L_08AFC4D4;
    return;
L_08AFC4D4:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08AFC4DC;
L_08AFC4DC:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC4F8;
      }
      goto L_08AFC4F0;
    }
L_08AFC4F0:
    ctx.gpr[31] = (0x08AFC4F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC4F8u) goto L_08AFC4F8;
    return;
L_08AFC4F8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08AFC508;
L_08AFC508:
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
L_08AFC538:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFC5AC;
      }
      goto L_08AFC58C;
    }
L_08AFC58C:
    ctx.gpr[31] = (0x08AFC594u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08AFC594u) goto L_08AFC594;
    return;
L_08AFC594:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC5AC;
      }
      goto L_08AFC5A0;
    }
L_08AFC5A0:
    ctx.gpr[31] = (0x08AFC5A8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC5A8u) goto L_08AFC5A8;
    return;
L_08AFC5A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AFC5AC;
L_08AFC5AC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AFC5E8u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 925u, 0x08AFBF50u>(ctx, &aot_mem) && ctx.pc == 0x08AFC5E8u) goto L_08AFC5E8;
    return;
L_08AFC5E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFC614;
      }
      goto L_08AFC5F8;
    }
L_08AFC5F8:
    ctx.gpr[19] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AFC60Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFC60Cu) goto L_08AFC60C;
    return;
L_08AFC60C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AFC614;
      }
      goto L_08AFC614;
    }
L_08AFC614:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFC658;
      }
      goto L_08AFC638;
    }
L_08AFC638:
    ctx.gpr[31] = (0x08AFC640u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08AFC640u) goto L_08AFC640;
    return;
L_08AFC640:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC658;
      }
      goto L_08AFC64C;
    }
L_08AFC64C:
    ctx.gpr[31] = (0x08AFC654u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC654u) goto L_08AFC654;
    return;
L_08AFC654:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AFC658;
L_08AFC658:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AFC694u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 925u, 0x08AFBF50u>(ctx, &aot_mem) && ctx.pc == 0x08AFC694u) goto L_08AFC694;
    return;
L_08AFC694:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFC6C0;
      }
      goto L_08AFC6A4;
    }
L_08AFC6A4:
    ctx.gpr[19] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AFC6B8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFC6B8u) goto L_08AFC6B8;
    return;
L_08AFC6B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AFC6C0;
      }
      goto L_08AFC6C0;
    }
L_08AFC6C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFC704;
      }
      goto L_08AFC6E4;
    }
L_08AFC6E4:
    ctx.gpr[31] = (0x08AFC6ECu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08AFC6ECu) goto L_08AFC6EC;
    return;
L_08AFC6EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC704;
      }
      goto L_08AFC6F8;
    }
L_08AFC6F8:
    ctx.gpr[31] = (0x08AFC700u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC700u) goto L_08AFC700;
    return;
L_08AFC700:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AFC704;
L_08AFC704:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(38))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AFC740u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 925u, 0x08AFBF50u>(ctx, &aot_mem) && ctx.pc == 0x08AFC740u) goto L_08AFC740;
    return;
L_08AFC740:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFC76C;
      }
      goto L_08AFC750;
    }
L_08AFC750:
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AFC764u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFC764u) goto L_08AFC764;
    return;
L_08AFC764:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AFC76C;
      }
      goto L_08AFC76C;
    }
L_08AFC76C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFC794:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (0u | 40u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[11]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[9] & 255u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AFC804;
      }
      goto L_08AFC7F4;
    }
L_08AFC7F4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFC810;
      }
      goto L_08AFC804;
    }
L_08AFC804:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    goto L_08AFC810;
L_08AFC810:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFC844;
      }
      goto L_08AFC818;
    }
L_08AFC818:
    ctx.gpr[4] = (ctx.gpr[20] << 5u);
    ctx.gpr[5] = (ctx.gpr[20] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08AFC82Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08AFC82Cu) goto L_08AFC82C;
    return;
L_08AFC82C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AFC844;
      }
      goto L_08AFC838;
    }
L_08AFC838:
    ctx.gpr[31] = (0x08AFC840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC840u) goto L_08AFC840;
    return;
L_08AFC840:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    goto L_08AFC844;
L_08AFC844:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC874;
      }
      goto L_08AFC854;
    }
L_08AFC854:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(40));
        goto L_08AFC86C;
    }
    goto L_08AFC860;
L_08AFC860:
    ctx.gpr[31] = (0x08AFC868u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_08AFC538;
L_08AFC868:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(40));
    goto L_08AFC86C;
L_08AFC86C:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[17];
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08AFC854;
      }
      goto L_08AFC874;
    }
L_08AFC874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFC8A4;
      }
      goto L_08AFC884;
    }
L_08AFC884:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC898;
      }
      goto L_08AFC890;
    }
L_08AFC890:
    ctx.gpr[31] = (0x08AFC898u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AFC538;
L_08AFC898:
    ctx.gpr[23] = (ctx.gpr[22] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFC8D8;
      }
      goto L_08AFC8A4;
    }
L_08AFC8A4:
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC8D4;
      }
      goto L_08AFC8B4;
    }
L_08AFC8B4:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
        goto L_08AFC8CC;
    }
    goto L_08AFC8C0;
L_08AFC8C0:
    ctx.gpr[31] = (0x08AFC8C8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AFC538;
L_08AFC8C8:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08AFC8CC;
L_08AFC8CC:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08AFC8B4;
      }
      goto L_08AFC8D4;
    }
L_08AFC8D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFC8D8;
L_08AFC8D8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC910;
      }
      goto L_08AFC8E0;
    }
L_08AFC8E0:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC910;
      }
      goto L_08AFC8EC;
    }
L_08AFC8EC:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(40));
        goto L_08AFC904;
    }
    goto L_08AFC8F8;
L_08AFC8F8:
    ctx.gpr[31] = (0x08AFC900u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AFC538;
L_08AFC900:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(40));
    goto L_08AFC904;
L_08AFC904:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08AFC8EC;
      }
      goto L_08AFC90C;
    }
L_08AFC90C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFC910;
L_08AFC910:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC9C4;
      }
      goto L_08AFC924;
    }
L_08AFC924:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08AFC9B4;
      }
      goto L_08AFC92C;
    }
L_08AFC92C:
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AFC95C;
      }
      goto L_08AFC938;
    }
L_08AFC938:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC95C;
      }
      goto L_08AFC940;
    }
L_08AFC940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC95C;
      }
      goto L_08AFC94C;
    }
L_08AFC94C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC95C;
      }
      goto L_08AFC954;
    }
L_08AFC954:
    ctx.gpr[31] = (0x08AFC95Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC95Cu) goto L_08AFC95C;
    return;
L_08AFC95C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC988;
      }
      goto L_08AFC964;
    }
L_08AFC964:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC988;
      }
      goto L_08AFC96C;
    }
L_08AFC96C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC988;
      }
      goto L_08AFC978;
    }
L_08AFC978:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC988;
      }
      goto L_08AFC980;
    }
L_08AFC980:
    ctx.gpr[31] = (0x08AFC988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC988u) goto L_08AFC988;
    return;
L_08AFC988:
    if (ctx.gpr[22] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(40));
        goto L_08AFC9B8;
    }
    goto L_08AFC990;
L_08AFC990:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC9B4;
      }
      goto L_08AFC998;
    }
L_08AFC998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(40));
        goto L_08AFC9B8;
    }
    goto L_08AFC9A4;
L_08AFC9A4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(40));
        goto L_08AFC9B8;
    }
    goto L_08AFC9AC;
L_08AFC9AC:
    ctx.gpr[31] = (0x08AFC9B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC9B4u) goto L_08AFC9B4;
    return;
L_08AFC9B4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(40));
    goto L_08AFC9B8;
L_08AFC9B8:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AFC924;
      }
      goto L_08AFC9C0;
    }
L_08AFC9C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AFC9C4;
L_08AFC9C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC9D4;
      }
      goto L_08AFC9CC;
    }
L_08AFC9CC:
    ctx.gpr[31] = (0x08AFC9D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC9D4u) goto L_08AFC9D4;
    return;
L_08AFC9D4:
    ctx.gpr[4] = (ctx.gpr[20] << 5u);
    ctx.gpr[5] = (ctx.gpr[20] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
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
L_08AFCA1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 40u);
    ctx.gpr[5] = (ctx.gpr[17] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[20] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFCBE0;
      }
      goto L_08AFCA70;
    }
L_08AFCA70:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFCAA8;
      }
      goto L_08AFCA78;
    }
L_08AFCA78:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFCA98;
      }
      goto L_08AFCA84;
    }
L_08AFCA84:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08AFCA90u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AFC538;
L_08AFCA90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFCA98;
L_08AFCA98:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AFCC08;
      }
      goto L_08AFCAA8;
    }
L_08AFCAA8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-40));
      if (branch_taken) {
          goto L_08AFCAC4;
      }
      goto L_08AFCAB4;
    }
L_08AFCAB4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AFCAC0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08AFC538;
L_08AFCAC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFCAC4;
L_08AFCAC4:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08AFCAD8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AFC538;
L_08AFCAD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (ctx.gpr[18] - ctx.gpr[17]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[5] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFCB4C;
      }
      goto L_08AFCAFC;
    }
L_08AFCAFC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-40));
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08AFCB24u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    goto L_08AFCE5C;
L_08AFCB24:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AFCB30u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08AFCE5C;
L_08AFCB30:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08AFCB3Cu);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
    goto L_08AFCE5C;
L_08AFCB3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AFCAFC;
      }
      goto L_08AFCB4C;
    }
L_08AFCB4C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(38))))));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x08AFCB68u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    goto L_08AFCE5C;
L_08AFCB68:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AFCB74u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    goto L_08AFCE5C;
L_08AFCB74:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08AFCB80u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    goto L_08AFCE5C;
L_08AFCB80:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFCB9C;
      }
      goto L_08AFCB8C;
    }
L_08AFCB8C:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_08AFCBA0;
    }
    goto L_08AFCB94;
L_08AFCB94:
    ctx.gpr[31] = (0x08AFCB9Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFCB9Cu) goto L_08AFCB9C;
    return;
L_08AFCB9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_08AFCBA0;
L_08AFCBA0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFCBB8;
      }
      goto L_08AFCBA8;
    }
L_08AFCBA8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
        goto L_08AFCBBC;
    }
    goto L_08AFCBB0;
L_08AFCBB0:
    ctx.gpr[31] = (0x08AFCBB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFCBB8u) goto L_08AFCBB8;
    return;
L_08AFCBB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08AFCBBC;
L_08AFCBBC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFCBD4;
      }
      goto L_08AFCBC4;
    }
L_08AFCBC4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFCBD4;
      }
      goto L_08AFCBCC;
    }
L_08AFCBCC:
    ctx.gpr[31] = (0x08AFCBD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFCBD4u) goto L_08AFCBD4;
    return;
L_08AFCBD4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AFCC08;
      }
      goto L_08AFCBE0;
    }
L_08AFCBE0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08AFCC00u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AFC794;
L_08AFCC00:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[20]);
    goto L_08AFCC08;
L_08AFCC08:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFCC28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[17] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AFCCF8;
      }
      goto L_08AFCC6C;
    }
L_08AFCC6C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFCCA0;
      }
      goto L_08AFCC74;
    }
L_08AFCC74:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFCC90;
      }
      goto L_08AFCC80;
    }
L_08AFCC80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFCC90;
L_08AFCC90:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AFCE04;
      }
      goto L_08AFCCA0;
    }
L_08AFCCA0:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFCCB8;
      }
      goto L_08AFCCAC;
    }
L_08AFCCAC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFCCB8;
L_08AFCCB8:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFCCE8;
      }
      goto L_08AFCCD8;
    }
L_08AFCCD8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[31] = (0x08AFCCE8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFCCE8u) goto L_08AFCCE8;
    return;
L_08AFCCE8:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AFCE04;
      }
      goto L_08AFCCF8;
    }
L_08AFCCF8:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AFCD2C;
      }
      goto L_08AFCD1C;
    }
L_08AFCD1C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AFCD38;
      }
      goto L_08AFCD2C;
    }
L_08AFCD2C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[5]);
    goto L_08AFCD38;
L_08AFCD38:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFCD64;
      }
      goto L_08AFCD40;
    }
L_08AFCD40:
    ctx.gpr[31] = (0x08AFCD48u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08AFCD48u) goto L_08AFCD48;
    return;
L_08AFCD48:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AFCD64;
    }
    goto L_08AFCD54;
L_08AFCD54:
    ctx.gpr[31] = (0x08AFCD5Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFCD5Cu) goto L_08AFCD5C;
    return;
L_08AFCD5C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AFCD64;
L_08AFCD64:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[6];
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFCD7C;
      }
      goto L_08AFCD70;
    }
L_08AFCD70:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08AFCD9C;
      }
      goto L_08AFCD7C;
    }
L_08AFCD7C:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AFCD90u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFCD90u) goto L_08AFCD90;
    return;
L_08AFCD90:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08AFCD9C;
L_08AFCD9C:
    ctx.gpr[22] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[22] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AFCDB0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AFCDB0u) goto L_08AFCDB0;
    return;
L_08AFCDB0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08AFCDC8;
      }
      goto L_08AFCDBC;
    }
L_08AFCDBC:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFCDE0;
      }
      goto L_08AFCDC8;
    }
L_08AFCDC8:
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AFCDD8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFCDD8u) goto L_08AFCDD8;
    return;
L_08AFCDD8:
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AFCDE0;
L_08AFCDE0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFCDF0;
      }
      goto L_08AFCDE8;
    }
L_08AFCDE8:
    ctx.gpr[31] = (0x08AFCDF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFCDF0u) goto L_08AFCDF0;
    return;
L_08AFCDF0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[21] + ctx.gpr[19]);
    goto L_08AFCE04;
L_08AFCE04:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFCE2C:
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFCE50:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFCE5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFD018;
      }
      goto L_08AFCE84;
    }
L_08AFCE84:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFCF3C;
      }
      goto L_08AFCEA8;
    }
L_08AFCEA8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFCED8;
      }
      goto L_08AFCEB8;
    }
L_08AFCEB8:
    ctx.gpr[31] = (0x08AFCEC0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08AFCEC0u) goto L_08AFCEC0;
    return;
L_08AFCEC0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFCED8;
      }
      goto L_08AFCECC;
    }
L_08AFCECC:
    ctx.gpr[31] = (0x08AFCED4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFCED4u) goto L_08AFCED4;
    return;
L_08AFCED4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AFCED8;
L_08AFCED8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AFCEF8u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 925u, 0x08AFBF50u>(ctx, &aot_mem) && ctx.pc == 0x08AFCEF8u) goto L_08AFCEF8;
    return;
L_08AFCEF8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFCF18;
      }
      goto L_08AFCF08;
    }
L_08AFCF08:
    ctx.gpr[6] = (ctx.gpr[19] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AFCF18u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFCF18u) goto L_08AFCF18;
    return;
L_08AFCF18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFCF2C;
      }
      goto L_08AFCF24;
    }
L_08AFCF24:
    ctx.gpr[31] = (0x08AFCF2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFCF2Cu) goto L_08AFCF2C;
    return;
L_08AFCF2C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFD00C;
      }
      goto L_08AFCF3C;
    }
L_08AFCF3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFCF84;
      }
      goto L_08AFCF54;
    }
L_08AFCF54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFCF7C;
      }
      goto L_08AFCF68;
    }
L_08AFCF68:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] - ctx.gpr[7]);
    ctx.gpr[31] = (0x08AFCF7Cu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFCF7Cu) goto L_08AFCF7C;
    return;
L_08AFCF7C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFD00C;
      }
      goto L_08AFCF84;
    }
L_08AFCF84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFCFB4;
      }
      goto L_08AFCFA0;
    }
L_08AFCFA0:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[31] = (0x08AFCFB4u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFCFB4u) goto L_08AFCFB4;
    return;
L_08AFCFB4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AFCFECu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 925u, 0x08AFBF50u>(ctx, &aot_mem) && ctx.pc == 0x08AFCFECu) goto L_08AFCFEC;
    return;
L_08AFCFEC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFD00C;
      }
      goto L_08AFCFFC;
    }
L_08AFCFFC:
    ctx.gpr[6] = (ctx.gpr[19] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AFD00Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFD00Cu) goto L_08AFD00C;
    return;
L_08AFD00C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08AFD018;
L_08AFD018:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD03C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AFD338;
      }
      goto L_08AFD078;
    }
L_08AFD078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[22]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[20] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
        goto L_08AFD220;
    }
    goto L_08AFD0A0;
L_08AFD0A0:
    ctx.gpr[4] = (ctx.gpr[22] - ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08AFD170;
      }
      goto L_08AFD0C4;
    }
L_08AFD0C4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (ctx.gpr[22] - ctx.gpr[20]);
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AFD0F0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 927u, 0x08AFBF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFD0F0u) goto L_08AFD0F0;
    return;
L_08AFD0F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[21];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFD10C;
      }
      goto L_08AFD100;
    }
L_08AFD100:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AFD124;
      }
      goto L_08AFD10C;
    }
L_08AFD10C:
    ctx.gpr[6] = (ctx.gpr[22] - ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AFD11Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFD11Cu) goto L_08AFD11C;
    return;
L_08AFD11C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
    goto L_08AFD124;
L_08AFD124:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[19] - ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFD148;
      }
      goto L_08AFD138;
    }
L_08AFD138:
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AFD148u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFD148u) goto L_08AFD148;
    return;
L_08AFD148:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AFD168;
      }
      goto L_08AFD158;
    }
L_08AFD158:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08AFD15C;
L_08AFD15C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] != ctx.gpr[17]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
        goto L_08AFD15C;
    }
    goto L_08AFD168;
L_08AFD168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD218;
      }
      goto L_08AFD170;
    }
L_08AFD170:
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
      if (branch_taken) {
          goto L_08AFD1A0;
      }
      goto L_08AFD18C;
    }
L_08AFD18C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AFD18C;
      }
      goto L_08AFD19C;
    }
L_08AFD19C:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFD1A0;
L_08AFD1A0:
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    ctx.gpr[20] = (ctx.gpr[22] + ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AFD1CCu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 927u, 0x08AFBF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFD1CCu) goto L_08AFD1CC;
    return;
L_08AFD1CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFD1E8;
      }
      goto L_08AFD1DC;
    }
L_08AFD1DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AFD200;
      }
      goto L_08AFD1E8;
    }
L_08AFD1E8:
    ctx.gpr[6] = (ctx.gpr[19] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AFD1F8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFD1F8u) goto L_08AFD1F8;
    return;
L_08AFD1F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_08AFD200;
L_08AFD200:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AFD218;
      }
      goto L_08AFD208;
    }
L_08AFD208:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08AFD20C;
L_08AFD20C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[17] != ctx.gpr[19]) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
        goto L_08AFD20C;
    }
    goto L_08AFD218;
L_08AFD218:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD338;
      }
      goto L_08AFD220;
    }
L_08AFD220:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AFD25C;
      }
      goto L_08AFD24C;
    }
L_08AFD24C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFD268;
      }
      goto L_08AFD25C;
    }
L_08AFD25C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08AFD268;
L_08AFD268:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFD294;
      }
      goto L_08AFD270;
    }
L_08AFD270:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[31] = (0x08AFD27Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08AFD27Cu) goto L_08AFD27C;
    return;
L_08AFD27C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08AFD294;
      }
      goto L_08AFD288;
    }
L_08AFD288:
    ctx.gpr[31] = (0x08AFD290u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD290u) goto L_08AFD290;
    return;
L_08AFD290:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AFD294;
L_08AFD294:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFD2AC;
      }
      goto L_08AFD2A0;
    }
L_08AFD2A0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08AFD2C4;
      }
      goto L_08AFD2AC;
    }
L_08AFD2AC:
    ctx.gpr[21] = (ctx.gpr[17] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AFD2BCu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFD2BCu) goto L_08AFD2BC;
    return;
L_08AFD2BC:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08AFD2C4;
L_08AFD2C4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AFD2E4;
    }
    goto L_08AFD2CC;
L_08AFD2CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AFD2CC;
      }
      goto L_08AFD2E0;
    }
L_08AFD2E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFD2E4;
L_08AFD2E4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFD2F8;
      }
      goto L_08AFD2EC;
    }
L_08AFD2EC:
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFD314;
      }
      goto L_08AFD2F8;
    }
L_08AFD2F8:
    ctx.gpr[18] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AFD30Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFD30Cu) goto L_08AFD30C;
    return;
L_08AFD30C:
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AFD314;
L_08AFD314:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFD324;
      }
      goto L_08AFD31C;
    }
L_08AFD31C:
    ctx.gpr[31] = (0x08AFD324u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD324u) goto L_08AFD324;
    return;
L_08AFD324:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08AFD338;
L_08AFD338:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD364:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFD3F4;
      }
      goto L_08AFD384;
    }
L_08AFD384:
    ctx.gpr[6] = (ctx.gpr[16] - ctx.gpr[17]);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFD3A0;
      }
      goto L_08AFD394;
    }
L_08AFD394:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFD394;
      }
      goto L_08AFD3A0;
    }
L_08AFD3A0:
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08AFD3ACu);
    ctx.gpr[4] = (0u | 0u);
    goto L_08AFD500;
L_08AFD3AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AFD3D0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08AFD514;
L_08AFD3D0:
    ctx.gpr[31] = (0x08AFD3D8u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08AFD500;
L_08AFD3D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[31] = (0x08AFD3F4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AFDA70;
L_08AFD3F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD40C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFD47C;
      }
      goto L_08AFD420;
    }
L_08AFD420:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AFD424;
L_08AFD424:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AFD438;
    }
    goto L_08AFD430;
L_08AFD430:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFD4F8;
      }
      goto L_08AFD438;
    }
L_08AFD438:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AFD44C;
    }
    goto L_08AFD444;
L_08AFD444:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFD4F8;
      }
      goto L_08AFD44C;
    }
L_08AFD44C:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AFD460;
    }
    goto L_08AFD458;
L_08AFD458:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFD4F8;
      }
      goto L_08AFD460;
    }
L_08AFD460:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFD474;
      }
      goto L_08AFD46C;
    }
L_08AFD46C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFD4F8;
      }
      goto L_08AFD474;
    }
L_08AFD474:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFD424;
      }
      goto L_08AFD47C;
    }
L_08AFD47C:
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AFD4A0;
      }
      goto L_08AFD48C;
    }
L_08AFD48C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFD4F8;
      }
      goto L_08AFD494;
    }
L_08AFD494:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFD4E4;
      }
      goto L_08AFD49C;
    }
L_08AFD49C:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    goto L_08AFD4A0;
L_08AFD4A0:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AFD4C8;
      }
      goto L_08AFD4A8;
    }
L_08AFD4A8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFD4F8;
      }
      goto L_08AFD4B0;
    }
L_08AFD4B0:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AFD4C8;
    }
    goto L_08AFD4C0;
L_08AFD4C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFD4F8;
      }
      goto L_08AFD4C8;
    }
L_08AFD4C8:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AFD4E0;
    }
    goto L_08AFD4D8;
L_08AFD4D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFD4F8;
      }
      goto L_08AFD4E0;
    }
L_08AFD4E0:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AFD4E4;
L_08AFD4E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFD4F8;
      }
      goto L_08AFD4F0;
    }
L_08AFD4F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFD4F8;
      }
      goto L_08AFD4F8;
    }
L_08AFD4F8:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD500:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD514:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[8]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 17 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AFD664;
      }
      goto L_08AFD554;
    }
L_08AFD554:
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    goto L_08AFD560;
L_08AFD560:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
      if (branch_taken) {
          goto L_08AFD5A4;
      }
      goto L_08AFD568;
    }
L_08AFD568:
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AFD5C4;
      }
      goto L_08AFD59C;
    }
L_08AFD59C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AFD5F8;
      }
      goto L_08AFD5A4;
    }
L_08AFD5A4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AFD5BCu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_08AFD68C;
L_08AFD5BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD664;
      }
      goto L_08AFD5C4;
    }
L_08AFD5C4:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
        goto L_08AFD5DC;
    }
    goto L_08AFD5D4;
L_08AFD5D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFD620;
      }
      goto L_08AFD5DC;
    }
L_08AFD5DC:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD5F0;
      }
      goto L_08AFD5E8;
    }
L_08AFD5E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFD620;
      }
      goto L_08AFD5F0;
    }
L_08AFD5F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFD620;
      }
      goto L_08AFD5F8;
    }
L_08AFD5F8:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AFD60C;
      }
      goto L_08AFD604;
    }
L_08AFD604:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFD620;
      }
      goto L_08AFD60C;
    }
L_08AFD60C:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08AFD620;
    }
    goto L_08AFD618;
L_08AFD618:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFD620;
      }
      goto L_08AFD620;
    }
L_08AFD620:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AFD634u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_08AFD9B8;
L_08AFD634:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AFD650u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_08AFD514;
L_08AFD650:
    ctx.gpr[4] = (ctx.gpr[22] - ctx.gpr[16]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08AFD560;
      }
      goto L_08AFD660;
    }
L_08AFD660:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08AFD664;
L_08AFD664:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD68C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFD6A4u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AFD6B0;
L_08AFD6A4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD6B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[8]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFD6ECu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AFD7B0;
L_08AFD6EC:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
      if (branch_taken) {
          goto L_08AFD754;
      }
      goto L_08AFD6FC;
    }
L_08AFD6FC:
    ctx.gpr[19] = (ctx.gpr[17] - ctx.gpr[16]);
    goto L_08AFD700;
L_08AFD700:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD744;
      }
      goto L_08AFD718;
    }
L_08AFD718:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AFD740u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08AFD850;
L_08AFD740:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    goto L_08AFD744;
L_08AFD744:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD700;
      }
      goto L_08AFD754;
    }
L_08AFD754:
    ctx.gpr[5] = (ctx.gpr[17] - ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD790;
      }
      goto L_08AFD768;
    }
L_08AFD768:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33))))));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AFD770;
L_08AFD770:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFD780u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08AFD96C;
L_08AFD780:
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AFD770;
      }
      goto L_08AFD790;
    }
L_08AFD790:
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
L_08AFD7B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFD834;
      }
      goto L_08AFD7E4;
    }
L_08AFD7E4:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AFD808;
L_08AFD808:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AFD820u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    goto L_08AFD850;
L_08AFD820:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFD834;
      }
      goto L_08AFD828;
    }
L_08AFD828:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFD808;
      }
      goto L_08AFD834;
    }
L_08AFD834:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD850:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[7] & 255u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFD8C4;
      }
      goto L_08AFD874;
    }
L_08AFD874:
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[11] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD89C;
      }
      goto L_08AFD898;
    }
L_08AFD898:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    goto L_08AFD89C;
L_08AFD89C:
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[11] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD874;
      }
      goto L_08AFD8C4;
    }
L_08AFD8C4:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08AFD8E0;
      }
      goto L_08AFD8CC;
    }
L_08AFD8CC:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-1)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    goto L_08AFD8E0;
L_08AFD8E0:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 1u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[11] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08AFD910;
L_08AFD910:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08AFD960;
      }
      goto L_08AFD918;
    }
L_08AFD918:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_08AFD960;
      }
      goto L_08AFD92C;
    }
L_08AFD92C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[9] >> 31u);
    ctx.gpr[2] = (ctx.gpr[10] | 0u);
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[5]);
    ctx.gpr[10] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 1u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AFD910;
      }
      goto L_08AFD960;
    }
L_08AFD960:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD96C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-1)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[8] - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFD9ACu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AFD850;
L_08AFD9AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD9B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    goto L_08AFD9DC;
L_08AFD9DC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD9FC;
      }
      goto L_08AFD9E4;
    }
L_08AFD9E4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD9E4;
      }
      goto L_08AFD9FC;
    }
L_08AFD9FC:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDA30;
      }
      goto L_08AFDA14;
    }
L_08AFDA14:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDA14;
      }
      goto L_08AFDA30;
    }
L_08AFDA30:
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDA64;
      }
      goto L_08AFDA3C;
    }
L_08AFDA3C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AFD9DC;
      }
      goto L_08AFDA64;
    }
L_08AFDA64:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDA70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
      if (branch_taken) {
          goto L_08AFDACC;
      }
      goto L_08AFDA98;
    }
L_08AFDA98:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AFDAA8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AFDAEC;
L_08AFDAA8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFDAC4u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08AFDC5C;
L_08AFDAC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDAD8;
      }
      goto L_08AFDACC;
    }
L_08AFDACC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AFDAD8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AFDAEC;
L_08AFDAD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDAEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFDB2C;
      }
      goto L_08AFDB24;
    }
L_08AFDB24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDBCC;
      }
      goto L_08AFDB2C;
    }
L_08AFDB2C:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AFDBCC;
      }
      goto L_08AFDB38;
    }
L_08AFDB38:
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    goto L_08AFDB44;
L_08AFDB44:
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[19] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFDBA4;
      }
      goto L_08AFDB68;
    }
L_08AFDB68:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AFDB7Cu);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21))))));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 925u, 0x08AFBF50u>(ctx, &aot_mem) && ctx.pc == 0x08AFDB7Cu) goto L_08AFDB7C;
    return;
L_08AFDB7C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
      if (branch_taken) {
          goto L_08AFDB9C;
      }
      goto L_08AFDB8C;
    }
L_08AFDB8C:
    ctx.gpr[4] = (ctx.gpr[23] - ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFDB9Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFDB9Cu) goto L_08AFDB9C;
    return;
L_08AFDB9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08AFDBB4;
      }
      goto L_08AFDBA4;
    }
L_08AFDBA4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[31] = (0x08AFDBB4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AFDBF8;
L_08AFDBB4:
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AFDB44;
      }
      goto L_08AFDBC0;
    }
L_08AFDBC0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[22]));
    goto L_08AFDBCC;
L_08AFDBCC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDBF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDC50;
      }
      goto L_08AFDC28;
    }
L_08AFDC28:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AFDC2C;
L_08AFDC2C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_08AFDC2C;
    }
    goto L_08AFDC50;
L_08AFDC50:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDC5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AFDCA4;
      }
      goto L_08AFDC84;
    }
L_08AFDC84:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    goto L_08AFDC88;
L_08AFDC88:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AFDC98u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08AFDBF8;
L_08AFDC98:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AFDC88;
      }
      goto L_08AFDCA4;
    }
L_08AFDCA4:
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
L_08AFDCBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDCD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFDD28;
      }
      goto L_08AFDCE8;
    }
L_08AFDCE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    goto L_08AFDCF0;
L_08AFDCF0:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDD1C;
      }
      goto L_08AFDD0C;
    }
L_08AFDD0C:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.gpr[2] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFDD20;
      }
      goto L_08AFDD1C;
    }
L_08AFDD1C:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08AFDD20;
L_08AFDD20:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AFDCF0;
      }
      goto L_08AFDD28;
    }
L_08AFDD28:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDD30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFDDA0;
      }
      goto L_08AFDD44;
    }
L_08AFDD44:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AFDD48;
L_08AFDD48:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AFDD5C;
    }
    goto L_08AFDD54;
L_08AFDD54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFDE1C;
      }
      goto L_08AFDD5C;
    }
L_08AFDD5C:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AFDD70;
    }
    goto L_08AFDD68;
L_08AFDD68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFDE1C;
      }
      goto L_08AFDD70;
    }
L_08AFDD70:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AFDD84;
    }
    goto L_08AFDD7C;
L_08AFDD7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFDE1C;
      }
      goto L_08AFDD84;
    }
L_08AFDD84:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFDD98;
      }
      goto L_08AFDD90;
    }
L_08AFDD90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFDE1C;
      }
      goto L_08AFDD98;
    }
L_08AFDD98:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFDD48;
      }
      goto L_08AFDDA0;
    }
L_08AFDDA0:
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AFDDC4;
      }
      goto L_08AFDDB0;
    }
L_08AFDDB0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFDE1C;
      }
      goto L_08AFDDB8;
    }
L_08AFDDB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFDE08;
      }
      goto L_08AFDDC0;
    }
L_08AFDDC0:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    goto L_08AFDDC4;
L_08AFDDC4:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AFDDEC;
      }
      goto L_08AFDDCC;
    }
L_08AFDDCC:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFDE1C;
      }
      goto L_08AFDDD4;
    }
L_08AFDDD4:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AFDDEC;
    }
    goto L_08AFDDE4;
L_08AFDDE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFDE1C;
      }
      goto L_08AFDDEC;
    }
L_08AFDDEC:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AFDE04;
    }
    goto L_08AFDDFC;
L_08AFDDFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFDE1C;
      }
      goto L_08AFDE04;
    }
L_08AFDE04:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AFDE08;
L_08AFDE08:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFDE1C;
      }
      goto L_08AFDE14;
    }
L_08AFDE14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFDE1C;
      }
      goto L_08AFDE1C;
    }
L_08AFDE1C:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDE24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFDE6C;
      }
      goto L_08AFDE38;
    }
L_08AFDE38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08AFDE3C;
L_08AFDE3C:
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 128u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDE5C;
      }
      goto L_08AFDE58;
    }
L_08AFDE58:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08AFDE5C;
L_08AFDE5C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDE3C;
      }
      goto L_08AFDE6C;
    }
L_08AFDE6C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDE74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFDE88u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08AFDE24;
L_08AFDE88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDEA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFDEBCu);
    ctx.gpr[4] = (0u | 11120u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AFDEBCu) goto L_08AFDEBC;
    return;
L_08AFDEBC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDED4;
      }
      goto L_08AFDEC8;
    }
L_08AFDEC8:
    ctx.gpr[31] = (0x08AFDED0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 121u, 0x08950A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFDED0u) goto L_08AFDED0;
    return;
L_08AFDED0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AFDED4;
L_08AFDED4:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[31] = (0x08AFDEE0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-20436), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 261u, 0x08A29668u>(ctx, &aot_mem) && ctx.pc == 0x08AFDEE0u) goto L_08AFDEE0;
    return;
L_08AFDEE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[31] = (0x08AFDEECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 259u, 0x08A29650u>(ctx, &aot_mem) && ctx.pc == 0x08AFDEECu) goto L_08AFDEEC;
    return;
L_08AFDEEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDF00:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDF08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AFDF54;
      }
      goto L_08AFDF18;
    }
L_08AFDF18:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-20432));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFDF40;
      }
      goto L_08AFDF24;
    }
L_08AFDF24:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-17516));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFDF40;
      }
      goto L_08AFDF34;
    }
L_08AFDF34:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13548));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_08AFDF40;
L_08AFDF40:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDF54;
      }
      goto L_08AFDF4C;
    }
L_08AFDF4C:
    ctx.gpr[31] = (0x08AFDF54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08AFDF54u) goto L_08AFDF54;
    return;
L_08AFDF54:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDF60:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08AFDF70;
L_08AFDF70:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AFDF9C;
      }
      goto L_08AFDF7C;
    }
L_08AFDF7C:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDF94;
      }
      goto L_08AFDF84;
    }
L_08AFDF84:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFDF9C;
      }
      goto L_08AFDF94;
    }
L_08AFDF94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFE018;
      }
      goto L_08AFDF9C;
    }
L_08AFDF9C:
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDF70;
      }
      goto L_08AFDFB8;
    }
L_08AFDFB8:
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
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_08AFE018;
L_08AFE018:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE020:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 96u);
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
          goto L_08AFE05C;
      }
      goto L_08AFE058;
    }
L_08AFE058:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08AFE05C;
L_08AFE05C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE080:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[7] = (32768u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 31u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE0A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 3248u);
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
L_08AFE0D4:
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
L_08AFE0F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE10C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE144:
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
L_08AFE160:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE168:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(660), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE170:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE178:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE180:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE188:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE190:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE198:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE1A0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE1A8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE1B0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE1B8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE1C0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE1C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE1D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE1D8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE1E0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE1E8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE1F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE21C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE224:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08AFE234;
L_08AFE234:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AFE260;
      }
      goto L_08AFE240;
    }
L_08AFE240:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE258;
      }
      goto L_08AFE248;
    }
L_08AFE248:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFE260;
      }
      goto L_08AFE258;
    }
L_08AFE258:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFE2F0;
      }
      goto L_08AFE260;
    }
L_08AFE260:
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE234;
      }
      goto L_08AFE27C;
    }
L_08AFE27C:
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
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_08AFE2F0;
L_08AFE2F0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE2F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 1760u);
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
          goto L_08AFE334;
      }
      goto L_08AFE330;
    }
L_08AFE330:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08AFE334;
L_08AFE334:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE33C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 1760u);
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
L_08AFE368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 1760u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] & 255u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08AFE3ACu);
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AFE3ACu) goto L_08AFE3AC;
    return;
L_08AFE3AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE3B8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-19840));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE3E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08AFE438;
      }
      goto L_08AFE418;
    }
L_08AFE418:
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AFE438;
      }
      goto L_08AFE438;
    }
L_08AFE438:
    ctx.gpr[11] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    jump_target = ctx.gpr[11];
    ctx.gpr[31] = (0x08AFE450u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AFE450u) goto L_08AFE450;
    return;
L_08AFE450:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE45C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE470:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFE4BC;
      }
      goto L_08AFE490;
    }
L_08AFE490:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFE4A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AFE470;
L_08AFE4A0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFE4B4;
      }
      goto L_08AFE4AC;
    }
L_08AFE4AC:
    ctx.gpr[31] = (0x08AFE4B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE4B4u) goto L_08AFE4B4;
    return;
L_08AFE4B4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AFE490;
      }
      goto L_08AFE4BC;
    }
L_08AFE4BC:
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
L_08AFE4D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFE520;
      }
      goto L_08AFE4F4;
    }
L_08AFE4F4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFE504u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AFE4D4;
L_08AFE504:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFE518;
      }
      goto L_08AFE510;
    }
L_08AFE510:
    ctx.gpr[31] = (0x08AFE518u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE518u) goto L_08AFE518;
    return;
L_08AFE518:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AFE4F4;
      }
      goto L_08AFE520;
    }
L_08AFE520:
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
L_08AFE538:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFE58C;
      }
      goto L_08AFE558;
    }
L_08AFE558:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    goto L_08AFE560;
L_08AFE560:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
        goto L_08AFE580;
    }
    goto L_08AFE570;
L_08AFE570:
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFE584;
      }
      goto L_08AFE580;
    }
L_08AFE580:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_08AFE584;
L_08AFE584:
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
        goto L_08AFE560;
    }
    goto L_08AFE58C;
L_08AFE58C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[6] ^ ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AFE5C8;
      }
      goto L_08AFE5A8;
    }
L_08AFE5A8:
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE658;
      }
      goto L_08AFE5C8;
    }
L_08AFE5C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
      if (branch_taken) {
          goto L_08AFE5EC;
      }
      goto L_08AFE5E0;
    }
L_08AFE5E0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08AFE5EC;
L_08AFE5EC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x08AFE608u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 51u, 0x08B003BCu>(ctx, &aot_mem) && ctx.pc == 0x08AFE608u) goto L_08AFE608;
    return;
L_08AFE608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFE630;
      }
      goto L_08AFE618;
    }
L_08AFE618:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFE630;
      }
      goto L_08AFE628;
    }
L_08AFE628:
    ctx.gpr[31] = (0x08AFE630u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08AFE630u) goto L_08AFE630;
    return;
L_08AFE630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE654;
      }
      goto L_08AFE63C;
    }
L_08AFE63C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AFE654;
      }
      goto L_08AFE64C;
    }
L_08AFE64C:
    ctx.gpr[31] = (0x08AFE654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08AFE654u) goto L_08AFE654;
    return;
L_08AFE654:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08AFE658;
L_08AFE658:
    ctx.gpr[2] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE668:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
        goto L_08AFE6D8;
    }
    goto L_08AFE69C;
L_08AFE69C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08AFE6A8;
L_08AFE6A8:
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
        goto L_08AFE6C8;
    }
    goto L_08AFE6B8;
L_08AFE6B8:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFE6CC;
      }
      goto L_08AFE6C8;
    }
L_08AFE6C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AFE6CC;
L_08AFE6CC:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08AFE6A8;
    }
    goto L_08AFE6D4;
L_08AFE6D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    goto L_08AFE6D8;
L_08AFE6D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
        goto L_08AFE728;
    }
    goto L_08AFE6EC;
L_08AFE6EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08AFE6F8;
L_08AFE6F8:
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_08AFE718;
    }
    goto L_08AFE708;
L_08AFE708:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFE71C;
      }
      goto L_08AFE718;
    }
L_08AFE718:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AFE71C;
L_08AFE71C:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_08AFE6F8;
    }
    goto L_08AFE724;
L_08AFE724:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    goto L_08AFE728;
L_08AFE728:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AFE780;
      }
      goto L_08AFE754;
    }
L_08AFE754:
    ctx.gpr[31] = (0x08AFE75Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 888u, 0x08AFBD8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFE75Cu) goto L_08AFE75C;
    return;
L_08AFE75C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFE754;
      }
      goto L_08AFE77C;
    }
L_08AFE77C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08AFE780;
L_08AFE780:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08AFE820;
      }
      goto L_08AFE7B4;
    }
L_08AFE7B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AFE824;
    }
    goto L_08AFE7D4;
L_08AFE7D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE8A4;
      }
      goto L_08AFE7E0;
    }
L_08AFE7E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08AFE7F4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08AFEAA0;
L_08AFE7F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08AFE8A4;
      }
      goto L_08AFE820;
    }
L_08AFE820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AFE824;
L_08AFE824:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08AFE8A4;
      }
      goto L_08AFE83C;
    }
L_08AFE83C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AFE84Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 888u, 0x08AFBD8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFE84Cu) goto L_08AFE84C;
    return;
L_08AFE84C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08AFE868u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    goto L_08AFF75C;
L_08AFE868:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AFE880;
    }
    goto L_08AFE874;
L_08AFE874:
    ctx.gpr[31] = (0x08AFE87Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE87Cu) goto L_08AFE87C;
    return;
L_08AFE87C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFE880;
L_08AFE880:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE83C;
      }
      goto L_08AFE8A4;
    }
L_08AFE8A4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE8C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08AFE924;
      }
      goto L_08AFE8F4;
    }
L_08AFE8F4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE9D4;
      }
      goto L_08AFE8FC;
    }
L_08AFE8FC:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE924;
      }
      goto L_08AFE904;
    }
L_08AFE904:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE9D4;
      }
      goto L_08AFE924;
    }
L_08AFE924:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08AFE938u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08AFE938u) goto L_08AFE938;
    return;
L_08AFE938:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AFE968;
      }
      goto L_08AFE94C;
    }
L_08AFE94C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[31] = (0x08AFE95Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE95Cu) goto L_08AFE95C;
    return;
L_08AFE95C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08AFE968;
L_08AFE968:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE984;
      }
      goto L_08AFE974;
    }
L_08AFE974:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08AFE984;
L_08AFE984:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFE9BC;
      }
      goto L_08AFE9A4;
    }
L_08AFE9A4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AFEA5C;
      }
      goto L_08AFE9BC;
    }
L_08AFE9BC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08AFEA5C;
      }
      goto L_08AFE9CC;
    }
L_08AFE9CC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AFEA5C;
      }
      goto L_08AFE9D4;
    }
L_08AFE9D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08AFE9E8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08AFE9E8u) goto L_08AFE9E8;
    return;
L_08AFE9E8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AFEA18;
      }
      goto L_08AFE9FC;
    }
L_08AFE9FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[31] = (0x08AFEA0Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFEA0Cu) goto L_08AFEA0C;
    return;
L_08AFEA0C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08AFEA18;
L_08AFEA18:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEA34;
      }
      goto L_08AFEA24;
    }
L_08AFEA24:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08AFEA34;
L_08AFEA34:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFEA5C;
      }
      goto L_08AFEA58;
    }
L_08AFEA58:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08AFEA5C;
L_08AFEA5C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AFEA78u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 865u, 0x08AFBC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFEA78u) goto L_08AFEA78;
    return;
L_08AFEA78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
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
L_08AFEAA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFEAEC;
      }
      goto L_08AFEAC0;
    }
L_08AFEAC0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFEAD0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AFEAA0;
L_08AFEAD0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFEAE4;
      }
      goto L_08AFEADC;
    }
L_08AFEADC:
    ctx.gpr[31] = (0x08AFEAE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFEAE4u) goto L_08AFEAE4;
    return;
L_08AFEAE4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AFEAC0;
      }
      goto L_08AFEAEC;
    }
L_08AFEAEC:
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
L_08AFEB04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AFEB78;
      }
      goto L_08AFEB40;
    }
L_08AFEB40:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFEB6C;
      }
      goto L_08AFEB60;
    }
L_08AFEB60:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFEB70;
      }
      goto L_08AFEB6C;
    }
L_08AFEB6C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08AFEB70;
L_08AFEB70:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEB40;
      }
      goto L_08AFEB78;
    }
L_08AFEB78:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AFEBE8;
      }
      goto L_08AFEB80;
    }
L_08AFEB80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEBB8;
      }
      goto L_08AFEBA8;
    }
L_08AFEBA8:
    ctx.gpr[31] = (0x08AFEBB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 898u, 0x08AFBDFCu>(ctx, &aot_mem) && ctx.pc == 0x08AFEBB0u) goto L_08AFEBB0;
    return;
L_08AFEBB0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AFEBE8;
      }
      goto L_08AFEBB8;
    }
L_08AFEBB8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFEBD4u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AFE8C8;
L_08AFEBD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AFEC50;
      }
      goto L_08AFEBE8;
    }
L_08AFEBE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEC40;
      }
      goto L_08AFEC10;
    }
L_08AFEC10:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFEC2Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AFE8C8;
L_08AFEC2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AFEC50;
      }
      goto L_08AFEC40;
    }
L_08AFEC40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AFEC50;
L_08AFEC50:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEC70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08AFECCC;
      }
      goto L_08AFEC9C;
    }
L_08AFEC9C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFED7C;
      }
      goto L_08AFECA4;
    }
L_08AFECA4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFECCC;
      }
      goto L_08AFECAC;
    }
L_08AFECAC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFED7C;
      }
      goto L_08AFECCC;
    }
L_08AFECCC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08AFECE0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08AFECE0u) goto L_08AFECE0;
    return;
L_08AFECE0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AFED10;
      }
      goto L_08AFECF4;
    }
L_08AFECF4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[31] = (0x08AFED04u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFED04u) goto L_08AFED04;
    return;
L_08AFED04:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08AFED10;
L_08AFED10:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFED2C;
      }
      goto L_08AFED1C;
    }
L_08AFED1C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08AFED2C;
L_08AFED2C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFED64;
      }
      goto L_08AFED4C;
    }
L_08AFED4C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AFEE04;
      }
      goto L_08AFED64;
    }
L_08AFED64:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08AFEE04;
      }
      goto L_08AFED74;
    }
L_08AFED74:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AFEE04;
      }
      goto L_08AFED7C;
    }
L_08AFED7C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08AFED90u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08AFED90u) goto L_08AFED90;
    return;
L_08AFED90:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AFEDC0;
      }
      goto L_08AFEDA4;
    }
L_08AFEDA4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[31] = (0x08AFEDB4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFEDB4u) goto L_08AFEDB4;
    return;
L_08AFEDB4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08AFEDC0;
L_08AFEDC0:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEDDC;
      }
      goto L_08AFEDCC;
    }
L_08AFEDCC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08AFEDDC;
L_08AFEDDC:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFEE04;
      }
      goto L_08AFEE00;
    }
L_08AFEE00:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08AFEE04;
L_08AFEE04:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AFEE20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 865u, 0x08AFBC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFEE20u) goto L_08AFEE20;
    return;
L_08AFEE20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
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
L_08AFEE48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFEE94;
      }
      goto L_08AFEE68;
    }
L_08AFEE68:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFEE78u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AFEE48;
L_08AFEE78:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFEE8C;
      }
      goto L_08AFEE84;
    }
L_08AFEE84:
    ctx.gpr[31] = (0x08AFEE8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFEE8Cu) goto L_08AFEE8C;
    return;
L_08AFEE8C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AFEE68;
      }
      goto L_08AFEE94;
    }
L_08AFEE94:
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
L_08AFEEAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AFEF20;
      }
      goto L_08AFEEE8;
    }
L_08AFEEE8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFEF14;
      }
      goto L_08AFEF08;
    }
L_08AFEF08:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFEF18;
      }
      goto L_08AFEF14;
    }
L_08AFEF14:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08AFEF18;
L_08AFEF18:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEEE8;
      }
      goto L_08AFEF20;
    }
L_08AFEF20:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AFEF90;
      }
      goto L_08AFEF28;
    }
L_08AFEF28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEF60;
      }
      goto L_08AFEF50;
    }
L_08AFEF50:
    ctx.gpr[31] = (0x08AFEF58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 898u, 0x08AFBDFCu>(ctx, &aot_mem) && ctx.pc == 0x08AFEF58u) goto L_08AFEF58;
    return;
L_08AFEF58:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AFEF90;
      }
      goto L_08AFEF60;
    }
L_08AFEF60:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFEF7Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AFEC70;
L_08AFEF7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AFEFF8;
      }
      goto L_08AFEF90;
    }
L_08AFEF90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEFE8;
      }
      goto L_08AFEFB8;
    }
L_08AFEFB8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFEFD4u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AFEC70;
L_08AFEFD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AFEFF8;
      }
      goto L_08AFEFE8;
    }
L_08AFEFE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AFEFF8;
L_08AFEFF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF018:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AFF314;
      }
      goto L_08AFF054;
    }
L_08AFF054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[22]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[20] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
        goto L_08AFF1FC;
    }
    goto L_08AFF07C;
L_08AFF07C:
    ctx.gpr[4] = (ctx.gpr[22] - ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08AFF14C;
      }
      goto L_08AFF0A0;
    }
L_08AFF0A0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (ctx.gpr[22] - ctx.gpr[20]);
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AFF0CCu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AFE45C;
L_08AFF0CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[21];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFF0E8;
      }
      goto L_08AFF0DC;
    }
L_08AFF0DC:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AFF100;
      }
      goto L_08AFF0E8;
    }
L_08AFF0E8:
    ctx.gpr[6] = (ctx.gpr[22] - ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AFF0F8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFF0F8u) goto L_08AFF0F8;
    return;
L_08AFF0F8:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
    goto L_08AFF100;
L_08AFF100:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[19] - ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFF124;
      }
      goto L_08AFF114;
    }
L_08AFF114:
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AFF124u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFF124u) goto L_08AFF124;
    return;
L_08AFF124:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AFF144;
      }
      goto L_08AFF134;
    }
L_08AFF134:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08AFF138;
L_08AFF138:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] != ctx.gpr[17]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
        goto L_08AFF138;
    }
    goto L_08AFF144;
L_08AFF144:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF1F4;
      }
      goto L_08AFF14C;
    }
L_08AFF14C:
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
      if (branch_taken) {
          goto L_08AFF17C;
      }
      goto L_08AFF168;
    }
L_08AFF168:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AFF168;
      }
      goto L_08AFF178;
    }
L_08AFF178:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFF17C;
L_08AFF17C:
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    ctx.gpr[20] = (ctx.gpr[22] + ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AFF1A8u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AFE45C;
L_08AFF1A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFF1C4;
      }
      goto L_08AFF1B8;
    }
L_08AFF1B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AFF1DC;
      }
      goto L_08AFF1C4;
    }
L_08AFF1C4:
    ctx.gpr[6] = (ctx.gpr[19] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AFF1D4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFF1D4u) goto L_08AFF1D4;
    return;
L_08AFF1D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_08AFF1DC;
L_08AFF1DC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AFF1F4;
      }
      goto L_08AFF1E4;
    }
L_08AFF1E4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08AFF1E8;
L_08AFF1E8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[17] != ctx.gpr[19]) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
        goto L_08AFF1E8;
    }
    goto L_08AFF1F4;
L_08AFF1F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF314;
      }
      goto L_08AFF1FC;
    }
L_08AFF1FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AFF238;
      }
      goto L_08AFF228;
    }
L_08AFF228:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFF244;
      }
      goto L_08AFF238;
    }
L_08AFF238:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08AFF244;
L_08AFF244:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFF270;
      }
      goto L_08AFF24C;
    }
L_08AFF24C:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[31] = (0x08AFF258u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08AFF258u) goto L_08AFF258;
    return;
L_08AFF258:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08AFF270;
      }
      goto L_08AFF264;
    }
L_08AFF264:
    ctx.gpr[31] = (0x08AFF26Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF26Cu) goto L_08AFF26C;
    return;
L_08AFF26C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AFF270;
L_08AFF270:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFF288;
      }
      goto L_08AFF27C;
    }
L_08AFF27C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08AFF2A0;
      }
      goto L_08AFF288;
    }
L_08AFF288:
    ctx.gpr[21] = (ctx.gpr[17] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AFF298u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFF298u) goto L_08AFF298;
    return;
L_08AFF298:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08AFF2A0;
L_08AFF2A0:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AFF2C0;
    }
    goto L_08AFF2A8;
L_08AFF2A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AFF2A8;
      }
      goto L_08AFF2BC;
    }
L_08AFF2BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFF2C0;
L_08AFF2C0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFF2D4;
      }
      goto L_08AFF2C8;
    }
L_08AFF2C8:
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFF2F0;
      }
      goto L_08AFF2D4;
    }
L_08AFF2D4:
    ctx.gpr[18] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AFF2E8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AFF2E8u) goto L_08AFF2E8;
    return;
L_08AFF2E8:
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AFF2F0;
L_08AFF2F0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFF300;
      }
      goto L_08AFF2F8;
    }
L_08AFF2F8:
    ctx.gpr[31] = (0x08AFF300u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF300u) goto L_08AFF300;
    return;
L_08AFF300:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08AFF314;
L_08AFF314:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF340:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08AFF39C;
      }
      goto L_08AFF36C;
    }
L_08AFF36C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF464;
      }
      goto L_08AFF374;
    }
L_08AFF374:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF39C;
      }
      goto L_08AFF37C;
    }
L_08AFF37C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF464;
      }
      goto L_08AFF39C;
    }
L_08AFF39C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08AFF3B0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08AFF3B0u) goto L_08AFF3B0;
    return;
L_08AFF3B0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AFF3E0;
      }
      goto L_08AFF3C4;
    }
L_08AFF3C4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[31] = (0x08AFF3D4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF3D4u) goto L_08AFF3D4;
    return;
L_08AFF3D4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08AFF3E0;
L_08AFF3E0:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF414;
      }
      goto L_08AFF3EC;
    }
L_08AFF3EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF414;
      }
      goto L_08AFF408;
    }
L_08AFF408:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08AFF414;
L_08AFF414:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFF44C;
      }
      goto L_08AFF434;
    }
L_08AFF434:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AFF504;
      }
      goto L_08AFF44C;
    }
L_08AFF44C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08AFF504;
      }
      goto L_08AFF45C;
    }
L_08AFF45C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AFF504;
      }
      goto L_08AFF464;
    }
L_08AFF464:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08AFF478u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08AFF478u) goto L_08AFF478;
    return;
L_08AFF478:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AFF4A8;
      }
      goto L_08AFF48C;
    }
L_08AFF48C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[31] = (0x08AFF49Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF49Cu) goto L_08AFF49C;
    return;
L_08AFF49C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08AFF4A8;
L_08AFF4A8:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF4DC;
      }
      goto L_08AFF4B4;
    }
L_08AFF4B4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF4DC;
      }
      goto L_08AFF4D0;
    }
L_08AFF4D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08AFF4DC;
L_08AFF4DC:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFF504;
      }
      goto L_08AFF500;
    }
L_08AFF500:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08AFF504;
L_08AFF504:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AFF520u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 865u, 0x08AFBC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF520u) goto L_08AFF520;
    return;
L_08AFF520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
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
L_08AFF548:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFF5D8;
      }
      goto L_08AFF568;
    }
L_08AFF568:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFF578u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AFF548;
L_08AFF578:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08AFF5C0;
      }
      goto L_08AFF58C;
    }
L_08AFF58C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF5C0;
      }
      goto L_08AFF594;
    }
L_08AFF594:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF5C0;
      }
      goto L_08AFF59C;
    }
L_08AFF59C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF5C0;
      }
      goto L_08AFF5A8;
    }
L_08AFF5A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AFF5C0;
      }
      goto L_08AFF5B8;
    }
L_08AFF5B8:
    ctx.gpr[31] = (0x08AFF5C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08AFF5C0u) goto L_08AFF5C0;
    return;
L_08AFF5C0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF5D0;
      }
      goto L_08AFF5C8;
    }
L_08AFF5C8:
    ctx.gpr[31] = (0x08AFF5D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF5D0u) goto L_08AFF5D0;
    return;
L_08AFF5D0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AFF568;
      }
      goto L_08AFF5D8;
    }
L_08AFF5D8:
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
L_08AFF5F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AFF664;
      }
      goto L_08AFF62C;
    }
L_08AFF62C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFF658;
      }
      goto L_08AFF64C;
    }
L_08AFF64C:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFF65C;
      }
      goto L_08AFF658;
    }
L_08AFF658:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08AFF65C;
L_08AFF65C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF62C;
      }
      goto L_08AFF664;
    }
L_08AFF664:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AFF6D4;
      }
      goto L_08AFF66C;
    }
L_08AFF66C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF6A4;
      }
      goto L_08AFF694;
    }
L_08AFF694:
    ctx.gpr[31] = (0x08AFF69Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 898u, 0x08AFBDFCu>(ctx, &aot_mem) && ctx.pc == 0x08AFF69Cu) goto L_08AFF69C;
    return;
L_08AFF69C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AFF6D4;
      }
      goto L_08AFF6A4;
    }
L_08AFF6A4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFF6C0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AFF340;
L_08AFF6C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AFF73C;
      }
      goto L_08AFF6D4;
    }
L_08AFF6D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF72C;
      }
      goto L_08AFF6FC;
    }
L_08AFF6FC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFF718u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AFF340;
L_08AFF718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AFF73C;
      }
      goto L_08AFF72C;
    }
L_08AFF72C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AFF73C;
L_08AFF73C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF75C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AFF798;
      }
      goto L_08AFF790;
    }
L_08AFF790:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFF7CC;
      }
      goto L_08AFF798;
    }
L_08AFF798:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF7A8;
      }
      goto L_08AFF7A0;
    }
L_08AFF7A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF7CC;
      }
      goto L_08AFF7A8;
    }
L_08AFF7A8:
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF7C8;
      }
      goto L_08AFF7B8;
    }
L_08AFF7B8:
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF7B8;
      }
      goto L_08AFF7C8;
    }
L_08AFF7C8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08AFF7CC;
L_08AFF7CC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFF878;
      }
      goto L_08AFF7D4;
    }
L_08AFF7D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFF81C;
      }
      goto L_08AFF7F0;
    }
L_08AFF7F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFF804;
      }
      goto L_08AFF7FC;
    }
L_08AFF7FC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08AFF804;
L_08AFF804:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFF824;
      }
      goto L_08AFF81C;
    }
L_08AFF81C:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AFF824;
L_08AFF824:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFF838;
      }
      goto L_08AFF82C;
    }
L_08AFF82C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFF85C;
      }
      goto L_08AFF838;
    }
L_08AFF838:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFF854;
      }
      goto L_08AFF848;
    }
L_08AFF848:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFF85C;
      }
      goto L_08AFF854;
    }
L_08AFF854:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08AFF85C;
L_08AFF85C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08AFF860;
L_08AFF860:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFF94C;
      }
      goto L_08AFF878;
    }
L_08AFF878:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFF884;
      }
      goto L_08AFF880;
    }
L_08AFF880:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    goto L_08AFF884;
L_08AFF884:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFF89C;
      }
      goto L_08AFF890;
    }
L_08AFF890:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFF8C0;
      }
      goto L_08AFF89C;
    }
L_08AFF89C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFF8B8;
      }
      goto L_08AFF8AC;
    }
L_08AFF8AC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFF8C0;
      }
      goto L_08AFF8B8;
    }
L_08AFF8B8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AFF8C0;
L_08AFF8C0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFF904;
      }
      goto L_08AFF8C8;
    }
L_08AFF8C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF8E0;
      }
      goto L_08AFF8D4;
    }
L_08AFF8D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AFF904;
      }
      goto L_08AFF8E0;
    }
L_08AFF8E0:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[8] == 0u) {
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
        goto L_08AFF904;
    }
    goto L_08AFF8F0;
L_08AFF8F0:
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    goto L_08AFF8F4;
L_08AFF8F4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
        goto L_08AFF8F4;
    }
    goto L_08AFF900;
L_08AFF900:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AFF904;
L_08AFF904:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFF94C;
      }
      goto L_08AFF910;
    }
L_08AFF910:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF928;
      }
      goto L_08AFF91C;
    }
L_08AFF91C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFF94C;
      }
      goto L_08AFF928;
    }
L_08AFF928:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
        goto L_08AFF94C;
    }
    goto L_08AFF938;
L_08AFF938:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AFF93C;
L_08AFF93C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08AFF93C;
    }
    goto L_08AFF948;
L_08AFF948:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AFF94C;
L_08AFF94C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFB34;
      }
      goto L_08AFF958;
    }
L_08AFF958:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AFF964;
L_08AFF964:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFFB28;
      }
      goto L_08AFF96C;
    }
L_08AFF96C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF980;
      }
      goto L_08AFF974;
    }
L_08AFF974:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AFFB28;
      }
      goto L_08AFF980;
    }
L_08AFF980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFFA5C;
      }
      goto L_08AFF98C;
    }
L_08AFF98C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF9B4;
      }
      goto L_08AFF99C;
    }
L_08AFF99C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AFF9B0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 908u, 0x08AFBE84u>(ctx, &aot_mem) && ctx.pc == 0x08AFF9B0u) goto L_08AFF9B0;
    return;
L_08AFF9B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_08AFF9B4;
L_08AFF9B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AFF9CC;
      }
      goto L_08AFF9C0;
    }
L_08AFF9C0:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AFF9F4;
      }
      goto L_08AFF9CC;
    }
L_08AFF9CC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF9E0;
      }
      goto L_08AFF9D4;
    }
L_08AFF9D4:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AFF9F4;
      }
      goto L_08AFF9E0;
    }
L_08AFF9E0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFFA54;
      }
      goto L_08AFF9F4;
    }
L_08AFF9F4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFA08;
      }
      goto L_08AFF9FC;
    }
L_08AFF9FC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AFFA24;
      }
      goto L_08AFFA08;
    }
L_08AFFA08:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFA14;
      }
      goto L_08AFFA10;
    }
L_08AFFA10:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08AFFA14;
L_08AFFA14:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AFFA20u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 916u, 0x08AFBEE0u>(ctx, &aot_mem) && ctx.pc == 0x08AFFA20u) goto L_08AFFA20;
    return;
L_08AFFA20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_08AFFA24;
L_08AFFA24:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFA40;
      }
      goto L_08AFFA3C;
    }
L_08AFFA3C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08AFFA40;
L_08AFFA40:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AFFA4Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 908u, 0x08AFBE84u>(ctx, &aot_mem) && ctx.pc == 0x08AFFA4Cu) goto L_08AFFA4C;
    return;
L_08AFFA4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFB28;
      }
      goto L_08AFFA54;
    }
L_08AFFA54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFB20;
      }
      goto L_08AFFA5C;
    }
L_08AFFA5C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFA80;
      }
      goto L_08AFFA68;
    }
L_08AFFA68:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AFFA7Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 916u, 0x08AFBEE0u>(ctx, &aot_mem) && ctx.pc == 0x08AFFA7Cu) goto L_08AFFA7C;
    return;
L_08AFFA7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_08AFFA80;
L_08AFFA80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AFFA98;
      }
      goto L_08AFFA8C;
    }
L_08AFFA8C:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AFFAC0;
      }
      goto L_08AFFA98;
    }
L_08AFFA98:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFAAC;
      }
      goto L_08AFFAA0;
    }
L_08AFFAA0:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AFFAC0;
      }
      goto L_08AFFAAC;
    }
L_08AFFAAC:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFFB20;
      }
      goto L_08AFFAC0;
    }
L_08AFFAC0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFAD4;
      }
      goto L_08AFFAC8;
    }
L_08AFFAC8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AFFAF0;
      }
      goto L_08AFFAD4;
    }
L_08AFFAD4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFAE0;
      }
      goto L_08AFFADC;
    }
L_08AFFADC:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08AFFAE0;
L_08AFFAE0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AFFAECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 908u, 0x08AFBE84u>(ctx, &aot_mem) && ctx.pc == 0x08AFFAECu) goto L_08AFFAEC;
    return;
L_08AFFAEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_08AFFAF0;
L_08AFFAF0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFB0C;
      }
      goto L_08AFFB08;
    }
L_08AFFB08:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08AFFB0C;
L_08AFFB0C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AFFB18u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 916u, 0x08AFBEE0u>(ctx, &aot_mem) && ctx.pc == 0x08AFFB18u) goto L_08AFFB18;
    return;
L_08AFFB18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFB28;
      }
      goto L_08AFFB20;
    }
L_08AFFB20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF964;
      }
      goto L_08AFFB28;
    }
L_08AFFB28:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFB34;
      }
      goto L_08AFFB30;
    }
L_08AFFB30:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08AFFB34;
L_08AFFB34:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08AFFB5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AFFD24;
      }
      goto L_08AFFB98;
    }
L_08AFFB98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFBF0;
      }
      goto L_08AFFBA4;
    }
L_08AFFBA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFC0C;
      }
      goto L_08AFFBCC;
    }
L_08AFFBCC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFFBE8u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AFE8C8;
L_08AFFBE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFF6C;
      }
      goto L_08AFFBF0;
    }
L_08AFFBF0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AFFC00u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08AFEB04;
L_08AFFC00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFFF6C;
      }
      goto L_08AFFC0C;
    }
L_08AFFC0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFCA0;
      }
      goto L_08AFFC30;
    }
L_08AFFC30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFFC3Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 888u, 0x08AFBD8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFC3Cu) goto L_08AFFC3C;
    return;
L_08AFFC3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFFC7C;
      }
      goto L_08AFFC4C;
    }
L_08AFFC4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFCAC;
      }
      goto L_08AFFC74;
    }
L_08AFFC74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFD08;
      }
      goto L_08AFFC7C;
    }
L_08AFFC7C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AFFC98u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08AFE8C8;
L_08AFFC98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFF6C;
      }
      goto L_08AFFCA0;
    }
L_08AFFCA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFFF6C;
      }
      goto L_08AFFCAC;
    }
L_08AFFCAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFCE4;
      }
      goto L_08AFFCC0;
    }
L_08AFFCC0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AFFCDCu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08AFE8C8;
L_08AFFCDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFF6C;
      }
      goto L_08AFFCE4;
    }
L_08AFFCE4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFFD00u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AFE8C8;
L_08AFFD00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFF6C;
      }
      goto L_08AFFD08;
    }
L_08AFFD08:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AFFD18u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08AFEB04;
L_08AFFD18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFFF6C;
      }
      goto L_08AFFD24;
    }
L_08AFFD24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFFDAC;
      }
      goto L_08AFFD34;
    }
L_08AFFD34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFD90;
      }
      goto L_08AFFD64;
    }
L_08AFFD64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AFFD88u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08AFE8C8;
L_08AFFD88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFF6C;
      }
      goto L_08AFFD90;
    }
L_08AFFD90:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AFFDA0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08AFEB04;
L_08AFFDA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFFF6C;
      }
      goto L_08AFFDAC;
    }
L_08AFFDAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFFDB8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 898u, 0x08AFBDFCu>(ctx, &aot_mem) && ctx.pc == 0x08AFFDB8u) goto L_08AFFDB8;
    return;
L_08AFFDB8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFE64;
      }
      goto L_08AFFDE0;
    }
L_08AFFDE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFE64;
      }
      goto L_08AFFE08;
    }
L_08AFFE08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFE40;
      }
      goto L_08AFFE1C;
    }
L_08AFFE1C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AFFE38u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08AFE8C8;
L_08AFFE38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFF6C;
      }
      goto L_08AFFE40;
    }
L_08AFFE40:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFFE5Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AFE8C8;
L_08AFFE5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFF6C;
      }
      goto L_08AFFE64;
    }
L_08AFFE64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFFE70u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 888u, 0x08AFBD8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFE70u) goto L_08AFFE70;
    return;
L_08AFFE70:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AFFE98;
      }
      goto L_08AFFE7C;
    }
L_08AFFE7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(110), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    goto L_08AFFE98;
L_08AFFE98:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFF3C;
      }
      goto L_08AFFEA0;
    }
L_08AFFEA0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFF3C;
      }
      goto L_08AFFEA8;
    }
L_08AFFEA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AFFEE0;
      }
      goto L_08AFFEB8;
    }
L_08AFFEB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFF3C;
      }
      goto L_08AFFEE0;
    }
L_08AFFEE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFF18;
      }
      goto L_08AFFEF4;
    }
L_08AFFEF4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AFFF10u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08AFE8C8;
L_08AFFF10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFF6C;
      }
      goto L_08AFFF18;
    }
L_08AFFF18:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFFF34u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AFE8C8;
L_08AFFF34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFF6C;
      }
      goto L_08AFFF3C;
    }
L_08AFFF3C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFFF50;
      }
      goto L_08AFFF44;
    }
L_08AFFF44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFFF6C;
      }
      goto L_08AFFF50;
    }
L_08AFFF50:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AFFF60u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08AFEB04;
L_08AFFF60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFFF6C;
      }
      goto L_08AFFF6C;
    }
L_08AFFF6C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFFF8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 20u, 0x08B00154u>(ctx, &aot_mem); return;
      }
      goto L_08AFFFC8;
    }
L_08AFFFC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 3u, 0x08B00020u>(ctx, &aot_mem); return;
      }
      goto L_08AFFFD4;
    }
L_08AFFFD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B0003Cu>(ctx, &aot_mem); return;
      }
      goto L_08AFFFFC;
    }
L_08AFFFFC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B00000u; return;
}

void recomp_unit_0190(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0190_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_190(Runtime &runtime) {
    runtime.register_generated_unit(190u, 0x08AFC000u, 16384u, &recomp_unit_0190, &recomp_unit_0190_entry);
    runtime.register_function(0x08AFC000u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC010u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC020u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC030u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC048u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC04Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC058u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC060u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC06Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC074u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC080u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC088u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC090u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC098u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC0A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC0ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC0B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC0BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC0C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC0CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC0D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC0E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC0E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC0ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC0F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC11Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC15Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC17Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC18Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC1B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC1C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC1D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC1E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC1F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC208u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC218u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC238u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC248u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC258u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC260u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC288u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC298u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC2ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC2BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC2CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC2F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC300u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC30Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC31Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC324u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC348u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC358u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC368u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC370u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC388u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC398u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC3A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC3ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC3B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC3C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC3C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC3CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC3F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC404u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC418u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC420u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC448u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC458u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC464u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC478u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC480u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC4A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC4B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC4C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC4D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC4DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC4F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC4F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC508u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC538u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC58Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC594u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC5A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC5A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC5ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC5E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC5F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC60Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC614u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC638u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC640u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC64Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC654u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC658u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC694u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC6A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC6B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC6C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC6E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC6ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC6F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC700u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC704u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC740u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC750u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC764u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC76Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC794u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC804u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC810u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC818u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC82Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC838u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC840u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC844u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC854u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC860u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC868u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC86Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC874u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC884u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC890u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC898u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC900u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC904u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC90Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC910u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC924u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC92Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC938u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC940u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC94Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC954u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC95Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC964u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC96Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC978u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC980u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC988u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC990u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC998u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA1Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA78u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCAA8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCAB4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCAC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCAC4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCAD8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCAFCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB24u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB30u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB3Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB4Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB68u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB80u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB8Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB94u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBA8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBB0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBBCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBC4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBCCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBD4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBE0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC00u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC08u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC28u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC6Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC80u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCD8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCE8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCF8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD1Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD2Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD38u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD40u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD48u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD54u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCDB0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCDBCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCDC8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCDD8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCDE0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCDE8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCDF0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE04u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE2Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE50u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCEA8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCEB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCEC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCECCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCED4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCED8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCEF8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF08u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF18u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF24u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF2Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF3Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF54u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF68u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCFA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCFB4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCFECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCFFCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD00Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD018u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD03Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD078u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD0A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD0C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD0F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD100u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD10Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD11Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD124u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD138u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD148u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD158u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD15Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD168u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD170u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD18Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD19Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD1A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD1CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD1DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD1E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD1F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD200u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD208u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD20Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD218u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD220u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD24Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD25Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD268u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD270u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD27Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD288u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD290u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD294u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD2A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD2ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD2BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD2C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD2CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD2E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD2E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD2ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD2F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD30Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD314u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD31Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD324u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD338u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD364u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD384u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD394u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD3A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD3ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD3D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD3D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD3F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD40Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD420u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD424u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD430u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD438u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD444u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD44Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD458u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD460u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD46Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD474u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD47Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD48Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD494u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD49Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD4A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD4A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD4B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD4C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD4C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD4D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD4E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD4E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD4F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD4F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD500u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD514u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD554u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD560u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD568u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD59Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD5A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD5BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD5C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD5D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD5DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD5E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD5F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD5F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD604u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD60Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD618u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD620u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD634u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD650u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD660u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD664u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD68Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD6A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD6B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD6ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD6FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD700u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD718u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD740u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD744u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD754u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD768u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD770u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD780u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD790u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD7B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD7E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD808u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD820u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD828u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD834u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD850u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD874u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD898u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD89Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD8C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD8CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD8E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD910u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD918u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD92Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD960u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD96Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD9ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD9B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD9DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD9E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD9FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA14u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA30u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA3Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDAA8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDAC4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDACCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDAD8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDAECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB24u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB2Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB38u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB44u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB68u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB8Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDBA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDBB4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDBC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDBCCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDBF8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC28u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC2Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC50u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC88u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCBCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCD0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCE8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCF0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD0Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD1Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD20u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD28u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD30u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD44u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD48u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD54u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD68u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDB0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDC4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDCCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDD4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDE4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDFCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE04u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE08u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE14u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE1Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE24u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE38u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE3Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE58u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE6Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE88u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDEA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDEBCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDEC8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDED0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDED4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDEE0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDEECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF00u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF08u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF18u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF24u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF34u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF40u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF4Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF54u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF60u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF94u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDFB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE018u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE020u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE058u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE05Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE064u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE080u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE10Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE128u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE144u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE160u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE168u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE170u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE178u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE180u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE188u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE190u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE198u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE1A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE1A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE1B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE1B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE1C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE1C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE1D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE1D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE1E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE1E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE1F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE21Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE224u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE234u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE240u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE248u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE258u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE260u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE27Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE2F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE2F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE330u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE334u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE33Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE368u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE384u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE3ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE3B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE3E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE418u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE438u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE450u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE45Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE470u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE490u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE4A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE4ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE4B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE4BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE4D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE4F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE504u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE510u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE518u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE520u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE538u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE558u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE560u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE570u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE580u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE584u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE58Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE608u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE618u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE628u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE630u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE63Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE64Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE654u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE658u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE668u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE69Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE708u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE718u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE71Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE724u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE728u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE754u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE75Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE77Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE780u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE820u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE824u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE83Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE84Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE868u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE874u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE87Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE880u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE8A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE8C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE8F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE8FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE904u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE924u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE938u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE94Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE95Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE968u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE974u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE984u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE9A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE9BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE9CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE9D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE9E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE9FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA0Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA18u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA24u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA34u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA58u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA78u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEAA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEAC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEAD0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEADCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEAE4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEAECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB04u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB40u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB60u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB6Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB78u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB80u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEBA8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEBB0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEBB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEBD4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEBE8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC10u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC2Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC40u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC50u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFECA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFECACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFECCCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFECE0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFECF4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED04u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED10u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED1Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED2Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED4Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEDA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEDB4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEDC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEDCCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEDDCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE00u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE04u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE20u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE48u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE68u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE78u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE8Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE94u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEEACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEEE8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF08u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF14u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF18u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF20u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF28u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF50u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF58u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF60u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEFB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEFD4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEFE8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEFF8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF018u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF054u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF07Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF100u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF114u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF124u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF134u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF138u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF144u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF14Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF168u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF178u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF17Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF228u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF238u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF244u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF24Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF258u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF264u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF26Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF270u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF27Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF288u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF298u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF2A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF2A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF2BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF2C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF2C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF2D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF2E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF2F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF2F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF300u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF314u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF340u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF36Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF374u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF37Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF39Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF3B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF3C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF3D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF3E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF3ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF408u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF414u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF434u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF44Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF45Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF464u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF478u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF48Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF49Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF4A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF4B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF4D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF4DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF500u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF504u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF520u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF548u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF568u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF578u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF58Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF594u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF59Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF62Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF64Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF658u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF65Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF664u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF66Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF694u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF69Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF718u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF72Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF73Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF75Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF790u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF798u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF804u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF81Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF824u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF82Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF838u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF848u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF854u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF85Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF860u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF878u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF880u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF884u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF890u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF89Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF900u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF904u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF910u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF91Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF928u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF938u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF93Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF948u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF94Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF958u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF964u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF96Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF974u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF980u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF98Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF99Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF9B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF9B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF9C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF9CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF9D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF9E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF9F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF9FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA08u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA10u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA14u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA20u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA24u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA3Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA40u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA4Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA54u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA68u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA80u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA8Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFAA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFAACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFAC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFAC8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFAD4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFADCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFAE0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFAECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFAF0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB08u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB0Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB18u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB20u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB28u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB30u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB34u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBCCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBE8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBF0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC00u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC0Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC30u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC3Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC4Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFCA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFCACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFCC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFCDCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFCE4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD00u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD08u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD18u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD24u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD34u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD88u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFDA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFDACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFDB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFDE0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE08u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE1Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE38u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE40u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFEA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFEA8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFEB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFEE0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFEF4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF10u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF18u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF34u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF3Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF44u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF50u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF60u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF6Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF8Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFFC8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFFD4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFFFCu, &recomp_unit_0190, "recomp_unit_0190");
}
} // namespace psprecomp
