#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0196[4021] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 15,
    0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 30, 31,
    0, 32, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 41, 0, 42, 0, 43, 0, 44, 0, 45, 0, 46,
    0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0,
    0, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 0, 63, 0, 64, 0,
    65, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 73, 74, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 80, 0, 0, 0, 81, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0,
    0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 94, 95, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 111,
    112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0,
    0, 0, 123, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0,
    0, 136, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0,
    0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 152, 0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160,
    0, 0, 0, 161, 0, 162, 0, 163, 0, 0, 164, 0, 165, 0, 166, 0, 0, 167, 0, 0, 168, 0, 169, 0, 170, 0, 0, 171, 0, 172, 0, 173,
    0, 174, 0, 175, 0, 0, 176, 0, 0, 177, 0, 178, 0, 179, 0, 180, 0, 0, 181, 0, 182, 0, 183, 0, 0, 184, 0, 185, 0, 186, 0, 187,
    0, 188, 0, 189, 0, 190, 0, 191, 0, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 0, 201, 0, 202,
    0, 203, 0, 204, 0, 205, 0, 206, 0, 0, 207, 0, 0, 208, 0, 209, 210, 0, 211, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0,
    216, 0, 0, 217, 0, 218, 219, 0, 0, 220, 0, 221, 0, 222, 223, 0, 224, 0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 0, 231, 0,
    232, 0, 0, 233, 0, 234, 0, 0, 235, 0, 236, 0, 0, 237, 0, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 242, 0, 243, 244, 0, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 248, 249, 0, 250, 251, 0, 0, 252, 0, 0,
    253, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 257, 258, 0, 0, 259, 260, 0, 0, 261, 262, 0, 0, 263, 264, 0, 0, 265, 266, 0, 0,
    267, 268, 0, 0, 269, 270, 0, 0, 0, 271, 0, 0, 272, 273, 0, 0, 274, 0, 0, 275, 276, 0, 0, 277, 0, 278, 0, 279, 0, 280, 281, 0,
    282, 283, 0, 284, 285, 0, 286, 0, 287, 288, 0, 289, 0, 0, 290, 0, 291, 292, 0, 0, 293, 0, 294, 295, 0, 0, 296, 0, 0, 297, 0, 0,
    298, 0, 0, 299, 0, 300, 0, 301, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 306, 307, 0, 308, 309, 0, 310, 0, 311, 0, 312,
    0, 313, 0, 314, 0, 315, 0, 316, 317, 0, 318, 0, 319, 0, 0, 320, 0, 321, 0, 322, 0, 0, 323, 324, 0, 325, 0, 326, 0, 327, 0, 328,
    0, 329, 0, 330, 0, 331, 0, 332, 0, 333, 334, 0, 335, 336, 0, 337, 0, 338, 0, 339, 0, 340, 0, 341, 0, 342, 0, 343, 0, 0, 344, 0,
    345, 0, 346, 0, 347, 0, 0, 348, 0, 349, 0, 350, 0, 351, 0, 352, 0, 353, 0, 0, 354, 0, 355, 0, 0, 356, 0, 357, 0, 358, 0, 359,
    0, 360, 0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 0, 371, 0, 372, 0, 373, 0, 374, 0, 375,
    0, 0, 376, 0, 377, 0, 378, 0, 379, 0, 0, 380, 0, 381, 0, 382, 0, 383, 0, 384, 0, 385, 0, 0, 386, 0, 387, 0, 0, 388, 0, 389,
    0, 390, 0, 391, 0, 0, 392, 0, 393, 0, 394, 395, 0, 396, 397, 0, 398, 399, 0, 400, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0,
    0, 405, 0, 0, 406, 0, 0, 407, 0, 408, 0, 409, 410, 0, 411, 0, 412, 0, 413, 0, 414, 0, 415, 0, 416, 0, 0, 0, 417, 0, 0, 0,
    418, 0, 0, 0, 419, 0, 0, 420, 421, 0, 0, 422, 0, 0, 423, 0, 0, 424, 0, 425, 0, 426, 0, 427, 0, 428, 0, 429, 0, 430, 0, 431,
    0, 432, 0, 0, 433, 0, 0, 0, 434, 0, 435, 0, 436, 0, 437, 0, 438, 0, 439, 0, 440, 0, 441, 0, 0, 442, 0, 443, 444, 0, 445, 446,
    0, 447, 448, 0, 0, 449, 0, 0, 450, 0, 0, 451, 0, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0, 455, 0, 456, 0, 0, 0, 457, 0, 0,
    0, 458, 0, 0, 459, 0, 0, 460, 0, 0, 461, 0, 462, 0, 0, 463, 0, 0, 464, 0, 465, 0, 466, 0, 0, 0, 467, 0, 468, 0, 0, 469,
    0, 470, 0, 0, 471, 0, 0, 472, 0, 0, 473, 0, 474, 475, 0, 476, 0, 477, 478, 479, 0, 480, 0, 0, 481, 0, 0, 482, 0, 0, 483, 0,
    0, 484, 0, 0, 485, 0, 486, 487, 0, 488, 489, 0, 490, 491, 0, 492, 493, 0, 494, 495, 0, 496, 497, 0, 498, 499, 0, 500, 501, 0, 0, 502,
    0, 0, 503, 0, 0, 504, 0, 0, 505, 0, 0, 506, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 511, 0, 0,
    512, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 519,
    0, 0, 520, 0, 0, 521, 0, 0, 522, 0, 0, 523, 0, 0, 524, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0, 528, 0, 0,
    529, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0,
    0, 0, 537, 0, 0, 538, 0, 0, 539, 0, 0, 540, 0, 0, 541, 0, 0, 542, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0,
    546, 0, 0, 547, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0,
    0, 554, 0, 0, 0, 555, 0, 0, 556, 0, 0, 557, 0, 0, 558, 0, 0, 559, 0, 0, 560, 0, 0, 561, 0, 0, 0, 562, 0, 0, 0, 563,
    0, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0, 0, 0,
    571, 0, 0, 0, 572, 0, 0, 0, 573, 0, 574, 0, 575, 0, 576, 0, 577, 0, 0, 578, 0, 579, 0, 0, 580, 0, 581, 0, 582, 0, 583, 0,
    584, 0, 585, 0, 586, 0, 587, 588, 0, 589, 0, 590, 0, 591, 592, 0, 593, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0, 0, 0, 597, 0, 0,
    0, 598, 0, 0, 0, 0, 599, 0, 0, 600, 0, 0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 0, 604, 0, 0, 605, 606, 0,
    0, 607, 0, 608, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0, 612, 613, 0, 614, 0, 615, 0, 616, 617, 0, 618, 0, 0, 619, 0,
    620, 621, 0, 622, 0, 623, 0, 624, 625, 0, 626, 0, 0, 627, 0, 0, 628, 0, 0, 0, 0, 629, 0, 0, 630, 0, 0, 0, 0, 631, 0, 632,
    633, 0, 634, 635, 0, 0, 636, 0, 0, 0, 637, 0, 638, 0, 639, 0, 640, 0, 0, 641, 0, 0, 642, 0, 0, 643, 0, 0, 0, 644, 0, 645,
    0, 0, 646, 0, 0, 647, 0, 0, 648, 0, 649, 650, 0, 651, 0, 652, 0, 653, 0, 654, 0, 0, 655, 0, 0, 0, 656, 0, 0, 657, 0, 0,
    0, 658, 0, 0, 659, 0, 0, 0, 660, 0, 0, 661, 0, 662, 0, 663, 0, 664, 0, 665, 0, 666, 0, 667, 0, 668, 0, 0, 669, 0, 670, 671,
    0, 0, 672, 0, 0, 673, 0, 0, 674, 0, 675, 676, 0, 0, 0, 677, 0, 0, 678, 0, 0, 0, 0, 679, 0, 680, 681, 0, 0, 682, 0, 683,
    684, 0, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 687, 0, 688, 689, 0, 0, 690, 0, 0, 691, 0, 0, 0, 692, 0, 0, 693, 0, 694,
    695, 0, 0, 0, 0, 696, 0, 0, 697, 0, 698, 699, 0, 0, 0, 700, 0, 0, 701, 0, 702, 703, 0, 0, 0, 704, 0, 0, 705, 0, 706, 707,
    0, 0, 0, 0, 708, 0, 0, 0, 709, 710, 0, 711, 0, 712, 0, 0, 0, 0, 713, 0, 0, 0, 714, 715, 0, 716, 0, 717, 0, 0, 0, 0,
    718, 0, 0, 0, 719, 720, 0, 721, 0, 0, 722, 0, 0, 0, 0, 723, 0, 724, 0, 0, 725, 0, 0, 726, 0, 727, 0, 0, 728, 0, 0, 729,
    0, 0, 730, 0, 0, 0, 731, 732, 0, 0, 0, 733, 0, 0, 0, 734, 0, 0, 0, 735, 0, 0, 736, 0, 0, 0, 0, 737, 0, 0, 738, 0,
    0, 0, 739, 0, 0, 0, 740, 0, 0, 741, 0, 0, 742, 0, 0, 0, 743, 0, 0, 744, 0, 0, 0, 0, 745, 0, 0, 0, 746, 0, 0, 0,
    747, 0, 0, 0, 748, 0, 0, 749, 0, 0, 0, 750, 0, 0, 0, 751, 0, 0, 0, 0, 752, 0, 0, 0, 0, 753, 0, 0, 0, 0, 754, 0,
    0, 0, 755, 756, 0, 0, 0, 757, 758, 0, 0, 0, 759, 0, 0, 0, 760, 0, 0, 0, 761, 0, 0, 0, 0, 762, 0, 0, 0, 0, 763, 0,
    0, 0, 764, 0, 0, 0, 0, 765, 0, 0, 766, 0, 0, 0, 767, 768, 0, 0, 0, 769, 0, 0, 0, 770, 0, 0, 0, 771, 0, 0, 0, 772,
    0, 0, 773, 0, 0, 774, 0, 0, 775, 0, 0, 776, 0, 0, 0, 0, 777, 0, 0, 0, 778, 0, 779, 780, 0, 0, 781, 0, 0, 782, 783, 0,
    784, 0, 785, 786, 0, 0, 787, 0, 0, 788, 0, 0, 0, 789, 0, 0, 790, 0, 791, 792, 0, 793, 794, 0, 0, 0, 795, 0, 0, 796, 0, 0,
    0, 0, 797, 0, 0, 0, 798, 0, 0, 0, 799, 0, 0, 0, 800, 0, 0, 0, 801, 0, 802, 803, 0, 0, 804, 0, 0, 0, 805, 0, 0, 806,
    807, 808, 809, 0, 810, 0, 811, 0, 812, 0, 813, 0, 814, 0, 815, 0, 0, 816, 0, 817, 0, 0, 818, 0, 0, 819, 0, 0, 820, 0, 821, 0,
    822, 0, 823, 0, 824, 825, 826, 0, 827, 828, 0, 829, 0, 830, 0, 831, 0, 0, 832, 0, 833, 0, 0, 834, 0, 0, 835, 0, 836, 0, 837, 0,
    838, 0, 0, 0, 839, 0, 0, 0, 840, 0, 0, 0, 841, 0, 0, 842, 0, 843, 0, 0, 844, 0, 845, 0, 846, 0, 847, 0, 848, 0, 849, 0,
    0, 850, 0, 851, 0, 852, 0, 0, 853, 0, 0, 854, 0, 0, 855, 0, 0, 856, 0, 0, 857, 0, 0, 858, 0, 0, 859, 0, 860, 0, 0, 861,
    0, 0, 862, 0, 0, 863, 0, 0, 864, 0, 0, 865, 0, 0, 866, 0, 867, 868, 869, 0, 870, 0, 871, 0, 872, 0, 873, 0, 874, 0, 875, 0,
    876, 0, 877, 0, 878, 0, 879, 0, 880, 0, 881, 0, 882, 0, 883, 0, 884, 0, 885, 0, 886, 0, 887, 0, 888, 0, 889, 0, 890, 0, 891, 0,
    892, 0, 893, 0, 894, 0, 895, 0, 896, 0, 0, 0, 0, 897, 0, 0, 898, 0, 0, 899, 0, 900, 0, 0, 901, 0, 0, 0, 0, 902, 0, 0,
    903, 0, 0, 904, 0, 905, 0, 0, 906, 0, 907, 0, 908, 0, 909, 0, 910, 0, 911, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 912, 0, 0, 0, 0, 0, 0, 0, 913, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 914, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 915, 0, 916, 0, 0, 917,
    0, 0, 0, 0, 0, 918, 0, 919, 0, 920, 0, 0, 921, 0, 0, 922, 923, 0, 924, 925, 0, 0, 0, 0, 0, 0, 0, 926, 0, 0, 0, 0,
    0, 927, 0, 0, 928, 0, 0, 0, 929, 0, 0, 0, 0, 930, 931, 0, 0, 0, 0, 0, 932, 0, 0, 933, 0, 0, 934, 0, 0, 0, 935, 0,
    0, 936, 0, 0, 0, 937, 0, 0, 938, 0, 939, 0, 0, 0, 940, 0, 941, 0, 0, 0, 942, 0, 0, 0, 943, 0, 0, 0, 944, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 945, 0, 0, 0, 946, 0, 947, 0, 948, 0, 949, 0, 950, 0, 951, 0, 952, 0, 953, 0, 954, 0, 955, 0, 956, 0,
    957, 0, 958, 0, 959, 0, 960, 0, 961, 0, 962, 0, 0, 0, 0, 0, 963, 0, 964, 965, 0, 0, 0, 0, 0, 0, 0, 0, 966, 0, 967, 0,
    968, 0, 0, 0, 0, 0, 969, 0, 970, 0, 971, 0, 972, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 973, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 974, 0, 0, 0, 0, 0, 0, 0, 0, 0, 975, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 976, 0, 0, 0, 0, 0, 977, 0, 0, 0, 978, 0, 0, 979, 0, 980,
    0, 0, 0, 0, 0, 0, 981, 0, 0, 0, 0, 0, 0, 0, 982, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 983, 0, 0,
    0, 0, 0, 0, 0, 0, 984, 0, 0, 985, 0, 0, 0, 0, 0, 986, 0, 0, 0, 0, 0, 0, 0, 0, 0, 987, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 988, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 989, 0, 0, 0, 0, 0, 0, 990, 0, 0, 0, 991, 0, 992,
    993, 0, 0, 994, 0, 0, 995, 0, 0, 996, 0, 0, 0, 0, 0, 997, 0, 0, 0, 0, 998, 0, 0, 0, 999, 0, 0, 0, 0, 0, 1000, 0,
    0, 0, 0, 0, 1001, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1002, 0, 0, 1003,
};
void recomp_unit_0196_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B14128u;
        entry_id = (entry_delta < 16084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0196[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B14128;
    case 2u: goto L_08B14130;
    case 3u: goto L_08B14140;
    case 4u: goto L_08B1414C;
    case 5u: goto L_08B1415C;
    case 6u: goto L_08B14170;
    case 7u: goto L_08B14188;
    case 8u: goto L_08B14198;
    case 9u: goto L_08B141B0;
    case 10u: goto L_08B141C8;
    case 11u: goto L_08B141D4;
    case 12u: goto L_08B141E4;
    case 13u: goto L_08B14208;
    case 14u: goto L_08B14210;
    case 15u: goto L_08B14224;
    case 16u: goto L_08B14248;
    case 17u: goto L_08B14254;
    case 18u: goto L_08B14264;
    case 19u: goto L_08B14278;
    case 20u: goto L_08B14284;
    case 21u: goto L_08B142A0;
    case 22u: goto L_08B142A8;
    case 23u: goto L_08B142D0;
    case 24u: goto L_08B142DC;
    case 25u: goto L_08B142E4;
    case 26u: goto L_08B142F0;
    case 27u: goto L_08B142FC;
    case 28u: goto L_08B14308;
    case 29u: goto L_08B14314;
    case 30u: goto L_08B14320;
    case 31u: goto L_08B14324;
    case 32u: goto L_08B1432C;
    case 33u: goto L_08B14334;
    case 34u: goto L_08B1433C;
    case 35u: goto L_08B14368;
    case 36u: goto L_08B14430;
    case 37u: goto L_08B14438;
    case 38u: goto L_08B14468;
    case 39u: goto L_08B14470;
    case 40u: goto L_08B14478;
    case 41u: goto L_08B1447C;
    case 42u: goto L_08B14484;
    case 43u: goto L_08B1448C;
    case 44u: goto L_08B14494;
    case 45u: goto L_08B1449C;
    case 46u: goto L_08B144A4;
    case 47u: goto L_08B144AC;
    case 48u: goto L_08B144B4;
    case 49u: goto L_08B144F0;
    case 50u: goto L_08B144F8;
    case 51u: goto L_08B14590;
    case 52u: goto L_08B14598;
    case 53u: goto L_08B145A0;
    case 54u: goto L_08B145B0;
    case 55u: goto L_08B145B8;
    case 56u: goto L_08B145C0;
    case 57u: goto L_08B145C8;
    case 58u: goto L_08B145D0;
    case 59u: goto L_08B145E8;
    case 60u: goto L_08B145F0;
    case 61u: goto L_08B145F8;
    case 62u: goto L_08B14600;
    case 63u: goto L_08B14618;
    case 64u: goto L_08B14620;
    case 65u: goto L_08B14628;
    case 66u: goto L_08B14630;
    case 67u: goto L_08B14640;
    case 68u: goto L_08B14660;
    case 69u: goto L_08B14690;
    case 70u: goto L_08B146A8;
    case 71u: goto L_08B146D0;
    case 72u: goto L_08B146D8;
    case 73u: goto L_08B146F4;
    case 74u: goto L_08B146F8;
    case 75u: goto L_08B14710;
    case 76u: goto L_08B14718;
    case 77u: goto L_08B14728;
    case 78u: goto L_08B14760;
    case 79u: goto L_08B1477C;
    case 80u: goto L_08B147AC;
    case 81u: goto L_08B147BC;
    case 82u: goto L_08B147C4;
    case 83u: goto L_08B147CC;
    case 84u: goto L_08B147F8;
    case 85u: goto L_08B1481C;
    case 86u: goto L_08B14830;
    case 87u: goto L_08B14844;
    case 88u: goto L_08B14870;
    case 89u: goto L_08B14884;
    case 90u: goto L_08B148A4;
    case 91u: goto L_08B148CC;
    case 92u: goto L_08B148EC;
    case 93u: goto L_08B1490C;
    case 94u: goto L_08B14938;
    case 95u: goto L_08B1493C;
    case 96u: goto L_08B14944;
    case 97u: goto L_08B14950;
    case 98u: goto L_08B1495C;
    case 99u: goto L_08B1497C;
    case 100u: goto L_08B14998;
    case 101u: goto L_08B149C0;
    case 102u: goto L_08B149EC;
    case 103u: goto L_08B14A30;
    case 104u: goto L_08B14A44;
    case 105u: goto L_08B14A60;
    case 106u: goto L_08B14A68;
    case 107u: goto L_08B14A70;
    case 108u: goto L_08B14A78;
    case 109u: goto L_08B14A80;
    case 110u: goto L_08B14A9C;
    case 111u: goto L_08B14AA4;
    case 112u: goto L_08B14AA8;
    case 113u: goto L_08B14AB8;
    case 114u: goto L_08B14AC8;
    case 115u: goto L_08B14B00;
    case 116u: goto L_08B14B18;
    case 117u: goto L_08B14B38;
    case 118u: goto L_08B14B44;
    case 119u: goto L_08B14B50;
    case 120u: goto L_08B14B58;
    case 121u: goto L_08B14B90;
    case 122u: goto L_08B14BA0;
    case 123u: goto L_08B14BB0;
    case 124u: goto L_08B14BC0;
    case 125u: goto L_08B14BC8;
    case 126u: goto L_08B14E38;
    case 127u: goto L_08B14E50;
    case 128u: goto L_08B14E7C;
    case 129u: goto L_08B14EA8;
    case 130u: goto L_08B14EBC;
    case 131u: goto L_08B14EFC;
    case 132u: goto L_08B14F04;
    case 133u: goto L_08B150F0;
    case 134u: goto L_08B15108;
    case 135u: goto L_08B15118;
    case 136u: goto L_08B1512C;
    case 137u: goto L_08B15140;
    case 138u: goto L_08B1514C;
    case 139u: goto L_08B15158;
    case 140u: goto L_08B15164;
    case 141u: goto L_08B15170;
    case 142u: goto L_08B1517C;
    case 143u: goto L_08B1518C;
    case 144u: goto L_08B15198;
    case 145u: goto L_08B151AC;
    case 146u: goto L_08B151B8;
    case 147u: goto L_08B151C4;
    case 148u: goto L_08B151D0;
    case 149u: goto L_08B151E0;
    case 150u: goto L_08B151EC;
    case 151u: goto L_08B15260;
    case 152u: goto L_08B15264;
    case 153u: goto L_08B1526C;
    case 154u: goto L_08B15274;
    case 155u: goto L_08B1527C;
    case 156u: goto L_08B15284;
    case 157u: goto L_08B1528C;
    case 158u: goto L_08B15294;
    case 159u: goto L_08B1529C;
    case 160u: goto L_08B152A4;
    case 161u: goto L_08B152B4;
    case 162u: goto L_08B152BC;
    case 163u: goto L_08B152C4;
    case 164u: goto L_08B152D0;
    case 165u: goto L_08B152D8;
    case 166u: goto L_08B152E0;
    case 167u: goto L_08B152EC;
    case 168u: goto L_08B152F8;
    case 169u: goto L_08B15300;
    case 170u: goto L_08B15308;
    case 171u: goto L_08B15314;
    case 172u: goto L_08B1531C;
    case 173u: goto L_08B15324;
    case 174u: goto L_08B1532C;
    case 175u: goto L_08B15334;
    case 176u: goto L_08B15340;
    case 177u: goto L_08B1534C;
    case 178u: goto L_08B15354;
    case 179u: goto L_08B1535C;
    case 180u: goto L_08B15364;
    case 181u: goto L_08B15370;
    case 182u: goto L_08B15378;
    case 183u: goto L_08B15380;
    case 184u: goto L_08B1538C;
    case 185u: goto L_08B15394;
    case 186u: goto L_08B1539C;
    case 187u: goto L_08B153A4;
    case 188u: goto L_08B153AC;
    case 189u: goto L_08B153B4;
    case 190u: goto L_08B153BC;
    case 191u: goto L_08B153C4;
    case 192u: goto L_08B153D0;
    case 193u: goto L_08B153D8;
    case 194u: goto L_08B153E0;
    case 195u: goto L_08B153E8;
    case 196u: goto L_08B153F0;
    case 197u: goto L_08B153F8;
    case 198u: goto L_08B15400;
    case 199u: goto L_08B15408;
    case 200u: goto L_08B15410;
    case 201u: goto L_08B1541C;
    case 202u: goto L_08B15424;
    case 203u: goto L_08B1542C;
    case 204u: goto L_08B15434;
    case 205u: goto L_08B1543C;
    case 206u: goto L_08B15444;
    case 207u: goto L_08B15450;
    case 208u: goto L_08B1545C;
    case 209u: goto L_08B15464;
    case 210u: goto L_08B15468;
    case 211u: goto L_08B15470;
    case 212u: goto L_08B15478;
    case 213u: goto L_08B15484;
    case 214u: goto L_08B15490;
    case 215u: goto L_08B1549C;
    case 216u: goto L_08B154A8;
    case 217u: goto L_08B154B4;
    case 218u: goto L_08B154BC;
    case 219u: goto L_08B154C0;
    case 220u: goto L_08B154CC;
    case 221u: goto L_08B154D4;
    case 222u: goto L_08B154DC;
    case 223u: goto L_08B154E0;
    case 224u: goto L_08B154E8;
    case 225u: goto L_08B154F0;
    case 226u: goto L_08B154F8;
    case 227u: goto L_08B15500;
    case 228u: goto L_08B15508;
    case 229u: goto L_08B15510;
    case 230u: goto L_08B15518;
    case 231u: goto L_08B15520;
    case 232u: goto L_08B15528;
    case 233u: goto L_08B15534;
    case 234u: goto L_08B1553C;
    case 235u: goto L_08B15548;
    case 236u: goto L_08B15550;
    case 237u: goto L_08B1555C;
    case 238u: goto L_08B1556C;
    case 239u: goto L_08B15578;
    case 240u: goto L_08B15584;
    case 241u: goto L_08B155B8;
    case 242u: goto L_08B155C4;
    case 243u: goto L_08B155CC;
    case 244u: goto L_08B155D0;
    case 245u: goto L_08B155E0;
    case 246u: goto L_08B155EC;
    case 247u: goto L_08B155F8;
    case 248u: goto L_08B15600;
    case 249u: goto L_08B15604;
    case 250u: goto L_08B1560C;
    case 251u: goto L_08B15610;
    case 252u: goto L_08B1561C;
    case 253u: goto L_08B15628;
    case 254u: goto L_08B15634;
    case 255u: goto L_08B15640;
    case 256u: goto L_08B1564C;
    case 257u: goto L_08B15658;
    case 258u: goto L_08B1565C;
    case 259u: goto L_08B15668;
    case 260u: goto L_08B1566C;
    case 261u: goto L_08B15678;
    case 262u: goto L_08B1567C;
    case 263u: goto L_08B15688;
    case 264u: goto L_08B1568C;
    case 265u: goto L_08B15698;
    case 266u: goto L_08B1569C;
    case 267u: goto L_08B156A8;
    case 268u: goto L_08B156AC;
    case 269u: goto L_08B156B8;
    case 270u: goto L_08B156BC;
    case 271u: goto L_08B156CC;
    case 272u: goto L_08B156D8;
    case 273u: goto L_08B156DC;
    case 274u: goto L_08B156E8;
    case 275u: goto L_08B156F4;
    case 276u: goto L_08B156F8;
    case 277u: goto L_08B15704;
    case 278u: goto L_08B1570C;
    case 279u: goto L_08B15714;
    case 280u: goto L_08B1571C;
    case 281u: goto L_08B15720;
    case 282u: goto L_08B15728;
    case 283u: goto L_08B1572C;
    case 284u: goto L_08B15734;
    case 285u: goto L_08B15738;
    case 286u: goto L_08B15740;
    case 287u: goto L_08B15748;
    case 288u: goto L_08B1574C;
    case 289u: goto L_08B15754;
    case 290u: goto L_08B15760;
    case 291u: goto L_08B15768;
    case 292u: goto L_08B1576C;
    case 293u: goto L_08B15778;
    case 294u: goto L_08B15780;
    case 295u: goto L_08B15784;
    case 296u: goto L_08B15790;
    case 297u: goto L_08B1579C;
    case 298u: goto L_08B157A8;
    case 299u: goto L_08B157B4;
    case 300u: goto L_08B157BC;
    case 301u: goto L_08B157C4;
    case 302u: goto L_08B157D0;
    case 303u: goto L_08B157DC;
    case 304u: goto L_08B157E8;
    case 305u: goto L_08B157F4;
    case 306u: goto L_08B157FC;
    case 307u: goto L_08B15800;
    case 308u: goto L_08B15808;
    case 309u: goto L_08B1580C;
    case 310u: goto L_08B15814;
    case 311u: goto L_08B1581C;
    case 312u: goto L_08B15824;
    case 313u: goto L_08B1582C;
    case 314u: goto L_08B15834;
    case 315u: goto L_08B1583C;
    case 316u: goto L_08B15844;
    case 317u: goto L_08B15848;
    case 318u: goto L_08B15850;
    case 319u: goto L_08B15858;
    case 320u: goto L_08B15864;
    case 321u: goto L_08B1586C;
    case 322u: goto L_08B15874;
    case 323u: goto L_08B15880;
    case 324u: goto L_08B15884;
    case 325u: goto L_08B1588C;
    case 326u: goto L_08B15894;
    case 327u: goto L_08B1589C;
    case 328u: goto L_08B158A4;
    case 329u: goto L_08B158AC;
    case 330u: goto L_08B158B4;
    case 331u: goto L_08B158BC;
    case 332u: goto L_08B158C4;
    case 333u: goto L_08B158CC;
    case 334u: goto L_08B158D0;
    case 335u: goto L_08B158D8;
    case 336u: goto L_08B158DC;
    case 337u: goto L_08B158E4;
    case 338u: goto L_08B158EC;
    case 339u: goto L_08B158F4;
    case 340u: goto L_08B158FC;
    case 341u: goto L_08B15904;
    case 342u: goto L_08B1590C;
    case 343u: goto L_08B15914;
    case 344u: goto L_08B15920;
    case 345u: goto L_08B15928;
    case 346u: goto L_08B15930;
    case 347u: goto L_08B15938;
    case 348u: goto L_08B15944;
    case 349u: goto L_08B1594C;
    case 350u: goto L_08B15954;
    case 351u: goto L_08B1595C;
    case 352u: goto L_08B15964;
    case 353u: goto L_08B1596C;
    case 354u: goto L_08B15978;
    case 355u: goto L_08B15980;
    case 356u: goto L_08B1598C;
    case 357u: goto L_08B15994;
    case 358u: goto L_08B1599C;
    case 359u: goto L_08B159A4;
    case 360u: goto L_08B159AC;
    case 361u: goto L_08B159B4;
    case 362u: goto L_08B159BC;
    case 363u: goto L_08B159C4;
    case 364u: goto L_08B159CC;
    case 365u: goto L_08B159D4;
    case 366u: goto L_08B159DC;
    case 367u: goto L_08B159E4;
    case 368u: goto L_08B159EC;
    case 369u: goto L_08B159F4;
    case 370u: goto L_08B159FC;
    case 371u: goto L_08B15A04;
    case 372u: goto L_08B15A0C;
    case 373u: goto L_08B15A14;
    case 374u: goto L_08B15A1C;
    case 375u: goto L_08B15A24;
    case 376u: goto L_08B15A30;
    case 377u: goto L_08B15A38;
    case 378u: goto L_08B15A40;
    case 379u: goto L_08B15A48;
    case 380u: goto L_08B15A54;
    case 381u: goto L_08B15A5C;
    case 382u: goto L_08B15A64;
    case 383u: goto L_08B15A6C;
    case 384u: goto L_08B15A74;
    case 385u: goto L_08B15A7C;
    case 386u: goto L_08B15A88;
    case 387u: goto L_08B15A90;
    case 388u: goto L_08B15A9C;
    case 389u: goto L_08B15AA4;
    case 390u: goto L_08B15AAC;
    case 391u: goto L_08B15AB4;
    case 392u: goto L_08B15AC0;
    case 393u: goto L_08B15AC8;
    case 394u: goto L_08B15AD0;
    case 395u: goto L_08B15AD4;
    case 396u: goto L_08B15ADC;
    case 397u: goto L_08B15AE0;
    case 398u: goto L_08B15AE8;
    case 399u: goto L_08B15AEC;
    case 400u: goto L_08B15AF4;
    case 401u: goto L_08B15AFC;
    case 402u: goto L_08B15B08;
    case 403u: goto L_08B15B14;
    case 404u: goto L_08B15B20;
    case 405u: goto L_08B15B2C;
    case 406u: goto L_08B15B38;
    case 407u: goto L_08B15B44;
    case 408u: goto L_08B15B4C;
    case 409u: goto L_08B15B54;
    case 410u: goto L_08B15B58;
    case 411u: goto L_08B15B60;
    case 412u: goto L_08B15B68;
    case 413u: goto L_08B15B70;
    case 414u: goto L_08B15B78;
    case 415u: goto L_08B15B80;
    case 416u: goto L_08B15B88;
    case 417u: goto L_08B15B98;
    case 418u: goto L_08B15BA8;
    case 419u: goto L_08B15BB8;
    case 420u: goto L_08B15BC4;
    case 421u: goto L_08B15BC8;
    case 422u: goto L_08B15BD4;
    case 423u: goto L_08B15BE0;
    case 424u: goto L_08B15BEC;
    case 425u: goto L_08B15BF4;
    case 426u: goto L_08B15BFC;
    case 427u: goto L_08B15C04;
    case 428u: goto L_08B15C0C;
    case 429u: goto L_08B15C14;
    case 430u: goto L_08B15C1C;
    case 431u: goto L_08B15C24;
    case 432u: goto L_08B15C2C;
    case 433u: goto L_08B15C38;
    case 434u: goto L_08B15C48;
    case 435u: goto L_08B15C50;
    case 436u: goto L_08B15C58;
    case 437u: goto L_08B15C60;
    case 438u: goto L_08B15C68;
    case 439u: goto L_08B15C70;
    case 440u: goto L_08B15C78;
    case 441u: goto L_08B15C80;
    case 442u: goto L_08B15C8C;
    case 443u: goto L_08B15C94;
    case 444u: goto L_08B15C98;
    case 445u: goto L_08B15CA0;
    case 446u: goto L_08B15CA4;
    case 447u: goto L_08B15CAC;
    case 448u: goto L_08B15CB0;
    case 449u: goto L_08B15CBC;
    case 450u: goto L_08B15CC8;
    case 451u: goto L_08B15CD4;
    case 452u: goto L_08B15CE4;
    case 453u: goto L_08B15CF0;
    case 454u: goto L_08B15CFC;
    case 455u: goto L_08B15D04;
    case 456u: goto L_08B15D0C;
    case 457u: goto L_08B15D1C;
    case 458u: goto L_08B15D2C;
    case 459u: goto L_08B15D38;
    case 460u: goto L_08B15D44;
    case 461u: goto L_08B15D50;
    case 462u: goto L_08B15D58;
    case 463u: goto L_08B15D64;
    case 464u: goto L_08B15D70;
    case 465u: goto L_08B15D78;
    case 466u: goto L_08B15D80;
    case 467u: goto L_08B15D90;
    case 468u: goto L_08B15D98;
    case 469u: goto L_08B15DA4;
    case 470u: goto L_08B15DAC;
    case 471u: goto L_08B15DB8;
    case 472u: goto L_08B15DC4;
    case 473u: goto L_08B15DD0;
    case 474u: goto L_08B15DD8;
    case 475u: goto L_08B15DDC;
    case 476u: goto L_08B15DE4;
    case 477u: goto L_08B15DEC;
    case 478u: goto L_08B15DF0;
    case 479u: goto L_08B15DF4;
    case 480u: goto L_08B15DFC;
    case 481u: goto L_08B15E08;
    case 482u: goto L_08B15E14;
    case 483u: goto L_08B15E20;
    case 484u: goto L_08B15E2C;
    case 485u: goto L_08B15E38;
    case 486u: goto L_08B15E40;
    case 487u: goto L_08B15E44;
    case 488u: goto L_08B15E4C;
    case 489u: goto L_08B15E50;
    case 490u: goto L_08B15E58;
    case 491u: goto L_08B15E5C;
    case 492u: goto L_08B15E64;
    case 493u: goto L_08B15E68;
    case 494u: goto L_08B15E70;
    case 495u: goto L_08B15E74;
    case 496u: goto L_08B15E7C;
    case 497u: goto L_08B15E80;
    case 498u: goto L_08B15E88;
    case 499u: goto L_08B15E8C;
    case 500u: goto L_08B15E94;
    case 501u: goto L_08B15E98;
    case 502u: goto L_08B15EA4;
    case 503u: goto L_08B15EB0;
    case 504u: goto L_08B15EBC;
    case 505u: goto L_08B15EC8;
    case 506u: goto L_08B15ED4;
    case 507u: goto L_08B15EE0;
    case 508u: goto L_08B15EF0;
    case 509u: goto L_08B15F00;
    case 510u: goto L_08B15F10;
    case 511u: goto L_08B15F1C;
    case 512u: goto L_08B15F28;
    case 513u: goto L_08B15F38;
    case 514u: goto L_08B15F48;
    case 515u: goto L_08B15F5C;
    case 516u: goto L_08B15F70;
    case 517u: goto L_08B15F84;
    case 518u: goto L_08B15F94;
    case 519u: goto L_08B15FA4;
    case 520u: goto L_08B15FB0;
    case 521u: goto L_08B15FBC;
    case 522u: goto L_08B15FC8;
    case 523u: goto L_08B15FD4;
    case 524u: goto L_08B15FE0;
    case 525u: goto L_08B15FEC;
    case 526u: goto L_08B15FFC;
    case 527u: goto L_08B1600C;
    case 528u: goto L_08B1601C;
    case 529u: goto L_08B16028;
    case 530u: goto L_08B16034;
    case 531u: goto L_08B16044;
    case 532u: goto L_08B16054;
    case 533u: goto L_08B16068;
    case 534u: goto L_08B1607C;
    case 535u: goto L_08B16090;
    case 536u: goto L_08B160A0;
    case 537u: goto L_08B160B0;
    case 538u: goto L_08B160BC;
    case 539u: goto L_08B160C8;
    case 540u: goto L_08B160D4;
    case 541u: goto L_08B160E0;
    case 542u: goto L_08B160EC;
    case 543u: goto L_08B160F8;
    case 544u: goto L_08B16108;
    case 545u: goto L_08B16118;
    case 546u: goto L_08B16128;
    case 547u: goto L_08B16134;
    case 548u: goto L_08B16140;
    case 549u: goto L_08B16150;
    case 550u: goto L_08B16160;
    case 551u: goto L_08B16174;
    case 552u: goto L_08B16188;
    case 553u: goto L_08B1619C;
    case 554u: goto L_08B161AC;
    case 555u: goto L_08B161BC;
    case 556u: goto L_08B161C8;
    case 557u: goto L_08B161D4;
    case 558u: goto L_08B161E0;
    case 559u: goto L_08B161EC;
    case 560u: goto L_08B161F8;
    case 561u: goto L_08B16204;
    case 562u: goto L_08B16214;
    case 563u: goto L_08B16224;
    case 564u: goto L_08B16234;
    case 565u: goto L_08B16240;
    case 566u: goto L_08B1624C;
    case 567u: goto L_08B1625C;
    case 568u: goto L_08B1626C;
    case 569u: goto L_08B16280;
    case 570u: goto L_08B16294;
    case 571u: goto L_08B162A8;
    case 572u: goto L_08B162B8;
    case 573u: goto L_08B162C8;
    case 574u: goto L_08B162D0;
    case 575u: goto L_08B162D8;
    case 576u: goto L_08B162E0;
    case 577u: goto L_08B162E8;
    case 578u: goto L_08B162F4;
    case 579u: goto L_08B162FC;
    case 580u: goto L_08B16308;
    case 581u: goto L_08B16310;
    case 582u: goto L_08B16318;
    case 583u: goto L_08B16320;
    case 584u: goto L_08B16328;
    case 585u: goto L_08B16330;
    case 586u: goto L_08B16338;
    case 587u: goto L_08B16340;
    case 588u: goto L_08B16344;
    case 589u: goto L_08B1634C;
    case 590u: goto L_08B16354;
    case 591u: goto L_08B1635C;
    case 592u: goto L_08B16360;
    case 593u: goto L_08B16368;
    case 594u: goto L_08B16370;
    case 595u: goto L_08B1637C;
    case 596u: goto L_08B16388;
    case 597u: goto L_08B1639C;
    case 598u: goto L_08B163AC;
    case 599u: goto L_08B163C0;
    case 600u: goto L_08B163CC;
    case 601u: goto L_08B163E0;
    case 602u: goto L_08B163F0;
    case 603u: goto L_08B16404;
    case 604u: goto L_08B16410;
    case 605u: goto L_08B1641C;
    case 606u: goto L_08B16420;
    case 607u: goto L_08B1642C;
    case 608u: goto L_08B16434;
    case 609u: goto L_08B16440;
    case 610u: goto L_08B16454;
    case 611u: goto L_08B16464;
    case 612u: goto L_08B1646C;
    case 613u: goto L_08B16470;
    case 614u: goto L_08B16478;
    case 615u: goto L_08B16480;
    case 616u: goto L_08B16488;
    case 617u: goto L_08B1648C;
    case 618u: goto L_08B16494;
    case 619u: goto L_08B164A0;
    case 620u: goto L_08B164A8;
    case 621u: goto L_08B164AC;
    case 622u: goto L_08B164B4;
    case 623u: goto L_08B164BC;
    case 624u: goto L_08B164C4;
    case 625u: goto L_08B164C8;
    case 626u: goto L_08B164D0;
    case 627u: goto L_08B164DC;
    case 628u: goto L_08B164E8;
    case 629u: goto L_08B164FC;
    case 630u: goto L_08B16508;
    case 631u: goto L_08B1651C;
    case 632u: goto L_08B16524;
    case 633u: goto L_08B16528;
    case 634u: goto L_08B16530;
    case 635u: goto L_08B16534;
    case 636u: goto L_08B16540;
    case 637u: goto L_08B16550;
    case 638u: goto L_08B16558;
    case 639u: goto L_08B16560;
    case 640u: goto L_08B16568;
    case 641u: goto L_08B16574;
    case 642u: goto L_08B16580;
    case 643u: goto L_08B1658C;
    case 644u: goto L_08B1659C;
    case 645u: goto L_08B165A4;
    case 646u: goto L_08B165B0;
    case 647u: goto L_08B165BC;
    case 648u: goto L_08B165C8;
    case 649u: goto L_08B165D0;
    case 650u: goto L_08B165D4;
    case 651u: goto L_08B165DC;
    case 652u: goto L_08B165E4;
    case 653u: goto L_08B165EC;
    case 654u: goto L_08B165F4;
    case 655u: goto L_08B16600;
    case 656u: goto L_08B16610;
    case 657u: goto L_08B1661C;
    case 658u: goto L_08B1662C;
    case 659u: goto L_08B16638;
    case 660u: goto L_08B16648;
    case 661u: goto L_08B16654;
    case 662u: goto L_08B1665C;
    case 663u: goto L_08B16664;
    case 664u: goto L_08B1666C;
    case 665u: goto L_08B16674;
    case 666u: goto L_08B1667C;
    case 667u: goto L_08B16684;
    case 668u: goto L_08B1668C;
    case 669u: goto L_08B16698;
    case 670u: goto L_08B166A0;
    case 671u: goto L_08B166A4;
    case 672u: goto L_08B166B0;
    case 673u: goto L_08B166BC;
    case 674u: goto L_08B166C8;
    case 675u: goto L_08B166D0;
    case 676u: goto L_08B166D4;
    case 677u: goto L_08B166E4;
    case 678u: goto L_08B166F0;
    case 679u: goto L_08B16704;
    case 680u: goto L_08B1670C;
    case 681u: goto L_08B16710;
    case 682u: goto L_08B1671C;
    case 683u: goto L_08B16724;
    case 684u: goto L_08B16728;
    case 685u: goto L_08B1673C;
    case 686u: goto L_08B16750;
    case 687u: goto L_08B1675C;
    case 688u: goto L_08B16764;
    case 689u: goto L_08B16768;
    case 690u: goto L_08B16774;
    case 691u: goto L_08B16780;
    case 692u: goto L_08B16790;
    case 693u: goto L_08B1679C;
    case 694u: goto L_08B167A4;
    case 695u: goto L_08B167A8;
    case 696u: goto L_08B167BC;
    case 697u: goto L_08B167C8;
    case 698u: goto L_08B167D0;
    case 699u: goto L_08B167D4;
    case 700u: goto L_08B167E4;
    case 701u: goto L_08B167F0;
    case 702u: goto L_08B167F8;
    case 703u: goto L_08B167FC;
    case 704u: goto L_08B1680C;
    case 705u: goto L_08B16818;
    case 706u: goto L_08B16820;
    case 707u: goto L_08B16824;
    case 708u: goto L_08B16838;
    case 709u: goto L_08B16848;
    case 710u: goto L_08B1684C;
    case 711u: goto L_08B16854;
    case 712u: goto L_08B1685C;
    case 713u: goto L_08B16870;
    case 714u: goto L_08B16880;
    case 715u: goto L_08B16884;
    case 716u: goto L_08B1688C;
    case 717u: goto L_08B16894;
    case 718u: goto L_08B168A8;
    case 719u: goto L_08B168B8;
    case 720u: goto L_08B168BC;
    case 721u: goto L_08B168C4;
    case 722u: goto L_08B168D0;
    case 723u: goto L_08B168E4;
    case 724u: goto L_08B168EC;
    case 725u: goto L_08B168F8;
    case 726u: goto L_08B16904;
    case 727u: goto L_08B1690C;
    case 728u: goto L_08B16918;
    case 729u: goto L_08B16924;
    case 730u: goto L_08B16930;
    case 731u: goto L_08B16940;
    case 732u: goto L_08B16944;
    case 733u: goto L_08B16954;
    case 734u: goto L_08B16964;
    case 735u: goto L_08B16974;
    case 736u: goto L_08B16980;
    case 737u: goto L_08B16994;
    case 738u: goto L_08B169A0;
    case 739u: goto L_08B169B0;
    case 740u: goto L_08B169C0;
    case 741u: goto L_08B169CC;
    case 742u: goto L_08B169D8;
    case 743u: goto L_08B169E8;
    case 744u: goto L_08B169F4;
    case 745u: goto L_08B16A08;
    case 746u: goto L_08B16A18;
    case 747u: goto L_08B16A28;
    case 748u: goto L_08B16A38;
    case 749u: goto L_08B16A44;
    case 750u: goto L_08B16A54;
    case 751u: goto L_08B16A64;
    case 752u: goto L_08B16A78;
    case 753u: goto L_08B16A8C;
    case 754u: goto L_08B16AA0;
    case 755u: goto L_08B16AB0;
    case 756u: goto L_08B16AB4;
    case 757u: goto L_08B16AC4;
    case 758u: goto L_08B16AC8;
    case 759u: goto L_08B16AD8;
    case 760u: goto L_08B16AE8;
    case 761u: goto L_08B16AF8;
    case 762u: goto L_08B16B0C;
    case 763u: goto L_08B16B20;
    case 764u: goto L_08B16B30;
    case 765u: goto L_08B16B44;
    case 766u: goto L_08B16B50;
    case 767u: goto L_08B16B60;
    case 768u: goto L_08B16B64;
    case 769u: goto L_08B16B74;
    case 770u: goto L_08B16B84;
    case 771u: goto L_08B16B94;
    case 772u: goto L_08B16BA4;
    case 773u: goto L_08B16BB0;
    case 774u: goto L_08B16BBC;
    case 775u: goto L_08B16BC8;
    case 776u: goto L_08B16BD4;
    case 777u: goto L_08B16BE8;
    case 778u: goto L_08B16BF8;
    case 779u: goto L_08B16C00;
    case 780u: goto L_08B16C04;
    case 781u: goto L_08B16C10;
    case 782u: goto L_08B16C1C;
    case 783u: goto L_08B16C20;
    case 784u: goto L_08B16C28;
    case 785u: goto L_08B16C30;
    case 786u: goto L_08B16C34;
    case 787u: goto L_08B16C40;
    case 788u: goto L_08B16C4C;
    case 789u: goto L_08B16C5C;
    case 790u: goto L_08B16C68;
    case 791u: goto L_08B16C70;
    case 792u: goto L_08B16C74;
    case 793u: goto L_08B16C7C;
    case 794u: goto L_08B16C80;
    case 795u: goto L_08B16C90;
    case 796u: goto L_08B16C9C;
    case 797u: goto L_08B16CB0;
    case 798u: goto L_08B16CC0;
    case 799u: goto L_08B16CD0;
    case 800u: goto L_08B16CE0;
    case 801u: goto L_08B16CF0;
    case 802u: goto L_08B16CF8;
    case 803u: goto L_08B16CFC;
    case 804u: goto L_08B16D08;
    case 805u: goto L_08B16D18;
    case 806u: goto L_08B16D24;
    case 807u: goto L_08B16D28;
    case 808u: goto L_08B16D2C;
    case 809u: goto L_08B16D30;
    case 810u: goto L_08B16D38;
    case 811u: goto L_08B16D40;
    case 812u: goto L_08B16D48;
    case 813u: goto L_08B16D50;
    case 814u: goto L_08B16D58;
    case 815u: goto L_08B16D60;
    case 816u: goto L_08B16D6C;
    case 817u: goto L_08B16D74;
    case 818u: goto L_08B16D80;
    case 819u: goto L_08B16D8C;
    case 820u: goto L_08B16D98;
    case 821u: goto L_08B16DA0;
    case 822u: goto L_08B16DA8;
    case 823u: goto L_08B16DB0;
    case 824u: goto L_08B16DB8;
    case 825u: goto L_08B16DBC;
    case 826u: goto L_08B16DC0;
    case 827u: goto L_08B16DC8;
    case 828u: goto L_08B16DCC;
    case 829u: goto L_08B16DD4;
    case 830u: goto L_08B16DDC;
    case 831u: goto L_08B16DE4;
    case 832u: goto L_08B16DF0;
    case 833u: goto L_08B16DF8;
    case 834u: goto L_08B16E04;
    case 835u: goto L_08B16E10;
    case 836u: goto L_08B16E18;
    case 837u: goto L_08B16E20;
    case 838u: goto L_08B16E28;
    case 839u: goto L_08B16E38;
    case 840u: goto L_08B16E48;
    case 841u: goto L_08B16E58;
    case 842u: goto L_08B16E64;
    case 843u: goto L_08B16E6C;
    case 844u: goto L_08B16E78;
    case 845u: goto L_08B16E80;
    case 846u: goto L_08B16E88;
    case 847u: goto L_08B16E90;
    case 848u: goto L_08B16E98;
    case 849u: goto L_08B16EA0;
    case 850u: goto L_08B16EAC;
    case 851u: goto L_08B16EB4;
    case 852u: goto L_08B16EBC;
    case 853u: goto L_08B16EC8;
    case 854u: goto L_08B16ED4;
    case 855u: goto L_08B16EE0;
    case 856u: goto L_08B16EEC;
    case 857u: goto L_08B16EF8;
    case 858u: goto L_08B16F04;
    case 859u: goto L_08B16F10;
    case 860u: goto L_08B16F18;
    case 861u: goto L_08B16F24;
    case 862u: goto L_08B16F30;
    case 863u: goto L_08B16F3C;
    case 864u: goto L_08B16F48;
    case 865u: goto L_08B16F54;
    case 866u: goto L_08B16F60;
    case 867u: goto L_08B16F68;
    case 868u: goto L_08B16F6C;
    case 869u: goto L_08B16F70;
    case 870u: goto L_08B16F78;
    case 871u: goto L_08B16F80;
    case 872u: goto L_08B16F88;
    case 873u: goto L_08B16F90;
    case 874u: goto L_08B16F98;
    case 875u: goto L_08B16FA0;
    case 876u: goto L_08B16FA8;
    case 877u: goto L_08B16FB0;
    case 878u: goto L_08B16FB8;
    case 879u: goto L_08B16FC0;
    case 880u: goto L_08B16FC8;
    case 881u: goto L_08B16FD0;
    case 882u: goto L_08B16FD8;
    case 883u: goto L_08B16FE0;
    case 884u: goto L_08B16FE8;
    case 885u: goto L_08B16FF0;
    case 886u: goto L_08B16FF8;
    case 887u: goto L_08B17000;
    case 888u: goto L_08B17008;
    case 889u: goto L_08B17010;
    case 890u: goto L_08B17018;
    case 891u: goto L_08B17020;
    case 892u: goto L_08B17028;
    case 893u: goto L_08B17030;
    case 894u: goto L_08B17038;
    case 895u: goto L_08B17040;
    case 896u: goto L_08B17048;
    case 897u: goto L_08B1705C;
    case 898u: goto L_08B17068;
    case 899u: goto L_08B17074;
    case 900u: goto L_08B1707C;
    case 901u: goto L_08B17088;
    case 902u: goto L_08B1709C;
    case 903u: goto L_08B170A8;
    case 904u: goto L_08B170B4;
    case 905u: goto L_08B170BC;
    case 906u: goto L_08B170C8;
    case 907u: goto L_08B170D0;
    case 908u: goto L_08B170D8;
    case 909u: goto L_08B170E0;
    case 910u: goto L_08B170E8;
    case 911u: goto L_08B170F0;
    case 912u: goto L_08B1724C;
    case 913u: goto L_08B1726C;
    case 914u: goto L_08B173BC;
    case 915u: goto L_08B17410;
    case 916u: goto L_08B17418;
    case 917u: goto L_08B17424;
    case 918u: goto L_08B1743C;
    case 919u: goto L_08B17444;
    case 920u: goto L_08B1744C;
    case 921u: goto L_08B17458;
    case 922u: goto L_08B17464;
    case 923u: goto L_08B17468;
    case 924u: goto L_08B17470;
    case 925u: goto L_08B17474;
    case 926u: goto L_08B17494;
    case 927u: goto L_08B174AC;
    case 928u: goto L_08B174B8;
    case 929u: goto L_08B174C8;
    case 930u: goto L_08B174DC;
    case 931u: goto L_08B174E0;
    case 932u: goto L_08B174F8;
    case 933u: goto L_08B17504;
    case 934u: goto L_08B17510;
    case 935u: goto L_08B17520;
    case 936u: goto L_08B1752C;
    case 937u: goto L_08B1753C;
    case 938u: goto L_08B17548;
    case 939u: goto L_08B17550;
    case 940u: goto L_08B17560;
    case 941u: goto L_08B17568;
    case 942u: goto L_08B17578;
    case 943u: goto L_08B17588;
    case 944u: goto L_08B17598;
    case 945u: goto L_08B175C0;
    case 946u: goto L_08B175D0;
    case 947u: goto L_08B175D8;
    case 948u: goto L_08B175E0;
    case 949u: goto L_08B175E8;
    case 950u: goto L_08B175F0;
    case 951u: goto L_08B175F8;
    case 952u: goto L_08B17600;
    case 953u: goto L_08B17608;
    case 954u: goto L_08B17610;
    case 955u: goto L_08B17618;
    case 956u: goto L_08B17620;
    case 957u: goto L_08B17628;
    case 958u: goto L_08B17630;
    case 959u: goto L_08B17638;
    case 960u: goto L_08B17640;
    case 961u: goto L_08B17648;
    case 962u: goto L_08B17650;
    case 963u: goto L_08B17668;
    case 964u: goto L_08B17670;
    case 965u: goto L_08B17674;
    case 966u: goto L_08B17698;
    case 967u: goto L_08B176A0;
    case 968u: goto L_08B176A8;
    case 969u: goto L_08B176C0;
    case 970u: goto L_08B176C8;
    case 971u: goto L_08B176D0;
    case 972u: goto L_08B176D8;
    case 973u: goto L_08B179FC;
    case 974u: goto L_08B17C78;
    case 975u: goto L_08B17CA0;
    case 976u: goto L_08B17D68;
    case 977u: goto L_08B17D80;
    case 978u: goto L_08B17D90;
    case 979u: goto L_08B17D9C;
    case 980u: goto L_08B17DA4;
    case 981u: goto L_08B17DC0;
    case 982u: goto L_08B17DE0;
    case 983u: goto L_08B17E1C;
    case 984u: goto L_08B17E40;
    case 985u: goto L_08B17E4C;
    case 986u: goto L_08B17E64;
    case 987u: goto L_08B17E8C;
    case 988u: goto L_08B17EB8;
    case 989u: goto L_08B17EF0;
    case 990u: goto L_08B17F0C;
    case 991u: goto L_08B17F1C;
    case 992u: goto L_08B17F24;
    case 993u: goto L_08B17F28;
    case 994u: goto L_08B17F34;
    case 995u: goto L_08B17F40;
    case 996u: goto L_08B17F4C;
    case 997u: goto L_08B17F64;
    case 998u: goto L_08B17F78;
    case 999u: goto L_08B17F88;
    case 1000u: goto L_08B17FA0;
    case 1001u: goto L_08B17FB8;
    case 1002u: goto L_08B17FEC;
    case 1003u: goto L_08B17FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B14128:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B1412Cu, 0x00006576u, "special? not lowered yet"); return;
L_08B14130:
    ctx.execute_vfpu_compare3(73u, 115u, 67u, 1u, 6u);
    rt.unsupported(0x08B14134u, 0x63656C6Cu, "vfpu0 not lowered yet"); return;
L_08B14140:
    rt.unsupported(0x08B14140u, 0x69736F50u, "unknown not lowered yet"); return;
L_08B1414C:
    rt.unsupported(0x08B1414Cu, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08B1415C:
    rt.unsupported(0x08B1415Cu, 0x73656F44u, "unknown not lowered yet"); return;
L_08B14170:
    ctx.execute_vfpu_vscl_ct<82u, 101u, 103u, 1u>();
    rt.unsupported(0x08B14174u, 0x6172656Eu, "vfpu0 not lowered yet"); return;
L_08B14188:
    rt.unsupported(0x08B14188u, 0x6B636970u, "unknown not lowered yet"); return;
L_08B14198:
    rt.unsupported(0x08B14198u, 0x74636576u, "unknown not lowered yet"); return;
L_08B141B0:
    rt.unsupported(0x08B141B0u, 0x6E696472u, "vfpu3 not lowered yet"); return;
L_08B141C8:
    rt.unsupported(0x08B141C8u, 0x76206F6Eu, "unknown not lowered yet"); return;
L_08B141D4:
    rt.unsupported(0x08B141D4u, 0x0000003Fu, "special? not lowered yet"); return;
L_08B141E4:
    // nop
    rt.unsupported(0x08B141ECu, 0x0890BBD8u, "control flow in delay slot"); return;
L_08B14208:
    if (ctx.gpr[25] == 0u) {
    rt.unsupported(0x08B1420Cu, 0x45434150u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1113u, 0x08B27F44u>(ctx, &aot_mem); return;
    }
    goto L_08B14210;
L_08B14210:
    rt.unsupported(0x08B14210u, 0x46454C20u, "cop1? not lowered yet"); return;
L_08B14224:
    rt.unsupported(0x08B14224u, 0x44205245u, "cop1? not lowered yet"); return;
L_08B14248:
    rt.unsupported(0x08B14248u, 0x74726170u, "unknown not lowered yet"); return;
L_08B14254:
    ctx.execute_vfpu_vscl_ct<119u, 97u, 116u, 1u>();
    ctx.execute_vfpu_vscl_ct<114u, 99u, 108u, 1u>();
    ctx.gpr[18] = (ctx.gpr[9] | 29281u);
    rt.unsupported(0x08B14260u, 0x00000036u, "special? not lowered yet"); return;
L_08B14264:
    ctx.execute_vfpu_vscl_ct<119u, 97u, 116u, 1u>();
    ctx.execute_vfpu_vhdp(114u, 114u, 101u, 1u);
    rt.unsupported(0x08B1426Cu, 0x7463656Cu, "unknown not lowered yet"); return;
L_08B14278:
    ctx.execute_vfpu_vscl_ct<119u, 97u, 116u, 1u>();
    rt.unsupported(0x08B1427Cu, 0x6B617772u, "unknown not lowered yet"); return;
L_08B14284:
    ctx.execute_vfpu_vscl_ct<68u, 111u, 110u, 1u>();
    rt.unsupported(0x08B14288u, 0x696E4920u, "unknown not lowered yet"); return;
L_08B142A0:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    rt.unsupported(0x08B142A4u, 0x4D203A47u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1102u, 0x08B27BA8u>(ctx, &aot_mem); return;
    }
    goto L_08B142A8;
L_08B142A8:
    rt.unsupported(0x08B142A8u, 0x2045564Fu, "unknown not lowered yet"); return;
L_08B142D0:
    // nop
    rt.unsupported(0x08B142D4u, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B142DC:
    if (ctx.gpr[2] != ctx.gpr[24]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 796u, 0x08B25830u>(ctx, &aot_mem); return;
    }
    goto L_08B142E4;
L_08B142E4:
    rt.unsupported(0x08B142E4u, 0x4C474E45u, "unknown not lowered yet"); return;
L_08B142F0:
    rt.unsupported(0x08B142F0u, 0x4E455246u, "unknown not lowered yet"); return;
L_08B142FC:
    rt.unsupported(0x08B142FCu, 0x4D524547u, "unknown not lowered yet"); return;
L_08B14308:
    rt.unsupported(0x08B14308u, 0x4C415449u, "unknown not lowered yet"); return;
L_08B14314:
    rt.unsupported(0x08B14314u, 0x4E415053u, "unknown not lowered yet"); return;
L_08B14320:
    rt.unsupported(0x08B14320u, 0x00006272u, "special? not lowered yet"); return;
L_08B14324:
    rt.unsupported(0x08B14324u, 0x4C424154u, "unknown not lowered yet"); return;
L_08B1432C:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1071u, 0x08B27080u>(ctx, &aot_mem); return;
    }
    goto L_08B14334;
L_08B14334:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 675u, 0x08B25488u>(ctx, &aot_mem); return;
    }
    goto L_08B1433C;
L_08B1433C:
    rt.unsupported(0x08B1433Cu, 0x78655443u, "unknown not lowered yet"); return;
L_08B14368:
    rt.unsupported(0x08B14368u, 0x78655443u, "unknown not lowered yet"); return;
L_08B14430:
    rt.unsupported(0x08B14430u, 0x69617274u, "unknown not lowered yet"); return;
L_08B14438:
    rt.unsupported(0x08B14438u, 0x74746573u, "unknown not lowered yet"); return;
L_08B14468:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 21u));
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 35u, 0x08B28DBCu>(ctx, &aot_mem); return;
    }
    goto L_08B14470;
