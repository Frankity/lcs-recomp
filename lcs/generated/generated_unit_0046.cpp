#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0046[4087] = {
    1, 0, 2, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 6, 0, 7, 0, 8, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 12, 13, 0, 14, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 18, 0, 19, 0, 20, 21, 0, 22, 0, 0, 0, 23, 0, 24, 0,
    0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 29, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33,
    0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 37, 0, 38, 0, 39, 0, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 49,
    0, 0, 0, 50, 0, 51, 0, 52, 0, 0, 53, 54, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0,
    0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0,
    61, 0, 62, 63, 0, 64, 0, 65, 0, 66, 0, 0, 67, 0, 0, 0, 68, 0, 69, 70, 0, 71, 0, 0, 72, 0, 73, 0, 0, 74, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 77, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 81, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 86, 0, 87, 0, 0, 0, 88, 0, 89, 0, 0,
    90, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 97, 0, 98, 0,
    99, 0, 0, 100, 0, 101, 0, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 107,
    0, 0, 108, 0, 109, 0, 0, 110, 0, 111, 0, 0, 112, 0, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0, 0, 116, 0, 117, 0, 118, 0, 119,
    0, 120, 0, 0, 121, 0, 122, 0, 123, 0, 124, 0, 0, 125, 0, 126, 0, 127, 128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0,
    132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 139, 0,
    140, 141, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0,
    151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 167, 0, 168, 0, 0, 169, 0, 170, 171, 0, 172, 0, 173, 0, 0, 174, 0, 175, 176, 0,
    177, 0, 178, 0, 0, 0, 179, 0, 180, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 183, 184, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 187,
    0, 188, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 192, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0,
    198, 0, 0, 199, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 205, 0, 206, 0, 207, 0, 0, 208, 0, 0, 209, 0, 210, 0, 211, 0, 212, 0, 213, 0, 214, 0, 0, 215, 0, 216, 0,
    217, 0, 0, 0, 0, 218, 0, 219, 0, 0, 220, 0, 221, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226,
    0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 232, 0,
    0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 0,
    0, 0, 238, 0, 0, 239, 0, 240, 0, 241, 0, 0, 0, 0, 242, 243, 0, 0, 0, 244, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 250, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 258, 0, 0, 0, 259, 0, 260, 0,
    0, 0, 261, 0, 262, 0, 0, 0, 263, 0, 264, 0, 0, 0, 265, 0, 266, 0, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0, 0, 0, 270, 0,
    271, 0, 0, 0, 272, 0, 273, 274, 0, 0, 275, 0, 276, 0, 0, 0, 277, 0, 278, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 281, 0,
    0, 0, 0, 282, 0, 283, 284, 0, 0, 285, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 290, 0, 291, 0, 292,
    0, 293, 0, 0, 294, 0, 0, 295, 0, 296, 297, 0, 298, 0, 0, 299, 0, 300, 0, 301, 0, 0, 302, 0, 0, 303, 0, 304, 305, 0, 306, 0,
    0, 307, 0, 308, 0, 309, 0, 0, 310, 0, 0, 311, 0, 312, 313, 0, 314, 0, 0, 315, 0, 316, 0, 317, 0, 0, 318, 0, 0, 319, 0, 320,
    321, 0, 322, 0, 0, 323, 0, 324, 0, 325, 0, 0, 326, 0, 0, 327, 0, 328, 329, 0, 330, 0, 0, 331, 0, 332, 0, 333, 0, 0, 334, 0,
    0, 335, 0, 336, 337, 0, 338, 0, 0, 339, 0, 340, 0, 341, 0, 0, 342, 0, 0, 343, 0, 344, 345, 0, 346, 0, 0, 347, 0, 348, 0, 349,
    0, 0, 350, 0, 0, 351, 0, 352, 353, 0, 354, 0, 0, 355, 0, 356, 0, 357, 0, 0, 358, 0, 0, 359, 0, 360, 361, 0, 362, 0, 0, 363,
    0, 364, 0, 365, 0, 0, 366, 0, 0, 367, 0, 368, 369, 0, 370, 0, 0, 371, 0, 372, 0, 373, 374, 0, 375, 0, 376, 0, 0, 377, 0, 378,
    379, 0, 380, 0, 381, 0, 0, 382, 0, 383, 384, 0, 385, 0, 0, 0, 386, 0, 387, 0, 0, 388, 0, 389, 390, 0, 391, 0, 392, 0, 393, 0,
    0, 394, 0, 0, 395, 0, 396, 397, 0, 398, 0, 0, 399, 400, 0, 401, 0, 402, 0, 0, 403, 0, 0, 0, 404, 0, 405, 0, 0, 0, 0, 0,
    0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 408, 0, 0, 0, 409, 0, 410, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 413, 0,
    0, 414, 0, 0, 0, 415, 0, 416, 417, 0, 418, 0, 0, 419, 0, 0, 420, 0, 421, 0, 0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0,
    0, 0, 425, 0, 426, 0, 0, 427, 0, 428, 0, 429, 0, 430, 0, 431, 0, 432, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0,
    0, 436, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 0, 0, 442, 443, 0, 444, 0, 0, 0,
    0, 0, 445, 0, 446, 0, 447, 0, 0, 0, 0, 0, 448, 0, 449, 0, 0, 450, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 454, 455,
    0, 456, 0, 0, 457, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 464, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 468, 0, 469, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 470, 0, 471, 0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 476, 0, 477, 0, 478, 0,
    0, 479, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 482, 0, 483, 0, 484, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 487, 488, 0, 0, 0, 0, 489, 0, 490, 0, 491, 0, 0, 492, 0, 493, 0, 0, 494, 0, 0, 0, 495, 0, 0, 496, 0, 0, 497,
    0, 0, 498, 499, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 503, 0, 504, 0, 0, 0, 0, 505, 0, 0, 506, 0,
    507, 0, 508, 0, 509, 0, 0, 0, 510, 0, 511, 0, 512, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 515, 0, 516, 0, 517,
    0, 0, 518, 0, 519, 520, 0, 521, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 523, 0, 524, 0, 0, 525, 0, 0, 526, 0, 0, 527, 0, 0,
    0, 528, 0, 529, 530, 0, 531, 532, 0, 533, 0, 534, 0, 0, 535, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 538, 0, 539, 0, 0, 0,
    540, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 543, 0, 0, 0, 0, 0, 0,
    0, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 547, 0, 548, 0, 549, 0, 550, 0, 551, 552, 0, 553, 0, 554, 0, 0,
    0, 555, 0, 556, 0, 557, 0, 0, 0, 558, 0, 559, 0, 560, 0, 561, 562, 0, 563, 0, 564, 0, 565, 0, 566, 0, 567, 0, 568, 0, 569, 0,
    570, 0, 0, 571, 0, 572, 0, 573, 0, 574, 0, 0, 0, 0, 575, 0, 576, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0, 579, 0, 580,
    581, 0, 582, 0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 0, 585, 0, 586, 587, 0, 588, 0, 589, 0, 0, 0, 590, 0, 0, 591, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 595, 0, 0, 596, 0, 597, 0, 0, 598, 0,
    0, 599, 600, 0, 0, 601, 0, 602, 0, 603, 0, 0, 0, 0, 0, 0, 604, 0, 0, 605, 0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 608, 0,
    0, 0, 609, 610, 0, 611, 0, 0, 612, 0, 613, 0, 0, 614, 0, 0, 615, 0, 616, 0, 0, 0, 0, 617, 0, 618, 0, 0, 619, 0, 0, 0,
    620, 0, 0, 621, 0, 0, 622, 0, 623, 0, 0, 0, 624, 0, 0, 625, 0, 626, 0, 0, 0, 627, 0, 0, 0, 628, 0, 629, 0, 0, 0, 0,
    0, 0, 630, 0, 0, 0, 0, 0, 631, 0, 0, 632, 0, 0, 633, 0, 0, 0, 0, 634, 0, 635, 0, 636, 0, 637, 0, 0, 0, 638, 0, 0,
    639, 0, 640, 641, 0, 642, 0, 643, 0, 0, 0, 0, 0, 644, 0, 0, 0, 645, 0, 646, 0, 0, 0, 647, 0, 0, 648, 0, 0, 0, 649, 650,
    0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 652, 0, 653, 0, 654, 0, 0, 655, 0, 0, 656, 0, 0, 0, 657, 0, 658, 0, 659, 0, 0, 0,
    0, 660, 0, 0, 661, 0, 0, 662, 0, 663, 0, 664, 0, 0, 665, 0, 0, 0, 666, 0, 0, 667, 0, 668, 0, 669, 0, 0, 670, 0, 0, 671,
    0, 672, 0, 0, 0, 673, 0, 0, 674, 0, 675, 0, 0, 0, 676, 0, 0, 0, 677, 0, 678, 0, 0, 0, 0, 0, 0, 679, 0, 680, 0, 681,
    0, 682, 0, 0, 683, 0, 0, 684, 0, 685, 0, 686, 0, 687, 0, 0, 0, 0, 0, 0, 0, 688, 0, 689, 0, 690, 0, 691, 0, 0, 692, 0,
    0, 0, 693, 0, 694, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 697,
    0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 701, 0, 0, 702, 0, 0,
    703, 0, 704, 0, 705, 0, 0, 0, 706, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 709, 0, 0, 0, 0, 710,
    0, 711, 0, 712, 0, 0, 0, 713, 0, 0, 714, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 717, 0, 0, 718, 0,
    719, 0, 720, 0, 721, 0, 722, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 726,
    0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 729, 0, 0, 0, 0, 730, 0, 731, 0, 0, 732, 0, 0, 0, 0, 733, 0, 734, 0, 735, 0,
    736, 0, 737, 0, 738, 0, 739, 0, 740, 0, 741, 0, 0, 742, 0, 743, 0, 0, 0, 0, 744, 0, 0, 0, 745, 0, 0, 0, 746, 0, 0, 747,
    0, 0, 748, 0, 0, 0, 749, 0, 0, 0, 750, 0, 0, 0, 0, 0, 751, 0, 0, 0, 752, 0, 0, 0, 753, 0, 0, 0, 754, 0, 0, 0,
    0, 755, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 758, 0, 759, 0, 760, 0, 761, 0, 0, 0, 762, 0, 0, 0, 763, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 765, 0, 766, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 769, 0,
    0, 0, 770, 0, 0, 0, 771, 0, 0, 0, 772, 0, 0, 0, 0, 773, 0, 774, 0, 775, 0, 776, 0, 0, 0, 0, 777, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 779, 0, 0, 780, 0, 781, 0, 782, 0,
    783, 0, 0, 0, 0, 0, 0, 784, 0, 785, 0, 0, 786, 0, 0, 0, 0, 787, 0, 788, 0, 0, 0, 0, 789, 0, 790, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 792, 0, 793, 0, 794, 0, 0, 795, 0, 0, 796, 0, 0, 0, 0, 0, 797, 0,
    0, 0, 0, 798, 0, 799, 800, 0, 0, 801, 802, 0, 0, 0, 0, 803, 0, 804, 0, 0, 0, 0, 805, 0, 806, 0, 807, 0, 808, 0, 0, 0,
    0, 809, 0, 810, 0, 0, 0, 0, 811, 0, 812, 0, 813, 0, 814, 0, 0, 0, 815, 0, 0, 0, 0, 816, 0, 817, 0, 0, 0, 0, 818, 0,
    819, 0, 0, 0, 820, 0, 0, 0, 821, 0, 0, 0, 822, 0, 0, 823, 0, 824, 0, 0, 0, 825, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0,
    0, 0, 827, 0, 828, 0, 0, 0, 829, 0, 0, 0, 830, 0, 831, 0, 0, 832, 833, 0, 0, 0, 0, 834, 0, 0, 835, 0, 0, 0, 836, 0,
    0, 0, 0, 837, 0, 0, 0, 0, 0, 838, 839, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 841,
    0, 0, 0, 0, 0, 842, 0, 0, 0, 843, 0, 844, 0, 0, 845, 0, 0, 846, 0, 0, 847, 0, 848, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    849, 0, 850, 0, 0, 0, 851, 0, 852, 0, 0, 0, 0, 0, 0, 0, 853, 0, 0, 854, 0, 855, 0, 856, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 857, 0, 858, 0, 859, 0, 0, 0, 860, 0, 0, 0,
    0, 0, 0, 861, 0, 0, 0, 0, 0, 862, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 863, 0, 0, 0, 864, 0, 865, 0, 0, 0, 866, 0,
    0, 867, 0, 868, 0, 869, 0, 0, 0, 0, 0, 870, 0, 0, 0, 0, 0, 0, 871, 0, 872, 0, 0, 0, 0, 0, 0, 873, 0, 0, 0, 874,
    0, 875, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 876, 0, 0, 0, 0, 0, 0, 0, 0, 877, 0, 878, 0, 0, 0, 0, 0, 879, 0, 0,
    0, 880, 0, 881, 882, 0, 0, 883, 0, 0, 0, 0, 884, 0, 0, 885, 0, 886, 0, 887, 0, 0, 0, 0, 888, 0, 0, 889, 0, 890, 0, 0,
    891, 0, 0, 0, 892, 0, 0, 0, 0, 0, 0, 0, 893, 0, 0, 0, 894, 0, 0, 0, 0, 0, 895, 0, 0, 896, 0, 0, 0, 897, 898, 0,
    0, 0, 899, 0, 0, 900, 0, 901, 0, 0, 0, 0, 0, 0, 0, 0, 0, 902, 0, 0, 0, 0, 0, 0, 0, 0, 903, 0, 0, 0, 0, 0,
    904, 0, 905, 0, 906, 0, 907, 0, 908, 0, 909, 0, 0, 910, 0, 911, 0, 912, 0, 0, 0, 0, 0, 0, 913, 0, 914, 0, 0, 0, 0, 915,
    0, 916, 0, 917, 0, 0, 0, 0, 0, 0, 0, 0, 0, 918, 0, 0, 0, 0, 0, 0, 0, 0, 919, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 920, 0, 0, 921, 0, 0, 0, 0, 922, 0, 0, 0, 923,
    0, 924, 925, 0, 0, 926, 0, 927, 0, 0, 0, 0, 0, 0, 928, 0, 0, 0, 929, 0, 0, 0, 0, 930, 0, 931, 0, 932, 0, 0, 0, 933,
    0, 0, 0, 934, 0, 0, 0, 935, 0, 0, 0, 0, 0, 936, 0, 937, 0, 0, 0, 0, 938, 0, 939, 0, 0, 0, 0, 0, 0, 940, 0, 0,
    0, 941, 0, 0, 0, 0, 0, 942, 0, 0, 0, 0, 0, 943, 0, 0, 0, 0, 0, 944, 0, 945, 0, 0, 0, 0, 0, 0, 946, 0, 0, 0,
    947, 0, 0, 0, 948, 0, 0, 0, 949, 0, 0, 0, 950, 0, 0, 0, 0, 0, 951, 0, 0, 0, 0, 952, 0, 0, 0, 0, 0, 953, 0, 0,
    0, 0, 0, 0, 0, 954, 0, 955, 0, 0, 0, 0, 0, 956, 0, 0, 0, 0, 0, 0, 0, 0, 0, 957, 0, 0, 0, 0, 0, 958, 0, 0,
    0, 0, 0, 959, 0, 960, 0, 0, 0, 0, 961, 0, 0, 0, 962, 0, 963, 0, 0, 0, 0, 964, 0, 0, 0, 0, 0, 0, 0, 965, 0, 966,
    0, 0, 0, 0, 967, 0, 0, 0, 968, 0, 969, 0, 0, 0, 0, 970, 0, 0, 0, 0, 0, 0, 0, 971, 0, 0, 972, 0, 0, 0, 0, 0,
    0, 973, 974, 0, 0, 0, 975, 0, 976, 0, 0, 0, 977, 0, 0, 0, 978, 0, 0, 0, 979, 0, 0, 0, 980, 0, 981, 0, 0, 0, 982, 0,
    983, 0, 0, 984, 0, 0, 985, 0, 0, 0, 0, 0, 986, 0, 0, 0, 0, 987, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 988, 0,
    0, 0, 0, 989, 0, 0, 990, 0, 991, 0, 0, 992, 0, 993, 0, 0, 994, 995, 0, 996, 0, 0, 997, 0, 998, 0, 0, 0, 0, 0, 0, 0,
    999, 0, 1000, 0, 0, 1001, 0, 1002, 0, 1003, 0, 0, 0, 1004, 0, 1005, 0, 0, 0, 0, 1006, 0, 1007, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1008, 0, 0, 0, 0, 1009, 0, 0, 1010, 1011, 0, 0, 1012, 0, 0, 0, 1013, 0, 0, 0, 1014, 0, 1015, 0, 0, 0, 0, 1016, 0,
    0, 0, 0, 1017, 0, 1018, 0, 0, 0, 0, 0, 1019, 0, 1020, 0, 0, 1021, 0, 1022, 0, 1023, 0, 1024, 0, 1025, 0, 1026, 0, 0, 0, 1027, 0,
    0, 0, 0, 0, 1028, 0, 0, 0, 1029, 0, 0, 0, 1030, 0, 0, 1031, 0, 0, 0, 1032, 0, 1033, 1034, 0, 1035, 0, 1036, 0, 0, 0, 0, 0,
    1037, 0, 0, 0, 1038, 0, 1039, 1040, 0, 0, 0, 0, 1041, 0, 1042, 0, 0, 1043, 0, 1044, 0, 1045, 0, 0, 0, 0, 0, 0, 0, 0, 1046, 0,
    0, 1047, 0, 0, 0, 0, 0, 1048, 0, 0, 0, 0, 0, 1049, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1050, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1051, 0, 0, 1052, 0, 0, 0, 1053, 0, 1054, 0, 0, 0, 0, 0, 0, 0, 1055, 0, 0, 0,
    1056, 0, 0, 1057, 0, 0, 0, 1058, 0, 1059, 0, 0, 1060, 0, 0, 0, 0, 1061, 0, 0, 0, 1062, 0, 1063, 0, 0, 0, 0, 1064, 0, 1065, 0,
    0, 0, 0, 1066, 0, 1067, 0, 0, 0, 1068, 0, 0, 1069, 1070, 0, 0, 0, 0, 1071, 0, 0, 1072, 0, 0, 0, 0, 0, 0, 1073, 0, 1074, 0,
    0, 0, 0, 1075, 0, 0, 0, 0, 1076, 0, 0, 0, 1077, 0, 1078, 0, 0, 0, 1079, 0, 1080, 0, 1081, 0, 1082, 0, 0, 1083, 0, 0, 1084, 0,
    0, 0, 0, 1085, 0, 0, 0, 1086, 0, 0, 0, 1087, 0, 0, 0, 1088, 0, 0, 0, 0, 1089, 0, 0, 0, 1090, 0, 0, 1091, 0, 1092, 0, 0,
    0, 1093, 0, 1094, 0, 0, 0, 0, 1095, 0, 1096, 0, 0, 0, 0, 1097, 0, 0, 1098, 0, 0, 0, 1099, 0, 0, 0, 1100, 0, 0, 1101, 0, 0,
    1102, 0, 0, 0, 1103, 0, 0, 0, 1104, 0, 0, 0, 0, 0, 1105, 0, 0, 0, 0, 0, 0, 0, 1106,
};
void recomp_unit_0046_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088BC000u;
        entry_id = (entry_delta < 16348u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0046[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088BC000;
    case 2u: goto L_088BC008;
    case 3u: goto L_088BC018;
    case 4u: goto L_088BC020;
    case 5u: goto L_088BC028;
    case 6u: goto L_088BC038;
    case 7u: goto L_088BC040;
    case 8u: goto L_088BC048;
    case 9u: goto L_088BC04C;
    case 10u: goto L_088BC054;
    case 11u: goto L_088BC084;
    case 12u: goto L_088BC08C;
    case 13u: goto L_088BC090;
    case 14u: goto L_088BC098;
    case 15u: goto L_088BC0A0;
    case 16u: goto L_088BC0B0;
    case 17u: goto L_088BC0BC;
    case 18u: goto L_088BC0C4;
    case 19u: goto L_088BC0CC;
    case 20u: goto L_088BC0D4;
    case 21u: goto L_088BC0D8;
    case 22u: goto L_088BC0E0;
    case 23u: goto L_088BC0F0;
    case 24u: goto L_088BC0F8;
    case 25u: goto L_088BC114;
    case 26u: goto L_088BC11C;
    case 27u: goto L_088BC128;
    case 28u: goto L_088BC13C;
    case 29u: goto L_088BC148;
    case 30u: goto L_088BC14C;
    case 31u: goto L_088BC154;
    case 32u: goto L_088BC174;
    case 33u: goto L_088BC17C;
    case 34u: goto L_088BC188;
    case 35u: goto L_088BC19C;
    case 36u: goto L_088BC1AC;
    case 37u: goto L_088BC1B8;
    case 38u: goto L_088BC1C0;
    case 39u: goto L_088BC1C8;
    case 40u: goto L_088BC1D4;
    case 41u: goto L_088BC1DC;
    case 42u: goto L_088BC1F0;
    case 43u: goto L_088BC220;
    case 44u: goto L_088BC230;
    case 45u: goto L_088BC23C;
    case 46u: goto L_088BC244;
    case 47u: goto L_088BC258;
    case 48u: goto L_088BC26C;
    case 49u: goto L_088BC27C;
    case 50u: goto L_088BC28C;
    case 51u: goto L_088BC294;
    case 52u: goto L_088BC29C;
    case 53u: goto L_088BC2A8;
    case 54u: goto L_088BC2AC;
    case 55u: goto L_088BC2BC;
    case 56u: goto L_088BC2D0;
    case 57u: goto L_088BC2F4;
    case 58u: goto L_088BC318;
    case 59u: goto L_088BC32C;
    case 60u: goto L_088BC370;
    case 61u: goto L_088BC380;
    case 62u: goto L_088BC388;
    case 63u: goto L_088BC38C;
    case 64u: goto L_088BC394;
    case 65u: goto L_088BC39C;
    case 66u: goto L_088BC3A4;
    case 67u: goto L_088BC3B0;
    case 68u: goto L_088BC3C0;
    case 69u: goto L_088BC3C8;
    case 70u: goto L_088BC3CC;
    case 71u: goto L_088BC3D4;
    case 72u: goto L_088BC3E0;
    case 73u: goto L_088BC3E8;
    case 74u: goto L_088BC3F4;
    case 75u: goto L_088BC41C;
    case 76u: goto L_088BC428;
    case 77u: goto L_088BC438;
    case 78u: goto L_088BC43C;
    case 79u: goto L_088BC460;
    case 80u: goto L_088BC468;
    case 81u: goto L_088BC478;
    case 82u: goto L_088BC480;
    case 83u: goto L_088BC4A8;
    case 84u: goto L_088BC4C0;
    case 85u: goto L_088BC4C8;
    case 86u: goto L_088BC4D4;
    case 87u: goto L_088BC4DC;
    case 88u: goto L_088BC4EC;
    case 89u: goto L_088BC4F4;
    case 90u: goto L_088BC500;
    case 91u: goto L_088BC508;
    case 92u: goto L_088BC51C;
    case 93u: goto L_088BC530;
    case 94u: goto L_088BC544;
    case 95u: goto L_088BC550;
    case 96u: goto L_088BC55C;
    case 97u: goto L_088BC570;
    case 98u: goto L_088BC578;
    case 99u: goto L_088BC580;
    case 100u: goto L_088BC58C;
    case 101u: goto L_088BC594;
    case 102u: goto L_088BC5A4;
    case 103u: goto L_088BC5B0;
    case 104u: goto L_088BC5BC;
    case 105u: goto L_088BC5D8;
    case 106u: goto L_088BC5EC;
    case 107u: goto L_088BC5FC;
    case 108u: goto L_088BC608;
    case 109u: goto L_088BC610;
    case 110u: goto L_088BC61C;
    case 111u: goto L_088BC624;
    case 112u: goto L_088BC630;
    case 113u: goto L_088BC63C;
    case 114u: goto L_088BC644;
    case 115u: goto L_088BC64C;
    case 116u: goto L_088BC664;
    case 117u: goto L_088BC66C;
    case 118u: goto L_088BC674;
    case 119u: goto L_088BC67C;
    case 120u: goto L_088BC684;
    case 121u: goto L_088BC690;
    case 122u: goto L_088BC698;
    case 123u: goto L_088BC6A0;
    case 124u: goto L_088BC6A8;
    case 125u: goto L_088BC6B4;
    case 126u: goto L_088BC6BC;
    case 127u: goto L_088BC6C4;
    case 128u: goto L_088BC6C8;
    case 129u: goto L_088BC6D0;
    case 130u: goto L_088BC6E4;
    case 131u: goto L_088BC6F4;
    case 132u: goto L_088BC700;
    case 133u: goto L_088BC70C;
    case 134u: goto L_088BC738;
    case 135u: goto L_088BC740;
    case 136u: goto L_088BC748;
    case 137u: goto L_088BC758;
    case 138u: goto L_088BC764;
    case 139u: goto L_088BC778;
    case 140u: goto L_088BC780;
    case 141u: goto L_088BC784;
    case 142u: goto L_088BC794;
    case 143u: goto L_088BC79C;
    case 144u: goto L_088BC7B4;
    case 145u: goto L_088BC7D0;
    case 146u: goto L_088BC7DC;
    case 147u: goto L_088BC844;
    case 148u: goto L_088BC84C;
    case 149u: goto L_088BC858;
    case 150u: goto L_088BC878;
    case 151u: goto L_088BC880;
    case 152u: goto L_088BC88C;
    case 153u: goto L_088BC8BC;
    case 154u: goto L_088BC8D4;
    case 155u: goto L_088BC8E0;
    case 156u: goto L_088BC930;
    case 157u: goto L_088BC93C;
    case 158u: goto L_088BC98C;
    case 159u: goto L_088BC9A0;
    case 160u: goto L_088BC9C8;
    case 161u: goto L_088BC9CC;
    case 162u: goto L_088BCA54;
    case 163u: goto L_088BCA5C;
    case 164u: goto L_088BCA7C;
    case 165u: goto L_088BCAA4;
    case 166u: goto L_088BCAAC;
    case 167u: goto L_088BCAB0;
    case 168u: goto L_088BCAB8;
    case 169u: goto L_088BCAC4;
    case 170u: goto L_088BCACC;
    case 171u: goto L_088BCAD0;
    case 172u: goto L_088BCAD8;
    case 173u: goto L_088BCAE0;
    case 174u: goto L_088BCAEC;
    case 175u: goto L_088BCAF4;
    case 176u: goto L_088BCAF8;
    case 177u: goto L_088BCB00;
    case 178u: goto L_088BCB08;
    case 179u: goto L_088BCB18;
    case 180u: goto L_088BCB20;
    case 181u: goto L_088BCB2C;
    case 182u: goto L_088BCB40;
    case 183u: goto L_088BCB4C;
    case 184u: goto L_088BCB50;
    case 185u: goto L_088BCB5C;
    case 186u: goto L_088BCB68;
    case 187u: goto L_088BCB7C;
    case 188u: goto L_088BCB84;
    case 189u: goto L_088BCB90;
    case 190u: goto L_088BCBA4;
    case 191u: goto L_088BCBB0;
    case 192u: goto L_088BCBBC;
    case 193u: goto L_088BCBC0;
    case 194u: goto L_088BCBD0;
    case 195u: goto L_088BCBE8;
    case 196u: goto L_088BCBF0;
    case 197u: goto L_088BCBF8;
    case 198u: goto L_088BCC00;
    case 199u: goto L_088BCC0C;
    case 200u: goto L_088BCC1C;
    case 201u: goto L_088BCC24;
    case 202u: goto L_088BCC50;
    case 203u: goto L_088BCC58;
    case 204u: goto L_088BCC60;
    case 205u: goto L_088BCC94;
    case 206u: goto L_088BCC9C;
    case 207u: goto L_088BCCA4;
    case 208u: goto L_088BCCB0;
    case 209u: goto L_088BCCBC;
    case 210u: goto L_088BCCC4;
    case 211u: goto L_088BCCCC;
    case 212u: goto L_088BCCD4;
    case 213u: goto L_088BCCDC;
    case 214u: goto L_088BCCE4;
    case 215u: goto L_088BCCF0;
    case 216u: goto L_088BCCF8;
    case 217u: goto L_088BCD00;
    case 218u: goto L_088BCD14;
    case 219u: goto L_088BCD1C;
    case 220u: goto L_088BCD28;
    case 221u: goto L_088BCD30;
    case 222u: goto L_088BCD38;
    case 223u: goto L_088BCD50;
    case 224u: goto L_088BCE38;
    case 225u: goto L_088BCE3C;
    case 226u: goto L_088BCE7C;
    case 227u: goto L_088BCE84;
    case 228u: goto L_088BCE9C;
    case 229u: goto L_088BCEB8;
    case 230u: goto L_088BCED8;
    case 231u: goto L_088BCEEC;
    case 232u: goto L_088BCEF8;
    case 233u: goto L_088BCF04;
    case 234u: goto L_088BCF44;
    case 235u: goto L_088BCF58;
    case 236u: goto L_088BCF64;
    case 237u: goto L_088BCF70;
    case 238u: goto L_088BCF88;
    case 239u: goto L_088BCF94;
    case 240u: goto L_088BCF9C;
    case 241u: goto L_088BCFA4;
    case 242u: goto L_088BCFB8;
    case 243u: goto L_088BCFBC;
    case 244u: goto L_088BCFCC;
    case 245u: goto L_088BCFD4;
    case 246u: goto L_088BCFDC;
    case 247u: goto L_088BCFF8;
    case 248u: goto L_088BD038;
    case 249u: goto L_088BD080;
    case 250u: goto L_088BD090;
    case 251u: goto L_088BD098;
    case 252u: goto L_088BD0A0;
    case 253u: goto L_088BD0A8;
    case 254u: goto L_088BD0B0;
    case 255u: goto L_088BD0B8;
    case 256u: goto L_088BD0C8;
    case 257u: goto L_088BD0D8;
    case 258u: goto L_088BD0E0;
    case 259u: goto L_088BD0F0;
    case 260u: goto L_088BD0F8;
    case 261u: goto L_088BD108;
    case 262u: goto L_088BD110;
    case 263u: goto L_088BD120;
    case 264u: goto L_088BD128;
    case 265u: goto L_088BD138;
    case 266u: goto L_088BD140;
    case 267u: goto L_088BD150;
    case 268u: goto L_088BD15C;
    case 269u: goto L_088BD168;
    case 270u: goto L_088BD178;
    case 271u: goto L_088BD180;
    case 272u: goto L_088BD190;
    case 273u: goto L_088BD198;
    case 274u: goto L_088BD19C;
    case 275u: goto L_088BD1A8;
    case 276u: goto L_088BD1B0;
    case 277u: goto L_088BD1C0;
    case 278u: goto L_088BD1C8;
    case 279u: goto L_088BD1D8;
    case 280u: goto L_088BD1E4;
    case 281u: goto L_088BD1F8;
    case 282u: goto L_088BD20C;
    case 283u: goto L_088BD214;
    case 284u: goto L_088BD218;
    case 285u: goto L_088BD224;
    case 286u: goto L_088BD22C;
    case 287u: goto L_088BD23C;
    case 288u: goto L_088BD254;
    case 289u: goto L_088BD25C;
    case 290u: goto L_088BD26C;
    case 291u: goto L_088BD274;
    case 292u: goto L_088BD27C;
    case 293u: goto L_088BD284;
    case 294u: goto L_088BD290;
    case 295u: goto L_088BD29C;
    case 296u: goto L_088BD2A4;
    case 297u: goto L_088BD2A8;
    case 298u: goto L_088BD2B0;
    case 299u: goto L_088BD2BC;
    case 300u: goto L_088BD2C4;
    case 301u: goto L_088BD2CC;
    case 302u: goto L_088BD2D8;
    case 303u: goto L_088BD2E4;
    case 304u: goto L_088BD2EC;
    case 305u: goto L_088BD2F0;
    case 306u: goto L_088BD2F8;
    case 307u: goto L_088BD304;
    case 308u: goto L_088BD30C;
    case 309u: goto L_088BD314;
    case 310u: goto L_088BD320;
    case 311u: goto L_088BD32C;
    case 312u: goto L_088BD334;
    case 313u: goto L_088BD338;
    case 314u: goto L_088BD340;
    case 315u: goto L_088BD34C;
    case 316u: goto L_088BD354;
    case 317u: goto L_088BD35C;
    case 318u: goto L_088BD368;
    case 319u: goto L_088BD374;
    case 320u: goto L_088BD37C;
    case 321u: goto L_088BD380;
    case 322u: goto L_088BD388;
    case 323u: goto L_088BD394;
    case 324u: goto L_088BD39C;
    case 325u: goto L_088BD3A4;
    case 326u: goto L_088BD3B0;
    case 327u: goto L_088BD3BC;
    case 328u: goto L_088BD3C4;
    case 329u: goto L_088BD3C8;
    case 330u: goto L_088BD3D0;
    case 331u: goto L_088BD3DC;
    case 332u: goto L_088BD3E4;
    case 333u: goto L_088BD3EC;
    case 334u: goto L_088BD3F8;
    case 335u: goto L_088BD404;
    case 336u: goto L_088BD40C;
    case 337u: goto L_088BD410;
    case 338u: goto L_088BD418;
    case 339u: goto L_088BD424;
    case 340u: goto L_088BD42C;
    case 341u: goto L_088BD434;
    case 342u: goto L_088BD440;
    case 343u: goto L_088BD44C;
    case 344u: goto L_088BD454;
    case 345u: goto L_088BD458;
    case 346u: goto L_088BD460;
    case 347u: goto L_088BD46C;
    case 348u: goto L_088BD474;
    case 349u: goto L_088BD47C;
    case 350u: goto L_088BD488;
    case 351u: goto L_088BD494;
    case 352u: goto L_088BD49C;
    case 353u: goto L_088BD4A0;
    case 354u: goto L_088BD4A8;
    case 355u: goto L_088BD4B4;
    case 356u: goto L_088BD4BC;
    case 357u: goto L_088BD4C4;
    case 358u: goto L_088BD4D0;
    case 359u: goto L_088BD4DC;
    case 360u: goto L_088BD4E4;
    case 361u: goto L_088BD4E8;
    case 362u: goto L_088BD4F0;
    case 363u: goto L_088BD4FC;
    case 364u: goto L_088BD504;
    case 365u: goto L_088BD50C;
    case 366u: goto L_088BD518;
    case 367u: goto L_088BD524;
    case 368u: goto L_088BD52C;
    case 369u: goto L_088BD530;
    case 370u: goto L_088BD538;
    case 371u: goto L_088BD544;
    case 372u: goto L_088BD54C;
    case 373u: goto L_088BD554;
    case 374u: goto L_088BD558;
    case 375u: goto L_088BD560;
    case 376u: goto L_088BD568;
    case 377u: goto L_088BD574;
    case 378u: goto L_088BD57C;
    case 379u: goto L_088BD580;
    case 380u: goto L_088BD588;
    case 381u: goto L_088BD590;
    case 382u: goto L_088BD59C;
    case 383u: goto L_088BD5A4;
    case 384u: goto L_088BD5A8;
    case 385u: goto L_088BD5B0;
    case 386u: goto L_088BD5C0;
    case 387u: goto L_088BD5C8;
    case 388u: goto L_088BD5D4;
    case 389u: goto L_088BD5DC;
    case 390u: goto L_088BD5E0;
    case 391u: goto L_088BD5E8;
    case 392u: goto L_088BD5F0;
    case 393u: goto L_088BD5F8;
    case 394u: goto L_088BD604;
    case 395u: goto L_088BD610;
    case 396u: goto L_088BD618;
    case 397u: goto L_088BD61C;
    case 398u: goto L_088BD624;
    case 399u: goto L_088BD630;
    case 400u: goto L_088BD634;
    case 401u: goto L_088BD63C;
    case 402u: goto L_088BD644;
    case 403u: goto L_088BD650;
    case 404u: goto L_088BD660;
    case 405u: goto L_088BD668;
    case 406u: goto L_088BD688;
    case 407u: goto L_088BD6A8;
    case 408u: goto L_088BD6B0;
    case 409u: goto L_088BD6C0;
    case 410u: goto L_088BD6C8;
    case 411u: goto L_088BD6D8;
    case 412u: goto L_088BD6E8;
    case 413u: goto L_088BD6F8;
    case 414u: goto L_088BD704;
    case 415u: goto L_088BD714;
    case 416u: goto L_088BD71C;
    case 417u: goto L_088BD720;
    case 418u: goto L_088BD728;
    case 419u: goto L_088BD734;
    case 420u: goto L_088BD740;
    case 421u: goto L_088BD748;
    case 422u: goto L_088BD754;
    case 423u: goto L_088BD764;
    case 424u: goto L_088BD770;
    case 425u: goto L_088BD788;
    case 426u: goto L_088BD790;
    case 427u: goto L_088BD79C;
    case 428u: goto L_088BD7A4;
    case 429u: goto L_088BD7AC;
    case 430u: goto L_088BD7B4;
    case 431u: goto L_088BD7BC;
    case 432u: goto L_088BD7C4;
    case 433u: goto L_088BD7D0;
    case 434u: goto L_088BD7E8;
    case 435u: goto L_088BD7F0;
    case 436u: goto L_088BD804;
    case 437u: goto L_088BD80C;
    case 438u: goto L_088BD828;
    case 439u: goto L_088BD830;
    case 440u: goto L_088BD844;
    case 441u: goto L_088BD84C;
    case 442u: goto L_088BD864;
    case 443u: goto L_088BD868;
    case 444u: goto L_088BD870;
    case 445u: goto L_088BD888;
    case 446u: goto L_088BD890;
    case 447u: goto L_088BD898;
    case 448u: goto L_088BD8B0;
    case 449u: goto L_088BD8B8;
    case 450u: goto L_088BD8C4;
    case 451u: goto L_088BD8CC;
    case 452u: goto L_088BD8E0;
    case 453u: goto L_088BD8F0;
    case 454u: goto L_088BD8F8;
    case 455u: goto L_088BD8FC;
    case 456u: goto L_088BD904;
    case 457u: goto L_088BD910;
    case 458u: goto L_088BD91C;
    case 459u: goto L_088BD92C;
    case 460u: goto L_088BD944;
    case 461u: goto L_088BD94C;
    case 462u: goto L_088BD964;
    case 463u: goto L_088BD96C;
    case 464u: goto L_088BD978;
    case 465u: goto L_088BD9A4;
    case 466u: goto L_088BD9C8;
    case 467u: goto L_088BD9D0;
    case 468u: goto L_088BD9E4;
    case 469u: goto L_088BD9EC;
    case 470u: goto L_088BDA18;
    case 471u: goto L_088BDA20;
    case 472u: goto L_088BDA28;
    case 473u: goto L_088BDA38;
    case 474u: goto L_088BDA4C;
    case 475u: goto L_088BDA5C;
    case 476u: goto L_088BDA68;
    case 477u: goto L_088BDA70;
    case 478u: goto L_088BDA78;
    case 479u: goto L_088BDA84;
    case 480u: goto L_088BDA94;
    case 481u: goto L_088BDAA0;
    case 482u: goto L_088BDAB4;
    case 483u: goto L_088BDABC;
    case 484u: goto L_088BDAC4;
    case 485u: goto L_088BDAD4;
    case 486u: goto L_088BDAE4;
    case 487u: goto L_088BDB0C;
    case 488u: goto L_088BDB10;
    case 489u: goto L_088BDB24;
    case 490u: goto L_088BDB2C;
    case 491u: goto L_088BDB34;
    case 492u: goto L_088BDB40;
    case 493u: goto L_088BDB48;
    case 494u: goto L_088BDB54;
    case 495u: goto L_088BDB64;
    case 496u: goto L_088BDB70;
    case 497u: goto L_088BDB7C;
    case 498u: goto L_088BDB88;
    case 499u: goto L_088BDB8C;
    case 500u: goto L_088BDB94;
    case 501u: goto L_088BDBAC;
    case 502u: goto L_088BDBC4;
    case 503u: goto L_088BDBD0;
    case 504u: goto L_088BDBD8;
    case 505u: goto L_088BDBEC;
    case 506u: goto L_088BDBF8;
    case 507u: goto L_088BDC00;
    case 508u: goto L_088BDC08;
    case 509u: goto L_088BDC10;
    case 510u: goto L_088BDC20;
    case 511u: goto L_088BDC28;
    case 512u: goto L_088BDC30;
    case 513u: goto L_088BDC34;
    case 514u: goto L_088BDC60;
    case 515u: goto L_088BDC6C;
    case 516u: goto L_088BDC74;
    case 517u: goto L_088BDC7C;
    case 518u: goto L_088BDC88;
    case 519u: goto L_088BDC90;
    case 520u: goto L_088BDC94;
    case 521u: goto L_088BDC9C;
    case 522u: goto L_088BDCBC;
    case 523u: goto L_088BDCC8;
    case 524u: goto L_088BDCD0;
    case 525u: goto L_088BDCDC;
    case 526u: goto L_088BDCE8;
    case 527u: goto L_088BDCF4;
    case 528u: goto L_088BDD04;
    case 529u: goto L_088BDD0C;
    case 530u: goto L_088BDD10;
    case 531u: goto L_088BDD18;
    case 532u: goto L_088BDD1C;
    case 533u: goto L_088BDD24;
    case 534u: goto L_088BDD2C;
    case 535u: goto L_088BDD38;
    case 536u: goto L_088BDD44;
    case 537u: goto L_088BDD58;
    case 538u: goto L_088BDD68;
    case 539u: goto L_088BDD70;
    case 540u: goto L_088BDD80;
    case 541u: goto L_088BDD98;
    case 542u: goto L_088BDDD8;
    case 543u: goto L_088BDDE4;
    case 544u: goto L_088BDE08;
    case 545u: goto L_088BDE20;
    case 546u: goto L_088BDE2C;
    case 547u: goto L_088BDE40;
    case 548u: goto L_088BDE48;
    case 549u: goto L_088BDE50;
    case 550u: goto L_088BDE58;
    case 551u: goto L_088BDE60;
    case 552u: goto L_088BDE64;
    case 553u: goto L_088BDE6C;
    case 554u: goto L_088BDE74;
    case 555u: goto L_088BDE84;
    case 556u: goto L_088BDE8C;
    case 557u: goto L_088BDE94;
    case 558u: goto L_088BDEA4;
    case 559u: goto L_088BDEAC;
    case 560u: goto L_088BDEB4;
    case 561u: goto L_088BDEBC;
    case 562u: goto L_088BDEC0;
    case 563u: goto L_088BDEC8;
    case 564u: goto L_088BDED0;
    case 565u: goto L_088BDED8;
    case 566u: goto L_088BDEE0;
    case 567u: goto L_088BDEE8;
    case 568u: goto L_088BDEF0;
    case 569u: goto L_088BDEF8;
    case 570u: goto L_088BDF00;
    case 571u: goto L_088BDF0C;
    case 572u: goto L_088BDF14;
    case 573u: goto L_088BDF1C;
    case 574u: goto L_088BDF24;
    case 575u: goto L_088BDF38;
    case 576u: goto L_088BDF40;
    case 577u: goto L_088BDF50;
    case 578u: goto L_088BDF64;
    case 579u: goto L_088BDF74;
    case 580u: goto L_088BDF7C;
    case 581u: goto L_088BDF80;
    case 582u: goto L_088BDF88;
    case 583u: goto L_088BDF94;
    case 584u: goto L_088BDFA8;
    case 585u: goto L_088BDFB8;
    case 586u: goto L_088BDFC0;
    case 587u: goto L_088BDFC4;
    case 588u: goto L_088BDFCC;
    case 589u: goto L_088BDFD4;
    case 590u: goto L_088BDFE4;
    case 591u: goto L_088BDFF0;
    case 592u: goto L_088BE018;
    case 593u: goto L_088BE02C;
    case 594u: goto L_088BE03C;
    case 595u: goto L_088BE058;
    case 596u: goto L_088BE064;
    case 597u: goto L_088BE06C;
    case 598u: goto L_088BE078;
    case 599u: goto L_088BE084;
    case 600u: goto L_088BE088;
    case 601u: goto L_088BE094;
    case 602u: goto L_088BE09C;
    case 603u: goto L_088BE0A4;
    case 604u: goto L_088BE0C0;
    case 605u: goto L_088BE0CC;
    case 606u: goto L_088BE0D8;
    case 607u: goto L_088BE0EC;
    case 608u: goto L_088BE0F8;
    case 609u: goto L_088BE108;
    case 610u: goto L_088BE10C;
    case 611u: goto L_088BE114;
    case 612u: goto L_088BE120;
    case 613u: goto L_088BE128;
    case 614u: goto L_088BE134;
    case 615u: goto L_088BE140;
    case 616u: goto L_088BE148;
    case 617u: goto L_088BE15C;
    case 618u: goto L_088BE164;
    case 619u: goto L_088BE170;
    case 620u: goto L_088BE180;
    case 621u: goto L_088BE18C;
    case 622u: goto L_088BE198;
    case 623u: goto L_088BE1A0;
    case 624u: goto L_088BE1B0;
    case 625u: goto L_088BE1BC;
    case 626u: goto L_088BE1C4;
    case 627u: goto L_088BE1D4;
    case 628u: goto L_088BE1E4;
    case 629u: goto L_088BE1EC;
    case 630u: goto L_088BE208;
    case 631u: goto L_088BE220;
    case 632u: goto L_088BE22C;
    case 633u: goto L_088BE238;
    case 634u: goto L_088BE24C;
    case 635u: goto L_088BE254;
    case 636u: goto L_088BE25C;
    case 637u: goto L_088BE264;
    case 638u: goto L_088BE274;
    case 639u: goto L_088BE280;
    case 640u: goto L_088BE288;
    case 641u: goto L_088BE28C;
    case 642u: goto L_088BE294;
    case 643u: goto L_088BE29C;
    case 644u: goto L_088BE2B4;
    case 645u: goto L_088BE2C4;
    case 646u: goto L_088BE2CC;
    case 647u: goto L_088BE2DC;
    case 648u: goto L_088BE2E8;
    case 649u: goto L_088BE2F8;
    case 650u: goto L_088BE2FC;
    case 651u: goto L_088BE314;
    case 652u: goto L_088BE328;
    case 653u: goto L_088BE330;
    case 654u: goto L_088BE338;
    case 655u: goto L_088BE344;
    case 656u: goto L_088BE350;
    case 657u: goto L_088BE360;
    case 658u: goto L_088BE368;
    case 659u: goto L_088BE370;
    case 660u: goto L_088BE384;
    case 661u: goto L_088BE390;
    case 662u: goto L_088BE39C;
    case 663u: goto L_088BE3A4;
    case 664u: goto L_088BE3AC;
    case 665u: goto L_088BE3B8;
    case 666u: goto L_088BE3C8;
    case 667u: goto L_088BE3D4;
    case 668u: goto L_088BE3DC;
    case 669u: goto L_088BE3E4;
    case 670u: goto L_088BE3F0;
    case 671u: goto L_088BE3FC;
    case 672u: goto L_088BE404;
    case 673u: goto L_088BE414;
    case 674u: goto L_088BE420;
    case 675u: goto L_088BE428;
    case 676u: goto L_088BE438;
    case 677u: goto L_088BE448;
    case 678u: goto L_088BE450;
    case 679u: goto L_088BE46C;
    case 680u: goto L_088BE474;
    case 681u: goto L_088BE47C;
    case 682u: goto L_088BE484;
    case 683u: goto L_088BE490;
    case 684u: goto L_088BE49C;
    case 685u: goto L_088BE4A4;
    case 686u: goto L_088BE4AC;
    case 687u: goto L_088BE4B4;
    case 688u: goto L_088BE4D4;
    case 689u: goto L_088BE4DC;
    case 690u: goto L_088BE4E4;
    case 691u: goto L_088BE4EC;
    case 692u: goto L_088BE4F8;
    case 693u: goto L_088BE508;
    case 694u: goto L_088BE510;
    case 695u: goto L_088BE51C;
    case 696u: goto L_088BE564;
    case 697u: goto L_088BE57C;
    case 698u: goto L_088BE584;
    case 699u: goto L_088BE5B0;
    case 700u: goto L_088BE5E0;
    case 701u: goto L_088BE5E8;
    case 702u: goto L_088BE5F4;
    case 703u: goto L_088BE600;
    case 704u: goto L_088BE608;
    case 705u: goto L_088BE610;
    case 706u: goto L_088BE620;
    case 707u: goto L_088BE630;
    case 708u: goto L_088BE660;
    case 709u: goto L_088BE668;
    case 710u: goto L_088BE67C;
    case 711u: goto L_088BE684;
    case 712u: goto L_088BE68C;
    case 713u: goto L_088BE69C;
    case 714u: goto L_088BE6A8;
    case 715u: goto L_088BE6B8;
    case 716u: goto L_088BE6D4;
    case 717u: goto L_088BE6EC;
    case 718u: goto L_088BE6F8;
    case 719u: goto L_088BE700;
    case 720u: goto L_088BE708;
    case 721u: goto L_088BE710;
    case 722u: goto L_088BE718;
    case 723u: goto L_088BE728;
    case 724u: goto L_088BE738;
    case 725u: goto L_088BE76C;
    case 726u: goto L_088BE77C;
    case 727u: goto L_088BE78C;
    case 728u: goto L_088BE79C;
    case 729u: goto L_088BE7AC;
    case 730u: goto L_088BE7C0;
    case 731u: goto L_088BE7C8;
    case 732u: goto L_088BE7D4;
    case 733u: goto L_088BE7E8;
    case 734u: goto L_088BE7F0;
    case 735u: goto L_088BE7F8;
    case 736u: goto L_088BE800;
    case 737u: goto L_088BE808;
    case 738u: goto L_088BE810;
    case 739u: goto L_088BE818;
    case 740u: goto L_088BE820;
    case 741u: goto L_088BE828;
    case 742u: goto L_088BE834;
    case 743u: goto L_088BE83C;
    case 744u: goto L_088BE850;
    case 745u: goto L_088BE860;
    case 746u: goto L_088BE870;
    case 747u: goto L_088BE87C;
    case 748u: goto L_088BE888;
    case 749u: goto L_088BE898;
    case 750u: goto L_088BE8A8;
    case 751u: goto L_088BE8C0;
    case 752u: goto L_088BE8D0;
    case 753u: goto L_088BE8E0;
    case 754u: goto L_088BE8F0;
    case 755u: goto L_088BE904;
    case 756u: goto L_088BE90C;
    case 757u: goto L_088BE934;
    case 758u: goto L_088BE940;
    case 759u: goto L_088BE948;
    case 760u: goto L_088BE950;
    case 761u: goto L_088BE958;
    case 762u: goto L_088BE968;
    case 763u: goto L_088BE978;
    case 764u: goto L_088BE9A8;
    case 765u: goto L_088BE9B4;
    case 766u: goto L_088BE9BC;
    case 767u: goto L_088BE9CC;
    case 768u: goto L_088BE9EC;
    case 769u: goto L_088BE9F8;
    case 770u: goto L_088BEA08;
    case 771u: goto L_088BEA18;
    case 772u: goto L_088BEA28;
    case 773u: goto L_088BEA3C;
    case 774u: goto L_088BEA44;
    case 775u: goto L_088BEA4C;
    case 776u: goto L_088BEA54;
    case 777u: goto L_088BEA68;
    case 778u: goto L_088BEAC0;
    case 779u: goto L_088BEADC;
    case 780u: goto L_088BEAE8;
    case 781u: goto L_088BEAF0;
    case 782u: goto L_088BEAF8;
    case 783u: goto L_088BEB00;
    case 784u: goto L_088BEB1C;
    case 785u: goto L_088BEB24;
    case 786u: goto L_088BEB30;
    case 787u: goto L_088BEB44;
    case 788u: goto L_088BEB4C;
    case 789u: goto L_088BEB60;
    case 790u: goto L_088BEB68;
    case 791u: goto L_088BEBB0;
    case 792u: goto L_088BEBB8;
    case 793u: goto L_088BEBC0;
    case 794u: goto L_088BEBC8;
    case 795u: goto L_088BEBD4;
    case 796u: goto L_088BEBE0;
    case 797u: goto L_088BEBF8;
    case 798u: goto L_088BEC0C;
    case 799u: goto L_088BEC14;
    case 800u: goto L_088BEC18;
    case 801u: goto L_088BEC24;
    case 802u: goto L_088BEC28;
    case 803u: goto L_088BEC3C;
    case 804u: goto L_088BEC44;
    case 805u: goto L_088BEC58;
    case 806u: goto L_088BEC60;
    case 807u: goto L_088BEC68;
    case 808u: goto L_088BEC70;
    case 809u: goto L_088BEC84;
    case 810u: goto L_088BEC8C;
    case 811u: goto L_088BECA0;
    case 812u: goto L_088BECA8;
    case 813u: goto L_088BECB0;
    case 814u: goto L_088BECB8;
    case 815u: goto L_088BECC8;
    case 816u: goto L_088BECDC;
    case 817u: goto L_088BECE4;
    case 818u: goto L_088BECF8;
    case 819u: goto L_088BED00;
    case 820u: goto L_088BED10;
    case 821u: goto L_088BED20;
    case 822u: goto L_088BED30;
    case 823u: goto L_088BED3C;
    case 824u: goto L_088BED44;
    case 825u: goto L_088BED54;
    case 826u: goto L_088BED64;
    case 827u: goto L_088BED88;
    case 828u: goto L_088BED90;
    case 829u: goto L_088BEDA0;
    case 830u: goto L_088BEDB0;
    case 831u: goto L_088BEDB8;
    case 832u: goto L_088BEDC4;
    case 833u: goto L_088BEDC8;
    case 834u: goto L_088BEDDC;
    case 835u: goto L_088BEDE8;
    case 836u: goto L_088BEDF8;
    case 837u: goto L_088BEE0C;
    case 838u: goto L_088BEE24;
    case 839u: goto L_088BEE28;
    case 840u: goto L_088BEE44;
    case 841u: goto L_088BEE7C;
    case 842u: goto L_088BEE94;
    case 843u: goto L_088BEEA4;
    case 844u: goto L_088BEEAC;
    case 845u: goto L_088BEEB8;
    case 846u: goto L_088BEEC4;
    case 847u: goto L_088BEED0;
    case 848u: goto L_088BEED8;
    case 849u: goto L_088BEF00;
    case 850u: goto L_088BEF08;
    case 851u: goto L_088BEF18;
    case 852u: goto L_088BEF20;
    case 853u: goto L_088BEF40;
    case 854u: goto L_088BEF4C;
    case 855u: goto L_088BEF54;
    case 856u: goto L_088BEF5C;
    case 857u: goto L_088BEFD0;
    case 858u: goto L_088BEFD8;
    case 859u: goto L_088BEFE0;
    case 860u: goto L_088BEFF0;
    case 861u: goto L_088BF00C;
    case 862u: goto L_088BF024;
    case 863u: goto L_088BF050;
    case 864u: goto L_088BF060;
    case 865u: goto L_088BF068;
    case 866u: goto L_088BF078;
    case 867u: goto L_088BF084;
    case 868u: goto L_088BF08C;
    case 869u: goto L_088BF094;
    case 870u: goto L_088BF0AC;
    case 871u: goto L_088BF0C8;
    case 872u: goto L_088BF0D0;
    case 873u: goto L_088BF0EC;
    case 874u: goto L_088BF0FC;
    case 875u: goto L_088BF104;
    case 876u: goto L_088BF130;
    case 877u: goto L_088BF154;
    case 878u: goto L_088BF15C;
    case 879u: goto L_088BF174;
    case 880u: goto L_088BF184;
    case 881u: goto L_088BF18C;
    case 882u: goto L_088BF190;
    case 883u: goto L_088BF19C;
    case 884u: goto L_088BF1B0;
    case 885u: goto L_088BF1BC;
    case 886u: goto L_088BF1C4;
    case 887u: goto L_088BF1CC;
    case 888u: goto L_088BF1E0;
    case 889u: goto L_088BF1EC;
    case 890u: goto L_088BF1F4;
    case 891u: goto L_088BF200;
    case 892u: goto L_088BF210;
    case 893u: goto L_088BF230;
    case 894u: goto L_088BF240;
    case 895u: goto L_088BF258;
    case 896u: goto L_088BF264;
    case 897u: goto L_088BF274;
    case 898u: goto L_088BF278;
    case 899u: goto L_088BF288;
    case 900u: goto L_088BF294;
    case 901u: goto L_088BF29C;
    case 902u: goto L_088BF2C4;
    case 903u: goto L_088BF2E8;
    case 904u: goto L_088BF300;
    case 905u: goto L_088BF308;
    case 906u: goto L_088BF310;
    case 907u: goto L_088BF318;
    case 908u: goto L_088BF320;
    case 909u: goto L_088BF328;
    case 910u: goto L_088BF334;
    case 911u: goto L_088BF33C;
    case 912u: goto L_088BF344;
    case 913u: goto L_088BF360;
    case 914u: goto L_088BF368;
    case 915u: goto L_088BF37C;
    case 916u: goto L_088BF384;
    case 917u: goto L_088BF38C;
    case 918u: goto L_088BF3B4;
    case 919u: goto L_088BF3D8;
    case 920u: goto L_088BF44C;
    case 921u: goto L_088BF458;
    case 922u: goto L_088BF46C;
    case 923u: goto L_088BF47C;
    case 924u: goto L_088BF484;
    case 925u: goto L_088BF488;
    case 926u: goto L_088BF494;
    case 927u: goto L_088BF49C;
    case 928u: goto L_088BF4B8;
    case 929u: goto L_088BF4C8;
    case 930u: goto L_088BF4DC;
    case 931u: goto L_088BF4E4;
    case 932u: goto L_088BF4EC;
    case 933u: goto L_088BF4FC;
    case 934u: goto L_088BF50C;
    case 935u: goto L_088BF51C;
    case 936u: goto L_088BF534;
    case 937u: goto L_088BF53C;
    case 938u: goto L_088BF550;
    case 939u: goto L_088BF558;
    case 940u: goto L_088BF574;
    case 941u: goto L_088BF584;
    case 942u: goto L_088BF59C;
    case 943u: goto L_088BF5B4;
    case 944u: goto L_088BF5CC;
    case 945u: goto L_088BF5D4;
    case 946u: goto L_088BF5F0;
    case 947u: goto L_088BF600;
    case 948u: goto L_088BF610;
    case 949u: goto L_088BF620;
    case 950u: goto L_088BF630;
    case 951u: goto L_088BF648;
    case 952u: goto L_088BF65C;
    case 953u: goto L_088BF674;
    case 954u: goto L_088BF694;
    case 955u: goto L_088BF69C;
    case 956u: goto L_088BF6B4;
    case 957u: goto L_088BF6DC;
    case 958u: goto L_088BF6F4;
    case 959u: goto L_088BF70C;
    case 960u: goto L_088BF714;
    case 961u: goto L_088BF728;
    case 962u: goto L_088BF738;
    case 963u: goto L_088BF740;
    case 964u: goto L_088BF754;
    case 965u: goto L_088BF774;
    case 966u: goto L_088BF77C;
    case 967u: goto L_088BF790;
    case 968u: goto L_088BF7A0;
    case 969u: goto L_088BF7A8;
    case 970u: goto L_088BF7BC;
    case 971u: goto L_088BF7DC;
    case 972u: goto L_088BF7E8;
    case 973u: goto L_088BF804;
    case 974u: goto L_088BF808;
    case 975u: goto L_088BF818;
    case 976u: goto L_088BF820;
    case 977u: goto L_088BF830;
    case 978u: goto L_088BF840;
    case 979u: goto L_088BF850;
    case 980u: goto L_088BF860;
    case 981u: goto L_088BF868;
    case 982u: goto L_088BF878;
    case 983u: goto L_088BF880;
    case 984u: goto L_088BF88C;
    case 985u: goto L_088BF898;
    case 986u: goto L_088BF8B0;
    case 987u: goto L_088BF8C4;
    case 988u: goto L_088BF8F8;
    case 989u: goto L_088BF90C;
    case 990u: goto L_088BF918;
    case 991u: goto L_088BF920;
    case 992u: goto L_088BF92C;
    case 993u: goto L_088BF934;
    case 994u: goto L_088BF940;
    case 995u: goto L_088BF944;
    case 996u: goto L_088BF94C;
    case 997u: goto L_088BF958;
    case 998u: goto L_088BF960;
    case 999u: goto L_088BF980;
    case 1000u: goto L_088BF988;
    case 1001u: goto L_088BF994;
    case 1002u: goto L_088BF99C;
    case 1003u: goto L_088BF9A4;
    case 1004u: goto L_088BF9B4;
    case 1005u: goto L_088BF9BC;
    case 1006u: goto L_088BF9D0;
    case 1007u: goto L_088BF9D8;
    case 1008u: goto L_088BFA0C;
    case 1009u: goto L_088BFA20;
    case 1010u: goto L_088BFA2C;
    case 1011u: goto L_088BFA30;
    case 1012u: goto L_088BFA3C;
    case 1013u: goto L_088BFA4C;
    case 1014u: goto L_088BFA5C;
    case 1015u: goto L_088BFA64;
    case 1016u: goto L_088BFA78;
    case 1017u: goto L_088BFA8C;
    case 1018u: goto L_088BFA94;
    case 1019u: goto L_088BFAAC;
    case 1020u: goto L_088BFAB4;
    case 1021u: goto L_088BFAC0;
    case 1022u: goto L_088BFAC8;
    case 1023u: goto L_088BFAD0;
    case 1024u: goto L_088BFAD8;
    case 1025u: goto L_088BFAE0;
    case 1026u: goto L_088BFAE8;
    case 1027u: goto L_088BFAF8;
    case 1028u: goto L_088BFB10;
    case 1029u: goto L_088BFB20;
    case 1030u: goto L_088BFB30;
    case 1031u: goto L_088BFB3C;
    case 1032u: goto L_088BFB4C;
    case 1033u: goto L_088BFB54;
    case 1034u: goto L_088BFB58;
    case 1035u: goto L_088BFB60;
    case 1036u: goto L_088BFB68;
    case 1037u: goto L_088BFB80;
    case 1038u: goto L_088BFB90;
    case 1039u: goto L_088BFB98;
    case 1040u: goto L_088BFB9C;
    case 1041u: goto L_088BFBB0;
    case 1042u: goto L_088BFBB8;
    case 1043u: goto L_088BFBC4;
    case 1044u: goto L_088BFBCC;
    case 1045u: goto L_088BFBD4;
    case 1046u: goto L_088BFBF8;
    case 1047u: goto L_088BFC04;
    case 1048u: goto L_088BFC1C;
    case 1049u: goto L_088BFC34;
    case 1050u: goto L_088BFC64;
    case 1051u: goto L_088BFCAC;
    case 1052u: goto L_088BFCB8;
    case 1053u: goto L_088BFCC8;
    case 1054u: goto L_088BFCD0;
    case 1055u: goto L_088BFCF0;
    case 1056u: goto L_088BFD00;
    case 1057u: goto L_088BFD0C;
    case 1058u: goto L_088BFD1C;
    case 1059u: goto L_088BFD24;
    case 1060u: goto L_088BFD30;
    case 1061u: goto L_088BFD44;
    case 1062u: goto L_088BFD54;
    case 1063u: goto L_088BFD5C;
    case 1064u: goto L_088BFD70;
    case 1065u: goto L_088BFD78;
    case 1066u: goto L_088BFD8C;
    case 1067u: goto L_088BFD94;
    case 1068u: goto L_088BFDA4;
    case 1069u: goto L_088BFDB0;
    case 1070u: goto L_088BFDB4;
    case 1071u: goto L_088BFDC8;
    case 1072u: goto L_088BFDD4;
    case 1073u: goto L_088BFDF0;
    case 1074u: goto L_088BFDF8;
    case 1075u: goto L_088BFE0C;
    case 1076u: goto L_088BFE20;
    case 1077u: goto L_088BFE30;
    case 1078u: goto L_088BFE38;
    case 1079u: goto L_088BFE48;
    case 1080u: goto L_088BFE50;
    case 1081u: goto L_088BFE58;
    case 1082u: goto L_088BFE60;
    case 1083u: goto L_088BFE6C;
    case 1084u: goto L_088BFE78;
    case 1085u: goto L_088BFE8C;
    case 1086u: goto L_088BFE9C;
    case 1087u: goto L_088BFEAC;
    case 1088u: goto L_088BFEBC;
    case 1089u: goto L_088BFED0;
    case 1090u: goto L_088BFEE0;
    case 1091u: goto L_088BFEEC;
    case 1092u: goto L_088BFEF4;
    case 1093u: goto L_088BFF04;
    case 1094u: goto L_088BFF0C;
    case 1095u: goto L_088BFF20;
    case 1096u: goto L_088BFF28;
    case 1097u: goto L_088BFF3C;
    case 1098u: goto L_088BFF48;
    case 1099u: goto L_088BFF58;
    case 1100u: goto L_088BFF68;
    case 1101u: goto L_088BFF74;
    case 1102u: goto L_088BFF80;
    case 1103u: goto L_088BFF90;
    case 1104u: goto L_088BFFA0;
    case 1105u: goto L_088BFFB8;
    case 1106u: goto L_088BFFD8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088BC000:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC008:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 181u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 166u);
      if (branch_taken) {
          goto L_088BC028;
      }
      goto L_088BC018;
    }
