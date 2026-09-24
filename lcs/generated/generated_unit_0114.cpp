#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0114[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0,
    7, 8, 0, 0, 9, 0, 0, 10, 0, 0, 11, 0, 12, 0, 13, 0, 14, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0,
    0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 22, 23, 0, 0, 24, 0, 0, 25, 0, 0, 26,
    0, 27, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 0, 41, 0, 42, 0, 43, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 50, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0,
    60, 0, 0, 0, 61, 0, 62, 0, 63, 64, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 69,
    0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 73, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0,
    0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 82, 0, 83, 0, 0,
    84, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0,
    103, 0, 104, 0, 0, 105, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 113, 0, 0, 0, 0, 114, 0,
    0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 118, 0, 119, 120, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0,
    123, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127,
    0, 128, 0, 129, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 0,
    142, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0,
    0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0,
    0, 0, 155, 0, 156, 0, 157, 0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 163, 164, 0, 0, 0, 0,
    0, 165, 0, 0, 166, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 169, 0, 0, 170, 0, 0, 0, 171, 0, 172, 0, 0, 0, 173, 0, 174,
    175, 0, 0, 176, 0, 0, 0, 177, 0, 178, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0,
    0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 0, 0,
    0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 0, 198, 0, 199, 0, 200, 0, 0, 0, 201, 0, 202, 0, 203, 204, 0, 0,
    0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 211, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0,
    0, 218, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 222, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0,
    0, 226, 0, 227, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 0,
    237, 238, 0, 239, 0, 240, 0, 0, 0, 241, 0, 242, 0, 0, 243, 0, 244, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0,
    0, 248, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 252, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0,
    0, 0, 256, 0, 257, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 262, 0, 263, 0, 264, 0, 265, 0, 266, 0,
    0, 267, 0, 268, 0, 269, 0, 0, 270, 0, 271, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 276,
    0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 281, 0, 282, 0, 283, 0, 284, 0, 285, 0, 0, 286, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0,
    0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 296, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 305, 0,
    306, 0, 0, 0, 307, 0, 308, 0, 309, 0, 310, 0, 311, 0, 0, 0, 312, 313, 0, 314, 0, 315, 0, 0, 0, 316, 0, 317, 0, 0, 318, 0,
    319, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0,
    0, 0, 326, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 332, 0,
    333, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 338, 0, 339, 0, 340, 0, 341, 0, 342, 0, 0, 0, 343, 0,
    344, 0, 345, 0, 0, 0, 0, 346, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 352,
    0, 353, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 358, 0, 359, 0, 360, 0, 361, 0, 362, 0, 0, 0, 363,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 366, 0, 367, 0, 368, 0, 369, 0, 0, 370, 0, 371, 0,
    0, 372, 0, 373, 0, 374, 0, 375, 0, 0, 0, 376, 0, 377, 0, 378, 0, 379, 0, 0, 380, 0, 381, 0, 382, 0, 0, 0, 383, 0, 0, 384,
    0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 387, 0, 0, 0, 0, 0, 388, 0, 389, 390, 0, 391, 0, 392, 0, 393, 0, 394, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 397, 0, 398, 0, 0, 0, 399, 0, 400, 0, 0, 401, 0, 402, 0, 403, 0, 0, 404, 0,
    405, 406, 0, 0, 0, 407, 0, 408, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 412, 0, 0, 413, 0, 414, 0, 0, 0, 415, 0, 416,
    0, 0, 0, 417, 0, 418, 0, 0, 419, 0, 420, 0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 425, 426,
    0, 427, 0, 428, 0, 429, 0, 0, 430, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 434, 0, 435, 0, 436, 0, 437, 0, 438, 0,
    0, 439, 0, 440, 0, 441, 0, 442, 0, 0, 443, 0, 444, 0, 0, 0, 445, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0, 448, 449, 0, 0, 450,
    0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 453, 0, 0, 454, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0,
    0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 461, 0, 0, 0, 0, 0, 462, 0, 463, 464, 0, 465, 0, 0,
    466, 0, 467, 0, 468, 469, 0, 0, 0, 0, 470, 0, 0, 471, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 475, 0, 0, 476, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 479, 480, 0, 0, 481, 0, 0, 482, 0, 483, 0, 484, 0, 485, 0, 486,
    0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 489, 0, 490, 0, 491, 0, 492, 0, 0, 493, 0, 494, 0, 0, 0, 0, 0, 495,
    0, 496, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 502, 0, 0,
    0, 503, 0, 504, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 509, 0, 0,
    0, 0, 0, 0, 0, 510, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 515, 0, 0, 0,
    0, 0, 0, 0, 0, 516, 0, 0, 517, 0, 518, 0, 0, 519, 0, 0, 520, 0, 0, 521, 0, 522, 0, 0, 0, 0, 0, 0, 0, 523, 0, 524,
    0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 527, 0, 0, 0, 528, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 531,
    0, 0, 532, 0, 0, 533, 534, 0, 535, 0, 0, 0, 536, 537, 0, 538, 0, 0, 539, 0, 0, 0, 540, 541, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0,
    544, 0, 0, 545, 0, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0,
    0, 550, 0, 0, 551, 0, 0, 0, 0, 0, 552, 0, 553, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 556, 0, 0, 557, 0, 558,
    0, 0, 559, 0, 560, 0, 0, 0, 561, 0, 562, 0, 563, 0, 0, 564, 0, 565, 0, 0, 566, 0, 0, 567, 0, 0, 0, 568, 0, 569, 570, 0,
    571, 0, 572, 0, 573, 0, 574, 0, 575, 0, 576, 0, 577, 0, 0, 0, 0, 578, 0, 579, 0, 580, 0, 0, 0, 0, 581, 0, 582, 0, 583, 0,
    584, 0, 585, 0, 0, 0, 0, 0, 586, 0, 587, 0, 588, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 591, 0, 592, 0, 593, 0, 594, 0,
    595, 0, 0, 0, 596, 0, 0, 597, 0, 598, 0, 0, 0, 0, 599, 0, 600, 0, 601, 0, 602, 0, 0, 603, 0, 604, 0, 0, 0, 0, 605, 0,
    0, 606, 0, 0, 607, 0, 608, 0, 0, 0, 609, 0, 0, 610, 0, 611, 0, 0, 0, 0, 612, 0, 613, 0, 614, 0, 0, 0, 0, 0, 615, 0,
    616, 0, 617, 0, 0, 0, 0, 618, 0, 0, 619, 0, 620, 0, 621, 0, 622, 0, 623, 0, 624, 0, 0, 0, 625, 0, 626, 0, 0, 0, 627, 0,
    628, 0, 0, 629, 0, 630, 0, 631, 0, 0, 0, 632, 0, 0, 0, 0, 0, 633, 0, 0, 634, 0, 635, 0, 0, 0, 636, 0, 0, 0, 0, 0,
    637, 0, 638, 0, 639, 0, 640, 0, 0, 0, 641, 0, 0, 0, 0, 0, 642, 0, 643, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 0, 0, 646,
    0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 653, 0, 0, 654, 0, 0,
    0, 655, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 659, 0,
    0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 0, 663, 0, 0, 0, 0, 0, 664, 0, 665, 0, 0, 0, 666, 0, 0, 0, 0,
    667, 0, 0, 0, 668, 0, 0, 669, 0, 670, 0, 0, 0, 671, 0, 672, 0, 673, 0, 674, 0, 0, 0, 0, 0, 675, 0, 0, 676, 0, 0, 0,
    0, 0, 677, 0, 678, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0, 0, 681, 0, 0, 0, 682, 0, 0, 683, 684, 0, 0,
    0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 688, 0, 0, 0, 689, 0, 0, 0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693,
    0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 695, 696, 0, 0, 0, 697, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0, 702, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 704, 0, 705, 0, 706, 707, 0, 0, 708, 0,
    0, 0, 0, 0, 0, 709, 0, 710, 0, 0, 711, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 714, 0,
    0, 715, 0, 0, 716, 0, 717, 0, 0, 0, 0, 0, 718, 0, 0, 0, 719, 0, 0, 0, 0, 0, 720, 0, 0, 721, 0, 0, 0, 0, 0, 0,
    0, 0, 722, 0, 0, 0, 0, 0, 0, 723, 0, 0, 724, 725, 0, 726, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0,
    0, 729, 0, 0, 0, 730, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 733, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0, 736, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 741, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 744, 0, 0, 0, 0, 745, 746,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0,
    0, 750, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 753, 0, 0, 754, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 757, 0, 0, 758, 0, 0, 759, 0, 0, 0, 760, 0, 761, 0, 762, 0, 0, 0, 0, 0, 763, 0,
    0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0, 769, 0, 0, 0, 770, 0, 0, 0, 0, 0,
    0, 0, 771, 0, 0, 772, 0, 773, 0, 774, 775, 0, 776, 0, 0, 0, 777, 0, 778, 0, 779, 0, 780, 0, 781, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 782, 0, 0, 0, 783, 0, 784, 0, 0, 785, 0, 0, 786, 0, 0, 0, 787, 0, 788, 0, 0, 789, 0, 790, 0, 0, 0, 0,
    791, 0, 0, 0, 792, 0, 793, 0, 0, 794, 0, 795, 0, 0, 0, 796, 0, 0, 797, 0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 799, 0, 0, 0, 0, 0, 800, 0, 0, 0, 0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0,
    803, 0, 804, 0, 0, 805, 0, 0, 0, 806, 0, 807, 0, 808, 0, 0, 809, 0, 810, 0, 0, 0, 811, 0, 0, 0, 812, 0, 0, 0, 0, 0,
    813, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 816, 0, 0, 0, 817, 0, 0, 818, 0, 0, 0,
    0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 821, 0, 0, 822, 0, 0, 0, 0,
    0, 823, 0, 0, 0, 0, 824, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 826, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 827, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 830, 0, 0, 0, 0,
    0, 831, 832, 0, 0, 0, 833, 0, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 835, 0, 0, 0, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0,
    0, 0, 0, 837, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 838, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 839, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 0, 0, 841, 0, 0, 0, 0, 0, 0, 842, 0, 0,
    0, 0, 0, 0, 0, 0, 843, 0, 0, 0, 0, 0, 0, 0, 0, 0, 844, 0, 0, 0, 0, 0, 0, 0, 0, 0, 845, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 846, 0, 0, 0, 0, 0, 0, 0, 0, 0, 847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 848, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 849, 0, 0, 0, 850, 0, 0, 0, 0, 851, 0, 0, 852, 0, 853, 0, 854, 0, 0, 0,
    855, 0, 0, 856, 0, 857, 0, 0, 0, 0, 0, 0, 0, 858, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 859, 0, 860, 0, 0, 0, 861, 0,
    0, 0, 862, 0, 0, 0, 0, 0, 0, 863, 0, 0, 0, 0, 0, 0, 864, 0, 0, 865, 0, 0, 866, 0, 0, 867, 0, 0, 0, 0, 868, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 869, 0, 0, 0, 0, 0, 0, 870, 0, 0, 0, 0, 0, 871, 0, 872, 0, 0,
    873, 0, 0, 874, 0, 0, 875, 0, 0, 0, 876, 0, 0, 0, 0, 877, 0, 0, 0, 878, 0, 0, 0, 0, 0, 879, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 880, 0, 0, 0, 0, 0, 0, 0, 881, 0, 0, 882, 0, 0, 0, 0, 883, 0, 884, 0, 885, 0, 0, 0, 0, 0, 0, 886, 0,
    0, 0, 0, 887, 0, 0, 0, 0, 888, 0, 0, 0, 0, 0, 0, 0, 889, 0, 0, 0, 890, 0, 0, 0, 891, 0, 0, 0, 0, 0, 0, 892,
    0, 0, 0, 893, 0, 894, 0, 895, 0, 0, 896, 0, 0, 0, 0, 0, 0, 897, 0, 0, 898, 899, 0, 0, 0, 0, 900, 0, 0, 0, 0, 0,
    0, 901, 0, 0, 0, 0, 0, 0, 902, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 903, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    904, 0, 0, 905, 0, 0, 0, 906, 0, 0, 907, 0, 908, 0, 0, 0, 0, 909, 0, 910, 0, 911, 0, 0, 912, 0, 913, 0, 0, 914, 0, 915,
    0, 916, 0, 917, 0, 0, 0, 918, 0, 0, 0, 0, 0, 0, 0, 919, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 920, 0, 0,
    0, 0, 921, 0, 922, 0, 0, 0, 923, 0, 924, 0, 0, 925, 0, 926, 0, 0, 0, 0, 927, 0, 928, 0, 0, 0, 929, 0, 0, 0, 0, 0,
    0, 0, 930, 0, 0, 0, 0, 0, 0, 0, 0, 931, 0, 0, 932, 0, 933, 0, 0, 934, 0, 0, 935, 0, 936, 0, 0, 0, 0, 0, 0, 937,
};
void recomp_unit_0114_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089CC000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0114[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089CC000;
    case 2u: goto L_089CC018;
    case 3u: goto L_089CC02C;
    case 4u: goto L_089CC044;
    case 5u: goto L_089CC060;
    case 6u: goto L_089CC078;
    case 7u: goto L_089CC080;
    case 8u: goto L_089CC084;
    case 9u: goto L_089CC090;
    case 10u: goto L_089CC09C;
    case 11u: goto L_089CC0A8;
    case 12u: goto L_089CC0B0;
    case 13u: goto L_089CC0B8;
    case 14u: goto L_089CC0C0;
    case 15u: goto L_089CC0D0;
    case 16u: goto L_089CC0DC;
    case 17u: goto L_089CC0F4;
    case 18u: goto L_089CC108;
    case 19u: goto L_089CC124;
    case 20u: goto L_089CC134;
    case 21u: goto L_089CC14C;
    case 22u: goto L_089CC154;
    case 23u: goto L_089CC158;
    case 24u: goto L_089CC164;
    case 25u: goto L_089CC170;
    case 26u: goto L_089CC17C;
    case 27u: goto L_089CC184;
    case 28u: goto L_089CC18C;
    case 29u: goto L_089CC194;
    case 30u: goto L_089CC1A4;
    case 31u: goto L_089CC1BC;
    case 32u: goto L_089CC1D0;
    case 33u: goto L_089CC200;
    case 34u: goto L_089CC23C;
    case 35u: goto L_089CC250;
    case 36u: goto L_089CC260;
    case 37u: goto L_089CC270;
    case 38u: goto L_089CC298;
    case 39u: goto L_089CC2A0;
    case 40u: goto L_089CC2A8;
    case 41u: goto L_089CC2B4;
    case 42u: goto L_089CC2BC;
    case 43u: goto L_089CC2C4;
    case 44u: goto L_089CC2C8;
    case 45u: goto L_089CC2D0;
    case 46u: goto L_089CC2D8;
    case 47u: goto L_089CC2E0;
    case 48u: goto L_089CC2E8;
    case 49u: goto L_089CC300;
    case 50u: goto L_089CC314;
    case 51u: goto L_089CC320;
    case 52u: goto L_089CC328;
    case 53u: goto L_089CC348;
    case 54u: goto L_089CC350;
    case 55u: goto L_089CC378;
    case 56u: goto L_089CC390;
    case 57u: goto L_089CC3C4;
    case 58u: goto L_089CC3CC;
    case 59u: goto L_089CC3EC;
    case 60u: goto L_089CC400;
    case 61u: goto L_089CC410;
    case 62u: goto L_089CC418;
    case 63u: goto L_089CC420;
    case 64u: goto L_089CC424;
    case 65u: goto L_089CC430;
    case 66u: goto L_089CC448;
    case 67u: goto L_089CC45C;
    case 68u: goto L_089CC468;
    case 69u: goto L_089CC47C;
    case 70u: goto L_089CC490;
    case 71u: goto L_089CC49C;
    case 72u: goto L_089CC4AC;
    case 73u: goto L_089CC4C0;
    case 74u: goto L_089CC4C4;
    case 75u: goto L_089CC4EC;
    case 76u: goto L_089CC4F4;
    case 77u: goto L_089CC508;
    case 78u: goto L_089CC520;
    case 79u: goto L_089CC52C;
    case 80u: goto L_089CC554;
    case 81u: goto L_089CC55C;
    case 82u: goto L_089CC56C;
    case 83u: goto L_089CC574;
    case 84u: goto L_089CC580;
    case 85u: goto L_089CC590;
    case 86u: goto L_089CC5A4;
    case 87u: goto L_089CC5B4;
    case 88u: goto L_089CC5C4;
    case 89u: goto L_089CC5D4;
    case 90u: goto L_089CC5E8;
    case 91u: goto L_089CC608;
    case 92u: goto L_089CC61C;
    case 93u: goto L_089CC630;
    case 94u: goto L_089CC640;
    case 95u: goto L_089CC648;
    case 96u: goto L_089CC658;
    case 97u: goto L_089CC680;
    case 98u: goto L_089CC6A0;
    case 99u: goto L_089CC6B8;
    case 100u: goto L_089CC6C8;
    case 101u: goto L_089CC6D4;
    case 102u: goto L_089CC6E8;
    case 103u: goto L_089CC700;
    case 104u: goto L_089CC708;
    case 105u: goto L_089CC714;
    case 106u: goto L_089CC718;
    case 107u: goto L_089CC738;
    case 108u: goto L_089CC768;
    case 109u: goto L_089CC7A4;
    case 110u: goto L_089CC7B4;
    case 111u: goto L_089CC7D4;
    case 112u: goto L_089CC7DC;
    case 113u: goto L_089CC7E4;
    case 114u: goto L_089CC7F8;
    case 115u: goto L_089CC804;
    case 116u: goto L_089CC838;
    case 117u: goto L_089CC840;
    case 118u: goto L_089CC848;
    case 119u: goto L_089CC850;
    case 120u: goto L_089CC854;
    case 121u: goto L_089CC864;
    case 122u: goto L_089CC86C;
    case 123u: goto L_089CC880;
    case 124u: goto L_089CC888;
    case 125u: goto L_089CC89C;
    case 126u: goto L_089CC8C8;
    case 127u: goto L_089CC8FC;
    case 128u: goto L_089CC904;
    case 129u: goto L_089CC90C;
    case 130u: goto L_089CC918;
    case 131u: goto L_089CC928;
    case 132u: goto L_089CC94C;
    case 133u: goto L_089CC95C;
    case 134u: goto L_089CC994;
    case 135u: goto L_089CC9A0;
    case 136u: goto L_089CC9A8;
    case 137u: goto L_089CC9C4;
    case 138u: goto L_089CC9CC;
    case 139u: goto L_089CC9D8;
    case 140u: goto L_089CC9E4;
    case 141u: goto L_089CC9EC;
    case 142u: goto L_089CCA00;
    case 143u: goto L_089CCA0C;
    case 144u: goto L_089CCA1C;
    case 145u: goto L_089CCA2C;
    case 146u: goto L_089CCA34;
    case 147u: goto L_089CCA48;
    case 148u: goto L_089CCA74;
    case 149u: goto L_089CCA84;
    case 150u: goto L_089CCA8C;
    case 151u: goto L_089CCA94;
    case 152u: goto L_089CCAB0;
    case 153u: goto L_089CCAE8;
    case 154u: goto L_089CCAF4;
    case 155u: goto L_089CCB08;
    case 156u: goto L_089CCB10;
    case 157u: goto L_089CCB18;
    case 158u: goto L_089CCB20;
    case 159u: goto L_089CCB2C;
    case 160u: goto L_089CCB3C;
    case 161u: goto L_089CCB44;
    case 162u: goto L_089CCB5C;
    case 163u: goto L_089CCB68;
    case 164u: goto L_089CCB6C;
    case 165u: goto L_089CCB84;
    case 166u: goto L_089CCB90;
    case 167u: goto L_089CCB94;
    case 168u: goto L_089CCBBC;
    case 169u: goto L_089CCBC0;
    case 170u: goto L_089CCBCC;
    case 171u: goto L_089CCBDC;
    case 172u: goto L_089CCBE4;
    case 173u: goto L_089CCBF4;
    case 174u: goto L_089CCBFC;
    case 175u: goto L_089CCC00;
    case 176u: goto L_089CCC0C;
    case 177u: goto L_089CCC1C;
    case 178u: goto L_089CCC24;
    case 179u: goto L_089CCC34;
    case 180u: goto L_089CCC40;
    case 181u: goto L_089CCC50;
    case 182u: goto L_089CCC64;
    case 183u: goto L_089CCC74;
    case 184u: goto L_089CCC84;
    case 185u: goto L_089CCC90;
    case 186u: goto L_089CCC9C;
    case 187u: goto L_089CCCB8;
    case 188u: goto L_089CCCC0;
    case 189u: goto L_089CCCD0;
    case 190u: goto L_089CCCD8;
    case 191u: goto L_089CCCE0;
    case 192u: goto L_089CCCE8;
    case 193u: goto L_089CCCF0;
    case 194u: goto L_089CCD0C;
    case 195u: goto L_089CCD18;
    case 196u: goto L_089CCD24;
    case 197u: goto L_089CCD34;
    case 198u: goto L_089CCD40;
    case 199u: goto L_089CCD48;
    case 200u: goto L_089CCD50;
    case 201u: goto L_089CCD60;
    case 202u: goto L_089CCD68;
    case 203u: goto L_089CCD70;
    case 204u: goto L_089CCD74;
    case 205u: goto L_089CCD88;
    case 206u: goto L_089CCD90;
    case 207u: goto L_089CCDC0;
    case 208u: goto L_089CCE08;
    case 209u: goto L_089CCE18;
    case 210u: goto L_089CCE24;
    case 211u: goto L_089CCE88;
    case 212u: goto L_089CCE90;
    case 213u: goto L_089CCE98;
    case 214u: goto L_089CCEB4;
    case 215u: goto L_089CCEC4;
    case 216u: goto L_089CCED4;
    case 217u: goto L_089CCEEC;
    case 218u: goto L_089CCF04;
    case 219u: goto L_089CCF0C;
    case 220u: goto L_089CCF24;
    case 221u: goto L_089CCF34;
    case 222u: goto L_089CCF38;
    case 223u: goto L_089CCF40;
    case 224u: goto L_089CCF50;
    case 225u: goto L_089CCF74;
    case 226u: goto L_089CCF84;
    case 227u: goto L_089CCF8C;
    case 228u: goto L_089CCFA0;
    case 229u: goto L_089CCFA8;
    case 230u: goto L_089CCFBC;
    case 231u: goto L_089CCFC4;
    case 232u: goto L_089CCFD4;
    case 233u: goto L_089CCFDC;
    case 234u: goto L_089CCFE4;
    case 235u: goto L_089CCFEC;
    case 236u: goto L_089CCFF4;
    case 237u: goto L_089CD000;
    case 238u: goto L_089CD004;
    case 239u: goto L_089CD00C;
    case 240u: goto L_089CD014;
    case 241u: goto L_089CD024;
    case 242u: goto L_089CD02C;
    case 243u: goto L_089CD038;
    case 244u: goto L_089CD040;
    case 245u: goto L_089CD048;
    case 246u: goto L_089CD058;
    case 247u: goto L_089CD074;
    case 248u: goto L_089CD084;
    case 249u: goto L_089CD08C;
    case 250u: goto L_089CD0A0;
    case 251u: goto L_089CD0B8;
    case 252u: goto L_089CD0BC;
    case 253u: goto L_089CD0C8;
    case 254u: goto L_089CD0D8;
    case 255u: goto L_089CD0F8;
    case 256u: goto L_089CD108;
    case 257u: goto L_089CD110;
    case 258u: goto L_089CD124;
    case 259u: goto L_089CD12C;
    case 260u: goto L_089CD140;
    case 261u: goto L_089CD148;
    case 262u: goto L_089CD158;
    case 263u: goto L_089CD160;
    case 264u: goto L_089CD168;
    case 265u: goto L_089CD170;
    case 266u: goto L_089CD178;
    case 267u: goto L_089CD184;
    case 268u: goto L_089CD18C;
    case 269u: goto L_089CD194;
    case 270u: goto L_089CD1A0;
    case 271u: goto L_089CD1A8;
    case 272u: goto L_089CD1B0;
    case 273u: goto L_089CD1C0;
    case 274u: goto L_089CD1E4;
    case 275u: goto L_089CD1F4;
    case 276u: goto L_089CD1FC;
    case 277u: goto L_089CD210;
    case 278u: goto L_089CD218;
    case 279u: goto L_089CD22C;
    case 280u: goto L_089CD234;
    case 281u: goto L_089CD244;
    case 282u: goto L_089CD24C;
    case 283u: goto L_089CD254;
    case 284u: goto L_089CD25C;
    case 285u: goto L_089CD264;
    case 286u: goto L_089CD270;
    case 287u: goto L_089CD2AC;
    case 288u: goto L_089CD2CC;
    case 289u: goto L_089CD2DC;
    case 290u: goto L_089CD2EC;
    case 291u: goto L_089CD304;
    case 292u: goto L_089CD31C;
    case 293u: goto L_089CD32C;
    case 294u: goto L_089CD348;
    case 295u: goto L_089CD35C;
    case 296u: goto L_089CD360;
    case 297u: goto L_089CD370;
    case 298u: goto L_089CD390;
    case 299u: goto L_089CD3A0;
    case 300u: goto L_089CD3B0;
    case 301u: goto L_089CD3C0;
    case 302u: goto L_089CD3C8;
    case 303u: goto L_089CD3DC;
    case 304u: goto L_089CD3E4;
    case 305u: goto L_089CD3F8;
    case 306u: goto L_089CD400;
    case 307u: goto L_089CD410;
    case 308u: goto L_089CD418;
    case 309u: goto L_089CD420;
    case 310u: goto L_089CD428;
    case 311u: goto L_089CD430;
    case 312u: goto L_089CD440;
    case 313u: goto L_089CD444;
    case 314u: goto L_089CD44C;
    case 315u: goto L_089CD454;
    case 316u: goto L_089CD464;
    case 317u: goto L_089CD46C;
    case 318u: goto L_089CD478;
    case 319u: goto L_089CD480;
    case 320u: goto L_089CD488;
    case 321u: goto L_089CD498;
    case 322u: goto L_089CD4B4;
    case 323u: goto L_089CD4C8;
    case 324u: goto L_089CD4D4;
    case 325u: goto L_089CD4E8;
    case 326u: goto L_089CD508;
    case 327u: goto L_089CD510;
    case 328u: goto L_089CD524;
    case 329u: goto L_089CD548;
    case 330u: goto L_089CD558;
    case 331u: goto L_089CD568;
    case 332u: goto L_089CD578;
    case 333u: goto L_089CD580;
    case 334u: goto L_089CD594;
    case 335u: goto L_089CD59C;
    case 336u: goto L_089CD5B0;
    case 337u: goto L_089CD5B8;
    case 338u: goto L_089CD5C8;
    case 339u: goto L_089CD5D0;
    case 340u: goto L_089CD5D8;
    case 341u: goto L_089CD5E0;
    case 342u: goto L_089CD5E8;
    case 343u: goto L_089CD5F8;
    case 344u: goto L_089CD600;
    case 345u: goto L_089CD608;
    case 346u: goto L_089CD61C;
    case 347u: goto L_089CD624;
    case 348u: goto L_089CD62C;
    case 349u: goto L_089CD64C;
    case 350u: goto L_089CD65C;
    case 351u: goto L_089CD66C;
    case 352u: goto L_089CD67C;
    case 353u: goto L_089CD684;
    case 354u: goto L_089CD698;
    case 355u: goto L_089CD6A0;
    case 356u: goto L_089CD6B4;
    case 357u: goto L_089CD6BC;
    case 358u: goto L_089CD6CC;
    case 359u: goto L_089CD6D4;
    case 360u: goto L_089CD6DC;
    case 361u: goto L_089CD6E4;
    case 362u: goto L_089CD6EC;
    case 363u: goto L_089CD6FC;
    case 364u: goto L_089CD734;
    case 365u: goto L_089CD73C;
    case 366u: goto L_089CD74C;
    case 367u: goto L_089CD754;
    case 368u: goto L_089CD75C;
    case 369u: goto L_089CD764;
    case 370u: goto L_089CD770;
    case 371u: goto L_089CD778;
    case 372u: goto L_089CD784;
    case 373u: goto L_089CD78C;
    case 374u: goto L_089CD794;
    case 375u: goto L_089CD79C;
    case 376u: goto L_089CD7AC;
    case 377u: goto L_089CD7B4;
    case 378u: goto L_089CD7BC;
    case 379u: goto L_089CD7C4;
    case 380u: goto L_089CD7D0;
    case 381u: goto L_089CD7D8;
    case 382u: goto L_089CD7E0;
    case 383u: goto L_089CD7F0;
    case 384u: goto L_089CD7FC;
    case 385u: goto L_089CD818;
    case 386u: goto L_089CD820;
    case 387u: goto L_089CD828;
    case 388u: goto L_089CD840;
    case 389u: goto L_089CD848;
    case 390u: goto L_089CD84C;
    case 391u: goto L_089CD854;
    case 392u: goto L_089CD85C;
    case 393u: goto L_089CD864;
    case 394u: goto L_089CD86C;
    case 395u: goto L_089CD894;
    case 396u: goto L_089CD8A4;
    case 397u: goto L_089CD8B0;
    case 398u: goto L_089CD8B8;
    case 399u: goto L_089CD8C8;
    case 400u: goto L_089CD8D0;
    case 401u: goto L_089CD8DC;
    case 402u: goto L_089CD8E4;
    case 403u: goto L_089CD8EC;
    case 404u: goto L_089CD8F8;
    case 405u: goto L_089CD900;
    case 406u: goto L_089CD904;
    case 407u: goto L_089CD914;
    case 408u: goto L_089CD91C;
    case 409u: goto L_089CD924;
    case 410u: goto L_089CD934;
    case 411u: goto L_089CD94C;
    case 412u: goto L_089CD950;
    case 413u: goto L_089CD95C;
    case 414u: goto L_089CD964;
    case 415u: goto L_089CD974;
    case 416u: goto L_089CD97C;
    case 417u: goto L_089CD98C;
    case 418u: goto L_089CD994;
    case 419u: goto L_089CD9A0;
    case 420u: goto L_089CD9A8;
    case 421u: goto L_089CD9BC;
    case 422u: goto L_089CD9C4;
    case 423u: goto L_089CD9D8;
    case 424u: goto L_089CD9F0;
    case 425u: goto L_089CD9F8;
    case 426u: goto L_089CD9FC;
    case 427u: goto L_089CDA04;
    case 428u: goto L_089CDA0C;
    case 429u: goto L_089CDA14;
    case 430u: goto L_089CDA20;
    case 431u: goto L_089CDA28;
    case 432u: goto L_089CDA3C;
    case 433u: goto L_089CDA50;
    case 434u: goto L_089CDA58;
    case 435u: goto L_089CDA60;
    case 436u: goto L_089CDA68;
    case 437u: goto L_089CDA70;
    case 438u: goto L_089CDA78;
    case 439u: goto L_089CDA84;
    case 440u: goto L_089CDA8C;
    case 441u: goto L_089CDA94;
    case 442u: goto L_089CDA9C;
    case 443u: goto L_089CDAA8;
    case 444u: goto L_089CDAB0;
    case 445u: goto L_089CDAC0;
    case 446u: goto L_089CDACC;
    case 447u: goto L_089CDAD4;
    case 448u: goto L_089CDAEC;
    case 449u: goto L_089CDAF0;
    case 450u: goto L_089CDAFC;
    case 451u: goto L_089CDB14;
    case 452u: goto L_089CDB38;
    case 453u: goto L_089CDB40;
    case 454u: goto L_089CDB4C;
    case 455u: goto L_089CDB54;
    case 456u: goto L_089CDB78;
    case 457u: goto L_089CDB88;
    case 458u: goto L_089CDB9C;
    case 459u: goto L_089CDBB0;
    case 460u: goto L_089CDBC4;
    case 461u: goto L_089CDBC8;
    case 462u: goto L_089CDBE0;
    case 463u: goto L_089CDBE8;
    case 464u: goto L_089CDBEC;
    case 465u: goto L_089CDBF4;
    case 466u: goto L_089CDC00;
    case 467u: goto L_089CDC08;
    case 468u: goto L_089CDC10;
    case 469u: goto L_089CDC14;
    case 470u: goto L_089CDC28;
    case 471u: goto L_089CDC34;
    case 472u: goto L_089CDC3C;
    case 473u: goto L_089CDC50;
    case 474u: goto L_089CDC60;
    case 475u: goto L_089CDC68;
    case 476u: goto L_089CDC74;
    case 477u: goto L_089CDCA0;
    case 478u: goto L_089CDCB8;
    case 479u: goto L_089CDCC0;
    case 480u: goto L_089CDCC4;
    case 481u: goto L_089CDCD0;
    case 482u: goto L_089CDCDC;
    case 483u: goto L_089CDCE4;
    case 484u: goto L_089CDCEC;
    case 485u: goto L_089CDCF4;
    case 486u: goto L_089CDCFC;
    case 487u: goto L_089CDD18;
    case 488u: goto L_089CDD2C;
    case 489u: goto L_089CDD38;
    case 490u: goto L_089CDD40;
    case 491u: goto L_089CDD48;
    case 492u: goto L_089CDD50;
    case 493u: goto L_089CDD5C;
    case 494u: goto L_089CDD64;
    case 495u: goto L_089CDD7C;
    case 496u: goto L_089CDD84;
    case 497u: goto L_089CDD8C;
    case 498u: goto L_089CDDC8;
    case 499u: goto L_089CDE38;
    case 500u: goto L_089CDE48;
    case 501u: goto L_089CDE68;
    case 502u: goto L_089CDE74;
    case 503u: goto L_089CDE84;
    case 504u: goto L_089CDE8C;
    case 505u: goto L_089CDE98;
    case 506u: goto L_089CDEAC;
    case 507u: goto L_089CDEC0;
    case 508u: goto L_089CDEEC;
    case 509u: goto L_089CDEF4;
    case 510u: goto L_089CDF14;
    case 511u: goto L_089CDF20;
    case 512u: goto L_089CDF38;
    case 513u: goto L_089CDF48;
    case 514u: goto L_089CDF68;
    case 515u: goto L_089CDF70;
    case 516u: goto L_089CDF94;
    case 517u: goto L_089CDFA0;
    case 518u: goto L_089CDFA8;
    case 519u: goto L_089CDFB4;
    case 520u: goto L_089CDFC0;
    case 521u: goto L_089CDFCC;
    case 522u: goto L_089CDFD4;
    case 523u: goto L_089CDFF4;
    case 524u: goto L_089CDFFC;
    case 525u: goto L_089CE010;
    case 526u: goto L_089CE018;
    case 527u: goto L_089CE028;
    case 528u: goto L_089CE038;
    case 529u: goto L_089CE044;
    case 530u: goto L_089CE064;
    case 531u: goto L_089CE07C;
    case 532u: goto L_089CE088;
    case 533u: goto L_089CE094;
    case 534u: goto L_089CE098;
    case 535u: goto L_089CE0A0;
    case 536u: goto L_089CE0B0;
    case 537u: goto L_089CE0B4;
    case 538u: goto L_089CE0BC;
    case 539u: goto L_089CE0C8;
    case 540u: goto L_089CE0D8;
    case 541u: goto L_089CE0DC;
    case 542u: goto L_089CE110;
    case 543u: goto L_089CE170;
    case 544u: goto L_089CE180;
    case 545u: goto L_089CE18C;
    case 546u: goto L_089CE1A0;
    case 547u: goto L_089CE1B4;
    case 548u: goto L_089CE1C8;
    case 549u: goto L_089CE1E0;
    case 550u: goto L_089CE204;
    case 551u: goto L_089CE210;
    case 552u: goto L_089CE228;
    case 553u: goto L_089CE230;
    case 554u: goto L_089CE23C;
    case 555u: goto L_089CE260;
    case 556u: goto L_089CE268;
    case 557u: goto L_089CE274;
    case 558u: goto L_089CE27C;
    case 559u: goto L_089CE288;
    case 560u: goto L_089CE290;
    case 561u: goto L_089CE2A0;
    case 562u: goto L_089CE2A8;
    case 563u: goto L_089CE2B0;
    case 564u: goto L_089CE2BC;
    case 565u: goto L_089CE2C4;
    case 566u: goto L_089CE2D0;
    case 567u: goto L_089CE2DC;
    case 568u: goto L_089CE2EC;
    case 569u: goto L_089CE2F4;
    case 570u: goto L_089CE2F8;
    case 571u: goto L_089CE300;
    case 572u: goto L_089CE308;
    case 573u: goto L_089CE310;
    case 574u: goto L_089CE318;
    case 575u: goto L_089CE320;
    case 576u: goto L_089CE328;
    case 577u: goto L_089CE330;
    case 578u: goto L_089CE344;
    case 579u: goto L_089CE34C;
    case 580u: goto L_089CE354;
    case 581u: goto L_089CE368;
    case 582u: goto L_089CE370;
    case 583u: goto L_089CE378;
    case 584u: goto L_089CE380;
    case 585u: goto L_089CE388;
    case 586u: goto L_089CE3A0;
    case 587u: goto L_089CE3A8;
    case 588u: goto L_089CE3B0;
    case 589u: goto L_089CE3C4;
    case 590u: goto L_089CE3D4;
    case 591u: goto L_089CE3E0;
    case 592u: goto L_089CE3E8;
    case 593u: goto L_089CE3F0;
    case 594u: goto L_089CE3F8;
    case 595u: goto L_089CE400;
    case 596u: goto L_089CE410;
    case 597u: goto L_089CE41C;
    case 598u: goto L_089CE424;
    case 599u: goto L_089CE438;
    case 600u: goto L_089CE440;
    case 601u: goto L_089CE448;
    case 602u: goto L_089CE450;
    case 603u: goto L_089CE45C;
    case 604u: goto L_089CE464;
    case 605u: goto L_089CE478;
    case 606u: goto L_089CE484;
    case 607u: goto L_089CE490;
    case 608u: goto L_089CE498;
    case 609u: goto L_089CE4A8;
    case 610u: goto L_089CE4B4;
    case 611u: goto L_089CE4BC;
    case 612u: goto L_089CE4D0;
    case 613u: goto L_089CE4D8;
    case 614u: goto L_089CE4E0;
    case 615u: goto L_089CE4F8;
    case 616u: goto L_089CE500;
    case 617u: goto L_089CE508;
    case 618u: goto L_089CE51C;
    case 619u: goto L_089CE528;
    case 620u: goto L_089CE530;
    case 621u: goto L_089CE538;
    case 622u: goto L_089CE540;
    case 623u: goto L_089CE548;
    case 624u: goto L_089CE550;
    case 625u: goto L_089CE560;
    case 626u: goto L_089CE568;
    case 627u: goto L_089CE578;
    case 628u: goto L_089CE580;
    case 629u: goto L_089CE58C;
    case 630u: goto L_089CE594;
    case 631u: goto L_089CE59C;
    case 632u: goto L_089CE5AC;
    case 633u: goto L_089CE5C4;
    case 634u: goto L_089CE5D0;
    case 635u: goto L_089CE5D8;
    case 636u: goto L_089CE5E8;
    case 637u: goto L_089CE600;
    case 638u: goto L_089CE608;
    case 639u: goto L_089CE610;
    case 640u: goto L_089CE618;
    case 641u: goto L_089CE628;
    case 642u: goto L_089CE640;
    case 643u: goto L_089CE648;
    case 644u: goto L_089CE654;
    case 645u: goto L_089CE664;
    case 646u: goto L_089CE67C;
    case 647u: goto L_089CE694;
    case 648u: goto L_089CE6B0;
    case 649u: goto L_089CE6E0;
    case 650u: goto L_089CE714;
    case 651u: goto L_089CE728;
    case 652u: goto L_089CE74C;
    case 653u: goto L_089CE768;
    case 654u: goto L_089CE774;
    case 655u: goto L_089CE784;
    case 656u: goto L_089CE79C;
    case 657u: goto L_089CE7BC;
    case 658u: goto L_089CE7E0;
    case 659u: goto L_089CE7F8;
    case 660u: goto L_089CE80C;
    case 661u: goto L_089CE81C;
    case 662u: goto L_089CE830;
    case 663u: goto L_089CE83C;
    case 664u: goto L_089CE854;
    case 665u: goto L_089CE85C;
    case 666u: goto L_089CE86C;
    case 667u: goto L_089CE880;
    case 668u: goto L_089CE890;
    case 669u: goto L_089CE89C;
    case 670u: goto L_089CE8A4;
    case 671u: goto L_089CE8B4;
    case 672u: goto L_089CE8BC;
    case 673u: goto L_089CE8C4;
    case 674u: goto L_089CE8CC;
    case 675u: goto L_089CE8E4;
    case 676u: goto L_089CE8F0;
    case 677u: goto L_089CE908;
    case 678u: goto L_089CE910;
    case 679u: goto L_089CE930;
    case 680u: goto L_089CE940;
    case 681u: goto L_089CE954;
    case 682u: goto L_089CE964;
    case 683u: goto L_089CE970;
    case 684u: goto L_089CE974;
    case 685u: goto L_089CE98C;
    case 686u: goto L_089CE9A8;
    case 687u: goto L_089CE9C4;
    case 688u: goto L_089CEB04;
    case 689u: goto L_089CEB14;
    case 690u: goto L_089CEB2C;
    case 691u: goto L_089CEB3C;
    case 692u: goto L_089CEB54;
    case 693u: goto L_089CEB7C;
    case 694u: goto L_089CEB9C;
    case 695u: goto L_089CEBA8;
    case 696u: goto L_089CEBAC;
    case 697u: goto L_089CEBBC;
    case 698u: goto L_089CEBD4;
    case 699u: goto L_089CEBE8;
    case 700u: goto L_089CEC10;
    case 701u: goto L_089CEC20;
    case 702u: goto L_089CEC2C;
    case 703u: goto L_089CEC44;
    case 704u: goto L_089CEC58;
    case 705u: goto L_089CEC60;
    case 706u: goto L_089CEC68;
    case 707u: goto L_089CEC6C;
    case 708u: goto L_089CEC78;
    case 709u: goto L_089CEC94;
    case 710u: goto L_089CEC9C;
    case 711u: goto L_089CECA8;
    case 712u: goto L_089CECBC;
    case 713u: goto L_089CECF0;
    case 714u: goto L_089CECF8;
    case 715u: goto L_089CED04;
    case 716u: goto L_089CED10;
    case 717u: goto L_089CED18;
    case 718u: goto L_089CED30;
    case 719u: goto L_089CED40;
    case 720u: goto L_089CED58;
    case 721u: goto L_089CED64;
    case 722u: goto L_089CED88;
    case 723u: goto L_089CEDA4;
    case 724u: goto L_089CEDB0;
    case 725u: goto L_089CEDB4;
    case 726u: goto L_089CEDBC;
    case 727u: goto L_089CEDD0;
    case 728u: goto L_089CEDE8;
    case 729u: goto L_089CEE04;
    case 730u: goto L_089CEE14;
    case 731u: goto L_089CEE24;
    case 732u: goto L_089CEE40;
    case 733u: goto L_089CEE50;
    case 734u: goto L_089CEE64;
    case 735u: goto L_089CEE9C;
    case 736u: goto L_089CEEBC;
    case 737u: goto L_089CEEC4;
    case 738u: goto L_089CEF04;
    case 739u: goto L_089CEF48;
    case 740u: goto L_089CEF54;
    case 741u: goto L_089CEF8C;
    case 742u: goto L_089CEFA0;
    case 743u: goto L_089CEFDC;
    case 744u: goto L_089CEFE4;
    case 745u: goto L_089CEFF8;
    case 746u: goto L_089CEFFC;
    case 747u: goto L_089CF03C;
    case 748u: goto L_089CF044;
    case 749u: goto L_089CF074;
    case 750u: goto L_089CF084;
    case 751u: goto L_089CF094;
    case 752u: goto L_089CF0B0;
    case 753u: goto L_089CF0C8;
    case 754u: goto L_089CF0D4;
    case 755u: goto L_089CF0E4;
    case 756u: goto L_089CF11C;
    case 757u: goto L_089CF128;
    case 758u: goto L_089CF134;
    case 759u: goto L_089CF140;
    case 760u: goto L_089CF150;
    case 761u: goto L_089CF158;
    case 762u: goto L_089CF160;
    case 763u: goto L_089CF178;
    case 764u: goto L_089CF194;
    case 765u: goto L_089CF1BC;
    case 766u: goto L_089CF1D0;
    case 767u: goto L_089CF22C;
    case 768u: goto L_089CF248;
    case 769u: goto L_089CF258;
    case 770u: goto L_089CF268;
    case 771u: goto L_089CF288;
    case 772u: goto L_089CF294;
    case 773u: goto L_089CF29C;
    case 774u: goto L_089CF2A4;
    case 775u: goto L_089CF2A8;
    case 776u: goto L_089CF2B0;
    case 777u: goto L_089CF2C0;
    case 778u: goto L_089CF2C8;
    case 779u: goto L_089CF2D0;
    case 780u: goto L_089CF2D8;
    case 781u: goto L_089CF2E0;
    case 782u: goto L_089CF310;
    case 783u: goto L_089CF320;
    case 784u: goto L_089CF328;
    case 785u: goto L_089CF334;
    case 786u: goto L_089CF340;
    case 787u: goto L_089CF350;
    case 788u: goto L_089CF358;
    case 789u: goto L_089CF364;
    case 790u: goto L_089CF36C;
    case 791u: goto L_089CF380;
    case 792u: goto L_089CF390;
    case 793u: goto L_089CF398;
    case 794u: goto L_089CF3A4;
    case 795u: goto L_089CF3AC;
    case 796u: goto L_089CF3BC;
    case 797u: goto L_089CF3C8;
    case 798u: goto L_089CF3E8;
    case 799u: goto L_089CF410;
    case 800u: goto L_089CF428;
    case 801u: goto L_089CF448;
    case 802u: goto L_089CF474;
    case 803u: goto L_089CF480;
    case 804u: goto L_089CF488;
    case 805u: goto L_089CF494;
    case 806u: goto L_089CF4A4;
    case 807u: goto L_089CF4AC;
    case 808u: goto L_089CF4B4;
    case 809u: goto L_089CF4C0;
    case 810u: goto L_089CF4C8;
    case 811u: goto L_089CF4D8;
    case 812u: goto L_089CF4E8;
    case 813u: goto L_089CF500;
    case 814u: goto L_089CF524;
    case 815u: goto L_089CF53C;
    case 816u: goto L_089CF554;
    case 817u: goto L_089CF564;
    case 818u: goto L_089CF570;
    case 819u: goto L_089CF588;
    case 820u: goto L_089CF5B0;
    case 821u: goto L_089CF5E0;
    case 822u: goto L_089CF5EC;
    case 823u: goto L_089CF604;
    case 824u: goto L_089CF618;
    case 825u: goto L_089CF62C;
    case 826u: goto L_089CF674;
    case 827u: goto L_089CF69C;
    case 828u: goto L_089CF6A4;
    case 829u: goto L_089CF6DC;
    case 830u: goto L_089CF6EC;
    case 831u: goto L_089CF704;
    case 832u: goto L_089CF708;
    case 833u: goto L_089CF718;
    case 834u: goto L_089CF730;
    case 835u: goto L_089CF748;
    case 836u: goto L_089CF768;
    case 837u: goto L_089CF78C;
    case 838u: goto L_089CF7D4;
    case 839u: goto L_089CF810;
    case 840u: goto L_089CF840;
    case 841u: goto L_089CF858;
    case 842u: goto L_089CF874;
    case 843u: goto L_089CF898;
    case 844u: goto L_089CF8C0;
    case 845u: goto L_089CF8E8;
    case 846u: goto L_089CF920;
    case 847u: goto L_089CF948;
    case 848u: goto L_089CF978;
    case 849u: goto L_089CF9B0;
    case 850u: goto L_089CF9C0;
    case 851u: goto L_089CF9D4;
    case 852u: goto L_089CF9E0;
    case 853u: goto L_089CF9E8;
    case 854u: goto L_089CF9F0;
    case 855u: goto L_089CFA00;
    case 856u: goto L_089CFA0C;
    case 857u: goto L_089CFA14;
    case 858u: goto L_089CFA34;
    case 859u: goto L_089CFA60;
    case 860u: goto L_089CFA68;
    case 861u: goto L_089CFA78;
    case 862u: goto L_089CFA88;
    case 863u: goto L_089CFAA4;
    case 864u: goto L_089CFAC0;
    case 865u: goto L_089CFACC;
    case 866u: goto L_089CFAD8;
    case 867u: goto L_089CFAE4;
    case 868u: goto L_089CFAF8;
    case 869u: goto L_089CFB38;
    case 870u: goto L_089CFB54;
    case 871u: goto L_089CFB6C;
    case 872u: goto L_089CFB74;
    case 873u: goto L_089CFB80;
    case 874u: goto L_089CFB8C;
    case 875u: goto L_089CFB98;
    case 876u: goto L_089CFBA8;
    case 877u: goto L_089CFBBC;
    case 878u: goto L_089CFBCC;
    case 879u: goto L_089CFBE4;
    case 880u: goto L_089CFC0C;
    case 881u: goto L_089CFC2C;
    case 882u: goto L_089CFC38;
    case 883u: goto L_089CFC4C;
    case 884u: goto L_089CFC54;
    case 885u: goto L_089CFC5C;
    case 886u: goto L_089CFC78;
    case 887u: goto L_089CFC8C;
    case 888u: goto L_089CFCA0;
    case 889u: goto L_089CFCC0;
    case 890u: goto L_089CFCD0;
    case 891u: goto L_089CFCE0;
    case 892u: goto L_089CFCFC;
    case 893u: goto L_089CFD0C;
    case 894u: goto L_089CFD14;
    case 895u: goto L_089CFD1C;
    case 896u: goto L_089CFD28;
    case 897u: goto L_089CFD44;
    case 898u: goto L_089CFD50;
    case 899u: goto L_089CFD54;
    case 900u: goto L_089CFD68;
    case 901u: goto L_089CFD84;
    case 902u: goto L_089CFDA0;
    case 903u: goto L_089CFDCC;
    case 904u: goto L_089CFE00;
    case 905u: goto L_089CFE0C;
    case 906u: goto L_089CFE1C;
    case 907u: goto L_089CFE28;
    case 908u: goto L_089CFE30;
    case 909u: goto L_089CFE44;
    case 910u: goto L_089CFE4C;
    case 911u: goto L_089CFE54;
    case 912u: goto L_089CFE60;
    case 913u: goto L_089CFE68;
    case 914u: goto L_089CFE74;
    case 915u: goto L_089CFE7C;
    case 916u: goto L_089CFE84;
    case 917u: goto L_089CFE8C;
    case 918u: goto L_089CFE9C;
    case 919u: goto L_089CFEBC;
    case 920u: goto L_089CFEF4;
    case 921u: goto L_089CFF08;
    case 922u: goto L_089CFF10;
    case 923u: goto L_089CFF20;
    case 924u: goto L_089CFF28;
    case 925u: goto L_089CFF34;
    case 926u: goto L_089CFF3C;
    case 927u: goto L_089CFF50;
    case 928u: goto L_089CFF58;
    case 929u: goto L_089CFF68;
    case 930u: goto L_089CFF88;
    case 931u: goto L_089CFFAC;
    case 932u: goto L_089CFFB8;
    case 933u: goto L_089CFFC0;
    case 934u: goto L_089CFFCC;
    case 935u: goto L_089CFFD8;
    case 936u: goto L_089CFFE0;
    case 937u: goto L_089CFFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089CC000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CC018u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CC018u) goto L_089CC018;
    return;
