#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0179[4078] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 5, 0, 6, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9,
    0, 0, 0, 0, 0, 10, 11, 12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 22, 0, 0, 23,
    0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 29, 0, 30, 0, 31, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0,
    0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0,
    0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 58, 0, 59, 0, 0, 60, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 63, 0, 64, 0, 0, 65, 0, 66, 0, 67, 0, 68, 0,
    0, 69, 0, 70, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0,
    0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 83, 0,
    0, 84, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 90, 0, 91, 0, 0, 92, 0, 93,
    0, 0, 0, 0, 94, 0, 95, 0, 96, 0, 0, 0, 97, 98, 0, 99, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 114, 0, 115, 0, 116, 0, 0,
    117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124,
    0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0,
    131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    135, 0, 136, 0, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0, 146, 0,
    147, 0, 148, 0, 149, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 155, 156, 157, 0, 158,
    0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0,
    0, 166, 0, 0, 0, 0, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 173, 0, 174, 0, 175, 0, 176, 0, 0, 0, 177, 0, 178,
    0, 179, 0, 180, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 189, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0,
    193, 0, 0, 0, 194, 0, 0, 195, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 0, 0, 203, 0, 0, 0,
    0, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 0, 216,
    0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222,
    0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 0, 230, 0, 231, 0, 232, 0, 0, 233, 0, 0, 0,
    0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 239, 0, 240, 0, 241, 0, 0, 242, 0, 243, 0, 244, 0, 0, 245, 0, 0,
    0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 0, 252, 0, 253, 254, 0, 255, 0,
    256, 0, 257, 0, 258, 0, 259, 0, 260, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265, 0, 266, 0, 267, 0, 268, 0, 269, 0, 270, 0, 0, 271,
    0, 272, 0, 273, 0, 274, 0, 275, 0, 0, 276, 0, 277, 0, 0, 278, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 290, 0, 291,
    0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 295, 296, 0, 297, 0, 298, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0,
    0, 0, 0, 0, 302, 0, 0, 303, 0, 304, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 309, 310, 0, 311, 0, 312,
    0, 313, 0, 0, 0, 314, 0, 0, 315, 0, 316, 317, 0, 0, 318, 0, 0, 319, 0, 320, 0, 321, 0, 322, 0, 0, 323, 0, 0, 324, 0, 325,
    0, 326, 0, 327, 0, 0, 0, 328, 0, 0, 329, 0, 330, 331, 0, 0, 0, 332, 0, 0, 0, 333, 0, 334, 0, 335, 0, 0, 336, 0, 337, 338,
    0, 0, 339, 0, 0, 0, 340, 0, 341, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0, 347, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 354, 0, 355, 0, 356, 0, 357, 0, 0, 0, 0,
    358, 0, 359, 0, 360, 0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 0, 0, 369, 0, 370, 0, 371, 0, 0, 372, 0,
    373, 0, 374, 0, 0, 375, 0, 376, 0, 377, 0, 0, 378, 0, 379, 0, 380, 0, 381, 0, 0, 382, 0, 383, 0, 0, 0, 384, 0, 0, 385, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 388, 0, 389, 0, 390, 0, 391, 0, 392, 0, 393, 0, 394, 0, 395, 0, 396, 0, 0, 0,
    0, 397, 0, 398, 0, 399, 0, 400, 0, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 403, 0, 404, 0, 0, 405, 0, 406, 0, 407, 0, 408,
    0, 409, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 414, 0, 415, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0,
    419, 0, 420, 0, 421, 0, 0, 0, 0, 422, 0, 423, 0, 424, 0, 425, 0, 426, 0, 427, 0, 428, 0, 429, 0, 430, 0, 431, 0, 432, 0, 433,
    0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 436, 0, 437, 0, 438, 0, 0, 439, 0, 440, 0, 441, 0, 0, 0, 0, 0, 0, 442,
    0, 0, 443, 0, 444, 0, 445, 0, 446, 0, 447, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 452, 0,
    453, 0, 0, 454, 0, 0, 455, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 461, 0, 462, 0, 0, 0, 463, 0, 464, 0, 465, 0,
    0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 471, 472, 0, 473, 0, 0, 474,
    0, 0, 475, 0, 0, 476, 0, 477, 0, 0, 0, 0, 0, 478, 0, 479, 480, 0, 481, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 488, 489, 0, 490, 0, 0,
    491, 0, 0, 492, 0, 493, 494, 0, 0, 0, 0, 0, 495, 0, 0, 496, 497, 0, 0, 498, 0, 0, 0, 499, 0, 500, 0, 501, 0, 0, 502, 0,
    0, 503, 0, 0, 504, 0, 0, 0, 0, 0, 505, 0, 506, 0, 507, 0, 0, 508, 0, 509, 0, 0, 510, 0, 511, 512, 0, 0, 0, 513, 0, 0,
    0, 514, 0, 515, 0, 0, 516, 0, 0, 517, 0, 0, 518, 0, 519, 0, 0, 520, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0, 523, 0, 524, 0,
    0, 525, 0, 0, 526, 0, 527, 0, 528, 0, 0, 529, 0, 530, 531, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0, 0, 0, 534, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 538, 0, 0, 0, 539, 0, 0, 540, 0, 541, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0,
    0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 547,
    0, 548, 0, 549, 0, 0, 550, 0, 0, 551, 0, 552, 0, 0, 553, 0, 554, 0, 0, 0, 0, 555, 0, 0, 556, 0, 0, 557, 0, 558, 0, 0,
    559, 0, 560, 0, 0, 561, 0, 562, 0, 563, 0, 0, 564, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 568, 0, 0, 569, 0,
    0, 570, 0, 0, 0, 0, 571, 0, 0, 572, 0, 573, 0, 0, 574, 0, 0, 575, 0, 0, 0, 0, 576, 0, 577, 0, 0, 578, 0, 0, 579, 0,
    0, 0, 0, 580, 0, 581, 0, 0, 0, 582, 0, 0, 583, 0, 0, 584, 0, 0, 0, 0, 585, 0, 586, 0, 0, 587, 0, 588, 0, 0, 589, 0,
    590, 0, 0, 591, 0, 592, 0, 0, 593, 0, 594, 0, 0, 595, 0, 596, 0, 0, 597, 0, 598, 0, 0, 599, 0, 600, 0, 0, 601, 0, 0, 602,
    0, 603, 0, 0, 604, 0, 605, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 608, 0, 0,
    609, 0, 0, 610, 0, 0, 0, 611, 0, 612, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 0, 0, 615, 0, 616, 0, 617, 0, 618, 0, 619, 0,
    620, 0, 621, 0, 622, 0, 0, 0, 623, 0, 0, 624, 0, 0, 625, 0, 626, 0, 0, 627, 0, 0, 628, 0, 629, 0, 630, 0, 0, 631, 0, 632,
    0, 633, 0, 634, 0, 635, 0, 636, 0, 637, 0, 638, 0, 639, 0, 640, 0, 641, 0, 642, 0, 0, 643, 0, 0, 644, 0, 0, 645, 0, 0, 0,
    646, 0, 647, 0, 0, 648, 0, 0, 0, 649, 0, 650, 0, 0, 0, 651, 0, 652, 0, 653, 0, 654, 0, 655, 0, 656, 0, 0, 657, 0, 658, 0,
    0, 659, 0, 660, 0, 661, 0, 0, 662, 0, 663, 0, 664, 0, 665, 0, 666, 0, 667, 0, 668, 0, 0, 669, 0, 670, 0, 0, 671, 0, 0, 672,
    0, 0, 673, 0, 674, 0, 675, 0, 0, 676, 0, 677, 0, 678, 0, 679, 0, 680, 0, 0, 681, 0, 0, 682, 0, 683, 0, 684, 0, 685, 0, 686,
    0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 696, 0, 0, 0, 697, 698, 0, 0, 0, 0,
    0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0,
    702, 0, 0, 0, 0, 703, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 707, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 710, 711, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 712, 0, 713, 0, 0, 0, 714, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 717, 0, 718, 0, 719,
    0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 722, 0, 723, 0, 724, 0, 725, 0, 0, 726, 727, 728, 0, 0, 0, 0, 0, 0, 0,
    729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 731, 0, 0, 0,
    0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 735, 0, 0, 0, 0, 0, 736,
    0, 0, 737, 0, 738, 0, 739, 0, 740, 0, 0, 741, 0, 0, 742, 0, 0, 743, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 745, 0, 746, 747, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 0, 0, 0, 753, 0, 0,
    0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 757, 0, 758, 759, 0, 0, 0, 0, 760, 0, 0,
    0, 0, 0, 761, 0, 762, 0, 0, 0, 0, 763, 0, 0, 764, 0, 765, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 768, 0, 769, 0, 770, 0, 0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 772, 0, 0, 773, 0, 0, 774, 0, 0, 0, 0, 0, 775, 0, 776, 0, 777, 0, 0, 778, 0, 779, 0, 0, 0, 780, 0, 0, 781,
    0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 784, 0, 0, 785, 0, 786, 0, 787, 0, 0, 0, 0, 788, 0, 0, 789, 0,
    790, 0, 0, 791, 0, 792, 0, 0, 0, 0, 793, 0, 0, 794, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 796,
    797, 0, 0, 0, 0, 0, 0, 798, 0, 0, 799, 800, 0, 0, 0, 801, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 804, 0, 805, 0, 0, 0, 0, 806, 807, 0, 0, 808, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 809, 0, 0, 0, 0, 810, 0, 0, 0, 811, 0, 0, 812, 0, 0, 813, 0, 0, 814, 815, 0, 0,
    0, 0, 0, 816, 0, 0, 817, 0, 0, 818, 0, 0, 819, 820, 0, 821, 0, 822, 0, 0, 0, 0, 823, 0, 0, 0, 824, 0, 0, 0, 825, 0,
    0, 0, 0, 0, 826, 0, 827, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    829, 0, 0, 0, 0, 830, 0, 0, 0, 0, 0, 0, 831, 0, 832, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 0, 0, 834, 0, 835, 0,
    836, 0, 0, 0, 0, 837, 0, 0, 0, 0, 0, 0, 0, 0, 838, 0, 839, 0, 0, 840, 0, 0, 841, 0, 0, 0, 0, 842, 0, 0, 0, 843,
    0, 0, 0, 0, 0, 844, 0, 0, 845, 0, 0, 0, 846, 0, 0, 0, 0, 847, 0, 0, 848, 0, 849, 0, 0, 0, 850, 0, 0, 0, 851, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 852, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 853, 0, 854, 0, 0, 0, 0, 0, 0, 855, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 856, 0, 0, 0, 0, 0, 857,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 858, 0, 0, 0, 0, 859, 0, 0, 860, 861, 0, 862, 0, 0,
    0, 0, 0, 0, 863, 0, 0, 864, 0, 865, 0, 0, 0, 0, 0, 866, 0, 0, 0, 0, 867, 0, 0, 0, 0, 868, 0, 869, 0, 0, 870, 0,
    871, 0, 0, 872, 0, 0, 0, 0, 0, 0, 873, 0, 874, 0, 0, 875, 0, 876, 0, 0, 0, 0, 877, 0, 878, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 879, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 880, 0, 0, 0, 0, 881, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 882, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 883, 0, 884, 0, 885, 0, 0, 0, 886, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 887, 0, 0, 0, 0, 0, 0, 0, 888, 0, 0, 889, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 891, 0, 0, 0, 0, 892, 0, 0,
    0, 0, 0, 0, 893, 0, 894, 895, 0, 0, 0, 896, 0, 0, 0, 0, 0, 0, 897, 0, 898, 0, 0, 899, 900, 0, 0, 0, 0, 901, 0, 0,
    0, 0, 0, 902, 0, 903, 0, 0, 0, 904, 905, 0, 0, 0, 906, 0, 0, 0, 0, 0, 907, 0, 0, 0, 908, 0, 909, 910, 0, 0, 911, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 912, 0, 0, 913, 0, 0, 0, 0, 0, 914, 0, 0, 0, 0, 0, 0, 915,
    0, 916, 0, 0, 0, 0, 917, 0, 0, 918, 0, 0, 919, 0, 0, 0, 0, 0, 0, 0, 0, 920, 0, 0, 0, 0, 0, 0, 0, 0, 0, 921,
    0, 922, 0, 0, 0, 0, 923, 0, 0, 0, 924, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 925, 0, 926, 0, 0, 0, 0, 927, 0, 0, 0,
    928, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 929, 0, 930, 0, 0, 0, 0, 931, 0, 0, 0, 932,
    0, 0, 0, 0, 0, 0, 0, 0, 933, 0, 934, 0, 0, 0, 0, 935, 0, 0, 0, 936, 0, 0, 0, 0, 0, 937, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 938, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 939, 0, 940, 0, 0, 0, 0, 0, 941, 0, 0, 0, 0, 0, 942, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 943, 0, 944, 0, 0, 0, 0, 945, 0, 0, 946, 0, 947, 0, 0, 948, 0, 0, 949, 0, 0, 0, 0, 0,
    0, 0, 0, 950, 0, 0, 951, 0, 0, 952, 0, 0, 953, 0, 0, 954, 0, 0, 0, 955, 0, 0, 956, 0, 957, 0, 0, 958, 0, 0, 0, 0,
    959, 0, 0, 960, 0, 0, 961, 0, 0, 962, 0, 0, 0, 963,
};
void recomp_unit_0179_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AD0000u;
        entry_id = (entry_delta < 16312u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0179[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AD0000;
    case 2u: goto L_08AD0010;
    case 3u: goto L_08AD001C;
    case 4u: goto L_08AD002C;
    case 5u: goto L_08AD0034;
    case 6u: goto L_08AD003C;
    case 7u: goto L_08AD0040;
    case 8u: goto L_08AD0054;
    case 9u: goto L_08AD007C;
    case 10u: goto L_08AD0094;
    case 11u: goto L_08AD0098;
    case 12u: goto L_08AD009C;
    case 13u: goto L_08AD00A4;
    case 14u: goto L_08AD00AC;
    case 15u: goto L_08AD00C8;
    case 16u: goto L_08AD0118;
    case 17u: goto L_08AD012C;
    case 18u: goto L_08AD0130;
    case 19u: goto L_08AD0144;
    case 20u: goto L_08AD015C;
    case 21u: goto L_08AD0168;
    case 22u: goto L_08AD0170;
    case 23u: goto L_08AD017C;
    case 24u: goto L_08AD018C;
    case 25u: goto L_08AD01B8;
    case 26u: goto L_08AD01CC;
    case 27u: goto L_08AD01D8;
    case 28u: goto L_08AD01F0;
    case 29u: goto L_08AD0210;
    case 30u: goto L_08AD0218;
    case 31u: goto L_08AD0220;
    case 32u: goto L_08AD0228;
    case 33u: goto L_08AD023C;
    case 34u: goto L_08AD024C;
    case 35u: goto L_08AD0268;
    case 36u: goto L_08AD0280;
    case 37u: goto L_08AD0298;
    case 38u: goto L_08AD02B8;
    case 39u: goto L_08AD02C8;
    case 40u: goto L_08AD02E4;
    case 41u: goto L_08AD02F4;
    case 42u: goto L_08AD0314;
    case 43u: goto L_08AD0324;
    case 44u: goto L_08AD0340;
    case 45u: goto L_08AD0360;
    case 46u: goto L_08AD0368;
    case 47u: goto L_08AD0370;
    case 48u: goto L_08AD0380;
    case 49u: goto L_08AD0398;
    case 50u: goto L_08AD03B8;
    case 51u: goto L_08AD03D0;
    case 52u: goto L_08AD03DC;
    case 53u: goto L_08AD03F4;
    case 54u: goto L_08AD0404;
    case 55u: goto L_08AD0420;
    case 56u: goto L_08AD0454;
    case 57u: goto L_08AD0460;
    case 58u: goto L_08AD048C;
    case 59u: goto L_08AD0494;
    case 60u: goto L_08AD04A0;
    case 61u: goto L_08AD04B0;
    case 62u: goto L_08AD04BC;
    case 63u: goto L_08AD04CC;
    case 64u: goto L_08AD04D4;
    case 65u: goto L_08AD04E0;
    case 66u: goto L_08AD04E8;
    case 67u: goto L_08AD04F0;
    case 68u: goto L_08AD04F8;
    case 69u: goto L_08AD0504;
    case 70u: goto L_08AD050C;
    case 71u: goto L_08AD0514;
    case 72u: goto L_08AD0528;
    case 73u: goto L_08AD0544;
    case 74u: goto L_08AD0690;
    case 75u: goto L_08AD06BC;
    case 76u: goto L_08AD06F8;
    case 77u: goto L_08AD071C;
    case 78u: goto L_08AD072C;
    case 79u: goto L_08AD0740;
    case 80u: goto L_08AD074C;
    case 81u: goto L_08AD0758;
    case 82u: goto L_08AD076C;
    case 83u: goto L_08AD0778;
    case 84u: goto L_08AD0784;
    case 85u: goto L_08AD078C;
    case 86u: goto L_08AD07A4;
    case 87u: goto L_08AD07B4;
    case 88u: goto L_08AD07C0;
    case 89u: goto L_08AD07CC;
    case 90u: goto L_08AD07E0;
    case 91u: goto L_08AD07E8;
    case 92u: goto L_08AD07F4;
    case 93u: goto L_08AD07FC;
    case 94u: goto L_08AD0810;
    case 95u: goto L_08AD0818;
    case 96u: goto L_08AD0820;
    case 97u: goto L_08AD0830;
    case 98u: goto L_08AD0834;
    case 99u: goto L_08AD083C;
    case 100u: goto L_08AD0844;
    case 101u: goto L_08AD085C;
    case 102u: goto L_08AD0874;
    case 103u: goto L_08AD0890;
    case 104u: goto L_08AD08AC;
    case 105u: goto L_08AD08C0;
    case 106u: goto L_08AD08D4;
    case 107u: goto L_08AD08E8;
    case 108u: goto L_08AD0920;
    case 109u: goto L_08AD0928;
    case 110u: goto L_08AD0934;
    case 111u: goto L_08AD0940;
    case 112u: goto L_08AD0950;
    case 113u: goto L_08AD0960;
    case 114u: goto L_08AD0964;
    case 115u: goto L_08AD096C;
    case 116u: goto L_08AD0974;
    case 117u: goto L_08AD0980;
    case 118u: goto L_08AD0988;
    case 119u: goto L_08AD09B4;
    case 120u: goto L_08AD09C4;
    case 121u: goto L_08AD09CC;
    case 122u: goto L_08AD09DC;
    case 123u: goto L_08AD09EC;
    case 124u: goto L_08AD09FC;
    case 125u: goto L_08AD0A0C;
    case 126u: goto L_08AD0A1C;
    case 127u: goto L_08AD0A2C;
    case 128u: goto L_08AD0A44;
    case 129u: goto L_08AD0A5C;
    case 130u: goto L_08AD0A70;
    case 131u: goto L_08AD0A80;
    case 132u: goto L_08AD0A94;
    case 133u: goto L_08AD0AB8;
    case 134u: goto L_08AD0AF0;
    case 135u: goto L_08AD0B00;
    case 136u: goto L_08AD0B08;
    case 137u: goto L_08AD0B14;
    case 138u: goto L_08AD0B1C;
    case 139u: goto L_08AD0B24;
    case 140u: goto L_08AD0B2C;
    case 141u: goto L_08AD0B34;
    case 142u: goto L_08AD0B3C;
    case 143u: goto L_08AD0B54;
    case 144u: goto L_08AD0B5C;
    case 145u: goto L_08AD0B64;
    case 146u: goto L_08AD0B78;
    case 147u: goto L_08AD0B80;
    case 148u: goto L_08AD0B88;
    case 149u: goto L_08AD0B90;
    case 150u: goto L_08AD0B94;
    case 151u: goto L_08AD0BA8;
    case 152u: goto L_08AD0BCC;
    case 153u: goto L_08AD0BD8;
    case 154u: goto L_08AD0BE4;
    case 155u: goto L_08AD0BEC;
    case 156u: goto L_08AD0BF0;
    case 157u: goto L_08AD0BF4;
    case 158u: goto L_08AD0BFC;
    case 159u: goto L_08AD0C04;
    case 160u: goto L_08AD0C10;
    case 161u: goto L_08AD0C1C;
    case 162u: goto L_08AD0C38;
    case 163u: goto L_08AD0C54;
    case 164u: goto L_08AD0C5C;
    case 165u: goto L_08AD0C68;
    case 166u: goto L_08AD0C84;
    case 167u: goto L_08AD0C9C;
    case 168u: goto L_08AD0CA4;
    case 169u: goto L_08AD0CAC;
    case 170u: goto L_08AD0CB4;
    case 171u: goto L_08AD0CBC;
    case 172u: goto L_08AD0CC4;
    case 173u: goto L_08AD0CCC;
    case 174u: goto L_08AD0CD4;
    case 175u: goto L_08AD0CDC;
    case 176u: goto L_08AD0CE4;
    case 177u: goto L_08AD0CF4;
    case 178u: goto L_08AD0CFC;
    case 179u: goto L_08AD0D04;
    case 180u: goto L_08AD0D0C;
    case 181u: goto L_08AD0D14;
    case 182u: goto L_08AD0D20;
    case 183u: goto L_08AD0D2C;
    case 184u: goto L_08AD0D38;
    case 185u: goto L_08AD0D4C;
    case 186u: goto L_08AD0D70;
    case 187u: goto L_08AD0DA0;
    case 188u: goto L_08AD0DB8;
    case 189u: goto L_08AD0DC0;
    case 190u: goto L_08AD0DC8;
    case 191u: goto L_08AD0DE0;
    case 192u: goto L_08AD0DF8;
    case 193u: goto L_08AD0E00;
    case 194u: goto L_08AD0E10;
    case 195u: goto L_08AD0E1C;
    case 196u: goto L_08AD0E24;
    case 197u: goto L_08AD0E30;
    case 198u: goto L_08AD0E40;
    case 199u: goto L_08AD0E48;
    case 200u: goto L_08AD0E50;
    case 201u: goto L_08AD0E58;
    case 202u: goto L_08AD0E60;
    case 203u: goto L_08AD0E70;
    case 204u: goto L_08AD0E88;
    case 205u: goto L_08AD0E90;
    case 206u: goto L_08AD0E98;
    case 207u: goto L_08AD0EA0;
    case 208u: goto L_08AD0EA8;
    case 209u: goto L_08AD0EB4;
    case 210u: goto L_08AD0EBC;
    case 211u: goto L_08AD0ED0;
    case 212u: goto L_08AD0ED8;
    case 213u: goto L_08AD0EE0;
    case 214u: goto L_08AD0EE8;
    case 215u: goto L_08AD0EF0;
    case 216u: goto L_08AD0EFC;
    case 217u: goto L_08AD0F08;
    case 218u: goto L_08AD0F14;
    case 219u: goto L_08AD0F30;
    case 220u: goto L_08AD0F4C;
    case 221u: goto L_08AD0F74;
    case 222u: goto L_08AD0F7C;
    case 223u: goto L_08AD0F8C;
    case 224u: goto L_08AD0FA0;
    case 225u: goto L_08AD0FA8;
    case 226u: goto L_08AD0FB0;
    case 227u: goto L_08AD0FB8;
    case 228u: goto L_08AD0FC0;
    case 229u: goto L_08AD0FC8;
    case 230u: goto L_08AD0FD4;
    case 231u: goto L_08AD0FDC;
    case 232u: goto L_08AD0FE4;
    case 233u: goto L_08AD0FF0;
    case 234u: goto L_08AD1014;
    case 235u: goto L_08AD101C;
    case 236u: goto L_08AD1024;
    case 237u: goto L_08AD102C;
    case 238u: goto L_08AD1034;
    case 239u: goto L_08AD103C;
    case 240u: goto L_08AD1044;
    case 241u: goto L_08AD104C;
    case 242u: goto L_08AD1058;
    case 243u: goto L_08AD1060;
    case 244u: goto L_08AD1068;
    case 245u: goto L_08AD1074;
    case 246u: goto L_08AD1090;
    case 247u: goto L_08AD10A8;
    case 248u: goto L_08AD10B4;
    case 249u: goto L_08AD10BC;
    case 250u: goto L_08AD10C8;
    case 251u: goto L_08AD10D4;
    case 252u: goto L_08AD10E4;
    case 253u: goto L_08AD10EC;
    case 254u: goto L_08AD10F0;
    case 255u: goto L_08AD10F8;
    case 256u: goto L_08AD1100;
    case 257u: goto L_08AD1108;
    case 258u: goto L_08AD1110;
    case 259u: goto L_08AD1118;
    case 260u: goto L_08AD1120;
    case 261u: goto L_08AD1128;
    case 262u: goto L_08AD1130;
    case 263u: goto L_08AD1138;
    case 264u: goto L_08AD1140;
    case 265u: goto L_08AD1148;
    case 266u: goto L_08AD1150;
    case 267u: goto L_08AD1158;
    case 268u: goto L_08AD1160;
    case 269u: goto L_08AD1168;
    case 270u: goto L_08AD1170;
    case 271u: goto L_08AD117C;
    case 272u: goto L_08AD1184;
    case 273u: goto L_08AD118C;
    case 274u: goto L_08AD1194;
    case 275u: goto L_08AD119C;
    case 276u: goto L_08AD11A8;
    case 277u: goto L_08AD11B0;
    case 278u: goto L_08AD11BC;
    case 279u: goto L_08AD11C4;
    case 280u: goto L_08AD11D0;
    case 281u: goto L_08AD11F4;
    case 282u: goto L_08AD11FC;
    case 283u: goto L_08AD1230;
    case 284u: goto L_08AD1258;
    case 285u: goto L_08AD1298;
    case 286u: goto L_08AD12C0;
    case 287u: goto L_08AD12C8;
    case 288u: goto L_08AD12DC;
    case 289u: goto L_08AD12EC;
    case 290u: goto L_08AD12F4;
    case 291u: goto L_08AD12FC;
    case 292u: goto L_08AD1308;
    case 293u: goto L_08AD1314;
    case 294u: goto L_08AD1330;
    case 295u: goto L_08AD1334;
    case 296u: goto L_08AD1338;
    case 297u: goto L_08AD1340;
    case 298u: goto L_08AD1348;
    case 299u: goto L_08AD1354;
    case 300u: goto L_08AD135C;
    case 301u: goto L_08AD1378;
    case 302u: goto L_08AD1390;
    case 303u: goto L_08AD139C;
    case 304u: goto L_08AD13A4;
    case 305u: goto L_08AD13AC;
    case 306u: goto L_08AD13B4;
    case 307u: goto L_08AD13D0;
    case 308u: goto L_08AD13E0;
    case 309u: goto L_08AD13E8;
    case 310u: goto L_08AD13EC;
    case 311u: goto L_08AD13F4;
    case 312u: goto L_08AD13FC;
    case 313u: goto L_08AD1404;
    case 314u: goto L_08AD1414;
    case 315u: goto L_08AD1420;
    case 316u: goto L_08AD1428;
    case 317u: goto L_08AD142C;
    case 318u: goto L_08AD1438;
    case 319u: goto L_08AD1444;
    case 320u: goto L_08AD144C;
    case 321u: goto L_08AD1454;
    case 322u: goto L_08AD145C;
    case 323u: goto L_08AD1468;
    case 324u: goto L_08AD1474;
    case 325u: goto L_08AD147C;
    case 326u: goto L_08AD1484;
    case 327u: goto L_08AD148C;
    case 328u: goto L_08AD149C;
    case 329u: goto L_08AD14A8;
    case 330u: goto L_08AD14B0;
    case 331u: goto L_08AD14B4;
    case 332u: goto L_08AD14C4;
    case 333u: goto L_08AD14D4;
    case 334u: goto L_08AD14DC;
    case 335u: goto L_08AD14E4;
    case 336u: goto L_08AD14F0;
    case 337u: goto L_08AD14F8;
    case 338u: goto L_08AD14FC;
    case 339u: goto L_08AD1508;
    case 340u: goto L_08AD1518;
    case 341u: goto L_08AD1520;
    case 342u: goto L_08AD1530;
    case 343u: goto L_08AD153C;
    case 344u: goto L_08AD1550;
    case 345u: goto L_08AD1558;
    case 346u: goto L_08AD1560;
    case 347u: goto L_08AD1568;
    case 348u: goto L_08AD1598;
    case 349u: goto L_08AD1600;
    case 350u: goto L_08AD1610;
    case 351u: goto L_08AD1618;
    case 352u: goto L_08AD1634;
    case 353u: goto L_08AD164C;
    case 354u: goto L_08AD1654;
    case 355u: goto L_08AD165C;
    case 356u: goto L_08AD1664;
    case 357u: goto L_08AD166C;
    case 358u: goto L_08AD1680;
    case 359u: goto L_08AD1688;
    case 360u: goto L_08AD1690;
    case 361u: goto L_08AD1698;
    case 362u: goto L_08AD16A0;
    case 363u: goto L_08AD16A8;
    case 364u: goto L_08AD16B0;
    case 365u: goto L_08AD16B8;
    case 366u: goto L_08AD16C0;
    case 367u: goto L_08AD16C8;
    case 368u: goto L_08AD16D0;
    case 369u: goto L_08AD16DC;
    case 370u: goto L_08AD16E4;
    case 371u: goto L_08AD16EC;
    case 372u: goto L_08AD16F8;
    case 373u: goto L_08AD1700;
    case 374u: goto L_08AD1708;
    case 375u: goto L_08AD1714;
    case 376u: goto L_08AD171C;
    case 377u: goto L_08AD1724;
    case 378u: goto L_08AD1730;
    case 379u: goto L_08AD1738;
    case 380u: goto L_08AD1740;
    case 381u: goto L_08AD1748;
    case 382u: goto L_08AD1754;
    case 383u: goto L_08AD175C;
    case 384u: goto L_08AD176C;
    case 385u: goto L_08AD1778;
    case 386u: goto L_08AD17A0;
    case 387u: goto L_08AD17A8;
    case 388u: goto L_08AD17B0;
    case 389u: goto L_08AD17B8;
    case 390u: goto L_08AD17C0;
    case 391u: goto L_08AD17C8;
    case 392u: goto L_08AD17D0;
    case 393u: goto L_08AD17D8;
    case 394u: goto L_08AD17E0;
    case 395u: goto L_08AD17E8;
    case 396u: goto L_08AD17F0;
    case 397u: goto L_08AD1804;
    case 398u: goto L_08AD180C;
    case 399u: goto L_08AD1814;
    case 400u: goto L_08AD181C;
    case 401u: goto L_08AD1834;
    case 402u: goto L_08AD183C;
    case 403u: goto L_08AD1850;
    case 404u: goto L_08AD1858;
    case 405u: goto L_08AD1864;
    case 406u: goto L_08AD186C;
    case 407u: goto L_08AD1874;
    case 408u: goto L_08AD187C;
    case 409u: goto L_08AD1884;
    case 410u: goto L_08AD188C;
    case 411u: goto L_08AD1898;
    case 412u: goto L_08AD18B0;
    case 413u: goto L_08AD18B8;
    case 414u: goto L_08AD18C4;
    case 415u: goto L_08AD18CC;
    case 416u: goto L_08AD18D4;
    case 417u: goto L_08AD18E0;
    case 418u: goto L_08AD18F8;
    case 419u: goto L_08AD1900;
    case 420u: goto L_08AD1908;
    case 421u: goto L_08AD1910;
    case 422u: goto L_08AD1924;
    case 423u: goto L_08AD192C;
    case 424u: goto L_08AD1934;
    case 425u: goto L_08AD193C;
    case 426u: goto L_08AD1944;
    case 427u: goto L_08AD194C;
    case 428u: goto L_08AD1954;
    case 429u: goto L_08AD195C;
    case 430u: goto L_08AD1964;
    case 431u: goto L_08AD196C;
    case 432u: goto L_08AD1974;
    case 433u: goto L_08AD197C;
    case 434u: goto L_08AD1994;
    case 435u: goto L_08AD19AC;
    case 436u: goto L_08AD19B4;
    case 437u: goto L_08AD19BC;
    case 438u: goto L_08AD19C4;
    case 439u: goto L_08AD19D0;
    case 440u: goto L_08AD19D8;
    case 441u: goto L_08AD19E0;
    case 442u: goto L_08AD19FC;
    case 443u: goto L_08AD1A08;
    case 444u: goto L_08AD1A10;
    case 445u: goto L_08AD1A18;
    case 446u: goto L_08AD1A20;
    case 447u: goto L_08AD1A28;
    case 448u: goto L_08AD1A34;
    case 449u: goto L_08AD1A4C;
    case 450u: goto L_08AD1A64;
    case 451u: goto L_08AD1A6C;
    case 452u: goto L_08AD1A78;
    case 453u: goto L_08AD1A80;
    case 454u: goto L_08AD1A8C;
    case 455u: goto L_08AD1A98;
    case 456u: goto L_08AD1AA8;
    case 457u: goto L_08AD1AB4;
    case 458u: goto L_08AD1AE8;
    case 459u: goto L_08AD1B3C;
    case 460u: goto L_08AD1B48;
    case 461u: goto L_08AD1B50;
    case 462u: goto L_08AD1B58;
    case 463u: goto L_08AD1B68;
    case 464u: goto L_08AD1B70;
    case 465u: goto L_08AD1B78;
    case 466u: goto L_08AD1B98;
    case 467u: goto L_08AD1BAC;
    case 468u: goto L_08AD1BB4;
    case 469u: goto L_08AD1BCC;
    case 470u: goto L_08AD1BDC;
    case 471u: goto L_08AD1BE4;
    case 472u: goto L_08AD1BE8;
    case 473u: goto L_08AD1BF0;
    case 474u: goto L_08AD1BFC;
    case 475u: goto L_08AD1C08;
    case 476u: goto L_08AD1C14;
    case 477u: goto L_08AD1C1C;
    case 478u: goto L_08AD1C34;
    case 479u: goto L_08AD1C3C;
    case 480u: goto L_08AD1C40;
    case 481u: goto L_08AD1C48;
    case 482u: goto L_08AD1C50;
    case 483u: goto L_08AD1C64;
    case 484u: goto L_08AD1C98;
    case 485u: goto L_08AD1CA4;
    case 486u: goto L_08AD1CC8;
    case 487u: goto L_08AD1CE4;
    case 488u: goto L_08AD1CE8;
    case 489u: goto L_08AD1CEC;
    case 490u: goto L_08AD1CF4;
    case 491u: goto L_08AD1D00;
    case 492u: goto L_08AD1D0C;
    case 493u: goto L_08AD1D14;
    case 494u: goto L_08AD1D18;
    case 495u: goto L_08AD1D30;
    case 496u: goto L_08AD1D3C;
    case 497u: goto L_08AD1D40;
    case 498u: goto L_08AD1D4C;
    case 499u: goto L_08AD1D5C;
    case 500u: goto L_08AD1D64;
    case 501u: goto L_08AD1D6C;
    case 502u: goto L_08AD1D78;
    case 503u: goto L_08AD1D84;
    case 504u: goto L_08AD1D90;
    case 505u: goto L_08AD1DA8;
    case 506u: goto L_08AD1DB0;
    case 507u: goto L_08AD1DB8;
    case 508u: goto L_08AD1DC4;
    case 509u: goto L_08AD1DCC;
    case 510u: goto L_08AD1DD8;
    case 511u: goto L_08AD1DE0;
    case 512u: goto L_08AD1DE4;
    case 513u: goto L_08AD1DF4;
    case 514u: goto L_08AD1E04;
    case 515u: goto L_08AD1E0C;
    case 516u: goto L_08AD1E18;
    case 517u: goto L_08AD1E24;
    case 518u: goto L_08AD1E30;
    case 519u: goto L_08AD1E38;
    case 520u: goto L_08AD1E44;
    case 521u: goto L_08AD1E4C;
    case 522u: goto L_08AD1E68;
    case 523u: goto L_08AD1E70;
    case 524u: goto L_08AD1E78;
    case 525u: goto L_08AD1E84;
    case 526u: goto L_08AD1E90;
    case 527u: goto L_08AD1E98;
    case 528u: goto L_08AD1EA0;
    case 529u: goto L_08AD1EAC;
    case 530u: goto L_08AD1EB4;
    case 531u: goto L_08AD1EB8;
    case 532u: goto L_08AD1ED0;
    case 533u: goto L_08AD1ED8;
    case 534u: goto L_08AD1EEC;
    case 535u: goto L_08AD1F3C;
    case 536u: goto L_08AD1F48;
    case 537u: goto L_08AD1F5C;
    case 538u: goto L_08AD1F88;
    case 539u: goto L_08AD1F98;
    case 540u: goto L_08AD1FA4;
    case 541u: goto L_08AD1FAC;
    case 542u: goto L_08AD1FC0;
    case 543u: goto L_08AD1FE8;
    case 544u: goto L_08AD2008;
    case 545u: goto L_08AD205C;
    case 546u: goto L_08AD2068;
    case 547u: goto L_08AD207C;
    case 548u: goto L_08AD2084;
    case 549u: goto L_08AD208C;
    case 550u: goto L_08AD2098;
    case 551u: goto L_08AD20A4;
    case 552u: goto L_08AD20AC;
    case 553u: goto L_08AD20B8;
    case 554u: goto L_08AD20C0;
    case 555u: goto L_08AD20D4;
    case 556u: goto L_08AD20E0;
    case 557u: goto L_08AD20EC;
    case 558u: goto L_08AD20F4;
    case 559u: goto L_08AD2100;
    case 560u: goto L_08AD2108;
    case 561u: goto L_08AD2114;
    case 562u: goto L_08AD211C;
    case 563u: goto L_08AD2124;
    case 564u: goto L_08AD2130;
    case 565u: goto L_08AD213C;
    case 566u: goto L_08AD2158;
    case 567u: goto L_08AD2160;
    case 568u: goto L_08AD216C;
    case 569u: goto L_08AD2178;
    case 570u: goto L_08AD2184;
    case 571u: goto L_08AD2198;
    case 572u: goto L_08AD21A4;
    case 573u: goto L_08AD21AC;
    case 574u: goto L_08AD21B8;
    case 575u: goto L_08AD21C4;
    case 576u: goto L_08AD21D8;
    case 577u: goto L_08AD21E0;
    case 578u: goto L_08AD21EC;
    case 579u: goto L_08AD21F8;
    case 580u: goto L_08AD220C;
    case 581u: goto L_08AD2214;
    case 582u: goto L_08AD2224;
    case 583u: goto L_08AD2230;
    case 584u: goto L_08AD223C;
    case 585u: goto L_08AD2250;
    case 586u: goto L_08AD2258;
    case 587u: goto L_08AD2264;
    case 588u: goto L_08AD226C;
    case 589u: goto L_08AD2278;
    case 590u: goto L_08AD2280;
    case 591u: goto L_08AD228C;
    case 592u: goto L_08AD2294;
    case 593u: goto L_08AD22A0;
    case 594u: goto L_08AD22A8;
    case 595u: goto L_08AD22B4;
    case 596u: goto L_08AD22BC;
    case 597u: goto L_08AD22C8;
    case 598u: goto L_08AD22D0;
    case 599u: goto L_08AD22DC;
    case 600u: goto L_08AD22E4;
    case 601u: goto L_08AD22F0;
    case 602u: goto L_08AD22FC;
    case 603u: goto L_08AD2304;
    case 604u: goto L_08AD2310;
    case 605u: goto L_08AD2318;
    case 606u: goto L_08AD232C;
    case 607u: goto L_08AD2368;
    case 608u: goto L_08AD2374;
    case 609u: goto L_08AD2380;
    case 610u: goto L_08AD238C;
    case 611u: goto L_08AD239C;
    case 612u: goto L_08AD23A4;
    case 613u: goto L_08AD23B0;
    case 614u: goto L_08AD23C0;
    case 615u: goto L_08AD23D8;
    case 616u: goto L_08AD23E0;
    case 617u: goto L_08AD23E8;
    case 618u: goto L_08AD23F0;
    case 619u: goto L_08AD23F8;
    case 620u: goto L_08AD2400;
    case 621u: goto L_08AD2408;
    case 622u: goto L_08AD2410;
    case 623u: goto L_08AD2420;
    case 624u: goto L_08AD242C;
    case 625u: goto L_08AD2438;
    case 626u: goto L_08AD2440;
    case 627u: goto L_08AD244C;
    case 628u: goto L_08AD2458;
    case 629u: goto L_08AD2460;
    case 630u: goto L_08AD2468;
    case 631u: goto L_08AD2474;
    case 632u: goto L_08AD247C;
    case 633u: goto L_08AD2484;
    case 634u: goto L_08AD248C;
    case 635u: goto L_08AD2494;
    case 636u: goto L_08AD249C;
    case 637u: goto L_08AD24A4;
    case 638u: goto L_08AD24AC;
    case 639u: goto L_08AD24B4;
    case 640u: goto L_08AD24BC;
    case 641u: goto L_08AD24C4;
    case 642u: goto L_08AD24CC;
    case 643u: goto L_08AD24D8;
    case 644u: goto L_08AD24E4;
    case 645u: goto L_08AD24F0;
    case 646u: goto L_08AD2500;
    case 647u: goto L_08AD2508;
    case 648u: goto L_08AD2514;
    case 649u: goto L_08AD2524;
    case 650u: goto L_08AD252C;
    case 651u: goto L_08AD253C;
    case 652u: goto L_08AD2544;
    case 653u: goto L_08AD254C;
    case 654u: goto L_08AD2554;
    case 655u: goto L_08AD255C;
    case 656u: goto L_08AD2564;
    case 657u: goto L_08AD2570;
    case 658u: goto L_08AD2578;
    case 659u: goto L_08AD2584;
    case 660u: goto L_08AD258C;
    case 661u: goto L_08AD2594;
    case 662u: goto L_08AD25A0;
    case 663u: goto L_08AD25A8;
    case 664u: goto L_08AD25B0;
    case 665u: goto L_08AD25B8;
    case 666u: goto L_08AD25C0;
    case 667u: goto L_08AD25C8;
    case 668u: goto L_08AD25D0;
    case 669u: goto L_08AD25DC;
    case 670u: goto L_08AD25E4;
    case 671u: goto L_08AD25F0;
    case 672u: goto L_08AD25FC;
    case 673u: goto L_08AD2608;
    case 674u: goto L_08AD2610;
    case 675u: goto L_08AD2618;
    case 676u: goto L_08AD2624;
    case 677u: goto L_08AD262C;
    case 678u: goto L_08AD2634;
    case 679u: goto L_08AD263C;
    case 680u: goto L_08AD2644;
    case 681u: goto L_08AD2650;
    case 682u: goto L_08AD265C;
    case 683u: goto L_08AD2664;
    case 684u: goto L_08AD266C;
    case 685u: goto L_08AD2674;
    case 686u: goto L_08AD267C;
    case 687u: goto L_08AD2684;
    case 688u: goto L_08AD26B4;
    case 689u: goto L_08AD27A8;
    case 690u: goto L_08AD27B8;
    case 691u: goto L_08AD2838;
    case 692u: goto L_08AD284C;
    case 693u: goto L_08AD2868;
    case 694u: goto L_08AD28A4;
    case 695u: goto L_08AD28CC;
    case 696u: goto L_08AD28D8;
    case 697u: goto L_08AD28E8;
    case 698u: goto L_08AD28EC;
    case 699u: goto L_08AD2904;
    case 700u: goto L_08AD2930;
    case 701u: goto L_08AD2968;
    case 702u: goto L_08AD2980;
    case 703u: goto L_08AD2994;
    case 704u: goto L_08AD29A4;
    case 705u: goto L_08AD29C8;
    case 706u: goto L_08AD2A24;
    case 707u: goto L_08AD2A2C;
    case 708u: goto L_08AD2A34;
    case 709u: goto L_08AD2A58;
    case 710u: goto L_08AD2A60;
    case 711u: goto L_08AD2A64;
    case 712u: goto L_08AD2A8C;
    case 713u: goto L_08AD2A94;
    case 714u: goto L_08AD2AA4;
    case 715u: goto L_08AD2AB0;
    case 716u: goto L_08AD2AE4;
    case 717u: goto L_08AD2AEC;
    case 718u: goto L_08AD2AF4;
    case 719u: goto L_08AD2AFC;
    case 720u: goto L_08AD2B04;
    case 721u: goto L_08AD2B2C;
    case 722u: goto L_08AD2B34;
    case 723u: goto L_08AD2B3C;
    case 724u: goto L_08AD2B44;
    case 725u: goto L_08AD2B4C;
    case 726u: goto L_08AD2B58;
    case 727u: goto L_08AD2B5C;
    case 728u: goto L_08AD2B60;
    case 729u: goto L_08AD2B80;
    case 730u: goto L_08AD2BD8;
    case 731u: goto L_08AD2BF0;
    case 732u: goto L_08AD2C10;
    case 733u: goto L_08AD2C34;
    case 734u: goto L_08AD2C54;
    case 735u: goto L_08AD2C64;
    case 736u: goto L_08AD2C7C;
    case 737u: goto L_08AD2C88;
    case 738u: goto L_08AD2C90;
    case 739u: goto L_08AD2C98;
    case 740u: goto L_08AD2CA0;
    case 741u: goto L_08AD2CAC;
    case 742u: goto L_08AD2CB8;
    case 743u: goto L_08AD2CC4;
    case 744u: goto L_08AD2CD4;
    case 745u: goto L_08AD2D0C;
    case 746u: goto L_08AD2D14;
    case 747u: goto L_08AD2D18;
    case 748u: goto L_08AD2D2C;
    case 749u: goto L_08AD2D50;
    case 750u: goto L_08AD2D94;
    case 751u: goto L_08AD2DD4;
    case 752u: goto L_08AD2DE0;
    case 753u: goto L_08AD2DF4;
    case 754u: goto L_08AD2E14;
    case 755u: goto L_08AD2E28;
    case 756u: goto L_08AD2E4C;
    case 757u: goto L_08AD2E54;
    case 758u: goto L_08AD2E5C;
    case 759u: goto L_08AD2E60;
    case 760u: goto L_08AD2E74;
    case 761u: goto L_08AD2E8C;
    case 762u: goto L_08AD2E94;
    case 763u: goto L_08AD2EA8;
    case 764u: goto L_08AD2EB4;
    case 765u: goto L_08AD2EBC;
    case 766u: goto L_08AD2ED8;
    case 767u: goto L_08AD2F28;
    case 768u: goto L_08AD2F34;
    case 769u: goto L_08AD2F3C;
    case 770u: goto L_08AD2F44;
    case 771u: goto L_08AD2F54;
    case 772u: goto L_08AD2F8C;
    case 773u: goto L_08AD2F98;
    case 774u: goto L_08AD2FA4;
    case 775u: goto L_08AD2FBC;
    case 776u: goto L_08AD2FC4;
    case 777u: goto L_08AD2FCC;
    case 778u: goto L_08AD2FD8;
    case 779u: goto L_08AD2FE0;
    case 780u: goto L_08AD2FF0;
    case 781u: goto L_08AD2FFC;
    case 782u: goto L_08AD3004;
    case 783u: goto L_08AD3034;
    case 784u: goto L_08AD303C;
    case 785u: goto L_08AD3048;
    case 786u: goto L_08AD3050;
    case 787u: goto L_08AD3058;
    case 788u: goto L_08AD306C;
    case 789u: goto L_08AD3078;
    case 790u: goto L_08AD3080;
    case 791u: goto L_08AD308C;
    case 792u: goto L_08AD3094;
    case 793u: goto L_08AD30A8;
    case 794u: goto L_08AD30B4;
    case 795u: goto L_08AD30EC;
    case 796u: goto L_08AD30FC;
    case 797u: goto L_08AD3100;
    case 798u: goto L_08AD311C;
    case 799u: goto L_08AD3128;
    case 800u: goto L_08AD312C;
    case 801u: goto L_08AD313C;
    case 802u: goto L_08AD3150;
    case 803u: goto L_08AD31A8;
    case 804u: goto L_08AD31B8;
    case 805u: goto L_08AD31C0;
    case 806u: goto L_08AD31D4;
    case 807u: goto L_08AD31D8;
    case 808u: goto L_08AD31E4;
    case 809u: goto L_08AD3228;
    case 810u: goto L_08AD323C;
    case 811u: goto L_08AD324C;
    case 812u: goto L_08AD3258;
    case 813u: goto L_08AD3264;
    case 814u: goto L_08AD3270;
    case 815u: goto L_08AD3274;
    case 816u: goto L_08AD328C;
    case 817u: goto L_08AD3298;
    case 818u: goto L_08AD32A4;
    case 819u: goto L_08AD32B0;
    case 820u: goto L_08AD32B4;
    case 821u: goto L_08AD32BC;
    case 822u: goto L_08AD32C4;
    case 823u: goto L_08AD32D8;
    case 824u: goto L_08AD32E8;
    case 825u: goto L_08AD32F8;
    case 826u: goto L_08AD3310;
    case 827u: goto L_08AD3318;
    case 828u: goto L_08AD3344;
    case 829u: goto L_08AD3380;
    case 830u: goto L_08AD3394;
    case 831u: goto L_08AD33B0;
    case 832u: goto L_08AD33B8;
    case 833u: goto L_08AD33CC;
    case 834u: goto L_08AD33F0;
    case 835u: goto L_08AD33F8;
    case 836u: goto L_08AD3400;
    case 837u: goto L_08AD3414;
    case 838u: goto L_08AD3438;
    case 839u: goto L_08AD3440;
    case 840u: goto L_08AD344C;
    case 841u: goto L_08AD3458;
    case 842u: goto L_08AD346C;
    case 843u: goto L_08AD347C;
    case 844u: goto L_08AD3494;
    case 845u: goto L_08AD34A0;
    case 846u: goto L_08AD34B0;
    case 847u: goto L_08AD34C4;
    case 848u: goto L_08AD34D0;
    case 849u: goto L_08AD34D8;
    case 850u: goto L_08AD34E8;
    case 851u: goto L_08AD34F8;
    case 852u: goto L_08AD3538;
    case 853u: goto L_08AD35CC;
    case 854u: goto L_08AD35D4;
    case 855u: goto L_08AD35F0;
    case 856u: goto L_08AD3664;
    case 857u: goto L_08AD367C;
    case 858u: goto L_08AD36C8;
    case 859u: goto L_08AD36DC;
    case 860u: goto L_08AD36E8;
    case 861u: goto L_08AD36EC;
    case 862u: goto L_08AD36F4;
    case 863u: goto L_08AD3710;
    case 864u: goto L_08AD371C;
    case 865u: goto L_08AD3724;
    case 866u: goto L_08AD373C;
    case 867u: goto L_08AD3750;
    case 868u: goto L_08AD3764;
    case 869u: goto L_08AD376C;
    case 870u: goto L_08AD3778;
    case 871u: goto L_08AD3780;
    case 872u: goto L_08AD378C;
    case 873u: goto L_08AD37A8;
    case 874u: goto L_08AD37B0;
    case 875u: goto L_08AD37BC;
    case 876u: goto L_08AD37C4;
    case 877u: goto L_08AD37D8;
    case 878u: goto L_08AD37E0;
    case 879u: goto L_08AD3808;
    case 880u: goto L_08AD388C;
    case 881u: goto L_08AD38A0;
    case 882u: goto L_08AD38DC;
    case 883u: goto L_08AD3940;
    case 884u: goto L_08AD3948;
    case 885u: goto L_08AD3950;
    case 886u: goto L_08AD3960;
    case 887u: goto L_08AD3988;
    case 888u: goto L_08AD39A8;
    case 889u: goto L_08AD39B4;
    case 890u: goto L_08AD39D8;
    case 891u: goto L_08AD39E0;
    case 892u: goto L_08AD39F4;
    case 893u: goto L_08AD3A10;
    case 894u: goto L_08AD3A18;
    case 895u: goto L_08AD3A1C;
    case 896u: goto L_08AD3A2C;
    case 897u: goto L_08AD3A48;
    case 898u: goto L_08AD3A50;
    case 899u: goto L_08AD3A5C;
    case 900u: goto L_08AD3A60;
    case 901u: goto L_08AD3A74;
    case 902u: goto L_08AD3A8C;
    case 903u: goto L_08AD3A94;
    case 904u: goto L_08AD3AA4;
    case 905u: goto L_08AD3AA8;
    case 906u: goto L_08AD3AB8;
    case 907u: goto L_08AD3AD0;
    case 908u: goto L_08AD3AE0;
    case 909u: goto L_08AD3AE8;
    case 910u: goto L_08AD3AEC;
    case 911u: goto L_08AD3AF8;
    case 912u: goto L_08AD3B3C;
    case 913u: goto L_08AD3B48;
    case 914u: goto L_08AD3B60;
    case 915u: goto L_08AD3B7C;
    case 916u: goto L_08AD3B84;
    case 917u: goto L_08AD3B98;
    case 918u: goto L_08AD3BA4;
    case 919u: goto L_08AD3BB0;
    case 920u: goto L_08AD3BD4;
    case 921u: goto L_08AD3BFC;
    case 922u: goto L_08AD3C04;
    case 923u: goto L_08AD3C18;
    case 924u: goto L_08AD3C28;
    case 925u: goto L_08AD3C54;
    case 926u: goto L_08AD3C5C;
    case 927u: goto L_08AD3C70;
    case 928u: goto L_08AD3C80;
    case 929u: goto L_08AD3CD0;
    case 930u: goto L_08AD3CD8;
    case 931u: goto L_08AD3CEC;
    case 932u: goto L_08AD3CFC;
    case 933u: goto L_08AD3D20;
    case 934u: goto L_08AD3D28;
    case 935u: goto L_08AD3D3C;
    case 936u: goto L_08AD3D4C;
    case 937u: goto L_08AD3D64;
    case 938u: goto L_08AD3D94;
    case 939u: goto L_08AD3E20;
    case 940u: goto L_08AD3E28;
    case 941u: goto L_08AD3E40;
    case 942u: goto L_08AD3E58;
    case 943u: goto L_08AD3EA0;
    case 944u: goto L_08AD3EA8;
    case 945u: goto L_08AD3EBC;
    case 946u: goto L_08AD3EC8;
    case 947u: goto L_08AD3ED0;
    case 948u: goto L_08AD3EDC;
    case 949u: goto L_08AD3EE8;
    case 950u: goto L_08AD3F0C;
    case 951u: goto L_08AD3F18;
    case 952u: goto L_08AD3F24;
    case 953u: goto L_08AD3F30;
    case 954u: goto L_08AD3F3C;
    case 955u: goto L_08AD3F4C;
    case 956u: goto L_08AD3F58;
    case 957u: goto L_08AD3F60;
    case 958u: goto L_08AD3F6C;
    case 959u: goto L_08AD3F80;
    case 960u: goto L_08AD3F8C;
    case 961u: goto L_08AD3F98;
    case 962u: goto L_08AD3FA4;
    case 963u: goto L_08AD3FB4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AD0000:
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AD003C;
      }
      goto L_08AD0010;
    }