L_088BC018:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 151u);
      if (branch_taken) {
          goto L_088BC028;
      }
      goto L_088BC020;
    }
L_088BC020:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BC048;
      }
      goto L_088BC028;
    }
L_088BC028:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7263)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC040;
      }
      goto L_088BC038;
    }
L_088BC038:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088BC04C;
      }
      goto L_088BC040;
    }
L_088BC040:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088BC04C;
      }
      goto L_088BC048;
    }
L_088BC048:
    ctx.gpr[2] = (0u | 0u);
    goto L_088BC04C;
L_088BC04C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC054:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20904)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088BC090;
      }
      goto L_088BC084;
    }
L_088BC084:
    ctx.gpr[31] = (0x088BC08Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BC08Cu) goto L_088BC08C;
    return;
L_088BC08C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20904)));
    goto L_088BC090;
L_088BC090:
    ctx.gpr[31] = (0x088BC098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x088BC098u) goto L_088BC098;
    return;
L_088BC098:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC0F0;
      }
      goto L_088BC0A0;
    }
L_088BC0A0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3208));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BC0C4;
      }
      goto L_088BC0B0;
    }
L_088BC0B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC0CC;
      }
      goto L_088BC0BC;
    }
L_088BC0BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC0D8;
      }
      goto L_088BC0C4;
    }