L_089CC018:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 933u, 0x089CBF64u>(ctx, &aot_mem); return;
      }
      goto L_089CC02C;
    }
L_089CC02C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089CC108;
      }
      goto L_089CC044;
    }
L_089CC044:
    ctx.gpr[4] = (ctx.gpr[20] << 5u);
    ctx.gpr[17] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[19] = (0u | 13u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089CC060;
L_089CC060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089CC080;
    }
    goto L_089CC078;
L_089CC078:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CC084;
      }
      goto L_089CC080;
    }
L_089CC080:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_089CC084;
L_089CC084:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC0F4;
      }
      goto L_089CC090;
    }
L_089CC090:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC0F4;
      }
      goto L_089CC09C;
    }
L_089CC09C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(91)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089CC0B0;
      }
      goto L_089CC0A8;
    }
L_089CC0A8:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[19];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089CC0B8;
      }
      goto L_089CC0B0;
    }
L_089CC0B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089CC0B8;
      }
      goto L_089CC0B8;
    }
L_089CC0B8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC0F4;
      }
      goto L_089CC0C0;
    }
L_089CC0C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC0F4;
      }
      goto L_089CC0D0;
    }
L_089CC0D0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(420)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089CC0F4;
      }
      goto L_089CC0DC;
    }
L_089CC0DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089CC0F4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CC0F4u) goto L_089CC0F4;
    return;