L_08AD0010:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD001Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08AD001Cu) goto L_08AD001C;
    return;
L_08AD001C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD002Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08AD002Cu) goto L_08AD002C;
    return;
L_08AD002C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08AD0040;
      }
      goto L_08AD0034;
    }
L_08AD0034:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD0040;
      }
      goto L_08AD003C;
    }
L_08AD003C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD0040;
L_08AD0040:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0054:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD0098;
      }
      goto L_08AD007C;
    }
L_08AD007C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 0 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AD009C;
      }
      goto L_08AD0094;
    }
L_08AD0094:
    ctx.gpr[5] = (0u | 1u);
    goto L_08AD0098;
L_08AD0098:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08AD009C;
L_08AD009C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD00AC;
      }
      goto L_08AD00A4;
    }
L_08AD00A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD0130;
      }
      goto L_08AD00AC;
    }
L_08AD00AC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD00C8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD00C8u) goto L_08AD00C8;
    return;
L_08AD00C8:
    ctx.gpr[4] = (15733u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(26))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AD0118u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08AD0118u) goto L_08AD0118;
    return;
L_08AD0118:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AD012Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-140));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BDECu>(ctx, &aot_mem) && ctx.pc == 0x08AD012Cu) goto L_08AD012C;
    return;
L_08AD012C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08AD0130;
L_08AD0130:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0144:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD015Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD015Cu) goto L_08AD015C;
    return;