L_088BC0C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088BC0F8;
      }
      goto L_088BC0CC;
    }
L_088BC0CC:
    ctx.gpr[31] = (0x088BC0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BC0D4u) goto L_088BC0D4;
    return;
L_088BC0D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20904)));
    goto L_088BC0D8;
L_088BC0D8:
    ctx.gpr[31] = (0x088BC0E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 167u, 0x08838AECu>(ctx, &aot_mem) && ctx.pc == 0x088BC0E0u) goto L_088BC0E0;
    return;
L_088BC0E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[2] ^ ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_088BC0F8;
      }
      goto L_088BC0F0;
    }
L_088BC0F0:
    ctx.gpr[2] = (ctx.gpr[17] ^ ctx.gpr[16]);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_088BC0F8;
L_088BC0F8:
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
L_088BC114:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC11C:
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC14C;
      }
      goto L_088BC128;
    }
L_088BC128:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27324)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_088BC148;
      }
      goto L_088BC13C;
    }
L_088BC13C:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088BC148;
L_088BC148:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(904), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088BC14C;
L_088BC14C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC154:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6392)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6392));
      if (branch_taken) {
          goto L_088BC19C;
      }
      goto L_088BC174;
    }
L_088BC174:
    ctx.gpr[31] = (0x088BC17Cu);
    // nop
    ctx.pc = 0x08B0B9FCu;
    return;
L_088BC17C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BC19C;
      }
      goto L_088BC188;
    }
L_088BC188:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6392)));
    ctx.gpr[31] = (0x088BC19Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11276));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC19Cu) goto L_088BC19C;
    return;
L_088BC19C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BC1C8;
      }
      goto L_088BC1AC;
    }
L_088BC1AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC1DC;
      }
      goto L_088BC1B8;
    }
L_088BC1B8:
    ctx.gpr[31] = (0x088BC1C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 452u, 0x08AC7130u>(ctx, &aot_mem) && ctx.pc == 0x088BC1C0u) goto L_088BC1C0;
    return;
L_088BC1C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC1DC;
      }
      goto L_088BC1C8;
    }
L_088BC1C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BC1DC;
      }
      goto L_088BC1D4;
    }
L_088BC1D4:
    ctx.gpr[31] = (0x088BC1DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B0BDECu;
    return;
L_088BC1DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC1F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6392));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11328));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[31] = (0x088BC220u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(20428)));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC220u) goto L_088BC220;
    return;
L_088BC220:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7156)));
    ctx.gpr[31] = (0x088BC230u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BC5Cu;
    return;
L_088BC230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC244;
      }
      goto L_088BC23C;
    }
L_088BC23C:
    ctx.gpr[31] = (0x088BC244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 480u, 0x08AC73A8u>(ctx, &aot_mem) && ctx.pc == 0x088BC244u) goto L_088BC244;
    return;
L_088BC244:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC258:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BC26Cu);
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    goto L_088BC154;
L_088BC26C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7156)));
    ctx.gpr[31] = (0x088BC27Cu);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BC64u;
    return;
L_088BC27C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7160), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BC29C;
      }
      goto L_088BC28C;
    }
L_088BC28C:
    ctx.gpr[31] = (0x088BC294u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BBBCu;
    return;
L_088BC294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088BC2AC;
      }
      goto L_088BC29C;
    }
L_088BC29C:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x088BC2A8u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B0BBBCu;
    return;
L_088BC2A8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_088BC2AC;
L_088BC2AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC2BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BC2D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11364));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC2D0u) goto L_088BC2D0;
    return;
L_088BC2D0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7160), ctx.gpr[4]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BC2F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11388));
    ctx.pc = 0x08B0BC54u;
    return;
L_088BC2F4:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7156), ctx.gpr[2]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x088BC318u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11408));
    ctx.pc = 0x08B0BC24u;
    return;
L_088BC318:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7152), ctx.gpr[2]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC32C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[7] = (0u | 65u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[18] = (2230u << 16u);
      if (branch_taken) {
          goto L_088BC3A4;
      }
      goto L_088BC370;
    }