L_089CC0F4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-544));
      if (branch_taken) {
          goto L_089CC060;
      }
      goto L_089CC108;
    }
L_089CC108:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15296)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089CC1D0;
      }
      goto L_089CC124;
    }
L_089CC124:
    ctx.gpr[18] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[19] = (0u | 13u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    goto L_089CC134;
L_089CC134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_089CC154;
    }
    goto L_089CC14C;
L_089CC14C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089CC158;
      }
      goto L_089CC154;
    }
L_089CC154:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    goto L_089CC158;
L_089CC158:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC1BC;
      }
      goto L_089CC164;
    }
L_089CC164:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC1BC;
      }
      goto L_089CC170;
    }
L_089CC170:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(91)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089CC184;
      }
      goto L_089CC17C;
    }
L_089CC17C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089CC18C;
      }
      goto L_089CC184;
    }
L_089CC184:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_089CC18C;
      }
      goto L_089CC18C;
    }
L_089CC18C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC1BC;
      }
      goto L_089CC194;
    }
L_089CC194:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC1BC;
      }
      goto L_089CC1A4;
    }
L_089CC1A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089CC1BCu);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CC1BCu) goto L_089CC1BC;
    return;
L_089CC1BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_089CC134;
      }
      goto L_089CC1D0;
    }
L_089CC1D0:
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
L_089CC200:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
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
    ctx.gpr[31] = (0x089CC23Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 353u, 0x08A8A3E4u>(ctx, &aot_mem) && ctx.pc == 0x089CC23Cu) goto L_089CC23C;
    return;
L_089CC23C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089CC250u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 344u, 0x089C9934u>(ctx, &aot_mem) && ctx.pc == 0x089CC250u) goto L_089CC250;
    return;
L_089CC250:
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[31] = (0x089CC260u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CDDC8;
L_089CC260:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_089CC348;
      }
      goto L_089CC270;
    }
L_089CC270:
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[4] & 135u);
    goto L_089CC298;
L_089CC298:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4900 ? 1u : 0u);
      if (branch_taken) {
          goto L_089CC348;
      }
      goto L_089CC2A0;
    }
L_089CC2A0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6115 ? 1u : 0u);
      if (branch_taken) {
          goto L_089CC2C8;
      }
      goto L_089CC2A8;
    }
L_089CC2A8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6115 ? 1u : 0u);
      if (branch_taken) {
          goto L_089CC2C8;
      }
      goto L_089CC2B4;
    }
L_089CC2B4:
    ctx.gpr[31] = (0x089CC2BCu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4900));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 289u, 0x089C9610u>(ctx, &aot_mem) && ctx.pc == 0x089CC2BCu) goto L_089CC2BC;
    return;
L_089CC2BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC2E0;
      }
      goto L_089CC2C4;
    }
L_089CC2C4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6115 ? 1u : 0u);
    goto L_089CC2C8;
L_089CC2C8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC348;
      }
      goto L_089CC2D0;
    }
L_089CC2D0:
    ctx.gpr[31] = (0x089CC2D8u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6115));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 315u, 0x089C9758u>(ctx, &aot_mem) && ctx.pc == 0x089CC2D8u) goto L_089CC2D8;
    return;
L_089CC2D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC348;
      }
      goto L_089CC2E0;
    }
L_089CC2E0:
    ctx.gpr[31] = (0x089CC2E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x089CC2E8u) goto L_089CC2E8;
    return;
L_089CC2E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x089CC300u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 364u, 0x089C5824u>(ctx, &aot_mem) && ctx.pc == 0x089CC300u) goto L_089CC300;
    return;
L_089CC300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089CC314u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_089CDDC8;
L_089CC314:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_089CC328;
      }
      goto L_089CC320;
    }
L_089CC320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC348;
      }
      goto L_089CC328;
    }
L_089CC328:
    ctx.gpr[17] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 135u);
      if (branch_taken) {
          goto L_089CC298;
      }
      goto L_089CC348;
    }
L_089CC348:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_089CC738;
      }
      goto L_089CC350;
    }
L_089CC350:
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x089CC378u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 364u, 0x089C5824u>(ctx, &aot_mem) && ctx.pc == 0x089CC378u) goto L_089CC378;
    return;
L_089CC378:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[31] = (0x089CC390u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8808));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089CC390u) goto L_089CC390;
    return;
L_089CC390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[20] = (ctx.gpr[4] << 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6024));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26768));
    ctx.gpr[23] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[21] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[22] = (2230u << 16u);
    goto L_089CC3C4;
L_089CC3C4:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[30];
    ctx.gpr[18] = (ctx.gpr[16] << 4u);
      if (branch_taken) {
          goto L_089CC3EC;
      }
      goto L_089CC3CC;
    }
L_089CC3CC:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089CC400;
      }
      goto L_089CC3EC;
    }
L_089CC3EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CC6C8;
      }
      goto L_089CC400;
    }
L_089CC400:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x089CC410u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 364u, 0x089C5824u>(ctx, &aot_mem) && ctx.pc == 0x089CC410u) goto L_089CC410;
    return;
L_089CC410:
    ctx.gpr[31] = (0x089CC418u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 341u, 0x089C56C0u>(ctx, &aot_mem) && ctx.pc == 0x089CC418u) goto L_089CC418;
    return;
L_089CC418:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC424;
      }
      goto L_089CC420;
    }
L_089CC420:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    goto L_089CC424;
L_089CC424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-6280)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC45C;
      }
      goto L_089CC430;
    }
L_089CC430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC45C;
      }
      goto L_089CC448;
    }
L_089CC448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CC6C8;
      }
      goto L_089CC45C;
    }
L_089CC45C:
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC574;
      }
      goto L_089CC468;
    }
L_089CC468:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_089CC490;
      }
      goto L_089CC47C;
    }
L_089CC47C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CC490;
L_089CC490:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_089CC4C0;
      }
      goto L_089CC49C;
    }
L_089CC49C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 7u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(30))))));
        goto L_089CC4C4;
    }
    goto L_089CC4AC;
L_089CC4AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CC6C8;
      }
      goto L_089CC4C0;
    }
L_089CC4C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(30))))));
    goto L_089CC4C4;
L_089CC4C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4900));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_089CC508;
      }
      goto L_089CC4EC;
    }
L_089CC4EC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CC508;
      }
      goto L_089CC4F4;
    }
L_089CC4F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CC6C8;
      }
      goto L_089CC508;
    }
L_089CC508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CC520u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CC520u) goto L_089CC520;
    return;
L_089CC520:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089CC56C;
      }
      goto L_089CC52C;
    }
L_089CC52C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6115));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_089CC56C;
      }
      goto L_089CC554;
    }
L_089CC554:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CC56C;
      }
      goto L_089CC55C;
    }
L_089CC55C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CC6C8;
      }
      goto L_089CC56C;
    }