L_08AD015C:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD0170;
      }
      goto L_08AD0168;
    }
L_08AD0168:
    ctx.gpr[31] = (0x08AD0170u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD0054;
L_08AD0170:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD017Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 405u, 0x088BA318u>(ctx, &aot_mem) && ctx.pc == 0x08AD017Cu) goto L_08AD017C;
    return;
L_08AD017C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD018C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD01B8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 717u, 0x089BF724u>(ctx, &aot_mem) && ctx.pc == 0x08AD01B8u) goto L_08AD01B8;
    return;
L_08AD01B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08AD01CCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2F78u>(ctx, &aot_mem) && ctx.pc == 0x08AD01CCu) goto L_08AD01CC;
    return;
L_08AD01CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD01D8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08AD01D8u) goto L_08AD01D8;
    return;
L_08AD01D8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD01F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(117)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD0220;
      }
      goto L_08AD0210;
    }
L_08AD0210:
    ctx.gpr[31] = (0x08AD0218u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08AD0218u) goto L_08AD0218;
    return;
L_08AD0218:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0228;
      }
      goto L_08AD0220;
    }
L_08AD0220:
    ctx.gpr[31] = (0x08AD0228u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08AD0228u) goto L_08AD0228;
    return;
L_08AD0228:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD023C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD024Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x08AD024Cu) goto L_08AD024C;
    return;
L_08AD024C:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16401), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0268:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD0280u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x08AD0280u) goto L_08AD0280;
    return;
L_08AD0280:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16401), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD0298u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x08AD0298u) goto L_08AD0298;
    return;
L_08AD0298:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16402), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD02B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD02C8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x08AD02C8u) goto L_08AD02C8;
    return;
L_08AD02C8:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16404), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD02E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD02F4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD02F4u) goto L_08AD02F4;
    return;
L_08AD02F4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16403), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0314:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD0324u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x08AD0324u) goto L_08AD0324;
    return;
L_08AD0324:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16405), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0340:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD0368;
      }
      goto L_08AD0360;
    }
L_08AD0360:
    ctx.gpr[31] = (0x08AD0368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0368u) goto L_08AD0368;
    return;
L_08AD0368:
    ctx.gpr[31] = (0x08AD0370u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 312u, 0x08A09410u>(ctx, &aot_mem) && ctx.pc == 0x08AD0370u) goto L_08AD0370;
    return;
L_08AD0370:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD0380u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08AD0380u) goto L_08AD0380;
    return;
L_08AD0380:
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
L_08AD0398:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD03B8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD03B8u) goto L_08AD03B8;
    return;
L_08AD03B8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AD03D0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 297u, 0x088A9464u>(ctx, &aot_mem) && ctx.pc == 0x08AD03D0u) goto L_08AD03D0;
    return;
L_08AD03D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD03DCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08AD03DCu) goto L_08AD03DC;
    return;
L_08AD03DC:
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
L_08AD03F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD0404u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x08AD0404u) goto L_08AD0404;
    return;
L_08AD0404:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16406), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0420:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD0454u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-5944))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD0454u) goto L_08AD0454;
    return;
L_08AD0454:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AD048C;
      }
      goto L_08AD0460;
    }
L_08AD0460:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6400));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08AD048C;
L_08AD048C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AD04A0;
      }
      goto L_08AD0494;
    }
L_08AD0494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AD04A0;
L_08AD04A0:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD04B0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD04B0u) goto L_08AD04B0;
    return;
L_08AD04B0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD04D4;
      }
      goto L_08AD04BC;
    }
L_08AD04BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AD04D4;
      }
      goto L_08AD04CC;
    }
L_08AD04CC:
    ctx.gpr[31] = (0x08AD04D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08AD04D4u) goto L_08AD04D4;
    return;
L_08AD04D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08AD04F0;
    }
    goto L_08AD04E0;
L_08AD04E0:
    ctx.gpr[31] = (0x08AD04E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08AD04E8u) goto L_08AD04E8;
    return;
L_08AD04E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08AD04F0;
L_08AD04F0:
    ctx.gpr[31] = (0x08AD04F8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x08AD04F8u) goto L_08AD04F8;
    return;
L_08AD04F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AD0514;
      }
      goto L_08AD0504;
    }
L_08AD0504:
    ctx.gpr[31] = (0x08AD050Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08AD050Cu) goto L_08AD050C;
    return;
L_08AD050C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[6] = (2230u << 16u);
    goto L_08AD0514;
L_08AD0514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AD0528u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30004));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 488u, 0x08A4B984u>(ctx, &aot_mem) && ctx.pc == 0x08AD0528u) goto L_08AD0528;
    return;
L_08AD0528:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0544:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30060)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30064)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[16] / ctx.fpr[12];
    ctx.gpr[12] = (2230u << 16u);
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-30056), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[8] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-30036)));
    ctx.gpr[13] = (2230u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-30024)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(-30028)));
    ctx.gpr[9] = (16281u << 16u);
    ctx.gpr[12] = (2230u << 16u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[9] | 39322u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-30020), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-29504)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-30048), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16268u << 16u);
    ctx.gpr[3] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-30012), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[8] = (ctx.gpr[10] | 52429u);
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-5944), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-5944)));
    ctx.gpr[15] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[11] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-30052), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[2] = (15744u << 16u);
    ctx.gpr[14] = (2232u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[10] << 2u);
    ctx.gpr[6] = (ctx.gpr[14] + static_cast<std::uint32_t>(6008));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12900));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[24] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[25] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-30044), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(-30040), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-30032), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-30016), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-30008), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0690:
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
L_08AD06BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD06F8u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD06F8u) goto L_08AD06F8;
    return;
L_08AD06F8:
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-21288));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD071Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12872));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 807u, 0x08AFB79Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD071Cu) goto L_08AD071C;
    return;
L_08AD071C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD072Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12848));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 807u, 0x08AFB79Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD072Cu) goto L_08AD072C;
    return;
L_08AD072C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AD0740u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12836));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 499u, 0x08966278u>(ctx, &aot_mem) && ctx.pc == 0x08AD0740u) goto L_08AD0740;
    return;
L_08AD0740:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD078C;
      }
      goto L_08AD074C;
    }
L_08AD074C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD0758u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12832));
    goto L_08AD0690;
L_08AD0758:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 64u);
    ctx.gpr[31] = (0x08AD076Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6384));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD076Cu) goto L_08AD076C;
    return;
L_08AD076C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD0988;
      }
      goto L_08AD0778;
    }
L_08AD0778:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08AD0784u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0784u) goto L_08AD0784;
    return;
L_08AD0784:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0988;
      }
      goto L_08AD078C;
    }
L_08AD078C:
    ctx.gpr[21] = (2227u << 16u);
    ctx.gpr[20] = (2232u << 16u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.gpr[23] = (0u | 16603u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-12804));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(5440));
    goto L_08AD07A4;
L_08AD07A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[31] = (0x08AD07B4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 535u, 0x08966488u>(ctx, &aot_mem) && ctx.pc == 0x08AD07B4u) goto L_08AD07B4;
    return;
L_08AD07B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD07C0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 580u, 0x08AEE0E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD07C0u) goto L_08AD07C0;
    return;
L_08AD07C0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD07A4;
      }
      goto L_08AD07CC;
    }
L_08AD07CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AD07F4;
      }
      goto L_08AD07E0;
    }
L_08AD07E0:
    ctx.gpr[31] = (0x08AD07E8u);
    // nop
    ctx.pc = 0x08B0BDECu;
    return;
L_08AD07E8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AD07FC;
      }
      goto L_08AD07F4;
    }
L_08AD07F4:
    ctx.gpr[31] = (0x08AD07FCu);
    // nop
    ctx.pc = 0x08B0BDF4u;
    return;
L_08AD07FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 48 ? 1u : 0u);
    goto L_08AD0810;
L_08AD0810:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 58 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AD0820;
      }
      goto L_08AD0818;
    }
L_08AD0818:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0830;
      }
      goto L_08AD0820;
    }
L_08AD0820:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 48 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AD0810;
      }
      goto L_08AD0830;
    }
L_08AD0830:
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-32));
    goto L_08AD0834;
L_08AD0834:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 58 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AD0920;
      }
      goto L_08AD083C;
    }
L_08AD083C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0920;
      }
      goto L_08AD0844;
    }
L_08AD0844:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD08C0;
      }
      goto L_08AD085C;
    }
L_08AD085C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[7]);
    ctx.gpr[31] = (0x08AD0874u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 814u, 0x08AA3D54u>(ctx, &aot_mem) && ctx.pc == 0x08AD0874u) goto L_08AD0874;
    return;
L_08AD0874:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[7] = (ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-32));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
      if (branch_taken) {
          goto L_08AD08E8;
      }
      goto L_08AD0890;
    }
L_08AD0890:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AD08ACu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 715u, 0x08AA3578u>(ctx, &aot_mem) && ctx.pc == 0x08AD08ACu) goto L_08AD08AC;
    return;
L_08AD08AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-32));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
      if (branch_taken) {
          goto L_08AD08E8;
      }
      goto L_08AD08C0;
    }
L_08AD08C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[8]);
    ctx.gpr[31] = (0x08AD08D4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08AD08D4u) goto L_08AD08D4;
    return;
L_08AD08D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    goto L_08AD08E8;
L_08AD08E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 48 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AD0834;
      }
      goto L_08AD0920;
    }
L_08AD0920:
    ctx.gpr[31] = (0x08AD0928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 240u, 0x08AECC38u>(ctx, &aot_mem) && ctx.pc == 0x08AD0928u) goto L_08AD0928;
    return;
L_08AD0928:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[16] == ctx.gpr[23]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
        goto L_08AD0964;
    }
    goto L_08AD0934;
L_08AD0934:
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-12788));
    goto L_08AD0940;
L_08AD0940:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD0950u);
    ctx.gpr[6] = (0u | 16603u);
    goto L_08AD0690;
L_08AD0950:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0940;
      }
      goto L_08AD0960;
    }
L_08AD0960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    goto L_08AD0964;
L_08AD0964:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD0974;
      }
      goto L_08AD096C;
    }
L_08AD096C:
    ctx.gpr[31] = (0x08AD0974u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0974u) goto L_08AD0974;
    return;
L_08AD0974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD0988;
      }
      goto L_08AD0980;
    }
L_08AD0980:
    ctx.gpr[31] = (0x08AD0988u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0988u) goto L_08AD0988;
    return;
L_08AD0988:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD09B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD09C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 187u, 0x088B9024u>(ctx, &aot_mem) && ctx.pc == 0x08AD09C4u) goto L_08AD09C4;
    return;
L_08AD09C4:
    ctx.gpr[31] = (0x08AD09CCu);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 332u, 0x08A8A228u>(ctx, &aot_mem) && ctx.pc == 0x08AD09CCu) goto L_08AD09CC;
    return;
L_08AD09CC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[31] = (0x08AD09DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12720));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD09DCu) goto L_08AD09DC;
    return;
L_08AD09DC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[31] = (0x08AD09ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12700));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD09ECu) goto L_08AD09EC;
    return;
L_08AD09EC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[31] = (0x08AD09FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12676));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD09FCu) goto L_08AD09FC;
    return;
L_08AD09FC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[31] = (0x08AD0A0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12656));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0A0Cu) goto L_08AD0A0C;
    return;
L_08AD0A0C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[31] = (0x08AD0A1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12632));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0A1Cu) goto L_08AD0A1C;
    return;
L_08AD0A1C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0A2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD0A44u);
    // nop
    goto L_08AD06BC;
L_08AD0A44:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[31] = (0x08AD0A5Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 256u, 0x08839190u>(ctx, &aot_mem) && ctx.pc == 0x08AD0A5Cu) goto L_08AD0A5C;
    return;
L_08AD0A5C:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-7960));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD0B14;
      }
      goto L_08AD0A70;
    }
L_08AD0A70:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (17658u << 16u);
    ctx.gpr[31] = (0x08AD0A80u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 603u, 0x088735A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0A80u) goto L_08AD0A80;
    return;