L_088BC370:
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC38C;
      }
      goto L_088BC380;
    }
L_088BC380:
    ctx.gpr[31] = (0x088BC388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BC388u) goto L_088BC388;
    return;
L_088BC388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-20904)));
    goto L_088BC38C;
L_088BC38C:
    ctx.gpr[31] = (0x088BC394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x088BC394u) goto L_088BC394;
    return;
L_088BC394:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC3A4;
      }
      goto L_088BC39C;
    }
L_088BC39C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25791))))));
    goto L_088BC3A4;
L_088BC3A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC3D4;
      }
      goto L_088BC3B0;
    }
L_088BC3B0:
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088BC3CC;
      }
      goto L_088BC3C0;
    }
L_088BC3C0:
    ctx.gpr[31] = (0x088BC3C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BC3C8u) goto L_088BC3C8;
    return;
L_088BC3C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-20904)));
    goto L_088BC3CC;
L_088BC3CC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088BC3D4;
L_088BC3D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7156)));
    ctx.gpr[31] = (0x088BC3E0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BC64u;
    return;
L_088BC3E0:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC3F4;
      }
      goto L_088BC3E8;
    }
L_088BC3E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7156)));
    ctx.gpr[31] = (0x088BC3F4u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BC5Cu;
    return;
L_088BC3F4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16368)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (2188u << 16u);
    ctx.gpr[7] = (0u | 32768u);
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11428));
    ctx.gpr[31] = (0x088BC41Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4540));
    ctx.pc = 0x08B0BBA4u;
    return;
L_088BC41C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-7160), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088BC43C;
      }
      goto L_088BC428;
    }
L_088BC428:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BC438u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11448));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC438u) goto L_088BC438;
    return;
L_088BC438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7160)));
    goto L_088BC43C;
L_088BC43C:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6392));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6392), ctx.gpr[7]);
    ctx.gpr[31] = (0x088BC460u);
    ctx.gpr[5] = (0u | 28u);
    ctx.pc = 0x08B0BBACu;
    return;
L_088BC460:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC480;
      }
      goto L_088BC468;
    }
L_088BC468:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(11500));
    ctx.gpr[31] = (0x088BC478u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC478u) goto L_088BC478;
    return;
L_088BC478:
    ctx.gpr[31] = (0x088BC480u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC480u) goto L_088BC480;
    return;
L_088BC480:
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
L_088BC4A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BC4C0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_088BC51C;
L_088BC4C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC4F4;
      }
      goto L_088BC4C8;
    }
L_088BC4C8:
    ctx.gpr[16] = (2225u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(11532));
    goto L_088BC4D4;
L_088BC4D4:
    ctx.gpr[31] = (0x088BC4DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC4DCu) goto L_088BC4DC;
    return;
L_088BC4DC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC4D4;
      }
      goto L_088BC4EC;
    }
L_088BC4EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC508;
      }
      goto L_088BC4F4;
    }
L_088BC4F4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BC500u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11576));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC500u) goto L_088BC500;
    return;
L_088BC500:
    ctx.gpr[31] = (0x088BC508u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088BC1F0;
L_088BC508:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC51C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7160)));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] ^ 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC530:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BC544u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    goto L_088BC550;
L_088BC544:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC550:
    ctx.gpr[5] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20584), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC55C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BC570u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11604));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC570u) goto L_088BC570;
    return;
L_088BC570:
    ctx.gpr[31] = (0x088BC578u);
    // nop
    goto L_088BC51C;
L_088BC578:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC594;
      }
      goto L_088BC580;
    }
L_088BC580:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BC58Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11644));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC58Cu) goto L_088BC58C;
    return;
L_088BC58C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC5B0;
      }
      goto L_088BC594;
    }
L_088BC594:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7156)));
    ctx.gpr[31] = (0x088BC5A4u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BC5Cu;
    return;
L_088BC5A4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BC5B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11668));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC5B0u) goto L_088BC5B0;
    return;
L_088BC5B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC5BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2235u << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1664))))));
    ctx.gpr[6] = (0u | 82u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088BC630;
      }
      goto L_088BC5D8;
    }
L_088BC5D8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1664));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[7] = (0u | 73u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088BC630;
      }
      goto L_088BC5EC;
    }
L_088BC5EC:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (0u | 70u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BC630;
      }
      goto L_088BC5FC;
    }
L_088BC5FC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BC630;
      }
      goto L_088BC608;
    }
L_088BC608:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC624;
      }
      goto L_088BC610;
    }
L_088BC610:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BC61Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11700));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC61Cu) goto L_088BC61C;
    return;
L_088BC61C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC630;
      }
      goto L_088BC624;
    }
L_088BC624:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BC630u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11756));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC630u) goto L_088BC630;
    return;
L_088BC630:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC63C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC644:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC64C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3080));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BC674;
      }
      goto L_088BC664;
    }
L_088BC664:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BC67C;
      }
      goto L_088BC66C;
    }
L_088BC66C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC684;
      }
      goto L_088BC674;
    }
L_088BC674:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088BC6C8;
      }
      goto L_088BC67C;
    }
L_088BC67C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC698;
      }
      goto L_088BC684;
    }
L_088BC684:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 39 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BC6A0;
      }
      goto L_088BC690;
    }
L_088BC690:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC6A8;
      }
      goto L_088BC698;
    }
L_088BC698:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088BC6C8;
      }
      goto L_088BC6A0;
    }
L_088BC6A0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC6BC;
      }
      goto L_088BC6A8;
    }
L_088BC6A8:
    ctx.gpr[5] = (0u | 63u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BC6C4;
      }
      goto L_088BC6B4;
    }
L_088BC6B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088BC6C8;
      }
      goto L_088BC6BC;
    }
L_088BC6BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088BC6C8;
      }
      goto L_088BC6C4;
    }
L_088BC6C4:
    ctx.gpr[2] = (0u | 0u);
    goto L_088BC6C8;
L_088BC6C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC6D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BC6E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11812));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC6E4u) goto L_088BC6E4;
    return;
L_088BC6E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7160)));
    ctx.gpr[31] = (0x088BC6F4u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BC0Cu;
    return;
L_088BC6F4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BC700u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11848));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC700u) goto L_088BC700;
    return;
L_088BC700:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC70C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCA54;
      }
      goto L_088BC738;
    }
L_088BC738:
    ctx.gpr[31] = (0x088BC740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088BC740u) goto L_088BC740;
    return;
L_088BC740:
    ctx.gpr[31] = (0x088BC748u);
    // nop
    goto L_088BC2BC;
L_088BC748:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088BC758u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11880));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 448u, 0x08AC70E8u>(ctx, &aot_mem) && ctx.pc == 0x088BC758u) goto L_088BC758;
    return;
L_088BC758:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC784;
      }
      goto L_088BC764;
    }
L_088BC764:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 20480u);
    ctx.gpr[31] = (0x088BC778u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21256));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 468u, 0x08AC7270u>(ctx, &aot_mem) && ctx.pc == 0x088BC778u) goto L_088BC778;
    return;
L_088BC778:
    ctx.gpr[31] = (0x088BC780u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 452u, 0x08AC7130u>(ctx, &aot_mem) && ctx.pc == 0x088BC780u) goto L_088BC780;
    return;
L_088BC780:
    ctx.gpr[17] = (0u | 1u);
    goto L_088BC784;
L_088BC784:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 66 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(0u));
        goto L_088BC9CC;
    }
    goto L_088BC794;
L_088BC794:
    ctx.gpr[31] = (0x088BC79Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088BC79Cu) goto L_088BC79C;
    return;
L_088BC79C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20596)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20592)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088BC7B4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x088BC7B4u) goto L_088BC7B4;
    return;
L_088BC7B4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] << 10u);
      if (branch_taken) {
          goto L_088BC880;
      }
      goto L_088BC7D0;
    }
L_088BC7D0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (17235u << 16u);
      if (branch_taken) {
          goto L_088BC880;
      }
      goto L_088BC7DC;
    }
L_088BC7DC:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18756));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (20527u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14896));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (18271u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20563));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (12101u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19777));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (17490u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21333));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (47u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21065));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24552));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088BC844u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 407u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088BC844u) goto L_088BC844;
    return;
L_088BC844:
    ctx.gpr[31] = (0x088BC84Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 448u, 0x08AC70E8u>(ctx, &aot_mem) && ctx.pc == 0x088BC84Cu) goto L_088BC84C;
    return;
L_088BC84C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC880;
      }
      goto L_088BC858;
    }
L_088BC858:
    ctx.gpr[4] = (ctx.gpr[19] << 11u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21256));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088BC878u);
    ctx.gpr[6] = (0u | 2048u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 468u, 0x08AC7270u>(ctx, &aot_mem) && ctx.pc == 0x088BC878u) goto L_088BC878;
    return;
L_088BC878:
    ctx.gpr[31] = (0x088BC880u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 452u, 0x08AC7130u>(ctx, &aot_mem) && ctx.pc == 0x088BC880u) goto L_088BC880;
    return;
L_088BC880:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2269u << 16u);
      if (branch_taken) {
          goto L_088BC8BC;
      }
      goto L_088BC88C;
    }
L_088BC88C:
    ctx.gpr[4] = (ctx.gpr[19] << 11u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21256));
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BC8D4;
      }
      goto L_088BC8BC;
    }
L_088BC8BC:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u | 100u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    goto L_088BC8D4;
L_088BC8D4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_088BC930;
      }
      goto L_088BC8E0;
    }
L_088BC8E0:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[19]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21924)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BC9A0;
      }
      goto L_088BC930;
    }
L_088BC930:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_088BC98C;
      }
      goto L_088BC93C;
    }
L_088BC93C:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[19]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21924)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BC9A0;
      }
      goto L_088BC98C;
    }
L_088BC98C:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    goto L_088BC9A0;
L_088BC9A0:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 66 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC794;
      }
      goto L_088BC9C8;
    }
L_088BC9C8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(0u));
    goto L_088BC9CC;
L_088BC9CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(832), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(836), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(837), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(844), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20432), 0u);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(21856), 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(847), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(848), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(849), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(850), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(851), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(852), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(853), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(854), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(855), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(856), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(857), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(858), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(859), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(860), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    goto L_088BCA54;
L_088BCA54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088BCA5C;
      }
      goto L_088BCA5C;
    }
L_088BCA5C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BCA7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20904)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCAB0;
      }
      goto L_088BCAA4;
    }
L_088BCAA4:
    ctx.gpr[31] = (0x088BCAACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BCAACu) goto L_088BCAAC;
    return;
L_088BCAAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20904)));
    goto L_088BCAB0;
L_088BCAB0:
    ctx.gpr[31] = (0x088BCAB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 15u, 0x08838104u>(ctx, &aot_mem) && ctx.pc == 0x088BCAB8u) goto L_088BCAB8;
    return;
L_088BCAB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCAD0;
      }
      goto L_088BCAC4;
    }
L_088BCAC4:
    ctx.gpr[31] = (0x088BCACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BCACCu) goto L_088BCACC;
    return;
L_088BCACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20904)));
    goto L_088BCAD0;
L_088BCAD0:
    ctx.gpr[31] = (0x088BCAD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 168u, 0x08838AF4u>(ctx, &aot_mem) && ctx.pc == 0x088BCAD8u) goto L_088BCAD8;
    return;
L_088BCAD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCB08;
      }
      goto L_088BCAE0;
    }
L_088BCAE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCAF8;
      }
      goto L_088BCAEC;
    }
L_088BCAEC:
    ctx.gpr[31] = (0x088BCAF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BCAF4u) goto L_088BCAF4;
    return;
L_088BCAF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20904)));
    goto L_088BCAF8;
L_088BCAF8:
    ctx.gpr[31] = (0x088BCB00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x088BCB00u) goto L_088BCB00;
    return;
L_088BCB00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCB20;
      }
      goto L_088BCB08;
    }
L_088BCB08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BCB20;
      }
      goto L_088BCB18;
    }
L_088BCB18:
    ctx.gpr[31] = (0x088BCB20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 588u, 0x088BAEBCu>(ctx, &aot_mem) && ctx.pc == 0x088BCB20u) goto L_088BCB20;
    return;
L_088BCB20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCB50;
      }
      goto L_088BCB2C;
    }
L_088BCB2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(832)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_088BCB4C;
      }
      goto L_088BCB40;
    }
L_088BCB40:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088BCB4C;
L_088BCB4C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(904), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088BCB50;
L_088BCB50:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCD38;
      }
      goto L_088BCB5C;
    }
L_088BCB5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCD38;
      }
      goto L_088BCB68;
    }
L_088BCB68:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(858)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
      if (branch_taken) {
          goto L_088BCB84;
      }
      goto L_088BCB7C;
    }
L_088BCB7C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(847)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(859), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_088BCB84;
L_088BCB84:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(859)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BCCA4;
      }
      goto L_088BCB90;
    }
L_088BCB90:
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(858), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(857)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCBC0;
      }
      goto L_088BCBA4;
    }
L_088BCBA4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCBC0;
      }
      goto L_088BCBB0;
    }
L_088BCBB0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21946)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCBC0;
      }
      goto L_088BCBBC;
    }
L_088BCBBC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(857), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_088BCBC0;
L_088BCBC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCBF8;
      }
      goto L_088BCBD0;
    }
L_088BCBD0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20432), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21856), 0u);
    ctx.gpr[31] = (0x088BCBE8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    goto L_088BC51C;
L_088BCBE8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 67u);
      if (branch_taken) {
          goto L_088BCC00;
      }
      goto L_088BCBF0;
    }
L_088BCBF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BCC60;
      }
      goto L_088BCBF8;
    }
L_088BCBF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCD38;
      }
      goto L_088BCC00;
    }
L_088BCC00:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BCC50;
      }
      goto L_088BCC0C;
    }
L_088BCC0C:
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(20600)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCC50;
      }
      goto L_088BCC1C;
    }
L_088BCC1C:
    ctx.gpr[31] = (0x088BCC24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088BC114;
L_088BCC24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(20600), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_088BCC50;
L_088BCC50:
    ctx.gpr[31] = (0x088BCC58u);
    ctx.gpr[4] = (0u | 0u);
    goto L_088BC4A8;
L_088BCC58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCD38;
      }
      goto L_088BCC60;
    }
L_088BCC60:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20600), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(859)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(858), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(848), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(851), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(850), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(852), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(853), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCC9C;
      }
      goto L_088BCC94;
    }
L_088BCC94:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BCD38;
      }
      goto L_088BCC9C;
    }
L_088BCC9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(860), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BCD38;
      }
      goto L_088BCCA4;
    }
L_088BCCA4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCCC4;
      }
      goto L_088BCCB0;
    }
L_088BCCB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21946)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCCC4;
      }
      goto L_088BCCBC;
    }
L_088BCCBC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCCE4;
      }
      goto L_088BCCC4;
    }
L_088BCCC4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BCCF0;
      }
      goto L_088BCCCC;
    }
L_088BCCCC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BCD1C;
      }
      goto L_088BCCD4;
    }
L_088BCCD4:
    ctx.gpr[31] = (0x088BCCDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088BD9A4;
L_088BCCDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCD38;
      }
      goto L_088BCCE4;
    }
L_088BCCE4:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(848), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BCD38;
      }
      goto L_088BCCF0;
    }
L_088BCCF0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BCD30;
      }
      goto L_088BCCF8;
    }
L_088BCCF8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCD1C;
      }
      goto L_088BCD00;
    }
L_088BCD00:
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BCD14u);
    ctx.gpr[7] = (0u | 1u);
    goto L_088BC530;
L_088BCD14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCD38;
      }
      goto L_088BCD1C;
    }
L_088BCD1C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BCD28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11924));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BCD28u) goto L_088BCD28;
    return;
L_088BCD28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCD38;
      }
      goto L_088BCD30;
    }
L_088BCD30:
    ctx.gpr[31] = (0x088BCD38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088BDD98;
L_088BCD38:
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
L_088BCD50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(836), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(837), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(840), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20432), 0u);
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(21856), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(849), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(850), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(851), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(852), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(853), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(854), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(855), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(856), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(857), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(858), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(860), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(908)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(908), ctx.gpr[5]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(20436));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088BCE3C;
      }
      goto L_088BCE38;
    }
L_088BCE38:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(908), 0u);
    goto L_088BCE3C;
L_088BCE3C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (2233u << 16u);
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (2225u << 16u);
    ctx.gpr[4] = (20224u << 16u);
    ctx.gpr[20] = (2225u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[23] = (0u | 5u);
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(10384));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(11952));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12008));
    ctx.gpr[30] = (32768u << 16u);
    goto L_088BCE7C;
L_088BCE7C:
    ctx.gpr[31] = (0x088BCE84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088BCE84u) goto L_088BCE84;
    return;
L_088BCE84:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20596)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20592)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088BCE9Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x088BCE9Cu) goto L_088BCE9C;
    return;
L_088BCE9C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088BCEB8u);
    ctx.gpr[16] = (ctx.gpr[16] << 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x088BCEB8u) goto L_088BCEB8;
    return;
L_088BCEB8:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
        goto L_088BCED8;
    }
    goto L_088BCED8;
L_088BCED8:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
        goto L_088BCEF8;
    }
    goto L_088BCEEC;
L_088BCEEC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088BCF04;
      }
      goto L_088BCEF8;
    }
L_088BCEF8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[30]);
    goto L_088BCF04;
L_088BCF04:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[18]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[8] = (ctx.hi);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[22]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[16] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCF64;
      }
      goto L_088BCF44;
    }
L_088BCF44:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088BCF58u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x088BCF58u) goto L_088BCF58;
    return;
L_088BCF58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const std::uint32_t dividend = ctx.gpr[16]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[16] = (ctx.hi);
    goto L_088BCF64;
L_088BCF64:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BCF70u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BCF70u) goto L_088BCF70;
    return;
L_088BCF70:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088BCE7C;
      }
      goto L_088BCF88;
    }
L_088BCF88:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[29] | 0u);
    goto L_088BCF94;
L_088BCF94:
    ctx.gpr[31] = (0x088BCF9Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 249u, 0x088452F8u>(ctx, &aot_mem) && ctx.pc == 0x088BCF9Cu) goto L_088BCF9C;
    return;
L_088BCF9C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088BCFBC;
      }
      goto L_088BCFA4;
    }
L_088BCFA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BCFBC;
      }
      goto L_088BCFB8;
    }
L_088BCFB8:
    ctx.gpr[16] = (0u | 1u);
    goto L_088BCFBC;
L_088BCFBC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BCF94;
      }
      goto L_088BCFCC;
    }
L_088BCFCC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCFF8;
      }
      goto L_088BCFD4;
    }
L_088BCFD4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_088BCFDC;
L_088BCFDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(864), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BCFDC;
      }
      goto L_088BCFF8;
    }
L_088BCFF8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BD038:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[31]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7200)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7168)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088BD0C8;
      }
      goto L_088BD080;
    }
L_088BD080:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD0C8;
      }
      goto L_088BD090;
    }
L_088BD090:
    ctx.gpr[31] = (0x088BD098u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 645u, 0x088BB178u>(ctx, &aot_mem) && ctx.pc == 0x088BD098u) goto L_088BD098;
    return;
L_088BD098:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD0B8;
      }
      goto L_088BD0A0;
    }
L_088BD0A0:
    ctx.gpr[31] = (0x088BD0A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x088BD0A8u) goto L_088BD0A8;
    return;
L_088BD0A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD0D8;
      }
      goto L_088BD0B0;
    }
L_088BD0B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD150;
      }
      goto L_088BD0B8;
    }
L_088BD0B8:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20609), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BD978;
      }
      goto L_088BD0C8;
    }
L_088BD0C8:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20609), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BD978;
      }
      goto L_088BD0D8;
    }
L_088BD0D8:
    ctx.gpr[31] = (0x088BD0E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x088BD0E0u) goto L_088BD0E0;
    return;
L_088BD0E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD0B8;
      }
      goto L_088BD0F0;
    }
L_088BD0F0:
    ctx.gpr[31] = (0x088BD0F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x088BD0F8u) goto L_088BD0F8;
    return;
L_088BD0F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 199u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BD0B8;
      }
      goto L_088BD108;
    }
L_088BD108:
    ctx.gpr[31] = (0x088BD110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x088BD110u) goto L_088BD110;
    return;
L_088BD110:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 196u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BD0B8;
      }
      goto L_088BD120;
    }
L_088BD120:
    ctx.gpr[31] = (0x088BD128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x088BD128u) goto L_088BD128;
    return;
L_088BD128:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 157u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BD0B8;
      }
      goto L_088BD138;
    }
L_088BD138:
    ctx.gpr[31] = (0x088BD140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x088BD140u) goto L_088BD140;
    return;
L_088BD140:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 158u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BD0B8;
      }
      goto L_088BD150;
    }
L_088BD150:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088BD15Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 350u, 0x08A5E138u>(ctx, &aot_mem) && ctx.pc == 0x088BD15Cu) goto L_088BD15C;
    return;
L_088BD15C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD180;
      }
      goto L_088BD168;
    }
L_088BD168:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(672)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 23 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BD190;
      }
      goto L_088BD178;
    }
L_088BD178:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD19C;
      }
      goto L_088BD180;
    }
L_088BD180:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20609), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BD978;
      }
      goto L_088BD190;
    }
L_088BD190:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD19C;
      }
      goto L_088BD198;
    }
L_088BD198:
    ctx.gpr[18] = (0u | 10u);
    goto L_088BD19C;
L_088BD19C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 65u);
      if (branch_taken) {
          goto L_088BD1B0;
      }
      goto L_088BD1A8;
    }
L_088BD1A8:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BD1C8;
      }
      goto L_088BD1B0;
    }
L_088BD1B0:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20432)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
      if (branch_taken) {
          goto L_088BD1D8;
      }
      goto L_088BD1C0;
    }
L_088BD1C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD214;
      }
      goto L_088BD1C8;
    }
L_088BD1C8:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20609), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BD978;
      }
      goto L_088BD1D8;
    }
L_088BD1D8:
    ctx.gpr[6] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BD214;
      }
      goto L_088BD1E4;
    }
L_088BD1E4:
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD218;
      }
      goto L_088BD1F8;
    }
L_088BD1F8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-11));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD1F8;
      }
      goto L_088BD20C;
    }
L_088BD20C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD218;
      }
      goto L_088BD214;
    }
L_088BD214:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088BD218;
L_088BD218:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 65u);
      if (branch_taken) {
          goto L_088BD254;
      }
      goto L_088BD224;
    }
L_088BD224:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.gpr[19] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BD274;
      }
      goto L_088BD22C;
    }
L_088BD22C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BD5F0;
      }
      goto L_088BD23C;
    }
L_088BD23C:
    ctx.gpr[18] = (ctx.gpr[18] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[18]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(13144)));
    jump_target = ctx.gpr[1];
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BD254:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088BD274;
      }
      goto L_088BD25C;
    }
L_088BD25C:
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD54C;
      }
      goto L_088BD26C;
    }
L_088BD26C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD558;
      }
      goto L_088BD274;
    }
L_088BD274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD978;
      }
      goto L_088BD27C;
    }
L_088BD27C:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088BD2B0;
      }
      goto L_088BD284;
    }
L_088BD284:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x088BD290u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088BD290u) goto L_088BD290;
    return;
L_088BD290:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD2A8;
      }
      goto L_088BD29C;
    }
L_088BD29C:
    ctx.gpr[31] = (0x088BD2A4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x088BD2A4u) goto L_088BD2A4;
    return;
L_088BD2A4:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_088BD2A8;
L_088BD2A8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[20]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088BD2B0;
L_088BD2B0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD2BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12028));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x088BD2BCu) goto L_088BD2BC;
    return;