L_089CC56C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC5B4;
      }
      goto L_089CC574;
    }
L_089CC574:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6115 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089CC5B4;
      }
      goto L_089CC580;
    }
L_089CC580:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC5A4;
      }
      goto L_089CC590;
    }
L_089CC590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CC5B4;
      }
      goto L_089CC5A4;
    }
L_089CC5A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CC6C8;
      }
      goto L_089CC5B4;
    }
L_089CC5B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[31] = (0x089CC5C4u);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x089CC5C4u) goto L_089CC5C4;
    return;
L_089CC5C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 11u);
    ctx.gpr[31] = (0x089CC5D4u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x089CC5D4u) goto L_089CC5D4;
    return;
L_089CC5D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[4] << 11u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x089CC5E8u);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x089CC5E8u) goto L_089CC5E8;
    return;
L_089CC5E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_089CC648;
      }
      goto L_089CC608;
    }
L_089CC608:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CC630;
      }
      goto L_089CC61C;
    }
L_089CC61C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CC630;
L_089CC630:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CC648;
      }
      goto L_089CC640;
    }
L_089CC640:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089CC648;
L_089CC648:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x089CC658u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 362u, 0x089C57FCu>(ctx, &aot_mem) && ctx.pc == 0x089CC658u) goto L_089CC658;
    return;
L_089CC658:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8060)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8060), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC6A0;
      }
      goto L_089CC680;
    }
L_089CC680:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-6280)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-6280), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[18]);
    goto L_089CC6A0;
L_089CC6A0:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 1 ? 1u : 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CC3C4;
      }
      goto L_089CC6B8;
    }
L_089CC6B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089CC6C8;
L_089CC6C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC6E8;
      }
      goto L_089CC6D4;
    }
L_089CC6D4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CC6D4;
      }
      goto L_089CC6E8;
    }
L_089CC6E8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x089CC700u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 338u, 0x08A8A2C0u>(ctx, &aot_mem) && ctx.pc == 0x089CC700u) goto L_089CC700;
    return;
L_089CC700:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089CC718;
      }
      goto L_089CC708;
    }
L_089CC708:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089CC714u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8652));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089CC714u) goto L_089CC714;
    return;
L_089CC714:
    ctx.gpr[4] = (0u | 1u);
    goto L_089CC718;
L_089CC718:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(24), 0u);
    goto L_089CC738;
L_089CC738:
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
L_089CC768:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089CC7DC;
      }
      goto L_089CC7A4;
    }
L_089CC7A4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[31] = (0x089CC7B4u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 391u, 0x088724E0u>(ctx, &aot_mem) && ctx.pc == 0x089CC7B4u) goto L_089CC7B4;
    return;
L_089CC7B4:
    ctx.gpr[21] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(82)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7448)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089CC7E4;
      }
      goto L_089CC7D4;
    }
L_089CC7D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC94C;
      }
      goto L_089CC7DC;
    }
L_089CC7DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCD90;
      }
      goto L_089CC7E4;
    }
L_089CC7E4:
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[18] = (2u << 16u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[22];
    ctx.gpr[23] = (2229u << 16u);
      if (branch_taken) {
          goto L_089CC86C;
      }
      goto L_089CC7F8;
    }
L_089CC7F8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (2u << 16u);
    goto L_089CC804;
L_089CC804:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7472), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(25804)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7448)));
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089CC840;
      }
      goto L_089CC838;
    }
L_089CC838:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC854;
      }
      goto L_089CC840;
    }
L_089CC840:
    ctx.gpr[31] = (0x089CC848u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x089CC848u) goto L_089CC848;
    return;
L_089CC848:
    ctx.gpr[31] = (0x089CC850u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 627u, 0x089C6A7Cu>(ctx, &aot_mem) && ctx.pc == 0x089CC850u) goto L_089CC850;
    return;
L_089CC850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    goto L_089CC854;
L_089CC854:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CC804;
      }
      goto L_089CC864;
    }
L_089CC864:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(82)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    goto L_089CC86C;
L_089CC86C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7448), ctx.gpr[5]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28236)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28240)));
    goto L_089CC880;
L_089CC880:
    ctx.gpr[31] = (0x089CC888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089CC888u) goto L_089CC888;
    return;
L_089CC888:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CC89Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089CC89Cu) goto L_089CC89C;
    return;
L_089CC89C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7472)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC904;
      }
      goto L_089CC8C8;
    }
L_089CC8C8:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7472), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7448)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(25804)));
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089CC90C;
      }
      goto L_089CC8FC;
    }
L_089CC8FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC918;
      }
      goto L_089CC904;
    }
L_089CC904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC880;
      }
      goto L_089CC90C;
    }
L_089CC90C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089CC918u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089CC918u) goto L_089CC918;
    return;
L_089CC918:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC880;
      }
      goto L_089CC928;
    }
L_089CC928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (0u | 300u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-28248), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7452), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    goto L_089CC94C;
L_089CC94C:
    ctx.gpr[3] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28248)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089CCB3C;
      }
      goto L_089CC95C;
    }
L_089CC95C:
    ctx.gpr[30] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(25804)));
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[19] = (2u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[23] = (2u << 16u);
    goto L_089CC994;
L_089CC994:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-7472)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC9A8;
      }
      goto L_089CC9A0;
    }
L_089CC9A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC9EC;
      }
      goto L_089CC9A8;
    }
L_089CC9A8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7448)));
    ctx.gpr[9] = (ctx.gpr[9] << 6u);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089CC9EC;
      }
      goto L_089CC9C4;
    }
L_089CC9C4:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_089CC9D8;
      }
      goto L_089CC9CC;
    }
L_089CC9CC:
    ctx.gpr[9] = (ctx.gpr[20] << 2u);
    ctx.gpr[9] = (ctx.gpr[11] + ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_089CC9D8;
L_089CC9D8:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC9EC;
      }
      goto L_089CC9E4;
    }
L_089CC9E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCA00;
      }
      goto L_089CC9EC;
    }
L_089CC9EC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CC994;
      }
      goto L_089CCA00;
    }
L_089CCA00:
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_089CCA1C;
      }
      goto L_089CCA0C;
    }
L_089CCA0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7452)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCB44;
      }
      goto L_089CCA1C;
    }
L_089CCA1C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28236)));
    ctx.gpr[22] = (0u | 8u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28240)));
    goto L_089CCA2C;
L_089CCA2C:
    ctx.gpr[31] = (0x089CCA34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089CCA34u) goto L_089CCA34;
    return;
L_089CCA34:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CCA48u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089CCA48u) goto L_089CCA48;
    return;
L_089CCA48:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7472)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCA8C;
      }
      goto L_089CCA74;
    }
L_089CCA74:
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[23]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7452)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089CCA94;
      }
      goto L_089CCA84;
    }
L_089CCA84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089CCAB0;
      }
      goto L_089CCA8C;
    }
L_089CCA8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCA2C;
      }
      goto L_089CCA94;
    }
L_089CCA94:
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7472), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_089CCAB0;
L_089CCAB0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7472), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7448)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(25804)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_089CCB44;
      }
      goto L_089CCAE8;
    }
L_089CCAE8:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089CCAF4u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089CCAF4u) goto L_089CCAF4;
    return;
L_089CCAF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[23] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7452)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089CCB20;
      }
      goto L_089CCB08;
    }
L_089CCB08:
    ctx.gpr[31] = (0x089CCB10u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x089CCB10u) goto L_089CCB10;
    return;
L_089CCB10:
    ctx.gpr[31] = (0x089CCB18u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 627u, 0x089C6A7Cu>(ctx, &aot_mem) && ctx.pc == 0x089CCB18u) goto L_089CCB18;
    return;
L_089CCB18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
      if (branch_taken) {
          goto L_089CCB2C;
      }
      goto L_089CCB20;
    }
L_089CCB20:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-7452), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    goto L_089CCB2C;
L_089CCB2C:
    ctx.gpr[5] = (0u | 300u);
    ctx.gpr[6] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-28248), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089CCB44;
      }
      goto L_089CCB3C;
    }
L_089CCB3C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28248), ctx.gpr[5]);
    goto L_089CCB44;
L_089CCB44:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCB6C;
      }
      goto L_089CCB5C;
    }
L_089CCB5C:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x089CCB68u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089CCB68u) goto L_089CCB68;
    return;
L_089CCB68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    goto L_089CCB6C;
L_089CCB6C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCB94;
      }
      goto L_089CCB84;
    }
L_089CCB84:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x089CCB90u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089CCB90u) goto L_089CCB90;
    return;
L_089CCB90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    goto L_089CCB94;
L_089CCB94:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(62)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(58)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7444))))));
      if (branch_taken) {
          goto L_089CCBC0;
      }
      goto L_089CCBBC;
    }
L_089CCBBC:
    ctx.gpr[22] = (0u | 1u);
    goto L_089CCBC0;
L_089CCBC0:
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(2));
    goto L_089CCBCC;
L_089CCBCC:
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(62)));
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CCBE4;
      }
      goto L_089CCBDC;
    }
L_089CCBDC:
    ctx.gpr[11] = (ctx.gpr[10] << (ctx.gpr[9] & 31u));
    ctx.gpr[22] = (ctx.gpr[22] | ctx.gpr[11]);
    goto L_089CCBE4;
L_089CCBE4:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CCBCC;
      }
      goto L_089CCBF4;
    }
L_089CCBF4:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089CCC00;
      }
      goto L_089CCBFC;
    }
L_089CCBFC:
    ctx.gpr[19] = (0u | 1u);
    goto L_089CCC00;
L_089CCC00:
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(2));
    goto L_089CCC0C;
L_089CCC0C:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_089CCC24;
      }
      goto L_089CCC1C;
    }
L_089CCC1C:
    ctx.gpr[8] = (ctx.gpr[30] << (ctx.gpr[7] & 31u));
    ctx.gpr[19] = (ctx.gpr[19] | ctx.gpr[8]);
    goto L_089CCC24;
L_089CCC24:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CCC0C;
      }
      goto L_089CCC34;
    }
L_089CCC34:
    ctx.gpr[22] = (ctx.gpr[19] | ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[5];
    ctx.gpr[5] = (2u << 16u);
      if (branch_taken) {
          goto L_089CCC50;
      }
      goto L_089CCC40;
    }
L_089CCC40:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7442))))));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CCD90;
      }
      goto L_089CCC50;
    }
L_089CCC50:
    ctx.gpr[17] = (2277u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-5960));
    ctx.gpr[23] = (2u << 16u);
    goto L_089CCC64;
L_089CCC64:
    ctx.gpr[16] = (ctx.gpr[30] << (ctx.gpr[18] & 31u));
    ctx.gpr[5] = (ctx.gpr[16] & ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_089CCCB8;
      }
      goto L_089CCC74;
    }
L_089CCC74:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(-7444))))));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCCB8;
      }
      goto L_089CCC84;
    }
L_089CCC84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089CCC90u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089CCC90u) goto L_089CCC90;
    return;
L_089CCC90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089CCC9Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089CCC9Cu) goto L_089CCC9C;
    return;
L_089CCC9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-7444))))));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[16]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-7444), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
      if (branch_taken) {
          goto L_089CCD0C;
      }
      goto L_089CCCB8;
    }
L_089CCCB8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_089CCD0C;
      }
      goto L_089CCCC0;
    }
L_089CCCC0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7444))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCD0C;
      }
      goto L_089CCCD0;
    }
L_089CCCD0:
    ctx.gpr[31] = (0x089CCCD8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x089CCCD8u) goto L_089CCCD8;
    return;
L_089CCCD8:
    ctx.gpr[31] = (0x089CCCE0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x089CCCE0u) goto L_089CCCE0;
    return;
L_089CCCE0:
    ctx.gpr[31] = (0x089CCCE8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 627u, 0x089C6A7Cu>(ctx, &aot_mem) && ctx.pc == 0x089CCCE8u) goto L_089CCCE8;
    return;
L_089CCCE8:
    ctx.gpr[31] = (0x089CCCF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 627u, 0x089C6A7Cu>(ctx, &aot_mem) && ctx.pc == 0x089CCCF0u) goto L_089CCCF0;
    return;
L_089CCCF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (~(ctx.gpr[16] | 0u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-7444))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-7444), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    goto L_089CCD0C;
L_089CCD0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[20];
    ctx.gpr[7] = (2u << 16u);
      if (branch_taken) {
          goto L_089CCD74;
      }
      goto L_089CCD18;
    }
L_089CCD18:
    ctx.gpr[6] = (ctx.gpr[16] & ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089CCD48;
      }
      goto L_089CCD24;
    }
L_089CCD24:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(-7442))))));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCD48;
      }
      goto L_089CCD34;
    }
L_089CCD34:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089CCD40u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089CCD40u) goto L_089CCD40;
    return;
L_089CCD40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
      if (branch_taken) {
          goto L_089CCD74;
      }
      goto L_089CCD48;
    }
L_089CCD48:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089CCD74;
      }
      goto L_089CCD50;
    }
L_089CCD50:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(-7442))))));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCD74;
      }
      goto L_089CCD60;
    }
L_089CCD60:
    ctx.gpr[31] = (0x089CCD68u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x089CCD68u) goto L_089CCD68;
    return;
L_089CCD68:
    ctx.gpr[31] = (0x089CCD70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 627u, 0x089C6A7Cu>(ctx, &aot_mem) && ctx.pc == 0x089CCD70u) goto L_089CCD70;
    return;
L_089CCD70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    goto L_089CCD74;
L_089CCD74:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (2u << 16u);
      if (branch_taken) {
          goto L_089CCC64;
      }
      goto L_089CCD88;
    }
L_089CCD88:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-7442), static_cast<std::uint16_t>(ctx.gpr[19]));
    goto L_089CCD90;
L_089CCD90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CCDC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-544));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CCE08u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 756u, 0x089C7228u>(ctx, &aot_mem) && ctx.pc == 0x089CCE08u) goto L_089CCE08;
    return;
L_089CCE08:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    ctx.gpr[31] = (0x089CCE18u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 839u, 0x08AA3F84u>(ctx, &aot_mem) && ctx.pc == 0x089CCE18u) goto L_089CCE18;
    return;
L_089CCE18:
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089CCE90;
      }
      goto L_089CCE24;
    }
L_089CCE24:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089CCE98;
      }
      goto L_089CCE88;
    }
L_089CCE88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD2AC;
      }
      goto L_089CCE90;
    }
L_089CCE90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CCE98;
    }
L_089CCE98:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-10));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(10));
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
        goto L_089CCEB4;
    }
    goto L_089CCEB4;
L_089CCEB4:
    ctx.gpr[19] = (0u | 99u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
        goto L_089CCEC4;
    }
    goto L_089CCEC4;
L_089CCEC4:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CCF0C;
      }
      goto L_089CCED4;
    }
L_089CCED4:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-10));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
        goto L_089CCEEC;
    }
    goto L_089CCEEC;
L_089CCEEC:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
        goto L_089CCF04;
    }
    goto L_089CCF04;
L_089CCF04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_089CCF38;
      }
      goto L_089CCF0C;
    }
L_089CCF0C:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.gpr[23] = (0u | 99u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 99 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(10));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
        goto L_089CCF24;
    }
    goto L_089CCF24;
L_089CCF24:
    ctx.gpr[20] = (0u | 99u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
        goto L_089CCF34;
    }
    goto L_089CCF34;
L_089CCF34:
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089CCF38;
L_089CCF38:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[23];
    ctx.gpr[18] = (2227u << 16u);
      if (branch_taken) {
          goto L_089CD000;
      }
      goto L_089CCF40;
    }
L_089CCF40:
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
      if (branch_taken) {
          goto L_089CCFF4;
      }
      goto L_089CCF50;
    }
L_089CCF50:
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    goto L_089CCF74;
L_089CCF74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089CCF84u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 228u, 0x089C91F8u>(ctx, &aot_mem) && ctx.pc == 0x089CCF84u) goto L_089CCF84;
    return;
L_089CCF84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCFEC;
      }
      goto L_089CCF8C;
    }
L_089CCF8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089CCFA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 228u, 0x089C91F8u>(ctx, &aot_mem) && ctx.pc == 0x089CCFA0u) goto L_089CCFA0;
    return;
L_089CCFA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCFE4;
      }
      goto L_089CCFA8;
    }
L_089CCFA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089CCFBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 228u, 0x089C91F8u>(ctx, &aot_mem) && ctx.pc == 0x089CCFBCu) goto L_089CCFBC;
    return;
L_089CCFBC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCFDC;
      }
      goto L_089CCFC4;
    }
L_089CCFC4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4400));
      if (branch_taken) {
          goto L_089CCF74;
      }
      goto L_089CCFD4;
    }
L_089CCFD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCFF4;
      }
      goto L_089CCFDC;
    }
L_089CCFDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CCFE4;
    }
L_089CCFE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CCFEC;
    }
L_089CCFEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CCFF4;
    }
L_089CCFF4:
    ctx.gpr[20] = (ctx.gpr[21] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089CCF40;
      }
      goto L_089CD000;
    }
L_089CD000:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    goto L_089CD004;
L_089CD004:
    ctx.gpr[31] = (0x089CD00Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 914u, 0x089C7BFCu>(ctx, &aot_mem) && ctx.pc == 0x089CD00Cu) goto L_089CD00C;
    return;
L_089CD00C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD048;
      }
      goto L_089CD014;
    }
L_089CD014:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089CD024u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 756u, 0x089C7228u>(ctx, &aot_mem) && ctx.pc == 0x089CD024u) goto L_089CD024;
    return;
L_089CD024:
    ctx.gpr[31] = (0x089CD02Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 839u, 0x08AA3F84u>(ctx, &aot_mem) && ctx.pc == 0x089CD02Cu) goto L_089CD02C;
    return;
L_089CD02C:
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD040;
      }
      goto L_089CD038;
    }
L_089CD038:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD004;
      }
      goto L_089CD040;
    }
L_089CD040:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CD048;
    }
L_089CD048:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
      if (branch_taken) {
          goto L_089CD08C;
      }
      goto L_089CD058;
    }
L_089CD058:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(10));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
        goto L_089CD074;
    }
    goto L_089CD074;
L_089CD074:
    ctx.gpr[30] = (0u | 99u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
        goto L_089CD084;
    }
    goto L_089CD084;
L_089CD084:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_089CD0BC;
      }
      goto L_089CD08C;
    }
L_089CD08C:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[23] = (0u | 99u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
        goto L_089CD0A0;
    }
    goto L_089CD0A0;
L_089CD0A0:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-10));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
        goto L_089CD0B8;
    }
    goto L_089CD0B8;
L_089CD0B8:
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089CD0BC;
L_089CD0BC:
    ctx.gpr[20] = (ctx.gpr[30] | 0u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[23];
    ctx.gpr[18] = (2227u << 16u);
      if (branch_taken) {
          goto L_089CD184;
      }
      goto L_089CD0C8;
    }
L_089CD0C8:
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
      if (branch_taken) {
          goto L_089CD178;
      }
      goto L_089CD0D8;
    }
L_089CD0D8:
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    goto L_089CD0F8;
L_089CD0F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (0x089CD108u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 250u, 0x089C9370u>(ctx, &aot_mem) && ctx.pc == 0x089CD108u) goto L_089CD108;
    return;
L_089CD108:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD170;
      }
      goto L_089CD110;
    }
L_089CD110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089CD124u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 250u, 0x089C9370u>(ctx, &aot_mem) && ctx.pc == 0x089CD124u) goto L_089CD124;
    return;
L_089CD124:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD168;
      }
      goto L_089CD12C;
    }
L_089CD12C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089CD140u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 250u, 0x089C9370u>(ctx, &aot_mem) && ctx.pc == 0x089CD140u) goto L_089CD140;
    return;
L_089CD140:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD160;
      }
      goto L_089CD148;
    }
L_089CD148:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4400));
      if (branch_taken) {
          goto L_089CD0F8;
      }
      goto L_089CD158;
    }
L_089CD158:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD178;
      }
      goto L_089CD160;
    }
L_089CD160:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CD168;
    }