L_08AD0A80:
    ctx.gpr[5] = (16230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AD0A94u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 597u, 0x08873550u>(ctx, &aot_mem) && ctx.pc == 0x08AD0A94u) goto L_08AD0A94;
    return;
L_08AD0A94:
    ctx.gpr[6] = (16179u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (16298u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 43691u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AD0AB8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 276u, 0x08839298u>(ctx, &aot_mem) && ctx.pc == 0x08AD0AB8u) goto L_08AD0AB8;
    return;
L_08AD0AB8:
    ctx.gpr[4] = (17948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (50716u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AD0AF0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 4u, 0x088780F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD0AF0u) goto L_08AD0AF0;
    return;
L_08AD0AF0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-7960), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AD0B1C;
      }
      goto L_08AD0B00;
    }
L_08AD0B00:
    ctx.gpr[31] = (0x08AD0B08u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 243u, 0x0883910Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0B08u) goto L_08AD0B08;
    return;
L_08AD0B08:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD0B94;
      }
      goto L_08AD0B14;
    }
L_08AD0B14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD0B94;
      }
      goto L_08AD0B1C;
    }
L_08AD0B1C:
    ctx.gpr[31] = (0x08AD0B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 7u, 0x08878118u>(ctx, &aot_mem) && ctx.pc == 0x08AD0B24u) goto L_08AD0B24;
    return;
L_08AD0B24:
    ctx.gpr[31] = (0x08AD0B2Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7960)));
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 419u, 0x088CF370u>(ctx, &aot_mem) && ctx.pc == 0x08AD0B2Cu) goto L_08AD0B2C;
    return;
L_08AD0B2C:
    ctx.gpr[31] = (0x08AD0B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 214u, 0x08A4CE18u>(ctx, &aot_mem) && ctx.pc == 0x08AD0B34u) goto L_08AD0B34;
    return;
L_08AD0B34:
    ctx.gpr[31] = (0x08AD0B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 245u, 0x08925B68u>(ctx, &aot_mem) && ctx.pc == 0x08AD0B3Cu) goto L_08AD0B3C;
    return;
L_08AD0B3C:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AD0B54u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12612));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 456u, 0x089C1F54u>(ctx, &aot_mem) && ctx.pc == 0x08AD0B54u) goto L_08AD0B54;
    return;
L_08AD0B54:
    ctx.gpr[31] = (0x08AD0B5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 609u, 0x0886B3CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD0B5Cu) goto L_08AD0B5C;
    return;
L_08AD0B5C:
    ctx.gpr[31] = (0x08AD0B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 571u, 0x0892F91Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0B64u) goto L_08AD0B64;
    return;
L_08AD0B64:
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(1824));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD0B78u);
    ctx.gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 173u, 0x088E8DF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD0B78u) goto L_08AD0B78;
    return;
L_08AD0B78:
    ctx.gpr[31] = (0x08AD0B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 32u, 0x08A54404u>(ctx, &aot_mem) && ctx.pc == 0x08AD0B80u) goto L_08AD0B80;
    return;
L_08AD0B80:
    ctx.gpr[31] = (0x08AD0B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 56u, 0x0898858Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0B88u) goto L_08AD0B88;
    return;
L_08AD0B88:
    ctx.gpr[31] = (0x08AD0B90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD0B90u) goto L_08AD0B90;
    return;
L_08AD0B90:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AD0B94;
L_08AD0B94:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0BA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0BF4;
      }
      goto L_08AD0BCC;
    }
L_08AD0BCC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AD0BD8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD0BD8u) goto L_08AD0BD8;
    return;
L_08AD0BD8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0BF0;
      }
      goto L_08AD0BE4;
    }
L_08AD0BE4:
    ctx.gpr[31] = (0x08AD0BECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD0BECu) goto L_08AD0BEC;
    return;
L_08AD0BEC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AD0BF0;
L_08AD0BF0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    goto L_08AD0BF4;
L_08AD0BF4:
    ctx.gpr[31] = (0x08AD0BFCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 442u, 0x08913D64u>(ctx, &aot_mem) && ctx.pc == 0x08AD0BFCu) goto L_08AD0BFC;
    return;
L_08AD0BFC:
    ctx.gpr[31] = (0x08AD0C04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 699u, 0x0891B228u>(ctx, &aot_mem) && ctx.pc == 0x08AD0C04u) goto L_08AD0C04;
    return;
L_08AD0C04:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD0C10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20948)));
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 34u, 0x088D05A8u>(ctx, &aot_mem) && ctx.pc == 0x08AD0C10u) goto L_08AD0C10;
    return;
L_08AD0C10:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AD0C1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 90u, 0x088646B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD0C1Cu) goto L_08AD0C1C;
    return;
L_08AD0C1C:
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
L_08AD0C38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AD0C54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 104u, 0x088647A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0C54u) goto L_08AD0C54;
    return;
L_08AD0C54:
    ctx.gpr[31] = (0x08AD0C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 337u, 0x08AB9C10u>(ctx, &aot_mem) && ctx.pc == 0x08AD0C5Cu) goto L_08AD0C5C;
    return;
L_08AD0C5C:
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-26096));
    goto L_08AD0C68;
L_08AD0C68:
    ctx.gpr[4] = (ctx.gpr[17] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[31] = (0x08AD0C84u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 238u, 0x089D5C38u>(ctx, &aot_mem) && ctx.pc == 0x08AD0C84u) goto L_08AD0C84;
    return;
L_08AD0C84:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0C68;
      }
      goto L_08AD0C9C;
    }
L_08AD0C9C:
    ctx.gpr[31] = (0x08AD0CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 525u, 0x08942348u>(ctx, &aot_mem) && ctx.pc == 0x08AD0CA4u) goto L_08AD0CA4;
    return;
L_08AD0CA4:
    ctx.gpr[31] = (0x08AD0CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 683u, 0x0893B7C4u>(ctx, &aot_mem) && ctx.pc == 0x08AD0CACu) goto L_08AD0CAC;
    return;
L_08AD0CAC:
    ctx.gpr[31] = (0x08AD0CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 313u, 0x089E1BB8u>(ctx, &aot_mem) && ctx.pc == 0x08AD0CB4u) goto L_08AD0CB4;
    return;
L_08AD0CB4:
    ctx.gpr[31] = (0x08AD0CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 319u, 0x089E1C40u>(ctx, &aot_mem) && ctx.pc == 0x08AD0CBCu) goto L_08AD0CBC;
    return;
L_08AD0CBC:
    ctx.gpr[31] = (0x08AD0CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 9u, 0x088C0218u>(ctx, &aot_mem) && ctx.pc == 0x08AD0CC4u) goto L_08AD0CC4;
    return;
L_08AD0CC4:
    ctx.gpr[31] = (0x08AD0CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 91u, 0x08A8C6E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0CCCu) goto L_08AD0CCC;
    return;
L_08AD0CCC:
    ctx.gpr[31] = (0x08AD0CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 717u, 0x0891B390u>(ctx, &aot_mem) && ctx.pc == 0x08AD0CD4u) goto L_08AD0CD4;
    return;
L_08AD0CD4:
    ctx.gpr[31] = (0x08AD0CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 377u, 0x089C5934u>(ctx, &aot_mem) && ctx.pc == 0x08AD0CDCu) goto L_08AD0CDC;
    return;
L_08AD0CDC:
    ctx.gpr[31] = (0x08AD0CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 136u, 0x08968CF0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0CE4u) goto L_08AD0CE4;
    return;
L_08AD0CE4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AD0CF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 401u, 0x08AD9B08u>(ctx, &aot_mem) && ctx.pc == 0x08AD0CF4u) goto L_08AD0CF4;
    return;
L_08AD0CF4:
    ctx.gpr[31] = (0x08AD0CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 578u, 0x089D2590u>(ctx, &aot_mem) && ctx.pc == 0x08AD0CFCu) goto L_08AD0CFC;
    return;
L_08AD0CFC:
    ctx.gpr[31] = (0x08AD0D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 416u, 0x08AE9CA8u>(ctx, &aot_mem) && ctx.pc == 0x08AD0D04u) goto L_08AD0D04;
    return;
L_08AD0D04:
    ctx.gpr[31] = (0x08AD0D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 267u, 0x08A257C4u>(ctx, &aot_mem) && ctx.pc == 0x08AD0D0Cu) goto L_08AD0D0C;
    return;
L_08AD0D0C:
    ctx.gpr[31] = (0x08AD0D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 320u, 0x08825FCCu>(ctx, &aot_mem) && ctx.pc == 0x08AD0D14u) goto L_08AD0D14;
    return;
L_08AD0D14:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08AD0D20u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 522u, 0x08B0B4A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0D20u) goto L_08AD0D20;
    return;
L_08AD0D20:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08AD0D2Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 526u, 0x08B0B4F8u>(ctx, &aot_mem) && ctx.pc == 0x08AD0D2Cu) goto L_08AD0D2C;
    return;
L_08AD0D2C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08AD0D38u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 530u, 0x08B0B550u>(ctx, &aot_mem) && ctx.pc == 0x08AD0D38u) goto L_08AD0D38;
    return;
L_08AD0D38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0D4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD0D70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12600));
    goto L_08AD0690;
L_08AD0D70:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AD0DA0u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08AD0DA0u) goto L_08AD0DA0;
    return;
L_08AD0DA0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08AD0DB8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD0DB8u) goto L_08AD0DB8;
    return;
L_08AD0DB8:
    ctx.gpr[31] = (0x08AD0DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 699u, 0x0891B228u>(ctx, &aot_mem) && ctx.pc == 0x08AD0DC0u) goto L_08AD0DC0;
    return;
L_08AD0DC0:
    ctx.gpr[31] = (0x08AD0DC8u);
    // nop
    goto L_08AD37D8;
L_08AD0DC8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[18] = (2232u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16500), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12960));
    ctx.gpr[31] = (0x08AD0DE0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 130u, 0x08908F9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0DE0u) goto L_08AD0DE0;
    return;
L_08AD0DE0:
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1133)));
    ctx.gpr[16] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-8107));
      if (branch_taken) {
          goto L_08AD0E00;
      }
      goto L_08AD0DF8;
    }
L_08AD0DF8:
    ctx.gpr[31] = (0x08AD0E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 178u, 0x088B0F64u>(ctx, &aot_mem) && ctx.pc == 0x08AD0E00u) goto L_08AD0E00;
    return;
L_08AD0E00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1133)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[31] = (0x08AD0E10u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AD0F4C;
L_08AD0E10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1133)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AD0EFC;
      }
      goto L_08AD0E1C;
    }
L_08AD0E1C:
    ctx.gpr[31] = (0x08AD0E24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 133u, 0x088B0D28u>(ctx, &aot_mem) && ctx.pc == 0x08AD0E24u) goto L_08AD0E24;
    return;
L_08AD0E24:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD0E60;
      }
      goto L_08AD0E30;
    }
L_08AD0E30:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[31] = (0x08AD0E40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 149u, 0x08864AB0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0E40u) goto L_08AD0E40;
    return;
L_08AD0E40:
    ctx.gpr[31] = (0x08AD0E48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 729u, 0x0896F8F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0E48u) goto L_08AD0E48;
    return;
L_08AD0E48:
    ctx.gpr[31] = (0x08AD0E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 461u, 0x089165ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD0E50u) goto L_08AD0E50;
    return;
L_08AD0E50:
    ctx.gpr[31] = (0x08AD0E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 305u, 0x08AA5738u>(ctx, &aot_mem) && ctx.pc == 0x08AD0E58u) goto L_08AD0E58;
    return;
L_08AD0E58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0EFC;
      }
      goto L_08AD0E60;
    }
L_08AD0E60:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-5943)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AD0EBC;
      }
      goto L_08AD0E70;
    }
L_08AD0E70:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-5943), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD0E88u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 390u, 0x088EE848u>(ctx, &aot_mem) && ctx.pc == 0x08AD0E88u) goto L_08AD0E88;
    return;
L_08AD0E88:
    ctx.gpr[31] = (0x08AD0E90u);
    // nop
    goto L_08AD0C38;
L_08AD0E90:
    ctx.gpr[31] = (0x08AD0E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 718u, 0x0891B398u>(ctx, &aot_mem) && ctx.pc == 0x08AD0E98u) goto L_08AD0E98;
    return;
L_08AD0E98:
    ctx.gpr[31] = (0x08AD0EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 699u, 0x0891B228u>(ctx, &aot_mem) && ctx.pc == 0x08AD0EA0u) goto L_08AD0EA0;
    return;
L_08AD0EA0:
    ctx.gpr[31] = (0x08AD0EA8u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08AD0F4C;
L_08AD0EA8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AD0EB4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7340), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 466u, 0x08A8E308u>(ctx, &aot_mem) && ctx.pc == 0x08AD0EB4u) goto L_08AD0EB4;
    return;
L_08AD0EB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0EFC;
      }
      goto L_08AD0EBC;
    }
L_08AD0EBC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD0ED0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 390u, 0x088EE848u>(ctx, &aot_mem) && ctx.pc == 0x08AD0ED0u) goto L_08AD0ED0;
    return;
L_08AD0ED0:
    ctx.gpr[31] = (0x08AD0ED8u);
    // nop
    goto L_08AD0C38;
L_08AD0ED8:
    ctx.gpr[31] = (0x08AD0EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 718u, 0x0891B398u>(ctx, &aot_mem) && ctx.pc == 0x08AD0EE0u) goto L_08AD0EE0;
    return;
L_08AD0EE0:
    ctx.gpr[31] = (0x08AD0EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 699u, 0x0891B228u>(ctx, &aot_mem) && ctx.pc == 0x08AD0EE8u) goto L_08AD0EE8;
    return;
L_08AD0EE8:
    ctx.gpr[31] = (0x08AD0EF0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08AD0F4C;
L_08AD0EF0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AD0EFCu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7340), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 466u, 0x08A8E308u>(ctx, &aot_mem) && ctx.pc == 0x08AD0EFCu) goto L_08AD0EFC;
    return;
L_08AD0EFC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08AD0F08u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1133), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 719u, 0x0891B3ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD0F08u) goto L_08AD0F08;
    return;
L_08AD0F08:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD0F14u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 151u, 0x08864AD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0F14u) goto L_08AD0F14;
    return;
L_08AD0F14:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16401), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16402), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD0F30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12572));
    goto L_08AD0690;
L_08AD0F30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0F4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD0F74u);
    ctx.gpr[4] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 54u, 0x0883C330u>(ctx, &aot_mem) && ctx.pc == 0x08AD0F74u) goto L_08AD0F74;
    return;
L_08AD0F74:
    ctx.gpr[31] = (0x08AD0F7Cu);
    ctx.gpr[19] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 63u, 0x08A8C4DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD0F7Cu) goto L_08AD0F7C;
    return;
L_08AD0F7C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[31] = (0x08AD0F8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 130u, 0x08908F9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0F8Cu) goto L_08AD0F8C;
    return;
L_08AD0F8C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7960));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AD0FA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 292u, 0x088EE08Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0FA0u) goto L_08AD0FA0;
    return;
L_08AD0FA0:
    ctx.gpr[31] = (0x08AD0FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 72u, 0x08A28A54u>(ctx, &aot_mem) && ctx.pc == 0x08AD0FA8u) goto L_08AD0FA8;
    return;
L_08AD0FA8:
    ctx.gpr[31] = (0x08AD0FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 561u, 0x08932D58u>(ctx, &aot_mem) && ctx.pc == 0x08AD0FB0u) goto L_08AD0FB0;
    return;
L_08AD0FB0:
    ctx.gpr[31] = (0x08AD0FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 149u, 0x0883CA74u>(ctx, &aot_mem) && ctx.pc == 0x08AD0FB8u) goto L_08AD0FB8;
    return;
L_08AD0FB8:
    ctx.gpr[31] = (0x08AD0FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 176u, 0x08878EC4u>(ctx, &aot_mem) && ctx.pc == 0x08AD0FC0u) goto L_08AD0FC0;
    return;
L_08AD0FC0:
    ctx.gpr[31] = (0x08AD0FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 181u, 0x08A24DA4u>(ctx, &aot_mem) && ctx.pc == 0x08AD0FC8u) goto L_08AD0FC8;
    return;
L_08AD0FC8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AD0FD4u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7147), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 417u, 0x0898673Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0FD4u) goto L_08AD0FD4;
    return;
L_08AD0FD4:
    ctx.gpr[31] = (0x08AD0FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 619u, 0x08966B18u>(ctx, &aot_mem) && ctx.pc == 0x08AD0FDCu) goto L_08AD0FDC;
    return;
L_08AD0FDC:
    ctx.gpr[31] = (0x08AD0FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 31u, 0x089EC328u>(ctx, &aot_mem) && ctx.pc == 0x08AD0FE4u) goto L_08AD0FE4;
    return;
L_08AD0FE4:
    ctx.gpr[4] = (17136u << 16u);
    ctx.gpr[31] = (0x08AD0FF0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 162u, 0x0883CBECu>(ctx, &aot_mem) && ctx.pc == 0x08AD0FF0u) goto L_08AD0FF0;
    return;
L_08AD0FF0:
    ctx.gpr[4] = (17402u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7900), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[16] = (2275u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1824));
      if (branch_taken) {
          goto L_08AD101C;
      }
      goto L_08AD1014;
    }
L_08AD1014:
    ctx.gpr[31] = (0x08AD101Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x08AD101Cu) goto L_08AD101C;
    return;
L_08AD101C:
    ctx.gpr[31] = (0x08AD1024u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20436)));
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 7u, 0x0895009Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1024u) goto L_08AD1024;
    return;
L_08AD1024:
    ctx.gpr[31] = (0x08AD102Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 814u, 0x089C750Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD102Cu) goto L_08AD102C;
    return;
L_08AD102C:
    ctx.gpr[31] = (0x08AD1034u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 843u, 0x089C7710u>(ctx, &aot_mem) && ctx.pc == 0x08AD1034u) goto L_08AD1034;
    return;
L_08AD1034:
    ctx.gpr[31] = (0x08AD103Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 843u, 0x089C7710u>(ctx, &aot_mem) && ctx.pc == 0x08AD103Cu) goto L_08AD103C;
    return;
L_08AD103C:
    ctx.gpr[31] = (0x08AD1044u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 843u, 0x089C7710u>(ctx, &aot_mem) && ctx.pc == 0x08AD1044u) goto L_08AD1044;
    return;
L_08AD1044:
    ctx.gpr[31] = (0x08AD104Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x08AD104Cu) goto L_08AD104C;
    return;
L_08AD104C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AD1058u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29520), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 509u, 0x08A9247Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1058u) goto L_08AD1058;
    return;
L_08AD1058:
    ctx.gpr[31] = (0x08AD1060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 113u, 0x08850C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1060u) goto L_08AD1060;
    return;
L_08AD1060:
    ctx.gpr[31] = (0x08AD1068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 228u, 0x08A9D154u>(ctx, &aot_mem) && ctx.pc == 0x08AD1068u) goto L_08AD1068;
    return;
L_08AD1068:
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-26096));
    goto L_08AD1074;
L_08AD1074:
    ctx.gpr[4] = (ctx.gpr[18] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[31] = (0x08AD1090u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 238u, 0x089D5C38u>(ctx, &aot_mem) && ctx.pc == 0x08AD1090u) goto L_08AD1090;
    return;
L_08AD1090:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1074;
      }
      goto L_08AD10A8;
    }
L_08AD10A8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AD10B4u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 504u, 0x08932770u>(ctx, &aot_mem) && ctx.pc == 0x08AD10B4u) goto L_08AD10B4;
    return;
L_08AD10B4:
    ctx.gpr[31] = (0x08AD10BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 668u, 0x08806B98u>(ctx, &aot_mem) && ctx.pc == 0x08AD10BCu) goto L_08AD10BC;
    return;
L_08AD10BC:
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[31] = (0x08AD10C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19376));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 41u, 0x089302C8u>(ctx, &aot_mem) && ctx.pc == 0x08AD10C8u) goto L_08AD10C8;
    return;
L_08AD10C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD10D4u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 173u, 0x088E8DF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD10D4u) goto L_08AD10D4;
    return;
L_08AD10D4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD10F0;
      }
      goto L_08AD10E4;
    }
L_08AD10E4:
    ctx.gpr[31] = (0x08AD10ECu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 409u, 0x08961E20u>(ctx, &aot_mem) && ctx.pc == 0x08AD10ECu) goto L_08AD10EC;
    return;
L_08AD10EC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08AD10F0;
L_08AD10F0:
    ctx.gpr[31] = (0x08AD10F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 619u, 0x08AC3B9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD10F8u) goto L_08AD10F8;
    return;
L_08AD10F8:
    ctx.gpr[31] = (0x08AD1100u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD1100u) goto L_08AD1100;
    return;
L_08AD1100:
    ctx.gpr[31] = (0x08AD1108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 699u, 0x0891B228u>(ctx, &aot_mem) && ctx.pc == 0x08AD1108u) goto L_08AD1108;
    return;
L_08AD1108:
    ctx.gpr[31] = (0x08AD1110u);
    // nop
    goto L_08AD2D2C;
L_08AD1110:
    ctx.gpr[31] = (0x08AD1118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 547u, 0x08A434BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD1118u) goto L_08AD1118;
    return;
L_08AD1118:
    ctx.gpr[31] = (0x08AD1120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 598u, 0x08ABB6C8u>(ctx, &aot_mem) && ctx.pc == 0x08AD1120u) goto L_08AD1120;
    return;
L_08AD1120:
    ctx.gpr[31] = (0x08AD1128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 642u, 0x089176A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD1128u) goto L_08AD1128;
    return;
L_08AD1128:
    ctx.gpr[31] = (0x08AD1130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 69u, 0x08A812F8u>(ctx, &aot_mem) && ctx.pc == 0x08AD1130u) goto L_08AD1130;
    return;
L_08AD1130:
    ctx.gpr[31] = (0x08AD1138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 301u, 0x08A829A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD1138u) goto L_08AD1138;
    return;
L_08AD1138:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1148;
      }
      goto L_08AD1140;
    }
L_08AD1140:
    ctx.gpr[31] = (0x08AD1148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 675u, 0x0893B6B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD1148u) goto L_08AD1148;
    return;
L_08AD1148:
    ctx.gpr[31] = (0x08AD1150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 306u, 0x08825E64u>(ctx, &aot_mem) && ctx.pc == 0x08AD1150u) goto L_08AD1150;
    return;
L_08AD1150:
    ctx.gpr[31] = (0x08AD1158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 114u, 0x089F8E28u>(ctx, &aot_mem) && ctx.pc == 0x08AD1158u) goto L_08AD1158;
    return;
L_08AD1158:
    ctx.gpr[31] = (0x08AD1160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 679u, 0x0886BB00u>(ctx, &aot_mem) && ctx.pc == 0x08AD1160u) goto L_08AD1160;
    return;