L_08B14470:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B14474u, 0x0058454Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 36u, 0x08B28DC4u>(ctx, &aot_mem); return;
    }
    goto L_08B14478;
L_08B14478:
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B14478u, 0x00000020u); return; } }
    goto L_08B1447C;
L_08B1447C:
    if (ctx.gpr[26] != ctx.gpr[2]) {
    rt.unsupported(0x08B14480u, 0x00345941u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 59u, 0x08B299CCu>(ctx, &aot_mem); return;
    }
    goto L_08B14484;
L_08B14484:
    if (ctx.gpr[26] != ctx.gpr[2]) {
    rt.unsupported(0x08B14488u, 0x00325941u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 60u, 0x08B299D4u>(ctx, &aot_mem); return;
    }
    goto L_08B1448C;
L_08B1448C:
    if (ctx.gpr[26] != ctx.gpr[2]) {
    rt.unsupported(0x08B14490u, 0x00315941u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 61u, 0x08B299DCu>(ctx, &aot_mem); return;
    }
    goto L_08B14494;
L_08B14494:
    if (ctx.gpr[26] != ctx.gpr[2]) {
    rt.unsupported(0x08B14498u, 0x00335941u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 62u, 0x08B299E4u>(ctx, &aot_mem); return;
    }
    goto L_08B1449C;
L_08B1449C:
    rt.unsupported(0x08B1449Cu, 0x49415254u, "cop2/vfpu not lowered yet"); return;
L_08B144A4:
    rt.unsupported(0x08B144A4u, 0x49415254u, "cop2/vfpu not lowered yet"); return;
L_08B144AC:
    rt.unsupported(0x08B144ACu, 0x49415254u, "cop2/vfpu not lowered yet"); return;
L_08B144B4:
    rt.unsupported(0x08B144B4u, 0x74696E69u, "unknown not lowered yet"); return;
L_08B144F0:
    rt.unsupported(0x08B144F0u, 0x736D762Du, "unknown not lowered yet"); return;
L_08B144F8:
    ctx.gpr[1] = (ctx.gpr[26] & 21575u);
    // nop
    rt.unsupported(0x08B14504u, 0x089174ECu, "control flow in delay slot"); return;
L_08B14590:
    ctx.gpr[26] = (ctx.gpr[9] + static_cast<std::uint32_t>(25637));
    rt.unsupported(0x08B14594u, 0x00643230u, "special? not lowered yet"); return;
L_08B14598:
    rt.unsupported(0x08B14598u, 0x454D4954u, "cop1? not lowered yet"); return;
L_08B145A0:
    rt.unsupported(0x08B145A0u, 0x45474150u, "cop1? not lowered yet"); return;
L_08B145B0:
    ctx.gpr[15] = (ctx.gpr[9] + static_cast<std::uint32_t>(25637));
    (void)(0u & 0u);
    goto L_08B145B8;
L_08B145B8:
    rt.unsupported(0x08B145B8u, 0x4C4C494Bu, "unknown not lowered yet"); return;
L_08B145C0:
    ctx.gpr[31] = (ctx.gpr[26] & 17995u);
    // nop
    goto L_08B145C8;
L_08B145C8:
    rt.unsupported(0x08B145C8u, 0x736D6973u, "unknown not lowered yet"); return;
L_08B145D0:
    rt.unsupported(0x08B145D0u, 0x2061754Cu, "unknown not lowered yet"); return;
L_08B145E8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_d); }
    // nop
    goto L_08B145F0;
L_08B145F0:
    rt.unsupported(0x08B145F0u, 0x69726373u, "unknown not lowered yet"); return;
L_08B145F8:
    rt.unsupported(0x08B145F8u, 0x69746361u, "unknown not lowered yet"); return;
L_08B14600:
    rt.unsupported(0x08B14600u, 0x2061754Cu, "unknown not lowered yet"); return;
L_08B14618:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_d); }
    // nop
    goto L_08B14620;