L_089CD168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CD170;
    }
L_089CD170:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CD178;
    }
L_089CD178:
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089CD0C8;
      }
      goto L_089CD184;
    }
L_089CD184:
    ctx.gpr[31] = (0x089CD18Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 272u, 0x089C94ECu>(ctx, &aot_mem) && ctx.pc == 0x089CD18Cu) goto L_089CD18C;
    return;
L_089CD18C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD1A8;
      }
      goto L_089CD194;
    }
L_089CD194:
    ctx.gpr[20] = (ctx.gpr[30] | 0u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[23];
    ctx.gpr[18] = (2227u << 16u);
      if (branch_taken) {
          goto L_089CD1B0;
      }
      goto L_089CD1A0;
    }
L_089CD1A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD270;
      }
      goto L_089CD1A8;
    }
L_089CD1A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CD1B0;
    }
L_089CD1B0:
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
      if (branch_taken) {
          goto L_089CD264;
      }
      goto L_089CD1C0;
    }
L_089CD1C0:
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    goto L_089CD1E4;
L_089CD1E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089CD1F4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 228u, 0x089C91F8u>(ctx, &aot_mem) && ctx.pc == 0x089CD1F4u) goto L_089CD1F4;
    return;
L_089CD1F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD25C;
      }
      goto L_089CD1FC;
    }
L_089CD1FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089CD210u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 228u, 0x089C91F8u>(ctx, &aot_mem) && ctx.pc == 0x089CD210u) goto L_089CD210;
    return;
L_089CD210:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD254;
      }
      goto L_089CD218;
    }
L_089CD218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089CD22Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 228u, 0x089C91F8u>(ctx, &aot_mem) && ctx.pc == 0x089CD22Cu) goto L_089CD22C;
    return;
L_089CD22C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD24C;
      }
      goto L_089CD234;
    }
L_089CD234:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4400));
      if (branch_taken) {
          goto L_089CD1E4;
      }
      goto L_089CD244;
    }
L_089CD244:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD264;
      }
      goto L_089CD24C;
    }
L_089CD24C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CD254;
    }
L_089CD254:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CD25C;
    }
L_089CD25C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CD264;
    }
L_089CD264:
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089CD1B0;
      }
      goto L_089CD270;
    }
L_089CD270:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8512));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8500));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8452));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8428));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[4]);
    ctx.gpr[30] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-8492));
      if (branch_taken) {
          goto L_089CD734;
      }
      goto L_089CD2AC;
    }
L_089CD2AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
        goto L_089CD2CC;
    }
    goto L_089CD2CC;
L_089CD2CC:
    ctx.gpr[19] = (0u | 99u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
        goto L_089CD2DC;
    }
    goto L_089CD2DC;
L_089CD2DC:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CD32C;
      }
      goto L_089CD2EC;
    }
L_089CD2EC:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-10));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
        goto L_089CD304;
    }
    goto L_089CD304;
L_089CD304:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
        goto L_089CD31C;
    }
    goto L_089CD31C;
L_089CD31C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[23]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_089CD360;
      }
      goto L_089CD32C;
    }
L_089CD32C:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[6]);
    ctx.gpr[22] = (0u | 99u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 99 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(10));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
        goto L_089CD348;
    }
    goto L_089CD348;
L_089CD348:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[22]);
    ctx.gpr[22] = (0u | 99u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
        goto L_089CD35C;
    }
    goto L_089CD35C;
L_089CD35C:
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089CD360;
L_089CD360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[22] << 5u);
      if (branch_taken) {
          goto L_089CD440;
      }
      goto L_089CD370;
    }
L_089CD370:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[20]);
    ctx.gpr[22] = (ctx.gpr[23] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[22]);
    ctx.gpr[20] = (ctx.gpr[4] - ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[22]);
    ctx.gpr[18] = (2227u << 16u);
    goto L_089CD390;
L_089CD390:
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_089CD430;
      }
      goto L_089CD3A0;
    }
L_089CD3A0:
    ctx.gpr[16] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    goto L_089CD3B0;
L_089CD3B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (0x089CD3C0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 228u, 0x089C91F8u>(ctx, &aot_mem) && ctx.pc == 0x089CD3C0u) goto L_089CD3C0;
    return;
L_089CD3C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD428;
      }
      goto L_089CD3C8;
    }
L_089CD3C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089CD3DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 228u, 0x089C91F8u>(ctx, &aot_mem) && ctx.pc == 0x089CD3DCu) goto L_089CD3DC;
    return;
L_089CD3DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD420;
      }
      goto L_089CD3E4;
    }
L_089CD3E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089CD3F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 228u, 0x089C91F8u>(ctx, &aot_mem) && ctx.pc == 0x089CD3F8u) goto L_089CD3F8;
    return;
L_089CD3F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD418;
      }
      goto L_089CD400;
    }
L_089CD400:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_089CD3B0;
      }
      goto L_089CD410;
    }
L_089CD410:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD430;
      }
      goto L_089CD418;
    }
L_089CD418:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CD420;
    }
L_089CD420:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CD428;
    }
L_089CD428:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CD430;
    }
L_089CD430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[21] = (ctx.gpr[23] + ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_089CD390;
      }
      goto L_089CD440;
    }
L_089CD440:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    goto L_089CD444;
L_089CD444:
    ctx.gpr[31] = (0x089CD44Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 914u, 0x089C7BFCu>(ctx, &aot_mem) && ctx.pc == 0x089CD44Cu) goto L_089CD44C;
    return;
L_089CD44C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD488;
      }
      goto L_089CD454;
    }
L_089CD454:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089CD464u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 756u, 0x089C7228u>(ctx, &aot_mem) && ctx.pc == 0x089CD464u) goto L_089CD464;
    return;
L_089CD464:
    ctx.gpr[31] = (0x089CD46Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 839u, 0x08AA3F84u>(ctx, &aot_mem) && ctx.pc == 0x089CD46Cu) goto L_089CD46C;
    return;
L_089CD46C:
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD480;
      }
      goto L_089CD478;
    }
L_089CD478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD444;
      }
      goto L_089CD480;
    }
L_089CD480:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CD488;
    }
L_089CD488:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
      if (branch_taken) {
          goto L_089CD4D4;
      }
      goto L_089CD498;
    }
L_089CD498:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(10));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
        goto L_089CD4B4;
    }
    goto L_089CD4B4;
L_089CD4B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[23]);
    ctx.gpr[23] = (0u | 99u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
        goto L_089CD4C8;
    }
    goto L_089CD4C8;
L_089CD4C8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_089CD510;
      }
      goto L_089CD4D4;
    }
L_089CD4D4:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (0u | 99u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 99 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_089CD4E8;
    }
    goto L_089CD4E8;
L_089CD4E8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-10));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[5]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
        goto L_089CD508;
    }
    goto L_089CD508;
L_089CD508:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089CD510;
L_089CD510:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[5];
    ctx.gpr[20] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_089CD5F8;
      }
      goto L_089CD524;
    }
L_089CD524:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[22] = (ctx.gpr[23] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[22]);
    ctx.gpr[20] = (ctx.gpr[4] - ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[22]);
    ctx.gpr[18] = (2227u << 16u);
    goto L_089CD548;
L_089CD548:
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_089CD5E8;
      }
      goto L_089CD558;
    }
L_089CD558:
    ctx.gpr[16] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    goto L_089CD568;
L_089CD568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (0x089CD578u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 250u, 0x089C9370u>(ctx, &aot_mem) && ctx.pc == 0x089CD578u) goto L_089CD578;
    return;
L_089CD578:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD5E0;
      }
      goto L_089CD580;
    }
L_089CD580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089CD594u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 250u, 0x089C9370u>(ctx, &aot_mem) && ctx.pc == 0x089CD594u) goto L_089CD594;
    return;
L_089CD594:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD5D8;
      }
      goto L_089CD59C;
    }
L_089CD59C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089CD5B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 250u, 0x089C9370u>(ctx, &aot_mem) && ctx.pc == 0x089CD5B0u) goto L_089CD5B0;
    return;
L_089CD5B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD5D0;
      }
      goto L_089CD5B8;
    }
L_089CD5B8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_089CD568;
      }
      goto L_089CD5C8;
    }
L_089CD5C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD5E8;
      }
      goto L_089CD5D0;
    }
L_089CD5D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CD5D8;
    }
L_089CD5D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CD5E0;
    }
L_089CD5E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CD5E8;
    }
L_089CD5E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[21] = (ctx.gpr[21] - ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[22]);
      if (branch_taken) {
          goto L_089CD548;
      }
      goto L_089CD5F8;
    }
L_089CD5F8:
    ctx.gpr[31] = (0x089CD600u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 272u, 0x089C94ECu>(ctx, &aot_mem) && ctx.pc == 0x089CD600u) goto L_089CD600;
    return;
L_089CD600:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD624;
      }
      goto L_089CD608;
    }
L_089CD608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[5];
    ctx.gpr[20] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_089CD62C;
      }
      goto L_089CD61C;
    }
L_089CD61C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD6FC;
      }
      goto L_089CD624;
    }
L_089CD624:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CD62C;
    }
L_089CD62C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[22] = (ctx.gpr[23] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[22]);
    ctx.gpr[20] = (ctx.gpr[4] - ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[22]);
    ctx.gpr[18] = (2227u << 16u);
    goto L_089CD64C;
L_089CD64C:
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_089CD6EC;
      }
      goto L_089CD65C;
    }
L_089CD65C:
    ctx.gpr[16] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    goto L_089CD66C;
L_089CD66C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (0x089CD67Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 228u, 0x089C91F8u>(ctx, &aot_mem) && ctx.pc == 0x089CD67Cu) goto L_089CD67C;
    return;
L_089CD67C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD6E4;
      }
      goto L_089CD684;
    }
L_089CD684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089CD698u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 228u, 0x089C91F8u>(ctx, &aot_mem) && ctx.pc == 0x089CD698u) goto L_089CD698;
    return;
L_089CD698:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD6DC;
      }
      goto L_089CD6A0;
    }
L_089CD6A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089CD6B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 228u, 0x089C91F8u>(ctx, &aot_mem) && ctx.pc == 0x089CD6B4u) goto L_089CD6B4;
    return;
L_089CD6B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD6D4;
      }
      goto L_089CD6BC;
    }
L_089CD6BC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_089CD66C;
      }
      goto L_089CD6CC;
    }
L_089CD6CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD6EC;
      }
      goto L_089CD6D4;
    }
L_089CD6D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CD6DC;
    }
L_089CD6DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CD6E4;
    }
L_089CD6E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CD6EC;
    }
L_089CD6EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[21] = (ctx.gpr[21] - ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[22]);
      if (branch_taken) {
          goto L_089CD64C;
      }
      goto L_089CD6FC;
    }
L_089CD6FC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8512));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8500));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8452));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8428));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[4]);
    ctx.gpr[30] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-8492));
    goto L_089CD734;
L_089CD734:
    ctx.gpr[31] = (0x089CD73Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 839u, 0x08AA3F84u>(ctx, &aot_mem) && ctx.pc == 0x089CD73Cu) goto L_089CD73C;
    return;
L_089CD73C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD778;
      }
      goto L_089CD74C;
    }
L_089CD74C:
    ctx.gpr[31] = (0x089CD754u);
    ctx.gpr[4] = (0u | 131u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 183u, 0x089C8F74u>(ctx, &aot_mem) && ctx.pc == 0x089CD754u) goto L_089CD754;
    return;
L_089CD754:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD764;
      }
      goto L_089CD75C;
    }
L_089CD75C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD778;
      }
      goto L_089CD764;
    }
L_089CD764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (0x089CD770u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 756u, 0x089C7228u>(ctx, &aot_mem) && ctx.pc == 0x089CD770u) goto L_089CD770;
    return;
L_089CD770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD734;
      }
      goto L_089CD778;
    }
L_089CD778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (0x089CD784u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 756u, 0x089C7228u>(ctx, &aot_mem) && ctx.pc == 0x089CD784u) goto L_089CD784;
    return;
L_089CD784:
    ctx.gpr[31] = (0x089CD78Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 209u, 0x089D5A30u>(ctx, &aot_mem) && ctx.pc == 0x089CD78Cu) goto L_089CD78C;
    return;
L_089CD78C:
    ctx.gpr[31] = (0x089CD794u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 134u, 0x08968C80u>(ctx, &aot_mem) && ctx.pc == 0x089CD794u) goto L_089CD794;
    return;
L_089CD794:
    ctx.gpr[31] = (0x089CD79Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 839u, 0x08AA3F84u>(ctx, &aot_mem) && ctx.pc == 0x089CD79Cu) goto L_089CD79C;
    return;
L_089CD79C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD7D8;
      }
      goto L_089CD7AC;
    }
L_089CD7AC:
    ctx.gpr[31] = (0x089CD7B4u);
    ctx.gpr[4] = (0u | 131u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 183u, 0x089C8F74u>(ctx, &aot_mem) && ctx.pc == 0x089CD7B4u) goto L_089CD7B4;
    return;
L_089CD7B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD7C4;
      }
      goto L_089CD7BC;
    }
L_089CD7BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD7D8;
      }
      goto L_089CD7C4;
    }
L_089CD7C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (0x089CD7D0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 756u, 0x089C7228u>(ctx, &aot_mem) && ctx.pc == 0x089CD7D0u) goto L_089CD7D0;
    return;
L_089CD7D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD794;
      }
      goto L_089CD7D8;
    }
L_089CD7D8:
    ctx.gpr[31] = (0x089CD7E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 839u, 0x08AA3F84u>(ctx, &aot_mem) && ctx.pc == 0x089CD7E0u) goto L_089CD7E0;
    return;
L_089CD7E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDA9C;
      }
      goto L_089CD7F0;
    }
L_089CD7F0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089CD7FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8580));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089CD7FCu) goto L_089CD7FC;
    return;
L_089CD7FC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_089CD818;
L_089CD818:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_089CD914;
      }
      goto L_089CD820;
    }
L_089CD820:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD914;
      }
      goto L_089CD828;
    }
L_089CD828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_089CD848;
    }
    goto L_089CD840;
L_089CD840:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089CD84C;
      }
      goto L_089CD848;
    }
L_089CD848:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_089CD84C;
L_089CD84C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD864;
      }
      goto L_089CD854;
    }
L_089CD854:
    ctx.gpr[31] = (0x089CD85Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 697u, 0x089A2E7Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD85Cu) goto L_089CD85C;
    return;
L_089CD85C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
        goto L_089CD86C;
    }
    goto L_089CD864;
L_089CD864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089CD904;
      }
      goto L_089CD86C;
    }
L_089CD86C:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (ctx.gpr[5] & 131u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD900;
      }
      goto L_089CD894;
    }
L_089CD894:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_089CD8C8;
      }
      goto L_089CD8A4;
    }
L_089CD8A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089CD8B8;
      }
      goto L_089CD8B0;
    }
L_089CD8B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD8C8;
      }
      goto L_089CD8B8;
    }
L_089CD8B8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CD8A4;
      }
      goto L_089CD8C8;
    }
L_089CD8C8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089CD8DC;
      }
      goto L_089CD8D0;
    }
L_089CD8D0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_089CD8DC;
L_089CD8DC:
    ctx.gpr[31] = (0x089CD8E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F7ACu>(ctx, &aot_mem) && ctx.pc == 0x089CD8E4u) goto L_089CD8E4;
    return;
L_089CD8E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
      if (branch_taken) {
          goto L_089CD8F8;
      }
      goto L_089CD8EC;
    }
L_089CD8EC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CD900;
      }
      goto L_089CD8F8;
    }
L_089CD8F8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    goto L_089CD900;
L_089CD900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089CD904;
L_089CD904:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(3248));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089CD818;
      }
      goto L_089CD914;
    }
L_089CD914:
    ctx.gpr[23] = (2226u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-8544));
    goto L_089CD91C;
L_089CD91C:
    ctx.gpr[31] = (0x089CD924u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 839u, 0x08AA3F84u>(ctx, &aot_mem) && ctx.pc == 0x089CD924u) goto L_089CD924;
    return;
L_089CD924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDA9C;
      }
      goto L_089CD934;
    }
L_089CD934:
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u | 10000u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[22] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_089CD98C;
      }
      goto L_089CD94C;
    }
L_089CD94C:
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_089CD950;
L_089CD950:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089CD964;
      }
      goto L_089CD95C;
    }
L_089CD95C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD97C;
      }
      goto L_089CD964;
    }
L_089CD964:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(224)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD97C;
      }
      goto L_089CD974;
    }
L_089CD974:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    goto L_089CD97C;
L_089CD97C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CD950;
      }
      goto L_089CD98C;
    }
L_089CD98C:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089CD9A8;
      }
      goto L_089CD994;
    }
L_089CD994:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089CD9A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8564));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089CD9A0u) goto L_089CD9A0;
    return;
L_089CD9A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDA9C;
      }
      goto L_089CD9A8;
    }
L_089CD9A8:
    ctx.gpr[22] = (ctx.gpr[22] << 2u);
    ctx.gpr[22] = (ctx.gpr[29] + ctx.gpr[22]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x089CD9BCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD9BCu) goto L_089CD9BC;
    return;
L_089CD9BC:
    ctx.gpr[31] = (0x089CD9C4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 627u, 0x089C6A7Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD9C4u) goto L_089CD9C4;
    return;
L_089CD9C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089CDA3C;
      }
      goto L_089CD9D8;
    }
L_089CD9D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_089CD9F8;
    }
    goto L_089CD9F0;
L_089CD9F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089CD9FC;
      }
      goto L_089CD9F8;
    }
L_089CD9F8:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[18]);
    goto L_089CD9FC;
L_089CD9FC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDA28;
      }
      goto L_089CDA04;
    }
L_089CDA04:
    ctx.gpr[31] = (0x089CDA0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 697u, 0x089A2E7Cu>(ctx, &aot_mem) && ctx.pc == 0x089CDA0Cu) goto L_089CDA0C;
    return;
L_089CDA0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDA28;
      }
      goto L_089CDA14;
    }
L_089CDA14:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089CDA28;
      }
      goto L_089CDA20;
    }
L_089CDA20:
    ctx.gpr[31] = (0x089CDA28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 296u, 0x08A9D7E4u>(ctx, &aot_mem) && ctx.pc == 0x089CDA28u) goto L_089CDA28;
    return;
L_089CDA28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(3248));
      if (branch_taken) {
          goto L_089CD9D8;
      }
      goto L_089CDA3C;
    }
L_089CDA3C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089CDA50u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089CDA50u) goto L_089CDA50;
    return;
L_089CDA50:
    ctx.gpr[31] = (0x089CDA58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 914u, 0x089C7BFCu>(ctx, &aot_mem) && ctx.pc == 0x089CDA58u) goto L_089CDA58;
    return;
L_089CDA58:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CDA70;
      }
      goto L_089CDA60;
    }
L_089CDA60:
    ctx.gpr[31] = (0x089CDA68u);
    ctx.gpr[4] = (0u | 131u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 183u, 0x089C8F74u>(ctx, &aot_mem) && ctx.pc == 0x089CDA68u) goto L_089CDA68;
    return;
L_089CDA68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDA8C;
      }
      goto L_089CDA70;
    }
L_089CDA70:
    ctx.gpr[31] = (0x089CDA78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089CDA78u) goto L_089CDA78;
    return;
L_089CDA78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (0x089CDA84u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 756u, 0x089C7228u>(ctx, &aot_mem) && ctx.pc == 0x089CDA84u) goto L_089CDA84;
    return;
L_089CDA84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDA94;
      }
      goto L_089CDA8C;
    }
L_089CDA8C:
    ctx.gpr[31] = (0x089CDA94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089CDA94u) goto L_089CDA94;
    return;
L_089CDA94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD91C;
      }
      goto L_089CDA9C;
    }
L_089CDA9C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[30]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089CDAA8;
L_089CDAA8:
    ctx.gpr[31] = (0x089CDAB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 839u, 0x08AA3F84u>(ctx, &aot_mem) && ctx.pc == 0x089CDAB0u) goto L_089CDAB0;
    return;