L_08AD1160:
    ctx.gpr[31] = (0x08AD1168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 416u, 0x08ABA358u>(ctx, &aot_mem) && ctx.pc == 0x08AD1168u) goto L_08AD1168;
    return;
L_08AD1168:
    ctx.gpr[31] = (0x08AD1170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 87u, 0x08998728u>(ctx, &aot_mem) && ctx.pc == 0x08AD1170u) goto L_08AD1170;
    return;
L_08AD1170:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD117Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12536));
    goto L_08AD0690;
L_08AD117C:
    ctx.gpr[31] = (0x08AD1184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 365u, 0x0897A83Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1184u) goto L_08AD1184;
    return;
L_08AD1184:
    ctx.gpr[31] = (0x08AD118Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 305u, 0x08AA5738u>(ctx, &aot_mem) && ctx.pc == 0x08AD118Cu) goto L_08AD118C;
    return;
L_08AD118C:
    ctx.gpr[31] = (0x08AD1194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 729u, 0x0896F8F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD1194u) goto L_08AD1194;
    return;
L_08AD1194:
    ctx.gpr[31] = (0x08AD119Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 461u, 0x089165ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD119Cu) goto L_08AD119C;
    return;
L_08AD119C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD11A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12496));
    goto L_08AD0690;
L_08AD11A8:
    ctx.gpr[31] = (0x08AD11B0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD11B0u) goto L_08AD11B0;
    return;
L_08AD11B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD11BCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 643u, 0x08A96BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD11BCu) goto L_08AD11BC;
    return;
L_08AD11BC:
    ctx.gpr[31] = (0x08AD11C4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD11C4u) goto L_08AD11C4;
    return;
L_08AD11C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD11D0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 643u, 0x08A96BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD11D0u) goto L_08AD11D0;
    return;
L_08AD11D0:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_08AD11F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD11FC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29520)));
    ctx.gpr[5] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[2] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD1230:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29520)));
    ctx.gpr[5] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[2] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD1258:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD1298u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12428));
    goto L_08AD0690;
L_08AD1298:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[23] = (0u | 23u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5736));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(-4832));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AD12C8;
      }
      goto L_08AD12C0;
    }
L_08AD12C0:
    ctx.gpr[31] = (0x08AD12C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD12C8u) goto L_08AD12C8;
    return;
L_08AD12C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD12EC;
      }
      goto L_08AD12DC;
    }
L_08AD12DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AD12F4;
      }
      goto L_08AD12EC;
    }
L_08AD12EC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AD12F4;
L_08AD12F4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1308;
      }
      goto L_08AD12FC;
    }
L_08AD12FC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD1308u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12356));
    goto L_08AD0690;
L_08AD1308:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD1334;
      }
      goto L_08AD1314;
    }
L_08AD1314:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AD1338;
      }
      goto L_08AD1330;
    }
L_08AD1330:
    ctx.gpr[4] = (0u | 1u);
    goto L_08AD1334;
L_08AD1334:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AD1338;
L_08AD1338:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1348;
      }
      goto L_08AD1340;
    }
L_08AD1340:
    ctx.gpr[31] = (0x08AD1348u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 402u, 0x088AD944u>(ctx, &aot_mem) && ctx.pc == 0x08AD1348u) goto L_08AD1348;
    return;
L_08AD1348:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08AD1354u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(27452), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 428u, 0x089C1B80u>(ctx, &aot_mem) && ctx.pc == 0x08AD1354u) goto L_08AD1354;
    return;
L_08AD1354:
    ctx.gpr[31] = (0x08AD135Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 180u, 0x08AE4F44u>(ctx, &aot_mem) && ctx.pc == 0x08AD135Cu) goto L_08AD135C;
    return;
L_08AD135C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25838), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25839), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[31] = (0x08AD1378u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 669u, 0x08ADE850u>(ctx, &aot_mem) && ctx.pc == 0x08AD1378u) goto L_08AD1378;
    return;
L_08AD1378:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(308), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1380), ctx.gpr[23]);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD13B4;
      }
      goto L_08AD1390;
    }
L_08AD1390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD13A4;
      }
      goto L_08AD139C;
    }
L_08AD139C:
    ctx.gpr[31] = (0x08AD13A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD13A4u) goto L_08AD13A4;
    return;
L_08AD13A4:
    ctx.gpr[31] = (0x08AD13ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 356u, 0x08A09768u>(ctx, &aot_mem) && ctx.pc == 0x08AD13ACu) goto L_08AD13AC;
    return;
L_08AD13AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD13FC;
      }
      goto L_08AD13B4;
    }
L_08AD13B4:
    ctx.gpr[4] = (0u | 24u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(305), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[31] = (0x08AD13D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12452));
    goto L_08AD0690;
L_08AD13D0:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
        goto L_08AD13EC;
    }
    goto L_08AD13E0;
L_08AD13E0:
    ctx.gpr[31] = (0x08AD13E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD13E8u) goto L_08AD13E8;
    return;
L_08AD13E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    goto L_08AD13EC;
L_08AD13EC:
    ctx.gpr[31] = (0x08AD13F4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 355u, 0x08A09760u>(ctx, &aot_mem) && ctx.pc == 0x08AD13F4u) goto L_08AD13F4;
    return;
L_08AD13F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD153C;
      }
      goto L_08AD13FC;
    }
L_08AD13FC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1414;
      }
      goto L_08AD1404;
    }
L_08AD1404:
    ctx.gpr[4] = (0u | 27u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_08AD153C;
      }
      goto L_08AD1414;
    }
L_08AD1414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
        goto L_08AD142C;
    }
    goto L_08AD1420;
L_08AD1420:
    ctx.gpr[31] = (0x08AD1428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1428u) goto L_08AD1428;
    return;
L_08AD1428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    goto L_08AD142C;
L_08AD142C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1468;
      }
      goto L_08AD1438;
    }
L_08AD1438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD144C;
      }
      goto L_08AD1444;
    }
L_08AD1444:
    ctx.gpr[31] = (0x08AD144Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD144Cu) goto L_08AD144C;
    return;
L_08AD144C:
    ctx.gpr[31] = (0x08AD1454u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 292u, 0x08A092E8u>(ctx, &aot_mem) && ctx.pc == 0x08AD1454u) goto L_08AD1454;
    return;
L_08AD1454:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1468;
      }
      goto L_08AD145C;
    }
L_08AD145C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1380), ctx.gpr[23]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_08AD153C;
      }
      goto L_08AD1468;
    }
L_08AD1468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD147C;
      }
      goto L_08AD1474;
    }
L_08AD1474:
    ctx.gpr[31] = (0x08AD147Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD147Cu) goto L_08AD147C;
    return;
L_08AD147C:
    ctx.gpr[31] = (0x08AD1484u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 292u, 0x08A092E8u>(ctx, &aot_mem) && ctx.pc == 0x08AD1484u) goto L_08AD1484;
    return;
L_08AD1484:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD149C;
      }
      goto L_08AD148C;
    }
L_08AD148C:
    ctx.gpr[4] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_08AD153C;
      }
      goto L_08AD149C;
    }
L_08AD149C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
        goto L_08AD14B4;
    }
    goto L_08AD14A8;
L_08AD14A8:
    ctx.gpr[31] = (0x08AD14B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD14B0u) goto L_08AD14B0;
    return;
L_08AD14B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    goto L_08AD14B4;
L_08AD14B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD14D4;
      }
      goto L_08AD14C4;
    }
L_08AD14C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AD14DC;
      }
      goto L_08AD14D4;
    }
L_08AD14D4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AD14DC;
L_08AD14DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1518;
      }
      goto L_08AD14E4;
    }
L_08AD14E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
        goto L_08AD14FC;
    }
    goto L_08AD14F0;
L_08AD14F0:
    ctx.gpr[31] = (0x08AD14F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD14F8u) goto L_08AD14F8;
    return;
L_08AD14F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    goto L_08AD14FC;
L_08AD14FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1518;
      }
      goto L_08AD1508;
    }
L_08AD1508:
    ctx.gpr[4] = (0u | 26u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_08AD153C;
      }
      goto L_08AD1518;
    }
L_08AD1518:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1530;
      }
      goto L_08AD1520;
    }
L_08AD1520:
    ctx.gpr[4] = (0u | 26u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_08AD153C;
      }
      goto L_08AD1530;
    }
L_08AD1530:
    ctx.gpr[4] = (0u | 14u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(0u));
    goto L_08AD153C;
L_08AD153C:
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-4832), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-20928)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1558;
      }
      goto L_08AD1550;
    }
L_08AD1550:
    ctx.gpr[31] = (0x08AD1558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 533u, 0x08AFA59Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1558u) goto L_08AD1558;
    return;
L_08AD1558:
    ctx.gpr[31] = (0x08AD1560u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-20928)));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 479u, 0x0882BC80u>(ctx, &aot_mem) && ctx.pc == 0x08AD1560u) goto L_08AD1560;
    return;
L_08AD1560:
    ctx.gpr[31] = (0x08AD1568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 789u, 0x089C31A8u>(ctx, &aot_mem) && ctx.pc == 0x08AD1568u) goto L_08AD1568;
    return;
L_08AD1568:
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
L_08AD1598:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[18] = (2275u << 16u);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[21] = (2232u << 16u);
    ctx.gpr[16] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1824));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-12316));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-12296));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12960));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[22] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD1600u);
    ctx.gpr[23] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 441u, 0x089C1CA4u>(ctx, &aot_mem) && ctx.pc == 0x08AD1600u) goto L_08AD1600;
    return;
L_08AD1600:
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD1610u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6608));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD1610u) goto L_08AD1610;
    return;
L_08AD1610:
    ctx.gpr[31] = (0x08AD1618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 554u, 0x08A06C38u>(ctx, &aot_mem) && ctx.pc == 0x08AD1618u) goto L_08AD1618;
    return;
L_08AD1618:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-7340), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29520), 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD1634u);
    ctx.gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 173u, 0x088E8DF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD1634u) goto L_08AD1634;
    return;
L_08AD1634:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AD164Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12272));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 456u, 0x089C1F54u>(ctx, &aot_mem) && ctx.pc == 0x08AD164Cu) goto L_08AD164C;
    return;
L_08AD164C:
    ctx.gpr[31] = (0x08AD1654u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD1654u) goto L_08AD1654;
    return;
L_08AD1654:
    ctx.gpr[31] = (0x08AD165Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 63u, 0x08A8C4DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD165Cu) goto L_08AD165C;
    return;
L_08AD165C:
    ctx.gpr[31] = (0x08AD1664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 652u, 0x0883B674u>(ctx, &aot_mem) && ctx.pc == 0x08AD1664u) goto L_08AD1664;
    return;
L_08AD1664:
    ctx.gpr[31] = (0x08AD166Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 130u, 0x08908F9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD166Cu) goto L_08AD166C;
    return;
L_08AD166C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7960));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AD1680u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 292u, 0x088EE08Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1680u) goto L_08AD1680;
    return;
L_08AD1680:
    ctx.gpr[31] = (0x08AD1688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 72u, 0x08A28A54u>(ctx, &aot_mem) && ctx.pc == 0x08AD1688u) goto L_08AD1688;
    return;
L_08AD1688:
    ctx.gpr[31] = (0x08AD1690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 416u, 0x08ABA358u>(ctx, &aot_mem) && ctx.pc == 0x08AD1690u) goto L_08AD1690;
    return;
L_08AD1690:
    ctx.gpr[31] = (0x08AD1698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 561u, 0x08932D58u>(ctx, &aot_mem) && ctx.pc == 0x08AD1698u) goto L_08AD1698;
    return;
L_08AD1698:
    ctx.gpr[31] = (0x08AD16A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 464u, 0x08A8E2D8u>(ctx, &aot_mem) && ctx.pc == 0x08AD16A0u) goto L_08AD16A0;
    return;
L_08AD16A0:
    ctx.gpr[31] = (0x08AD16A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 416u, 0x08AE9CA8u>(ctx, &aot_mem) && ctx.pc == 0x08AD16A8u) goto L_08AD16A8;
    return;
L_08AD16A8:
    ctx.gpr[31] = (0x08AD16B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 149u, 0x0883CA74u>(ctx, &aot_mem) && ctx.pc == 0x08AD16B0u) goto L_08AD16B0;
    return;
L_08AD16B0:
    ctx.gpr[31] = (0x08AD16B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 176u, 0x08878EC4u>(ctx, &aot_mem) && ctx.pc == 0x08AD16B8u) goto L_08AD16B8;
    return;
L_08AD16B8:
    ctx.gpr[31] = (0x08AD16C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 483u, 0x0887AF60u>(ctx, &aot_mem) && ctx.pc == 0x08AD16C0u) goto L_08AD16C0;
    return;
L_08AD16C0:
    ctx.gpr[31] = (0x08AD16C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 674u, 0x08A9A200u>(ctx, &aot_mem) && ctx.pc == 0x08AD16C8u) goto L_08AD16C8;
    return;
L_08AD16C8:
    ctx.gpr[31] = (0x08AD16D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 181u, 0x08A24DA4u>(ctx, &aot_mem) && ctx.pc == 0x08AD16D0u) goto L_08AD16D0;
    return;
L_08AD16D0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD16DCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 173u, 0x088E8DF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD16DCu) goto L_08AD16DC;
    return;
L_08AD16DC:
    ctx.gpr[31] = (0x08AD16E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 8u, 0x088C01CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD16E4u) goto L_08AD16E4;
    return;
L_08AD16E4:
    ctx.gpr[31] = (0x08AD16ECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD16ECu) goto L_08AD16EC;
    return;
L_08AD16EC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD16F8u);
    ctx.gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 173u, 0x088E8DF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD16F8u) goto L_08AD16F8;
    return;
L_08AD16F8:
    ctx.gpr[31] = (0x08AD1700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 127u, 0x08998C08u>(ctx, &aot_mem) && ctx.pc == 0x08AD1700u) goto L_08AD1700;
    return;
L_08AD1700:
    ctx.gpr[31] = (0x08AD1708u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD1708u) goto L_08AD1708;
    return;
L_08AD1708:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD1714u);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 173u, 0x088E8DF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD1714u) goto L_08AD1714;
    return;
L_08AD1714:
    ctx.gpr[31] = (0x08AD171Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 24u, 0x089EC244u>(ctx, &aot_mem) && ctx.pc == 0x08AD171Cu) goto L_08AD171C;
    return;
L_08AD171C:
    ctx.gpr[31] = (0x08AD1724u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD1724u) goto L_08AD1724;
    return;
L_08AD1724:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD1730u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 173u, 0x088E8DF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD1730u) goto L_08AD1730;
    return;
L_08AD1730:
    ctx.gpr[31] = (0x08AD1738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 69u, 0x08A812F8u>(ctx, &aot_mem) && ctx.pc == 0x08AD1738u) goto L_08AD1738;
    return;
L_08AD1738:
    ctx.gpr[31] = (0x08AD1740u);
    // nop
    goto L_08AD2D2C;
L_08AD1740:
    ctx.gpr[31] = (0x08AD1748u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD1748u) goto L_08AD1748;
    return;
L_08AD1748:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_08AD1754;
L_08AD1754:
    ctx.gpr[31] = (0x08AD175Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 238u, 0x089D5C38u>(ctx, &aot_mem) && ctx.pc == 0x08AD175Cu) goto L_08AD175C;
    return;
L_08AD175C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(368));
      if (branch_taken) {
          goto L_08AD1754;
      }
      goto L_08AD176C;
    }
L_08AD176C:
    ctx.gpr[4] = (17136u << 16u);
    ctx.gpr[31] = (0x08AD1778u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 162u, 0x0883CBECu>(ctx, &aot_mem) && ctx.pc == 0x08AD1778u) goto L_08AD1778;
    return;
L_08AD1778:
    ctx.gpr[5] = (17402u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7900), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AD17A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12264));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 456u, 0x089C1F54u>(ctx, &aot_mem) && ctx.pc == 0x08AD17A0u) goto L_08AD17A0;
    return;
L_08AD17A0:
    ctx.gpr[31] = (0x08AD17A8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x08AD17A8u) goto L_08AD17A8;
    return;
L_08AD17A8:
    ctx.gpr[31] = (0x08AD17B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 10u, 0x089C80CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD17B0u) goto L_08AD17B0;
    return;
L_08AD17B0:
    ctx.gpr[31] = (0x08AD17B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 882u, 0x089C79A8u>(ctx, &aot_mem) && ctx.pc == 0x08AD17B8u) goto L_08AD17B8;
    return;
L_08AD17B8:
    ctx.gpr[31] = (0x08AD17C0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x08AD17C0u) goto L_08AD17C0;
    return;
L_08AD17C0:
    ctx.gpr[31] = (0x08AD17C8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x08AD17C8u) goto L_08AD17C8;
    return;
L_08AD17C8:
    ctx.gpr[31] = (0x08AD17D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 516u, 0x08ACE3CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD17D0u) goto L_08AD17D0;
    return;
L_08AD17D0:
    ctx.gpr[31] = (0x08AD17D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 509u, 0x08A9247Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD17D8u) goto L_08AD17D8;
    return;
L_08AD17D8:
    ctx.gpr[31] = (0x08AD17E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 44u, 0x089C8370u>(ctx, &aot_mem) && ctx.pc == 0x08AD17E0u) goto L_08AD17E0;
    return;
L_08AD17E0:
    ctx.gpr[31] = (0x08AD17E8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x08AD17E8u) goto L_08AD17E8;
    return;
L_08AD17E8:
    ctx.gpr[31] = (0x08AD17F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 224u, 0x08AA996Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD17F0u) goto L_08AD17F0;
    return;
L_08AD17F0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD1804u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 456u, 0x089C1F54u>(ctx, &aot_mem) && ctx.pc == 0x08AD1804u) goto L_08AD1804;
    return;
L_08AD1804:
    ctx.gpr[31] = (0x08AD180Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 619u, 0x08966B18u>(ctx, &aot_mem) && ctx.pc == 0x08AD180Cu) goto L_08AD180C;
    return;
L_08AD180C:
    ctx.gpr[31] = (0x08AD1814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 628u, 0x08966C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1814u) goto L_08AD1814;
    return;
L_08AD1814:
    ctx.gpr[31] = (0x08AD181Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 113u, 0x08850C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD181Cu) goto L_08AD181C;
    return;
L_08AD181C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AD1834u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12248));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 456u, 0x089C1F54u>(ctx, &aot_mem) && ctx.pc == 0x08AD1834u) goto L_08AD1834;
    return;
L_08AD1834:
    ctx.gpr[31] = (0x08AD183Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 120u, 0x089E89B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD183Cu) goto L_08AD183C;
    return;
L_08AD183C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD1850u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 456u, 0x089C1F54u>(ctx, &aot_mem) && ctx.pc == 0x08AD1850u) goto L_08AD1850;
    return;
L_08AD1850:
    ctx.gpr[31] = (0x08AD1858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 228u, 0x08A9D154u>(ctx, &aot_mem) && ctx.pc == 0x08AD1858u) goto L_08AD1858;
    return;
L_08AD1858:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AD1864u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 316u, 0x089FA078u>(ctx, &aot_mem) && ctx.pc == 0x08AD1864u) goto L_08AD1864;
    return;
L_08AD1864:
    ctx.gpr[31] = (0x08AD186Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 125u, 0x08929138u>(ctx, &aot_mem) && ctx.pc == 0x08AD186Cu) goto L_08AD186C;
    return;
L_08AD186C:
    ctx.gpr[31] = (0x08AD1874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 149u, 0x08868EC4u>(ctx, &aot_mem) && ctx.pc == 0x08AD1874u) goto L_08AD1874;
    return;
L_08AD1874:
    ctx.gpr[31] = (0x08AD187Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 235u, 0x08AE53D4u>(ctx, &aot_mem) && ctx.pc == 0x08AD187Cu) goto L_08AD187C;
    return;
L_08AD187C:
    ctx.gpr[31] = (0x08AD1884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 504u, 0x08932770u>(ctx, &aot_mem) && ctx.pc == 0x08AD1884u) goto L_08AD1884;
    return;
L_08AD1884:
    ctx.gpr[31] = (0x08AD188Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 668u, 0x08806B98u>(ctx, &aot_mem) && ctx.pc == 0x08AD188Cu) goto L_08AD188C;
    return;
L_08AD188C:
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[31] = (0x08AD1898u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19376));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 41u, 0x089302C8u>(ctx, &aot_mem) && ctx.pc == 0x08AD1898u) goto L_08AD1898;
    return;
L_08AD1898:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AD18B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12224));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 456u, 0x089C1F54u>(ctx, &aot_mem) && ctx.pc == 0x08AD18B0u) goto L_08AD18B0;
    return;
L_08AD18B0:
    ctx.gpr[31] = (0x08AD18B8u);
    ctx.gpr[4] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 54u, 0x0883C330u>(ctx, &aot_mem) && ctx.pc == 0x08AD18B8u) goto L_08AD18B8;
    return;
L_08AD18B8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD18C4u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 173u, 0x088E8DF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD18C4u) goto L_08AD18C4;
    return;
L_08AD18C4:
    ctx.gpr[31] = (0x08AD18CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 320u, 0x088456DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD18CCu) goto L_08AD18CC;
    return;
L_08AD18CC:
    ctx.gpr[31] = (0x08AD18D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 675u, 0x0893B6B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD18D4u) goto L_08AD18D4;
    return;
L_08AD18D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1900;
      }
      goto L_08AD18E0;
    }
L_08AD18E0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1133)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[31] = (0x08AD18F8u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 409u, 0x08961E20u>(ctx, &aot_mem) && ctx.pc == 0x08AD18F8u) goto L_08AD18F8;
    return;
L_08AD18F8:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1133), static_cast<std::uint8_t>(0u));
    goto L_08AD1900;
L_08AD1900:
    ctx.gpr[31] = (0x08AD1908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 619u, 0x08AC3B9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1908u) goto L_08AD1908;
    return;
L_08AD1908:
    ctx.gpr[31] = (0x08AD1910u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD1910u) goto L_08AD1910;
    return;
L_08AD1910:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD1924u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 456u, 0x089C1F54u>(ctx, &aot_mem) && ctx.pc == 0x08AD1924u) goto L_08AD1924;
    return;
L_08AD1924:
    ctx.gpr[31] = (0x08AD192Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 547u, 0x08A434BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD192Cu) goto L_08AD192C;
    return;
L_08AD192C:
    ctx.gpr[31] = (0x08AD1934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 365u, 0x0897A83Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1934u) goto L_08AD1934;
    return;
L_08AD1934:
    ctx.gpr[31] = (0x08AD193Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 598u, 0x08ABB6C8u>(ctx, &aot_mem) && ctx.pc == 0x08AD193Cu) goto L_08AD193C;
    return;
L_08AD193C:
    ctx.gpr[31] = (0x08AD1944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 642u, 0x089176A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD1944u) goto L_08AD1944;
    return;
L_08AD1944:
    ctx.gpr[31] = (0x08AD194Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 301u, 0x08A829A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD194Cu) goto L_08AD194C;
    return;