L_08B14620:
    rt.unsupported(0x08B14620u, 0x72617473u, "unknown not lowered yet"); return;
L_08B14628:
    rt.unsupported(0x08B14628u, 0x706F7473u, "unknown not lowered yet"); return;
L_08B14630:
    rt.unsupported(0x08B14630u, 0x70657473u, "unknown not lowered yet"); return;
L_08B14640:
    rt.unsupported(0x08B14640u, 0x74746553u, "unknown not lowered yet"); return;
L_08B14660:
    rt.unsupported(0x08B14660u, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B14690:
    rt.unsupported(0x08B14690u, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B146A8:
    rt.unsupported(0x08B146A8u, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B146D0:
    rt.unsupported(0x08B146D0u, 0x46464F20u, "cop1? not lowered yet"); return;
L_08B146D8:
    rt.unsupported(0x08B146D8u, 0x74746553u, "unknown not lowered yet"); return;
L_08B146F4:
    rt.unsupported(0x08B146F4u, 0x00000A29u, "special? not lowered yet"); return;
L_08B146F8:
    rt.unsupported(0x08B146F8u, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B14710:
    if (ctx.gpr[25] == 0u) {
    rt.unsupported(0x08B14714u, 0x20746E65u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 223u, 0x08B318E0u>(ctx, &aot_mem); return;
    }
    goto L_08B14718;
L_08B14718:
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(25673));
    rt.unsupported(0x08B1471Cu, 0x774F2064u, "unknown not lowered yet"); return;
L_08B14728:
    rt.unsupported(0x08B14728u, 0x4E207349u, "unknown not lowered yet"); return;
L_08B14760:
    rt.unsupported(0x08B14760u, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B1477C:
    rt.unsupported(0x08B1477Cu, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B147AC:
    rt.unsupported(0x08B147ACu, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B147BC:
    if (ctx.gpr[10] != ctx.gpr[11]) {
    rt.unsupported(0x08B147C0u, 0x69252050u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 687u, 0x08B254E4u>(ctx, &aot_mem); return;
    }
    goto L_08B147C4;
L_08B147C4:
    // nop
    ctx.pc = 0x09A494E8u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B147CC:
    rt.unsupported(0x08B147CCu, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B147F8:
    ctx.gpr[14] = (ctx.gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    rt.unsupported(0x08B147FCu, 0x444E4120u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B14800u, 0x20534920u, "unknown not lowered yet"); return;
L_08B1481C:
    ctx.gpr[14] = (ctx.gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    rt.unsupported(0x08B14820u, 0x444E4120u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B14824u, 0x20534920u, "unknown not lowered yet"); return;
L_08B14830:
    rt.unsupported(0x08B14830u, 0x44454B52u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B14834u, 0x20534120u, "unknown not lowered yet"); return;
L_08B14844:
    rt.unsupported(0x08B14844u, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B14870:
    rt.unsupported(0x08B14870u, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B14884:
    rt.unsupported(0x08B14884u, 0x69746F4Eu, "unknown not lowered yet"); return;
L_08B148A4:
    rt.unsupported(0x08B148A4u, 0x20746F4Eu, "unknown not lowered yet"); return;
L_08B148CC:
    rt.unsupported(0x08B148CCu, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B148EC:
    rt.unsupported(0x08B148ECu, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B1490C:
    rt.unsupported(0x08B1490Cu, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B14938:
    // nop
    goto L_08B1493C;
L_08B1493C:
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(25637));
    ctx.gpr[1] = (0u & 0u);
    goto L_08B14944;
L_08B14944:
    rt.unsupported(0x08B14944u, 0x4B434950u, "cop2/vfpu not lowered yet"); return;
L_08B14950:
    rt.unsupported(0x08B14950u, 0x2069253Au, "unknown not lowered yet"); return;
L_08B1495C:
    rt.unsupported(0x08B1495Cu, 0x74746553u, "unknown not lowered yet"); return;
L_08B1497C:
    rt.unsupported(0x08B1497Cu, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B14998:
    rt.unsupported(0x08B14998u, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B149C0:
    rt.unsupported(0x08B149C0u, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B149EC:
    rt.unsupported(0x08B149ECu, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B14A30:
    rt.unsupported(0x08B14A30u, 0x45574F50u, "cop1? not lowered yet"); return;
L_08B14A44:
    rt.unsupported(0x08B14A44u, 0x45574F50u, "cop1? not lowered yet"); return;
L_08B14A60:
    rt.unsupported(0x08B14A60u, 0x4D505550u, "unknown not lowered yet"); return;
L_08B14A68:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B14A6Cu, 0x004E4745u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 70u, 0x08B29FACu>(ctx, &aot_mem); return;
    }
    goto L_08B14A70;
L_08B14A70:
    rt.unsupported(0x08B14A70u, 0x49505550u, "cop2/vfpu not lowered yet"); return;
L_08B14A78:
    rt.unsupported(0x08B14A78u, 0x46505550u, "cop1? not lowered yet"); return;
L_08B14A80:
    rt.unsupported(0x08B14A80u, 0x6E69616Du, "vfpu3 not lowered yet"); return;
L_08B14A9C:
    if (ctx.gpr[2] == ctx.gpr[30]) {
    rt.unsupported(0x08B14AA0u, 0x4F435055u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 67u, 0x08B29C18u>(ctx, &aot_mem); return;
    }
    goto L_08B14AA4;
L_08B14AA4:
    rt.unsupported(0x08B14AA4u, 0x0029274Cu, "syscall not lowered yet"); return;
L_08B14AA8:
    rt.unsupported(0x08B14AA8u, 0x4B434950u, "cop2/vfpu not lowered yet"); return;
L_08B14AB8:
    rt.unsupported(0x08B14AB8u, 0x4B434950u, "cop2/vfpu not lowered yet"); return;
L_08B14AC8:
    rt.unsupported(0x08B14AC8u, 0x45574F50u, "cop1? not lowered yet"); return;
L_08B14B00:
    rt.unsupported(0x08B14B00u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B14B18:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 425u, 0x08A8A8A8u>(ctx, &aot_mem); return;
L_08B14B38:
    rt.unsupported(0x08B14B38u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B14B44:
    rt.unsupported(0x08B14B44u, 0x49205245u, "cop2/vfpu not lowered yet"); return;
L_08B14B50:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 23u, 0x08A8811Cu>(ctx, &aot_mem); return;
L_08B14B58:
    ctx.execute_vfpu_vminmax(67u, 84u, 105u, 1u, false);
    rt.unsupported(0x08B14B5Cu, 0x72207265u, "unknown not lowered yet"); return;
L_08B14B90:
    ctx.execute_vfpu_vscl_ct<67u, 84u, 114u, 1u>();
    rt.unsupported(0x08B14B94u, 0x62616461u, "vfpu0 not lowered yet"); return;
L_08B14BA0:
    rt.unsupported(0x08B14BA0u, 0x414F4C46u, "unknown not lowered yet"); return;
L_08B14BB0:
    rt.unsupported(0x08B14BB0u, 0x2044454Eu, "unknown not lowered yet"); return;
L_08B14BC0:
    if (ctx.gpr[18] == ctx.gpr[1]) {
    ctx.gpr[1] = (0u + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 799u, 0x08B25844u>(ctx, &aot_mem); return;
    }
    goto L_08B14BC8;
L_08B14BC8:
    rt.unsupported(0x08B14BCCu, 0x0891D690u, "control flow in delay slot"); return;
L_08B14E38:
    rt.unsupported(0x08B14E38u, 0x6E617254u, "vfpu3 not lowered yet"); return;
L_08B14E50:
    rt.unsupported(0x08B14E50u, 0x20726143u, "unknown not lowered yet"); return;
L_08B14E7C:
    rt.unsupported(0x08B14E7Cu, 0x20726143u, "unknown not lowered yet"); return;
L_08B14EA8:
    rt.unsupported(0x08B14EA8u, 0x6E617254u, "vfpu3 not lowered yet"); return;
L_08B14EBC:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 10537 ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 10537 ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 10537 ? 1u : 0u);
    rt.unsupported(0x08B14EC8u, 0x20292929u, "unknown not lowered yet"); return;
L_08B14EFC:
    if (ctx.gpr[18] != ctx.gpr[20]) {
    rt.unsupported(0x08B14F00u, 0x43494845u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 989u, 0x08B2644Cu>(ctx, &aot_mem); return;
    }
    goto L_08B14F04;
L_08B14F04:
    rt.unsupported(0x08B14F04u, 0x4E49454Cu, "unknown not lowered yet"); return;
L_08B150F0:
    rt.unsupported(0x08B150F0u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B15108:
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 4u>();
    rt.unsupported(0x08B1510Cu, 0x766F2065u, "unknown not lowered yet"); return;
L_08B15118:
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 4u>();
    rt.unsupported(0x08B1511Cu, 0x6E692065u, "vfpu3 not lowered yet"); return;
L_08B1512C:
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 4u>();
    rt.unsupported(0x08B15130u, 0x6E692065u, "vfpu3 not lowered yet"); return;
L_08B15140:
    rt.unsupported(0x08B15140u, 0x74726170u, "unknown not lowered yet"); return;
L_08B1514C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<104u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    rt.unsupported(0x08B15150u, 0x7261635Fu, "unknown not lowered yet"); return;
L_08B15158:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<104u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<112u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<95u, 1u>(vfpu_d); }
    // nop
    goto L_08B15164;
L_08B15164:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<104u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<104u, 101u, 1u, 15u>();
    rt.unsupported(0x08B1516Cu, 0x00000069u, "special? not lowered yet"); return;
L_08B15170:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<104u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    rt.unsupported(0x08B15174u, 0x6B69625Fu, "unknown not lowered yet"); return;
L_08B1517C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<104u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    rt.unsupported(0x08B15180u, 0x6263725Fu, "vfpu0 not lowered yet"); return;
L_08B1518C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<104u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    rt.unsupported(0x08B15190u, 0x7078655Fu, "unknown not lowered yet"); return;
L_08B15198:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1519Cu, 0x6867696Cu, "unknown not lowered yet"); return;
L_08B151AC:
    ctx.execute_vfpu_vcmp_ct<117u, 116u, 1u, 15u>();
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B151B4u, 0x00003436u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 81u, 0x08B30B58u>(ctx, &aot_mem); return;
    }
    goto L_08B151B8;
L_08B151B8:
    ctx.execute_vfpu_vcmp_ct<117u, 116u, 1u, 15u>();
    ctx.gpr[5] = (ctx.gpr[19] & 28265u);
    rt.unsupported(0x08B151C0u, 0x0034365Fu, "special? not lowered yet"); return;
L_08B151C4:
    ctx.execute_vfpu_vcmp_ct<117u, 116u, 1u, 15u>();
    ctx.gpr[5] = (ctx.gpr[27] & 28265u);
    rt.unsupported(0x08B151CCu, 0x0034365Fu, "special? not lowered yet"); return;
L_08B151D0:
    ctx.execute_vfpu_compare3(98u, 108u, 111u, 1u, 6u);
    ctx.execute_vfpu_compare3(100u, 112u, 111u, 1u, 6u);
    ctx.gpr[22] = (ctx.gpr[1] | 24428u);
    // nop
    goto L_08B151E0;
L_08B151E0:
    rt.unsupported(0x08B151E0u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B151EC:
    rt.unsupported(0x08B151ECu, 0x706D616Cu, "unknown not lowered yet"); return;
L_08B15260:
    rt.unsupported(0x08B15260u, 0x00646572u, "special? not lowered yet"); return;
L_08B15264:
    ctx.execute_vfpu_vscl_ct<103u, 114u, 101u, 1u>();
    rt.unsupported(0x08B15268u, 0x0000006Eu, "special? not lowered yet"); return;
L_08B1526C:
    ctx.execute_vfpu_vcmp_ct<101u, 108u, 1u, 9u>();
    rt.unsupported(0x08B15270u, 0x0000776Fu, "special? not lowered yet"); return;
L_08B15274:
    ctx.execute_vfpu_vscl_ct<98u, 108u, 117u, 1u>();
    // nop
    goto L_08B1527C;
L_08B1527C:
    rt.unsupported(0x08B1527Cu, 0x70727570u, "unknown not lowered yet"); return;
L_08B15284:
    ctx.execute_vfpu_vscl_ct<109u, 97u, 103u, 1u>();
    rt.unsupported(0x08B15288u, 0x0061746Eu, "special? not lowered yet"); return;
L_08B1528C:
    rt.unsupported(0x08B1528Cu, 0x6E617963u, "vfpu3 not lowered yet"); return;
L_08B15294:
    rt.unsupported(0x08B15294u, 0x74696877u, "unknown not lowered yet"); return;
L_08B1529C:
    ctx.execute_vfpu_compare3(99u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B152A0u, 0x00007275u, "special? not lowered yet"); return;
L_08B152A4:
    rt.unsupported(0x08B152A4u, 0x6B636F72u, "unknown not lowered yet"); return;
L_08B152B4:
    rt.unsupported(0x08B152B4u, 0x70616577u, "unknown not lowered yet"); return;
L_08B152BC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<112u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    ctx.gpr[14] = (0u | 0u);
    goto L_08B152C4;
L_08B152C4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<116u, 97u, 1u, 3u>();
    ctx.gpr[12] = (ctx.gpr[3] < ctx.gpr[18] ? 1u : 0u);
    goto L_08B152D0;
L_08B152D0:
    rt.unsupported(0x08B152D0u, 0x68616469u, "unknown not lowered yet"); return;
L_08B152D8:
    rt.unsupported(0x08B152D8u, 0x6E697473u, "vfpu3 not lowered yet"); return;
L_08B152E0:
    ctx.execute_vfpu_vscl_ct<112u, 101u, 114u, 1u>();
    rt.unsupported(0x08B152E4u, 0x61696E6Eu, "vfpu0 not lowered yet"); return;
L_08B152EC:
    rt.unsupported(0x08B152ECu, 0x746E6573u, "unknown not lowered yet"); return;
L_08B152F8:
    rt.unsupported(0x08B152F8u, 0x72746170u, "unknown not lowered yet"); return;
L_08B15300:
    rt.unsupported(0x08B15300u, 0x616E616Du, "vfpu0 not lowered yet"); return;
L_08B15308:
    ctx.execute_vfpu_vscl_ct<105u, 110u, 102u, 1u>();
    rt.unsupported(0x08B1530Cu, 0x73756E72u, "unknown not lowered yet"); return;
L_08B15314:
    rt.unsupported(0x08B15314u, 0x73696C62u, "unknown not lowered yet"); return;
L_08B1531C:
    rt.unsupported(0x08B1531Cu, 0x796E6F70u, "unknown not lowered yet"); return;
L_08B15324:
    ctx.execute_vfpu_vscl_ct<109u, 117u, 108u, 1u>();
    // nop
    goto L_08B1532C;
L_08B1532C:
    ctx.execute_vfpu_vscl_ct<99u, 104u, 101u, 1u>();
    rt.unsupported(0x08B15330u, 0x00686174u, "special? not lowered yet"); return;
L_08B15334:
    rt.unsupported(0x08B15334u, 0x6E6F6F6Du, "vfpu3 not lowered yet"); return;
L_08B15340:
    ctx.execute_vfpu_vscl_ct<101u, 115u, 112u, 1u>();
    rt.unsupported(0x08B15344u, 0x746E6172u, "unknown not lowered yet"); return;
L_08B1534C:
    rt.unsupported(0x08B1534Cu, 0x7572756Bu, "unknown not lowered yet"); return;
L_08B15354:
    rt.unsupported(0x08B15354u, 0x63626F62u, "vfpu0 not lowered yet"); return;
L_08B1535C:
    rt.unsupported(0x08B1535Cu, 0x70726F63u, "unknown not lowered yet"); return;
L_08B15364:
    rt.unsupported(0x08B15364u, 0x75636573u, "unknown not lowered yet"); return;
L_08B15370:
    rt.unsupported(0x08B15370u, 0x736E6162u, "unknown not lowered yet"); return;
L_08B15378:
    rt.unsupported(0x08B15378u, 0x62626163u, "vfpu0 not lowered yet"); return;
L_08B15380:
    ctx.execute_vfpu_vcmp_ct<116u, 97u, 1u, 3u>();
    rt.unsupported(0x08B15384u, 0x6E6F696Cu, "vfpu3 not lowered yet"); return;
L_08B1538C:
    rt.unsupported(0x08B1538Cu, 0x706D7572u, "unknown not lowered yet"); return;
L_08B15394:
    ctx.execute_vfpu_vcmp_ct<101u, 108u, 1u, 2u>();
    rt.unsupported(0x08B15398u, 0x00707579u, "special? not lowered yet"); return;
L_08B1539C:
    ctx.execute_vfpu_compare3(109u, 114u, 119u, 1u, 6u);
    rt.unsupported(0x08B153A0u, 0x0073676Eu, "special? not lowered yet"); return;
L_08B153A4:
    rt.unsupported(0x08B153A4u, 0x6966616Du, "unknown not lowered yet"); return;
L_08B153AC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<121u, 1u>(vfpu_d); }
    rt.unsupported(0x08B153B0u, 0x00006569u, "special? not lowered yet"); return;
L_08B153B4:
    rt.unsupported(0x08B153B4u, 0x756B6179u, "unknown not lowered yet"); return;
L_08B153BC:
    rt.unsupported(0x08B153BCu, 0x62616964u, "vfpu0 not lowered yet"); return;
L_08B153C4:
    rt.unsupported(0x08B153C4u, 0x756C6F63u, "unknown not lowered yet"); return;
L_08B153D0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    rt.unsupported(0x08B153D4u, 0x00000073u, "special? not lowered yet"); return;
L_08B153D8:
    ctx.execute_vfpu_vcmp_ct<97u, 110u, 1u, 0u>();
    ctx.gpr[13] = (ctx.gpr[3] + ctx.gpr[20]);
    goto L_08B153E0;
L_08B153E0:
    rt.unsupported(0x08B153E0u, 0x6B6E6179u, "unknown not lowered yet"); return;
L_08B153E8:
    ctx.execute_vfpu_vcmp_ct<104u, 101u, 1u, 3u>();
    { const bool signed_ok = ctx.execute_signed_sub(15u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B153ECu, 0x00007962u); return; } }
    goto L_08B153F0;
L_08B153F0:
    rt.unsupported(0x08B153F0u, 0x746E6F70u, "unknown not lowered yet"); return;
L_08B153F8:
    rt.unsupported(0x08B153F8u, 0x72707365u, "unknown not lowered yet"); return;
L_08B15400:
    rt.unsupported(0x08B15400u, 0x696E696Du, "unknown not lowered yet"); return;
L_08B15408:
    rt.unsupported(0x08B15408u, 0x72746F68u, "unknown not lowered yet"); return;
L_08B15410:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    ctx.execute_vfpu_compare3(97u, 99u, 99u, 1u, 6u);
    // nop
    goto L_08B1541C;
L_08B1541C:
    ctx.execute_vfpu_vscl_ct<102u, 111u, 114u, 1u>();
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[3]) > static_cast<std::int32_t>(ctx.gpr[9]) ? ctx.gpr[3] : ctx.gpr[9]);
    goto L_08B15424;
L_08B15424:
    ctx.execute_vfpu_vcmp_ct<101u, 108u, 1u, 8u>();
    rt.unsupported(0x08B15428u, 0x00000073u, "special? not lowered yet"); return;
L_08B1542C:
    ctx.execute_vfpu_vscl_ct<98u, 105u, 107u, 1u>();
    // nop
    goto L_08B15434;
L_08B15434:
    ctx.execute_vfpu_vscl_ct<109u, 111u, 112u, 1u>();
    (void)(0u & 0u);
    goto L_08B1543C;
L_08B1543C:
    ctx.execute_vfpu_vcmp_ct<97u, 114u, 1u, 8u>();
    ctx.gpr[15] = (0u | 0u);
    goto L_08B15444;
L_08B15444:
    rt.unsupported(0x08B15444u, 0x74726964u, "unknown not lowered yet"); return;
L_08B15450:
    rt.unsupported(0x08B15450u, 0x74726964u, "unknown not lowered yet"); return;
L_08B1545C:
    ctx.execute_vfpu_vcmp_ct<101u, 108u, 1u, 8u>();
    rt.unsupported(0x08B15460u, 0x00003273u, "special? not lowered yet"); return;
L_08B15464:
    ctx.gpr[12] = (ctx.gpr[3] - ctx.gpr[18]);
    goto L_08B15468;
L_08B15468:
    ctx.execute_vfpu_vcmp_ct<101u, 97u, 1u, 8u>();
    rt.unsupported(0x08B1546Cu, 0x00006874u, "special? not lowered yet"); return;
L_08B15470:
    ctx.execute_vfpu_compare3(97u, 114u, 109u, 1u, 6u);
    rt.unsupported(0x08B15474u, 0x00007275u, "special? not lowered yet"); return;
L_08B15478:
    ctx.execute_vfpu_vcmp_ct<105u, 108u, 1u, 11u>();
    rt.unsupported(0x08B1547Cu, 0x6E657266u, "vfpu3 not lowered yet"); return;
L_08B15484:
    rt.unsupported(0x08B15484u, 0x6167656Du, "vfpu0 not lowered yet"); return;
L_08B15490:
    ctx.execute_vfpu_vscl_ct<114u, 101u, 103u, 1u>();
    rt.unsupported(0x08B15494u, 0x6165686Eu, "vfpu0 not lowered yet"); return;
L_08B1549C:
    rt.unsupported(0x08B1549Cu, 0x69766E69u, "unknown not lowered yet"); return;
L_08B154A8:
    ctx.execute_vfpu_vscl_ct<114u, 97u, 99u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<103u, 1u>(vfpu_d); }
    // nop
    goto L_08B154B4;
L_08B154B4:
    ctx.execute_vfpu_vscl_ct<114u, 97u, 99u, 1u>();
    { const bool signed_ok = ctx.execute_signed_sub(12u, 3u, 4u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B154B8u, 0x00646162u); return; } }
    goto L_08B154BC;
L_08B154BC:
    { const bool signed_ok = ctx.execute_signed_sub(12u, 3u, 20u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B154BCu, 0x00746162u); return; } }
    goto L_08B154C0;
L_08B154C0:
    rt.unsupported(0x08B154C0u, 0x69616863u, "unknown not lowered yet"); return;
L_08B154CC:
    rt.unsupported(0x08B154CCu, 0x6E657267u, "vfpu3 not lowered yet"); return;
L_08B154D4:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B154D8u, 0x6E657267u, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 623u, 0x08B2EA68u>(ctx, &aot_mem); return;
    }
    goto L_08B154DC;
L_08B154DC:
    ctx.gpr[12] = (ctx.gpr[3] + ctx.gpr[5]);
    goto L_08B154E0;
L_08B154E0:
    ctx.execute_vfpu_compare3(109u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B154E4u, 0x00766F74u, "special? not lowered yet"); return;
L_08B154E8:
    rt.unsupported(0x08B154E8u, 0x636F6C67u, "vfpu0 not lowered yet"); return;
L_08B154F0:
    rt.unsupported(0x08B154F0u, 0x746F6873u, "unknown not lowered yet"); return;
L_08B154F8:
    ctx.gpr[3] = (ctx.gpr[11] ^ 25972u);
    // nop
    goto L_08B15500;
L_08B15500:
    ctx.gpr[20] = (ctx.gpr[25] | 27489u);
    // nop
    goto L_08B15508;
L_08B15508:
    rt.unsupported(0x08B15508u, 0x70696E73u, "unknown not lowered yet"); return;
L_08B15510:
    rt.unsupported(0x08B15510u, 0x6B636970u, "unknown not lowered yet"); return;
L_08B15518:
    ctx.execute_vfpu_vscl_ct<112u, 111u, 119u, 1u>();
    rt.unsupported(0x08B1551Cu, 0x00707572u, "special? not lowered yet"); return;
L_08B15520:
    ctx.execute_vfpu_vscl_ct<98u, 97u, 115u, 1u>();
    // nop
    goto L_08B15528;
L_08B15528:
    rt.unsupported(0x08B15528u, 0x63656863u, "vfpu0 not lowered yet"); return;
L_08B15534:
    rt.unsupported(0x08B15534u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B1553C:
    ctx.execute_vfpu_vscl_ct<111u, 98u, 106u, 1u>();
    rt.unsupported(0x08B15540u, 0x76697463u, "unknown not lowered yet"); return;
L_08B15548:
    rt.unsupported(0x08B15548u, 0x6B6E6174u, "unknown not lowered yet"); return;
L_08B15550:
    ctx.execute_vfpu_vcmp_ct<97u, 114u, 1u, 3u>();
    rt.unsupported(0x08B15554u, 0x756B636Fu, "unknown not lowered yet"); return;
L_08B1555C:
    rt.unsupported(0x08B1555Cu, 0x67726174u, "vfpu1 not lowered yet"); return;
L_08B1556C:
    rt.unsupported(0x08B1556Cu, 0x6B636970u, "unknown not lowered yet"); return;
L_08B15578:
    rt.unsupported(0x08B15578u, 0x4C786554u, "unknown not lowered yet"); return;
L_08B15584:
    rt.unsupported(0x08B15584u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B155B8:
    rt.unsupported(0x08B155B8u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B155C4:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B155C8u, 0x69766963u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 315u, 0x08B32B90u>(ctx, &aot_mem); return;
    }
    goto L_08B155CC;
L_08B155CC:
    // nop
    goto L_08B155D0;
L_08B155D0:
    rt.unsupported(0x08B155D0u, 0x69727073u, "unknown not lowered yet"); return;
L_08B155E0:
    ctx.execute_vfpu_vscl_ct<105u, 100u, 108u, 1u>();
    rt.unsupported(0x08B155E4u, 0x6174735Fu, "vfpu0 not lowered yet"); return;
L_08B155EC:
    rt.unsupported(0x08B155ECu, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B155F8:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B155FCu, 0x706F7473u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 317u, 0x08B32BC4u>(ctx, &aot_mem); return;
    }
    goto L_08B15600;
L_08B15600:
    // nop
    goto L_08B15604;
L_08B15604:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B15608u, 0x706F7473u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 318u, 0x08B32BD0u>(ctx, &aot_mem); return;
    }
    goto L_08B1560C;
L_08B1560C:
    (void)(ctx.lo);
    goto L_08B15610;
L_08B15610:
    ctx.execute_vfpu_vscl_ct<105u, 100u, 108u, 1u>();
    rt.unsupported(0x08B15614u, 0x6862685Fu, "unknown not lowered yet"); return;
L_08B1561C:
    ctx.execute_vfpu_vscl_ct<105u, 100u, 108u, 1u>();
    rt.unsupported(0x08B15620u, 0x7269745Fu, "unknown not lowered yet"); return;
L_08B15628:
    ctx.execute_vfpu_vscl_ct<105u, 100u, 108u, 1u>();
    ctx.execute_vfpu_vminmax(95u, 97u, 114u, 1u, false);
    ctx.gpr[12] = (0u | 0u);
    goto L_08B15634;
L_08B15634:
    ctx.execute_vfpu_vscl_ct<105u, 100u, 108u, 1u>();
    rt.unsupported(0x08B15638u, 0x6168635Fu, "vfpu0 not lowered yet"); return;
L_08B15640:
    ctx.execute_vfpu_vscl_ct<105u, 100u, 108u, 1u>();
    rt.unsupported(0x08B15644u, 0x7861745Fu, "unknown not lowered yet"); return;
L_08B1564C:
    rt.unsupported(0x08B1564Cu, 0x735F4F4Bu, "unknown not lowered yet"); return;
L_08B15658:
    rt.unsupported(0x08B15658u, 0x00000074u, "special? not lowered yet"); return;
L_08B1565C:
    rt.unsupported(0x08B1565Cu, 0x735F4F4Bu, "unknown not lowered yet"); return;
L_08B15668:
    // nop
    goto L_08B1566C;
L_08B1566C:
    rt.unsupported(0x08B1566Cu, 0x735F4F4Bu, "unknown not lowered yet"); return;
L_08B15678:
    // nop
    goto L_08B1567C;
L_08B1567C:
    rt.unsupported(0x08B1567Cu, 0x735F4F4Bu, "unknown not lowered yet"); return;
L_08B15688:
    // nop
    goto L_08B1568C;
L_08B1568C:
    rt.unsupported(0x08B1568Cu, 0x735F4F4Bu, "unknown not lowered yet"); return;
L_08B15698:
    // nop
    goto L_08B1569C;
L_08B1569C:
    rt.unsupported(0x08B1569Cu, 0x735F4F4Bu, "unknown not lowered yet"); return;
L_08B156A8:
    // nop
    goto L_08B156AC;
L_08B156AC:
    rt.unsupported(0x08B156ACu, 0x735F4F4Bu, "unknown not lowered yet"); return;
L_08B156B8:
    // nop
    goto L_08B156BC;
L_08B156BC:
    rt.unsupported(0x08B156BCu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B156CC:
    rt.unsupported(0x08B156CCu, 0x735F4F4Bu, "unknown not lowered yet"); return;
L_08B156D8:
    rt.unsupported(0x08B156D8u, 0x00000074u, "special? not lowered yet"); return;
L_08B156DC:
    rt.unsupported(0x08B156DCu, 0x735F4F4Bu, "unknown not lowered yet"); return;
L_08B156E8:
    rt.unsupported(0x08B156E8u, 0x735F4F4Bu, "unknown not lowered yet"); return;
L_08B156F4:
    // nop
    goto L_08B156F8;
L_08B156F8:
    rt.unsupported(0x08B156F8u, 0x735F4F4Bu, "unknown not lowered yet"); return;
L_08B15704:
    if (ctx.gpr[2] != ctx.gpr[15]) {
    rt.unsupported(0x08B15708u, 0x7261705Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1087u, 0x08B27854u>(ctx, &aot_mem); return;
    }
    goto L_08B1570C;
L_08B1570C:
    ctx.execute_vfpu_vcmp_ct<105u, 97u, 1u, 4u>();
    // nop
    goto L_08B15714;
L_08B15714:
    if (ctx.gpr[2] != ctx.gpr[15]) {
    ctx.execute_vfpu_vhdp(95u, 108u, 101u, 1u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1088u, 0x08B27864u>(ctx, &aot_mem); return;
    }
    goto L_08B1571C;
L_08B1571C:
    rt.unsupported(0x08B1571Cu, 0x00005074u, "special? not lowered yet"); return;
L_08B15720:
    if (ctx.gpr[2] != ctx.gpr[15]) {
    rt.unsupported(0x08B15724u, 0x6769725Fu, "vfpu1 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1090u, 0x08B27870u>(ctx, &aot_mem); return;
    }
    goto L_08B15728;
L_08B15728:
    rt.unsupported(0x08B15728u, 0x00507468u, "special? not lowered yet"); return;
L_08B1572C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15730u, 0x6E6F7266u, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1105u, 0x08B27C50u>(ctx, &aot_mem); return;
    }
    goto L_08B15734;
L_08B15734:
    rt.unsupported(0x08B15734u, 0x00000074u, "special? not lowered yet"); return;
L_08B15738:
    rt.unsupported(0x08B1573Cu, 0x0000004Cu, "control flow in delay slot"); return;
L_08B15740:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15744u, 0x6B636162u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1107u, 0x08B27C64u>(ctx, &aot_mem); return;
    }
    goto L_08B15748;
L_08B15748:
    // nop
    goto L_08B1574C;
L_08B1574C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    (void)(ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1108u, 0x08B27C70u>(ctx, &aot_mem); return;
    }
    goto L_08B15754;
L_08B15754:
    rt.unsupported(0x08B15754u, 0x4F4F4C46u, "unknown not lowered yet"); return;
L_08B15760:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vcmp_ct<97u, 108u, 1u, 7u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1109u, 0x08B27C84u>(ctx, &aot_mem); return;
    }
    goto L_08B15768;
L_08B15768:
    // nop
    goto L_08B1576C;
L_08B1576C:
    rt.unsupported(0x08B1576Cu, 0x4F4F4C46u, "unknown not lowered yet"); return;
L_08B15778:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1577Cu, 0x69686562u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1110u, 0x08B27C9Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15780;
L_08B15780:
    rt.unsupported(0x08B15780u, 0x0000646Eu, "special? not lowered yet"); return;
L_08B15784:
    rt.unsupported(0x08B15784u, 0x48474946u, "cop2/vfpu not lowered yet"); return;
L_08B15790:
    rt.unsupported(0x08B15790u, 0x48474946u, "cop2/vfpu not lowered yet"); return;
L_08B1579C:
    rt.unsupported(0x08B1579Cu, 0x48474946u, "cop2/vfpu not lowered yet"); return;
L_08B157A8:
    rt.unsupported(0x08B157A8u, 0x48474946u, "cop2/vfpu not lowered yet"); return;
L_08B157B4:
    ctx.execute_vfpu_compare3(108u, 95u, 104u, 1u, 6u);
    rt.unsupported(0x08B157B8u, 0x00006B6Fu, "special? not lowered yet"); return;
L_08B157BC:
    ctx.execute_vfpu_compare3(114u, 95u, 104u, 1u, 6u);
    rt.unsupported(0x08B157C0u, 0x00006B6Fu, "special? not lowered yet"); return;
L_08B157C4:
    ctx.execute_vfpu_vscl_ct<117u, 112u, 112u, 1u>();
    rt.unsupported(0x08B157C8u, 0x74756372u, "unknown not lowered yet"); return;
L_08B157D0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    rt.unsupported(0x08B157D4u, 0x74747562u, "unknown not lowered yet"); return;
L_08B157DC:
    rt.unsupported(0x08B157DCu, 0x6E6F7266u, "vfpu3 not lowered yet"); return;
L_08B157E8:
    rt.unsupported(0x08B157E8u, 0x6E756F72u, "vfpu3 not lowered yet"); return;
L_08B157F4:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    ctx.execute_vfpu_compare3(108u, 95u, 104u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 793u, 0x08B2FD98u>(ctx, &aot_mem); return;
    }
    goto L_08B157FC;
L_08B157FC:
    rt.unsupported(0x08B157FCu, 0x00006B6Fu, "special? not lowered yet"); return;
L_08B15800:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    ctx.execute_vfpu_compare3(114u, 95u, 104u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 794u, 0x08B2FDA4u>(ctx, &aot_mem); return;
    }
    goto L_08B15808;
L_08B15808:
    rt.unsupported(0x08B15808u, 0x00006B6Fu, "special? not lowered yet"); return;
L_08B1580C:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    ctx.execute_vfpu_vscl_ct<117u, 112u, 112u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 795u, 0x08B2FDB0u>(ctx, &aot_mem); return;
    }
    goto L_08B15814;
L_08B15814:
    rt.unsupported(0x08B15814u, 0x74756372u, "unknown not lowered yet"); return;
L_08B1581C:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 796u, 0x08B2FDC0u>(ctx, &aot_mem); return;
    }
    goto L_08B15824;
L_08B15824:
    rt.unsupported(0x08B15824u, 0x74747562u, "unknown not lowered yet"); return;
L_08B1582C:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B15830u, 0x6E6F7266u, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 797u, 0x08B2FDD0u>(ctx, &aot_mem); return;
    }
    goto L_08B15834;
L_08B15834:
    rt.unsupported(0x08B15834u, 0x63696B74u, "vfpu0 not lowered yet"); return;
L_08B1583C:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B15840u, 0x756F6872u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 798u, 0x08B2FDE0u>(ctx, &aot_mem); return;
    }
    goto L_08B15844;
L_08B15844:
    rt.unsupported(0x08B15844u, 0x00006573u, "special? not lowered yet"); return;
L_08B15848:
    rt.unsupported(0x08B15848u, 0x626D6F62u, "vfpu0 not lowered yet"); return;
L_08B15850:
    rt.unsupported(0x08B15850u, 0x636E7570u, "vfpu0 not lowered yet"); return;
L_08B15858:
    rt.unsupported(0x08B15858u, 0x4B43494Bu, "cop2/vfpu not lowered yet"); return;
L_08B15864:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B15868u, 0x745F4E4Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1066u, 0x08B26DC4u>(ctx, &aot_mem); return;
    }
    goto L_08B1586C;
L_08B1586C:
    rt.unsupported(0x08B1586Cu, 0x776F7268u, "unknown not lowered yet"); return;
L_08B15874:
    rt.unsupported(0x08B15874u, 0x48474946u, "cop2/vfpu not lowered yet"); return;
L_08B15880:
    // nop
    goto L_08B15884;
L_08B15884:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B15888u, 0x6B63616Au, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 449u, 0x08B2DE14u>(ctx, &aot_mem); return;
    }
    goto L_08B1588C;
L_08B1588C:
    rt.unsupported(0x08B1588Cu, 0x48526465u, "cop2/vfpu not lowered yet"); return;
L_08B15894:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B15898u, 0x63616A4Cu, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 452u, 0x08B2DE24u>(ctx, &aot_mem); return;
    }
    goto L_08B1589C;
L_08B1589C:
    rt.unsupported(0x08B158A0u, 0x00005348u, "control flow in delay slot"); return;
L_08B158A4:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B158A8u, 0x6B63616Au, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 454u, 0x08B2DE34u>(ctx, &aot_mem); return;
    }
    goto L_08B158AC;
L_08B158AC:
    rt.unsupported(0x08B158ACu, 0x484C6465u, "cop2/vfpu not lowered yet"); return;
L_08B158B4:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B158B8u, 0x63616A4Cu, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 456u, 0x08B2DE44u>(ctx, &aot_mem); return;
    }
    goto L_08B158BC;
L_08B158BC:
    rt.unsupported(0x08B158BCu, 0x4C64656Bu, "unknown not lowered yet"); return;
L_08B158C4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B158C8u, 0x63616A51u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 938u, 0x08B25DD4u>(ctx, &aot_mem); return;
    }
    goto L_08B158CC;
L_08B158CC:
    (void)(0u < 0u ? 1u : 0u);
    goto L_08B158D0;
L_08B158D0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B158D4u, 0x63616A51u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 939u, 0x08B25DE0u>(ctx, &aot_mem); return;
    }
    goto L_08B158D8;
L_08B158D8:
    ctx.gpr[12] = (ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    goto L_08B158DC;
L_08B158DC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B158E0u, 0x67696C61u, "vfpu1 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 940u, 0x08B25DECu>(ctx, &aot_mem); return;
    }
    goto L_08B158E4;
L_08B158E4:
    rt.unsupported(0x08B158E4u, 0x484C5F6Eu, "cop2/vfpu not lowered yet"); return;
L_08B158EC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B158F0u, 0x67696C61u, "vfpu1 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 941u, 0x08B25DFCu>(ctx, &aot_mem); return;
    }
    goto L_08B158F4;
L_08B158F4:
    rt.unsupported(0x08B158F8u, 0x0053484Cu, "control flow in delay slot"); return;
L_08B158FC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15900u, 0x6E65706Fu, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 942u, 0x08B25E0Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15904;
L_08B15904:
    if (ctx.gpr[26] == ctx.gpr[8]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 24u, 0x08B28A84u>(ctx, &aot_mem); return;
    }
    goto L_08B1590C;
L_08B1590C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15910u, 0x726F6F64u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 943u, 0x08B25E1Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15914;
L_08B15914:
    rt.unsupported(0x08B15914u, 0x6B636F6Cu, "unknown not lowered yet"); return;
L_08B15920:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vcmp_ct<117u, 108u, 1u, 0u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 944u, 0x08B25E30u>(ctx, &aot_mem); return;
    }
    goto L_08B15928;
L_08B15928:
    rt.unsupported(0x08B1592Cu, 0x0053484Cu, "control flow in delay slot"); return;
L_08B15930:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vcmp_ct<117u, 108u, 1u, 0u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 945u, 0x08B25E40u>(ctx, &aot_mem); return;
    }
    goto L_08B15938;
L_08B15938:
    rt.unsupported(0x08B15938u, 0x4C74756Fu, "unknown not lowered yet"); return;
L_08B15944:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15948u, 0x69746567u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 946u, 0x08B25E54u>(ctx, &aot_mem); return;
    }
    goto L_08B1594C;