L_089CDAB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CDAC0;
    }
L_089CDAC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CDACC;
    }
L_089CDACC:
    ctx.gpr[31] = (0x089CDAD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089CDAD4u) goto L_089CDAD4;
    return;
L_089CDAD4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(356));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(436));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089CDAFC;
      }
      goto L_089CDAEC;
    }
L_089CDAEC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089CDAF0;
L_089CDAF0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] != ctx.gpr[6]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
        goto L_089CDAF0;
    }
    goto L_089CDAFC;
L_089CDAFC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (0u | 10000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[4]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[29] | 0u);
    goto L_089CDB14;
L_089CDB14:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7552)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CDB40;
      }
      goto L_089CDB38;
    }
L_089CDB38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC3C;
      }
      goto L_089CDB40;
    }
L_089CDB40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(356)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] << 4u);
      if (branch_taken) {
          goto L_089CDB54;
      }
      goto L_089CDB4C;
    }
L_089CDB4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC3C;
      }
      goto L_089CDB54;
    }
L_089CDB54:
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC3C;
      }
      goto L_089CDB78;
    }
L_089CDB78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[4] & 131u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC3C;
      }
      goto L_089CDB88;
    }
L_089CDB88:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089CDBB0;
      }
      goto L_089CDB9C;
    }
L_089CDB9C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CDBB0;
L_089CDBB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(28))))));
      if (branch_taken) {
          goto L_089CDC28;
      }
      goto L_089CDBC4;
    }
L_089CDBC4:
    ctx.gpr[17] = (0u | 0u);
    goto L_089CDBC8;
L_089CDBC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_089CDBE8;
    }
    goto L_089CDBE0;
L_089CDBE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CDBEC;
      }
      goto L_089CDBE8;
    }
L_089CDBE8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_089CDBEC;
L_089CDBEC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC14;
      }
      goto L_089CDBF4;
    }
L_089CDBF4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089CDC14;
      }
      goto L_089CDC00;
    }
L_089CDC00:
    ctx.gpr[31] = (0x089CDC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F7ACu>(ctx, &aot_mem) && ctx.pc == 0x089CDC08u) goto L_089CDC08;
    return;
L_089CDC08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC14;
      }
      goto L_089CDC10;
    }
L_089CDC10:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5));
    goto L_089CDC14;
L_089CDC14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1760));
      if (branch_taken) {
          goto L_089CDBC8;
      }
      goto L_089CDC28;
    }
L_089CDC28:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC3C;
      }
      goto L_089CDC34;
    }
L_089CDC34:
    ctx.gpr[30] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[21]);
    goto L_089CDC3C;
L_089CDC3C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CDB14;
      }
      goto L_089CDC50;
    }
L_089CDC50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[22] = (ctx.gpr[4] << 2u);
      if (branch_taken) {
          goto L_089CDC74;
      }
      goto L_089CDC60;
    }
L_089CDC60:
    ctx.gpr[31] = (0x089CDC68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089CDC68u) goto L_089CDC68;
    return;
L_089CDC68:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089CDD84;
      }
      goto L_089CDC74;
    }
L_089CDC74:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7552)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089CDD2C;
      }
      goto L_089CDCA0;
    }
L_089CDCA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_089CDCC0;
    }
    goto L_089CDCB8;
L_089CDCB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089CDCC4;
      }
      goto L_089CDCC0;
    }
L_089CDCC0:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_089CDCC4;
L_089CDCC4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD18;
      }
      goto L_089CDCD0;
    }
L_089CDCD0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089CDD18;
      }
      goto L_089CDCDC;
    }
L_089CDCDC:
    ctx.gpr[31] = (0x089CDCE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 541u, 0x0889EB14u>(ctx, &aot_mem) && ctx.pc == 0x089CDCE4u) goto L_089CDCE4;
    return;
L_089CDCE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD18;
      }
      goto L_089CDCEC;
    }
L_089CDCEC:
    ctx.gpr[31] = (0x089CDCF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x089CDCF4u) goto L_089CDCF4;
    return;
L_089CDCF4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD18;
      }
      goto L_089CDCFC;
    }
L_089CDCFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089CDD18u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CDD18u) goto L_089CDD18;
    return;
L_089CDD18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1760));
      if (branch_taken) {
          goto L_089CDCA0;
      }
      goto L_089CDD2C;
    }
L_089CDD2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[31] = (0x089CDD38u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089CDD38u) goto L_089CDD38;
    return;
L_089CDD38:
    ctx.gpr[31] = (0x089CDD40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 25u, 0x089C81E0u>(ctx, &aot_mem) && ctx.pc == 0x089CDD40u) goto L_089CDD40;
    return;
L_089CDD40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD64;
      }
      goto L_089CDD48;
    }
L_089CDD48:
    ctx.gpr[31] = (0x089CDD50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089CDD50u) goto L_089CDD50;
    return;
L_089CDD50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (0x089CDD5Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 756u, 0x089C7228u>(ctx, &aot_mem) && ctx.pc == 0x089CDD5Cu) goto L_089CDD5C;
    return;
L_089CDD5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD84;
      }
      goto L_089CDD64;
    }
L_089CDD64:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[22]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(356), ctx.gpr[4]);
    ctx.gpr[31] = (0x089CDD7Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089CDD7Cu) goto L_089CDD7C;
    return;
L_089CDD7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDAFC;
      }
      goto L_089CDD84;
    }
L_089CDD84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDAA8;
      }
      goto L_089CDD8C;
    }
L_089CDD8C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CDDC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[20] = (2229u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-28284)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[5] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[21] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7388)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-7368));
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CE0A0;
      }
      goto L_089CDE38;
    }
L_089CDE38:
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[23] = (2230u << 16u);
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    goto L_089CDE48;
L_089CDE48:
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 3u);
      if (branch_taken) {
          goto L_089CDE8C;
      }
      goto L_089CDE68;
    }
L_089CDE68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-6280)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDE8C;
      }
      goto L_089CDE74;
    }
L_089CDE74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CDE8C;
      }
      goto L_089CDE84;
    }
L_089CDE84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089CE098;
      }
      goto L_089CDE8C;
    }
L_089CDE8C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDFA8;
      }
      goto L_089CDE98;
    }
L_089CDE98:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_089CDEC0;
      }
      goto L_089CDEAC;
    }
L_089CDEAC:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CDEC0;
L_089CDEC0:
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32476)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089CDF20;
      }
      goto L_089CDEEC;
    }
L_089CDEEC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089CDF20;
      }
      goto L_089CDEF4;
    }
L_089CDEF4:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4900));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089CDF14u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(13)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089CDF14u) goto L_089CDF14;
    return;
L_089CDF14:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-28284)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_089CE098;
      }
      goto L_089CDF20;
    }
L_089CDF20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CDF38u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CDF38u) goto L_089CDF38;
    return;
L_089CDF38:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-28284)));
      if (branch_taken) {
          goto L_089CDFA0;
      }
      goto L_089CDF48;
    }
L_089CDF48:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(6115));
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089CDFA0;
      }
      goto L_089CDF68;
    }
L_089CDF68:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089CDFA0;
      }
      goto L_089CDF70;
    }
L_089CDF70:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089CDF94u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089CDF94u) goto L_089CDF94;
    return;
L_089CDF94:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-28284)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_089CE098;
      }
      goto L_089CDFA0;
    }
L_089CDFA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDFD4;
      }
      goto L_089CDFA8;
    }
L_089CDFA8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6115 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089CDFD4;
      }
      goto L_089CDFB4;
    }
L_089CDFB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CDFCC;
      }
      goto L_089CDFC0;
    }
L_089CDFC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089CDFD4;
      }
      goto L_089CDFCC;
    }
L_089CDFCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089CE098;
      }
      goto L_089CDFD4;
    }
L_089CDFD4:
    ctx.gpr[16] = (ctx.gpr[17] << 4u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089CDFF4u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 364u, 0x089C5824u>(ctx, &aot_mem) && ctx.pc == 0x089CDFF4u) goto L_089CDFF4;
    return;
L_089CDFF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-28284)));
      if (branch_taken) {
          goto L_089CE044;
      }
      goto L_089CDFFC;
    }
L_089CDFFC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_089CE018;
      }
      goto L_089CE010;
    }
L_089CE010:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    goto L_089CE018;
L_089CE018:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE094;
      }
      goto L_089CE028;
    }
L_089CE028:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE094;
      }
      goto L_089CE038;
    }
L_089CE038:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
      if (branch_taken) {
          goto L_089CE094;
      }
      goto L_089CE044;
    }
L_089CE044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-8060)));
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-8060), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(13)));
    ctx.gpr[6] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE07C;
      }
      goto L_089CE064;
    }
L_089CE064:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-6280)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-6280), ctx.gpr[4]);
    goto L_089CE07C;
L_089CE07C:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x089CE088u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 362u, 0x089C57FCu>(ctx, &aot_mem) && ctx.pc == 0x089CE088u) goto L_089CE088;
    return;
L_089CE088:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[21]);
    goto L_089CE094;
L_089CE094:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089CE098;
L_089CE098:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CDE48;
      }
      goto L_089CE0A0;
    }
L_089CE0A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089CE0B4;
      }
      goto L_089CE0B0;
    }
L_089CE0B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089CE0B4;
L_089CE0B4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089CE0DC;
      }
      goto L_089CE0BC;
    }
L_089CE0BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6280)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE0DC;
      }
      goto L_089CE0C8;
    }
L_089CE0C8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6280), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x089CE0D8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089CDDC8;
L_089CE0D8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_089CE0DC;
L_089CE0DC:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CE110:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[17] << 4u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[22] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28284)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[4] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CE170u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B0BCB4u;
    return;
L_089CE170:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x089CE180u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B0BCA4u;
    return;
L_089CE180:
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4900 ? 1u : 0u);
    ctx.gpr[31] = (0x089CE18Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 363u, 0x089C581Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE18Cu) goto L_089CE18C;
    return;
L_089CE18C:
    ctx.gpr[4] = (ctx.gpr[2] << 11u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CE378;
      }
      goto L_089CE1A0;
    }
L_089CE1A0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089CE1C8;
      }
      goto L_089CE1B4;
    }
L_089CE1B4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CE1C8;
L_089CE1C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CE1E0u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE1E0u) goto L_089CE1E0;
    return;
L_089CE1E0:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27840)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089CE210;
      }
      goto L_089CE204;
    }
L_089CE204:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089CE228;
      }
      goto L_089CE210;
    }
L_089CE210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[21] << 5u);
    ctx.gpr[6] = (ctx.gpr[21] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CE228;
L_089CE228:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
      if (branch_taken) {
          goto L_089CE34C;
      }
      goto L_089CE230;
    }
L_089CE230:
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[19];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_089CE260;
      }
      goto L_089CE23C;
    }
L_089CE23C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8072)));
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[6] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE34C;
      }
      goto L_089CE260;
    }
L_089CE260:
    ctx.gpr[31] = (0x089CE268u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 633u, 0x0892FD10u>(ctx, &aot_mem) && ctx.pc == 0x089CE268u) goto L_089CE268;
    return;
L_089CE268:
    ctx.gpr[21] = (2275u << 16u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[19];
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1824));
      if (branch_taken) {
          goto L_089CE27C;
      }
      goto L_089CE274;
    }
L_089CE274:
    ctx.gpr[31] = (0x089CE27Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 547u, 0x08A8B354u>(ctx, &aot_mem) && ctx.pc == 0x089CE27Cu) goto L_089CE27C;
    return;
L_089CE27C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089CE288u);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 173u, 0x088E8DF4u>(ctx, &aot_mem) && ctx.pc == 0x089CE288u) goto L_089CE288;
    return;
L_089CE288:
    ctx.gpr[31] = (0x089CE290u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(30))))));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC6Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE290u) goto L_089CE290;
    return;
L_089CE290:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_089CE2B0;
      }
      goto L_089CE2A0;
    }
L_089CE2A0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_089CE2B0;
      }
      goto L_089CE2A8;
    }
L_089CE2A8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CE2C4;
      }
      goto L_089CE2B0;
    }
L_089CE2B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CE2BCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089CE6E0;
L_089CE2BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089CE2F8;
      }
      goto L_089CE2C4;
    }
L_089CE2C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CE2D0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089CE6E0;
L_089CE2D0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE2F8;
      }
      goto L_089CE2DC;
    }
L_089CE2DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CE2F8;
      }
      goto L_089CE2EC;
    }
L_089CE2EC:
    ctx.gpr[31] = (0x089CE2F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 531u, 0x089CA4ECu>(ctx, &aot_mem) && ctx.pc == 0x089CE2F4u) goto L_089CE2F4;
    return;
L_089CE2F4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_089CE2F8;
L_089CE2F8:
    ctx.gpr[31] = (0x089CE300u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x089CE300u) goto L_089CE300;
    return;
L_089CE300:
    ctx.gpr[31] = (0x089CE308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 781u, 0x089C737Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE308u) goto L_089CE308;
    return;
L_089CE308:
    ctx.gpr[31] = (0x089CE310u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(30))))));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 661u, 0x0892FF24u>(ctx, &aot_mem) && ctx.pc == 0x089CE310u) goto L_089CE310;
    return;
L_089CE310:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089CE320;
      }
      goto L_089CE318;
    }
L_089CE318:
    ctx.gpr[31] = (0x089CE320u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 551u, 0x08A8B3D0u>(ctx, &aot_mem) && ctx.pc == 0x089CE320u) goto L_089CE320;
    return;
L_089CE320:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_089CE370;
      }
      goto L_089CE328;
    }
L_089CE328:
    ctx.gpr[31] = (0x089CE330u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x089CE330u) goto L_089CE330;
    return;
L_089CE330:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[31] = (0x089CE344u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(13)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089CE344u) goto L_089CE344;
    return;
L_089CE344:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CE6B0;
      }
      goto L_089CE34C;
    }
L_089CE34C:
    ctx.gpr[31] = (0x089CE354u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x089CE354u) goto L_089CE354;
    return;
L_089CE354:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[31] = (0x089CE368u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(13)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089CE368u) goto L_089CE368;
    return;
L_089CE368:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CE6B0;
      }
      goto L_089CE370;
    }
L_089CE370:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE3F0;
      }
      goto L_089CE378;
    }
L_089CE378:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6100 ? 1u : 0u);
      if (branch_taken) {
          goto L_089CE450;
      }
      goto L_089CE380;
    }
L_089CE380:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE450;
      }
      goto L_089CE388;
    }
L_089CE388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[4] & 135u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE3B0;
      }
      goto L_089CE3A0;
    }
L_089CE3A0:
    ctx.gpr[31] = (0x089CE3A8u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4900));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 289u, 0x089C9610u>(ctx, &aot_mem) && ctx.pc == 0x089CE3A8u) goto L_089CE3A8;
    return;
L_089CE3A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE440;
      }
      goto L_089CE3B0;
    }
L_089CE3B0:
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(1824));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089CE3C4u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 173u, 0x088E8DF4u>(ctx, &aot_mem) && ctx.pc == 0x089CE3C4u) goto L_089CE3C4;
    return;
L_089CE3C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CE3D4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 415u, 0x089C9D98u>(ctx, &aot_mem) && ctx.pc == 0x089CE3D4u) goto L_089CE3D4;
    return;
L_089CE3D4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089CE3E0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x089CE3E0u) goto L_089CE3E0;
    return;
L_089CE3E0:
    ctx.gpr[31] = (0x089CE3E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 781u, 0x089C737Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE3E8u) goto L_089CE3E8;
    return;
L_089CE3E8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE400;
      }
      goto L_089CE3F0;
    }
L_089CE3F0:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE568;
      }
      goto L_089CE3F8;
    }
L_089CE3F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE608;
      }
      goto L_089CE400;
    }
L_089CE400:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4900));
    ctx.gpr[31] = (0x089CE410u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8392));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 582u, 0x0892F9ECu>(ctx, &aot_mem) && ctx.pc == 0x089CE410u) goto L_089CE410;
    return;
L_089CE410:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CE41Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE41Cu) goto L_089CE41C;
    return;
L_089CE41C:
    ctx.gpr[31] = (0x089CE424u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x089CE424u) goto L_089CE424;
    return;
L_089CE424:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[31] = (0x089CE438u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(13)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089CE438u) goto L_089CE438;
    return;
L_089CE438:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CE6B0;
      }
      goto L_089CE440;
    }
L_089CE440:
    ctx.gpr[31] = (0x089CE448u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x089CE448u) goto L_089CE448;
    return;
L_089CE448:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CE6B0;
      }
      goto L_089CE450;
    }
L_089CE450:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6115 ? 1u : 0u);
      if (branch_taken) {
          goto L_089CE4D8;
      }
      goto L_089CE45C;
    }
L_089CE45C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE4D8;
      }
      goto L_089CE464;
    }
L_089CE464:
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(1824));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089CE478u);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 173u, 0x088E8DF4u>(ctx, &aot_mem) && ctx.pc == 0x089CE478u) goto L_089CE478;
    return;
L_089CE478:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CE484u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 444u, 0x089CA00Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE484u) goto L_089CE484;
    return;
L_089CE484:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089CE490u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x089CE490u) goto L_089CE490;
    return;
L_089CE490:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE3F0;
      }
      goto L_089CE498;
    }
L_089CE498:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6100));
    ctx.gpr[31] = (0x089CE4A8u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8368));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 246u, 0x08985A54u>(ctx, &aot_mem) && ctx.pc == 0x089CE4A8u) goto L_089CE4A8;
    return;
L_089CE4A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CE4B4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE4B4u) goto L_089CE4B4;
    return;
L_089CE4B4:
    ctx.gpr[31] = (0x089CE4BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x089CE4BCu) goto L_089CE4BC;
    return;
L_089CE4BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[31] = (0x089CE4D0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(13)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089CE4D0u) goto L_089CE4D0;
    return;
L_089CE4D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CE6B0;
      }
      goto L_089CE4D8;
    }
L_089CE4D8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE550;
      }
      goto L_089CE4E0;
    }
L_089CE4E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[4] & 135u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE508;
      }
      goto L_089CE4F8;
    }
L_089CE4F8:
    ctx.gpr[31] = (0x089CE500u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6115));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 315u, 0x089C9758u>(ctx, &aot_mem) && ctx.pc == 0x089CE500u) goto L_089CE500;
    return;
L_089CE500:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE540;
      }
      goto L_089CE508;
    }
L_089CE508:
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(1824));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089CE51Cu);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 173u, 0x088E8DF4u>(ctx, &aot_mem) && ctx.pc == 0x089CE51Cu) goto L_089CE51C;
    return;
L_089CE51C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CE528u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 433u, 0x089C9F00u>(ctx, &aot_mem) && ctx.pc == 0x089CE528u) goto L_089CE528;
    return;
L_089CE528:
    ctx.gpr[31] = (0x089CE530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 465u, 0x08A8ACB0u>(ctx, &aot_mem) && ctx.pc == 0x089CE530u) goto L_089CE530;
    return;
L_089CE530:
    ctx.gpr[31] = (0x089CE538u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x089CE538u) goto L_089CE538;
    return;
L_089CE538:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE3F0;
      }
      goto L_089CE540;
    }
L_089CE540:
    ctx.gpr[31] = (0x089CE548u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x089CE548u) goto L_089CE548;
    return;
L_089CE548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CE6B0;
      }
      goto L_089CE550;
    }
L_089CE550:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CE560u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8344));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089CE560u) goto L_089CE560;
    return;
L_089CE560:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE3F0;
      }
      goto L_089CE568;
    }
L_089CE568:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_089CE67C;
      }
      goto L_089CE578;
    }
L_089CE578:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CE67C;
      }
      goto L_089CE580;
    }
L_089CE580:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_089CE59C;
      }
      goto L_089CE58C;
    }
L_089CE58C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_089CE59C;
      }
      goto L_089CE594;
    }
L_089CE594:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CE5D8;
      }
      goto L_089CE59C;
    }
L_089CE59C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE5D8;
      }
      goto L_089CE5AC;
    }