L_08AD194C:
    ctx.gpr[31] = (0x08AD1954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 112u, 0x08A8875Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1954u) goto L_08AD1954;
    return;
L_08AD1954:
    ctx.gpr[31] = (0x08AD195Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 406u, 0x08836500u>(ctx, &aot_mem) && ctx.pc == 0x08AD195Cu) goto L_08AD195C;
    return;
L_08AD195C:
    ctx.gpr[31] = (0x08AD1964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 306u, 0x08825E64u>(ctx, &aot_mem) && ctx.pc == 0x08AD1964u) goto L_08AD1964;
    return;
L_08AD1964:
    ctx.gpr[31] = (0x08AD196Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 114u, 0x089F8E28u>(ctx, &aot_mem) && ctx.pc == 0x08AD196Cu) goto L_08AD196C;
    return;
L_08AD196C:
    ctx.gpr[31] = (0x08AD1974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 679u, 0x0886BB00u>(ctx, &aot_mem) && ctx.pc == 0x08AD1974u) goto L_08AD1974;
    return;
L_08AD1974:
    ctx.gpr[31] = (0x08AD197Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 316u, 0x08965464u>(ctx, &aot_mem) && ctx.pc == 0x08AD197Cu) goto L_08AD197C;
    return;
L_08AD197C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AD1994u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12208));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 456u, 0x089C1F54u>(ctx, &aot_mem) && ctx.pc == 0x08AD1994u) goto L_08AD1994;
    return;
L_08AD1994:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AD19ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12180));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 456u, 0x089C1F54u>(ctx, &aot_mem) && ctx.pc == 0x08AD19ACu) goto L_08AD19AC;
    return;
L_08AD19AC:
    ctx.gpr[31] = (0x08AD19B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 729u, 0x0896F8F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD19B4u) goto L_08AD19B4;
    return;
L_08AD19B4:
    ctx.gpr[31] = (0x08AD19BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 461u, 0x089165ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD19BCu) goto L_08AD19BC;
    return;
L_08AD19BC:
    ctx.gpr[31] = (0x08AD19C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 305u, 0x08AA5738u>(ctx, &aot_mem) && ctx.pc == 0x08AD19C4u) goto L_08AD19C4;
    return;
L_08AD19C4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD19D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12152));
    goto L_08AD0690;
L_08AD19D0:
    ctx.gpr[31] = (0x08AD19D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 561u, 0x08A8EAC0u>(ctx, &aot_mem) && ctx.pc == 0x08AD19D8u) goto L_08AD19D8;
    return;
L_08AD19D8:
    ctx.gpr[31] = (0x08AD19E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 676u, 0x08A9A214u>(ctx, &aot_mem) && ctx.pc == 0x08AD19E0u) goto L_08AD19E0;
    return;
L_08AD19E0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12140));
    ctx.gpr[31] = (0x08AD19FCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12124));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 456u, 0x089C1F54u>(ctx, &aot_mem) && ctx.pc == 0x08AD19FCu) goto L_08AD19FC;
    return;
L_08AD19FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1A28;
      }
      goto L_08AD1A08;
    }
L_08AD1A08:
    ctx.gpr[31] = (0x08AD1A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 31u, 0x08958264u>(ctx, &aot_mem) && ctx.pc == 0x08AD1A10u) goto L_08AD1A10;
    return;
L_08AD1A10:
    ctx.gpr[31] = (0x08AD1A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 477u, 0x08962524u>(ctx, &aot_mem) && ctx.pc == 0x08AD1A18u) goto L_08AD1A18;
    return;
L_08AD1A18:
    ctx.gpr[31] = (0x08AD1A20u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 215u, 0x08900D14u>(ctx, &aot_mem) && ctx.pc == 0x08AD1A20u) goto L_08AD1A20;
    return;
L_08AD1A20:
    ctx.gpr[31] = (0x08AD1A28u);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 574u, 0x089C676Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1A28u) goto L_08AD1A28;
    return;
L_08AD1A28:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD1A34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12116));
    goto L_08AD0690;
L_08AD1A34:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AD1A4Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12104));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 456u, 0x089C1F54u>(ctx, &aot_mem) && ctx.pc == 0x08AD1A4Cu) goto L_08AD1A4C;
    return;
L_08AD1A4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-7340)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-8116), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD1A64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12092));
    goto L_08AD0690;
L_08AD1A64:
    ctx.gpr[31] = (0x08AD1A6Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD1A6Cu) goto L_08AD1A6C;
    return;
L_08AD1A6C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD1A78u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 643u, 0x08A96BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD1A78u) goto L_08AD1A78;
    return;
L_08AD1A78:
    ctx.gpr[31] = (0x08AD1A80u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD1A80u) goto L_08AD1A80;
    return;
L_08AD1A80:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD1A8Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 643u, 0x08A96BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD1A8Cu) goto L_08AD1A8C;
    return;
L_08AD1A8C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD1A98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12080));
    goto L_08AD0690;
L_08AD1A98:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AD1AA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 151u, 0x08864AD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD1AA8u) goto L_08AD1AA8;
    return;
L_08AD1AA8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD1AB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12068));
    goto L_08AD0690;
L_08AD1AB4:
    ctx.gpr[2] = (ctx.gpr[23] | 0u);
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
L_08AD1AE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4832));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1133)));
    ctx.gpr[19] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-26464));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AD1BE8;
      }
      goto L_08AD1B3C;
    }
L_08AD1B3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1B70;
      }
      goto L_08AD1B48;
    }
L_08AD1B48:
    ctx.gpr[31] = (0x08AD1B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 31u, 0x08958264u>(ctx, &aot_mem) && ctx.pc == 0x08AD1B50u) goto L_08AD1B50;
    return;
L_08AD1B50:
    ctx.gpr[31] = (0x08AD1B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 477u, 0x08962524u>(ctx, &aot_mem) && ctx.pc == 0x08AD1B58u) goto L_08AD1B58;
    return;
L_08AD1B58:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[31] = (0x08AD1B68u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 215u, 0x08900D14u>(ctx, &aot_mem) && ctx.pc == 0x08AD1B68u) goto L_08AD1B68;
    return;
L_08AD1B68:
    ctx.gpr[31] = (0x08AD1B70u);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 574u, 0x089C676Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1B70u) goto L_08AD1B70;
    return;
L_08AD1B70:
    ctx.gpr[31] = (0x08AD1B78u);
    // nop
    goto L_08AD11F4;
L_08AD1B78:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1BB4;
      }
      goto L_08AD1B98;
    }
L_08AD1B98:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08AD1BACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12056));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 667u, 0x089C6D48u>(ctx, &aot_mem) && ctx.pc == 0x08AD1BACu) goto L_08AD1BAC;
    return;
L_08AD1BAC:
    ctx.gpr[31] = (0x08AD1BB4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x08AD1BB4u) goto L_08AD1BB4;
    return;
L_08AD1BB4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(21945), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1BE4;
      }
      goto L_08AD1BCC;
    }
L_08AD1BCC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[31] = (0x08AD1BDCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 215u, 0x08900D14u>(ctx, &aot_mem) && ctx.pc == 0x08AD1BDCu) goto L_08AD1BDC;
    return;
L_08AD1BDC:
    ctx.gpr[31] = (0x08AD1BE4u);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 574u, 0x089C676Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1BE4u) goto L_08AD1BE4;
    return;
L_08AD1BE4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1133), static_cast<std::uint8_t>(0u));
    goto L_08AD1BE8;
L_08AD1BE8:
    ctx.gpr[31] = (0x08AD1BF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 525u, 0x08A964D4u>(ctx, &aot_mem) && ctx.pc == 0x08AD1BF0u) goto L_08AD1BF0;
    return;
L_08AD1BF0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AD1C14;
      }
      goto L_08AD1BFC;
    }
L_08AD1BFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(297)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1C14;
      }
      goto L_08AD1C08;
    }
L_08AD1C08:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD1C14u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 131u, 0x089D5468u>(ctx, &aot_mem) && ctx.pc == 0x08AD1C14u) goto L_08AD1C14;
    return;
L_08AD1C14:
    ctx.gpr[31] = (0x08AD1C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 63u, 0x08824748u>(ctx, &aot_mem) && ctx.pc == 0x08AD1C1Cu) goto L_08AD1C1C;
    return;
L_08AD1C1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-7168)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(680)));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7152)));
        goto L_08AD1C40;
    }
    goto L_08AD1C34;
L_08AD1C34:
    ctx.gpr[31] = (0x08AD1C3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 723u, 0x08ADAF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1C3Cu) goto L_08AD1C3C;
    return;
L_08AD1C3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7152)));
    goto L_08AD1C40;
L_08AD1C40:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1C98;
      }
      goto L_08AD1C48;
    }
L_08AD1C48:
    ctx.gpr[31] = (0x08AD1C50u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-7152), ctx.gpr[20]);
    ctx.pc = 0x08B0BCBCu;
    return;
L_08AD1C50:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AD1C64u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BCACu;
    return;
L_08AD1C64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (13702u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 14269u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2232u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AD1C98;
L_08AD1C98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2310;
      }
      goto L_08AD1CA4;
    }
L_08AD1CA4:
    ctx.gpr[22] = (2232u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[23] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AD1CE8;
      }
      goto L_08AD1CC8;
    }
L_08AD1CC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AD1CEC;
      }
      goto L_08AD1CE4;
    }
L_08AD1CE4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08AD1CE8;
L_08AD1CE8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AD1CEC;
L_08AD1CEC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1D40;
      }
      goto L_08AD1CF4;
    }
L_08AD1CF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(225)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1D40;
      }
      goto L_08AD1D00;
    }
L_08AD1D00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20932)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20932)));
        goto L_08AD1D18;
    }
    goto L_08AD1D0C;
L_08AD1D0C:
    ctx.gpr[31] = (0x08AD1D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1D14u) goto L_08AD1D14;
    return;
L_08AD1D14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20932)));
    goto L_08AD1D18;
L_08AD1D18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1D40;
      }
      goto L_08AD1D30;
    }
L_08AD1D30:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD1D3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12048));
    goto L_08AD0690;
L_08AD1D3C:
    ctx.gpr[21] = (0u | 1u);
    goto L_08AD1D40;
L_08AD1D40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(225)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1D84;
      }
      goto L_08AD1D4C;
    }
L_08AD1D4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1D84;
      }
      goto L_08AD1D5C;
    }
L_08AD1D5C:
    ctx.gpr[31] = (0x08AD1D64u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 631u, 0x088A7C40u>(ctx, &aot_mem) && ctx.pc == 0x08AD1D64u) goto L_08AD1D64;
    return;
L_08AD1D64:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1D84;
      }
      goto L_08AD1D6C;
    }
L_08AD1D6C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD1D78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12012));
    goto L_08AD0690;
L_08AD1D78:
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08AD1DCC;
      }
      goto L_08AD1D84;
    }
L_08AD1D84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(225)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1DCC;
      }
      goto L_08AD1D90;
    }
L_08AD1D90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1DCC;
      }
      goto L_08AD1DA8;
    }
L_08AD1DA8:
    ctx.gpr[31] = (0x08AD1DB0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 59u, 0x088A832Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1DB0u) goto L_08AD1DB0;
    return;
L_08AD1DB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1DCC;
      }
      goto L_08AD1DB8;
    }
L_08AD1DB8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD1DC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11976));
    goto L_08AD0690;
L_08AD1DC4:
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_08AD1DCC;
L_08AD1DCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20932)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20932)));
        goto L_08AD1DE4;
    }
    goto L_08AD1DD8;
L_08AD1DD8:
    ctx.gpr[31] = (0x08AD1DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1DE0u) goto L_08AD1DE0;
    return;
L_08AD1DE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20932)));
    goto L_08AD1DE4;
L_08AD1DE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD1E04;
      }
      goto L_08AD1DF4;
    }
L_08AD1DF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AD1E0C;
      }
      goto L_08AD1E04;
    }
L_08AD1E04:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AD1E0C;
L_08AD1E0C:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1E38;
      }
      goto L_08AD1E18;
    }
L_08AD1E18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1E38;
      }
      goto L_08AD1E24;
    }
L_08AD1E24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD1E4C;
      }
      goto L_08AD1E30;
    }
L_08AD1E30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AD1E70;
      }
      goto L_08AD1E38;
    }
L_08AD1E38:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD1E44u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08AD1258;
L_08AD1E44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2684;
      }
      goto L_08AD1E4C;
    }
L_08AD1E4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AD1E70;
      }
      goto L_08AD1E68;
    }
L_08AD1E68:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AD1E70;
L_08AD1E70:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD20D4;
      }
      goto L_08AD1E78;
    }
L_08AD1E78:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD1E84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11924));
    goto L_08AD0690;
L_08AD1E84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1E98;
      }
      goto L_08AD1E90;
    }
L_08AD1E90:
    ctx.gpr[31] = (0x08AD1E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1E98u) goto L_08AD1E98;
    return;
L_08AD1E98:
    ctx.gpr[31] = (0x08AD1EA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20932)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 3u, 0x08A08034u>(ctx, &aot_mem) && ctx.pc == 0x08AD1EA0u) goto L_08AD1EA0;
    return;
L_08AD1EA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20932)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20932)));
        goto L_08AD1EB8;
    }
    goto L_08AD1EAC;
L_08AD1EAC:
    ctx.gpr[31] = (0x08AD1EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1EB4u) goto L_08AD1EB4;
    return;
L_08AD1EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20932)));
    goto L_08AD1EB8;
L_08AD1EB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1FE8;
      }
      goto L_08AD1ED0;
    }
L_08AD1ED0:
    ctx.gpr[31] = (0x08AD1ED8u);
    // nop
    ctx.pc = 0x08B0BCBCu;
    return;
L_08AD1ED8:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AD1EECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BCACu;
    return;
L_08AD1EEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (13702u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 14269u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (2232u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7148)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD1FA4;
      }
      goto L_08AD1F3C;
    }
L_08AD1F3C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD1F48u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11888));
    ctx.pc = 0x08B0BCBCu;
    return;
L_08AD1F48:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AD1F5Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BCACu;
    return;
L_08AD1F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7148)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[31] = (0x08AD1F88u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08AD1F88u) goto L_08AD1F88;
    return;
L_08AD1F88:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD1F98u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08AD0690;
L_08AD1F98:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08AD1FA4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08AD1258;
L_08AD1FA4:
    ctx.gpr[31] = (0x08AD1FACu);
    // nop
    ctx.pc = 0x08B0BCBCu;
    return;
L_08AD1FAC:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AD1FC0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BCACu;
    return;
L_08AD1FC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-7148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AD2684;
      }
      goto L_08AD1FE8;
    }
L_08AD1FE8:
    ctx.gpr[21] = (2227u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-11848));
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD2008u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 456u, 0x089C1F54u>(ctx, &aot_mem) && ctx.pc == 0x08AD2008u) goto L_08AD2008;
    return;
L_08AD2008:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[23]));
    ctx.gpr[31] = (0x08AD205Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 865u, 0x088ABCB4u>(ctx, &aot_mem) && ctx.pc == 0x08AD205Cu) goto L_08AD205C;
    return;
L_08AD205C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD20AC;
      }
      goto L_08AD2068;
    }
L_08AD2068:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD207Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 456u, 0x089C1F54u>(ctx, &aot_mem) && ctx.pc == 0x08AD207Cu) goto L_08AD207C;
    return;
L_08AD207C:
    ctx.gpr[31] = (0x08AD2084u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 560u, 0x088AE434u>(ctx, &aot_mem) && ctx.pc == 0x08AD2084u) goto L_08AD2084;
    return;
L_08AD2084:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD20C0;
      }
      goto L_08AD208C;
    }
L_08AD208C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD2098u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11836));
    goto L_08AD0690;
L_08AD2098:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AD20A4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD1258;
L_08AD20A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2684;
      }
      goto L_08AD20AC;
    }
L_08AD20AC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AD20B8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD1258;
L_08AD20B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2684;
      }
      goto L_08AD20C0;
    }
L_08AD20C0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD20D4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 456u, 0x089C1F54u>(ctx, &aot_mem) && ctx.pc == 0x08AD20D4u) goto L_08AD20D4;
    return;
L_08AD20D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD20F4;
      }
      goto L_08AD20E0;
    }
L_08AD20E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(225)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2108;
      }
      goto L_08AD20EC;
    }
L_08AD20EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2304;
      }
      goto L_08AD20F4;
    }
L_08AD20F4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AD2100u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD1258;
L_08AD2100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2684;
      }
      goto L_08AD2108;
    }
L_08AD2108:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD2114u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11804));
    goto L_08AD0690;
L_08AD2114:
    ctx.gpr[31] = (0x08AD211Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 586u, 0x088A7968u>(ctx, &aot_mem) && ctx.pc == 0x08AD211Cu) goto L_08AD211C;
    return;
L_08AD211C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD22E4;
      }
      goto L_08AD2124;
    }
L_08AD2124:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD22D0;
      }
      goto L_08AD2130;
    }
L_08AD2130:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD213Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11760));
    goto L_08AD0690;
L_08AD213C:
    ctx.gpr[21] = (2227u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-11848));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD2158u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 456u, 0x089C1F54u>(ctx, &aot_mem) && ctx.pc == 0x08AD2158u) goto L_08AD2158;
    return;
L_08AD2158:
    ctx.gpr[31] = (0x08AD2160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 428u, 0x08986A0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD2160u) goto L_08AD2160;
    return;
L_08AD2160:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD22BC;
      }
      goto L_08AD216C;
    }
L_08AD216C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD22A8;
      }
      goto L_08AD2178;
    }
L_08AD2178:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD2184u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11740));
    goto L_08AD0690;
L_08AD2184:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD2198u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 456u, 0x089C1F54u>(ctx, &aot_mem) && ctx.pc == 0x08AD2198u) goto L_08AD2198;
    return;
L_08AD2198:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2294;
      }
      goto L_08AD21A4;
    }
L_08AD21A4:
    ctx.gpr[31] = (0x08AD21ACu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 409u, 0x08961E20u>(ctx, &aot_mem) && ctx.pc == 0x08AD21ACu) goto L_08AD21AC;
    return;
L_08AD21AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2280;
      }
      goto L_08AD21B8;
    }
L_08AD21B8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD21C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11720));
    goto L_08AD0690;
L_08AD21C4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD21D8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 456u, 0x089C1F54u>(ctx, &aot_mem) && ctx.pc == 0x08AD21D8u) goto L_08AD21D8;
    return;
L_08AD21D8:
    ctx.gpr[31] = (0x08AD21E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 477u, 0x08962524u>(ctx, &aot_mem) && ctx.pc == 0x08AD21E0u) goto L_08AD21E0;
    return;
L_08AD21E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD226C;
      }
      goto L_08AD21EC;
    }
L_08AD21EC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD21F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11700));
    goto L_08AD0690;
L_08AD21F8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD220Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 456u, 0x089C1F54u>(ctx, &aot_mem) && ctx.pc == 0x08AD220Cu) goto L_08AD220C;
    return;
L_08AD220C:
    ctx.gpr[31] = (0x08AD2214u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 644u, 0x088AEADCu>(ctx, &aot_mem) && ctx.pc == 0x08AD2214u) goto L_08AD2214;
    return;
L_08AD2214:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[31] = (0x08AD2224u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 574u, 0x089C676Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD2224u) goto L_08AD2224;
    return;
L_08AD2224:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2258;
      }
      goto L_08AD2230;
    }
L_08AD2230:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD223Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11680));
    goto L_08AD0690;
L_08AD223C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD2250u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 456u, 0x089C1F54u>(ctx, &aot_mem) && ctx.pc == 0x08AD2250u) goto L_08AD2250;
    return;
L_08AD2250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2304;
      }
      goto L_08AD2258;
    }
L_08AD2258:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AD2264u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD1258;
L_08AD2264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2684;
      }
      goto L_08AD226C;
    }
L_08AD226C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD2278u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08AD1258;
L_08AD2278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2684;
      }
      goto L_08AD2280;
    }
L_08AD2280:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AD228Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD1258;
L_08AD228C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2684;
      }
      goto L_08AD2294;
    }
L_08AD2294:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AD22A0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD1258;
L_08AD22A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2684;
      }
      goto L_08AD22A8;
    }
L_08AD22A8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AD22B4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD1258;
L_08AD22B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2684;
      }
      goto L_08AD22BC;
    }
L_08AD22BC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AD22C8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD1258;
L_08AD22C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2684;
      }
      goto L_08AD22D0;
    }
L_08AD22D0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AD22DCu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD1258;
L_08AD22DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2684;
      }
      goto L_08AD22E4;
    }
L_08AD22E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD22FC;
      }
      goto L_08AD22F0;
    }
L_08AD22F0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AD22FCu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD1258;
L_08AD22FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2684;
      }
      goto L_08AD2304;
    }
L_08AD2304:
    ctx.gpr[19] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AD2368;
      }
      goto L_08AD2310;
    }
L_08AD2310:
    ctx.gpr[31] = (0x08AD2318u);
    // nop
    ctx.pc = 0x08B0BCBCu;
    return;
L_08AD2318:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AD232Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BCACu;
    return;
L_08AD232C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (13702u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 14269u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[20] = (2230u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AD2368;
L_08AD2368:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1133)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD23C0;
      }
      goto L_08AD2374;
    }
L_08AD2374:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD2380u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 200u, 0x08871568u>(ctx, &aot_mem) && ctx.pc == 0x08AD2380u) goto L_08AD2380;
    return;
L_08AD2380:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x08AD238Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B0BCB4u;
    return;
L_08AD238C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08AD239Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B0BCA4u;
    return;
L_08AD239C:
    ctx.gpr[31] = (0x08AD23A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 388u, 0x089C59E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD23A4u) goto L_08AD23A4;
    return;
L_08AD23A4:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[31] = (0x08AD23B0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B0BCB4u;
    return;
L_08AD23B0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[31] = (0x08AD23C0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B0BCA4u;
    return;
L_08AD23C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-7200)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(5140), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-7168)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2684;
      }
      goto L_08AD23D8;
    }
L_08AD23D8:
    ctx.gpr[31] = (0x08AD23E0u);
    // nop
    goto L_08AD37D8;
L_08AD23E0:
    ctx.gpr[31] = (0x08AD23E8u);
    // nop
    goto L_08AD37E0;
L_08AD23E8:
    ctx.gpr[31] = (0x08AD23F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 77u, 0x08A54684u>(ctx, &aot_mem) && ctx.pc == 0x08AD23F0u) goto L_08AD23F0;
    return;
L_08AD23F0:
    ctx.gpr[31] = (0x08AD23F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 675u, 0x08A9A20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD23F8u) goto L_08AD23F8;
    return;
L_08AD23F8:
    ctx.gpr[31] = (0x08AD2400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 677u, 0x08A9A220u>(ctx, &aot_mem) && ctx.pc == 0x08AD2400u) goto L_08AD2400;
    return;