L_08B1594C:
    rt.unsupported(0x08B1594Cu, 0x484C5F6Eu, "cop2/vfpu not lowered yet"); return;
L_08B15954:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15958u, 0x69746567u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 947u, 0x08B25E64u>(ctx, &aot_mem); return;
    }
    goto L_08B1595C;
L_08B1595C:
    rt.unsupported(0x08B1595Cu, 0x4C5F4C6Eu, "unknown not lowered yet"); return;
L_08B15964:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15968u, 0x736F6C63u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 948u, 0x08B25E74u>(ctx, &aot_mem); return;
    }
    goto L_08B1596C;
L_08B1596C:
    ctx.execute_vfpu_compare3(101u, 100u, 111u, 1u, 6u);
    rt.unsupported(0x08B15970u, 0x484C5F72u, "cop2/vfpu not lowered yet"); return;
L_08B15978:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1597Cu, 0x736F6C63u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 949u, 0x08B25E88u>(ctx, &aot_mem); return;
    }
    goto L_08B15980;
L_08B15980:
    ctx.execute_vfpu_compare3(101u, 100u, 111u, 1u, 6u);
    rt.unsupported(0x08B15984u, 0x4C5F4C72u, "unknown not lowered yet"); return;
L_08B1598C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 2u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 950u, 0x08B25E9Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15994;
L_08B15994:
    rt.unsupported(0x08B15994u, 0x726F6F64u, "unknown not lowered yet"); return;