L_089CE5AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE5D0;
      }
      goto L_089CE5C4;
    }
L_089CE5C4:
    ctx.gpr[4] = (0u | 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089CE5D8;
      }
      goto L_089CE5D0;
    }
L_089CE5D0:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089CE5D8;
L_089CE5D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & 131u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE67C;
      }
      goto L_089CE5E8;
    }
L_089CE5E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7428));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089CE600u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 361u, 0x089C57E0u>(ctx, &aot_mem) && ctx.pc == 0x089CE600u) goto L_089CE600;
    return;
L_089CE600:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE67C;
      }
      goto L_089CE608;
    }
L_089CE608:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6100 ? 1u : 0u);
      if (branch_taken) {
          goto L_089CE648;
      }
      goto L_089CE610;
    }
L_089CE610:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE648;
      }
      goto L_089CE618;
    }
L_089CE618:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE67C;
      }
      goto L_089CE628;
    }
L_089CE628:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7428));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089CE640u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 361u, 0x089C57E0u>(ctx, &aot_mem) && ctx.pc == 0x089CE640u) goto L_089CE640;
    return;
L_089CE640:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE67C;
      }
      goto L_089CE648;
    }
L_089CE648:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6115 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE67C;
      }
      goto L_089CE654;
    }
L_089CE654:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE67C;
      }
      goto L_089CE664;
    }
L_089CE664:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7428));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089CE67Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 361u, 0x089C57E0u>(ctx, &aot_mem) && ctx.pc == 0x089CE67Cu) goto L_089CE67C;
    return;
L_089CE67C:
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[31] = (0x089CE694u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 363u, 0x089C581Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE694u) goto L_089CE694;
    return;
L_089CE694:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[2] << 11u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089CE6B0;
L_089CE6B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CE6E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089CE728;
      }
      goto L_089CE714;
    }
L_089CE714:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CE728;
L_089CE728:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089CE74Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 363u, 0x089C581Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE74Cu) goto L_089CE74C;
    return;
L_089CE74C:
    ctx.gpr[5] = (109u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] << 11u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(25708));
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089CE83C;
      }
      goto L_089CE768;
    }
L_089CE768:
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE83C;
      }
      goto L_089CE774;
    }
L_089CE774:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE83C;
      }
      goto L_089CE784;
    }
L_089CE784:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE83C;
      }
      goto L_089CE79C;
    }
L_089CE79C:
    ctx.gpr[4] = (109u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25708));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089CE7BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 559u, 0x0886AFD0u>(ctx, &aot_mem) && ctx.pc == 0x089CE7BCu) goto L_089CE7BC;
    return;
L_089CE7BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089CE7E0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE7E0u) goto L_089CE7E0;
    return;
L_089CE7E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CE7F8u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE7F8u) goto L_089CE7F8;
    return;
L_089CE7F8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089CE85C;
      }
      goto L_089CE80C;
    }
L_089CE80C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CE81Cu);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE81Cu) goto L_089CE81C;
    return;
L_089CE81C:
    ctx.gpr[5] = (2204u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CE830u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22404));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 212u, 0x08AA5084u>(ctx, &aot_mem) && ctx.pc == 0x089CE830u) goto L_089CE830;
    return;
L_089CE830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089CE8A4;
      }
      goto L_089CE83C;
    }
L_089CE83C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CE854u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8312));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089CE854u) goto L_089CE854;
    return;
L_089CE854:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CE9A8;
      }
      goto L_089CE85C;
    }
L_089CE85C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CE86Cu);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE86Cu) goto L_089CE86C;
    return;
L_089CE86C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089CE8A4;
      }
      goto L_089CE880;
    }
L_089CE880:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CE890u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE890u) goto L_089CE890;
    return;
L_089CE890:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089CE89Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 355u, 0x089C5784u>(ctx, &aot_mem) && ctx.pc == 0x089CE89Cu) goto L_089CE89C;
    return;
L_089CE89C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    goto L_089CE8A4;
L_089CE8A4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CE8B4u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE8B4u) goto L_089CE8B4;
    return;
L_089CE8B4:
    ctx.gpr[31] = (0x089CE8BCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 247u, 0x08A7D5E0u>(ctx, &aot_mem) && ctx.pc == 0x089CE8BCu) goto L_089CE8BC;
    return;
L_089CE8BC:
    ctx.gpr[31] = (0x089CE8C4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 247u, 0x08A7D5E0u>(ctx, &aot_mem) && ctx.pc == 0x089CE8C4u) goto L_089CE8C4;
    return;
L_089CE8C4:
    ctx.gpr[31] = (0x089CE8CCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 255u, 0x08A7D65Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE8CCu) goto L_089CE8CC;
    return;
L_089CE8CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CE8E4u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE8E4u) goto L_089CE8E4;
    return;
L_089CE8E4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089CE910;
      }
      goto L_089CE8F0;
    }
L_089CE8F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CE908u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE908u) goto L_089CE908;
    return;
L_089CE908:
    ctx.gpr[31] = (0x089CE910u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 547u, 0x08A8B354u>(ctx, &aot_mem) && ctx.pc == 0x089CE910u) goto L_089CE910;
    return;
L_089CE910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089CE98C;
      }
      goto L_089CE930;
    }
L_089CE930:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_089CE970;
      }
      goto L_089CE940;
    }
L_089CE940:
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (ctx.gpr[9] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE970;
      }
      goto L_089CE954;
    }
L_089CE954:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[7] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_089CE970;
      }
      goto L_089CE964;
    }
L_089CE964:
    ctx.gpr[6] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE974;
      }
      goto L_089CE970;
    }
L_089CE970:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_089CE974;
L_089CE974:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089CE930;
      }
      goto L_089CE98C;
    }
L_089CE98C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 1u);
    goto L_089CE9A8;
L_089CE9A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CE9C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28508)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-28512)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (17096u << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28504), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[8] = (2277u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[8] + static_cast<std::uint32_t>(-6048));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(-6048), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19))))));
    ctx.gpr[9] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-28496), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28480)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-28500), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (16281u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-28460)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-28492), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[7] = (15744u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28472), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28456), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28484)));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28476), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CEB04u);
    ctx.gpr[5] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 141u, 0x08B04A00u>(ctx, &aot_mem) && ctx.pc == 0x089CEB04u) goto L_089CEB04;
    return;
L_089CEB04:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CEB14u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 845u, 0x08AFBAB4u>(ctx, &aot_mem) && ctx.pc == 0x089CEB14u) goto L_089CEB14;
    return;
L_089CEB14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CEB2Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 27u, 0x08B0416Cu>(ctx, &aot_mem) && ctx.pc == 0x089CEB2Cu) goto L_089CEB2C;
    return;
L_089CEB2C:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[31] = (0x089CEB3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28232));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x089CEB3Cu) goto L_089CEB3C;
    return;
L_089CEB3C:
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
L_089CEB54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 288u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089CEB9C;
      }
      goto L_089CEB7C;
    }
L_089CEB7C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CEBAC;
      }
      goto L_089CEB9C;
    }
L_089CEB9C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089CEBA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 27u, 0x08AB0208u>(ctx, &aot_mem) && ctx.pc == 0x089CEBA8u) goto L_089CEBA8;
    return;
L_089CEBA8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_089CEBAC;
L_089CEBAC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CEBBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CEBD4u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 27u, 0x08AB0208u>(ctx, &aot_mem) && ctx.pc == 0x089CEBD4u) goto L_089CEBD4;
    return;
L_089CEBD4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CEBE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CEC10u);
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8248));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 568u, 0x08AAEDE8u>(ctx, &aot_mem) && ctx.pc == 0x089CEC10u) goto L_089CEC10;
    return;
L_089CEC10:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089CEC20u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 221u, 0x08A5945Cu>(ctx, &aot_mem) && ctx.pc == 0x089CEC20u) goto L_089CEC20;
    return;
L_089CEC20:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CEC2Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 559u, 0x08AAED60u>(ctx, &aot_mem) && ctx.pc == 0x089CEC2Cu) goto L_089CEC2C;
    return;
L_089CEC2C:
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
L_089CEC44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CEC68;
      }
      goto L_089CEC58;
    }
L_089CEC58:
    ctx.gpr[31] = (0x089CEC60u);
    // nop
    goto L_089CEB54;
L_089CEC60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089CEC6C;
      }
      goto L_089CEC68;
    }
L_089CEC68:
    ctx.gpr[2] = (0u | 0u);
    goto L_089CEC6C;
L_089CEC6C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CEC78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CEC94u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_089CEC44;
L_089CEC94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CECA8;
      }
      goto L_089CEC9C;
    }
L_089CEC9C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CECA8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089CEBE8;
L_089CECA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CECBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CECF0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    goto L_089CEC44;
L_089CECF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CED64;
      }
      goto L_089CECF8;
    }
L_089CECF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089CED18;
      }
      goto L_089CED04;
    }
L_089CED04:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089CED10u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089CEBE8;
L_089CED10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CED64;
      }
      goto L_089CED18;
    }
L_089CED18:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089CED30u);
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8232));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 568u, 0x08AAEDE8u>(ctx, &aot_mem) && ctx.pc == 0x089CED30u) goto L_089CED30;
    return;
L_089CED30:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089CED40u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 568u, 0x08AAEDE8u>(ctx, &aot_mem) && ctx.pc == 0x089CED40u) goto L_089CED40;
    return;
L_089CED40:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089CED58u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 221u, 0x08A5945Cu>(ctx, &aot_mem) && ctx.pc == 0x089CED58u) goto L_089CED58;
    return;
L_089CED58:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089CED64u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 559u, 0x08AAED60u>(ctx, &aot_mem) && ctx.pc == 0x089CED64u) goto L_089CED64;
    return;
L_089CED64:
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
L_089CED88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 278u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_089CEDB4;
      }
      goto L_089CEDA4;
    }
L_089CEDA4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x089CEDB0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8188));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 559u, 0x08AAED60u>(ctx, &aot_mem) && ctx.pc == 0x089CEDB0u) goto L_089CEDB0;
    return;
L_089CEDB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089CEDB4;
L_089CEDB4:
    ctx.gpr[31] = (0x089CEDBCu);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089CEB54;
L_089CEDBC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CEDD0:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CEDE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CEE04u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 707u, 0x08883538u>(ctx, &aot_mem) && ctx.pc == 0x089CEE04u) goto L_089CEE04;
    return;
L_089CEE04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x089CEE14u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_089CEDD0;
L_089CEE14:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CEE24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CEE40u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_089CED88;
L_089CEE40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CEE50u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_089CEDE8;
L_089CEE50:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CEE64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089CEEC4;
      }
      goto L_089CEE9C;
    }
L_089CEE9C:
    ctx.gpr[8] = (32768u << 16u);
    ctx.gpr[9] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(56));
    ctx.gpr[7] = (0u | 12u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-3));
    ctx.gpr[31] = (0x089CEEBCu);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-8172));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 320u, 0x0894DDD0u>(ctx, &aot_mem) && ctx.pc == 0x089CEEBCu) goto L_089CEEBC;
    return;
L_089CEEBC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_089CEEC4;
L_089CEEC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
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
L_089CEF04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[7] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (0u | 200u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CEF48u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8168));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 549u, 0x08AAEC68u>(ctx, &aot_mem) && ctx.pc == 0x089CEF48u) goto L_089CEF48;
    return;
L_089CEF48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CEF54u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_089CEE64;
L_089CEF54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(696));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
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
L_089CEF8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089CEFDC;
      }
      goto L_089CEFA0;
    }
L_089CEFA0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(696)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
      if (branch_taken) {
          goto L_089CEFA0;
      }
      goto L_089CEFDC;
    }
L_089CEFDC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CEFE4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF03C;
      }
      goto L_089CEFF8;
    }
L_089CEFF8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_089CEFFC;
L_089CEFFC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(696)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089CEFFC;
      }
      goto L_089CF03C;
    }
L_089CF03C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF044:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CF074u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x089CF074u) goto L_089CF074;
    return;
L_089CF074:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CF084u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 560u, 0x089171D8u>(ctx, &aot_mem) && ctx.pc == 0x089CF084u) goto L_089CF084;
    return;
L_089CF084:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089CF094u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_089CEF04;
L_089CF094:
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
L_089CF0B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CF0C8u);
    ctx.gpr[6] = (0u | 0u);
    goto L_089CF044;
L_089CF0C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CF0D4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CEF8C;
L_089CF0D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF0E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089CF160;
      }
      goto L_089CF11C;
    }
L_089CF11C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089CF128;
L_089CF128:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089CF140;
      }
      goto L_089CF134;
    }
L_089CF134:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089CF158;
      }
      goto L_089CF140;
    }
L_089CF140:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089CF128;
      }
      goto L_089CF150;
    }
L_089CF150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF160;
      }
      goto L_089CF158;
    }
L_089CF158:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF22C;
      }
      goto L_089CF160;
    }
L_089CF160:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x089CF178u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8152));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 549u, 0x08AAEC68u>(ctx, &aot_mem) && ctx.pc == 0x089CF178u) goto L_089CF178;
    return;
L_089CF178:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089CF1D0;
      }
      goto L_089CF194;
    }
L_089CF194:
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (32768u << 16u);
    ctx.gpr[9] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-3));
    ctx.gpr[31] = (0x089CF1BCu);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-8172));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 320u, 0x0894DDD0u>(ctx, &aot_mem) && ctx.pc == 0x089CF1BCu) goto L_089CF1BC;
    return;
L_089CF1BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    goto L_089CF1D0;
L_089CF1D0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(68));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089CF22C;
L_089CF22C:
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
L_089CF248:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089CF294;
      }
      goto L_089CF258;
    }
L_089CF258:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[2] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    goto L_089CF268;
L_089CF268:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(696)));
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089CF29C;
      }
      goto L_089CF288;
    }
L_089CF288:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_089CF268;
      }
      goto L_089CF294;
    }
L_089CF294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089CF29C;
      }
      goto L_089CF29C;
    }
L_089CF29C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF2A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_089CF2A8;
L_089CF2A8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF2C8;
      }
      goto L_089CF2B0;
    }
L_089CF2B0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF2C8;
      }
      goto L_089CF2C0;
    }
L_089CF2C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089CF2A8;
      }
      goto L_089CF2C8;
    }
L_089CF2C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF2D8;
      }
      goto L_089CF2D0;
    }
L_089CF2D0:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_089CF2D8;
L_089CF2D8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF2E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089CF328;
      }
      goto L_089CF310;
    }
L_089CF310:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x089CF320u);
    ctx.gpr[6] = (0u | 255u);
    goto L_089CEDD0;
L_089CF320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF3C8;
      }
      goto L_089CF328;
    }
L_089CF328:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089CF334u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089CF248;
L_089CF334:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_089CF36C;
      }
      goto L_089CF340;
    }
L_089CF340:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x089CF350u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_089CEDD0;
L_089CF350:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CF3C8;
      }
      goto L_089CF358;
    }
L_089CF358:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089CF364u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_089CF2A4;
L_089CF364:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF3C8;
      }
      goto L_089CF36C;
    }
L_089CF36C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CF380u);
    ctx.gpr[7] = (0u | 0u);
    goto L_089CF2E0;
L_089CF380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CF3AC;
      }
      goto L_089CF390;
    }
L_089CF390:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF3C8;
      }
      goto L_089CF398;
    }
L_089CF398:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089CF3A4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 707u, 0x08883538u>(ctx, &aot_mem) && ctx.pc == 0x089CF3A4u) goto L_089CF3A4;
    return;
L_089CF3A4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089CF3C8;
      }
      goto L_089CF3AC;
    }
L_089CF3AC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089CF3BCu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_089CF0E4;
L_089CF3BC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089CF3C8;
L_089CF3C8:
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
L_089CF3E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CF410u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    goto L_089CED88;
L_089CF410:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089CF428u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_089CF2E0;
L_089CF428:
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
L_089CF448:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089CF4AC;
      }
      goto L_089CF474;
    }
L_089CF474:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    // nop
      if (branch_taken) {
          goto L_089CF488;
      }
      goto L_089CF480;
    }
L_089CF480:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089CF494;
      }
      goto L_089CF488;
    }
L_089CF488:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089CF494u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 689u, 0x0888337Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF494u) goto L_089CF494;
    return;
L_089CF494:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CF4A4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 713u, 0x088835D4u>(ctx, &aot_mem) && ctx.pc == 0x089CF4A4u) goto L_089CF4A4;
    return;
L_089CF4A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF4E8;
      }
      goto L_089CF4AC;
    }
L_089CF4AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF4C0;
      }
      goto L_089CF4B4;
    }
L_089CF4B4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089CF4C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 770u, 0x08883AB8u>(ctx, &aot_mem) && ctx.pc == 0x089CF4C0u) goto L_089CF4C0;
    return;
L_089CF4C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089CF4E8;
      }
      goto L_089CF4C8;
    }
L_089CF4C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089CF4D8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 689u, 0x0888337Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF4D8u) goto L_089CF4D8;
    return;
L_089CF4D8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CF4E8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 607u, 0x08882D08u>(ctx, &aot_mem) && ctx.pc == 0x089CF4E8u) goto L_089CF4E8;
    return;
L_089CF4E8:
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
L_089CF500:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CF524u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_089CEF8C;
L_089CF524:
    ctx.gpr[7] = (2226u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[31] = (0x089CF53Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8140));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 549u, 0x08AAEC68u>(ctx, &aot_mem) && ctx.pc == 0x089CF53Cu) goto L_089CF53C;
    return;
L_089CF53C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_089CF564;
      }
      goto L_089CF554;
    }
L_089CF554:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CF564u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8128));
    goto L_089CF0B0;
L_089CF564:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x089CF570u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 689u, 0x0888337Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF570u) goto L_089CF570;
    return;
L_089CF570:
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
L_089CF588:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF5B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CF5E0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_089CEFE4;
L_089CF5E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF604;
      }
      goto L_089CF5EC;
    }
L_089CF5EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 33u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089CF604u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 80u, 0x08884588u>(ctx, &aot_mem) && ctx.pc == 0x089CF604u) goto L_089CF604;
    return;
L_089CF604:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[31] = (0x089CF618u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 671u, 0x08883248u>(ctx, &aot_mem) && ctx.pc == 0x089CF618u) goto L_089CF618;
    return;
L_089CF618:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF62C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089CF6A4;
      }
      goto L_089CF674;
    }
L_089CF674:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (4u << 16u);
    ctx.gpr[9] = (2226u << 16u);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(52));
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089CF69Cu);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-8124));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 320u, 0x0894DDD0u>(ctx, &aot_mem) && ctx.pc == 0x089CF69Cu) goto L_089CF69C;
    return;
L_089CF69C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089CF6A4;
L_089CF6A4:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u | 34u);
    ctx.gpr[31] = (0x089CF6DCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 82u, 0x088845C0u>(ctx, &aot_mem) && ctx.pc == 0x089CF6DCu) goto L_089CF6DC;
    return;
L_089CF6DC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x089CF6ECu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_089CEDD0;
L_089CF6EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 5u);
      if (branch_taken) {
          goto L_089CF748;
      }
      goto L_089CF704;
    }
L_089CF704:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    goto L_089CF708;
L_089CF708:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (0u | 4u);
    if (ctx.gpr[5] == ctx.gpr[20]) {
    ctx.gpr[4] = (0u | 0u);
        goto L_089CF718;
    }
    goto L_089CF718;
L_089CF718:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089CF730u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 80u, 0x08884588u>(ctx, &aot_mem) && ctx.pc == 0x089CF730u) goto L_089CF730;
    return;
L_089CF730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089CF708;
      }
      goto L_089CF748;
    }
L_089CF748:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF768:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CF78Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 148u, 0x08878C44u>(ctx, &aot_mem) && ctx.pc == 0x089CF78Cu) goto L_089CF78C;
    return;
L_089CF78C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089CF7D4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 690u, 0x08927FA4u>(ctx, &aot_mem) && ctx.pc == 0x089CF7D4u) goto L_089CF7D4;
    return;