L_08AD2400:
    ctx.gpr[31] = (0x08AD2408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 532u, 0x08A9651Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD2408u) goto L_08AD2408;
    return;
L_08AD2408:
    ctx.gpr[31] = (0x08AD2410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 61u, 0x0883C458u>(ctx, &aot_mem) && ctx.pc == 0x08AD2410u) goto L_08AD2410;
    return;
L_08AD2410:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27452)));
    ctx.gpr[18] = (2275u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1824));
      if (branch_taken) {
          goto L_08AD242C;
      }
      goto L_08AD2420;
    }
L_08AD2420:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08AD242Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 248u, 0x088A9160u>(ctx, &aot_mem) && ctx.pc == 0x08AD242Cu) goto L_08AD242C;
    return;
L_08AD242C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1133)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2440;
      }
      goto L_08AD2438;
    }
L_08AD2438:
    ctx.gpr[31] = (0x08AD2440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 2u, 0x08934030u>(ctx, &aot_mem) && ctx.pc == 0x08AD2440u) goto L_08AD2440;
    return;
L_08AD2440:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD244Cu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 173u, 0x088E8DF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD244Cu) goto L_08AD244C;
    return;
L_08AD244C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2460;
      }
      goto L_08AD2458;
    }
L_08AD2458:
    ctx.gpr[31] = (0x08AD2460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 477u, 0x08962524u>(ctx, &aot_mem) && ctx.pc == 0x08AD2460u) goto L_08AD2460;
    return;
L_08AD2460:
    ctx.gpr[31] = (0x08AD2468u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD2468u) goto L_08AD2468;
    return;
L_08AD2468:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1133)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD24BC;
      }
      goto L_08AD2474;
    }
L_08AD2474:
    ctx.gpr[31] = (0x08AD247Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 420u, 0x08ABA3A8u>(ctx, &aot_mem) && ctx.pc == 0x08AD247Cu) goto L_08AD247C;
    return;
L_08AD247C:
    ctx.gpr[31] = (0x08AD2484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 169u, 0x089712E4u>(ctx, &aot_mem) && ctx.pc == 0x08AD2484u) goto L_08AD2484;
    return;
L_08AD2484:
    ctx.gpr[31] = (0x08AD248Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 501u, 0x08916A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD248Cu) goto L_08AD248C;
    return;
L_08AD248C:
    ctx.gpr[31] = (0x08AD2494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 637u, 0x08AA7D74u>(ctx, &aot_mem) && ctx.pc == 0x08AD2494u) goto L_08AD2494;
    return;
L_08AD2494:
    ctx.gpr[31] = (0x08AD249Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 258u, 0x08A45C30u>(ctx, &aot_mem) && ctx.pc == 0x08AD249Cu) goto L_08AD249C;
    return;
L_08AD249C:
    ctx.gpr[31] = (0x08AD24A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 643u, 0x089176ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD24A4u) goto L_08AD24A4;
    return;
L_08AD24A4:
    ctx.gpr[31] = (0x08AD24ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 245u, 0x08AE54A8u>(ctx, &aot_mem) && ctx.pc == 0x08AD24ACu) goto L_08AD24AC;
    return;
L_08AD24AC:
    ctx.gpr[31] = (0x08AD24B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 507u, 0x089327BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD24B4u) goto L_08AD24B4;
    return;
L_08AD24B4:
    ctx.gpr[31] = (0x08AD24BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 673u, 0x08806C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD24BCu) goto L_08AD24BC;
    return;
L_08AD24BC:
    ctx.gpr[31] = (0x08AD24C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 513u, 0x08A9250Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD24C4u) goto L_08AD24C4;
    return;
L_08AD24C4:
    ctx.gpr[31] = (0x08AD24CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 401u, 0x0899A4CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD24CCu) goto L_08AD24CC;
    return;
L_08AD24CC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08AD24D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25056));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 643u, 0x0884EA04u>(ctx, &aot_mem) && ctx.pc == 0x08AD24D8u) goto L_08AD24D8;
    return;
L_08AD24D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1133)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2524;
      }
      goto L_08AD24E4;
    }
L_08AD24E4:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.gpr[31] = (0x08AD24F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0BCB4u;
    return;
L_08AD24F0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x08AD2500u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0BCA4u;
    return;
L_08AD2500:
    ctx.gpr[31] = (0x08AD2508u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 231u, 0x08A9D248u>(ctx, &aot_mem) && ctx.pc == 0x08AD2508u) goto L_08AD2508;
    return;
L_08AD2508:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.gpr[31] = (0x08AD2514u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0BCB4u;
    return;
L_08AD2514:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[31] = (0x08AD2524u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0BCA4u;
    return;
L_08AD2524:
    ctx.gpr[31] = (0x08AD252Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 118u, 0x08850C48u>(ctx, &aot_mem) && ctx.pc == 0x08AD252Cu) goto L_08AD252C;
    return;
L_08AD252C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(679)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2544;
      }
      goto L_08AD253C;
    }
L_08AD253C:
    ctx.gpr[31] = (0x08AD2544u);
    // nop
    goto L_08AD2DF4;
L_08AD2544:
    ctx.gpr[31] = (0x08AD254Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 407u, 0x0897AB3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD254Cu) goto L_08AD254C;
    return;
L_08AD254C:
    ctx.gpr[31] = (0x08AD2554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 416u, 0x088365B4u>(ctx, &aot_mem) && ctx.pc == 0x08AD2554u) goto L_08AD2554;
    return;
L_08AD2554:
    ctx.gpr[31] = (0x08AD255Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 345u, 0x08AB9CE0u>(ctx, &aot_mem) && ctx.pc == 0x08AD255Cu) goto L_08AD255C;
    return;
L_08AD255C:
    ctx.gpr[31] = (0x08AD2564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 698u, 0x0886BC90u>(ctx, &aot_mem) && ctx.pc == 0x08AD2564u) goto L_08AD2564;
    return;
L_08AD2564:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1133)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2578;
      }
      goto L_08AD2570;
    }
L_08AD2570:
    ctx.gpr[31] = (0x08AD2578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 154u, 0x0883CAB8u>(ctx, &aot_mem) && ctx.pc == 0x08AD2578u) goto L_08AD2578;
    return;
L_08AD2578:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD2584u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 173u, 0x088E8DF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD2584u) goto L_08AD2584;
    return;
L_08AD2584:
    ctx.gpr[31] = (0x08AD258Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 629u, 0x088C7B5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD258Cu) goto L_08AD258C;
    return;
L_08AD258C:
    ctx.gpr[31] = (0x08AD2594u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD2594u) goto L_08AD2594;
    return;
L_08AD2594:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x08AD25A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16664));
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 50u, 0x088B0328u>(ctx, &aot_mem) && ctx.pc == 0x08AD25A0u) goto L_08AD25A0;
    return;
L_08AD25A0:
    ctx.gpr[31] = (0x08AD25A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 302u, 0x08A829A8u>(ctx, &aot_mem) && ctx.pc == 0x08AD25A8u) goto L_08AD25A8;
    return;
L_08AD25A8:
    ctx.gpr[31] = (0x08AD25B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 74u, 0x08A81390u>(ctx, &aot_mem) && ctx.pc == 0x08AD25B0u) goto L_08AD25B0;
    return;
L_08AD25B0:
    ctx.gpr[31] = (0x08AD25B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 694u, 0x0893B888u>(ctx, &aot_mem) && ctx.pc == 0x08AD25B8u) goto L_08AD25B8;
    return;
L_08AD25B8:
    ctx.gpr[31] = (0x08AD25C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 130u, 0x08A88914u>(ctx, &aot_mem) && ctx.pc == 0x08AD25C0u) goto L_08AD25C0;
    return;
L_08AD25C0:
    ctx.gpr[31] = (0x08AD25C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 325u, 0x0882600Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD25C8u) goto L_08AD25C8;
    return;
L_08AD25C8:
    ctx.gpr[31] = (0x08AD25D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 117u, 0x089F8E50u>(ctx, &aot_mem) && ctx.pc == 0x08AD25D0u) goto L_08AD25D0;
    return;
L_08AD25D0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08AD25DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 279u, 0x08A7D830u>(ctx, &aot_mem) && ctx.pc == 0x08AD25DCu) goto L_08AD25DC;
    return;
L_08AD25DC:
    ctx.gpr[31] = (0x08AD25E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 327u, 0x08ACA324u>(ctx, &aot_mem) && ctx.pc == 0x08AD25E4u) goto L_08AD25E4;
    return;
L_08AD25E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1133)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2608;
      }
      goto L_08AD25F0;
    }
L_08AD25F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2608;
      }
      goto L_08AD25FC;
    }
L_08AD25FC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08AD2608u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 215u, 0x08900D14u>(ctx, &aot_mem) && ctx.pc == 0x08AD2608u) goto L_08AD2608;
    return;
L_08AD2608:
    ctx.gpr[31] = (0x08AD2610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 141u, 0x08A8CB68u>(ctx, &aot_mem) && ctx.pc == 0x08AD2610u) goto L_08AD2610;
    return;
L_08AD2610:
    ctx.gpr[31] = (0x08AD2618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 360u, 0x08965794u>(ctx, &aot_mem) && ctx.pc == 0x08AD2618u) goto L_08AD2618;
    return;
L_08AD2618:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1133)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2650;
      }
      goto L_08AD2624;
    }
L_08AD2624:
    ctx.gpr[31] = (0x08AD262Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 342u, 0x089FA2A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD262Cu) goto L_08AD262C;
    return;
L_08AD262C:
    ctx.gpr[31] = (0x08AD2634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 297u, 0x089F9F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD2634u) goto L_08AD2634;
    return;
L_08AD2634:
    ctx.gpr[31] = (0x08AD263Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 300u, 0x0892A648u>(ctx, &aot_mem) && ctx.pc == 0x08AD263Cu) goto L_08AD263C;
    return;
L_08AD263C:
    ctx.gpr[31] = (0x08AD2644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 308u, 0x0892A6DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD2644u) goto L_08AD2644;
    return;
L_08AD2644:
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[31] = (0x08AD2650u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19376));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 76u, 0x08930668u>(ctx, &aot_mem) && ctx.pc == 0x08AD2650u) goto L_08AD2650;
    return;
L_08AD2650:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD265Cu);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 173u, 0x088E8DF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD265Cu) goto L_08AD265C;
    return;
L_08AD265C:
    ctx.gpr[31] = (0x08AD2664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 309u, 0x089EA1C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD2664u) goto L_08AD2664;
    return;
L_08AD2664:
    ctx.gpr[31] = (0x08AD266Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 139u, 0x089E8B10u>(ctx, &aot_mem) && ctx.pc == 0x08AD266Cu) goto L_08AD266C;
    return;
L_08AD266C:
    ctx.gpr[31] = (0x08AD2674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 369u, 0x089EA57Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD2674u) goto L_08AD2674;
    return;
L_08AD2674:
    ctx.gpr[31] = (0x08AD267Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 383u, 0x089EA6E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD267Cu) goto L_08AD267C;
    return;
L_08AD267C:
    ctx.gpr[31] = (0x08AD2684u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD2684u) goto L_08AD2684;
    return;
L_08AD2684:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD26B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29588)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29592)));
    ctx.gpr[2] = (2230u << 16u);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29584), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29564)));
    ctx.gpr[3] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-29552)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-29556)));
    ctx.gpr[24] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[16] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29548), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29540), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2230u << 16u);
    ctx.gpr[12] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-29576), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-29580), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[11] = (15744u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[11]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[14] = (2230u << 16u);
    ctx.gpr[8] = (16281u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-29572), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[15] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] | 39322u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29568), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-29560), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[25] = (2230u << 16u);
    ctx.gpr[2] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(-29544), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29536), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD27A8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD27B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 8u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08AD2838u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 270u, 0x088C1B24u>(ctx, &aot_mem) && ctx.pc == 0x08AD2838u) goto L_08AD2838;
    return;
L_08AD2838:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD28E8;
      }
      goto L_08AD284C;
    }
L_08AD284C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11604)));
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    goto L_08AD2868;
L_08AD2868:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(64)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[17] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AD28D8;
      }
      goto L_08AD28A4;
    }
L_08AD28A4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[17] = ctx.fpr[12] + ctx.fpr[17];
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD28D8;
      }
      goto L_08AD28CC;
    }
L_08AD28CC:
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08AD28EC;
      }
      goto L_08AD28D8;
    }
L_08AD28D8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD2868;
      }
      goto L_08AD28E8;
    }
L_08AD28E8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD28EC;
L_08AD28EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD2904:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AD2930u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 199u, 0x089D599Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD2930u) goto L_08AD2930;
    return;
L_08AD2930:
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[12];
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[13];
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD2A64;
      }
      goto L_08AD2968;
    }
L_08AD2968:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD2994;
      }
      goto L_08AD2980;
    }
L_08AD2980:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD2994;
L_08AD2994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AD2A64;
      }
      goto L_08AD29A4;
    }
L_08AD29A4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (17189u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD2A64;
      }
      goto L_08AD29C8;
    }
L_08AD29C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-720));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08AD2A2C;
      }
      goto L_08AD2A24;
    }
L_08AD2A24:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AD2A2C;
L_08AD2A2C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2A64;
      }
      goto L_08AD2A34;
    }
L_08AD2A34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08AD2A58u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 328u, 0x08AB18FCu>(ctx, &aot_mem) && ctx.pc == 0x08AD2A58u) goto L_08AD2A58;
    return;
L_08AD2A58:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2A64;
      }
      goto L_08AD2A60;
    }
L_08AD2A60:
    ctx.gpr[17] = (0u | 1u);
    goto L_08AD2A64;
L_08AD2A64:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (17116u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD2A94;
      }
      goto L_08AD2A8C;
    }
L_08AD2A8C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2B4C;
      }
      goto L_08AD2A94;
    }
L_08AD2A94:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6240)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2B44;
      }
      goto L_08AD2AA4;
    }
L_08AD2AA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(42)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2AEC;
      }
      goto L_08AD2AB0;
    }
L_08AD2AB0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (17116u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_08AD2AF4;
    }
    goto L_08AD2AE4;
L_08AD2AE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2AFC;
      }
      goto L_08AD2AEC;
    }
L_08AD2AEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD2B60;
      }
      goto L_08AD2AF4;
    }
L_08AD2AF4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2B34;
      }
      goto L_08AD2AFC;
    }
L_08AD2AFC:
    ctx.gpr[31] = (0x08AD2B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 175u, 0x089D5818u>(ctx, &aot_mem) && ctx.pc == 0x08AD2B04u) goto L_08AD2B04;
    return;
L_08AD2B04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD2B3C;
      }
      goto L_08AD2B2C;
    }
L_08AD2B2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD2B60;
      }
      goto L_08AD2B34;
    }
L_08AD2B34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD2B60;
      }
      goto L_08AD2B3C;
    }
L_08AD2B3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD2B60;
      }
      goto L_08AD2B44;
    }
L_08AD2B44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD2B60;
      }
      goto L_08AD2B4C;
    }
L_08AD2B4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(42)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2B5C;
      }
      goto L_08AD2B58;
    }
L_08AD2B58:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    goto L_08AD2B5C;
L_08AD2B5C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD2B60;
L_08AD2B60:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD2B80:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[11]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD2BD8:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5936)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5936), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD2BF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AD2C10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD27A8;
L_08AD2C10:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5936)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5936), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD2C34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD2CA0;
      }
      goto L_08AD2C54;
    }
L_08AD2C54:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6240)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AD2C7C;
      }
      goto L_08AD2C64;
    }
L_08AD2C64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2CA0;
      }
      goto L_08AD2C7C;
    }
L_08AD2C7C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD2CA0;
      }
      goto L_08AD2C88;
    }
L_08AD2C88:
    ctx.gpr[31] = (0x08AD2C90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD2904;
L_08AD2C90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2CA0;
      }
      goto L_08AD2C98;
    }
L_08AD2C98:
    ctx.gpr[31] = (0x08AD2CA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD2ED8;
L_08AD2CA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD2D18;
      }
      goto L_08AD2CAC;
    }
L_08AD2CAC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08AD2CB8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08AD2CB8u) goto L_08AD2CB8;
    return;
L_08AD2CB8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2D14;
      }
      goto L_08AD2CC4;
    }
L_08AD2CC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2D18;
      }
      goto L_08AD2CD4;
    }
L_08AD2CD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (0u | 60000u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(598), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD2D18;
      }
      goto L_08AD2D0C;
    }
L_08AD2D0C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AD2D18;
      }
      goto L_08AD2D14;
    }
L_08AD2D14:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    goto L_08AD2D18;
L_08AD2D18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD2D2C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5940), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5936), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5932), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6240), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD2D50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (ctx.gpr[11] & 65535u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5940)));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[2]) < 195 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[3] = (ctx.gpr[11] | 0u);
      if (branch_taken) {
          goto L_08AD2DE0;
      }
      goto L_08AD2D94;
    }
L_08AD2D94:
    ctx.gpr[11] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[4]);
    ctx.gpr[2] = (2277u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-5696));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    ctx.gpr[31] = (0x08AD2DD4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08AD2B80;
L_08AD2DD4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5940)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5940), ctx.gpr[2]);
    goto L_08AD2DE0;
L_08AD2DE0:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD2DF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD2E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 190u, 0x089D591Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD2E14u) goto L_08AD2E14;
    return;
L_08AD2E14:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    ctx.gpr[4] = (ctx.gpr[2] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2E54;
      }
      goto L_08AD2E28;
    }
L_08AD2E28:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-5932)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-5932), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-5932)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[17] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AD2E5C;
      }
      goto L_08AD2E4C;
    }
L_08AD2E4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2E60;
      }
      goto L_08AD2E54;
    }
L_08AD2E54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2EBC;
      }
      goto L_08AD2E5C;
    }
L_08AD2E5C:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-5932), static_cast<std::uint8_t>(0u));
    goto L_08AD2E60;
L_08AD2E60:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-5932)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5940)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2277u << 16u);
      if (branch_taken) {
          goto L_08AD2EA8;
      }
      goto L_08AD2E74;
    }
L_08AD2E74:
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5696));
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_08AD2E8C;
L_08AD2E8C:
    ctx.gpr[31] = (0x08AD2E94u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08AD2C34;
L_08AD2E94:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5940)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_08AD2E8C;
      }
      goto L_08AD2EA8;
    }
L_08AD2EA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-6240)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD2EBC;
      }
      goto L_08AD2EB4;
    }
L_08AD2EB4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-6240), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AD2EBC;
L_08AD2EBC:
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
L_08AD2ED8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[31]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17444)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD2F3C;
      }
      goto L_08AD2F28;
    }
L_08AD2F28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AD2F44;
      }
      goto L_08AD2F34;
    }
L_08AD2F34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD306C;
      }
      goto L_08AD2F3C;
    }
L_08AD2F3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD34F8;
      }
      goto L_08AD2F44;
    }
L_08AD2F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AD2F98;
      }
      goto L_08AD2F54;
    }
L_08AD2F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2F98;
      }
      goto L_08AD2F8C;
    }
L_08AD2F8C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AD2FF0;
      }
      goto L_08AD2F98;
    }
L_08AD2F98:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x08AD2FA4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08AD2FA4u) goto L_08AD2FA4;
    return;
L_08AD2FA4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD2FBCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 391u, 0x088724E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD2FBCu) goto L_08AD2FBC;
    return;
L_08AD2FBC:
    ctx.gpr[31] = (0x08AD2FC4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 322u, 0x089EDF3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD2FC4u) goto L_08AD2FC4;
    return;
L_08AD2FC4:
    ctx.gpr[31] = (0x08AD2FCCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 247u, 0x089EDA1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD2FCCu) goto L_08AD2FCC;
    return;
L_08AD2FCC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD2FE0;
      }
      goto L_08AD2FD8;
    }
L_08AD2FD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD34F8;
      }
      goto L_08AD2FE0;
    }
L_08AD2FE0:
    ctx.gpr[4] = (0u - ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[16]));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[16]));
    goto L_08AD2FF0;
L_08AD2FF0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD2FFCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08AD27B8;
L_08AD2FFC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3058;
      }
      goto L_08AD3004;
    }
L_08AD3004:
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3050;
      }
      goto L_08AD3034;
    }
L_08AD3034:
    ctx.gpr[31] = (0x08AD303Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 112u, 0x08A28DACu>(ctx, &aot_mem) && ctx.pc == 0x08AD303Cu) goto L_08AD303C;
    return;
L_08AD303C:
    ctx.gpr[4] = (49864u << 16u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AD30A8;
      }
      goto L_08AD3048;
    }
L_08AD3048:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08AD313C;
      }
      goto L_08AD3050;
    }
L_08AD3050:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD34F8;
      }
      goto L_08AD3058;
    }
L_08AD3058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD34F8;
      }
      goto L_08AD306C;
    }
L_08AD306C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AD3078u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AD27B8;
L_08AD3078:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3094;
      }
      goto L_08AD3080;
    }
L_08AD3080:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AD308Cu);
    ctx.gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AD308Cu) goto L_08AD308C;
    return;
L_08AD308C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AD3004;
      }
      goto L_08AD3094;
    }
L_08AD3094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD34F8;
      }
      goto L_08AD30A8;
    }
L_08AD30A8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AD30B4u);
    ctx.gpr[4] = (0u | 1424u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x08AD30B4u) goto L_08AD30B4;
    return;
L_08AD30B4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29460)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29464)));
      if (branch_taken) {
          goto L_08AD3100;
      }
      goto L_08AD30EC;
    }
L_08AD30EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD30FCu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 418u, 0x08A4DFA8u>(ctx, &aot_mem) && ctx.pc == 0x08AD30FCu) goto L_08AD30FC;
    return;
L_08AD30FC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AD3100;
L_08AD3100:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AD312C;
      }
      goto L_08AD311C;
    }
L_08AD311C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AD3128u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08AD3128u) goto L_08AD3128;
    return;
L_08AD3128:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD312C;
L_08AD312C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(598), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AD3318;
      }
      goto L_08AD313C;
    }
L_08AD313C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD31C0;
      }
      goto L_08AD3150;
    }
L_08AD3150:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08AD31A8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD31A8u) goto L_08AD31A8;
    return;
L_08AD31A8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD31D8;
      }
      goto L_08AD31B8;
    }
L_08AD31B8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_08AD31D8;
      }
      goto L_08AD31C0;
    }
L_08AD31C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08AD31D4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2F78u>(ctx, &aot_mem) && ctx.pc == 0x08AD31D4u) goto L_08AD31D4;
    return;
L_08AD31D4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD31D8;
L_08AD31D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD32D8;
      }
      goto L_08AD31E4;
    }
L_08AD31E4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (16457u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17204u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29460)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29464)));
      if (branch_taken) {
          goto L_08AD323C;
      }
      goto L_08AD3228;
    }
L_08AD3228:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD323C;
L_08AD323C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD328C;
      }
      goto L_08AD324C;
    }