L_088BD2BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BD634;
      }
      goto L_088BD2C4;
    }
L_088BD2C4:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088BD2F8;
      }
      goto L_088BD2CC;
    }
L_088BD2CC:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x088BD2D8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088BD2D8u) goto L_088BD2D8;
    return;
L_088BD2D8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD2F0;
      }
      goto L_088BD2E4;
    }
L_088BD2E4:
    ctx.gpr[31] = (0x088BD2ECu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x088BD2ECu) goto L_088BD2EC;
    return;
L_088BD2EC:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_088BD2F0;
L_088BD2F0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[20]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088BD2F8;
L_088BD2F8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD304u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12036));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x088BD304u) goto L_088BD304;
    return;
L_088BD304:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BD634;
      }
      goto L_088BD30C;
    }
L_088BD30C:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088BD340;
      }
      goto L_088BD314;
    }
L_088BD314:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x088BD320u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088BD320u) goto L_088BD320;
    return;
L_088BD320:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD338;
      }
      goto L_088BD32C;
    }
L_088BD32C:
    ctx.gpr[31] = (0x088BD334u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x088BD334u) goto L_088BD334;
    return;
L_088BD334:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_088BD338;
L_088BD338:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[20]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088BD340;
L_088BD340:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD34Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12044));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x088BD34Cu) goto L_088BD34C;
    return;
L_088BD34C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BD634;
      }
      goto L_088BD354;
    }
L_088BD354:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088BD388;
      }
      goto L_088BD35C;
    }
L_088BD35C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x088BD368u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088BD368u) goto L_088BD368;
    return;
L_088BD368:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD380;
      }
      goto L_088BD374;
    }
L_088BD374:
    ctx.gpr[31] = (0x088BD37Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x088BD37Cu) goto L_088BD37C;
    return;
L_088BD37C:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_088BD380;
L_088BD380:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[20]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088BD388;
L_088BD388:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD394u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12052));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x088BD394u) goto L_088BD394;
    return;
L_088BD394:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BD634;
      }
      goto L_088BD39C;
    }
L_088BD39C:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088BD3D0;
      }
      goto L_088BD3A4;
    }
L_088BD3A4:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x088BD3B0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088BD3B0u) goto L_088BD3B0;
    return;
L_088BD3B0:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD3C8;
      }
      goto L_088BD3BC;
    }
L_088BD3BC:
    ctx.gpr[31] = (0x088BD3C4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x088BD3C4u) goto L_088BD3C4;
    return;
L_088BD3C4:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_088BD3C8;
L_088BD3C8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[20]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088BD3D0;
L_088BD3D0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD3DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12060));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x088BD3DCu) goto L_088BD3DC;
    return;
L_088BD3DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BD634;
      }
      goto L_088BD3E4;
    }
L_088BD3E4:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088BD418;
      }
      goto L_088BD3EC;
    }
L_088BD3EC:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x088BD3F8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088BD3F8u) goto L_088BD3F8;
    return;
L_088BD3F8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD410;
      }
      goto L_088BD404;
    }
L_088BD404:
    ctx.gpr[31] = (0x088BD40Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x088BD40Cu) goto L_088BD40C;
    return;
L_088BD40C:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_088BD410;
L_088BD410:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[20]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088BD418;
L_088BD418:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD424u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12068));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x088BD424u) goto L_088BD424;
    return;
L_088BD424:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BD634;
      }
      goto L_088BD42C;
    }
L_088BD42C:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088BD460;
      }
      goto L_088BD434;
    }
L_088BD434:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x088BD440u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088BD440u) goto L_088BD440;
    return;
L_088BD440:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD458;
      }
      goto L_088BD44C;
    }
L_088BD44C:
    ctx.gpr[31] = (0x088BD454u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x088BD454u) goto L_088BD454;
    return;
L_088BD454:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_088BD458;
L_088BD458:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[20]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088BD460;
L_088BD460:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD46Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12076));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x088BD46Cu) goto L_088BD46C;
    return;
L_088BD46C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BD634;
      }
      goto L_088BD474;
    }
L_088BD474:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088BD4A8;
      }
      goto L_088BD47C;
    }
L_088BD47C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x088BD488u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088BD488u) goto L_088BD488;
    return;
L_088BD488:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD4A0;
      }
      goto L_088BD494;
    }
L_088BD494:
    ctx.gpr[31] = (0x088BD49Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x088BD49Cu) goto L_088BD49C;
    return;
L_088BD49C:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_088BD4A0;
L_088BD4A0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[20]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088BD4A8;
L_088BD4A8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD4B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12084));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x088BD4B4u) goto L_088BD4B4;
    return;
L_088BD4B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BD634;
      }
      goto L_088BD4BC;
    }
L_088BD4BC:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088BD4F0;
      }
      goto L_088BD4C4;
    }
L_088BD4C4:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x088BD4D0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088BD4D0u) goto L_088BD4D0;
    return;
L_088BD4D0:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD4E8;
      }
      goto L_088BD4DC;
    }
L_088BD4DC:
    ctx.gpr[31] = (0x088BD4E4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x088BD4E4u) goto L_088BD4E4;
    return;
L_088BD4E4:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_088BD4E8;
L_088BD4E8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[20]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088BD4F0;
L_088BD4F0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD4FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12092));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x088BD4FCu) goto L_088BD4FC;
    return;
L_088BD4FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BD634;
      }
      goto L_088BD504;
    }
L_088BD504:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088BD538;
      }
      goto L_088BD50C;
    }
L_088BD50C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x088BD518u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088BD518u) goto L_088BD518;
    return;
L_088BD518:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD530;
      }
      goto L_088BD524;
    }
L_088BD524:
    ctx.gpr[31] = (0x088BD52Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x088BD52Cu) goto L_088BD52C;
    return;
L_088BD52C:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_088BD530;
L_088BD530:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[20]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088BD538;
L_088BD538:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD544u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12100));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x088BD544u) goto L_088BD544;
    return;
L_088BD544:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BD634;
      }
      goto L_088BD54C;
    }
L_088BD54C:
    ctx.gpr[31] = (0x088BD554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BD554u) goto L_088BD554;
    return;
L_088BD554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20904)));
    goto L_088BD558;
L_088BD558:
    ctx.gpr[31] = (0x088BD560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 168u, 0x08838AF4u>(ctx, &aot_mem) && ctx.pc == 0x088BD560u) goto L_088BD560;
    return;
L_088BD560:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD590;
      }
      goto L_088BD568;
    }
L_088BD568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD580;
      }
      goto L_088BD574;
    }
L_088BD574:
    ctx.gpr[31] = (0x088BD57Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BD57Cu) goto L_088BD57C;
    return;
L_088BD57C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20904)));
    goto L_088BD580;
L_088BD580:
    ctx.gpr[31] = (0x088BD588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x088BD588u) goto L_088BD588;
    return;
L_088BD588:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD5C8;
      }
      goto L_088BD590;
    }
L_088BD590:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088BD5A8;
      }
      goto L_088BD59C;
    }
L_088BD59C:
    ctx.gpr[31] = (0x088BD5A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 588u, 0x088BAEBCu>(ctx, &aot_mem) && ctx.pc == 0x088BD5A4u) goto L_088BD5A4;
    return;
L_088BD5A4:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    goto L_088BD5A8;
L_088BD5A8:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088BD5C0;
      }
      goto L_088BD5B0;
    }
L_088BD5B0:
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BD5F0;
      }
      goto L_088BD5C0;
    }
L_088BD5C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD978;
      }
      goto L_088BD5C8;
    }
L_088BD5C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BD5E0;
      }
      goto L_088BD5D4;
    }
L_088BD5D4:
    ctx.gpr[31] = (0x088BD5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BD5DCu) goto L_088BD5DC;
    return;
L_088BD5DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20904)));
    goto L_088BD5E0;
L_088BD5E0:
    ctx.gpr[31] = (0x088BD5E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 127u, 0x0883887Cu>(ctx, &aot_mem) && ctx.pc == 0x088BD5E8u) goto L_088BD5E8;
    return;
L_088BD5E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BD634;
      }
      goto L_088BD5F0;
    }
L_088BD5F0:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088BD624;
      }
      goto L_088BD5F8;
    }
L_088BD5F8:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x088BD604u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088BD604u) goto L_088BD604;
    return;
L_088BD604:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD61C;
      }
      goto L_088BD610;
    }
L_088BD610:
    ctx.gpr[31] = (0x088BD618u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x088BD618u) goto L_088BD618;
    return;
L_088BD618:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_088BD61C;
L_088BD61C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[20]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088BD624;
L_088BD624:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD630u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12108));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x088BD630u) goto L_088BD630;
    return;
L_088BD630:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_088BD634;
L_088BD634:
    ctx.gpr[31] = (0x088BD63Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 463u, 0x08986D54u>(ctx, &aot_mem) && ctx.pc == 0x088BD63Cu) goto L_088BD63C;
    return;
L_088BD63C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD688;
      }
      goto L_088BD644;
    }
L_088BD644:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(20610)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_088BD668;
      }
      goto L_088BD650;
    }
L_088BD650:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[20] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BD6A8;
      }
      goto L_088BD660;
    }
L_088BD660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD6B0;
      }
      goto L_088BD668;
    }
L_088BD668:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(20610), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20608), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20609), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BD978;
      }
      goto L_088BD688;
    }
L_088BD688:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20608), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(20610), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20609), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BD978;
      }
      goto L_088BD6A8;
    }
L_088BD6A8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(916), ctx.gpr[4]);
    goto L_088BD6B0;
L_088BD6B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20604)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BD6C0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_088BC054;
L_088BD6C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD6F8;
      }
      goto L_088BD6C8;
    }
L_088BD6C8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20608)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD6E8;
      }
      goto L_088BD6D8;
    }
L_088BD6D8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20608), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20608)));
      if (branch_taken) {
          goto L_088BD788;
      }
      goto L_088BD6E8;
    }
L_088BD6E8:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20609), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BD978;
      }
      goto L_088BD6F8;
    }
L_088BD6F8:
    ctx.gpr[4] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20604), ctx.gpr[19]);
      if (branch_taken) {
          goto L_088BD734;
      }
      goto L_088BD704;
    }
L_088BD704:
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD720;
      }
      goto L_088BD714;
    }
L_088BD714:
    ctx.gpr[31] = (0x088BD71Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BD71Cu) goto L_088BD71C;
    return;
L_088BD71C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20904)));
    goto L_088BD720;
L_088BD720:
    ctx.gpr[31] = (0x088BD728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 167u, 0x08838AECu>(ctx, &aot_mem) && ctx.pc == 0x088BD728u) goto L_088BD728;
    return;
L_088BD728:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(916)));
      if (branch_taken) {
          goto L_088BD740;
      }
      goto L_088BD734;
    }
L_088BD734:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(916)));
    goto L_088BD740;
L_088BD740:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD764;
      }
      goto L_088BD748;
    }
L_088BD748:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BD770;
      }
      goto L_088BD754;
    }
L_088BD754:
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20608), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20608)));
      if (branch_taken) {
          goto L_088BD788;
      }
      goto L_088BD764;
    }
L_088BD764:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(916), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BD978;
      }
      goto L_088BD770;
    }
L_088BD770:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20608), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20609), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BD978;
      }
      goto L_088BD788;
    }
L_088BD788:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BD79C;
      }
      goto L_088BD790;
    }
L_088BD790:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(20609)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD830;
      }
      goto L_088BD79C;
    }
L_088BD79C:
    ctx.gpr[31] = (0x088BD7A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x088BD7A4u) goto L_088BD7A4;
    return;
L_088BD7A4:
    ctx.gpr[31] = (0x088BD7ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x088BD7ACu) goto L_088BD7AC;
    return;
L_088BD7AC:
    ctx.gpr[31] = (0x088BD7B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x088BD7B4u) goto L_088BD7B4;
    return;
L_088BD7B4:
    ctx.gpr[31] = (0x088BD7BCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x088BD7BCu) goto L_088BD7BC;
    return;
L_088BD7BC:
    ctx.gpr[31] = (0x088BD7C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x088BD7C4u) goto L_088BD7C4;
    return;
L_088BD7C4:
    ctx.gpr[4] = (17282u << 16u);
    ctx.gpr[31] = (0x088BD7D0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x088BD7D0u) goto L_088BD7D0;
    return;
L_088BD7D0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BD7E8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088BD7E8u) goto L_088BD7E8;
    return;
L_088BD7E8:
    ctx.gpr[31] = (0x088BD7F0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x088BD7F0u) goto L_088BD7F0;
    return;
L_088BD7F0:
    ctx.gpr[4] = (17264u << 16u);
    ctx.gpr[16] = (0u | 65u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[16];
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_088BD844;
      }
      goto L_088BD804;
    }
L_088BD804:
    ctx.gpr[31] = (0x088BD80Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x088BD80Cu) goto L_088BD80C;
    return;
L_088BD80C:
    ctx.gpr[4] = (16089u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16191u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 31982u);
    ctx.gpr[31] = (0x088BD828u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x088BD828u) goto L_088BD828;
    return;
L_088BD828:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20432)));
      if (branch_taken) {
          goto L_088BD868;
      }
      goto L_088BD830;
    }
L_088BD830:
    ctx.gpr[7] = (0u | 60u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20608), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20609), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BD978;
      }
      goto L_088BD844;
    }
L_088BD844:
    ctx.gpr[31] = (0x088BD84Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x088BD84Cu) goto L_088BD84C;
    return;
L_088BD84C:
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[31] = (0x088BD864u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x088BD864u) goto L_088BD864;
    return;
L_088BD864:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20432)));
    goto L_088BD868;
L_088BD868:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD898;
      }
      goto L_088BD870;
    }
L_088BD870:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 77u);
    ctx.gpr[6] = (0u | 155u);
    ctx.gpr[7] = (0u | 210u);
    ctx.gpr[31] = (0x088BD888u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088BD888u) goto L_088BD888;
    return;
L_088BD888:
    ctx.gpr[31] = (0x088BD890u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x088BD890u) goto L_088BD890;
    return;
L_088BD890:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD8B8;
      }
      goto L_088BD898;
    }
L_088BD898:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (0u | 77u);
    ctx.gpr[6] = (0u | 155u);
    ctx.gpr[7] = (0u | 210u);
    ctx.gpr[31] = (0x088BD8B0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088BD8B0u) goto L_088BD8B0;
    return;
L_088BD8B0:
    ctx.gpr[31] = (0x088BD8B8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x088BD8B8u) goto L_088BD8B8;
    return;
L_088BD8B8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD8C4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54364u>(ctx, &aot_mem) && ctx.pc == 0x088BD8C4u) goto L_088BD8C4;
    return;
L_088BD8C4:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088BD91C;
      }
      goto L_088BD8CC;
    }
L_088BD8CC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(178));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088BD8E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12116));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A542E8u>(ctx, &aot_mem) && ctx.pc == 0x088BD8E0u) goto L_088BD8E0;
    return;
L_088BD8E0:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD8FC;
      }
      goto L_088BD8F0;
    }
L_088BD8F0:
    ctx.gpr[31] = (0x088BD8F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BD8F8u) goto L_088BD8F8;
    return;
L_088BD8F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20904)));
    goto L_088BD8FC;
L_088BD8FC:
    ctx.gpr[31] = (0x088BD904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 121u, 0x08838804u>(ctx, &aot_mem) && ctx.pc == 0x088BD904u) goto L_088BD904;
    return;
L_088BD904:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BD91C;
      }
      goto L_088BD910;
    }
L_088BD910:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BD91Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 17u, 0x08A54314u>(ctx, &aot_mem) && ctx.pc == 0x088BD91Cu) goto L_088BD91C;
    return;
L_088BD91C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD94C;
      }
      goto L_088BD92C;
    }
L_088BD92C:
    ctx.gpr[6] = (16960u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088BD944u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x088BD944u) goto L_088BD944;
    return;
L_088BD944:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD964;
      }
      goto L_088BD94C;
    }
L_088BD94C:
    ctx.gpr[6] = (16608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088BD964u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x088BD964u) goto L_088BD964;
    return;
L_088BD964:
    ctx.gpr[31] = (0x088BD96Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54EFCu>(ctx, &aot_mem) && ctx.pc == 0x088BD96Cu) goto L_088BD96C;
    return;
L_088BD96C:
    ctx.gpr[4] = (17392u << 16u);
    ctx.gpr[31] = (0x088BD978u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x088BD978u) goto L_088BD978;
    return;
L_088BD978:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BD9A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDA28;
      }
      goto L_088BD9C8;
    }
L_088BD9C8:
    ctx.gpr[31] = (0x088BD9D0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_088BC4A8;
L_088BD9D0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088BD9E4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_088BC51C;
L_088BD9E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BDA18;
      }
      goto L_088BD9EC;
    }
L_088BD9EC:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20556), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(851), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10384));
      if (branch_taken) {
          goto L_088BDA4C;
      }
      goto L_088BDA18;
    }
L_088BDA18:
    ctx.gpr[31] = (0x088BDA20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 812u, 0x088BBCCCu>(ctx, &aot_mem) && ctx.pc == 0x088BDA20u) goto L_088BDA20;
    return;
L_088BDA20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDD80;
      }
      goto L_088BDA28;
    }
L_088BDA28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (2233u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10384));
      if (branch_taken) {
          goto L_088BDA4C;
      }
      goto L_088BDA38;
    }
L_088BDA38:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20556), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    goto L_088BDA4C;
L_088BDA4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BDA70;
      }
      goto L_088BDA5C;
    }
L_088BDA5C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(850)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
      if (branch_taken) {
          goto L_088BDA78;
      }
      goto L_088BDA68;
    }
L_088BDA68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDA94;
      }
      goto L_088BDA70;
    }
L_088BDA70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDD80;
      }
      goto L_088BDA78;
    }
L_088BDA78:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(853)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BDA94;
      }
      goto L_088BDA84;
    }
L_088BDA84:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(849)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(851), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(852), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_088BDA94;
L_088BDA94:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BDC00;
      }
      goto L_088BDAA0;
    }
L_088BDAA0:
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(850), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(853)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BDB34;
      }
      goto L_088BDAB4;
    }
L_088BDAB4:
    ctx.gpr[31] = (0x088BDABCu);
    // nop
    goto L_088BC51C;
L_088BDABC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDB34;
      }
      goto L_088BDAC4;
    }
L_088BDAC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BDB10;
      }
      goto L_088BDAD4;
    }
L_088BDAD4:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20611)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BDB10;
      }
      goto L_088BDAE4;
    }
L_088BDAE4:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x088BDB0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088BC114;
L_088BDB0C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(20611), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_088BDB10;
L_088BDB10:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BDB24u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC530;
L_088BDB24:
    ctx.gpr[31] = (0x088BDB2Cu);
    ctx.gpr[4] = (0u | 0u);
    goto L_088BC4A8;
L_088BDB2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDD80;
      }
      goto L_088BDB34;
    }
L_088BDB34:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088BDB40u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20611), static_cast<std::uint8_t>(0u));
    goto L_088BC51C;
L_088BDB40:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
      if (branch_taken) {
          goto L_088BDB54;
      }
      goto L_088BDB48;
    }
L_088BDB48:
    ctx.gpr[17] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088BDB64;
      }
      goto L_088BDB54;
    }
L_088BDB54:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(853), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(850), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BDD80;
      }
      goto L_088BDB64;
    }
L_088BDB64:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDB88;
      }
      goto L_088BDB70;
    }
L_088BDB70:
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x088BDB7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 815u, 0x088BBD08u>(ctx, &aot_mem) && ctx.pc == 0x088BDB7Cu) goto L_088BDB7C;
    return;
L_088BDB7C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
      if (branch_taken) {
          goto L_088BDB8C;
      }
      goto L_088BDB88;
    }
L_088BDB88:
    ctx.gpr[5] = (0u | 0u);
    goto L_088BDB8C;
L_088BDB8C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088BDD80;
      }
      goto L_088BDB94;
    }
L_088BDB94:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BDBACu);
    ctx.gpr[8] = (0u | 1u);
    goto L_088BC32C;
L_088BDBAC:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[6] = (0u | 64u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 100u);
      if (branch_taken) {
          goto L_088BDBD0;
      }
      goto L_088BDBC4;
    }
L_088BDBC4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
      if (branch_taken) {
          goto L_088BDBD8;
      }
      goto L_088BDBD0;
    }
L_088BDBD0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    goto L_088BDBD8;
L_088BDBD8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BDBECu);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC530;
L_088BDBEC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[31] = (0x088BDBF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088BC11C;
L_088BDBF8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(853), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_088BDD80;
      }
      goto L_088BDC00;
    }
L_088BDC00:
    ctx.gpr[31] = (0x088BDC08u);
    // nop
    goto L_088BC51C;
L_088BDC08:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BDD2C;
      }
      goto L_088BDC10;
    }
L_088BDC10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 63 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 65 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BDC74;
      }
      goto L_088BDC20;
    }
L_088BDC20:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BDD24;
      }
      goto L_088BDC28;
    }
L_088BDC28:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDD24;
      }
      goto L_088BDC30;
    }
L_088BDC30:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_088BDC34;
L_088BDC34:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BDC60u);
    ctx.gpr[8] = (0u | 1u);
    goto L_088BC32C;
L_088BDC60:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BDC6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12120));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BDC6Cu) goto L_088BDC6C;
    return;
L_088BDC6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDD80;
      }
      goto L_088BDC74;
    }
L_088BDC74:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 66 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BDC94;
      }
      goto L_088BDC7C;
    }
L_088BDC7C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088BDC34;
      }
      goto L_088BDC88;
    }
L_088BDC88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDCD0;
      }
      goto L_088BDC90;
    }
L_088BDC90:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 66 ? 1u : 0u);
    goto L_088BDC94;
L_088BDC94:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDD24;
      }
      goto L_088BDC9C;
    }
L_088BDC9C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BDCBCu);
    ctx.gpr[8] = (0u | 1u);
    goto L_088BC32C;
L_088BDCBC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BDCC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12140));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BDCC8u) goto L_088BDCC8;
    return;
L_088BDCC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDD80;
      }
      goto L_088BDCD0;
    }
L_088BDCD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BDD1C;
      }
      goto L_088BDCDC;
    }
L_088BDCDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BDCE8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 461u, 0x088BA804u>(ctx, &aot_mem) && ctx.pc == 0x088BDCE8u) goto L_088BDCE8;
    return;
L_088BDCE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(913)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDD18;
      }
      goto L_088BDCF4;
    }
L_088BDCF4:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20904)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20904)));
        goto L_088BDD10;
    }
    goto L_088BDD04;
L_088BDD04:
    ctx.gpr[31] = (0x088BDD0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BDD0Cu) goto L_088BDD0C;
    return;
L_088BDD0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20904)));
    goto L_088BDD10;
L_088BDD10:
    ctx.gpr[31] = (0x088BDD18u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 38u, 0x0883822Cu>(ctx, &aot_mem) && ctx.pc == 0x088BDD18u) goto L_088BDD18;
    return;
L_088BDD18:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(913), static_cast<std::uint8_t>(0u));
    goto L_088BDD1C;
L_088BDD1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDD80;
      }
      goto L_088BDD24;
    }
L_088BDD24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDD80;
      }
      goto L_088BDD2C;
    }
L_088BDD2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088BDD44;
      }
      goto L_088BDD38;
    }
L_088BDD38:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BDD80;
      }
      goto L_088BDD44;
    }
L_088BDD44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(7)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDD70;
      }
      goto L_088BDD58;
    }
L_088BDD58:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_088BDD68;
    }
    goto L_088BDD68;
L_088BDD68:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    goto L_088BDD70;
L_088BDD70:
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BDD80u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC530;
L_088BDD80:
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
L_088BDD98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[22] = (0u | 67u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(10384));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BDDD8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(920), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088BDDD8u) goto L_088BDDD8;
    return;