L_089CF7D4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[5]));
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
L_089CF810:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CF840u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089CEFE4;
L_089CF840:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 27u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x089CF858u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 80u, 0x08884588u>(ctx, &aot_mem) && ctx.pc == 0x089CF858u) goto L_089CF858;
    return;
L_089CF858:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[31] = (0x089CF874u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF874u) goto L_089CF874;
    return;
L_089CF874:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[31] = (0x089CF898u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF898u) goto L_089CF898;
    return;
L_089CF898:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[31] = (0x089CF8C0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF8C0u) goto L_089CF8C0;
    return;
L_089CF8C0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[31] = (0x089CF8E8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF8E8u) goto L_089CF8E8;
    return;
L_089CF8E8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[31] = (0x089CF920u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF920u) goto L_089CF920;
    return;
L_089CF920:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[31] = (0x089CF948u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF948u) goto L_089CF948;
    return;
L_089CF948:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
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
L_089CF978:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1584));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1568), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1564), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1572), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1576), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1580), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CF9B0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x089CF9B0u) goto L_089CF9B0;
    return;
L_089CF9B0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089CF9C0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 560u, 0x089171D8u>(ctx, &aot_mem) && ctx.pc == 0x089CF9C0u) goto L_089CF9C0;
    return;
L_089CF9C0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CF9D4u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 585u, 0x08AAEF28u>(ctx, &aot_mem) && ctx.pc == 0x089CF9D4u) goto L_089CF9D4;
    return;
L_089CF9D4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[31] = (0x089CF9E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089CF768;
L_089CF9E0:
    ctx.gpr[31] = (0x089CF9E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089CEB54;
L_089CF9E8:
    ctx.gpr[31] = (0x089CF9F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 431u, 0x089D1A30u>(ctx, &aot_mem) && ctx.pc == 0x089CF9F0u) goto L_089CF9F0;
    return;
L_089CF9F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u | 288u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_089CFA0C;
      }
      goto L_089CFA00;
    }
L_089CFA00:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CFA0Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8100));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 559u, 0x08AAED60u>(ctx, &aot_mem) && ctx.pc == 0x089CFA0Cu) goto L_089CFA0C;
    return;
L_089CFA0C:
    ctx.gpr[31] = (0x089CFA14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089CF810;
L_089CFA14:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1564)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1568)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1572)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1576)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1580)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1584));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CFA34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CFA60u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 775u, 0x08883B14u>(ctx, &aot_mem) && ctx.pc == 0x089CFA60u) goto L_089CFA60;
    return;
L_089CFA60:
    ctx.gpr[31] = (0x089CFA68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089CEB54;
L_089CFA68:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CFA78u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_089CEE24;
L_089CFA78:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CFA88u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 33u, 0x088841E0u>(ctx, &aot_mem) && ctx.pc == 0x089CFA88u) goto L_089CFA88;
    return;
L_089CFA88:
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
L_089CFAA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CFAC0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_089CEB54;
L_089CFAC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CFACCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 147u, 0x089D07C4u>(ctx, &aot_mem) && ctx.pc == 0x089CFACCu) goto L_089CFACC;
    return;
L_089CFACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x089CFAD8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 785u, 0x08883BA4u>(ctx, &aot_mem) && ctx.pc == 0x089CFAD8u) goto L_089CFAD8;
    return;
L_089CFAD8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CFAE4u);
    ctx.gpr[5] = (0u | 93u);
    goto L_089CEC78;
L_089CFAE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CFAF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (0u | 278u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089CFB74;
      }
      goto L_089CFB38;
    }
L_089CFB38:
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[7] = (2226u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3));
    ctx.gpr[31] = (0x089CFB54u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8084));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 549u, 0x08AAEC68u>(ctx, &aot_mem) && ctx.pc == 0x089CFB54u) goto L_089CFB54;
    return;
L_089CFB54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[31] = (0x089CFB6Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089CEE24;
L_089CFB6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFB80;
      }
      goto L_089CFB74;
    }
L_089CFB74:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CFB80u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089CFAA4;
L_089CFB80:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CFB8Cu);
    ctx.gpr[5] = (0u | 61u);
    goto L_089CEC78;
L_089CFB8C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089CFB98u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 790u, 0x08883BF8u>(ctx, &aot_mem) && ctx.pc == 0x089CFB98u) goto L_089CFB98;
    return;
L_089CFB98:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CFBA8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 147u, 0x089D07C4u>(ctx, &aot_mem) && ctx.pc == 0x089CFBA8u) goto L_089CFBA8;
    return;
L_089CFBA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089CFBBCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 790u, 0x08883BF8u>(ctx, &aot_mem) && ctx.pc == 0x089CFBBCu) goto L_089CFBBC;
    return;
L_089CFBBC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089CFBCCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 790u, 0x08883BF8u>(ctx, &aot_mem) && ctx.pc == 0x089CFBCCu) goto L_089CFBCC;
    return;
L_089CFBCC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CFBE4u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 80u, 0x08884588u>(ctx, &aot_mem) && ctx.pc == 0x089CFBE4u) goto L_089CFBE4;
    return;
L_089CFBE4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CFC0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089CFC54;
      }
      goto L_089CFC2C;
    }
L_089CFC2C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CFC38u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 770u, 0x08883AB8u>(ctx, &aot_mem) && ctx.pc == 0x089CFC38u) goto L_089CFC38;
    return;
L_089CFC38:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CFC5C;
      }
      goto L_089CFC4C;
    }
L_089CFC4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFC8C;
      }
      goto L_089CFC54;
    }
L_089CFC54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFC8C;
      }
      goto L_089CFC5C;
    }
L_089CFC5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CFC78u);
    ctx.gpr[5] = (0u | 31u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 82u, 0x088845C0u>(ctx, &aot_mem) && ctx.pc == 0x089CFC78u) goto L_089CFC78;
    return;
L_089CFC78:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_089CFC8C;
L_089CFC8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CFCA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089CFD0C;
      }
      goto L_089CFCC0;
    }
L_089CFCC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CFD14;
      }
      goto L_089CFCD0;
    }
L_089CFCD0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CFCE0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 713u, 0x088835D4u>(ctx, &aot_mem) && ctx.pc == 0x089CFCE0u) goto L_089CFCE0;
    return;
L_089CFCE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CFCFCu);
    ctx.gpr[5] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 82u, 0x088845C0u>(ctx, &aot_mem) && ctx.pc == 0x089CFCFCu) goto L_089CFCFC;
    return;
L_089CFCFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CFD50;
      }
      goto L_089CFD0C;
    }
L_089CFD0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFD54;
      }
      goto L_089CFD14;
    }
L_089CFD14:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFD28;
      }
      goto L_089CFD1C;
    }
L_089CFD1C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CFD28u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 770u, 0x08883AB8u>(ctx, &aot_mem) && ctx.pc == 0x089CFD28u) goto L_089CFD28;
    return;
L_089CFD28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CFD44u);
    ctx.gpr[5] = (0u | 31u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 82u, 0x088845C0u>(ctx, &aot_mem) && ctx.pc == 0x089CFD44u) goto L_089CFD44;
    return;
L_089CFD44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089CFD50;
L_089CFD50:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    goto L_089CFD54;
L_089CFD54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CFD68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CFD84u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 147u, 0x089D07C4u>(ctx, &aot_mem) && ctx.pc == 0x089CFD84u) goto L_089CFD84;
    return;
L_089CFD84:
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[7] = (2226u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089CFDA0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8084));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 549u, 0x08AAEC68u>(ctx, &aot_mem) && ctx.pc == 0x089CFDA0u) goto L_089CFDA0;
    return;
L_089CFDA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CFDCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[6] = (0u | 41u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089CFE8C;
      }
      goto L_089CFE00;
    }
L_089CFE00:
    ctx.gpr[17] = (2226u << 16u);
    ctx.gpr[18] = (0u | 280u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-8060));
    goto L_089CFE0C;
L_089CFE0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 279 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFE4C;
      }
      goto L_089CFE1C;
    }
L_089CFE1C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 278 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CFE68;
      }
      goto L_089CFE28;
    }
L_089CFE28:
    ctx.gpr[31] = (0x089CFE30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089CED88;
L_089CFE30:
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CFE44u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_089CEF04;
L_089CFE44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFE74;
      }
      goto L_089CFE4C;
    }
L_089CFE4C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089CFE68;
      }
      goto L_089CFE54;
    }
L_089CFE54:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[31] = (0x089CFE60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089CEB54;
L_089CFE60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFE74;
      }
      goto L_089CFE68;
    }
L_089CFE68:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CFE74u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 559u, 0x08AAED60u>(ctx, &aot_mem) && ctx.pc == 0x089CFE74u) goto L_089CFE74;
    return;
L_089CFE74:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089CFE8C;
      }
      goto L_089CFE7C;
    }
L_089CFE7C:
    ctx.gpr[31] = (0x089CFE84u);
    ctx.gpr[5] = (0u | 44u);
    goto L_089CEC44;
L_089CFE84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CFE0C;
      }
      goto L_089CFE8C;
    }
L_089CFE8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089CFE9Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_089CF500;
L_089CFE9C:
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
L_089CFEBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1536));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1512), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1516), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1520), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1524), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1528), ctx.gpr[20]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1532), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CFEF4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_089CF768;
L_089CFEF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.gpr[31] = (0x089CFF08u);
    ctx.gpr[5] = (0u | 40u);
    goto L_089CEC78;
L_089CFF08:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFF20;
      }
      goto L_089CFF10;
    }
L_089CFF10:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089CFF20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8032));
    goto L_089CF0B0;
L_089CFF20:
    ctx.gpr[31] = (0x089CFF28u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089CFDCC;
L_089CFF28:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089CFF34u);
    ctx.gpr[5] = (0u | 41u);
    goto L_089CEC78;
L_089CFF34:
    ctx.gpr[31] = (0x089CFF3Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 431u, 0x089D1A30u>(ctx, &aot_mem) && ctx.pc == 0x089CFF3Cu) goto L_089CFF3C;
    return;
L_089CFF3C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 262u);
    ctx.gpr[6] = (0u | 265u);
    ctx.gpr[31] = (0x089CFF50u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_089CECBC;
L_089CFF50:
    ctx.gpr[31] = (0x089CFF58u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089CF810;
L_089CFF58:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089CFF68u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_089CF62C;
L_089CFF68:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1512)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1516)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1520)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1524)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1528)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1532)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1536));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CFF88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089CFFACu);
    ctx.gpr[18] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 147u, 0x089D07C4u>(ctx, &aot_mem) && ctx.pc == 0x089CFFACu) goto L_089CFFAC;
    return;
L_089CFFAC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CFFB8u);
    ctx.gpr[5] = (0u | 44u);
    goto L_089CEC44;
L_089CFFB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFFE0;
      }
      goto L_089CFFC0;
    }
L_089CFFC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x089CFFCCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 770u, 0x08883AB8u>(ctx, &aot_mem) && ctx.pc == 0x089CFFCCu) goto L_089CFFCC;
    return;
L_089CFFCC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CFFD8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 147u, 0x089D07C4u>(ctx, &aot_mem) && ctx.pc == 0x089CFFD8u) goto L_089CFFD8;
    return;
L_089CFFD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CFFAC;
      }
      goto L_089CFFE0;
    }
L_089CFFE0:
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
L_089CFFFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.pc = 0x089D0000u; return;
}

void recomp_unit_0114(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0114_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_114(Runtime &runtime) {
    runtime.register_generated_unit(114u, 0x089CC000u, 16384u, &recomp_unit_0114, &recomp_unit_0114_entry);
    runtime.register_function(0x089CC000u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC018u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC02Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC044u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC060u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC078u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC080u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC084u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC090u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC09Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC0A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC0B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC0B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC0C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC0D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC0DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC0F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC108u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC124u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC134u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC14Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC154u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC158u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC164u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC170u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC17Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC184u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC18Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC194u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC1A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC1BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC1D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC200u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC23Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC250u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC260u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC270u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC298u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC2A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC2A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC2B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC2BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC2C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC2C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC2D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC2D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC2E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC2E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC300u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC314u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC320u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC328u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC348u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC350u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC378u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC390u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC3C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC3CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC3ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC400u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC410u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC418u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC420u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC424u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC430u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC448u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC45Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC468u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC47Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC490u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC49Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC4ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC4C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC4C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC4ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC4F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC508u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC520u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC52Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC554u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC55Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC56Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC574u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC580u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC590u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC5A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC5B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC5C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC5D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC5E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC608u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC61Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC630u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC640u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC648u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC658u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC680u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC6A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC6B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC6C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC6D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC6E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC700u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC708u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC714u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC718u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC738u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC768u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC7A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC7B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC7D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC7DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC7E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC7F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC804u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC838u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC840u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC848u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC850u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC854u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC864u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC86Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC880u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC888u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC89Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC8C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC8FCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC904u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC90Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC918u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC928u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC94Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC95Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC994u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC9A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC9A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC9C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC9CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC9D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC9E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC9ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA00u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA1Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA2Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA34u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA48u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA74u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA84u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA8Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA94u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCAB0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCAE8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCAF4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB08u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB10u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB18u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB20u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB2Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB3Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB44u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB5Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB6Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB84u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB90u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB94u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCBBCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCBC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCBCCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCBDCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCBE4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCBF4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCBFCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC00u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC1Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC24u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC34u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC40u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC50u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC64u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC74u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC84u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC90u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC9Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCB8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCD0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCD8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCE0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCE8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCF0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD18u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD24u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD34u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD40u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD48u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD50u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD60u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD70u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD74u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD88u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD90u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCDC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE08u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE18u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE24u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE88u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE90u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE98u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCEB4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCEC4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCED4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCEECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF04u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF24u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF34u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF40u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF50u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF74u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF84u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF8Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCFA0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCFA8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCFBCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCFC4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCFD4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCFDCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCFE4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCFECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCFF4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD000u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD004u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD00Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD014u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD024u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD02Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD038u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD040u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD048u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD058u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD074u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD084u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD08Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD108u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD110u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD124u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD12Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD140u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD148u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD158u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD160u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD168u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD170u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD178u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD184u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD18Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD194u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD1A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD1A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD1B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD1C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD1E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD1F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD1FCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD210u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD218u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD22Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD234u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD244u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD24Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD254u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD25Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD264u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD270u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD2ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD2CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD2DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD2ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD304u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD31Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD32Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD348u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD35Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD360u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD370u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD390u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD3A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD3B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD3C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD3C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD3DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD3E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD3F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD400u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD410u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD418u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD420u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD428u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD430u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD440u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD444u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD44Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD454u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD464u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD46Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD478u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD480u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD488u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD498u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD4B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD4C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD4D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD4E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD508u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD510u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD524u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD548u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD558u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD568u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD578u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD580u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD594u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD59Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD5B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD5B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD5C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD5D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD5D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD5E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD5E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD5F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD600u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD608u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD61Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD624u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD62Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD64Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD65Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD66Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD67Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD684u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD698u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6FCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD734u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD73Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD74Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD754u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD75Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD764u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD770u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD778u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD784u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD78Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD794u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD79Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD7ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD7B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD7BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD7C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD7D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD7D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD7E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD7F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD7FCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD818u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD820u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD828u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD840u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD848u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD84Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD854u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD85Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD864u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD86Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD894u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD8A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD8B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD8B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD8C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD8D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD8DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD8E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD8ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD8F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD900u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD904u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD914u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD91Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD924u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD934u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD94Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD950u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD95Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD964u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD974u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD97Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD98Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD994u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD9A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD9A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD9BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD9C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD9D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD9F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD9F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD9FCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA04u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA14u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA20u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA28u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA3Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA50u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA58u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA60u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA70u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA78u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA84u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA8Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA94u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA9Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDAA8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDAB0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDAC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDACCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDAD4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDAECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDAF0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDAFCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB14u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB40u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB4Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB54u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB78u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB88u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB9Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDBB0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDBC4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDBC8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDBE0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDBE8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDBECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDBF4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC00u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC08u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC10u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC14u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC28u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC34u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC3Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC50u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC60u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC74u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDCA0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDCB8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDCC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDCC4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDCD0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDCDCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDCE4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDCECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDCF4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDCFCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDD18u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDD2Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDD38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDD40u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDD48u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDD50u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDD5Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDD64u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDD7Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDD84u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDD8Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDDC8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDE38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDE48u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDE68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDE74u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDE84u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDE8Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDE98u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDEACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDEC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDEECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDEF4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF14u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF20u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF48u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF70u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF94u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFA0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFA8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFB4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFCCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFD4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFF4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFFCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE010u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE018u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE028u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE038u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE044u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE064u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE07Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE088u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE094u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE098u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE0A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE0B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE0B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE0BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE0C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE0D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE0DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE110u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE170u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE180u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE18Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE1A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE1B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE1C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE1E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE204u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE210u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE228u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE230u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE23Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE260u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE268u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE274u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE27Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE288u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE290u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE300u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE308u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE310u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE318u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE320u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE328u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE330u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE344u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE34Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE354u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE368u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE370u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE378u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE380u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE388u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE400u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE410u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE41Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE424u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE438u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE440u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE448u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE450u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE45Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE464u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE478u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE484u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE490u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE498u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE4A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE4B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE4BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE4D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE4D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE4E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE4F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE500u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE508u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE51Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE528u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE530u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE538u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE540u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE548u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE550u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE560u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE568u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE578u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE580u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE58Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE594u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE59Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE5ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE5C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE5D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE5D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE5E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE600u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE608u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE610u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE618u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE628u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE640u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE648u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE654u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE664u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE67Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE694u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE6B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE6E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE714u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE728u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE74Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE768u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE774u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE784u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE79Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE7BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE7E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE7F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE80Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE81Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE830u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE83Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE854u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE85Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE86Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE880u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE890u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE89Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE8A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE8B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE8BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE8C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE8CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE8E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE8F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE908u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE910u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE930u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE940u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE954u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE964u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE970u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE974u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE98Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE9A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE9C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEB04u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEB14u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEB2Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEB3Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEB54u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEB7Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEB9Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEBA8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEBACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEBBCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEBD4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEBE8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC10u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC20u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC2Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC44u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC58u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC60u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC6Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC78u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC94u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC9Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CECA8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CECBCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CECF0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CECF8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED04u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED10u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED18u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED30u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED40u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED58u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED64u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED88u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEDA4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEDB0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEDB4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEDBCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEDD0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEDE8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE04u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE14u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE24u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE40u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE50u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE64u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE9Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEEBCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEEC4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF04u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF48u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF54u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF8Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEFA0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEFDCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEFE4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEFF8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEFFCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF03Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF044u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF074u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF084u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF094u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF0B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF0C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF0D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF0E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF11Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF128u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF134u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF140u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF150u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF158u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF160u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF178u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF194u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF1BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF1D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF22Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF248u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF258u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF268u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF288u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF294u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF29Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF310u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF320u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF328u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF334u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF340u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF350u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF358u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF364u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF36Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF380u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF390u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF398u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF3A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF3ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF3BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF3C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF3E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF410u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF428u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF448u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF474u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF480u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF488u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF494u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF4A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF4ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF4B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF4C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF4C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF4D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF4E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF500u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF524u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF53Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF554u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF564u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF570u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF588u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF5B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF5E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF5ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF604u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF618u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF62Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF674u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF69Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF6A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF6DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF6ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF704u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF708u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF718u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF730u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF748u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF768u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF78Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF7D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF810u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF840u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF858u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF874u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF898u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF8C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF8E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF920u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF948u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF978u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA00u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA14u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA34u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA60u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA78u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA88u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFAA4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFAC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFACCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFAD8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFAE4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFAF8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB54u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB6Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB74u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB80u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB8Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB98u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFBA8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFBBCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFBCCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFBE4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC2Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC4Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC54u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC5Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC78u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC8Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFCA0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFCC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFCD0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFCE0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFCFCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFD0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFD14u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFD1Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFD28u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFD44u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFD50u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFD54u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFD68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFD84u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFDA0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFDCCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE00u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE1Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE28u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE30u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE44u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE4Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE54u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE60u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE74u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE7Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE84u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE8Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE9Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFEBCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFEF4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFF08u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFF10u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFF20u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFF28u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFF34u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFF3Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFF50u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFF58u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFF68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFF88u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFFACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFFB8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFFC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFFCCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFFD8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFFE0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFFFCu, &recomp_unit_0114, "recomp_unit_0114");
}
} // namespace psprecomp