L_08AD324C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AD3258u);
    ctx.gpr[4] = (0u | 1472u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x08AD3258u) goto L_08AD3258;
    return;
L_08AD3258:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AD3274;
      }
      goto L_08AD3264;
    }
L_08AD3264:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD3270u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 577u, 0x08A379F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD3270u) goto L_08AD3270;
    return;
L_08AD3270:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AD3274;
L_08AD3274:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AD32BC;
      }
      goto L_08AD328C;
    }
L_08AD328C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AD3298u);
    ctx.gpr[4] = (0u | 1760u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x08AD3298u) goto L_08AD3298;
    return;
L_08AD3298:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AD32B4;
      }
      goto L_08AD32A4;
    }
L_08AD32A4:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD32B0u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 357u, 0x0880E120u>(ctx, &aot_mem) && ctx.pc == 0x08AD32B0u) goto L_08AD32B0;
    return;
L_08AD32B0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AD32B4;
L_08AD32B4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    goto L_08AD32BC;
L_08AD32BC:
    ctx.gpr[31] = (0x08AD32C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FD14u>(ctx, &aot_mem) && ctx.pc == 0x08AD32C4u) goto L_08AD32C4;
    return;
L_08AD32C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AD3318;
      }
      goto L_08AD32D8;
    }
L_08AD32D8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11648));
    ctx.gpr[31] = (0x08AD32E8u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08AD32E8u) goto L_08AD32E8;
    return;
L_08AD32E8:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD32F8u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08AD32F8u) goto L_08AD32F8;
    return;
L_08AD32F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AD3310u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD3310u) goto L_08AD3310;
    return;
L_08AD3310:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD34F8;
      }
      goto L_08AD3318;
    }
L_08AD3318:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AD3344u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FD14u>(ctx, &aot_mem) && ctx.pc == 0x08AD3344u) goto L_08AD3344;
    return;
L_08AD3344:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[20] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[24];
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD3380u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x08AD3380u) goto L_08AD3380;
    return;
L_08AD3380:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[31] = (0x08AD3394u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08AD3394u) goto L_08AD3394;
    return;
L_08AD3394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(660), ctx.gpr[23]);
    ctx.gpr[31] = (0x08AD33B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD33B0u) goto L_08AD33B0;
    return;
L_08AD33B0:
    ctx.gpr[31] = (0x08AD33B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08AD33B8u) goto L_08AD33B8;
    return;
L_08AD33B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AD33CCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08AD33CCu) goto L_08AD33CC;
    return;
L_08AD33CC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD33F8;
      }
      goto L_08AD33F0;
    }
L_08AD33F0:
    ctx.gpr[4] = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(500), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AD33F8;
L_08AD33F8:
    ctx.gpr[31] = (0x08AD3400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08AD3400u) goto L_08AD3400;
    return;
L_08AD3400:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AD3414u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08AD3414u) goto L_08AD3414;
    return;
L_08AD3414:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(26)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3440;
      }
      goto L_08AD3438;
    }
L_08AD3438:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    goto L_08AD3440;
L_08AD3440:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08AD346C;
      }
      goto L_08AD344C;
    }
L_08AD344C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(22))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08AD346C;
      }
      goto L_08AD3458;
    }
L_08AD3458:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(496), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(22))))));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(497), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AD3494;
      }
      goto L_08AD346C;
    }
L_08AD346C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3494;
      }
      goto L_08AD347C;
    }
L_08AD347C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(497)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AD3494;
L_08AD3494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08AD34A0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 313u, 0x08925FB4u>(ctx, &aot_mem) && ctx.pc == 0x08AD34A0u) goto L_08AD34A0;
    return;
L_08AD34A0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x08AD34B0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 530u, 0x08AFE33Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD34B0u) goto L_08AD34B0;
    return;
L_08AD34B0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD34D0;
      }
      goto L_08AD34C4;
    }
L_08AD34C4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AD34D0;
L_08AD34D0:
    ctx.gpr[31] = (0x08AD34D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AD27A8;
L_08AD34D8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD34F8;
      }
      goto L_08AD34E8;
    }
L_08AD34E8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5936)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5936), ctx.gpr[5]);
    goto L_08AD34F8;
L_08AD34F8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3538:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29500)));
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29496), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29492), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29484), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29480), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29476)));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD35CC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD35D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD35F0u);
    ctx.gpr[4] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD35F0u) goto L_08AD35F0;
    return;
L_08AD35F0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13772));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD3664u);
    ctx.gpr[5] = (0u | 3u);
    goto L_08AD376C;
L_08AD3664:
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
L_08AD367C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[16])) && ctx.fpr[12] == ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD36E8;
      }
      goto L_08AD36C8;
    }
L_08AD36C8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD36E8;
      }
      goto L_08AD36DC;
    }
L_08AD36DC:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AD36EC;
      }
      goto L_08AD36E8;
    }
L_08AD36E8:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    goto L_08AD36EC;
L_08AD36EC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD36F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD3710u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AD3764;
L_08AD3710:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08AD3724;
      }
      goto L_08AD371C;
    }
L_08AD371C:
    ctx.gpr[31] = (0x08AD3724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x08A5D100u>(ctx, &aot_mem) && ctx.pc == 0x08AD3724u) goto L_08AD3724;
    return;
L_08AD3724:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD373C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD3750u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 182u, 0x08A5D49Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD3750u) goto L_08AD3750;
    return;
L_08AD3750:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3764:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD376C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3778:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3780:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD378C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AD37C4;
      }
      goto L_08AD37A8;
    }
L_08AD37A8:
    ctx.gpr[31] = (0x08AD37B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AD39F4;
L_08AD37B0:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD37C4;
      }
      goto L_08AD37BC;
    }
L_08AD37BC:
    ctx.gpr[31] = (0x08AD37C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08AD37C4u) goto L_08AD37C4;
    return;
L_08AD37C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD37D8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD37E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5920), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5916), 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7960));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD3808u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 608u, 0x088735E8u>(ctx, &aot_mem) && ctx.pc == 0x08AD3808u) goto L_08AD3808;
    return;
L_08AD3808:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[0];
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[9] = (18303u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[9] = (ctx.gpr[9] | 64000u);
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[8] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-5924), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-5928), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (15112u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[7] = (15216u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 34953u);
    ctx.gpr[7] = (ctx.gpr[7] | 61681u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[11] = (2230u << 16u);
    ctx.gpr[2] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29420), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29416), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD388C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29420), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29416), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD38A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5920)));
    ctx.gpr[10] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(20144));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD38DCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[10]);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 46u, 0x08AD46CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD38DCu) goto L_08AD38DC;
    return;
L_08AD38DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5920)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5916)));
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-29008));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[4] & 65535u);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5916)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5920)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5916), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08AD3940u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5920), ctx.gpr[4]);
    goto L_08AD3960;
L_08AD3940:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3950;
      }
      goto L_08AD3948;
    }
L_08AD3948:
    ctx.gpr[31] = (0x08AD3950u);
    // nop
    goto L_08AD3988;
L_08AD3950:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3960:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5920)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 381 ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5916)));
    ctx.gpr[2] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1019 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3988:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5920)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD39E0;
      }
      goto L_08AD39A8;
    }
L_08AD39A8:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x08AD39B4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD39B4u) goto L_08AD39B4;
    return;
L_08AD39B4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5920)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5916)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20144));
    ctx.gpr[31] = (0x08AD39D8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-29008));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 23u, 0x0886824Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD39D8u) goto L_08AD39D8;
    return;
L_08AD39D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5920), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5916), 0u);
    goto L_08AD39E0;
L_08AD39E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD39F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3A1C;
      }
      goto L_08AD3A10;
    }
L_08AD3A10:
    ctx.gpr[31] = (0x08AD3A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 115u, 0x08A0D1E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD3A18u) goto L_08AD3A18;
    return;
L_08AD3A18:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08AD3A1C;
L_08AD3A1C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3A2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD3A48u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08AD39F4;
L_08AD3A48:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3A60;
      }
      goto L_08AD3A50;
    }
L_08AD3A50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD3A5Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 109u, 0x08A0D19Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD3A5Cu) goto L_08AD3A5C;
    return;
L_08AD3A5C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AD3A60;
L_08AD3A60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3A74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD3AA8;
      }
      goto L_08AD3A8C;
    }
L_08AD3A8C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3AA8;
      }
      goto L_08AD3A94;
    }
L_08AD3A94:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AD3AA4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 109u, 0x08A0D19Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD3AA4u) goto L_08AD3AA4;
    return;
L_08AD3AA4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AD3AA8;
L_08AD3AA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3AB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD3AE8;
      }
      goto L_08AD3AD0;
    }
L_08AD3AD0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AD3AE0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 116u, 0x08A0D1E8u>(ctx, &aot_mem) && ctx.pc == 0x08AD3AE0u) goto L_08AD3AE0;
    return;
L_08AD3AE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3AEC;
      }
      goto L_08AD3AE8;
    }
L_08AD3AE8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD3AEC;
L_08AD3AEC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3AF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (0u | 6u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD3B3Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD3B3Cu) goto L_08AD3B3C;
    return;
L_08AD3B3C:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AD3B48u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD3B48u) goto L_08AD3B48;
    return;
L_08AD3B48:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[14] = ctx.fpr[22] + ctx.fpr[26];
    ctx.fpr[15] = ctx.fpr[20] + ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD3B60u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08AD3B60u) goto L_08AD3B60;
    return;
L_08AD3B60:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD3B7Cu);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 41u, 0x08AD422Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD3B7Cu) goto L_08AD3B7C;
    return;
L_08AD3B7C:
    ctx.gpr[31] = (0x08AD3B84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AD3EA8;
L_08AD3B84:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AD3B98u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15520));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868084u>(ctx, &aot_mem) && ctx.pc == 0x08AD3B98u) goto L_08AD3B98;
    return;
L_08AD3B98:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08AD3BA4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD3BA4u) goto L_08AD3BA4;
    return;
L_08AD3BA4:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AD3BB0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD3BB0u) goto L_08AD3BB0;
    return;
L_08AD3BB0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3BD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD3BFCu);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 41u, 0x08AD422Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD3BFCu) goto L_08AD3BFC;
    return;
L_08AD3BFC:
    ctx.gpr[31] = (0x08AD3C04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD3EA8;
L_08AD3C04:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AD3C18u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15520));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868084u>(ctx, &aot_mem) && ctx.pc == 0x08AD3C18u) goto L_08AD3C18;
    return;
L_08AD3C18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3C28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD3C54u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 41u, 0x08AD422Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD3C54u) goto L_08AD3C54;
    return;
L_08AD3C54:
    ctx.gpr[31] = (0x08AD3C5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD3EA8;
L_08AD3C5C:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AD3C70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15520));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868084u>(ctx, &aot_mem) && ctx.pc == 0x08AD3C70u) goto L_08AD3C70;
    return;
L_08AD3C70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3C80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29420)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29416)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.gpr[31] = (0x08AD3CD0u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 44u, 0x08AD43BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD3CD0u) goto L_08AD3CD0;
    return;
L_08AD3CD0:
    ctx.gpr[31] = (0x08AD3CD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD3EA8;
L_08AD3CD8:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AD3CECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15520));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868084u>(ctx, &aot_mem) && ctx.pc == 0x08AD3CECu) goto L_08AD3CEC;
    return;
L_08AD3CEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3CFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD3D20u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 45u, 0x08AD44ECu>(ctx, &aot_mem) && ctx.pc == 0x08AD3D20u) goto L_08AD3D20;
    return;
L_08AD3D20:
    ctx.gpr[31] = (0x08AD3D28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD3EA8;
L_08AD3D28:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AD3D3Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15520));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868084u>(ctx, &aot_mem) && ctx.pc == 0x08AD3D3Cu) goto L_08AD3D3C;
    return;
L_08AD3D3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3D4C:
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[10] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-5924)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (16256u << 16u);
      if (branch_taken) {
          goto L_08AD3E20;
      }
      goto L_08AD3D64;
    }
L_08AD3D64:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[8] = (2277u << 16u);
    ctx.gpr[11] = (18176u << 16u);
    ctx.gpr[2] = (16128u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-15520));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AD3D94;
L_08AD3D94:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AD3D94;
      }
      goto L_08AD3E20;
    }
L_08AD3E20:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3E28:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-5924)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3EA0;
      }
      goto L_08AD3E40;
    }
L_08AD3E40:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-15520));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AD3E58;
L_08AD3E58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AD3E58;
      }
      goto L_08AD3EA0;
    }
L_08AD3EA0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3EA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3ED0;
      }
      goto L_08AD3EBC;
    }
L_08AD3EBC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08AD3EC8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD3EC8u) goto L_08AD3EC8;
    return;
L_08AD3EC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3EDC;
      }
      goto L_08AD3ED0;
    }
L_08AD3ED0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AD3EDCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD3EDCu) goto L_08AD3EDC;
    return;
L_08AD3EDC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3EE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[9] = (ctx.gpr[6] & 255u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD3F0Cu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 41u, 0x08AD422Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD3F0Cu) goto L_08AD3F0C;
    return;
L_08AD3F0C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08AD3F18u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD3F18u) goto L_08AD3F18;
    return;
L_08AD3F18:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08AD3F24u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD3F24u) goto L_08AD3F24;
    return;
L_08AD3F24:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08AD3F30u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD3F30u) goto L_08AD3F30;
    return;
L_08AD3F30:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AD3F3Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD3F3Cu) goto L_08AD3F3C;
    return;
L_08AD3F3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD3F60;
      }
      goto L_08AD3F4C;
    }
L_08AD3F4C:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08AD3F58u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD3F58u) goto L_08AD3F58;
    return;
L_08AD3F58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3F6C;
      }
      goto L_08AD3F60;
    }
L_08AD3F60:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08AD3F6Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD3F6Cu) goto L_08AD3F6C;
    return;
L_08AD3F6C:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AD3F80u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15520));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868084u>(ctx, &aot_mem) && ctx.pc == 0x08AD3F80u) goto L_08AD3F80;
    return;
L_08AD3F80:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08AD3F8Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD3F8Cu) goto L_08AD3F8C;
    return;
L_08AD3F8C:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AD3F98u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD3F98u) goto L_08AD3F98;
    return;
L_08AD3F98:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08AD3FA4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD3FA4u) goto L_08AD3FA4;
    return;
L_08AD3FA4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3FB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29420)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29416)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.pc = 0x08AD4000u; return;
}

void recomp_unit_0179(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0179_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_179(Runtime &runtime) {
    runtime.register_generated_unit(179u, 0x08AD0000u, 16384u, &recomp_unit_0179, &recomp_unit_0179_entry);
    runtime.register_function(0x08AD0000u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0010u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD001Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD002Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0034u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD003Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0040u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0054u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD007Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0094u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0098u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD009Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD00A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD00ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD00C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0118u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD012Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0130u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0144u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD015Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0168u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0170u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD017Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD018Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD01B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD01CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD01D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD01F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0210u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0218u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0220u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0228u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD023Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD024Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0268u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0280u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0298u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD02B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD02C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD02E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD02F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0314u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0324u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0340u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0360u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0368u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0370u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0380u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0398u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD03B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD03D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD03DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD03F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0404u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0420u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0454u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0460u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD048Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0494u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD04A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD04B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD04BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD04CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD04D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD04E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD04E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD04F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD04F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0504u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD050Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0514u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0528u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0544u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0690u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD06BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD06F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD071Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD072Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0740u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD074Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0758u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD076Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0778u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0784u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD078Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD07A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD07B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD07C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD07CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD07E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD07E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD07F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD07FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0810u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0818u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0820u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0830u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0834u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD083Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0844u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD085Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0874u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0890u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD08ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD08C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD08D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD08E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0920u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0928u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0934u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0940u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0950u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0960u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0964u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD096Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0974u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0980u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0988u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD09B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD09C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD09CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD09DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD09ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD09FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A70u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A80u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0AB8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0AF0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B00u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B08u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B54u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B64u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B78u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B80u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B88u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BA8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BCCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BD8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BE4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BF0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BF4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BFCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C04u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C10u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C38u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C54u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C68u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C84u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C9Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CA4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CB4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CBCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CC4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CCCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CD4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CDCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CE4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CF4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CFCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D04u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D20u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D38u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D4Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D70u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DA0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DB8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DC0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DC8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DF8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E00u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E10u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E30u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E40u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E48u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E50u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E58u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E70u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E88u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E98u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0EA0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0EA8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0EB4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0EBCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0ED0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0ED8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0EE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0EE8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0EF0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0EFCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F08u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F30u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F4Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F74u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F7Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F8Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FA0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FA8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FB0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FB8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FC0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FC8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FD4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FDCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FE4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FF0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1014u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD101Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1024u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD102Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1034u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD103Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1044u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD104Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1058u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1060u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1068u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1074u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1090u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD10A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD10B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD10BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD10C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD10D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD10E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD10ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD10F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD10F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1100u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1108u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1110u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1118u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1120u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1128u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1130u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1138u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1140u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1148u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1150u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1158u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1160u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1168u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1170u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD117Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1184u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD118Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1194u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD119Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1230u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1258u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1298u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD12C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD12C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD12DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD12ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD12F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD12FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1308u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1314u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1330u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1334u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1338u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1340u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1348u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1354u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD135Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1378u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1390u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD139Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD13A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD13ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD13B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD13D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD13E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD13E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD13ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD13F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD13FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1404u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1414u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1420u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1428u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD142Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1438u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1444u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD144Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1454u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD145Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1468u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1474u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD147Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1484u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD148Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD149Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD14A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD14B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD14B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD14C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD14D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD14DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD14E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD14F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD14F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD14FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1508u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1518u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1520u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1530u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD153Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1550u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1558u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1560u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1568u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1598u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1600u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1610u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1618u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1634u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD164Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1654u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD165Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1664u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD166Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1680u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1688u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1690u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1698u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1700u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1708u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1714u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD171Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1724u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1730u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1738u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1740u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1748u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1754u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD175Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD176Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1778u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD17A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD17A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD17B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD17B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD17C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD17C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD17D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD17D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD17E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD17E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD17F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1804u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD180Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1814u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD181Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1834u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD183Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1850u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1858u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1864u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD186Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1874u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD187Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1884u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD188Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1898u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD18B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD18B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD18C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD18CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD18D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD18E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD18F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1900u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1908u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1910u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1924u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD192Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1934u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD193Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1944u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD194Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1954u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD195Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1964u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD196Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1974u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD197Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1994u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD19ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD19B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD19BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD19C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD19D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD19D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD19E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD19FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A08u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A10u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A18u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A20u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A28u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A4Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A64u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A6Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A78u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A80u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A8Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A98u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1AA8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1AB4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1AE8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B48u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B50u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B58u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B68u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B70u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B78u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B98u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1BACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1BB4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1BCCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1BDCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1BE4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1BE8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1BF0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1BFCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C08u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C40u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C48u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C50u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C64u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C98u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1CA4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1CC8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1CE4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1CE8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1CECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1CF4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D00u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D18u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D30u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D40u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D4Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D64u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D6Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D78u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D84u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1DA8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1DB0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1DB8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1DC4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1DCCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1DD8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1DE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1DE4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1DF4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E04u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E18u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E30u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E38u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E4Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E68u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E70u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E78u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E84u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E98u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1EA0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1EACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1EB4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1EB8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1ED0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1ED8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1EECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F48u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F88u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F98u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1FA4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1FACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1FC0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1FE8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2008u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD205Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2068u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD207Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2084u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD208Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2098u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2100u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2108u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2114u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD211Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2124u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2130u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD213Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2158u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2160u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD216Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2178u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2184u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2198u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD21A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD21ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD21B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD21C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD21D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD21E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD21ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD21F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD220Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2214u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2224u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2230u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD223Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2250u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2258u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2264u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD226Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2278u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2280u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD228Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2294u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD22A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD22A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD22B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD22BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD22C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD22D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD22DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD22E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD22F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD22FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2304u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2310u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2318u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD232Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2368u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2374u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2380u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD238Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD239Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD23A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD23B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD23C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD23D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD23E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD23E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD23F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD23F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2400u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2408u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2410u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2420u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD242Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2438u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2440u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD244Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2458u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2460u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2468u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2474u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD247Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2484u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD248Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2494u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD249Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD24A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD24ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD24B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD24BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD24C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD24CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD24D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD24E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD24F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2500u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2508u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2514u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2524u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD252Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD253Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2544u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD254Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2554u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD255Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2564u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2570u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2578u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2584u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD258Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2594u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD25A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD25A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD25B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD25B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD25C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD25C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD25D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD25DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD25E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD25F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD25FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2608u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2610u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2618u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2624u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD262Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2634u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD263Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2644u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2650u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD265Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2664u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD266Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2674u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD267Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2684u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD26B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD27A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD27B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2838u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD284Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2868u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD28A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD28CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD28D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD28E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD28ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2904u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2930u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2968u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2980u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2994u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD29A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD29C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A58u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A64u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A8Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2AA4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2AB0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2AE4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2AECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2AF4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2AFCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B04u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B4Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B58u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B80u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2BD8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2BF0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2C10u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2C34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2C54u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2C64u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2C7Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2C88u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2C90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2C98u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2CA0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2CACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2CB8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2CC4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2CD4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D18u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D50u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2DD4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2DE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2DF4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E28u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E4Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E54u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E74u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E8Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2EA8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2EB4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2EBCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2ED8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F28u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F54u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F8Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F98u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2FA4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2FBCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2FC4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2FCCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2FD8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2FE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2FF0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2FFCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3004u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3034u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD303Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3048u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3050u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3058u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD306Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3078u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3080u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD308Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3094u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD30A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD30B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD30ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD30FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3100u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD311Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3128u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD312Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD313Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3150u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD31A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD31B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD31C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD31D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD31D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD31E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3228u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD323Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD324Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3258u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3264u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3270u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3274u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD328Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3298u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD32A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD32B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD32B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD32BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD32C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD32D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD32E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD32F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3310u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3318u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3344u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3380u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3394u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD33B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD33B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD33CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD33F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD33F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3400u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3414u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3438u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3440u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD344Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3458u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD346Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD347Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3494u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD34A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD34B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD34C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD34D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD34D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD34E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD34F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3538u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD35CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD35D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD35F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3664u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD367Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD36C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD36DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD36E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD36ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD36F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3710u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD371Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3724u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD373Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3750u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3764u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD376Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3778u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3780u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD378Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD37A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD37B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD37BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD37C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD37D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD37E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3808u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD388Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD38A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD38DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3940u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3948u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3950u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3960u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3988u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD39A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD39B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD39D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD39E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD39F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A10u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A18u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A48u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A50u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A74u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A8Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3AA4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3AA8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3AB8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3AD0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3AE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3AE8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3AECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3AF8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B48u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B7Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B84u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B98u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3BA4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3BB0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3BD4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3BFCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C04u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C18u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C28u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C54u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C70u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C80u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3CD0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3CD8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3CECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3CFCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D20u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D28u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D4Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D64u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E20u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E28u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E40u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E58u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3EA0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3EA8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3EBCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3EC8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3ED0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3EDCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3EE8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F18u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F30u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F4Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F58u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F6Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F80u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F8Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F98u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3FA4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3FB4u, &recomp_unit_0179, "recomp_unit_0179");
}
} // namespace psprecomp