L_08B1599C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 2u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 951u, 0x08B25EACu>(ctx, &aot_mem); return;
    }
    goto L_08B159A4;
L_08B159A4:
    rt.unsupported(0x08B159A4u, 0x726F6F64u, "unknown not lowered yet"); return;
L_08B159AC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B159B0u, 0x706D756Au, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 952u, 0x08B25EBCu>(ctx, &aot_mem); return;
    }
    goto L_08B159B4;
L_08B159B4:
    rt.unsupported(0x08B159B4u, 0x4C5F6E69u, "unknown not lowered yet"); return;
L_08B159BC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_compare3(103u, 101u, 116u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 953u, 0x08B25ECCu>(ctx, &aot_mem); return;
    }
    goto L_08B159C4;
L_08B159C4:
    rt.unsupported(0x08B159C4u, 0x4C5F7475u, "unknown not lowered yet"); return;
L_08B159CC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_compare3(103u, 101u, 116u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 954u, 0x08B25EDCu>(ctx, &aot_mem); return;
    }
    goto L_08B159D4;
L_08B159D4:
    rt.unsupported(0x08B159D8u, 0x0053484Cu, "control flow in delay slot"); return;
L_08B159DC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B159E0u, 0x736F6C63u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 955u, 0x08B25EECu>(ctx, &aot_mem); return;
    }
    goto L_08B159E4;
L_08B159E4:
    rt.unsupported(0x08B159E4u, 0x484C5F65u, "cop2/vfpu not lowered yet"); return;
L_08B159EC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B159F0u, 0x67696C61u, "vfpu1 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 956u, 0x08B25EFCu>(ctx, &aot_mem); return;
    }
    goto L_08B159F4;
L_08B159F4:
    rt.unsupported(0x08B159F4u, 0x48525F6Eu, "cop2/vfpu not lowered yet"); return;
L_08B159FC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15A00u, 0x67696C61u, "vfpu1 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 957u, 0x08B25F0Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15A04;
L_08B15A04:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1103u, 0x08B27BC0u>(ctx, &aot_mem); return;
    }
    goto L_08B15A0C;
L_08B15A0C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15A10u, 0x6E65706Fu, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 958u, 0x08B25F1Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15A14;
L_08B15A14:
    if (ctx.gpr[26] == ctx.gpr[8]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 75u, 0x08B2A394u>(ctx, &aot_mem); return;
    }
    goto L_08B15A1C;
L_08B15A1C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15A20u, 0x726F6F64u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 959u, 0x08B25F2Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15A24;
L_08B15A24:
    rt.unsupported(0x08B15A24u, 0x6B636F6Cu, "unknown not lowered yet"); return;
L_08B15A30:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vcmp_ct<117u, 108u, 1u, 0u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 960u, 0x08B25F40u>(ctx, &aot_mem); return;
    }
    goto L_08B15A38;
L_08B15A38:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    ctx.gpr[9] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 342u, 0x08B32FF8u>(ctx, &aot_mem); return;
    }
    goto L_08B15A40;
L_08B15A40:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vcmp_ct<117u, 108u, 1u, 0u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 961u, 0x08B25F50u>(ctx, &aot_mem); return;
    }
    goto L_08B15A48;
L_08B15A48:
    rt.unsupported(0x08B15A48u, 0x4C74756Fu, "unknown not lowered yet"); return;
L_08B15A54:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15A58u, 0x69746567u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 962u, 0x08B25F64u>(ctx, &aot_mem); return;
    }
    goto L_08B15A5C;
L_08B15A5C:
    rt.unsupported(0x08B15A5Cu, 0x48525F6Eu, "cop2/vfpu not lowered yet"); return;
L_08B15A64:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15A68u, 0x69746567u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 963u, 0x08B25F74u>(ctx, &aot_mem); return;
    }
    goto L_08B15A6C;
L_08B15A6C:
    rt.unsupported(0x08B15A70u, 0x00005348u, "control flow in delay slot"); return;
L_08B15A74:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15A78u, 0x736F6C63u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 964u, 0x08B25F84u>(ctx, &aot_mem); return;
    }
    goto L_08B15A7C;
L_08B15A7C:
    ctx.execute_vfpu_compare3(101u, 100u, 111u, 1u, 6u);
    rt.unsupported(0x08B15A80u, 0x48525F72u, "cop2/vfpu not lowered yet"); return;
L_08B15A88:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15A8Cu, 0x736F6C63u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 965u, 0x08B25F98u>(ctx, &aot_mem); return;
    }
    goto L_08B15A90;
L_08B15A90:
    ctx.execute_vfpu_compare3(101u, 100u, 111u, 1u, 6u);
    rt.unsupported(0x08B15A98u, 0x00005348u, "control flow in delay slot"); return;
L_08B15A9C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vhdp(115u, 104u, 117u, 1u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 966u, 0x08B25FACu>(ctx, &aot_mem); return;
    }
    goto L_08B15AA4;
L_08B15AA4:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    ctx.gpr[9] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 85u, 0x08B30C40u>(ctx, &aot_mem); return;
    }
    goto L_08B15AAC;
L_08B15AAC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15AB0u, 0x7568734Cu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 967u, 0x08B25FBCu>(ctx, &aot_mem); return;
    }
    goto L_08B15AB4;
L_08B15AB4:
    ctx.execute_vfpu_vscl_ct<102u, 102u, 108u, 1u>();
    if (ctx.gpr[26] == ctx.gpr[8]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 78u, 0x08B2A438u>(ctx, &aot_mem); return;
    }
    goto L_08B15AC0;
L_08B15AC0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15AC4u, 0x00746973u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 968u, 0x08B25FD0u>(ctx, &aot_mem); return;
    }
    goto L_08B15AC8;
L_08B15AC8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15ACCu, 0x7469734Cu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 969u, 0x08B25FD8u>(ctx, &aot_mem); return;
    }
    goto L_08B15AD0;
L_08B15AD0:
    // nop
    goto L_08B15AD4;
L_08B15AD4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15AD8u, 0x70746973u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 970u, 0x08B25FE4u>(ctx, &aot_mem); return;
    }
    goto L_08B15ADC;
L_08B15ADC:
    // nop
    goto L_08B15AE0;
L_08B15AE0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15AE4u, 0x70746973u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 971u, 0x08B25FF0u>(ctx, &aot_mem); return;
    }
    goto L_08B15AE8;
L_08B15AE8:
    rt.unsupported(0x08B15AE8u, 0x00004F4Cu, "syscall not lowered yet"); return;
L_08B15AEC:
    if (ctx.gpr[18] != ctx.gpr[9]) {
    rt.unsupported(0x08B15AF0u, 0x004C5F45u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 77u, 0x08B2A400u>(ctx, &aot_mem); return;
    }
    goto L_08B15AF4;
L_08B15AF4:
    rt.unsupported(0x08B15AF4u, 0x76697244u, "unknown not lowered yet"); return;
L_08B15AFC:
    rt.unsupported(0x08B15AFCu, 0x76697244u, "unknown not lowered yet"); return;
L_08B15B08:
    rt.unsupported(0x08B15B08u, 0x76697244u, "unknown not lowered yet"); return;
L_08B15B14:
    rt.unsupported(0x08B15B14u, 0x76697244u, "unknown not lowered yet"); return;
L_08B15B20:
    rt.unsupported(0x08B15B20u, 0x76697244u, "unknown not lowered yet"); return;
L_08B15B2C:
    rt.unsupported(0x08B15B2Cu, 0x76697244u, "unknown not lowered yet"); return;
L_08B15B38:
    rt.unsupported(0x08B15B38u, 0x76697244u, "unknown not lowered yet"); return;
L_08B15B44:
    rt.unsupported(0x08B15B48u, 0x0000424Cu, "control flow in delay slot"); return;
L_08B15B4C:
    if (ctx.gpr[18] != ctx.gpr[9]) {
    rt.unsupported(0x08B15B50u, 0x4F425F45u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 81u, 0x08B2A460u>(ctx, &aot_mem); return;
    }
    goto L_08B15B54;
L_08B15B54:
    rt.unsupported(0x08B15B54u, 0x00005441u, "special? not lowered yet"); return;
L_08B15B58:
    if (ctx.gpr[18] != ctx.gpr[9]) {
    rt.unsupported(0x08B15B5Cu, 0x4F425F45u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 82u, 0x08B2A46Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15B60;
L_08B15B60:
    rt.unsupported(0x08B15B60u, 0x4C5F5441u, "unknown not lowered yet"); return;
L_08B15B68:
    if (ctx.gpr[18] != ctx.gpr[9]) {
    rt.unsupported(0x08B15B6Cu, 0x4F425F45u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 84u, 0x08B2A47Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15B70;
L_08B15B70:
    if (ctx.gpr[18] == ctx.gpr[31]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 209u, 0x08B2AC78u>(ctx, &aot_mem); return;
    }
    goto L_08B15B78;
L_08B15B78:
    if (ctx.gpr[18] != ctx.gpr[9]) {
    rt.unsupported(0x08B15B7Cu, 0x4F425F45u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 86u, 0x08B2A48Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15B80;
L_08B15B80:
    rt.unsupported(0x08B15B80u, 0x625F5441u, "vfpu0 not lowered yet"); return;
L_08B15B88:
    rt.unsupported(0x08B15B88u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15B98:
    rt.unsupported(0x08B15B98u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15BA8:
    rt.unsupported(0x08B15BA8u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15BB8:
    rt.unsupported(0x08B15BB8u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15BC4:
    // nop
    goto L_08B15BC8;
L_08B15BC8:
    rt.unsupported(0x08B15BC8u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15BD4:
    rt.unsupported(0x08B15BD4u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15BE0:
    rt.unsupported(0x08B15BE0u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15BEC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_compare3(103u, 101u, 116u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 975u, 0x08B260FCu>(ctx, &aot_mem); return;
    }
    goto L_08B15BF4;
L_08B15BF4:
    rt.unsupported(0x08B15BF8u, 0x00005348u, "control flow in delay slot"); return;
L_08B15BFC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_compare3(103u, 101u, 116u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 976u, 0x08B2610Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15C04;
L_08B15C04:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 325u, 0x08B32DDCu>(ctx, &aot_mem); return;
    }
    goto L_08B15C0C;
L_08B15C0C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15C10u, 0x736F6C63u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 977u, 0x08B2611Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15C14;
L_08B15C14:
    rt.unsupported(0x08B15C14u, 0x48525F65u, "cop2/vfpu not lowered yet"); return;
L_08B15C1C:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B15C20u, 0x6B6F6F68u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 520u, 0x08B2E1ACu>(ctx, &aot_mem); return;
    }
    goto L_08B15C24;
L_08B15C24:
    rt.unsupported(0x08B15C24u, 0x61747265u, "vfpu0 not lowered yet"); return;
L_08B15C2C:
    rt.unsupported(0x08B15C2Cu, 0x49415254u, "cop2/vfpu not lowered yet"); return;
L_08B15C38:
    rt.unsupported(0x08B15C38u, 0x49415254u, "cop2/vfpu not lowered yet"); return;
L_08B15C48:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15C4Cu, 0x77617263u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 978u, 0x08B26158u>(ctx, &aot_mem); return;
    }
    goto L_08B15C50;
L_08B15C50:
    rt.unsupported(0x08B15C50u, 0x74756F6Cu, "unknown not lowered yet"); return;
L_08B15C58:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 2u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 979u, 0x08B26168u>(ctx, &aot_mem); return;
    }
    goto L_08B15C60;
L_08B15C60:
    rt.unsupported(0x08B15C64u, 0x0053484Cu, "control flow in delay slot"); return;
L_08B15C68:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 2u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 980u, 0x08B26178u>(ctx, &aot_mem); return;
    }
    goto L_08B15C70;
L_08B15C70:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    ctx.gpr[9] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 356u, 0x08B33230u>(ctx, &aot_mem); return;
    }
    goto L_08B15C78;
L_08B15C78:
    rt.unsupported(0x08B15C78u, 0x75746547u, "unknown not lowered yet"); return;
L_08B15C80:
    rt.unsupported(0x08B15C80u, 0x75746547u, "unknown not lowered yet"); return;
L_08B15C8C:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B15C90u, 0x75616C5Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 291u, 0x08B2B1B8u>(ctx, &aot_mem); return;
    }
    goto L_08B15C94;
L_08B15C94:
    rt.unsupported(0x08B15C94u, 0x0068636Eu, "special? not lowered yet"); return;
L_08B15C98:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B15C9Cu, 0x696C675Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 292u, 0x08B2B1C4u>(ctx, &aot_mem); return;
    }
    goto L_08B15CA0;
L_08B15CA0:
    ctx.gpr[12] = (0u & 0u);
    goto L_08B15CA4;
L_08B15CA4:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B15CA8u, 0x6E616C5Fu, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 293u, 0x08B2B1D0u>(ctx, &aot_mem); return;
    }
    goto L_08B15CAC;
L_08B15CAC:
    (void)(0u & 0u);
    goto L_08B15CB0;
L_08B15CB0:
    rt.unsupported(0x08B15CB0u, 0x4C4C4146u, "unknown not lowered yet"); return;
L_08B15CBC:
    rt.unsupported(0x08B15CBCu, 0x4C4C4146u, "unknown not lowered yet"); return;
L_08B15CC8:
    rt.unsupported(0x08B15CC8u, 0x4C4C4146u, "unknown not lowered yet"); return;
L_08B15CD4:
    rt.unsupported(0x08B15CD4u, 0x4C4C4146u, "unknown not lowered yet"); return;
L_08B15CE4:
    rt.unsupported(0x08B15CE4u, 0x4C4C4146u, "unknown not lowered yet"); return;
L_08B15CF0:
    rt.unsupported(0x08B15CF0u, 0x4C4C4146u, "unknown not lowered yet"); return;
L_08B15CFC:
    rt.unsupported(0x08B15CFCu, 0x735F5645u, "unknown not lowered yet"); return;
L_08B15D04:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<86u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<95u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<69u, 1u>(vfpu_d); }
    rt.unsupported(0x08B15D08u, 0x00657669u, "special? not lowered yet"); return;
L_08B15D0C:
    ctx.execute_vfpu_vminmax(99u, 111u, 109u, 1u, false);
    ctx.execute_vfpu_compare3(97u, 110u, 100u, 1u, 6u);
    ctx.execute_vfpu_vcmp_ct<114u, 111u, 1u, 15u>();
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B15D1C;
L_08B15D1C:
    rt.unsupported(0x08B15D1Cu, 0x45525058u, "cop1? not lowered yet"); return;
L_08B15D2C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    rt.unsupported(0x08B15D30u, 0x736F7263u, "unknown not lowered yet"); return;
L_08B15D38:
    rt.unsupported(0x08B15D38u, 0x4E525554u, "unknown not lowered yet"); return;
L_08B15D44:
    rt.unsupported(0x08B15D44u, 0x45525241u, "cop1? not lowered yet"); return;
L_08B15D50:
    if (ctx.gpr[26] != ctx.gpr[15]) {
    rt.unsupported(0x08B15D54u, 0x0000004Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 119u, 0x08B2A664u>(ctx, &aot_mem); return;
    }
    goto L_08B15D58;
L_08B15D58:
    rt.unsupported(0x08B15D58u, 0x4B435544u, "cop2/vfpu not lowered yet"); return;
L_08B15D64:
    rt.unsupported(0x08B15D64u, 0x4B435544u, "cop2/vfpu not lowered yet"); return;
L_08B15D70:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B15D74u, 0x635F4E4Fu, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1076u, 0x08B272D0u>(ctx, &aot_mem); return;
    }
    goto L_08B15D78;
L_08B15D78:
    rt.unsupported(0x08B15D78u, 0x63756F72u, "vfpu0 not lowered yet"); return;
L_08B15D80:
    rt.unsupported(0x08B15D80u, 0x4F4C4252u, "unknown not lowered yet"); return;
L_08B15D90:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    rt.unsupported(0x08B15D94u, 0x00707573u, "special? not lowered yet"); return;
L_08B15D98:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    if (ctx.gpr[26] != ctx.gpr[15]) {
    rt.unsupported(0x08B15DA0u, 0x00005245u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1065u, 0x08B26B6Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15DA4;
L_08B15DA4:
    rt.unsupported(0x08B15DA4u, 0x4B435546u, "cop2/vfpu not lowered yet"); return;
L_08B15DAC:
    rt.unsupported(0x08B15DACu, 0x4E4F4850u, "unknown not lowered yet"); return;
L_08B15DB8:
    rt.unsupported(0x08B15DB8u, 0x4E4F4850u, "unknown not lowered yet"); return;
L_08B15DC4:
    rt.unsupported(0x08B15DC4u, 0x4E4F4850u, "unknown not lowered yet"); return;
L_08B15DD0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B15DD4u, 0x776F645Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1077u, 0x08B27320u>(ctx, &aot_mem); return;
    }
    goto L_08B15DD8;
L_08B15DD8:
    rt.unsupported(0x08B15DD8u, 0x0000006Eu, "special? not lowered yet"); return;
L_08B15DDC:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B15DE0u, 0x0070755Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1078u, 0x08B2732Cu>(ctx, &aot_mem); return;
    }
    goto L_08B15DE4;
L_08B15DE4:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    ctx.execute_vfpu_vcmp_ct<105u, 100u, 1u, 15u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1079u, 0x08B27334u>(ctx, &aot_mem); return;
    }
    goto L_08B15DEC;
L_08B15DEC:
    (void)(0u | 0u);
    goto L_08B15DF0;
L_08B15DF0:
    rt.unsupported(0x08B15DF0u, 0x004D5441u, "special? not lowered yet"); return;
L_08B15DF4:
    ctx.execute_vfpu_vscl_ct<97u, 98u, 115u, 1u>();
    rt.unsupported(0x08B15DF8u, 0x00006C69u, "special? not lowered yet"); return;
L_08B15DFC:
    rt.unsupported(0x08B15DFCu, 0x43414F43u, "unknown not lowered yet"); return;
L_08B15E08:
    rt.unsupported(0x08B15E08u, 0x43414F43u, "unknown not lowered yet"); return;
L_08B15E14:
    rt.unsupported(0x08B15E14u, 0x43414F43u, "unknown not lowered yet"); return;
L_08B15E20:
    rt.unsupported(0x08B15E20u, 0x43414F43u, "unknown not lowered yet"); return;
L_08B15E2C:
    rt.unsupported(0x08B15E2Cu, 0x43414F43u, "unknown not lowered yet"); return;
L_08B15E38:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15E3Cu, 0x6E65706Fu, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 981u, 0x08B26394u>(ctx, &aot_mem); return;
    }
    goto L_08B15E40;
L_08B15E40:
    rt.unsupported(0x08B15E40u, 0x0000004Cu, "syscall not lowered yet"); return;
L_08B15E44:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15E48u, 0x69746567u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 982u, 0x08B263A0u>(ctx, &aot_mem); return;
    }
    goto L_08B15E4C;
L_08B15E4C:
    rt.unsupported(0x08B15E4Cu, 0x00004C6Eu, "special? not lowered yet"); return;
L_08B15E50:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15E54u, 0x736F6C63u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 983u, 0x08B263ACu>(ctx, &aot_mem); return;
    }
    goto L_08B15E58;
L_08B15E58:
    ctx.gpr[9] = (0u | 0u);
    goto L_08B15E5C;
L_08B15E5C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_compare3(103u, 101u, 116u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 984u, 0x08B263B8u>(ctx, &aot_mem); return;
    }
    goto L_08B15E64;
L_08B15E64:
    rt.unsupported(0x08B15E64u, 0x004C7475u, "special? not lowered yet"); return;
L_08B15E68:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15E6Cu, 0x6E65706Fu, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 985u, 0x08B263C4u>(ctx, &aot_mem); return;
    }
    goto L_08B15E70;
L_08B15E70:
    // nop
    goto L_08B15E74;
L_08B15E74:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15E78u, 0x69746567u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 986u, 0x08B263D0u>(ctx, &aot_mem); return;
    }
    goto L_08B15E7C;
L_08B15E7C:
    rt.unsupported(0x08B15E7Cu, 0x0000006Eu, "special? not lowered yet"); return;
L_08B15E80:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B15E84u, 0x736F6C63u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 987u, 0x08B263DCu>(ctx, &aot_mem); return;
    }
    goto L_08B15E88;
L_08B15E88:
    (void)(0u | 0u);
    goto L_08B15E8C;
L_08B15E8C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_compare3(103u, 101u, 116u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 988u, 0x08B263E8u>(ctx, &aot_mem); return;
    }
    goto L_08B15E94;