L_088BDDD8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088BDDE4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 350u, 0x08A5E138u>(ctx, &aot_mem) && ctx.pc == 0x088BDDE4u) goto L_088BDDE4;
    return;
L_088BDDE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(854)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(854), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(855), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29520)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BDE2C;
      }
      goto L_088BDE08;
    }
L_088BDE08:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(13184)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BDE20:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(854), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(854)));
      if (branch_taken) {
          goto L_088BDE64;
      }
      goto L_088BDE2C;
    }
L_088BDE2C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BDE48;
      }
      goto L_088BDE40;
    }
L_088BDE40:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(854), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BDE60;
      }
      goto L_088BDE48;
    }
L_088BDE48:
    ctx.gpr[31] = (0x088BDE50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 645u, 0x088BB178u>(ctx, &aot_mem) && ctx.pc == 0x088BDE50u) goto L_088BDE50;
    return;
L_088BDE50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDE60;
      }
      goto L_088BDE58;
    }
L_088BDE58:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(854), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BDE60;
L_088BDE60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(854)));
    goto L_088BDE64;
L_088BDE64:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088BDFF0;
      }
      goto L_088BDE6C;
    }
L_088BDE6C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE058;
      }
      goto L_088BDE74;
    }
L_088BDE74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 55u);
      if (branch_taken) {
          goto L_088BE058;
      }
      goto L_088BDE84;
    }
L_088BDE84:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BE058;
      }
      goto L_088BDE8C;
    }
L_088BDE8C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDEC0;
      }
      goto L_088BDE94;
    }
L_088BDE94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 138u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BDEC0;
      }
      goto L_088BDEA4;
    }
L_088BDEA4:
    ctx.gpr[31] = (0x088BDEACu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088BDEACu) goto L_088BDEAC;
    return;
L_088BDEAC:
    ctx.gpr[31] = (0x088BDEB4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1055u, 0x08A97E40u>(ctx, &aot_mem) && ctx.pc == 0x088BDEB4u) goto L_088BDEB4;
    return;
L_088BDEB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDEC0;
      }
      goto L_088BDEBC;
    }
L_088BDEBC:
    ctx.gpr[20] = (0u | 1u);
    goto L_088BDEC0;
L_088BDEC0:
    ctx.gpr[31] = (0x088BDEC8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088BDEC8u) goto L_088BDEC8;
    return;
L_088BDEC8:
    ctx.gpr[31] = (0x088BDED0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 51u, 0x08A981C0u>(ctx, &aot_mem) && ctx.pc == 0x088BDED0u) goto L_088BDED0;
    return;
L_088BDED0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BDEF0;
      }
      goto L_088BDED8;
    }
L_088BDED8:
    ctx.gpr[31] = (0x088BDEE0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088BDEE0u) goto L_088BDEE0;
    return;
L_088BDEE0:
    ctx.gpr[31] = (0x088BDEE8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 58u, 0x08A9820Cu>(ctx, &aot_mem) && ctx.pc == 0x088BDEE8u) goto L_088BDEE8;
    return;
L_088BDEE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE058;
      }
      goto L_088BDEF0;
    }
L_088BDEF0:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE058;
      }
      goto L_088BDEF8;
    }
L_088BDEF8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE058;
      }
      goto L_088BDF00;
    }
L_088BDF00:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BDF0Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 864u, 0x088BBF84u>(ctx, &aot_mem) && ctx.pc == 0x088BDF0Cu) goto L_088BDF0C;
    return;
L_088BDF0C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088BE058;
      }
      goto L_088BDF14;
    }
L_088BDF14:
    ctx.gpr[31] = (0x088BDF1Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_088BC008;
L_088BDF1C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE058;
      }
      goto L_088BDF24;
    }
L_088BDF24:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(21856), ctx.gpr[4]);
    ctx.gpr[31] = (0x088BDF38u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088BDF38u) goto L_088BDF38;
    return;
L_088BDF38:
    ctx.gpr[31] = (0x088BDF40u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 51u, 0x08A981C0u>(ctx, &aot_mem) && ctx.pc == 0x088BDF40u) goto L_088BDF40;
    return;
L_088BDF40:
    ctx.gpr[21] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20432)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 65u);
      if (branch_taken) {
          goto L_088BDF94;
      }
      goto L_088BDF50;
    }
L_088BDF50:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20432), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BDFD4;
      }
      goto L_088BDF64;
    }
L_088BDF64:
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BDF80;
      }
      goto L_088BDF74;
    }
L_088BDF74:
    ctx.gpr[31] = (0x088BDF7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BDF7Cu) goto L_088BDF7C;
    return;
L_088BDF7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20904)));
    goto L_088BDF80;
L_088BDF80:
    ctx.gpr[31] = (0x088BDF88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 174u, 0x08838B48u>(ctx, &aot_mem) && ctx.pc == 0x088BDF88u) goto L_088BDF88;
    return;
L_088BDF88:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BDFD4;
      }
      goto L_088BDF94;
    }
L_088BDF94:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20432), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BDFD4;
      }
      goto L_088BDFA8;
    }
L_088BDFA8:
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BDFC4;
      }
      goto L_088BDFB8;
    }
L_088BDFB8:
    ctx.gpr[31] = (0x088BDFC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BDFC0u) goto L_088BDFC0;
    return;
L_088BDFC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20904)));
    goto L_088BDFC4;
L_088BDFC4:
    ctx.gpr[31] = (0x088BDFCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 186u, 0x08838C1Cu>(ctx, &aot_mem) && ctx.pc == 0x088BDFCCu) goto L_088BDFCC;
    return;
L_088BDFCC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BDFD4;
L_088BDFD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20432)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE058;
      }
      goto L_088BDFE4;
    }
L_088BDFE4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20432), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BE058;
      }
      goto L_088BDFF0;
    }
L_088BDFF0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(856), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20432), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21856), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE058;
      }
      goto L_088BE018;
    }
L_088BE018:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(857)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BE03C;
      }
      goto L_088BE02C;
    }
L_088BE02C:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_088BE03C;
L_088BE03C:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    goto L_088BE058;
L_088BE058:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(857)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE06C;
      }
      goto L_088BE064;
    }
L_088BE064:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(855), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(857), static_cast<std::uint8_t>(0u));
    goto L_088BE06C;
L_088BE06C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088BE088;
      }
      goto L_088BE078;
    }
L_088BE078:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088BE088;
      }
      goto L_088BE084;
    }
L_088BE084:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(855), static_cast<std::uint8_t>(0u));
    goto L_088BE088;
L_088BE088:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_088BE0C0;
      }
      goto L_088BE094;
    }
L_088BE094:
    ctx.gpr[31] = (0x088BE09Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 645u, 0x088BB178u>(ctx, &aot_mem) && ctx.pc == 0x088BE09Cu) goto L_088BE09C;
    return;
L_088BE09C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE0C0;
      }
      goto L_088BE0A4;
    }
L_088BE0A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(855), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    goto L_088BE0C0;
L_088BE0C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(854)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE490;
      }
      goto L_088BE0CC;
    }
L_088BE0CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(855)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE3DC;
      }
      goto L_088BE0D8;
    }
L_088BE0D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 66 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BE180;
      }
      goto L_088BE0EC;
    }
L_088BE0EC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088BE10C;
      }
      goto L_088BE0F8;
    }
L_088BE0F8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BE10C;
      }
      goto L_088BE108;
    }
L_088BE108:
    ctx.gpr[4] = (0u | 0u);
    goto L_088BE10C;
L_088BE10C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE180;
      }
      goto L_088BE114;
    }
L_088BE114:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BE120u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 712u, 0x088BB4CCu>(ctx, &aot_mem) && ctx.pc == 0x088BE120u) goto L_088BE120;
    return;
L_088BE120:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE180;
      }
      goto L_088BE128;
    }
L_088BE128:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE148;
      }
      goto L_088BE134;
    }
L_088BE134:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088BE164;
      }
      goto L_088BE140;
    }
L_088BE140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE180;
      }
      goto L_088BE148;
    }
L_088BE148:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20432), 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(21856), 0u);
    ctx.gpr[31] = (0x088BE15Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 812u, 0x088BBCCCu>(ctx, &aot_mem) && ctx.pc == 0x088BE15Cu) goto L_088BE15C;
    return;
L_088BE15C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE584;
      }
      goto L_088BE164;
    }
L_088BE164:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(851), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[31] = (0x088BE170u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 819u, 0x088BBD60u>(ctx, &aot_mem) && ctx.pc == 0x088BE170u) goto L_088BE170;
    return;
L_088BE170:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20432), 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(21856), 0u);
    goto L_088BE180;
L_088BE180:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE220;
      }
      goto L_088BE18C;
    }
L_088BE18C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BE198u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 864u, 0x088BBF84u>(ctx, &aot_mem) && ctx.pc == 0x088BE198u) goto L_088BE198;
    return;
L_088BE198:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088BE1B0;
      }
      goto L_088BE1A0;
    }
L_088BE1A0:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
      if (branch_taken) {
          goto L_088BE1E4;
      }
      goto L_088BE1B0;
    }
L_088BE1B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BE1BCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_088BC008;
L_088BE1BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE1D4;
      }
      goto L_088BE1C4;
    }
L_088BE1C4:
    ctx.gpr[4] = (0u | 24u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
      if (branch_taken) {
          goto L_088BE1E4;
      }
      goto L_088BE1D4;
    }
L_088BE1D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(837)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    goto L_088BE1E4;
L_088BE1E4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088BE208;
      }
      goto L_088BE1EC;
    }
L_088BE1EC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    goto L_088BE208;
L_088BE208:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20432), 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(21856), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(836), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
      if (branch_taken) {
          goto L_088BE390;
      }
      goto L_088BE220;
    }
L_088BE220:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20432)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(21856)));
      if (branch_taken) {
          goto L_088BE24C;
      }
      goto L_088BE22C;
    }
L_088BE22C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(21856), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BE25C;
      }
      goto L_088BE238;
    }
L_088BE238:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(21856), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088BE25C;
      }
      goto L_088BE24C;
    }
L_088BE24C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE25C;
      }
      goto L_088BE254;
    }
L_088BE254:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(21856), ctx.gpr[4]);
    goto L_088BE25C;
L_088BE25C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE338;
      }
      goto L_088BE264;
    }
L_088BE264:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[22] = (2230u << 16u);
      if (branch_taken) {
          goto L_088BE338;
      }
      goto L_088BE274;
    }
L_088BE274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE28C;
      }
      goto L_088BE280;
    }
L_088BE280:
    ctx.gpr[31] = (0x088BE288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BE288u) goto L_088BE288;
    return;
L_088BE288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-20904)));
    goto L_088BE28C;
L_088BE28C:
    ctx.gpr[31] = (0x088BE294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x088BE294u) goto L_088BE294;
    return;
L_088BE294:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE338;
      }
      goto L_088BE29C;
    }
L_088BE29C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20432)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 10u);
      if (branch_taken) {
          goto L_088BE2C4;
      }
      goto L_088BE2B4;
    }
L_088BE2B4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE2B4;
      }
      goto L_088BE2C4;
    }
L_088BE2C4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BE2E8;
      }
      goto L_088BE2CC;
    }
L_088BE2CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(21856)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BE338;
      }
      goto L_088BE2DC;
    }
L_088BE2DC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BE338;
      }
      goto L_088BE2E8;
    }
L_088BE2E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[22] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (2230u << 16u);
      if (branch_taken) {
          goto L_088BE2FC;
      }
      goto L_088BE2F8;
    }
L_088BE2F8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_088BE2FC;
L_088BE2FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20612)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE330;
      }
      goto L_088BE314;
    }
L_088BE314:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19952)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088BE328u);
    ctx.gpr[6] = (0u | 194u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 961u, 0x08A9B8F8u>(ctx, &aot_mem) && ctx.pc == 0x088BE328u) goto L_088BE328;
    return;
L_088BE328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(20612), ctx.gpr[4]);
    goto L_088BE330;
L_088BE330:
    ctx.gpr[31] = (0x088BE338u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 378u, 0x08842964u>(ctx, &aot_mem) && ctx.pc == 0x088BE338u) goto L_088BE338;
    return;
L_088BE338:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
      if (branch_taken) {
          goto L_088BE390;
      }
      goto L_088BE344;
    }
L_088BE344:
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088BE350u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 839u, 0x088BBE44u>(ctx, &aot_mem) && ctx.pc == 0x088BE350u) goto L_088BE350;
    return;
L_088BE350:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[4];
    ctx.gpr[5] = (0u | 10u);
      if (branch_taken) {
          goto L_088BE384;
      }
      goto L_088BE360;
    }
L_088BE360:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BE370;
      }
      goto L_088BE368;
    }
L_088BE368:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BE384;
      }
      goto L_088BE370;
    }
L_088BE370:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19952)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088BE384u);
    ctx.gpr[6] = (0u | 177u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 961u, 0x08A9B8F8u>(ctx, &aot_mem) && ctx.pc == 0x088BE384u) goto L_088BE384;
    return;
L_088BE384:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(21856), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20432), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    goto L_088BE390;
L_088BE390:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 23 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BE3AC;
      }
      goto L_088BE39C;
    }
L_088BE39C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE3AC;
      }
      goto L_088BE3A4;
    }
L_088BE3A4:
    ctx.gpr[31] = (0x088BE3ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 740u, 0x088BB6A0u>(ctx, &aot_mem) && ctx.pc == 0x088BE3ACu) goto L_088BE3AC;
    return;
L_088BE3AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(920)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE3C8;
      }
      goto L_088BE3B8;
    }
L_088BE3B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088BE3C8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_088BE5B0;
L_088BE3C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE508;
      }
      goto L_088BE3D4;
    }
L_088BE3D4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BE508;
      }
      goto L_088BE3DC;
    }
L_088BE3DC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE484;
      }
      goto L_088BE3E4;
    }
L_088BE3E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE474;
      }
      goto L_088BE3F0;
    }
L_088BE3F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BE3FCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 864u, 0x088BBF84u>(ctx, &aot_mem) && ctx.pc == 0x088BE3FCu) goto L_088BE3FC;
    return;
L_088BE3FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088BE414;
      }
      goto L_088BE404;
    }
L_088BE404:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
      if (branch_taken) {
          goto L_088BE448;
      }
      goto L_088BE414;
    }
L_088BE414:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BE420u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_088BC008;
L_088BE420:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE438;
      }
      goto L_088BE428;
    }
L_088BE428:
    ctx.gpr[4] = (0u | 24u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
      if (branch_taken) {
          goto L_088BE448;
      }
      goto L_088BE438;
    }
L_088BE438:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(837)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    goto L_088BE448;
L_088BE448:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088BE46C;
      }
      goto L_088BE450;
    }
L_088BE450:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    goto L_088BE46C;
L_088BE46C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(836), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BE508;
      }
      goto L_088BE474;
    }
L_088BE474:
    ctx.gpr[31] = (0x088BE47Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 819u, 0x088BBD60u>(ctx, &aot_mem) && ctx.pc == 0x088BE47Cu) goto L_088BE47C;
    return;
L_088BE47C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088BE508;
      }
      goto L_088BE484;
    }
L_088BE484:
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BE508;
      }
      goto L_088BE490;
    }
L_088BE490:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE4E4;
      }
      goto L_088BE49C;
    }
L_088BE49C:
    ctx.gpr[31] = (0x088BE4A4u);
    ctx.gpr[4] = (0u | 0u);
    goto L_088BC4A8;
L_088BE4A4:
    ctx.gpr[31] = (0x088BE4ACu);
    // nop
    goto L_088BC51C;
L_088BE4AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BE4D4;
      }
      goto L_088BE4B4;
    }
L_088BE4B4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20556), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(851), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BE4E4;
      }
      goto L_088BE4D4;
    }
L_088BE4D4:
    ctx.gpr[31] = (0x088BE4DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 812u, 0x088BBCCCu>(ctx, &aot_mem) && ctx.pc == 0x088BE4DCu) goto L_088BE4DC;
    return;
L_088BE4DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE584;
      }
      goto L_088BE4E4;
    }
L_088BE4E4:
    ctx.gpr[31] = (0x088BE4ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 740u, 0x088BB6A0u>(ctx, &aot_mem) && ctx.pc == 0x088BE4ECu) goto L_088BE4EC;
    return;
L_088BE4EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(920)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE508;
      }
      goto L_088BE4F8;
    }
L_088BE4F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088BE508u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_088BE5B0;
L_088BE508:
    ctx.gpr[31] = (0x088BE510u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 812u, 0x088BBCCCu>(ctx, &aot_mem) && ctx.pc == 0x088BE510u) goto L_088BE510;
    return;
L_088BE510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE57C;
      }
      goto L_088BE51C;
    }
L_088BE51C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] << 11u);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] >> 11u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 11u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088BE57C;
      }
      goto L_088BE564;
    }
L_088BE564:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BE57C;
L_088BE57C:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(912), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BE584;
L_088BE584:
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
L_088BE5B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(850)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE5E8;
      }
      goto L_088BE5E0;
    }
L_088BE5E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(851), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BE5E8;
L_088BE5E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(21856)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE600;
      }
      goto L_088BE5F4;
    }
L_088BE5F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE68C;
      }
      goto L_088BE600;
    }
L_088BE600:
    ctx.gpr[31] = (0x088BE608u);
    // nop
    goto L_088BC51C;
L_088BE608:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE684;
      }
      goto L_088BE610;
    }
L_088BE610:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BE668;
      }
      goto L_088BE620;
    }
L_088BE620:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20616)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE668;
      }
      goto L_088BE630;
    }
L_088BE630:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[31] = (0x088BE660u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088BC114;
L_088BE660:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(20616), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BE668;
L_088BE668:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BE67Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC530;
L_088BE67C:
    ctx.gpr[31] = (0x088BE684u);
    ctx.gpr[4] = (0u | 0u);
    goto L_088BC4A8;
L_088BE684:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEE28;
      }
      goto L_088BE68C;
    }
L_088BE68C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20616)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE6A8;
      }
      goto L_088BE69C;
    }
L_088BE69C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20616), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BE6A8;
L_088BE6A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BE948;
      }
      goto L_088BE6B8;
    }
L_088BE6B8:
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(850), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BE6D4u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC530;
L_088BE6D4:
    ctx.gpr[19] = (2233u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(10384));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE700;
      }
      goto L_088BE6EC;
    }
L_088BE6EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(853)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE708;
      }
      goto L_088BE6F8;
    }
L_088BE6F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE828;
      }
      goto L_088BE700;
    }
L_088BE700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEE28;
      }
      goto L_088BE708;
    }
L_088BE708:
    ctx.gpr[31] = (0x088BE710u);
    // nop
    goto L_088BC51C;
L_088BE710:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE828;
      }
      goto L_088BE718;
    }
L_088BE718:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BE7C8;
      }
      goto L_088BE728;
    }
L_088BE728:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20617)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE7D4;
      }
      goto L_088BE738;
    }
L_088BE738:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20617), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[31] = (0x088BE76Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088BC114;
L_088BE76C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE7D4;
      }
      goto L_088BE77C;
    }
L_088BE77C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE7D4;
      }
      goto L_088BE78C;
    }
L_088BE78C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE7D4;
      }
      goto L_088BE79C;
    }
L_088BE79C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE7D4;
      }
      goto L_088BE7AC;
    }
L_088BE7AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19952)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088BE7C0u);
    ctx.gpr[6] = (0u | 178u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 961u, 0x08A9B8F8u>(ctx, &aot_mem) && ctx.pc == 0x088BE7C0u) goto L_088BE7C0;
    return;
L_088BE7C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE7D4;
      }
      goto L_088BE7C8;
    }
L_088BE7C8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BE7D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12168));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE7D4u) goto L_088BE7D4;
    return;
L_088BE7D4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BE7E8u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC530;
L_088BE7E8:
    ctx.gpr[31] = (0x088BE7F0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_088BC4A8;
L_088BE7F0:
    ctx.gpr[31] = (0x088BE7F8u);
    // nop
    goto L_088BC51C;
L_088BE7F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEE28;
      }
      goto L_088BE800;
    }
L_088BE800:
    ctx.gpr[31] = (0x088BE808u);
    ctx.gpr[4] = (0u | 0u);
    goto L_088BC4A8;
L_088BE808:
    ctx.gpr[31] = (0x088BE810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 595u, 0x08AB35BCu>(ctx, &aot_mem) && ctx.pc == 0x088BE810u) goto L_088BE810;
    return;
L_088BE810:
    ctx.gpr[31] = (0x088BE818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 296u, 0x089C1504u>(ctx, &aot_mem) && ctx.pc == 0x088BE818u) goto L_088BE818;
    return;
L_088BE818:
    ctx.gpr[31] = (0x088BE820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 132u, 0x089C09C4u>(ctx, &aot_mem) && ctx.pc == 0x088BE820u) goto L_088BE820;
    return;
L_088BE820:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE7F0;
      }
      goto L_088BE828;
    }
L_088BE828:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088BE834u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20617), static_cast<std::uint8_t>(0u));
    goto L_088BC51C;
L_088BE834:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE888;
      }
      goto L_088BE83C;
    }
L_088BE83C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(853), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(850), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BEE28;
      }
      goto L_088BE850;
    }
L_088BE850:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE87C;
      }
      goto L_088BE860;
    }
L_088BE860:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE87C;
      }
      goto L_088BE870;
    }
L_088BE870:
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BEE28;
      }
      goto L_088BE87C;
    }
L_088BE87C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BEE28;
      }
      goto L_088BE888;
    }
L_088BE888:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BE898u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 815u, 0x088BBD08u>(ctx, &aot_mem) && ctx.pc == 0x088BE898u) goto L_088BE898;
    return;
L_088BE898:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[6] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BEE28;
      }
      goto L_088BE8A8;
    }
L_088BE8A8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BE8C0u);
    ctx.gpr[8] = (0u | 1u);
    goto L_088BC32C;
L_088BE8C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE90C;
      }
      goto L_088BE8D0;
    }
L_088BE8D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE90C;
      }
      goto L_088BE8E0;
    }
L_088BE8E0:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BE8F0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 784u, 0x088BB960u>(ctx, &aot_mem) && ctx.pc == 0x088BE8F0u) goto L_088BE8F0;
    return;
L_088BE8F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BE904u);
    ctx.gpr[7] = (0u | 1u);
    goto L_088BC530;
L_088BE904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE934;
      }
      goto L_088BE90C;
    }
L_088BE90C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BE934u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC530;
L_088BE934:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[31] = (0x088BE940u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088BC11C;
L_088BE940:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(853), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_088BEE28;
      }
      goto L_088BE948;
    }
L_088BE948:
    ctx.gpr[31] = (0x088BE950u);
    // nop
    goto L_088BC51C;
L_088BE950:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE9F8;
      }
      goto L_088BE958;
    }
L_088BE958:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE9BC;
      }
      goto L_088BE968;
    }
L_088BE968:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[31] = (0x088BE978u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12232));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE978u) goto L_088BE978;
    return;
L_088BE978:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BE9A8u);
    ctx.gpr[8] = (0u | 1u);
    goto L_088BC32C;
L_088BE9A8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BE9B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12120));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE9B4u) goto L_088BE9B4;
    return;
L_088BE9B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE9F8;
      }
      goto L_088BE9BC;
    }
L_088BE9BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BE9F8;
      }
      goto L_088BE9CC;
    }
L_088BE9CC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BE9ECu);
    ctx.gpr[8] = (0u | 1u);
    goto L_088BC32C;
L_088BE9EC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BE9F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12140));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE9F8u) goto L_088BE9F8;
    return;
L_088BE9F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BEA44;
      }
      goto L_088BEA08;
    }
L_088BEA08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEA44;
      }
      goto L_088BEA18;
    }
L_088BEA18:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BEA28u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 784u, 0x088BB960u>(ctx, &aot_mem) && ctx.pc == 0x088BEA28u) goto L_088BEA28;
    return;
L_088BEA28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BEA3Cu);
    ctx.gpr[7] = (0u | 1u);
    goto L_088BC530;
L_088BEA3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEE28;
      }
      goto L_088BEA44;
    }
L_088BEA44:
    ctx.gpr[31] = (0x088BEA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 758u, 0x0891B73Cu>(ctx, &aot_mem) && ctx.pc == 0x088BEA4Cu) goto L_088BEA4C;
    return;
L_088BEA4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEC60;
      }
      goto L_088BEA54;
    }
L_088BEA54:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEDDC;
      }
      goto L_088BEA68;
    }
L_088BEA68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17725u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BEC44;
      }
      goto L_088BEAC0;
    }
L_088BEAC0:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2233u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(10384));
      if (branch_taken) {
          goto L_088BEB68;
      }
      goto L_088BEADC;
    }
L_088BEADC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088BEAE8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 301u, 0x08A6D50Cu>(ctx, &aot_mem) && ctx.pc == 0x088BEAE8u) goto L_088BEAE8;
    return;
L_088BEAE8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088BEB00;
      }
      goto L_088BEAF0;
    }
L_088BEAF0:
    ctx.gpr[31] = (0x088BEAF8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 301u, 0x08A6D50Cu>(ctx, &aot_mem) && ctx.pc == 0x088BEAF8u) goto L_088BEAF8;
    return;
L_088BEAF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEB24;
      }
      goto L_088BEB00;
    }
L_088BEB00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BEB1Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC530;
L_088BEB1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEC58;
      }
      goto L_088BEB24;
    }
L_088BEB24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(21856)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEB4C;
      }
      goto L_088BEB30;
    }
L_088BEB30:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BEB44u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC530;
L_088BEB44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEC58;
      }
      goto L_088BEB4C;
    }
L_088BEB4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BEB60u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC530;
L_088BEB60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEC58;
      }
      goto L_088BEB68;
    }
L_088BEB68:
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16948u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x088BEBB0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 301u, 0x08A6D50Cu>(ctx, &aot_mem) && ctx.pc == 0x088BEBB0u) goto L_088BEBB0;
    return;
L_088BEBB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088BEBC8;
      }
      goto L_088BEBB8;
    }
L_088BEBB8:
    ctx.gpr[31] = (0x088BEBC0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 301u, 0x08A6D50Cu>(ctx, &aot_mem) && ctx.pc == 0x088BEBC0u) goto L_088BEBC0;
    return;
L_088BEBC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEBD4;
      }
      goto L_088BEBC8;
    }
L_088BEBC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BEBD4;
L_088BEBD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088BEC14;
      }
      goto L_088BEBE0;
    }
L_088BEBE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088BEBF8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 951u, 0x08A9B768u>(ctx, &aot_mem) && ctx.pc == 0x088BEBF8u) goto L_088BEBF8;
    return;
L_088BEBF8:
    ctx.gpr[6] = (16988u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088BEC0Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 936u, 0x08A9B614u>(ctx, &aot_mem) && ctx.pc == 0x088BEC0Cu) goto L_088BEC0C;
    return;
L_088BEC0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BEC18;
      }
      goto L_088BEC14;
    }
L_088BEC14:
    ctx.gpr[17] = (0u | 0u);
    goto L_088BEC18;
L_088BEC18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(21856)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEC28;
      }
      goto L_088BEC24;
    }
L_088BEC24:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    goto L_088BEC28;
L_088BEC28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BEC3Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC530;
L_088BEC3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEC58;
      }
      goto L_088BEC44;
    }
L_088BEC44:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BEC58u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC530;
L_088BEC58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEDDC;
      }
      goto L_088BEC60;
    }
L_088BEC60:
    ctx.gpr[31] = (0x088BEC68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 779u, 0x088BB920u>(ctx, &aot_mem) && ctx.pc == 0x088BEC68u) goto L_088BEC68;
    return;
L_088BEC68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEC8C;
      }
      goto L_088BEC70;
    }
L_088BEC70:
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BEC84u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC530;
L_088BEC84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEDDC;
      }
      goto L_088BEC8C;
    }
L_088BEC8C:
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10384));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088BECA0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 301u, 0x08A6D50Cu>(ctx, &aot_mem) && ctx.pc == 0x088BECA0u) goto L_088BECA0;
    return;
L_088BECA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088BECB8;
      }
      goto L_088BECA8;
    }
L_088BECA8:
    ctx.gpr[31] = (0x088BECB0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 301u, 0x08A6D50Cu>(ctx, &aot_mem) && ctx.pc == 0x088BECB0u) goto L_088BECB0;
    return;
L_088BECB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BED00;
      }
      goto L_088BECB8;
    }
L_088BECB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 31 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BECE4;
      }
      goto L_088BECC8;
    }
L_088BECC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BECDCu);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC530;
L_088BECDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BECF8;
      }
      goto L_088BECE4;
    }
L_088BECE4:
    ctx.gpr[4] = (0u | 31u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BECF8u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC530;
L_088BECF8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(856), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BEDDC;
      }
      goto L_088BED00;
    }
L_088BED00:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BEDB0;
      }
      goto L_088BED10;
    }
L_088BED10:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BED54;
      }
      goto L_088BED20;
    }
L_088BED20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 31 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BED3C;
      }
      goto L_088BED30;
    }
L_088BED30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BED44;
      }
      goto L_088BED3C;
    }
L_088BED3C:
    ctx.gpr[4] = (0u | 31u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BED44;
L_088BED44:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(856), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BEDB8;
      }
      goto L_088BED54;
    }
L_088BED54:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEDA0;
      }
      goto L_088BED64;
    }
L_088BED64:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-49));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BED90;
      }
      goto L_088BED88;
    }
L_088BED88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BED90;
L_088BED90:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(856), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BEDB8;
      }
      goto L_088BEDA0;
    }
L_088BEDA0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(856), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088BEDB8;
      }
      goto L_088BEDB0;
    }
L_088BEDB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BEDB8;
L_088BEDB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(21856)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEDC8;
      }
      goto L_088BEDC4;
    }
L_088BEDC4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    goto L_088BEDC8;
L_088BEDC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BEDDCu);
    ctx.gpr[7] = (0u | 0u);
    goto L_088BC530;
L_088BEDDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088BEDF8;
      }
      goto L_088BEDE8;
    }
L_088BEDE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BEE28;
      }
      goto L_088BEDF8;
    }
L_088BEDF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(7)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEE28;
      }
      goto L_088BEE0C;
    }
L_088BEE0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(7)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(7)));
        goto L_088BEE24;
    }
    goto L_088BEE24;
L_088BEE24:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BEE28;
L_088BEE28:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BEE44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BEE7Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_088BC63C;
L_088BEE7C:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (17235u << 16u);
      if (branch_taken) {
          goto L_088BEF5C;
      }
      goto L_088BEE94;
    }
L_088BEE94:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088BEEAC;
      }
      goto L_088BEEA4;
    }
L_088BEEA4:
    ctx.gpr[31] = (0x088BEEACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BEEACu) goto L_088BEEAC;
    return;
L_088BEEAC:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[31] = (0x088BEEB8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20904)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 126u, 0x08838850u>(ctx, &aot_mem) && ctx.pc == 0x088BEEB8u) goto L_088BEEB8;
    return;
L_088BEEB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088BEEC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x088BEEC4u) goto L_088BEEC4;
    return;
L_088BEEC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BEED8;
      }
      goto L_088BEED0;
    }
L_088BEED0:
    ctx.gpr[31] = (0x088BEED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BEED8u) goto L_088BEED8;
    return;
L_088BEED8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6392));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088BEF00u);
    ctx.gpr[6] = (0u | 511u);
    ctx.pc = 0x08B0BDFCu;
    return;
L_088BEF00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088BEFE0;
      }
      goto L_088BEF08;
    }
L_088BEF08:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BEF20;
      }
      goto L_088BEF18;
    }
L_088BEF18:
    ctx.gpr[31] = (0x088BEF20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BEF20u) goto L_088BEF20;
    return;
L_088BEF20:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-20904)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088BEF40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12252));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BEF40u) goto L_088BEF40;
    return;
L_088BEF40:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088BEF4Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_088BC644;
L_088BEF4C:
    ctx.gpr[31] = (0x088BEF54u);
    ctx.gpr[4] = (0u | 0u);
    goto L_088BC258;
L_088BEF54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFC34;
      }
      goto L_088BEF5C;
    }
L_088BEF5C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18756));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (20527u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14896));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (18271u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20563));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (12101u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19777));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (17490u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21333));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (47u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21065));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24552));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088BEFD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 407u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088BEFD0u) goto L_088BEFD0;
    return;
L_088BEFD0:
    ctx.gpr[31] = (0x088BEFD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 448u, 0x08AC70E8u>(ctx, &aot_mem) && ctx.pc == 0x088BEFD8u) goto L_088BEFD8;
    return;
L_088BEFD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088BF068;
      }
      goto L_088BEFE0;
    }
L_088BEFE0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12276));
    ctx.gpr[31] = (0x088BEFF0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BEFF0u) goto L_088BEFF0;
    return;
L_088BEFF0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6392));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF094;
      }
      goto L_088BF00C;
    }
L_088BF00C:
    ctx.gpr[4] = (2270u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23744));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088BF024u);
    ctx.gpr[6] = (4u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x088BF024u) goto L_088BF024;
    return;
L_088BF024:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 11u);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(21256));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BF050u);
    ctx.gpr[6] = (0u | 2048u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x088BF050u) goto L_088BF050;
    return;
L_088BF050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 2048u);
    ctx.gpr[31] = (0x088BF060u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 456u, 0x08AC7178u>(ctx, &aot_mem) && ctx.pc == 0x088BF060u) goto L_088BF060;
    return;
L_088BF060:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF130;
      }
      goto L_088BF068;
    }
L_088BF068:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088BF078u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12252));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF078u) goto L_088BF078;
    return;
L_088BF078:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088BF084u);
    ctx.gpr[5] = (0u | 1u);
    goto L_088BC644;
L_088BF084:
    ctx.gpr[31] = (0x088BF08Cu);
    ctx.gpr[4] = (0u | 0u);
    goto L_088BC258;
L_088BF08C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFC34;
      }
      goto L_088BF094;
    }
L_088BF094:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BF0D0;
      }
      goto L_088BF0AC;
    }
L_088BF0AC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[5] = (2270u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 2048u);
    ctx.gpr[31] = (0x088BF0C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23744));
    ctx.pc = 0x08B0BD74u;
    return;
L_088BF0C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF130;
      }
      goto L_088BF0D0;
    }
L_088BF0D0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[5] = (2270u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 2048u);
    ctx.gpr[31] = (0x088BF0ECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23744));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 468u, 0x08AC7270u>(ctx, &aot_mem) && ctx.pc == 0x088BF0ECu) goto L_088BF0EC;
    return;
L_088BF0EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 39 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BF130;
      }
      goto L_088BF0FC;
    }
L_088BF0FC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF130;
      }
      goto L_088BF104;
    }
L_088BF104:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (2270u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-23744));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3080));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    goto L_088BF130;
L_088BF130:
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[4] = (0u | 2048u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6392));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2270u << 16u);
    ctx.gpr[5] = (0u | 2048u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23744));
    ctx.gpr[31] = (0x088BF154u);
    ctx.gpr[6] = (4u << 16u);
    ctx.pc = 0x08B0BA04u;
    return;
L_088BF154:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6392), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088BF1CC;
      }
      goto L_088BF15C;
    }
L_088BF15C:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BF19C;
      }
      goto L_088BF174;
    }
L_088BF174:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088BF190;
      }
      goto L_088BF184;
    }
L_088BF184:
    ctx.gpr[31] = (0x088BF18Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BF18Cu) goto L_088BF18C;
    return;
L_088BF18C:
    ctx.gpr[5] = (2230u << 16u);
    goto L_088BF190;
L_088BF190:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-20904)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    goto L_088BF19C;
L_088BF19C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6392)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BF1B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12288));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF1B0u) goto L_088BF1B0;
    return;
L_088BF1B0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088BF1BCu);
    ctx.gpr[5] = (0u | 2u);
    goto L_088BC644;
L_088BF1BC:
    ctx.gpr[31] = (0x088BF1C4u);
    ctx.gpr[4] = (0u | 0u);
    goto L_088BC258;
L_088BF1C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFC34;
      }
      goto L_088BF1CC;
    }
L_088BF1CC:
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6392)));
    ctx.gpr[31] = (0x088BF1E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12328));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF1E0u) goto L_088BF1E0;
    return;
L_088BF1E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6392)));
    ctx.gpr[31] = (0x088BF1ECu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.pc = 0x08B0BA44u;
    return;
L_088BF1EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BF200;
      }
      goto L_088BF1F4;
    }
L_088BF1F4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BF200u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12348));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF200u) goto L_088BF200;
    return;
L_088BF200:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088BF210u);
    ctx.gpr[5] = (0u | 3u);
    goto L_088BC644;
L_088BF210:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20584)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6392)));
    ctx.gpr[31] = (0x088BF230u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.pc = 0x08B0BA34u;
    return;
L_088BF230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] << 12u);
    ctx.gpr[31] = (0x088BF240u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 587u, 0x08AEA89Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF240u) goto L_088BF240;
    return;
L_088BF240:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20644)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20640)));
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088BF258u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 491u, 0x08AF6650u>(ctx, &aot_mem) && ctx.pc == 0x088BF258u) goto L_088BF258;
    return;
L_088BF258:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088BF264u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 542u, 0x08AF69ACu>(ctx, &aot_mem) && ctx.pc == 0x088BF264u) goto L_088BF264;
    return;
L_088BF264:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF278;
      }
      goto L_088BF274;
    }
L_088BF274:
    ctx.gpr[20] = (0u | 1u);
    goto L_088BF278;
L_088BF278:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12396));
    ctx.gpr[31] = (0x088BF288u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF288u) goto L_088BF288;
    return;
L_088BF288:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x088BF294u);
    ctx.gpr[5] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 720u, 0x08AF7460u>(ctx, &aot_mem) && ctx.pc == 0x088BF294u) goto L_088BF294;
    return;
L_088BF294:
    ctx.gpr[31] = (0x088BF29Cu);
    // nop
    goto L_088BFC64;
L_088BF29C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[21] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(20428), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7156)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 17u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BF2C4u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B0BC6Cu;
    return;
L_088BF2C4:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(20428), static_cast<std::uint8_t>(0u));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BFAC0;
      }
      goto L_088BF2E8;
    }
L_088BF2E8:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BF37C;
      }
      goto L_088BF300;
    }
L_088BF300:
    ctx.gpr[31] = (0x088BF308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 312u, 0x089358F8u>(ctx, &aot_mem) && ctx.pc == 0x088BF308u) goto L_088BF308;
    return;
L_088BF308:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF320;
      }
      goto L_088BF310;
    }
L_088BF310:
    ctx.gpr[31] = (0x088BF318u);
    ctx.gpr[4] = (0u | 1000u);
    ctx.pc = 0x08B0BC14u;
    return;
L_088BF318:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF300;
      }
      goto L_088BF320;
    }
L_088BF320:
    ctx.gpr[31] = (0x088BF328u);
    // nop
    ctx.pc = 0x08B0B8A4u;
    return;
L_088BF328:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF37C;
      }
      goto L_088BF334;
    }
L_088BF334:
    ctx.gpr[31] = (0x088BF33Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 508u, 0x08AC75ACu>(ctx, &aot_mem) && ctx.pc == 0x088BF33Cu) goto L_088BF33C;
    return;
L_088BF33C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF37C;
      }
      goto L_088BF344;
    }
L_088BF344:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(20618));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4381u);
    ctx.gpr[31] = (0x088BF360u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12416));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF360u) goto L_088BF360;
    return;
L_088BF360:
    ctx.gpr[31] = (0x088BF368u);
    ctx.gpr[4] = (0u | 32u);
    ctx.pc = 0x08B0B894u;
    return;
L_088BF368:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4384u);
    ctx.gpr[31] = (0x088BF37Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12436));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF37Cu) goto L_088BF37C;
    return;
L_088BF37C:
    ctx.gpr[31] = (0x088BF384u);
    // nop
    goto L_088BC64C;
L_088BF384:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF3B4;
      }
      goto L_088BF38C;
    }
L_088BF38C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (17150u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BF3D8;
      }
      goto L_088BF3B4;
    }
L_088BF3B4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (17150u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    goto L_088BF3D8;
L_088BF3D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20584)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17150u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23680));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6392)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[31] = (0x088BF44Cu);
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.pc = 0x08B0BA0Cu;
    return;
L_088BF44C:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) >= 0;
    ctx.gpr[5] = (2269u << 16u);
      if (branch_taken) {
          goto L_088BF494;
      }
      goto L_088BF458;
    }
L_088BF458:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BF494;
      }
      goto L_088BF46C;
    }
L_088BF46C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088BF488;
      }
      goto L_088BF47C;
    }
L_088BF47C:
    ctx.gpr[31] = (0x088BF484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BF484u) goto L_088BF484;
    return;
L_088BF484:
    ctx.gpr[5] = (2230u << 16u);
    goto L_088BF488;
L_088BF488:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-20904)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    goto L_088BF494;
L_088BF494:
    ctx.gpr[31] = (0x088BF49Cu);
    ctx.gpr[4] = (0u | 1u);
    goto L_088BC5BC;
L_088BF49C:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) >= 0;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BF4E4;
      }
      goto L_088BF4B8;
    }
L_088BF4B8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6392)));
    ctx.gpr[31] = (0x088BF4C8u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.pc = 0x08B0BA5Cu;
    return;
L_088BF4C8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088BF4DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12460));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF4DCu) goto L_088BF4DC;
    return;
L_088BF4DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFAC0;
      }
      goto L_088BF4E4;
    }
L_088BF4E4:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF6DC;
      }
      goto L_088BF4EC;
    }
L_088BF4EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF6DC;
      }
      goto L_088BF4FC;
    }
L_088BF4FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BF6DC;
      }
      goto L_088BF50C;
    }
L_088BF50C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BF6DC;
      }
      goto L_088BF51C;
    }
L_088BF51C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6392)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.gpr[31] = (0x088BF534u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.pc = 0x08B0BA1Cu;
    return;
L_088BF534:
    ctx.gpr[31] = (0x088BF53Cu);
    ctx.gpr[4] = (0u | 1u);
    goto L_088BC5BC;
L_088BF53C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF558;
      }
      goto L_088BF550;
    }
L_088BF550:
    ctx.gpr[4] = (8u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    goto L_088BF558;
L_088BF558:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088BF574u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12484));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF574u) goto L_088BF574;
    return;
L_088BF574:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088BF584u);
    ctx.gpr[5] = (0u | 4u);
    goto L_088BC63C;
L_088BF584:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BF600;
      }
      goto L_088BF59C;
    }
L_088BF59C:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BF5D4;
      }
      goto L_088BF5B4;
    }
L_088BF5B4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[31] = (0x088BF5CCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 456u, 0x08AC7178u>(ctx, &aot_mem) && ctx.pc == 0x088BF5CCu) goto L_088BF5CC;
    return;
L_088BF5CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF5F0;
      }
      goto L_088BF5D4;
    }
L_088BF5D4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BF5F0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B0BD8Cu;
    return;
L_088BF5F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6392));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_088BF600;
L_088BF600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(2049) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF620;
      }
      goto L_088BF610;
    }
L_088BF610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2048));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    goto L_088BF620;
L_088BF620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (ctx.gpr[4] & 2047u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF65C;
      }
      goto L_088BF630;
    }
L_088BF630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (ctx.gpr[4] & 2047u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF65C;
      }
      goto L_088BF648;
    }
L_088BF648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (ctx.gpr[4] & 2047u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    goto L_088BF65C;
L_088BF65C:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BF69C;
      }
      goto L_088BF674;
    }
L_088BF674:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BF694u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 472u, 0x08AC72D8u>(ctx, &aot_mem) && ctx.pc == 0x088BF694u) goto L_088BF694;
    return;
L_088BF694:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BF6B4;
      }
      goto L_088BF69C;
    }
L_088BF69C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (0x088BF6B4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.pc = 0x08B0BD7Cu;
    return;
L_088BF6B4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x088BF6DCu);
    ctx.gpr[4] = (0u | 1u);
    goto L_088BC5BC;
L_088BF6DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1024 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF7DC;
      }
      goto L_088BF6F4;
    }
L_088BF6F4:
    ctx.gpr[30] = (ctx.gpr[18] - ctx.gpr[19]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-64));
    ctx.gpr[30] = (ctx.gpr[30] & ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x088BF70Cu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 720u, 0x08AF7460u>(ctx, &aot_mem) && ctx.pc == 0x088BF70Cu) goto L_088BF70C;
    return;
L_088BF70C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2269u << 16u);
      if (branch_taken) {
          goto L_088BF754;
      }
      goto L_088BF714;
    }
L_088BF714:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BF754;
      }
      goto L_088BF728;
    }
L_088BF728:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF740;
      }
      goto L_088BF738;
    }
L_088BF738:
    ctx.gpr[31] = (0x088BF740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BF740u) goto L_088BF740;
    return;
L_088BF740:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-20904)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BFAC0;
      }
      goto L_088BF754;
    }
L_088BF754:
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23680));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088BF774u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 726u, 0x08AF74D0u>(ctx, &aot_mem) && ctx.pc == 0x088BF774u) goto L_088BF774;
    return;
L_088BF774:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (2269u << 16u);
      if (branch_taken) {
          goto L_088BF7BC;
      }
      goto L_088BF77C;
    }
L_088BF77C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BF7BC;
      }
      goto L_088BF790;
    }
L_088BF790:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF7A8;
      }
      goto L_088BF7A0;
    }
L_088BF7A0:
    ctx.gpr[31] = (0x088BF7A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BF7A8u) goto L_088BF7A8;
    return;
L_088BF7A8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-20904)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BFAC0;
      }
      goto L_088BF7BC;
    }
L_088BF7BC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[30]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088BF7DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3080));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 664u, 0x088BB26Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF7DCu) goto L_088BF7DC;
    return;
L_088BF7DC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8192 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF808;
      }
      goto L_088BF7E8;
    }
L_088BF7E8:
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23680));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088BF804u);
    ctx.gpr[6] = (ctx.gpr[18] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x088BF804u) goto L_088BF804;
    return;
L_088BF804:
    ctx.gpr[19] = (0u | 0u);
    goto L_088BF808;
L_088BF808:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6392)));
    ctx.gpr[31] = (0x088BF818u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.pc = 0x08B0BA14u;
    return;
L_088BF818:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF868;
      }
      goto L_088BF820;
    }
L_088BF820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF868;
      }
      goto L_088BF830;
    }
L_088BF830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BF868;
      }
      goto L_088BF840;
    }
L_088BF840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BF868;
      }
      goto L_088BF850;
    }
L_088BF850:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x088BF860u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12556));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF860u) goto L_088BF860;
    return;
L_088BF860:
    ctx.gpr[31] = (0x088BF868u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 500u, 0x08AC7530u>(ctx, &aot_mem) && ctx.pc == 0x088BF868u) goto L_088BF868;
    return;
L_088BF868:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF944;
      }
      goto L_088BF878;
    }
L_088BF878:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF944;
      }
      goto L_088BF880;
    }
L_088BF880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF898;
      }
      goto L_088BF88C;
    }
L_088BF88C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BF898u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12596));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF898u) goto L_088BF898;
    return;
L_088BF898:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BF920;
      }
      goto L_088BF8B0;
    }