L_08B15E94:
    rt.unsupported(0x08B15E94u, 0x00007475u, "special? not lowered yet"); return;
L_08B15E98:
    rt.unsupported(0x08B15E98u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15EA4:
    rt.unsupported(0x08B15EA4u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15EB0:
    rt.unsupported(0x08B15EB0u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15EBC:
    rt.unsupported(0x08B15EBCu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15EC8:
    rt.unsupported(0x08B15EC8u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15ED4:
    rt.unsupported(0x08B15ED4u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15EE0:
    rt.unsupported(0x08B15EE0u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15EF0:
    rt.unsupported(0x08B15EF0u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15F00:
    rt.unsupported(0x08B15F00u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15F10:
    rt.unsupported(0x08B15F10u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15F1C:
    rt.unsupported(0x08B15F1Cu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15F28:
    rt.unsupported(0x08B15F28u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15F38:
    rt.unsupported(0x08B15F38u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15F48:
    rt.unsupported(0x08B15F48u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15F5C:
    rt.unsupported(0x08B15F5Cu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15F70:
    rt.unsupported(0x08B15F70u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15F84:
    rt.unsupported(0x08B15F84u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15F94:
    rt.unsupported(0x08B15F94u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15FA4:
    rt.unsupported(0x08B15FA4u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15FB0:
    rt.unsupported(0x08B15FB0u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15FBC:
    rt.unsupported(0x08B15FBCu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15FC8:
    rt.unsupported(0x08B15FC8u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15FD4:
    rt.unsupported(0x08B15FD4u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15FE0:
    rt.unsupported(0x08B15FE0u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15FEC:
    rt.unsupported(0x08B15FECu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B15FFC:
    rt.unsupported(0x08B15FFCu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B1600C:
    rt.unsupported(0x08B1600Cu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B1601C:
    rt.unsupported(0x08B1601Cu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16028:
    rt.unsupported(0x08B16028u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16034:
    rt.unsupported(0x08B16034u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16044:
    rt.unsupported(0x08B16044u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16054:
    rt.unsupported(0x08B16054u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16068:
    rt.unsupported(0x08B16068u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B1607C:
    rt.unsupported(0x08B1607Cu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16090:
    rt.unsupported(0x08B16090u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B160A0:
    rt.unsupported(0x08B160A0u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B160B0:
    rt.unsupported(0x08B160B0u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B160BC:
    rt.unsupported(0x08B160BCu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B160C8:
    rt.unsupported(0x08B160C8u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B160D4:
    rt.unsupported(0x08B160D4u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B160E0:
    rt.unsupported(0x08B160E0u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B160EC:
    rt.unsupported(0x08B160ECu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B160F8:
    rt.unsupported(0x08B160F8u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16108:
    rt.unsupported(0x08B16108u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16118:
    rt.unsupported(0x08B16118u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16128:
    rt.unsupported(0x08B16128u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16134:
    rt.unsupported(0x08B16134u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16140:
    rt.unsupported(0x08B16140u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16150:
    rt.unsupported(0x08B16150u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16160:
    rt.unsupported(0x08B16160u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16174:
    rt.unsupported(0x08B16174u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16188:
    rt.unsupported(0x08B16188u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B1619C:
    rt.unsupported(0x08B1619Cu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B161AC:
    rt.unsupported(0x08B161ACu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B161BC:
    rt.unsupported(0x08B161BCu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B161C8:
    rt.unsupported(0x08B161C8u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B161D4:
    rt.unsupported(0x08B161D4u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B161E0:
    rt.unsupported(0x08B161E0u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B161EC:
    rt.unsupported(0x08B161ECu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B161F8:
    rt.unsupported(0x08B161F8u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16204:
    rt.unsupported(0x08B16204u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16214:
    rt.unsupported(0x08B16214u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16224:
    rt.unsupported(0x08B16224u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16234:
    rt.unsupported(0x08B16234u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16240:
    rt.unsupported(0x08B16240u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B1624C:
    rt.unsupported(0x08B1624Cu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B1625C:
    rt.unsupported(0x08B1625Cu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B1626C:
    rt.unsupported(0x08B1626Cu, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16280:
    rt.unsupported(0x08B16280u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B16294:
    rt.unsupported(0x08B16294u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B162A8:
    rt.unsupported(0x08B162A8u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B162B8:
    rt.unsupported(0x08B162B8u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B162C8:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B162CCu, 0x6B5F4E4Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1085u, 0x08B27828u>(ctx, &aot_mem); return;
    }
    goto L_08B162D0;
L_08B162D0:
    ctx.execute_vfpu_vscl_ct<110u, 105u, 102u, 1u>();
    rt.unsupported(0x08B162D4u, 0x0000315Fu, "special? not lowered yet"); return;
L_08B162D8:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B162DCu, 0x6B5F4E4Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1086u, 0x08B27838u>(ctx, &aot_mem); return;
    }
    goto L_08B162E0;
L_08B162E0:
    ctx.execute_vfpu_vscl_ct<110u, 105u, 102u, 1u>();
    rt.unsupported(0x08B162E4u, 0x0000325Fu, "special? not lowered yet"); return;
L_08B162E8:
    ctx.execute_vfpu_vhdp(107u, 110u, 105u, 1u);
    rt.unsupported(0x08B162ECu, 0x61705F65u, "vfpu0 not lowered yet"); return;
L_08B162F4:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B162F8u, 0x6B5F4E4Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1087u, 0x08B27854u>(ctx, &aot_mem); return;
    }
    goto L_08B162FC;
L_08B162FC:
    ctx.execute_vfpu_vscl_ct<110u, 105u, 102u, 1u>();
    ctx.execute_vfpu_vscl_ct<105u, 100u, 108u, 1u>();
    // nop
    goto L_08B16308;
L_08B16308:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B1630Cu, 0x6B5F4E4Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1089u, 0x08B27868u>(ctx, &aot_mem); return;
    }
    goto L_08B16310;
L_08B16310:
    ctx.execute_vfpu_vscl_ct<110u, 105u, 102u, 1u>();
    rt.unsupported(0x08B16314u, 0x0000335Fu, "special? not lowered yet"); return;
L_08B16318:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B1631Cu, 0x625F4E4Fu, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1091u, 0x08B27878u>(ctx, &aot_mem); return;
    }
    goto L_08B16320;
L_08B16320:
    rt.unsupported(0x08B16320u, 0x685F7461u, "unknown not lowered yet"); return;
L_08B16328:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B1632Cu, 0x625F4E4Fu, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1092u, 0x08B27888u>(ctx, &aot_mem); return;
    }
    goto L_08B16330;
L_08B16330:
    rt.unsupported(0x08B16330u, 0x765F7461u, "unknown not lowered yet"); return;
L_08B16338:
    rt.unsupported(0x08B1633Cu, 0x54524150u, "control flow in delay slot"); return;
L_08B16340:
    // nop
    goto L_08B16344;
L_08B16344:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B16348u, 0x675F4E4Fu, "vfpu1 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1093u, 0x08B278A4u>(ctx, &aot_mem); return;
    }
    goto L_08B1634C;
L_08B1634C:
    rt.unsupported(0x08B1634Cu, 0x63666C6Fu, "vfpu0 not lowered yet"); return;
L_08B16354:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B16358u, 0x635F4E4Fu, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1094u, 0x08B278B4u>(ctx, &aot_mem); return;
    }
    goto L_08B1635C;
L_08B1635C:
    rt.unsupported(0x08B1635Cu, 0x00776173u, "special? not lowered yet"); return;
L_08B16360:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B16364u, 0x635F4E4Fu, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1095u, 0x08B278C0u>(ctx, &aot_mem); return;
    }
    goto L_08B16368;
L_08B16368:
    ctx.execute_vfpu_vcmp_ct<97u, 119u, 1u, 3u>();
    rt.unsupported(0x08B1636Cu, 0x0000006Fu, "special? not lowered yet"); return;
L_08B16370:
    rt.unsupported(0x08B16370u, 0x77617363u, "unknown not lowered yet"); return;
L_08B1637C:
    rt.unsupported(0x08B1637Cu, 0x68747970u, "unknown not lowered yet"); return;
L_08B16388:
    rt.unsupported(0x08B16388u, 0x68747970u, "unknown not lowered yet"); return;
L_08B1639C:
    rt.unsupported(0x08B1639Cu, 0x68747970u, "unknown not lowered yet"); return;
L_08B163AC:
    rt.unsupported(0x08B163ACu, 0x68747970u, "unknown not lowered yet"); return;
L_08B163C0:
    rt.unsupported(0x08B163C0u, 0x746C6F63u, "unknown not lowered yet"); return;
L_08B163CC:
    rt.unsupported(0x08B163CCu, 0x746C6F63u, "unknown not lowered yet"); return;
L_08B163E0:
    rt.unsupported(0x08B163E0u, 0x746C6F63u, "unknown not lowered yet"); return;
L_08B163F0:
    rt.unsupported(0x08B163F0u, 0x746C6F63u, "unknown not lowered yet"); return;
L_08B16404:
    rt.unsupported(0x08B16404u, 0x746C6F63u, "unknown not lowered yet"); return;
L_08B16410:
    rt.unsupported(0x08B16410u, 0x746F6873u, "unknown not lowered yet"); return;
L_08B1641C:
    // nop
    goto L_08B16420;
L_08B16420:
    rt.unsupported(0x08B16420u, 0x746F6873u, "unknown not lowered yet"); return;
L_08B1642C:
    rt.unsupported(0x08B1642Cu, 0x69666863u, "unknown not lowered yet"); return;
L_08B16434:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    rt.unsupported(0x08B16438u, 0x69665F79u, "unknown not lowered yet"); return;
L_08B16440:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    rt.unsupported(0x08B16444u, 0x72635F79u, "unknown not lowered yet"); return;
L_08B16454:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<121u, 95u, 114u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    // nop
    goto L_08B16464;
L_08B16464:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vscl_ct<102u, 105u, 114u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1096u, 0x08B279B8u>(ctx, &aot_mem); return;
    }
    goto L_08B1646C;
L_08B1646C:
    // nop
    goto L_08B16470;
L_08B16470:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B16474u, 0x756F7263u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1097u, 0x08B279C4u>(ctx, &aot_mem); return;
    }
    goto L_08B16478;
L_08B16478:
    rt.unsupported(0x08B16478u, 0x69666863u, "unknown not lowered yet"); return;
L_08B16480:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_compare3(114u, 101u, 108u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1098u, 0x08B279D4u>(ctx, &aot_mem); return;
    }
    goto L_08B16488;
L_08B16488:
    ctx.gpr[12] = (0u + 0u);
    goto L_08B1648C;
L_08B1648C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B16490u, 0x756F7263u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1099u, 0x08B279E0u>(ctx, &aot_mem); return;
    }
    goto L_08B16494;
L_08B16494:
    ctx.execute_vfpu_vscl_ct<99u, 104u, 114u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    // nop
    goto L_08B164A0;
L_08B164A0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vscl_ct<102u, 105u, 114u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 205u, 0x08B2CDF8u>(ctx, &aot_mem); return;
    }
    goto L_08B164A8;
L_08B164A8:
    // nop
    goto L_08B164AC;
L_08B164AC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B164B0u, 0x756F7263u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 207u, 0x08B2CE04u>(ctx, &aot_mem); return;
    }
    goto L_08B164B4;
L_08B164B4:
    rt.unsupported(0x08B164B4u, 0x69666863u, "unknown not lowered yet"); return;
L_08B164BC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_compare3(114u, 101u, 108u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 209u, 0x08B2CE14u>(ctx, &aot_mem); return;
    }
    goto L_08B164C4;
L_08B164C4:
    ctx.gpr[12] = (0u + 0u);
    goto L_08B164C8;
L_08B164C8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B164CCu, 0x756F7263u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 210u, 0x08B2CE20u>(ctx, &aot_mem); return;
    }
    goto L_08B164D0;
L_08B164D0:
    ctx.execute_vfpu_vscl_ct<99u, 104u, 114u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    // nop
    goto L_08B164DC;
L_08B164DC:
    rt.unsupported(0x08B164DCu, 0x4C464952u, "unknown not lowered yet"); return;
L_08B164E8:
    rt.unsupported(0x08B164E8u, 0x4C464952u, "unknown not lowered yet"); return;
L_08B164FC:
    rt.unsupported(0x08B164FCu, 0x4C464952u, "unknown not lowered yet"); return;
L_08B16508:
    rt.unsupported(0x08B16508u, 0x4C464952u, "unknown not lowered yet"); return;
L_08B1651C:
    if (static_cast<std::int32_t>(ctx.gpr[25]) > 0) {
    ctx.execute_vfpu_vscl_ct<102u, 105u, 114u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1230u, 0x08B23E54u>(ctx, &aot_mem); return;
    }
    goto L_08B16524;
L_08B16524:
    // nop
    goto L_08B16528;
L_08B16528:
    if (static_cast<std::int32_t>(ctx.gpr[25]) > 0) {
    ctx.execute_vfpu_compare3(114u, 101u, 108u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1232u, 0x08B23E60u>(ctx, &aot_mem); return;
    }
    goto L_08B16530;
L_08B16530:
    ctx.gpr[12] = (0u + 0u);
    goto L_08B16534;
L_08B16534:
    rt.unsupported(0x08B16534u, 0x70696E73u, "unknown not lowered yet"); return;
L_08B16540:
    rt.unsupported(0x08B16540u, 0x70696E73u, "unknown not lowered yet"); return;
L_08B16550:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B16554u, 0x745F4E4Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1100u, 0x08B27AB0u>(ctx, &aot_mem); return;
    }
    goto L_08B16558;
L_08B16558:
    rt.unsupported(0x08B16558u, 0x776F7268u, "unknown not lowered yet"); return;
L_08B16560:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B16564u, 0x735F4E4Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1101u, 0x08B27AC0u>(ctx, &aot_mem); return;
    }
    goto L_08B16568;
L_08B16568:
    rt.unsupported(0x08B16568u, 0x74726174u, "unknown not lowered yet"); return;
L_08B16574:
    rt.unsupported(0x08B16574u, 0x4D414C46u, "unknown not lowered yet"); return;
L_08B16580:
    rt.unsupported(0x08B16580u, 0x6B636F72u, "unknown not lowered yet"); return;
L_08B1658C:
    rt.unsupported(0x08B1658Cu, 0x6B636F72u, "unknown not lowered yet"); return;
L_08B1659C:
    rt.unsupported(0x08B1659Cu, 0x68746162u, "unknown not lowered yet"); return;
L_08B165A4:
    rt.unsupported(0x08B165A4u, 0x68746162u, "unknown not lowered yet"); return;
L_08B165B0:
    rt.unsupported(0x08B165B0u, 0x68746162u, "unknown not lowered yet"); return;
L_08B165BC:
    rt.unsupported(0x08B165BCu, 0x68746162u, "unknown not lowered yet"); return;
L_08B165C8:
    rt.unsupported(0x08B165C8u, 0x636E616Cu, "vfpu0 not lowered yet"); return;
L_08B165D0:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
    goto L_08B165D4;
L_08B165D4:
    ctx.execute_vfpu_vscl_ct<115u, 116u, 114u, 1u>();
    rt.unsupported(0x08B165D8u, 0x00686374u, "special? not lowered yet"); return;
L_08B165DC:
    ctx.execute_vfpu_vscl_ct<116u, 105u, 109u, 1u>();
    // nop
    goto L_08B165E4;
L_08B165E4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<104u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<108u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    rt.unsupported(0x08B165E8u, 0x00000072u, "special? not lowered yet"); return;
L_08B165EC:
    ctx.execute_vfpu_vcmp_ct<116u, 114u, 1u, 3u>();
    ctx.gpr[12] = (0u | 0u);
    goto L_08B165F4;
L_08B165F4:
    rt.unsupported(0x08B165F4u, 0x746F6972u, "unknown not lowered yet"); return;
L_08B16600:
    rt.unsupported(0x08B16600u, 0x746F6972u, "unknown not lowered yet"); return;
L_08B16610:
    rt.unsupported(0x08B16610u, 0x746F6972u, "unknown not lowered yet"); return;
L_08B1661C:
    rt.unsupported(0x08B1661Cu, 0x746F6972u, "unknown not lowered yet"); return;
L_08B1662C:
    rt.unsupported(0x08B1662Cu, 0x746F6972u, "unknown not lowered yet"); return;
L_08B16638:
    rt.unsupported(0x08B16638u, 0x746F6972u, "unknown not lowered yet"); return;
L_08B16648:
    rt.unsupported(0x08B16648u, 0x746F6972u, "unknown not lowered yet"); return;
L_08B16654:
    rt.unsupported(0x08B16654u, 0x69727473u, "unknown not lowered yet"); return;
L_08B1665C:
    rt.unsupported(0x08B1665Cu, 0x69727473u, "unknown not lowered yet"); return;
L_08B16664:
    rt.unsupported(0x08B16664u, 0x69727473u, "unknown not lowered yet"); return;
L_08B1666C:
    rt.unsupported(0x08B1666Cu, 0x69727473u, "unknown not lowered yet"); return;
L_08B16674:
    rt.unsupported(0x08B16674u, 0x69727473u, "unknown not lowered yet"); return;
L_08B1667C:
    rt.unsupported(0x08B1667Cu, 0x69727473u, "unknown not lowered yet"); return;
L_08B16684:
    rt.unsupported(0x08B16684u, 0x69727473u, "unknown not lowered yet"); return;
L_08B1668C:
    rt.unsupported(0x08B1668Cu, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16698:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B1669Cu, 0x79616C70u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 401u, 0x08B33C64u>(ctx, &aot_mem); return;
    }
    goto L_08B166A0;
L_08B166A0:
    ctx.gpr[14] = (0u | 0u);
    goto L_08B166A4;
L_08B166A4:
    rt.unsupported(0x08B166A4u, 0x49525053u, "cop2/vfpu not lowered yet"); return;
L_08B166B0:
    rt.unsupported(0x08B166B0u, 0x454C4449u, "cop1? not lowered yet"); return;
L_08B166BC:
    rt.unsupported(0x08B166BCu, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B166C8:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B166CCu, 0x6B636F72u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 405u, 0x08B33C94u>(ctx, &aot_mem); return;
    }
    goto L_08B166D0;
L_08B166D0:
    ctx.gpr[14] = (0u | 0u);
    goto L_08B166D4;
L_08B166D4:
    rt.unsupported(0x08B166D4u, 0x69727073u, "unknown not lowered yet"); return;
L_08B166E4:
    ctx.execute_vfpu_vscl_ct<105u, 100u, 108u, 1u>();
    rt.unsupported(0x08B166E8u, 0x636F725Fu, "vfpu0 not lowered yet"); return;
L_08B166F0:
    rt.unsupported(0x08B166F0u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16704:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    ctx.execute_vfpu_vminmax(49u, 97u, 114u, 1u, false);
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 408u, 0x08B33CD0u>(ctx, &aot_mem); return;
    }
    goto L_08B1670C;
L_08B1670C:
    ctx.gpr[12] = (0u | 0u);
    goto L_08B16710;
L_08B16710:
    rt.unsupported(0x08B16710u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B1671C:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    ctx.execute_vfpu_vscl_ct<97u, 114u, 109u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 410u, 0x08B33CE8u>(ctx, &aot_mem); return;
    }
    goto L_08B16724;
L_08B16724:
    (void)(0u & 0u);
    goto L_08B16728;
L_08B16728:
    rt.unsupported(0x08B16728u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B1673C:
    rt.unsupported(0x08B1673Cu, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16750:
    rt.unsupported(0x08B16750u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B1675C:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B16760u, 0x77617363u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 413u, 0x08B33D28u>(ctx, &aot_mem); return;
    }
    goto L_08B16764;
L_08B16764:
    // nop
    goto L_08B16768;
L_08B16768:
    rt.unsupported(0x08B16768u, 0x69727073u, "unknown not lowered yet"); return;
L_08B16774:
    rt.unsupported(0x08B16774u, 0x454C4449u, "cop1? not lowered yet"); return;
L_08B16780:
    rt.unsupported(0x08B16780u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16790:
    rt.unsupported(0x08B16790u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B1679C:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B167A0u, 0x73636961u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 414u, 0x08B33D68u>(ctx, &aot_mem); return;
    }
    goto L_08B167A4;
L_08B167A4:
    ctx.gpr[14] = (0u + 0u);
    goto L_08B167A8;
L_08B167A8:
    rt.unsupported(0x08B167A8u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B167BC:
    rt.unsupported(0x08B167BCu, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B167C8:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B167CCu, 0x6B636162u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 415u, 0x08B33D94u>(ctx, &aot_mem); return;
    }
    goto L_08B167D0;
L_08B167D0:
    // nop
    goto L_08B167D4;
L_08B167D4:
    rt.unsupported(0x08B167D4u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B167E4:
    rt.unsupported(0x08B167E4u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B167F0:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B167F4u, 0x7466656Cu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 417u, 0x08B33DBCu>(ctx, &aot_mem); return;
    }
    goto L_08B167F8;
L_08B167F8:
    // nop
    goto L_08B167FC;
L_08B167FC:
    rt.unsupported(0x08B167FCu, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B1680C:
    rt.unsupported(0x08B1680Cu, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16818:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B1681Cu, 0x68676972u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 418u, 0x08B33DE4u>(ctx, &aot_mem); return;
    }
    goto L_08B16820;
L_08B16820:
    rt.unsupported(0x08B16820u, 0x00000074u, "special? not lowered yet"); return;
L_08B16824:
    rt.unsupported(0x08B16824u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16838:
    rt.unsupported(0x08B16838u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16848:
    // nop
    goto L_08B1684C;
L_08B1684C:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B16850u, 0x6B636F72u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 420u, 0x08B33E18u>(ctx, &aot_mem); return;
    }
    goto L_08B16854;
L_08B16854:
    rt.unsupported(0x08B16854u, 0x625F7465u, "vfpu0 not lowered yet"); return;
L_08B1685C:
    rt.unsupported(0x08B1685Cu, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16870:
    rt.unsupported(0x08B16870u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16880:
    // nop
    goto L_08B16884;
L_08B16884:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B16888u, 0x6B636F72u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 421u, 0x08B33E50u>(ctx, &aot_mem); return;
    }
    goto L_08B1688C;
L_08B1688C:
    ctx.execute_vfpu_vcmp_ct<116u, 95u, 1u, 5u>();
    ctx.gpr[12] = (ctx.gpr[3] | ctx.gpr[20]);
    goto L_08B16894;
L_08B16894:
    rt.unsupported(0x08B16894u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B168A8:
    rt.unsupported(0x08B168A8u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B168B8:
    rt.unsupported(0x08B168B8u, 0x00000074u, "special? not lowered yet"); return;
L_08B168BC:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B168C0u, 0x6B636F72u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 422u, 0x08B33E88u>(ctx, &aot_mem); return;
    }
    goto L_08B168C4;
L_08B168C4:
    rt.unsupported(0x08B168C4u, 0x725F7465u, "unknown not lowered yet"); return;
L_08B168D0:
    rt.unsupported(0x08B168D0u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B168E4:
    ctx.execute_vfpu_compare3(77u, 80u, 78u, 1u, 6u);
    rt.unsupported(0x08B168E8u, 0x00006574u, "special? not lowered yet"); return;
L_08B168EC:
    ctx.execute_vfpu_compare3(77u, 80u, 78u, 1u, 6u);
    ctx.execute_vfpu_compare3(116u, 101u, 108u, 1u, 6u);
    rt.unsupported(0x08B168F4u, 0x0000706Fu, "special? not lowered yet"); return;
L_08B168F8:
    rt.unsupported(0x08B168F8u, 0x454C4449u, "cop1? not lowered yet"); return;
L_08B16904:
    rt.unsupported(0x08B16904u, 0x454C4449u, "cop1? not lowered yet"); return;
L_08B1690C:
    rt.unsupported(0x08B1690Cu, 0x454C4449u, "cop1? not lowered yet"); return;
L_08B16918:
    rt.unsupported(0x08B16918u, 0x454C4449u, "cop1? not lowered yet"); return;
L_08B16924:
    rt.unsupported(0x08B16924u, 0x454C4449u, "cop1? not lowered yet"); return;
L_08B16930:
    rt.unsupported(0x08B16930u, 0x454C4449u, "cop1? not lowered yet"); return;
L_08B16940:
    ctx.gpr[12] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B16944;
L_08B16944:
    rt.unsupported(0x08B16944u, 0x454C4449u, "cop1? not lowered yet"); return;
L_08B16954:
    rt.unsupported(0x08B16954u, 0x454C4449u, "cop1? not lowered yet"); return;
L_08B16964:
    rt.unsupported(0x08B16964u, 0x484E4F44u, "cop2/vfpu not lowered yet"); return;
L_08B16974:
    rt.unsupported(0x08B16974u, 0x484E4F44u, "cop2/vfpu not lowered yet"); return;
L_08B16980:
    ctx.gpr[20] = (ctx.gpr[18] & 17482u);
    rt.unsupported(0x08B16984u, 0x786E615Fu, "unknown not lowered yet"); return;
L_08B16994:
    ctx.gpr[20] = (ctx.gpr[18] & 17482u);
    rt.unsupported(0x08B16998u, 0x7268735Fu, "unknown not lowered yet"); return;
L_08B169A0:
    ctx.gpr[20] = (ctx.gpr[2] | 17482u);
    ctx.execute_vfpu_vcmp_ct<100u, 105u, 1u, 15u>();
    rt.unsupported(0x08B169A8u, 0x745F6F64u, "unknown not lowered yet"); return;
L_08B169B0:
    ctx.gpr[20] = (ctx.gpr[10] | 17482u);
    ctx.execute_vfpu_vcmp_ct<99u, 97u, 1u, 15u>();
    ctx.execute_vfpu_compare3(109u, 95u, 100u, 1u, 6u);
    rt.unsupported(0x08B169BCu, 0x00006E77u, "special? not lowered yet"); return;
L_08B169C0:
    ctx.gpr[20] = (ctx.gpr[10] | 17482u);
    rt.unsupported(0x08B169C4u, 0x696F705Fu, "unknown not lowered yet"); return;
L_08B169CC:
    ctx.gpr[20] = (ctx.gpr[18] | 17482u);
    rt.unsupported(0x08B169D0u, 0x6369705Fu, "vfpu0 not lowered yet"); return;
L_08B169D8:
    ctx.gpr[20] = (ctx.gpr[18] | 17482u);
    ctx.execute_vfpu_compare3(95u, 100u, 111u, 1u, 6u);
    ctx.execute_vfpu_compare3(114u, 107u, 110u, 1u, 6u);
    ctx.gpr[13] = (0u - 0u);
    goto L_08B169E8;
L_08B169E8:
    ctx.gpr[18] = (ctx.gpr[10] & 16717u);
    rt.unsupported(0x08B169ECu, 0x696B735Fu, "unknown not lowered yet"); return;
L_08B169F4:
    ctx.gpr[18] = (ctx.gpr[18] & 16717u);
    ctx.execute_vfpu_vcmp_ct<99u, 101u, 1u, 15u>();
    rt.unsupported(0x08B169FCu, 0x6E615F6Cu, "vfpu3 not lowered yet"); return;
L_08B16A08:
    ctx.gpr[18] = (ctx.gpr[18] & 16717u);
    ctx.execute_vfpu_vcmp_ct<99u, 101u, 1u, 15u>();
    rt.unsupported(0x08B16A10u, 0x6E655F6Cu, "vfpu3 not lowered yet"); return;
L_08B16A18:
    ctx.gpr[18] = (ctx.gpr[18] & 16717u);
    ctx.execute_vfpu_vcmp_ct<99u, 101u, 1u, 15u>();
    rt.unsupported(0x08B16A20u, 0x61745F6Cu, "vfpu0 not lowered yet"); return;
L_08B16A28:
    ctx.gpr[18] = (ctx.gpr[18] & 16717u);
    ctx.execute_vfpu_compare3(95u, 102u, 111u, 1u, 6u);
    rt.unsupported(0x08B16A30u, 0x61745F74u, "vfpu0 not lowered yet"); return;
L_08B16A38:
    ctx.gpr[18] = (ctx.gpr[26] & 16717u);
    ctx.execute_vfpu_compare3(95u, 104u, 111u, 1u, 6u);
    ctx.gpr[13] = (ctx.gpr[3] - ctx.gpr[25]);
    goto L_08B16A44;
L_08B16A44:
    ctx.gpr[18] = (ctx.gpr[26] & 16717u);
    rt.unsupported(0x08B16A48u, 0x746F6E5Fu, "unknown not lowered yet"); return;
L_08B16A54:
    ctx.gpr[18] = (ctx.gpr[26] & 16717u);
    rt.unsupported(0x08B16A58u, 0x746F6E5Fu, "unknown not lowered yet"); return;
L_08B16A64:
    ctx.gpr[12] = (ctx.gpr[10] & 16723u);
    rt.unsupported(0x08B16A68u, 0x6972625Fu, "unknown not lowered yet"); return;
L_08B16A78:
    ctx.gpr[12] = (ctx.gpr[18] & 16723u);
    ctx.execute_vfpu_vcmp_ct<105u, 100u, 1u, 15u>();
    ctx.execute_vfpu_vscl_ct<101u, 95u, 115u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<116u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_d); }
    // nop
    goto L_08B16A8C;
L_08B16A8C:
    ctx.gpr[12] = (ctx.gpr[18] & 16723u);
    rt.unsupported(0x08B16A90u, 0x6165735Fu, "vfpu0 not lowered yet"); return;
L_08B16AA0:
    ctx.gpr[12] = (ctx.gpr[26] & 16723u);
    rt.unsupported(0x08B16AA4u, 0x6165735Fu, "vfpu0 not lowered yet"); return;
L_08B16AB0:
    // nop
    goto L_08B16AB4;
L_08B16AB4:
    ctx.gpr[12] = (ctx.gpr[26] & 16723u);
    rt.unsupported(0x08B16AB8u, 0x6165735Fu, "vfpu0 not lowered yet"); return;
L_08B16AC4:
    // nop
    goto L_08B16AC8;
L_08B16AC8:
    ctx.gpr[12] = (ctx.gpr[26] & 16723u);
    rt.unsupported(0x08B16ACCu, 0x7469735Fu, "unknown not lowered yet"); return;
L_08B16AD8:
    ctx.gpr[12] = (ctx.gpr[2] | 16723u);
    rt.unsupported(0x08B16ADCu, 0x7375645Fu, "unknown not lowered yet"); return;
L_08B16AE8:
    ctx.gpr[12] = (ctx.gpr[2] | 16723u);
    rt.unsupported(0x08B16AECu, 0x7269675Fu, "unknown not lowered yet"); return;
L_08B16AF8:
    ctx.gpr[12] = (ctx.gpr[18] | 16723u);
    rt.unsupported(0x08B16AFCu, 0x676E615Fu, "vfpu1 not lowered yet"); return;
L_08B16B0C:
    ctx.gpr[12] = (ctx.gpr[18] | 16723u);
    ctx.execute_vfpu_vcmp_ct<105u, 100u, 1u, 15u>();
    ctx.execute_vfpu_vscl_ct<101u, 95u, 115u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<116u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_d); }
    // nop
    goto L_08B16B20;
L_08B16B20:
    ctx.gpr[12] = (ctx.gpr[26] | 16723u);
    ctx.execute_vfpu_compare3(95u, 108u, 111u, 1u, 6u);
    rt.unsupported(0x08B16B28u, 0x74756F6Bu, "unknown not lowered yet"); return;
L_08B16B30:
    ctx.gpr[3] = (ctx.gpr[18] & 18774u);
    rt.unsupported(0x08B16B34u, 0x696F705Fu, "unknown not lowered yet"); return;
L_08B16B44:
    ctx.gpr[3] = (ctx.gpr[26] & 18774u);
    ctx.execute_vfpu_vhdp(95u, 119u, 97u, 1u);
    rt.unsupported(0x08B16B4Cu, 0x00000074u, "special? not lowered yet"); return;
L_08B16B50:
    ctx.gpr[3] = (ctx.gpr[26] & 18774u);
    rt.unsupported(0x08B16B54u, 0x6369705Fu, "vfpu0 not lowered yet"); return;
L_08B16B60:
    // nop
    goto L_08B16B64;
L_08B16B64:
    ctx.gpr[3] = (ctx.gpr[2] | 18774u);
    rt.unsupported(0x08B16B68u, 0x7261635Fu, "unknown not lowered yet"); return;
L_08B16B74:
    ctx.gpr[3] = (ctx.gpr[2] | 18774u);
    ctx.execute_vfpu_vcmp_ct<99u, 101u, 1u, 15u>();
    ctx.execute_vfpu_compare3(108u, 95u, 108u, 1u, 6u);
    rt.unsupported(0x08B16B80u, 0x00006B6Fu, "special? not lowered yet"); return;
L_08B16B84:
    ctx.gpr[3] = (ctx.gpr[2] | 18774u);
    rt.unsupported(0x08B16B88u, 0x6172635Fu, "vfpu0 not lowered yet"); return;
L_08B16B94:
    ctx.gpr[3] = (ctx.gpr[18] | 18774u);
    ctx.execute_vfpu_vcmp_ct<99u, 101u, 1u, 15u>();
    rt.unsupported(0x08B16B9Cu, 0x6E615F6Cu, "vfpu3 not lowered yet"); return;
L_08B16BA4:
    rt.unsupported(0x08B16BA4u, 0x72756F74u, "unknown not lowered yet"); return;
L_08B16BB0:
    rt.unsupported(0x08B16BB0u, 0x72756F74u, "unknown not lowered yet"); return;
L_08B16BBC:
    rt.unsupported(0x08B16BBCu, 0x72756F74u, "unknown not lowered yet"); return;
L_08B16BC8:
    ctx.gpr[3] = (ctx.gpr[18] & 16717u);
    ctx.execute_vfpu_vscl_ct<95u, 112u, 108u, 1u>();
    ctx.gpr[12] = (0u + 0u);
    goto L_08B16BD4;
L_08B16BD4:
    ctx.gpr[3] = (ctx.gpr[26] | 18774u);
    ctx.execute_vfpu_compare3(95u, 112u, 114u, 1u, 6u);
    rt.unsupported(0x08B16BDCu, 0x69775F64u, "unknown not lowered yet"); return;
L_08B16BE8:
    rt.unsupported(0x08B16BE8u, 0x4B4C4157u, "cop2/vfpu not lowered yet"); return;
L_08B16BF8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B16BFCu, 0x69766963u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 17u, 0x08B2C144u>(ctx, &aot_mem); return;
    }
    goto L_08B16C00;
L_08B16C00:
    // nop
    goto L_08B16C04;
L_08B16C04:
    rt.unsupported(0x08B16C04u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16C10:
    rt.unsupported(0x08B16C10u, 0x69727073u, "unknown not lowered yet"); return;
L_08B16C1C:
    rt.unsupported(0x08B16C1Cu, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16C20:
    rt.unsupported(0x08B16C20u, 0x6E61675Fu, "vfpu3 not lowered yet"); return;
L_08B16C28:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B16C2Cu, 0x676E6167u, "vfpu1 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 8u, 0x08B341F4u>(ctx, &aot_mem); return;
    }
    goto L_08B16C30;
L_08B16C30:
    rt.unsupported(0x08B16C30u, 0x00000031u, "special? not lowered yet"); return;
L_08B16C34:
    rt.unsupported(0x08B16C34u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16C40:
    rt.unsupported(0x08B16C40u, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16C4C:
    rt.unsupported(0x08B16C4Cu, 0x616D6F77u, "vfpu0 not lowered yet"); return;
L_08B16C5C:
    rt.unsupported(0x08B16C5Cu, 0x6B6C6177u, "unknown not lowered yet"); return;
L_08B16C68:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    ctx.execute_vfpu_compare3(102u, 97u, 116u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 11u, 0x08B34234u>(ctx, &aot_mem); return;
    }
    goto L_08B16C70;
L_08B16C70:
    ctx.gpr[12] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B16C74;
L_08B16C74:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vscl_ct<109u, 97u, 108u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 167u, 0x08B2A9A0u>(ctx, &aot_mem); return;
    }
    goto L_08B16C7C;
L_08B16C7C:
    rt.unsupported(0x08B16C7Cu, 0x00000041u, "special? not lowered yet"); return;
L_08B16C80:
    rt.unsupported(0x08B16C80u, 0x616D6F77u, "vfpu0 not lowered yet"); return;
L_08B16C90:
    rt.unsupported(0x08B16C90u, 0x616D6F77u, "vfpu0 not lowered yet"); return;
L_08B16C9C:
    rt.unsupported(0x08B16C9Cu, 0x616D6F77u, "vfpu0 not lowered yet"); return;
L_08B16CB0:
    rt.unsupported(0x08B16CB0u, 0x616D6F77u, "vfpu0 not lowered yet"); return;
L_08B16CC0:
    rt.unsupported(0x08B16CC0u, 0x616D6F77u, "vfpu0 not lowered yet"); return;
L_08B16CD0:
    rt.unsupported(0x08B16CD0u, 0x616D6F77u, "vfpu0 not lowered yet"); return;
L_08B16CE0:
    rt.unsupported(0x08B16CE0u, 0x616D6F77u, "vfpu0 not lowered yet"); return;
L_08B16CF0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.execute_vfpu_vscl_ct<109u, 97u, 108u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 173u, 0x08B2AA1Cu>(ctx, &aot_mem); return;
    }
    goto L_08B16CF8;
L_08B16CF8:
    (void)(0u >> 1u);
    goto L_08B16CFC;
L_08B16CFC:
    rt.unsupported(0x08B16CFCu, 0x74616B73u, "unknown not lowered yet"); return;
L_08B16D08:
    rt.unsupported(0x08B16D08u, 0x74616B73u, "unknown not lowered yet"); return;
L_08B16D18:
    rt.unsupported(0x08B16D18u, 0x74616B73u, "unknown not lowered yet"); return;
L_08B16D24:
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[3] : ctx.gpr[14]);
    goto L_08B16D28;
L_08B16D28:
    rt.unsupported(0x08B16D28u, 0x00646570u, "special? not lowered yet"); return;
L_08B16D2C:
    rt.unsupported(0x08B16D2Cu, 0x006E6176u, "special? not lowered yet"); return;
L_08B16D30:
    rt.unsupported(0x08B16D30u, 0x63616F63u, "vfpu0 not lowered yet"); return;
L_08B16D38:
    ctx.execute_vfpu_vscl_ct<98u, 105u, 107u, 1u>();
    rt.unsupported(0x08B16D3Cu, 0x00000073u, "special? not lowered yet"); return;
L_08B16D40:
    ctx.execute_vfpu_vscl_ct<98u, 105u, 107u, 1u>();
    rt.unsupported(0x08B16D44u, 0x00000076u, "special? not lowered yet"); return;
L_08B16D48:
    ctx.execute_vfpu_vscl_ct<98u, 105u, 107u, 1u>();
    rt.unsupported(0x08B16D4Cu, 0x00000068u, "special? not lowered yet"); return;
L_08B16D50:
    ctx.execute_vfpu_vscl_ct<98u, 105u, 107u, 1u>();
    (void)(0u & 0u);
    goto L_08B16D58;
L_08B16D58:
    rt.unsupported(0x08B16D58u, 0x72616E75u, "unknown not lowered yet"); return;
L_08B16D60:
    ctx.execute_vfpu_vscl_ct<115u, 99u, 114u, 1u>();
    rt.unsupported(0x08B16D64u, 0x76726477u, "unknown not lowered yet"); return;
L_08B16D6C:
    ctx.execute_vfpu_vhdp(107u, 110u, 105u, 1u);
    (void)(0u | 0u);
    goto L_08B16D74;
L_08B16D74:
    ctx.execute_vfpu_vscl_ct<98u, 97u, 115u, 1u>();
    ctx.execute_vfpu_vcmp_ct<97u, 108u, 1u, 2u>();
    // nop
    goto L_08B16D80;
L_08B16D80:
    ctx.execute_vfpu_vhdp(103u, 111u, 108u, 1u);
    rt.unsupported(0x08B16D84u, 0x62756C63u, "vfpu0 not lowered yet"); return;
L_08B16D8C:
    rt.unsupported(0x08B16D8Cu, 0x69616863u, "unknown not lowered yet"); return;
L_08B16D98:
    rt.unsupported(0x08B16D98u, 0x68747970u, "unknown not lowered yet"); return;
L_08B16DA0:
    rt.unsupported(0x08B16DA0u, 0x746C6F63u, "unknown not lowered yet"); return;
L_08B16DA8:
    rt.unsupported(0x08B16DA8u, 0x746F6873u, "unknown not lowered yet"); return;
L_08B16DB0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    rt.unsupported(0x08B16DB4u, 0x00000079u, "special? not lowered yet"); return;
L_08B16DB8:
    rt.unsupported(0x08B16DB8u, 0x00636574u, "special? not lowered yet"); return;
L_08B16DBC:
    rt.unsupported(0x08B16DBCu, 0x00697A75u, "special? not lowered yet"); return;
L_08B16DC0:
    ctx.execute_vfpu_vcmp_ct<105u, 102u, 1u, 2u>();
    (void)(0u | 0u);
    goto L_08B16DC8;
L_08B16DC8:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[1]) < static_cast<std::int32_t>(ctx.gpr[16]) ? ctx.gpr[1] : ctx.gpr[16]);
    goto L_08B16DCC;
L_08B16DCC:
    rt.unsupported(0x08B16DCCu, 0x70696E73u, "unknown not lowered yet"); return;
L_08B16DD4:
    rt.unsupported(0x08B16DD4u, 0x6E657267u, "vfpu3 not lowered yet"); return;
L_08B16DDC:
    ctx.execute_vfpu_vminmax(102u, 108u, 97u, 1u, false);
    (void)(0u | 0u);
    goto L_08B16DE4;
L_08B16DE4:
    rt.unsupported(0x08B16DE4u, 0x6B636F72u, "unknown not lowered yet"); return;
L_08B16DF0:
    rt.unsupported(0x08B16DF0u, 0x6964656Du, "unknown not lowered yet"); return;
L_08B16DF8:
    rt.unsupported(0x08B16DF8u, 0x626E7573u, "vfpu0 not lowered yet"); return;
L_08B16E04:
    rt.unsupported(0x08B16E04u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B16E10:
    rt.unsupported(0x08B16E10u, 0x746F6972u, "unknown not lowered yet"); return;
L_08B16E18:
    rt.unsupported(0x08B16E18u, 0x69727473u, "unknown not lowered yet"); return;
L_08B16E20:
    rt.unsupported(0x08B16E20u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B16E28:
    rt.unsupported(0x08B16E28u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B16E38:
    rt.unsupported(0x08B16E38u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B16E48:
    rt.unsupported(0x08B16E48u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B16E58:
    rt.unsupported(0x08B16E58u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B16E64:
    rt.unsupported(0x08B16E64u, 0x73636961u, "unknown not lowered yet"); return;
L_08B16E6C:
    rt.unsupported(0x08B16E6Cu, 0x79616C70u, "unknown not lowered yet"); return;
L_08B16E78:
    ctx.execute_vfpu_vhdp(115u, 104u, 117u, 1u);
    ctx.gpr[13] = (ctx.gpr[3] ^ ctx.gpr[5]);
    goto L_08B16E80;
L_08B16E80:
    ctx.execute_vfpu_vminmax(111u, 108u, 100u, 1u, false);
    ctx.gpr[13] = (0u + 0u);
    goto L_08B16E88;
L_08B16E88:
    rt.unsupported(0x08B16E88u, 0x676E6167u, "vfpu1 not lowered yet"); return;
L_08B16E90:
    rt.unsupported(0x08B16E90u, 0x676E6167u, "vfpu1 not lowered yet"); return;
L_08B16E98:
    ctx.execute_vfpu_vminmax(102u, 97u, 116u, 1u, false);
    ctx.gpr[13] = (0u + 0u);
    goto L_08B16EA0;
L_08B16EA0:
    ctx.execute_vfpu_vhdp(111u, 108u, 100u, 1u);
    rt.unsupported(0x08B16EA4u, 0x616D7461u, "vfpu0 not lowered yet"); return;
L_08B16EAC:
    rt.unsupported(0x08B16EACu, 0x67676F6Au, "vfpu1 not lowered yet"); return;
L_08B16EB4:
    rt.unsupported(0x08B16EB4u, 0x616D6F77u, "vfpu0 not lowered yet"); return;
L_08B16EBC:
    rt.unsupported(0x08B16EBCu, 0x706F6873u, "unknown not lowered yet"); return;
L_08B16EC8:
    rt.unsupported(0x08B16EC8u, 0x79737562u, "unknown not lowered yet"); return;
L_08B16ED4:
    rt.unsupported(0x08B16ED4u, 0x79786573u, "unknown not lowered yet"); return;
L_08B16EE0:
    rt.unsupported(0x08B16EE0u, 0x77746166u, "unknown not lowered yet"); return;
L_08B16EEC:
    rt.unsupported(0x08B16EECu, 0x77646C6Fu, "unknown not lowered yet"); return;
L_08B16EF8:
    rt.unsupported(0x08B16EF8u, 0x77676F6Au, "unknown not lowered yet"); return;
L_08B16F04:
    rt.unsupported(0x08B16F04u, 0x696E6170u, "unknown not lowered yet"); return;
L_08B16F10:
    rt.unsupported(0x08B16F10u, 0x74616B73u, "unknown not lowered yet"); return;
L_08B16F18:
    rt.unsupported(0x08B16F18u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B16F24:
    rt.unsupported(0x08B16F24u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B16F30:
    rt.unsupported(0x08B16F30u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B16F3C:
    rt.unsupported(0x08B16F3Cu, 0x6B636F72u, "unknown not lowered yet"); return;
L_08B16F48:
    rt.unsupported(0x08B16F48u, 0x6B636F72u, "unknown not lowered yet"); return;
L_08B16F54:
    rt.unsupported(0x08B16F54u, 0x6B636F72u, "unknown not lowered yet"); return;
L_08B16F60:
    rt.unsupported(0x08B16F60u, 0x4D5F5343u, "unknown not lowered yet"); return;
L_08B16F68:
    rt.unsupported(0x08B16F68u, 0x484E4F44u, "cop2/vfpu not lowered yet"); return;
L_08B16F6C:
    rt.unsupported(0x08B16F6Cu, 0x00000032u, "special? not lowered yet"); return;
L_08B16F70:
    rt.unsupported(0x08B16F70u, 0x484E4F44u, "cop2/vfpu not lowered yet"); return;
L_08B16F78:
    ctx.gpr[20] = (ctx.gpr[18] & 17482u);
    // nop
    goto L_08B16F80;
L_08B16F80:
    ctx.gpr[20] = (ctx.gpr[2] | 17482u);
    // nop
    goto L_08B16F88;
L_08B16F88:
    ctx.gpr[20] = (ctx.gpr[10] | 17482u);
    // nop
    goto L_08B16F90;
L_08B16F90:
    ctx.gpr[20] = (ctx.gpr[18] | 17482u);
    // nop
    goto L_08B16F98;
L_08B16F98:
    ctx.gpr[18] = (ctx.gpr[10] & 16717u);
    // nop
    goto L_08B16FA0;
L_08B16FA0:
    ctx.gpr[18] = (ctx.gpr[18] & 16717u);
    // nop
    goto L_08B16FA8;
L_08B16FA8:
    ctx.gpr[18] = (ctx.gpr[26] & 16717u);
    // nop
    goto L_08B16FB0;
L_08B16FB0:
    ctx.gpr[12] = (ctx.gpr[10] & 16723u);
    // nop
    goto L_08B16FB8;
L_08B16FB8:
    ctx.gpr[12] = (ctx.gpr[18] & 16723u);
    // nop
    goto L_08B16FC0;
L_08B16FC0:
    ctx.gpr[12] = (ctx.gpr[26] & 16723u);
    // nop
    goto L_08B16FC8;
L_08B16FC8:
    ctx.gpr[12] = (ctx.gpr[2] | 16723u);
    // nop
    goto L_08B16FD0;
L_08B16FD0:
    ctx.gpr[12] = (ctx.gpr[18] | 16723u);
    // nop
    goto L_08B16FD8;
L_08B16FD8:
    ctx.gpr[12] = (ctx.gpr[26] | 16723u);
    // nop
    goto L_08B16FE0;
L_08B16FE0:
    ctx.gpr[3] = (ctx.gpr[18] & 18774u);
    // nop
    goto L_08B16FE8;
L_08B16FE8:
    ctx.gpr[3] = (ctx.gpr[26] & 18774u);
    // nop
    goto L_08B16FF0;
L_08B16FF0:
    ctx.gpr[3] = (ctx.gpr[2] | 18774u);
    // nop
    goto L_08B16FF8;
L_08B16FF8:
    ctx.gpr[3] = (ctx.gpr[18] | 18774u);
    // nop
    goto L_08B17000;
L_08B17000:
    rt.unsupported(0x08B17004u, 0x00545349u, "control flow in delay slot"); return;
L_08B17008:
    ctx.gpr[3] = (ctx.gpr[18] & 16717u);
    // nop
    goto L_08B17010;
L_08B17010:
    ctx.gpr[3] = (ctx.gpr[26] | 18774u);
    // nop
    goto L_08B17018;
L_08B17018:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<72u, 1u>(vfpu_d); }
    // nop
    goto L_08B17020;
L_08B17020:
    rt.unsupported(0x08B17020u, 0x6B63654Eu, "unknown not lowered yet"); return;
L_08B17028:
    rt.unsupported(0x08B17028u, 0x6E697053u, "vfpu3 not lowered yet"); return;
L_08B17030:
    rt.unsupported(0x08B17030u, 0x6E697053u, "vfpu3 not lowered yet"); return;
L_08B17038:
    rt.unsupported(0x08B17038u, 0x766C6550u, "unknown not lowered yet"); return;
L_08B17040:
    rt.unsupported(0x08B17040u, 0x746F6F52u, "unknown not lowered yet"); return;
L_08B17048:
    ctx.gpr[16] = (ctx.gpr[3] & 26946u);
    rt.unsupported(0x08B1704Cu, 0x20522031u, "unknown not lowered yet"); return;
L_08B1705C:
    rt.unsupported(0x08B1705Cu, 0x70552052u, "unknown not lowered yet"); return;
L_08B17068:
    ctx.execute_vfpu_compare3(82u, 32u, 70u, 1u, 6u);
    rt.unsupported(0x08B1706Cu, 0x72616572u, "unknown not lowered yet"); return;
L_08B17074:
    rt.unsupported(0x08B17074u, 0x61482052u, "vfpu0 not lowered yet"); return;
L_08B1707C:
    rt.unsupported(0x08B1707Cu, 0x69462052u, "unknown not lowered yet"); return;
L_08B17088:
    ctx.gpr[16] = (ctx.gpr[3] & 26946u);
    rt.unsupported(0x08B1708Cu, 0x204C2031u, "unknown not lowered yet"); return;
L_08B1709C:
    rt.unsupported(0x08B1709Cu, 0x7055204Cu, "unknown not lowered yet"); return;
L_08B170A8:
    ctx.execute_vfpu_compare3(76u, 32u, 70u, 1u, 6u);
    rt.unsupported(0x08B170ACu, 0x72616572u, "unknown not lowered yet"); return;
L_08B170B4:
    rt.unsupported(0x08B170B4u, 0x6148204Cu, "vfpu0 not lowered yet"); return;
L_08B170BC:
    rt.unsupported(0x08B170BCu, 0x6946204Cu, "unknown not lowered yet"); return;
L_08B170C8:
    rt.unsupported(0x08B170C8u, 0x6854204Cu, "unknown not lowered yet"); return;
L_08B170D0:
    rt.unsupported(0x08B170D0u, 0x6143204Cu, "vfpu0 not lowered yet"); return;
L_08B170D8:
    ctx.execute_vfpu_compare3(76u, 32u, 70u, 1u, 6u);
    rt.unsupported(0x08B170DCu, 0x0000746Fu, "special? not lowered yet"); return;
L_08B170E0:
    rt.unsupported(0x08B170E0u, 0x68542052u, "unknown not lowered yet"); return;
L_08B170E8:
    rt.unsupported(0x08B170E8u, 0x61432052u, "vfpu0 not lowered yet"); return;
L_08B170F0:
    ctx.execute_vfpu_compare3(82u, 32u, 70u, 1u, 6u);
    rt.unsupported(0x08B170F4u, 0x0000746Fu, "special? not lowered yet"); return;
L_08B1724C:
    rt.unsupported(0x08B1724Cu, 0x74696E49u, "unknown not lowered yet"); return;
L_08B1726C:
    ctx.execute_vfpu_vcmp_ct<66u, 117u, 1u, 3u>();
    rt.unsupported(0x08B17270u, 0x4974656Cu, "cop2/vfpu not lowered yet"); return;
L_08B173BC:
    rt.unsupported(0x08B173C0u, 0x08932460u, "control flow in delay slot"); return;
L_08B17410:
    rt.unsupported(0x08B17414u, 0x504D4153u, "control flow in delay slot"); return;
L_08B17418:
    rt.unsupported(0x08B17418u, 0x495F454Cu, "cop2/vfpu not lowered yet"); return;
L_08B17424:
    rt.unsupported(0x08B17424u, 0x202A2A2Au, "unknown not lowered yet"); return;
L_08B1743C:
    if (ctx.gpr[10] != ctx.gpr[19]) {
    rt.unsupported(0x08B17440u, 0x4E455053u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 672u, 0x08B1F4E8u>(ctx, &aot_mem); return;
    }
    goto L_08B17444;
L_08B17444:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 22u, 0x08A88110u>(ctx, &aot_mem); return;
L_08B1744C:
    rt.unsupported(0x08B1744Cu, 0x4552202Au, "cop1? not lowered yet"); return;
L_08B17458:
    rt.unsupported(0x08B17458u, 0x454D202Au, "cop1? not lowered yet"); return;
L_08B17464:
    rt.unsupported(0x08B17464u, 0x4F4E202Au, "unknown not lowered yet"); return;
L_08B17468:
    rt.unsupported(0x08B17468u, 0x44454D20u, "unsupported CFC1 control register"); return;
    jump_target = 0u;
    ctx.gpr[8] = (0x08B17474u);
    rt.unsupported(0x08B17470u, 0x20756F59u, "unknown not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B17474u) goto L_08B17474;
    return;
L_08B17470:
    rt.unsupported(0x08B17470u, 0x20756F59u, "unknown not lowered yet"); return;
L_08B17474:
    ctx.execute_vfpu_vcmp_ct<117u, 108u, 1u, 0u>();
    ctx.execute_vfpu_compare3(101u, 100u, 32u, 1u, 6u);
    rt.unsupported(0x08B1747Cu, 0x74207475u, "unknown not lowered yet"); return;
L_08B17494:
    rt.unsupported(0x08B17494u, 0x202C6B72u, "unknown not lowered yet"); return;
L_08B174AC:
    rt.unsupported(0x08B174ACu, 0x4552202Au, "cop1? not lowered yet"); return;
L_08B174B8:
    rt.unsupported(0x08B174B8u, 0x4544202Au, "cop1? not lowered yet"); return;
L_08B174C8:
    rt.unsupported(0x08B174C8u, 0x4F4E202Au, "unknown not lowered yet"); return;
L_08B174DC:
    if (0u == 0u) (void)(0u);
    goto L_08B174E0;
L_08B174E0:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    if (0u == 0u) (void)(0u);
    goto L_08B174F8;
L_08B174F8:
    rt.unsupported(0x08B174F8u, 0x202A2A2Au, "unknown not lowered yet"); return;
L_08B17504:
    rt.unsupported(0x08B17504u, 0x454D4147u, "cop1? not lowered yet"); return;
L_08B17510:
    ctx.execute_vfpu_vscl_ct<80u, 111u, 119u, 1u>();
    ctx.execute_vfpu_vcmp_ct<67u, 97u, 1u, 2u>();
    rt.unsupported(0x08B17518u, 0x6361626Cu, "vfpu0 not lowered yet"); return;
L_08B17520:
    rt.unsupported(0x08B17520u, 0x43444D55u, "unknown not lowered yet"); return;
L_08B1752C:
    rt.unsupported(0x08B1752Cu, 0x74697845u, "unknown not lowered yet"); return;
L_08B1753C:
    rt.unsupported(0x08B1753Cu, 0x4D737953u, "unknown not lowered yet"); return;
L_08B17548:
    if (ctx.gpr[25] != 0u) {
    rt.unsupported(0x08B1754Cu, 0x49544941u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 241u, 0x08B21DF4u>(ctx, &aot_mem); return;
    }
    goto L_08B17550;
L_08B17550:
    rt.unsupported(0x08B17550u, 0x203A474Eu, "unknown not lowered yet"); return;
L_08B17560:
    if (ctx.gpr[17] == 0u) {
    rt.unsupported(0x08B17564u, 0x20444145u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 242u, 0x08B21E0Cu>(ctx, &aot_mem); return;
    }
    goto L_08B17568;
L_08B17568:
    rt.unsupported(0x08B17568u, 0x4C494146u, "unknown not lowered yet"); return;
L_08B17578:
    rt.unsupported(0x08B17578u, 0x7325203Au, "unknown not lowered yet"); return;
L_08B17588:
    rt.unsupported(0x08B17588u, 0x202A2A2Au, "unknown not lowered yet"); return;
L_08B17598:
    ctx.execute_vfpu_vscl_ct<32u, 115u, 99u, 1u>();
    ctx.execute_vfpu_vscl_ct<73u, 111u, 82u, 1u>();
    ctx.gpr[8] = (ctx.gpr[1] & 25697u);
    ctx.gpr[16] = (ctx.gpr[1] ^ 9592u);
    rt.unsupported(0x08B175A8u, 0x000A2978u, "special? not lowered yet"); return;
L_08B175C0:
    rt.unsupported(0x08B175C0u, 0x0000005Eu, "special? not lowered yet"); return;
L_08B175D0:
    ctx.gpr[31] = (ctx.gpr[26] & 16711u);
    // nop
    goto L_08B175D8;
L_08B175D8:
    ctx.gpr[31] = (ctx.gpr[10] & 16711u);
    // nop
    goto L_08B175E0;
L_08B175E0:
    ctx.gpr[31] = (ctx.gpr[18] & 16711u);
    // nop
    goto L_08B175E8;
L_08B175E8:
    ctx.gpr[31] = (ctx.gpr[10] & 16711u);
    rt.unsupported(0x08B175ECu, 0x00000037u, "special? not lowered yet"); return;
L_08B175F0:
    ctx.gpr[31] = (ctx.gpr[10] & 16711u);
    rt.unsupported(0x08B175F4u, 0x00000035u, "special? not lowered yet"); return;
L_08B175F8:
    ctx.gpr[31] = (ctx.gpr[10] & 16711u);
    rt.unsupported(0x08B175FCu, 0x00000036u, "special? not lowered yet"); return;
L_08B17600:
    ctx.gpr[31] = (ctx.gpr[18] & 16711u);
    rt.unsupported(0x08B17604u, 0x00000032u, "special? not lowered yet"); return;
L_08B17608:
    ctx.gpr[31] = (ctx.gpr[2] | 16711u);
    // nop
    goto L_08B17610;
L_08B17610:
    ctx.gpr[31] = (ctx.gpr[10] | 16711u);
    // nop
    goto L_08B17618;
L_08B17618:
    ctx.gpr[31] = (ctx.gpr[18] | 16711u);
    // nop
    goto L_08B17620;
L_08B17620:
    ctx.gpr[31] = (ctx.gpr[18] | 16711u);
    (void)(0u >> 1u);
    goto L_08B17628;
L_08B17628:
    ctx.gpr[31] = (ctx.gpr[26] | 16711u);
    // nop
    goto L_08B17630;
L_08B17630:
    ctx.gpr[31] = (ctx.gpr[26] | 16711u);
    (void)(0u >> 1u);
    goto L_08B17638;
L_08B17638:
    ctx.gpr[31] = (ctx.gpr[2] ^ 16711u);
    // nop
    goto L_08B17640;
L_08B17640:
    ctx.gpr[31] = (ctx.gpr[18] & 16711u);
    rt.unsupported(0x08B17644u, 0x00000033u, "special? not lowered yet"); return;
L_08B17648:
    ctx.gpr[31] = (ctx.gpr[18] & 16711u);
    rt.unsupported(0x08B1764Cu, 0x00000034u, "special? not lowered yet"); return;
L_08B17650:
    rt.unsupported(0x08B17650u, 0x20584946u, "unknown not lowered yet"); return;
L_08B17668:
    if (ctx.gpr[1] == 0u) {
    rt.unsupported(0x08B1766Cu, 0x4559414Cu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 51u, 0x08B293A4u>(ctx, &aot_mem); return;
    }
    goto L_08B17670;
L_08B17670:
    ctx.gpr[1] = (ctx.lo);
    goto L_08B17674;
L_08B17674:
    rt.unsupported(0x08B17674u, 0x74736544u, "unknown not lowered yet"); return;
L_08B17698:
    rt.unsupported(0x08B1769Cu, 0x00444548u, "control flow in delay slot"); return;
L_08B176A0:
    ctx.gpr[31] = (ctx.gpr[18] & 16711u);
    rt.unsupported(0x08B176A4u, 0x00000031u, "special? not lowered yet"); return;
L_08B176A8:
    rt.unsupported(0x08B176A8u, 0x74736F50u, "unknown not lowered yet"); return;
L_08B176C0:
    if (static_cast<std::int32_t>(ctx.gpr[11]) > 0) {
    ctx.execute_vfpu_vcmp_ct<88u, 80u, 1u, 0u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 118u, 0x08B20C30u>(ctx, &aot_mem); return;
    }
    goto L_08B176C8;
L_08B176C8:
    rt.unsupported(0x08B176CCu, 0x5B5D6625u, "control flow in delay slot"); return;
L_08B176D0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) <= 0) {
    rt.unsupported(0x08B176D4u, 0x205D6625u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 102u, 0x08B30F68u>(ctx, &aot_mem); return;
    }
    goto L_08B176D8;
L_08B176D8:
    rt.unsupported(0x08B176D8u, 0x616C5059u, "vfpu0 not lowered yet"); return;
L_08B179FC:
    rt.unsupported(0x08B179FCu, 0x79616C70u, "unknown not lowered yet"); return;
L_08B17C78:
    ctx.execute_vfpu_compare3(109u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B17C7Cu, 0x61207972u, "vfpu0 not lowered yet"); return;
L_08B17CA0:
    rt.unsupported(0x08B17CA0u, 0x74736544u, "unknown not lowered yet"); return;
L_08B17D68:
    ctx.execute_vfpu_vcmp_ct<111u, 114u, 1u, 7u>();
    rt.unsupported(0x08B17D6Cu, 0x72745364u, "unknown not lowered yet"); return;
L_08B17D80:
    ctx.execute_vfpu_vcmp_ct<111u, 114u, 1u, 7u>();
    rt.unsupported(0x08B17D84u, 0x72745364u, "unknown not lowered yet"); return;
L_08B17D90:
    rt.unsupported(0x08B17D90u, 0x204F4F54u, "unknown not lowered yet"); return;
L_08B17D9C:
    rt.unsupported(0x08B17D9Cu, 0x43494D41u, "unknown not lowered yet"); return;
L_08B17DA4:
    rt.unsupported(0x08B17DA4u, 0x63207825u, "vfpu0 not lowered yet"); return;
L_08B17DC0:
    rt.unsupported(0x08B17DC0u, 0x726F5763u, "unknown not lowered yet"); return;
L_08B17DE0:
    rt.unsupported(0x08B17DE0u, 0x4F525245u, "unknown not lowered yet"); return;
L_08B17E1C:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    rt.unsupported(0x08B17E20u, 0x6E696D61u, "vfpu3 not lowered yet"); return;
L_08B17E40:
    rt.unsupported(0x08B17E40u, 0x474E494Du, "cop1? not lowered yet"); return;
L_08B17E4C:
    rt.unsupported(0x08B17E4Cu, 0x4C4C4543u, "unknown not lowered yet"); return;
L_08B17E64:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    rt.unsupported(0x08B17E68u, 0x6E696D61u, "vfpu3 not lowered yet"); return;
L_08B17E8C:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    rt.unsupported(0x08B17E90u, 0x6E696D61u, "vfpu3 not lowered yet"); return;
L_08B17EB8:
    rt.unsupported(0x08B17EB8u, 0x726F5763u, "unknown not lowered yet"); return;
L_08B17EF0:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    rt.unsupported(0x08B17EF4u, 0x6E696D61u, "vfpu3 not lowered yet"); return;
L_08B17F0C:
    rt.unsupported(0x08B17F0Cu, 0x434E4143u, "unknown not lowered yet"); return;
L_08B17F1C:
    rt.unsupported(0x08B17F20u, 0x54534555u, "control flow in delay slot"); return;
L_08B17F24:
    // nop
    goto L_08B17F28;
L_08B17F28:
    rt.unsupported(0x08B17F28u, 0x6E61433Du, "vfpu3 not lowered yet"); return;
L_08B17F34:
    rt.unsupported(0x08B17F34u, 0x676E696Du, "vfpu1 not lowered yet"); return;
L_08B17F40:
    ctx.execute_vfpu_vminmax(78u, 71u, 32u, 1u, false);
    ctx.execute_vfpu_vscl_ct<70u, 97u, 100u, 1u>();
    if (0u == 0u) (void)(0u);
    goto L_08B17F4C;
L_08B17F4C:
    rt.unsupported(0x08B17F4Cu, 0x61432D2Du, "vfpu0 not lowered yet"); return;
L_08B17F64:
    rt.unsupported(0x08B17F64u, 0x61432D2Du, "vfpu0 not lowered yet"); return;
L_08B17F78:
    rt.unsupported(0x08B17F78u, 0x61432D2Du, "vfpu0 not lowered yet"); return;
L_08B17F88:
    rt.unsupported(0x08B17F88u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B17FA0:
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 0u>();
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    rt.unsupported(0x08B17FA8u, 0x6E696D61u, "vfpu3 not lowered yet"); return;
L_08B17FB8:
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 0u>();
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    rt.unsupported(0x08B17FC0u, 0x6E696D61u, "vfpu3 not lowered yet"); return;
L_08B17FEC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<110u, 1u>(vfpu_d); }
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(15648));
    ctx.gpr[1] = (0u & 0u);
    goto L_08B17FF8;
L_08B17FF8:
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 0u>();
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    ctx.pc = 0x08B18000u; return;
}

void recomp_unit_0196(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0196_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_196(Runtime &runtime) {
    runtime.register_generated_unit(196u, 0x08B14000u, 16384u, &recomp_unit_0196, &recomp_unit_0196_entry);
    runtime.register_function(0x08B14128u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14130u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14140u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1414Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1415Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14170u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14188u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14198u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B141B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B141C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B141D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B141E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14208u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14210u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14224u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14248u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14254u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14264u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14278u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14284u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B142A0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B142A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B142D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B142DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B142E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B142F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B142FCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14308u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14314u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14320u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14324u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1432Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14334u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1433Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14368u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14430u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14438u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14468u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14470u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14478u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1447Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14484u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1448Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14494u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1449Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B144A4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B144ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B144B4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B144F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B144F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14590u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14598u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B145A0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B145B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B145B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B145C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B145C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B145D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B145E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B145F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B145F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14600u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14618u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14620u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14628u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14630u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14640u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14660u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14690u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B146A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B146D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B146D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B146F4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B146F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14710u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14718u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14728u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14760u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1477Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B147ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B147BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B147C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B147CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B147F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1481Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14830u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14844u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14870u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14884u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B148A4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B148CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B148ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1490Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14938u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1493Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14944u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14950u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1495Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1497Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14998u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B149C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B149ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A30u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A44u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A60u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A68u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A70u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A78u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A80u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14A9Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14AA4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14AA8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14AB8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14AC8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14B00u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14B18u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14B38u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14B44u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14B50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14B58u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14B90u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14BA0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14BB0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14BC0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14BC8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14E38u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14E50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14E7Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14EA8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14EBCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14EFCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B14F04u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B150F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15108u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15118u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1512Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15140u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1514Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15158u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15164u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15170u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1517Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1518Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15198u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B151ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B151B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B151C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B151D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B151E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B151ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15260u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15264u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1526Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15274u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1527Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15284u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1528Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15294u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1529Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152A4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152B4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B152F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15300u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15308u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15314u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1531Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15324u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1532Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15334u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15340u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1534Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15354u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1535Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15364u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15370u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15378u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15380u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1538Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15394u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1539Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153A4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153B4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B153F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15400u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15408u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15410u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1541Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15424u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1542Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15434u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1543Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15444u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15450u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1545Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15464u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15468u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15470u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15478u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15484u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15490u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1549Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B154A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B154B4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B154BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B154C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B154CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B154D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B154DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B154E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B154E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B154F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B154F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15500u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15508u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15510u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15518u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15520u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15528u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15534u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1553Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15548u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15550u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1555Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1556Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15578u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15584u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B155B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B155C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B155CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B155D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B155E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B155ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B155F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15600u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15604u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1560Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15610u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1561Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15628u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15634u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15640u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1564Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15658u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1565Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15668u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1566Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15678u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1567Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15688u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1568Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15698u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1569Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156F4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B156F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15704u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1570Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15714u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1571Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15720u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15728u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1572Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15734u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15738u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15740u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15748u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1574Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15754u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15760u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15768u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1576Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15778u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15780u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15784u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15790u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1579Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B157A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B157B4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B157BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B157C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B157D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B157DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B157E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B157F4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B157FCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15800u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15808u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1580Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15814u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1581Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15824u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1582Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15834u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1583Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15844u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15848u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15850u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15858u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15864u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1586Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15874u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15880u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15884u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1588Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15894u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1589Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158A4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158B4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158F4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B158FCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15904u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1590Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15914u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15920u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15928u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15930u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15938u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15944u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1594Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15954u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1595Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15964u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1596Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15978u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15980u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1598Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15994u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1599Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159A4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159B4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159F4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B159FCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A04u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A0Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A14u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A1Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A24u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A30u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A38u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A40u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A48u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A54u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A5Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A64u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A6Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A74u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A7Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A88u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A90u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15A9Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15AA4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15AACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15AB4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15AC0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15AC8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15AD0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15AD4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15ADCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15AE0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15AE8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15AECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15AF4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15AFCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B08u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B14u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B20u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B2Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B38u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B44u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B4Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B54u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B58u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B60u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B68u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B70u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B78u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B80u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B88u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15B98u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15BA8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15BB8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15BC4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15BC8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15BD4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15BE0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15BECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15BF4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15BFCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C04u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C0Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C14u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C1Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C24u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C2Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C38u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C48u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C58u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C60u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C68u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C70u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C78u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C80u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C8Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C94u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15C98u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15CA0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15CA4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15CACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15CB0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15CBCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15CC8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15CD4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15CE4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15CF0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15CFCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D04u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D0Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D1Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D2Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D38u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D44u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D58u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D64u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D70u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D78u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D80u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D90u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15D98u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DA4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DB8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DC4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DD0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DD8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DDCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DE4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DF0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DF4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15DFCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E08u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E14u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E20u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E2Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E38u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E40u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E44u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E4Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E58u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E5Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E64u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E68u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E70u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E74u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E7Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E80u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E88u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E8Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E94u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15E98u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15EA4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15EB0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15EBCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15EC8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15ED4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15EE0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15EF0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F00u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F10u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F1Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F28u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F38u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F48u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F5Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F70u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F84u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15F94u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15FA4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15FB0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15FBCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15FC8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15FD4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15FE0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15FECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B15FFCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1600Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1601Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16028u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16034u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16044u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16054u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16068u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1607Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16090u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B160A0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B160B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B160BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B160C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B160D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B160E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B160ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B160F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16108u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16118u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16128u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16134u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16140u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16150u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16160u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16174u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16188u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1619Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B161ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B161BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B161C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B161D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B161E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B161ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B161F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16204u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16214u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16224u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16234u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16240u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1624Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1625Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1626Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16280u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16294u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162F4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B162FCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16308u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16310u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16318u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16320u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16328u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16330u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16338u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16340u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16344u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1634Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16354u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1635Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16360u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16368u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16370u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1637Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16388u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1639Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B163ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B163C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B163CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B163E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B163F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16404u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16410u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1641Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16420u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1642Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16434u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16440u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16454u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16464u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1646Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16470u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16478u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16480u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16488u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1648Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16494u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B164A0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B164A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B164ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B164B4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B164BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B164C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B164C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B164D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B164DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B164E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B164FCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16508u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1651Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16524u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16528u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16530u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16534u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16540u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16550u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16558u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16560u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16568u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16574u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16580u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1658Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1659Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165A4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B165F4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16600u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16610u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1661Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1662Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16638u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16648u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16654u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1665Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16664u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1666Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16674u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1667Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16684u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1668Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16698u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B166A0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B166A4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B166B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B166BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B166C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B166D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B166D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B166E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B166F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16704u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1670Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16710u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1671Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16724u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16728u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1673Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16750u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1675Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16764u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16768u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16774u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16780u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16790u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1679Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B167A4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B167A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B167BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B167C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B167D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B167D4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B167E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B167F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B167F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B167FCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1680Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16818u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16820u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16824u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16838u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16848u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1684Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16854u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1685Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16870u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16880u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16884u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1688Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16894u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B168A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B168B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B168BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B168C4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B168D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B168E4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B168ECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B168F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16904u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1690Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16918u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16924u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16930u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16940u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16944u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16954u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16964u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16974u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16980u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16994u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B169A0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B169B0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B169C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B169CCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B169D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B169E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B169F4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A08u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A18u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A28u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A38u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A44u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A54u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A64u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A78u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16A8Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16AA0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16AB0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16AB4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16AC4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16AC8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16AD8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16AE8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16AF8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B0Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B20u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B30u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B44u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B60u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B64u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B74u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B84u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16B94u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16BA4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16BB0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16BBCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16BC8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16BD4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16BE8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16BF8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C00u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C04u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C10u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C1Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C20u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C28u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C30u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C34u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C40u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C4Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C5Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C68u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C70u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C74u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C7Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C80u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C90u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16C9Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16CB0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16CC0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16CD0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16CE0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16CF0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16CF8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16CFCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D08u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D18u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D24u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D28u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D2Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D30u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D38u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D40u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D48u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D50u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D58u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D60u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D6Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D74u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D80u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D8Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16D98u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DA0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DA8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DB0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DB8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DBCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DC0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DC8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DCCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DD4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DDCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DE4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DF0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16DF8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E04u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E10u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E18u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E20u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E28u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E38u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E48u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E58u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E64u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E6Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E78u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E80u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E88u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E90u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16E98u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16EA0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16EACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16EB4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16EBCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16EC8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16ED4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16EE0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16EECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16EF8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F04u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F10u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F18u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F24u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F30u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F3Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F48u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F54u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F60u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F68u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F6Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F70u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F78u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F80u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F88u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F90u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16F98u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FA0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FA8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FB0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FB8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FC0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FC8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FD0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FD8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FE0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FE8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FF0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B16FF8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17000u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17008u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17010u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17018u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17020u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17028u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17030u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17038u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17040u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17048u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1705Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17068u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17074u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1707Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17088u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1709Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B170A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B170B4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B170BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B170C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B170D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B170D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B170E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B170E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B170F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1724Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1726Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B173BCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17410u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17418u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17424u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1743Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17444u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1744Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17458u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17464u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17468u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17470u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17474u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17494u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B174ACu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B174B8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B174C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B174DCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B174E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B174F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17504u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17510u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17520u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1752Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B1753Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17548u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17550u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17560u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17568u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17578u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17588u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17598u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B175C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B175D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B175D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B175E0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B175E8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B175F0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B175F8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17600u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17608u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17610u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17618u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17620u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17628u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17630u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17638u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17640u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17648u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17650u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17668u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17670u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17674u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17698u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B176A0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B176A8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B176C0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B176C8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B176D0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B176D8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B179FCu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17C78u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17CA0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17D68u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17D80u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17D90u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17D9Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17DA4u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17DC0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17DE0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17E1Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17E40u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17E4Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17E64u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17E8Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17EB8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17EF0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F0Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F1Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F24u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F28u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F34u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F40u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F4Cu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F64u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F78u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17F88u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17FA0u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17FB8u, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17FECu, &recomp_unit_0196, "recomp_unit_0196");
    runtime.register_function(0x08B17FF8u, &recomp_unit_0196, "recomp_unit_0196");
}
} // namespace psprecomp