L_088BF8B0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088BF8C4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.pc = 0x08B0BD9Cu;
    return;
L_088BF8C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20652)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20648)));
    ctx.gpr[8] = (ctx.gpr[5] ^ ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[8] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF90C;
      }
      goto L_088BF8F8;
    }
L_088BF8F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BF918;
      }
      goto L_088BF90C;
    }
L_088BF90C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BF918u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12628));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF918u) goto L_088BF918;
    return;
L_088BF918:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_088BF92C;
      }
      goto L_088BF920;
    }
L_088BF920:
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x088BF92Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 496u, 0x08AC74D8u>(ctx, &aot_mem) && ctx.pc == 0x088BF92Cu) goto L_088BF92C;
    return;
L_088BF92C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF944;
      }
      goto L_088BF934;
    }
L_088BF934:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088BF940u);
    ctx.gpr[5] = (0u | 5u);
    goto L_088BC644;
L_088BF940:
    ctx.gpr[16] = (0u | 0u);
    goto L_088BF944;
L_088BF944:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF9B4;
      }
      goto L_088BF94C;
    }
L_088BF94C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.gpr[31] = (0x088BF958u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 484u, 0x08AC73F0u>(ctx, &aot_mem) && ctx.pc == 0x088BF958u) goto L_088BF958;
    return;
L_088BF958:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF99C;
      }
      goto L_088BF960;
    }
L_088BF960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x088BF980u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12648));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF980u) goto L_088BF980;
    return;
L_088BF980:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFA30;
      }
      goto L_088BF988;
    }
L_088BF988:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088BF994u);
    ctx.gpr[5] = (0u | 6u);
    goto L_088BC644;
L_088BF994:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088BFA30;
      }
      goto L_088BF99C;
    }
L_088BF99C:
    ctx.gpr[31] = (0x088BF9A4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 488u, 0x08AC7448u>(ctx, &aot_mem) && ctx.pc == 0x088BF9A4u) goto L_088BF9A4;
    return;
L_088BF9A4:
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BFA30;
      }
      goto L_088BF9B4;
    }
L_088BF9B4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFA30;
      }
      goto L_088BF9BC;
    }
L_088BF9BC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088BF9D0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.pc = 0x08B0BD6Cu;
    return;
L_088BF9D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BFA30;
      }
      goto L_088BF9D8;
    }
L_088BF9D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20652)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20648)));
    ctx.gpr[8] = (ctx.gpr[5] ^ ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[8] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BFA20;
      }
      goto L_088BFA0C;
    }
L_088BFA0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BFA2C;
      }
      goto L_088BFA20;
    }
L_088BFA20:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BFA2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12628));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFA2Cu) goto L_088BFA2C;
    return;
L_088BFA2C:
    ctx.gpr[22] = (0u | 0u);
    goto L_088BFA30;
L_088BFA30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088BFA5C;
      }
      goto L_088BFA3C;
    }
L_088BFA3C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (0x088BFA4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12660));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFA4Cu) goto L_088BFA4C;
    return;
L_088BFA4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x088BFA5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6392)));
    ctx.pc = 0x08B0BA24u;
    return;
L_088BFA5C:
    ctx.gpr[31] = (0x088BFA64u);
    ctx.gpr[4] = (0u | 1u);
    goto L_088BC5BC;
L_088BFA64:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFAB4;
      }
      goto L_088BFA78;
    }
L_088BFA78:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BFA94;
      }
      goto L_088BFA8C;
    }
L_088BFA8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFAC0;
      }
      goto L_088BFA94;
    }
L_088BFA94:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BFAB4;
      }
      goto L_088BFAAC;
    }
L_088BFAAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFAC0;
      }
      goto L_088BFAB4;
    }
L_088BFAB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF2E8;
      }
      goto L_088BFAC0;
    }
L_088BFAC0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFAE0;
      }
      goto L_088BFAC8;
    }
L_088BFAC8:
    ctx.gpr[31] = (0x088BFAD0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 476u, 0x08AC7360u>(ctx, &aot_mem) && ctx.pc == 0x088BFAD0u) goto L_088BFAD0;
    return;
L_088BFAD0:
    ctx.gpr[31] = (0x088BFAD8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 492u, 0x08AC7490u>(ctx, &aot_mem) && ctx.pc == 0x088BFAD8u) goto L_088BFAD8;
    return;
L_088BFAD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFAF8;
      }
      goto L_088BFAE0;
    }
L_088BFAE0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFAF8;
      }
      goto L_088BFAE8;
    }
L_088BFAE8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[31] = (0x088BFAF8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B0BDDCu;
    return;
L_088BFAF8:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BFBB0;
      }
      goto L_088BFB10;
    }
L_088BFB10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BFB30;
      }
      goto L_088BFB20;
    }
L_088BFB20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BFB68;
      }
      goto L_088BFB30;
    }
L_088BFB30:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BFB3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12684));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFB3Cu) goto L_088BFB3C;
    return;
L_088BFB3C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088BFB58;
      }
      goto L_088BFB4C;
    }
L_088BFB4C:
    ctx.gpr[31] = (0x088BFB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BFB54u) goto L_088BFB54;
    return;
L_088BFB54:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088BFB58;
L_088BFB58:
    ctx.gpr[31] = (0x088BFB60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 174u, 0x08838B48u>(ctx, &aot_mem) && ctx.pc == 0x088BFB60u) goto L_088BFB60;
    return;
L_088BFB60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFBB0;
      }
      goto L_088BFB68;
    }
L_088BFB68:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BFB80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12708));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFB80u) goto L_088BFB80;
    return;
L_088BFB80:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_088BFB9C;
      }
      goto L_088BFB90;
    }
L_088BFB90:
    ctx.gpr[31] = (0x088BFB98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BFB98u) goto L_088BFB98;
    return;
L_088BFB98:
    ctx.gpr[4] = (2269u << 16u);
    goto L_088BFB9C;
L_088BFB9C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-20904)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_088BFBB0;
L_088BFBB0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFBC4;
      }
      goto L_088BFBB8;
    }
L_088BFBB8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088BFBC4u);
    ctx.gpr[5] = (0u | 7u);
    goto L_088BC644;
L_088BFBC4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[19]);
      if (branch_taken) {
          goto L_088BFC1C;
      }
      goto L_088BFBCC;
    }
L_088BFBCC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088BFC1C;
      }
      goto L_088BFBD4;
    }
L_088BFBD4:
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1024));
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23680));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[31] = (0x088BFBF8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x088BFBF8u) goto L_088BFBF8;
    return;
L_088BFBF8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x088BFC04u);
    ctx.gpr[5] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 720u, 0x08AF7460u>(ctx, &aot_mem) && ctx.pc == 0x088BFC04u) goto L_088BFC04;
    return;
L_088BFC04:
    ctx.gpr[7] = (ctx.gpr[19] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088BFC1Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 726u, 0x08AF74D0u>(ctx, &aot_mem) && ctx.pc == 0x088BFC1Cu) goto L_088BFC1C;
    return;
L_088BFC1C:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3080));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (0x088BFC34u);
    ctx.gpr[4] = (0u | 1u);
    goto L_088BC258;
L_088BFC34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFC64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    ctx.gpr[18] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6392)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BFCACu);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.pc = 0x08B0BA2Cu;
    return;
L_088BFCAC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-6392));
      if (branch_taken) {
          goto L_088BFCD0;
      }
      goto L_088BFCB8;
    }
L_088BFCB8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BFCC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12736));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFCC8u) goto L_088BFCC8;
    return;
L_088BFCC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFFB8;
      }
      goto L_088BFCD0;
    }
L_088BFCD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12780));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[31] = (0x088BFCF0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFCF0u) goto L_088BFCF0;
    return;
L_088BFCF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6392)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088BFD00u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.pc = 0x08B0BA4Cu;
    return;
L_088BFD00:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BFD24;
      }
      goto L_088BFD0C;
    }
L_088BFD0C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BFD1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12816));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFD1Cu) goto L_088BFD1C;
    return;
L_088BFD1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFFB8;
      }
      goto L_088BFD24;
    }
L_088BFD24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFE60;
      }
      goto L_088BFD30;
    }
L_088BFD30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[20];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BFD5C;
      }
      goto L_088BFD44;
    }
L_088BFD44:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088BFD54u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 456u, 0x08AC7178u>(ctx, &aot_mem) && ctx.pc == 0x088BFD54u) goto L_088BFD54;
    return;
L_088BFD54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFD70;
      }
      goto L_088BFD5C;
    }
L_088BFD5C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BFD70u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B0BD8Cu;
    return;
L_088BFD70:
    ctx.gpr[31] = (0x088BFD78u);
    ctx.gpr[4] = (0u | 1u);
    goto L_088BC5BC;
L_088BFD78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_088BFD94;
      }
      goto L_088BFD8C;
    }
L_088BFD8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (1u << 16u);
      if (branch_taken) {
          goto L_088BFD94;
      }
      goto L_088BFD94;
    }
L_088BFD94:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[6] & 2047u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088BFDB4;
      }
      goto L_088BFDA4;
    }
L_088BFDA4:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFDB4;
      }
      goto L_088BFDB0;
    }
L_088BFDB0:
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[6]);
    goto L_088BFDB4;
L_088BFDB4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BFDC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12868));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFDC8u) goto L_088BFDC8;
    return;
L_088BFDC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088BFE0C;
      }
      goto L_088BFDD4;
    }
L_088BFDD4:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x088BFDF0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 472u, 0x08AC72D8u>(ctx, &aot_mem) && ctx.pc == 0x088BFDF0u) goto L_088BFDF0;
    return;
L_088BFDF0:
    ctx.gpr[31] = (0x088BFDF8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 492u, 0x08AC7490u>(ctx, &aot_mem) && ctx.pc == 0x088BFDF8u) goto L_088BFDF8;
    return;
L_088BFDF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088BFE30;
      }
      goto L_088BFE0C;
    }
L_088BFE0C:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088BFE20u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.pc = 0x08B0BD74u;
    return;
L_088BFE20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    goto L_088BFE30;
L_088BFE30:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BFE50;
      }
      goto L_088BFE38;
    }
L_088BFE38:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BFE48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12816));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFE48u) goto L_088BFE48;
    return;
L_088BFE48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFFB8;
      }
      goto L_088BFE50;
    }
L_088BFE50:
    ctx.gpr[31] = (0x088BFE58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 78u, 0x08A28B0Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFE58u) goto L_088BFE58;
    return;
L_088BFE58:
    ctx.gpr[31] = (0x088BFE60u);
    ctx.gpr[4] = (0u | 1u);
    goto L_088BC5BC;
L_088BFE60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFF28;
      }
      goto L_088BFE6C;
    }
L_088BFE6C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BFE78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12896));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFE78u) goto L_088BFE78;
    return;
L_088BFE78:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088BFEBC;
      }
      goto L_088BFE8C;
    }
L_088BFE8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088BFE9Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 456u, 0x08AC7178u>(ctx, &aot_mem) && ctx.pc == 0x088BFE9Cu) goto L_088BFE9C;
    return;
L_088BFE9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x088BFEACu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 468u, 0x08AC7270u>(ctx, &aot_mem) && ctx.pc == 0x088BFEACu) goto L_088BFEAC;
    return;
L_088BFEAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088BFEEC;
      }
      goto L_088BFEBC;
    }
L_088BFEBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BFED0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B0BD8Cu;
    return;
L_088BFED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x088BFEE0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.pc = 0x08B0BD74u;
    return;
L_088BFEE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    goto L_088BFEEC;
L_088BFEEC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFF0C;
      }
      goto L_088BFEF4;
    }
L_088BFEF4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088BFF04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12816));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFF04u) goto L_088BFF04;
    return;
L_088BFF04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFFB8;
      }
      goto L_088BFF0C;
    }
L_088BFF0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[31] = (0x088BFF20u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 78u, 0x08A28B0Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFF20u) goto L_088BFF20;
    return;
L_088BFF20:
    ctx.gpr[31] = (0x088BFF28u);
    ctx.gpr[4] = (0u | 1u);
    goto L_088BC5BC;
L_088BFF28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6392)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BFF3Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0BA54u;
    return;
L_088BFF3C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BFF58;
      }
      goto L_088BFF48;
    }
L_088BFF48:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BFF58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12916));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFF58u) goto L_088BFF58;
    return;
L_088BFF58:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6392)));
    ctx.gpr[31] = (0x088BFF68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12964));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFF68u) goto L_088BFF68;
    return;
L_088BFF68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6392)));
    ctx.gpr[31] = (0x088BFF74u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.pc = 0x08B0BA44u;
    return;
L_088BFF74:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BFFB8;
      }
      goto L_088BFF80;
    }
L_088BFF80:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088BFF90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12988));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFF90u) goto L_088BFF90;
    return;
L_088BFF90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6392)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x088BFFA0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.pc = 0x08B0BA3Cu;
    return;
L_088BFFA0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088BFFB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13028));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 441u, 0x088BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFFB8u) goto L_088BFFB8;
    return;
L_088BFFB8:
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
L_088BFFD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20372)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.pc = 0x088C0000u; return;
}

void recomp_unit_0046(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0046_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_46(Runtime &runtime) {
    runtime.register_generated_unit(46u, 0x088BC000u, 16384u, &recomp_unit_0046, &recomp_unit_0046_entry);
    runtime.register_function(0x088BC000u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC008u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC018u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC020u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC028u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC038u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC040u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC048u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC04Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC054u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC084u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC08Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC090u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC098u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC0A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC0B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC0BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC0C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC0CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC0D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC0D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC0E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC0F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC0F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC114u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC11Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC128u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC13Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC148u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC14Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC154u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC174u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC17Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC188u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC19Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC1ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC1B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC1C0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC1C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC1D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC1DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC1F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC220u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC230u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC23Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC244u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC258u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC26Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC27Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC28Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC294u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC29Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC2A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC2ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC2BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC2D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC2F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC318u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC32Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC370u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC380u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC388u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC38Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC394u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC39Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC3A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC3B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC3C0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC3C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC3CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC3D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC3E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC3E8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC3F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC41Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC428u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC438u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC43Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC460u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC468u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC478u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC480u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC4A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC4C0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC4C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC4D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC4DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC4ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC4F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC500u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC508u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC51Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC530u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC544u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC550u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC55Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC570u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC578u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC580u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC58Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC594u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC5A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC5B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC5BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC5D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC5ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC5FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC608u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC610u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC61Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC624u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC630u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC63Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC644u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC64Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC664u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC66Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC674u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC67Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC684u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC690u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC698u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC6A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC6A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC6B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC6BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC6C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC6C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC6D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC6E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC6F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC700u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC70Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC738u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC740u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC748u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC758u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC764u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC778u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC780u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC784u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC794u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC79Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC7B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC7D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC7DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC844u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC84Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC858u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC878u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC880u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC88Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC8BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC8D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC8E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC930u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC93Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC98Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC9A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC9C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC9CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCA54u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCA5Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCA7Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCAA4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCAACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCAB0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCAB8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCAC4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCACCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCAD0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCAD8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCAE0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCAECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCAF4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCAF8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB00u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB08u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB18u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB20u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB2Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB40u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB4Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB50u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB5Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB68u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB7Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB84u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB90u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCBA4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCBB0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCBBCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCBC0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCBD0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCBE8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCBF0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCBF8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC00u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC0Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC1Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC24u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC50u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC58u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC60u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC9Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCCA4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCCB0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCCBCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCCC4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCCCCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCCD4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCCDCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCCE4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCCF0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCCF8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCD00u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCD14u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCD1Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCD28u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCD30u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCD38u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCD50u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCE38u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCE3Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCE7Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCE84u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCE9Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCEB8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCED8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCEECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCEF8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCF04u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCF44u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCF58u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCF64u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCF70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCF88u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCF94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCF9Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCFA4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCFB8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCFBCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCFCCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCFD4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCFDCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCFF8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD038u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD080u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD090u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD098u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD0A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD0A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD0B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD0B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD0C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD0D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD0E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD0F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD0F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD108u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD110u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD120u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD128u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD138u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD140u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD150u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD15Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD168u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD178u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD180u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD190u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD198u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD19Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD1A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD1B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD1C0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD1C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD1D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD1E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD1F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD20Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD214u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD218u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD224u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD22Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD23Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD254u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD25Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD26Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD274u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD27Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD284u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD290u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD29Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD2A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD2A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD2B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD2BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD2C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD2CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD2D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD2E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD2ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD2F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD2F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD304u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD30Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD314u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD320u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD32Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD334u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD338u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD340u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD34Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD354u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD35Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD368u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD374u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD37Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD380u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD388u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD394u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD39Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD404u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD40Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD410u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD418u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD424u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD42Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD434u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD440u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD44Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD454u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD458u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD460u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD46Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD474u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD47Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD488u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD494u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD49Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4E8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD504u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD50Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD518u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD524u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD52Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD530u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD538u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD544u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD54Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD554u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD558u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD560u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD568u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD574u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD57Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD580u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD588u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD590u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD59Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5C0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5E8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD604u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD610u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD618u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD61Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD624u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD630u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD634u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD63Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD644u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD650u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD660u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD668u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD688u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD6A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD6B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD6C0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD6C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD6D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD6E8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD6F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD704u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD714u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD71Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD720u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD728u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD734u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD740u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD748u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD754u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD764u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD770u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD788u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD790u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD79Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD7A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD7ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD7B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD7BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD7C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD7D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD7E8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD7F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD804u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD80Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD828u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD830u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD844u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD84Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD864u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD868u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD870u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD888u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD890u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD898u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD8B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD8B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD8C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD8CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD8E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD8F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD8F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD8FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD904u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD910u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD91Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD92Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD944u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD94Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD964u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD96Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD978u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD9A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD9C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD9D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD9E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD9ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA18u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA20u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA28u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA38u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA4Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA5Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA68u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA78u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA84u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDAA0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDAB4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDABCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDAC4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDAD4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDAE4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB0Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB10u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB24u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB2Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB34u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB40u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB48u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB54u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB64u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB7Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB88u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB8Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDBACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDBC4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDBD0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDBD8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDBECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDBF8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC00u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC08u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC10u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC20u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC28u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC30u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC34u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC60u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC6Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC74u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC7Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC88u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC90u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC9Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDCBCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDCC8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDCD0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDCDCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDCE8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDCF4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDD04u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDD0Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDD10u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDD18u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDD1Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDD24u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDD2Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDD38u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDD44u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDD58u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDD68u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDD70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDD80u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDD98u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDDD8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDDE4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE08u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE20u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE2Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE40u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE48u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE50u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE58u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE60u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE64u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE6Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE74u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE84u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE8Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDEA4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDEACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDEB4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDEBCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDEC0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDEC8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDED0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDED8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDEE0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDEE8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDEF0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDEF8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF00u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF0Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF14u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF1Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF24u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF38u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF40u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF50u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF64u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF74u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF7Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF80u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF88u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDFA8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDFB8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDFC0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDFC4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDFCCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDFD4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDFE4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDFF0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE018u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE02Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE03Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE058u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE064u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE06Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE078u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE084u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE088u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE094u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE09Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE0A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE0C0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE0CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE0D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE0ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE0F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE108u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE10Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE114u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE120u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE128u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE134u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE140u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE148u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE15Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE164u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE170u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE180u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE18Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE198u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE1A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE1B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE1BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE1C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE1D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE1E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE1ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE208u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE220u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE22Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE238u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE24Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE254u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE25Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE264u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE274u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE280u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE288u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE28Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE294u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE29Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE2B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE2C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE2CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE2DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE2E8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE2F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE2FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE314u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE328u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE330u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE338u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE344u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE350u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE360u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE368u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE370u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE384u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE390u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE39Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE404u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE414u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE420u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE428u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE438u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE448u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE450u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE46Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE474u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE47Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE484u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE490u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE49Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE4A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE4ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE4B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE4D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE4DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE4E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE4ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE4F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE508u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE510u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE51Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE564u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE57Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE584u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE5B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE5E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE5E8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE5F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE600u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE608u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE610u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE620u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE630u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE660u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE668u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE67Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE684u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE68Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE69Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE6A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE6B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE6D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE6ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE6F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE700u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE708u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE710u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE718u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE728u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE738u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE76Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE77Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE78Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE79Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE7ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE7C0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE7C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE7D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE7E8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE7F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE7F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE800u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE808u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE810u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE818u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE820u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE828u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE834u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE83Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE850u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE860u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE870u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE87Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE888u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE898u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE8A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE8C0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE8D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE8E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE8F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE904u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE90Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE934u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE940u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE948u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE950u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE958u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE968u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE978u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE9A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE9B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE9BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE9CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE9ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE9F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEA08u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEA18u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEA28u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEA3Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEA44u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEA4Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEA54u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEA68u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEAC0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEADCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEAE8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEAF0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEAF8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB00u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB1Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB24u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB30u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB44u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB4Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB60u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB68u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEBB0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEBB8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEBC0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEBC8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEBD4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEBE0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEBF8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC0Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC14u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC18u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC24u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC28u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC3Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC44u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC58u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC60u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC68u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC84u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC8Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BECA0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BECA8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BECB0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BECB8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BECC8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BECDCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BECE4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BECF8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED00u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED10u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED20u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED30u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED3Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED44u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED54u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED64u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED88u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED90u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEDA0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEDB0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEDB8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEDC4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEDC8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEDDCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEDE8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEDF8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE0Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE24u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE28u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE44u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE7Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEEA4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEEACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEEB8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEEC4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEED0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEED8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEF00u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEF08u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEF18u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEF20u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEF40u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEF4Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEF54u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEF5Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEFD0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEFD8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEFE0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEFF0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF00Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF024u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF050u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF060u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF068u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF078u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF084u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF08Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF094u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF0ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF0C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF0D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF0ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF0FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF104u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF130u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF154u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF15Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF174u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF184u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF18Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF190u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF19Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF1B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF1BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF1C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF1CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF1E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF1ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF1F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF200u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF210u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF230u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF240u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF258u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF264u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF274u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF278u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF288u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF294u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF29Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF2C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF2E8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF300u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF308u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF310u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF318u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF320u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF328u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF334u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF33Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF344u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF360u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF368u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF37Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF384u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF38Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF3B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF3D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF44Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF458u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF46Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF47Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF484u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF488u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF494u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF49Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF4B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF4C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF4DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF4E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF4ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF4FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF50Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF51Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF534u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF53Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF550u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF558u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF574u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF584u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF59Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF5B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF5CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF5D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF5F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF600u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF610u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF620u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF630u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF648u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF65Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF674u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF694u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF69Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF6B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF6DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF6F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF70Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF714u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF728u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF738u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF740u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF754u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF774u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF77Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF790u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF7A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF7A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF7BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF7DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF7E8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF804u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF808u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF818u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF820u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF830u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF840u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF850u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF860u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF868u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF878u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF880u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF88Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF898u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF8B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF8C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF8F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF90Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF918u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF920u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF92Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF934u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF940u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF944u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF94Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF958u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF960u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF980u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF988u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF994u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF99Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF9A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF9B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF9BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF9D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF9D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA0Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA20u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA2Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA30u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA3Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA4Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA5Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA64u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA78u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA8Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFAACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFAB4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFAC0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFAC8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFAD0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFAD8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFAE0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFAE8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFAF8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB10u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB20u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB30u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB3Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB4Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB54u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB58u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB60u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB68u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB80u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB90u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB98u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB9Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFBB0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFBB8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFBC4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFBCCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFBD4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFBF8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFC04u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFC1Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFC34u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFC64u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFCACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFCB8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFCC8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFCD0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFCF0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD00u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD0Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD1Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD24u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD30u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD44u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD54u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD5Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD78u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD8Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFDA4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFDB0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFDB4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFDC8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFDD4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFDF0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFDF8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE0Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE20u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE30u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE38u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE48u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE50u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE58u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE60u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE6Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE78u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE8Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE9Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFEACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFEBCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFED0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFEE0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFEECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFEF4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFF04u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFF0Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFF20u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFF28u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFF3Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFF48u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFF58u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFF68u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFF74u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFF80u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFF90u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFFA0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFFB8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFFD8u, &recomp_unit_0046, "recomp_unit_0046");
}
} // namespace psprecomp
