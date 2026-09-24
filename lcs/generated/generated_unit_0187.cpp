#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0187[4091] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 8,
    0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0, 13, 0, 0, 14, 0, 0, 0, 15, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0,
    0, 18, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0,
    27, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 34, 0, 0, 0, 35, 0, 36, 0, 0, 37, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41,
    0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0,
    48, 49, 0, 50, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 57, 0, 0, 58,
    0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 64, 0, 0,
    0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 69, 0, 0, 70, 0, 71, 0, 0, 72, 0, 73,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 78, 79, 0, 0, 80, 0, 81, 82, 0, 0, 83,
    0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 0,
    0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 98, 99, 0, 100, 0,
    0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115,
    0, 116, 0, 117, 0, 0, 118, 0, 0, 0, 119, 0, 120, 0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0,
    0, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 134, 0,
    135, 0, 0, 0, 0, 0, 136, 0, 0, 137, 138, 0, 0, 0, 0, 0, 139, 0, 140, 0, 141, 142, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0,
    145, 0, 146, 0, 147, 148, 0, 0, 149, 0, 0, 150, 0, 151, 0, 0, 152, 0, 153, 154, 155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0,
    158, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 163, 0, 0, 0, 0, 0, 164, 165, 0, 0,
    166, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 169, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174,
    0, 175, 0, 176, 0, 0, 177, 178, 179, 0, 180, 0, 181, 0, 182, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 190, 191, 192, 0, 0, 0, 193, 0, 194, 0, 0, 0, 195, 0, 196,
    0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0,
    202, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 218,
    0, 0, 219, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0,
    0, 0, 225, 0, 0, 226, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 230, 0, 0, 0, 231, 0, 0, 232, 0, 233, 0, 234, 0, 0, 0,
    235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 241, 0, 242,
    0, 0, 0, 243, 0, 244, 0, 0, 0, 245, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 253, 0, 0, 254, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 257, 0, 0, 258, 0, 259,
    0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 265, 0, 266, 0,
    267, 0, 268, 0, 0, 0, 269, 0, 270, 0, 0, 0, 271, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 279, 0, 0, 280, 0, 0, 0, 281, 0, 0, 282, 0, 283, 0, 0,
    0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 289, 0, 290, 0, 0, 291, 0,
    0, 0, 292, 0, 0, 293, 0, 0, 294, 0, 0, 0, 295, 0, 296, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 299,
    0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 302, 0, 303, 0, 304, 0, 0, 0, 305, 0, 306, 0, 0, 0, 307, 0, 308, 0, 0,
    0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 0, 316, 0, 0,
    0, 317, 318, 0, 0, 319, 0, 0, 0, 320, 321, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 331, 0, 0, 332, 0, 333, 0, 334, 0, 335, 0, 336, 337, 0, 338, 0, 0,
    0, 339, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 345, 0, 346, 0, 0, 0, 347,
    0, 0, 0, 348, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 352, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 357, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 368,
    0, 0, 369, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0,
    0, 0, 376, 0, 377, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 381, 0, 382, 0, 0, 383, 0, 0, 0, 384, 385, 0, 0, 0, 0,
    0, 0, 386, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0, 0, 0, 394, 0,
    0, 395, 0, 396, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 403, 0, 0, 0, 404, 0, 405, 0, 0, 406, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 410,
    0, 0, 0, 411, 0, 0, 0, 412, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0,
    416, 0, 417, 0, 418, 0, 0, 419, 0, 420, 0, 0, 421, 0, 422, 0, 0, 0, 0, 423, 424, 425, 0, 0, 426, 0, 0, 427, 0, 428, 0, 0,
    0, 429, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 432, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 436, 0, 437,
    0, 438, 0, 0, 439, 0, 440, 0, 0, 441, 0, 442, 0, 0, 0, 443, 444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0,
    0, 0, 0, 0, 447, 0, 448, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 452, 0, 0, 453, 0, 454, 0, 0, 0, 0, 455,
    0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 458, 0, 459, 0, 0, 460, 0, 461, 0, 0, 462, 0, 463, 0, 0, 0, 464, 465, 0, 0,
    0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 469, 0, 0, 470, 0, 471, 0, 0, 472, 0, 473, 0, 0, 0, 474, 475, 476, 0, 0, 0,
    0, 0, 477, 0, 478, 0, 479, 480, 0, 0, 481, 0, 482, 0, 0, 0, 0, 0, 483, 0, 484, 0, 485, 486, 0, 0, 487, 0, 0, 0, 0, 0,
    0, 488, 0, 489, 0, 490, 0, 491, 492, 493, 0, 0, 0, 0, 0, 494, 0, 495, 0, 0, 0, 496, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 500, 501, 0, 0, 0, 0, 0, 502, 503, 0, 0, 504, 0, 0, 505, 0, 0, 0, 0,
    506, 0, 0, 0, 0, 0, 0, 507, 508, 0, 0, 0, 0, 0, 509, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 512,
    0, 513, 0, 514, 0, 0, 515, 516, 517, 0, 518, 0, 0, 519, 0, 0, 520, 0, 521, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 0, 0,
    0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 526, 0, 527, 0, 528, 529, 530, 0, 0, 0, 531, 0, 532, 0, 0, 0, 533,
    0, 534, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 539,
    0, 0, 540, 0, 541, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 545, 0, 546, 0, 0, 0, 547, 0, 0, 0, 548, 0, 0,
    0, 0, 0, 0, 0, 0, 549, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 551, 0, 552, 0, 553, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0,
    556, 0, 0, 557, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 562, 0, 0, 0, 0, 0,
    0, 0, 563, 0, 0, 564, 0, 565, 0, 0, 0, 566, 0, 0, 0, 567, 0, 568, 0, 0, 0, 569, 0, 0, 0, 570, 0, 571, 0, 572, 0, 0,
    0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 577, 0, 578, 0, 579, 0,
    580, 0, 0, 0, 581, 0, 582, 0, 0, 0, 583, 0, 584, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0,
    588, 0, 0, 0, 0, 0, 0, 0, 589, 0, 590, 0, 591, 0, 0, 592, 0, 0, 0, 593, 0, 594, 0, 0, 0, 0, 595, 0, 596, 0, 597, 0,
    0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 602, 0, 603, 0, 604,
    0, 605, 0, 0, 0, 606, 0, 607, 0, 0, 0, 608, 0, 609, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612,
    0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 615, 0, 616, 0, 0, 617, 0, 0, 0, 618, 0, 0, 619, 0, 620, 0, 0, 0, 621,
    0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0, 0, 0, 625, 0, 626, 0, 627, 0, 0, 628, 0, 0, 0,
    629, 0, 0, 630, 0, 0, 0, 631, 0, 0, 0, 0, 632, 0, 633, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 636,
    0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 638, 0, 639, 0, 640, 0, 641, 0, 0, 0, 642, 0, 643, 0, 0, 0, 644, 0, 645, 0, 0,
    0, 646, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0, 0, 0, 0, 650, 0, 651, 0, 652, 0, 0, 653, 0, 0,
    0, 654, 655, 0, 0, 656, 0, 0, 0, 657, 658, 0, 0, 659, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661,
    0, 0, 0, 662, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 665, 0, 0, 0, 0, 0, 0, 666, 0,
    0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 668, 669, 0, 670, 0, 0, 671, 0, 0, 0, 672, 0, 0, 0, 0, 0, 673, 0, 674, 0, 0, 675,
    0, 0, 0, 0, 676, 0, 0, 677, 0, 0, 678, 0, 0, 0, 0, 0, 679, 680, 0, 681, 682, 0, 0, 0, 683, 0, 0, 684, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 686, 0, 687, 0, 688, 0, 0, 689, 0, 690, 0, 691, 0, 692, 0, 0, 693,
    0, 694, 0, 0, 695, 0, 0, 696, 0, 697, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 700, 0, 0, 0, 0, 701,
    0, 702, 0, 0, 0, 703, 0, 704, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 707, 0, 708, 0, 0, 0, 709, 0, 710, 0, 0, 711, 0, 0, 712, 0, 0, 0, 0, 0, 713, 0, 714, 715, 0, 0,
    0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 720, 0, 0, 0,
    0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 722, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 725, 0, 0, 0, 0,
    0, 0, 726, 0, 0, 727, 0, 0, 0, 0, 728, 0, 729, 0, 0, 730, 0, 731, 0, 0, 732, 733, 0, 734, 0, 0, 0, 735, 0, 736, 0, 0,
    0, 737, 0, 0, 738, 0, 0, 0, 739, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 741, 0, 742, 0, 0, 743, 0, 744, 0, 0, 0, 745,
    0, 746, 0, 747, 0, 748, 0, 749, 0, 750, 0, 751, 0, 752, 0, 0, 0, 753, 0, 0, 0, 0, 0, 754, 0, 755, 0, 0, 0, 756, 0, 0,
    757, 0, 758, 759, 0, 760, 0, 761, 762, 0, 763, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 765, 0, 0, 766, 0, 0, 0, 0, 767, 0, 0,
    768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 770, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 772,
    0, 773, 0, 774, 0, 0, 775, 0, 0, 0, 0, 776, 0, 0, 777, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 780,
    0, 781, 0, 782, 0, 0, 783, 0, 0, 784, 0, 0, 785, 0, 0, 0, 786, 0, 0, 0, 0, 787, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0,
    789, 0, 0, 0, 0, 790, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 792, 0, 793, 0, 794, 0, 0, 0, 0, 0, 0, 795, 0, 796, 0, 0,
    797, 0, 798, 0, 0, 0, 0, 0, 0, 0, 799, 800, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 805, 0, 806, 0, 807, 0, 0, 0, 0,
    808, 0, 0, 0, 0, 809, 0, 0, 810, 0, 811, 0, 812, 0, 813, 814, 0, 0, 815, 0, 816, 817, 0, 0, 0, 0, 0, 0, 0, 0, 818, 0,
    819, 0, 0, 820, 0, 0, 821, 0, 822, 823, 0, 824, 0, 0, 825, 0, 826, 827, 828, 829, 0, 830, 0, 831, 0, 0, 832, 0, 0, 833, 0, 834,
    835, 0, 836, 0, 0, 837, 0, 838, 839, 840, 841, 0, 842, 0, 0, 0, 0, 843, 0, 0, 0, 0, 844, 0, 0, 0, 0, 0, 845, 0, 0, 846,
    0, 847, 0, 0, 0, 0, 0, 0, 0, 848, 0, 0, 0, 849, 0, 0, 0, 0, 0, 0, 0, 0, 850, 0, 0, 0, 0, 0, 851, 0, 0, 852,
    0, 0, 0, 853, 0, 854, 0, 0, 0, 0, 0, 0, 0, 0, 855, 0, 856, 0, 0, 0, 0, 0, 0, 0, 857, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 858, 0, 0, 859, 0, 0, 860, 0, 861, 0, 0, 862, 0, 863, 0, 864, 0, 865, 0, 0, 0, 0, 0, 0, 0, 0, 0, 866, 867, 0,
    0, 0, 0, 0, 868, 869, 0, 870, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 871, 0, 0, 0, 872, 0, 0, 0, 0, 0, 0, 0, 873,
    0, 874, 0, 0, 0, 0, 0, 875, 0, 0, 876, 0, 0, 0, 877, 0, 0, 878, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 879, 0, 0, 0, 0, 0, 880, 0, 0, 0, 0, 0, 881, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 882, 0,
    883, 0, 0, 0, 0, 0, 0, 0, 0, 884, 0, 0, 0, 0, 0, 885, 0, 0, 0, 0, 0, 0, 886, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 887, 0, 0, 0, 888, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 889, 0, 0, 0, 0, 0, 890, 0, 891, 0, 0, 892, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 893, 0, 0, 0, 0, 0, 0, 0,
    894, 0, 895, 0, 896, 0, 897, 0, 0, 0, 0, 0, 0, 0, 898, 0, 0, 0, 0, 0, 0, 0, 899, 0, 0, 0, 0, 900, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 901, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 902, 0, 0, 0, 903, 0, 0, 0, 0, 0, 0, 0,
    904, 0, 0, 0, 0, 0, 905, 0, 0, 0, 0, 906, 0, 0, 907, 0, 0, 0, 0, 908, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 909,
    0, 910, 0, 0, 0, 0, 0, 0, 0, 911, 0, 0, 0, 0, 0, 0, 0, 912, 0, 0, 0, 0, 913, 0, 0, 0, 0, 914, 0, 0, 0, 0,
    915, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 916, 0, 0, 0, 0, 0, 917, 0, 0, 0, 0, 0, 0, 918, 0, 0, 0, 919, 0, 0,
    0, 0, 0, 0, 0, 0, 920, 0, 0, 0, 0, 0, 0, 0, 0, 0, 921, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 922, 0, 0, 0, 0,
    0, 923, 0, 0, 0, 0, 924, 0, 0, 0, 0, 0, 925, 0, 0, 0, 0, 926, 0, 0, 0, 0, 0, 0, 0, 927, 0, 0, 0, 0, 0, 928,
    0, 0, 0, 0, 929, 0, 0, 0, 0, 0, 930, 0, 0, 0, 0, 931, 0, 0, 0, 0, 0, 932, 0, 0, 0, 0, 933, 0, 0, 0, 0, 0,
    934, 0, 0, 0, 0, 0, 0, 0, 0, 935, 0, 0, 0, 0, 0, 0, 936, 0, 0, 0, 0, 937, 0, 0, 0, 0, 0, 0, 938, 0, 0, 0,
    0, 939, 0, 0, 940, 0, 0, 0, 0, 941, 0, 0, 0, 0, 942, 0, 943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 944, 0, 0, 0, 0, 0,
    0, 0, 945, 0, 0, 0, 0, 946, 0, 0, 0, 0, 947, 0, 0, 0, 0, 948, 0, 0, 0, 0, 949, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 950, 0, 0, 0, 0, 0, 951, 0, 0, 0, 0, 952, 0, 0, 953, 0, 0, 0, 0, 954, 0, 955, 0, 0, 0, 0, 0, 0, 0, 956,
    0, 0, 0, 0, 0, 0, 0, 957, 0, 0, 0, 0, 958, 0, 0, 0, 0, 959, 0, 0, 0, 0, 960, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 961, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 962, 0, 0, 0, 0, 0, 963, 0, 0, 0, 0, 0,
    964, 0, 0, 0, 0, 0, 0, 0, 0, 965, 0, 966, 0, 0, 0, 0, 0, 0, 967, 0, 0, 0, 0, 0, 968, 0, 0, 0, 0, 0, 0, 969,
    0, 0, 0, 0, 0, 0, 0, 0, 970, 0, 0, 0, 971, 0, 0, 0, 0, 972, 0, 0, 0, 0, 0, 0, 0, 0, 973, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 974, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 975, 0, 0, 0, 0, 976,
};
void recomp_unit_0187_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AF0000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0187[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AF0000;
    case 2u: goto L_08AF0010;
    case 3u: goto L_08AF0020;
    case 4u: goto L_08AF0030;
    case 5u: goto L_08AF004C;
    case 6u: goto L_08AF005C;
    case 7u: goto L_08AF0074;
    case 8u: goto L_08AF007C;
    case 9u: goto L_08AF0084;
    case 10u: goto L_08AF0094;
    case 11u: goto L_08AF00A4;
    case 12u: goto L_08AF00B0;
    case 13u: goto L_08AF00B8;
    case 14u: goto L_08AF00C4;
    case 15u: goto L_08AF00D4;
    case 16u: goto L_08AF00D8;
    case 17u: goto L_08AF00F4;
    case 18u: goto L_08AF0104;
    case 19u: goto L_08AF010C;
    case 20u: goto L_08AF0124;
    case 21u: goto L_08AF0130;
    case 22u: goto L_08AF013C;
    case 23u: goto L_08AF0148;
    case 24u: goto L_08AF0154;
    case 25u: goto L_08AF016C;
    case 26u: goto L_08AF0178;
    case 27u: goto L_08AF0180;
    case 28u: goto L_08AF0188;
    case 29u: goto L_08AF0198;
    case 30u: goto L_08AF01AC;
    case 31u: goto L_08AF01C8;
    case 32u: goto L_08AF01D0;
    case 33u: goto L_08AF01E0;
    case 34u: goto L_08AF020C;
    case 35u: goto L_08AF021C;
    case 36u: goto L_08AF0224;
    case 37u: goto L_08AF0230;
    case 38u: goto L_08AF0234;
    case 39u: goto L_08AF0260;
    case 40u: goto L_08AF0270;
    case 41u: goto L_08AF027C;
    case 42u: goto L_08AF0288;
    case 43u: goto L_08AF0298;
    case 44u: goto L_08AF02A8;
    case 45u: goto L_08AF02B0;
    case 46u: goto L_08AF02BC;
    case 47u: goto L_08AF02F4;
    case 48u: goto L_08AF0300;
    case 49u: goto L_08AF0304;
    case 50u: goto L_08AF030C;
    case 51u: goto L_08AF0320;
    case 52u: goto L_08AF0328;
    case 53u: goto L_08AF033C;
    case 54u: goto L_08AF0344;
    case 55u: goto L_08AF0360;
    case 56u: goto L_08AF036C;
    case 57u: goto L_08AF0370;
    case 58u: goto L_08AF037C;
    case 59u: goto L_08AF0388;
    case 60u: goto L_08AF0390;
    case 61u: goto L_08AF03B8;
    case 62u: goto L_08AF03E0;
    case 63u: goto L_08AF03F0;
    case 64u: goto L_08AF03F4;
    case 65u: goto L_08AF0418;
    case 66u: goto L_08AF0420;
    case 67u: goto L_08AF0440;
    case 68u: goto L_08AF0448;
    case 69u: goto L_08AF0454;
    case 70u: goto L_08AF0460;
    case 71u: goto L_08AF0468;
    case 72u: goto L_08AF0474;
    case 73u: goto L_08AF047C;
    case 74u: goto L_08AF04A8;
    case 75u: goto L_08AF04B0;
    case 76u: goto L_08AF04B8;
    case 77u: goto L_08AF04CC;
    case 78u: goto L_08AF04D4;
    case 79u: goto L_08AF04D8;
    case 80u: goto L_08AF04E4;
    case 81u: goto L_08AF04EC;
    case 82u: goto L_08AF04F0;
    case 83u: goto L_08AF04FC;
    case 84u: goto L_08AF0504;
    case 85u: goto L_08AF050C;
    case 86u: goto L_08AF0528;
    case 87u: goto L_08AF0534;
    case 88u: goto L_08AF0544;
    case 89u: goto L_08AF0558;
    case 90u: goto L_08AF0564;
    case 91u: goto L_08AF0570;
    case 92u: goto L_08AF0588;
    case 93u: goto L_08AF0594;
    case 94u: goto L_08AF05AC;
    case 95u: goto L_08AF05B4;
    case 96u: goto L_08AF05CC;
    case 97u: goto L_08AF05E0;
    case 98u: goto L_08AF05EC;
    case 99u: goto L_08AF05F0;
    case 100u: goto L_08AF05F8;
    case 101u: goto L_08AF060C;
    case 102u: goto L_08AF0614;
    case 103u: goto L_08AF0628;
    case 104u: goto L_08AF0630;
    case 105u: goto L_08AF0648;
    case 106u: goto L_08AF0654;
    case 107u: goto L_08AF0660;
    case 108u: goto L_08AF068C;
    case 109u: goto L_08AF06B8;
    case 110u: goto L_08AF06C0;
    case 111u: goto L_08AF06CC;
    case 112u: goto L_08AF06D8;
    case 113u: goto L_08AF06E4;
    case 114u: goto L_08AF06F0;
    case 115u: goto L_08AF06FC;
    case 116u: goto L_08AF0704;
    case 117u: goto L_08AF070C;
    case 118u: goto L_08AF0718;
    case 119u: goto L_08AF0728;
    case 120u: goto L_08AF0730;
    case 121u: goto L_08AF0738;
    case 122u: goto L_08AF074C;
    case 123u: goto L_08AF0754;
    case 124u: goto L_08AF0768;
    case 125u: goto L_08AF0770;
    case 126u: goto L_08AF0788;
    case 127u: goto L_08AF0794;
    case 128u: goto L_08AF07A4;
    case 129u: goto L_08AF07B4;
    case 130u: goto L_08AF07C0;
    case 131u: goto L_08AF07C8;
    case 132u: goto L_08AF07DC;
    case 133u: goto L_08AF07E4;
    case 134u: goto L_08AF07F8;
    case 135u: goto L_08AF0800;
    case 136u: goto L_08AF0818;
    case 137u: goto L_08AF0824;
    case 138u: goto L_08AF0828;
    case 139u: goto L_08AF0840;
    case 140u: goto L_08AF0848;
    case 141u: goto L_08AF0850;
    case 142u: goto L_08AF0854;
    case 143u: goto L_08AF0860;
    case 144u: goto L_08AF0868;
    case 145u: goto L_08AF0880;
    case 146u: goto L_08AF0888;
    case 147u: goto L_08AF0890;
    case 148u: goto L_08AF0894;
    case 149u: goto L_08AF08A0;
    case 150u: goto L_08AF08AC;
    case 151u: goto L_08AF08B4;
    case 152u: goto L_08AF08C0;
    case 153u: goto L_08AF08C8;
    case 154u: goto L_08AF08CC;
    case 155u: goto L_08AF08D0;
    case 156u: goto L_08AF08E8;
    case 157u: goto L_08AF08F0;
    case 158u: goto L_08AF0900;
    case 159u: goto L_08AF090C;
    case 160u: goto L_08AF0914;
    case 161u: goto L_08AF0944;
    case 162u: goto L_08AF0954;
    case 163u: goto L_08AF0958;
    case 164u: goto L_08AF0970;
    case 165u: goto L_08AF0974;
    case 166u: goto L_08AF0980;
    case 167u: goto L_08AF098C;
    case 168u: goto L_08AF09A0;
    case 169u: goto L_08AF09AC;
    case 170u: goto L_08AF09B0;
    case 171u: goto L_08AF09B8;
    case 172u: goto L_08AF09C0;
    case 173u: goto L_08AF09E0;
    case 174u: goto L_08AF09FC;
    case 175u: goto L_08AF0A04;
    case 176u: goto L_08AF0A0C;
    case 177u: goto L_08AF0A18;
    case 178u: goto L_08AF0A1C;
    case 179u: goto L_08AF0A20;
    case 180u: goto L_08AF0A28;
    case 181u: goto L_08AF0A30;
    case 182u: goto L_08AF0A38;
    case 183u: goto L_08AF0A40;
    case 184u: goto L_08AF0A50;
    case 185u: goto L_08AF0A60;
    case 186u: goto L_08AF0A84;
    case 187u: goto L_08AF0A94;
    case 188u: goto L_08AF0AB4;
    case 189u: goto L_08AF0ABC;
    case 190u: goto L_08AF0AC4;
    case 191u: goto L_08AF0AC8;
    case 192u: goto L_08AF0ACC;
    case 193u: goto L_08AF0ADC;
    case 194u: goto L_08AF0AE4;
    case 195u: goto L_08AF0AF4;
    case 196u: goto L_08AF0AFC;
    case 197u: goto L_08AF0B0C;
    case 198u: goto L_08AF0B1C;
    case 199u: goto L_08AF0B44;
    case 200u: goto L_08AF0B54;
    case 201u: goto L_08AF0B78;
    case 202u: goto L_08AF0B80;
    case 203u: goto L_08AF0B88;
    case 204u: goto L_08AF0B98;
    case 205u: goto L_08AF0BA8;
    case 206u: goto L_08AF0BB4;
    case 207u: goto L_08AF0BC4;
    case 208u: goto L_08AF0BCC;
    case 209u: goto L_08AF0BDC;
    case 210u: goto L_08AF0BEC;
    case 211u: goto L_08AF0C10;
    case 212u: goto L_08AF0C20;
    case 213u: goto L_08AF0C40;
    case 214u: goto L_08AF0C48;
    case 215u: goto L_08AF0C50;
    case 216u: goto L_08AF0C60;
    case 217u: goto L_08AF0C70;
    case 218u: goto L_08AF0C7C;
    case 219u: goto L_08AF0C88;
    case 220u: goto L_08AF0C94;
    case 221u: goto L_08AF0CA4;
    case 222u: goto L_08AF0CB4;
    case 223u: goto L_08AF0CD8;
    case 224u: goto L_08AF0CE8;
    case 225u: goto L_08AF0D08;
    case 226u: goto L_08AF0D14;
    case 227u: goto L_08AF0D1C;
    case 228u: goto L_08AF0D2C;
    case 229u: goto L_08AF0D3C;
    case 230u: goto L_08AF0D44;
    case 231u: goto L_08AF0D54;
    case 232u: goto L_08AF0D60;
    case 233u: goto L_08AF0D68;
    case 234u: goto L_08AF0D70;
    case 235u: goto L_08AF0D80;
    case 236u: goto L_08AF0D90;
    case 237u: goto L_08AF0DB4;
    case 238u: goto L_08AF0DC4;
    case 239u: goto L_08AF0DE4;
    case 240u: goto L_08AF0DEC;
    case 241u: goto L_08AF0DF4;
    case 242u: goto L_08AF0DFC;
    case 243u: goto L_08AF0E0C;
    case 244u: goto L_08AF0E14;
    case 245u: goto L_08AF0E24;
    case 246u: goto L_08AF0E2C;
    case 247u: goto L_08AF0E3C;
    case 248u: goto L_08AF0E4C;
    case 249u: goto L_08AF0E70;
    case 250u: goto L_08AF0E80;
    case 251u: goto L_08AF0EA0;
    case 252u: goto L_08AF0EA8;
    case 253u: goto L_08AF0EB0;
    case 254u: goto L_08AF0EBC;
    case 255u: goto L_08AF0ECC;
    case 256u: goto L_08AF0ED4;
    case 257u: goto L_08AF0EE8;
    case 258u: goto L_08AF0EF4;
    case 259u: goto L_08AF0EFC;
    case 260u: goto L_08AF0F0C;
    case 261u: goto L_08AF0F1C;
    case 262u: goto L_08AF0F40;
    case 263u: goto L_08AF0F50;
    case 264u: goto L_08AF0F68;
    case 265u: goto L_08AF0F70;
    case 266u: goto L_08AF0F78;
    case 267u: goto L_08AF0F80;
    case 268u: goto L_08AF0F88;
    case 269u: goto L_08AF0F98;
    case 270u: goto L_08AF0FA0;
    case 271u: goto L_08AF0FB0;
    case 272u: goto L_08AF0FB8;
    case 273u: goto L_08AF0FC8;
    case 274u: goto L_08AF0FD8;
    case 275u: goto L_08AF1000;
    case 276u: goto L_08AF1010;
    case 277u: goto L_08AF1034;
    case 278u: goto L_08AF103C;
    case 279u: goto L_08AF1044;
    case 280u: goto L_08AF1050;
    case 281u: goto L_08AF1060;
    case 282u: goto L_08AF106C;
    case 283u: goto L_08AF1074;
    case 284u: goto L_08AF1084;
    case 285u: goto L_08AF1094;
    case 286u: goto L_08AF10B4;
    case 287u: goto L_08AF10C4;
    case 288u: goto L_08AF10DC;
    case 289u: goto L_08AF10E4;
    case 290u: goto L_08AF10EC;
    case 291u: goto L_08AF10F8;
    case 292u: goto L_08AF1108;
    case 293u: goto L_08AF1114;
    case 294u: goto L_08AF1120;
    case 295u: goto L_08AF1130;
    case 296u: goto L_08AF1138;
    case 297u: goto L_08AF1148;
    case 298u: goto L_08AF1158;
    case 299u: goto L_08AF117C;
    case 300u: goto L_08AF118C;
    case 301u: goto L_08AF11AC;
    case 302u: goto L_08AF11B4;
    case 303u: goto L_08AF11BC;
    case 304u: goto L_08AF11C4;
    case 305u: goto L_08AF11D4;
    case 306u: goto L_08AF11DC;
    case 307u: goto L_08AF11EC;
    case 308u: goto L_08AF11F4;
    case 309u: goto L_08AF1204;
    case 310u: goto L_08AF1214;
    case 311u: goto L_08AF1230;
    case 312u: goto L_08AF1240;
    case 313u: goto L_08AF1258;
    case 314u: goto L_08AF1260;
    case 315u: goto L_08AF1268;
    case 316u: goto L_08AF1274;
    case 317u: goto L_08AF1284;
    case 318u: goto L_08AF1288;
    case 319u: goto L_08AF1294;
    case 320u: goto L_08AF12A4;
    case 321u: goto L_08AF12A8;
    case 322u: goto L_08AF12B4;
    case 323u: goto L_08AF12C8;
    case 324u: goto L_08AF12FC;
    case 325u: goto L_08AF134C;
    case 326u: goto L_08AF1354;
    case 327u: goto L_08AF135C;
    case 328u: goto L_08AF1388;
    case 329u: goto L_08AF13AC;
    case 330u: goto L_08AF13B4;
    case 331u: goto L_08AF13BC;
    case 332u: goto L_08AF13C8;
    case 333u: goto L_08AF13D0;
    case 334u: goto L_08AF13D8;
    case 335u: goto L_08AF13E0;
    case 336u: goto L_08AF13E8;
    case 337u: goto L_08AF13EC;
    case 338u: goto L_08AF13F4;
    case 339u: goto L_08AF1404;
    case 340u: goto L_08AF140C;
    case 341u: goto L_08AF1414;
    case 342u: goto L_08AF1438;
    case 343u: goto L_08AF1444;
    case 344u: goto L_08AF1454;
    case 345u: goto L_08AF1464;
    case 346u: goto L_08AF146C;
    case 347u: goto L_08AF147C;
    case 348u: goto L_08AF148C;
    case 349u: goto L_08AF1490;
    case 350u: goto L_08AF14A4;
    case 351u: goto L_08AF14CC;
    case 352u: goto L_08AF1504;
    case 353u: goto L_08AF1514;
    case 354u: goto L_08AF1524;
    case 355u: goto L_08AF1540;
    case 356u: goto L_08AF1574;
    case 357u: goto L_08AF1578;
    case 358u: goto L_08AF15A4;
    case 359u: goto L_08AF15B4;
    case 360u: goto L_08AF15C0;
    case 361u: goto L_08AF15D0;
    case 362u: goto L_08AF15FC;
    case 363u: goto L_08AF1628;
    case 364u: goto L_08AF16B8;
    case 365u: goto L_08AF16C8;
    case 366u: goto L_08AF16E4;
    case 367u: goto L_08AF16F0;
    case 368u: goto L_08AF16FC;
    case 369u: goto L_08AF1708;
    case 370u: goto L_08AF1714;
    case 371u: goto L_08AF1724;
    case 372u: goto L_08AF1734;
    case 373u: goto L_08AF1744;
    case 374u: goto L_08AF1760;
    case 375u: goto L_08AF1770;
    case 376u: goto L_08AF1788;
    case 377u: goto L_08AF1790;
    case 378u: goto L_08AF1798;
    case 379u: goto L_08AF17A8;
    case 380u: goto L_08AF17B8;
    case 381u: goto L_08AF17C4;
    case 382u: goto L_08AF17CC;
    case 383u: goto L_08AF17D8;
    case 384u: goto L_08AF17E8;
    case 385u: goto L_08AF17EC;
    case 386u: goto L_08AF1808;
    case 387u: goto L_08AF1818;
    case 388u: goto L_08AF1820;
    case 389u: goto L_08AF1838;
    case 390u: goto L_08AF1844;
    case 391u: goto L_08AF1850;
    case 392u: goto L_08AF185C;
    case 393u: goto L_08AF1868;
    case 394u: goto L_08AF1878;
    case 395u: goto L_08AF1884;
    case 396u: goto L_08AF188C;
    case 397u: goto L_08AF1894;
    case 398u: goto L_08AF18A4;
    case 399u: goto L_08AF18B4;
    case 400u: goto L_08AF18C8;
    case 401u: goto L_08AF18D0;
    case 402u: goto L_08AF18E0;
    case 403u: goto L_08AF190C;
    case 404u: goto L_08AF191C;
    case 405u: goto L_08AF1924;
    case 406u: goto L_08AF1930;
    case 407u: goto L_08AF1934;
    case 408u: goto L_08AF1960;
    case 409u: goto L_08AF1970;
    case 410u: goto L_08AF197C;
    case 411u: goto L_08AF198C;
    case 412u: goto L_08AF199C;
    case 413u: goto L_08AF19A4;
    case 414u: goto L_08AF19B0;
    case 415u: goto L_08AF19F0;
    case 416u: goto L_08AF1A00;
    case 417u: goto L_08AF1A08;
    case 418u: goto L_08AF1A10;
    case 419u: goto L_08AF1A1C;
    case 420u: goto L_08AF1A24;
    case 421u: goto L_08AF1A30;
    case 422u: goto L_08AF1A38;
    case 423u: goto L_08AF1A4C;
    case 424u: goto L_08AF1A50;
    case 425u: goto L_08AF1A54;
    case 426u: goto L_08AF1A60;
    case 427u: goto L_08AF1A6C;
    case 428u: goto L_08AF1A74;
    case 429u: goto L_08AF1A84;
    case 430u: goto L_08AF1A98;
    case 431u: goto L_08AF1AA4;
    case 432u: goto L_08AF1AB8;
    case 433u: goto L_08AF1AC0;
    case 434u: goto L_08AF1AD4;
    case 435u: goto L_08AF1AE4;
    case 436u: goto L_08AF1AF4;
    case 437u: goto L_08AF1AFC;
    case 438u: goto L_08AF1B04;
    case 439u: goto L_08AF1B10;
    case 440u: goto L_08AF1B18;
    case 441u: goto L_08AF1B24;
    case 442u: goto L_08AF1B2C;
    case 443u: goto L_08AF1B3C;
    case 444u: goto L_08AF1B40;
    case 445u: goto L_08AF1B4C;
    case 446u: goto L_08AF1B70;
    case 447u: goto L_08AF1B90;
    case 448u: goto L_08AF1B98;
    case 449u: goto L_08AF1BA4;
    case 450u: goto L_08AF1BB8;
    case 451u: goto L_08AF1BC8;
    case 452u: goto L_08AF1BD4;
    case 453u: goto L_08AF1BE0;
    case 454u: goto L_08AF1BE8;
    case 455u: goto L_08AF1BFC;
    case 456u: goto L_08AF1C10;
    case 457u: goto L_08AF1C24;
    case 458u: goto L_08AF1C30;
    case 459u: goto L_08AF1C38;
    case 460u: goto L_08AF1C44;
    case 461u: goto L_08AF1C4C;
    case 462u: goto L_08AF1C58;
    case 463u: goto L_08AF1C60;
    case 464u: goto L_08AF1C70;
    case 465u: goto L_08AF1C74;
    case 466u: goto L_08AF1C84;
    case 467u: goto L_08AF1C98;
    case 468u: goto L_08AF1CA8;
    case 469u: goto L_08AF1CB0;
    case 470u: goto L_08AF1CBC;
    case 471u: goto L_08AF1CC4;
    case 472u: goto L_08AF1CD0;
    case 473u: goto L_08AF1CD8;
    case 474u: goto L_08AF1CE8;
    case 475u: goto L_08AF1CEC;
    case 476u: goto L_08AF1CF0;
    case 477u: goto L_08AF1D08;
    case 478u: goto L_08AF1D10;
    case 479u: goto L_08AF1D18;
    case 480u: goto L_08AF1D1C;
    case 481u: goto L_08AF1D28;
    case 482u: goto L_08AF1D30;
    case 483u: goto L_08AF1D48;
    case 484u: goto L_08AF1D50;
    case 485u: goto L_08AF1D58;
    case 486u: goto L_08AF1D5C;
    case 487u: goto L_08AF1D68;
    case 488u: goto L_08AF1D84;
    case 489u: goto L_08AF1D8C;
    case 490u: goto L_08AF1D94;
    case 491u: goto L_08AF1D9C;
    case 492u: goto L_08AF1DA0;
    case 493u: goto L_08AF1DA4;
    case 494u: goto L_08AF1DBC;
    case 495u: goto L_08AF1DC4;
    case 496u: goto L_08AF1DD4;
    case 497u: goto L_08AF1DE0;
    case 498u: goto L_08AF1DF0;
    case 499u: goto L_08AF1E20;
    case 500u: goto L_08AF1E34;
    case 501u: goto L_08AF1E38;
    case 502u: goto L_08AF1E50;
    case 503u: goto L_08AF1E54;
    case 504u: goto L_08AF1E60;
    case 505u: goto L_08AF1E6C;
    case 506u: goto L_08AF1E80;
    case 507u: goto L_08AF1E9C;
    case 508u: goto L_08AF1EA0;
    case 509u: goto L_08AF1EB8;
    case 510u: goto L_08AF1EC0;
    case 511u: goto L_08AF1EF0;
    case 512u: goto L_08AF1EFC;
    case 513u: goto L_08AF1F04;
    case 514u: goto L_08AF1F0C;
    case 515u: goto L_08AF1F18;
    case 516u: goto L_08AF1F1C;
    case 517u: goto L_08AF1F20;
    case 518u: goto L_08AF1F28;
    case 519u: goto L_08AF1F34;
    case 520u: goto L_08AF1F40;
    case 521u: goto L_08AF1F48;
    case 522u: goto L_08AF1F58;
    case 523u: goto L_08AF1F68;
    case 524u: goto L_08AF1F8C;
    case 525u: goto L_08AF1F9C;
    case 526u: goto L_08AF1FBC;
    case 527u: goto L_08AF1FC4;
    case 528u: goto L_08AF1FCC;
    case 529u: goto L_08AF1FD0;
    case 530u: goto L_08AF1FD4;
    case 531u: goto L_08AF1FE4;
    case 532u: goto L_08AF1FEC;
    case 533u: goto L_08AF1FFC;
    case 534u: goto L_08AF2004;
    case 535u: goto L_08AF2014;
    case 536u: goto L_08AF2024;
    case 537u: goto L_08AF204C;
    case 538u: goto L_08AF2058;
    case 539u: goto L_08AF207C;
    case 540u: goto L_08AF2088;
    case 541u: goto L_08AF2090;
    case 542u: goto L_08AF20A0;
    case 543u: goto L_08AF20B0;
    case 544u: goto L_08AF20BC;
    case 545u: goto L_08AF20CC;
    case 546u: goto L_08AF20D4;
    case 547u: goto L_08AF20E4;
    case 548u: goto L_08AF20F4;
    case 549u: goto L_08AF2118;
    case 550u: goto L_08AF2124;
    case 551u: goto L_08AF2144;
    case 552u: goto L_08AF214C;
    case 553u: goto L_08AF2154;
    case 554u: goto L_08AF2164;
    case 555u: goto L_08AF2174;
    case 556u: goto L_08AF2180;
    case 557u: goto L_08AF218C;
    case 558u: goto L_08AF2198;
    case 559u: goto L_08AF21A8;
    case 560u: goto L_08AF21B8;
    case 561u: goto L_08AF21DC;
    case 562u: goto L_08AF21E8;
    case 563u: goto L_08AF2208;
    case 564u: goto L_08AF2214;
    case 565u: goto L_08AF221C;
    case 566u: goto L_08AF222C;
    case 567u: goto L_08AF223C;
    case 568u: goto L_08AF2244;
    case 569u: goto L_08AF2254;
    case 570u: goto L_08AF2264;
    case 571u: goto L_08AF226C;
    case 572u: goto L_08AF2274;
    case 573u: goto L_08AF2284;
    case 574u: goto L_08AF2294;
    case 575u: goto L_08AF22B8;
    case 576u: goto L_08AF22C8;
    case 577u: goto L_08AF22E8;
    case 578u: goto L_08AF22F0;
    case 579u: goto L_08AF22F8;
    case 580u: goto L_08AF2300;
    case 581u: goto L_08AF2310;
    case 582u: goto L_08AF2318;
    case 583u: goto L_08AF2328;
    case 584u: goto L_08AF2330;
    case 585u: goto L_08AF2340;
    case 586u: goto L_08AF2350;
    case 587u: goto L_08AF2374;
    case 588u: goto L_08AF2380;
    case 589u: goto L_08AF23A0;
    case 590u: goto L_08AF23A8;
    case 591u: goto L_08AF23B0;
    case 592u: goto L_08AF23BC;
    case 593u: goto L_08AF23CC;
    case 594u: goto L_08AF23D4;
    case 595u: goto L_08AF23E8;
    case 596u: goto L_08AF23F0;
    case 597u: goto L_08AF23F8;
    case 598u: goto L_08AF2408;
    case 599u: goto L_08AF2418;
    case 600u: goto L_08AF243C;
    case 601u: goto L_08AF244C;
    case 602u: goto L_08AF246C;
    case 603u: goto L_08AF2474;
    case 604u: goto L_08AF247C;
    case 605u: goto L_08AF2484;
    case 606u: goto L_08AF2494;
    case 607u: goto L_08AF249C;
    case 608u: goto L_08AF24AC;
    case 609u: goto L_08AF24B4;
    case 610u: goto L_08AF24C4;
    case 611u: goto L_08AF24D4;
    case 612u: goto L_08AF24FC;
    case 613u: goto L_08AF2508;
    case 614u: goto L_08AF252C;
    case 615u: goto L_08AF2534;
    case 616u: goto L_08AF253C;
    case 617u: goto L_08AF2548;
    case 618u: goto L_08AF2558;
    case 619u: goto L_08AF2564;
    case 620u: goto L_08AF256C;
    case 621u: goto L_08AF257C;
    case 622u: goto L_08AF258C;
    case 623u: goto L_08AF25AC;
    case 624u: goto L_08AF25BC;
    case 625u: goto L_08AF25D4;
    case 626u: goto L_08AF25DC;
    case 627u: goto L_08AF25E4;
    case 628u: goto L_08AF25F0;
    case 629u: goto L_08AF2600;
    case 630u: goto L_08AF260C;
    case 631u: goto L_08AF261C;
    case 632u: goto L_08AF2630;
    case 633u: goto L_08AF2638;
    case 634u: goto L_08AF2648;
    case 635u: goto L_08AF2658;
    case 636u: goto L_08AF267C;
    case 637u: goto L_08AF268C;
    case 638u: goto L_08AF26AC;
    case 639u: goto L_08AF26B4;
    case 640u: goto L_08AF26BC;
    case 641u: goto L_08AF26C4;
    case 642u: goto L_08AF26D4;
    case 643u: goto L_08AF26DC;
    case 644u: goto L_08AF26EC;
    case 645u: goto L_08AF26F4;
    case 646u: goto L_08AF2704;
    case 647u: goto L_08AF2714;
    case 648u: goto L_08AF2730;
    case 649u: goto L_08AF2740;
    case 650u: goto L_08AF2758;
    case 651u: goto L_08AF2760;
    case 652u: goto L_08AF2768;
    case 653u: goto L_08AF2774;
    case 654u: goto L_08AF2784;
    case 655u: goto L_08AF2788;
    case 656u: goto L_08AF2794;
    case 657u: goto L_08AF27A4;
    case 658u: goto L_08AF27A8;
    case 659u: goto L_08AF27B4;
    case 660u: goto L_08AF27C8;
    case 661u: goto L_08AF27FC;
    case 662u: goto L_08AF280C;
    case 663u: goto L_08AF2818;
    case 664u: goto L_08AF2854;
    case 665u: goto L_08AF285C;
    case 666u: goto L_08AF2878;
    case 667u: goto L_08AF2898;
    case 668u: goto L_08AF28A8;
    case 669u: goto L_08AF28AC;
    case 670u: goto L_08AF28B4;
    case 671u: goto L_08AF28C0;
    case 672u: goto L_08AF28D0;
    case 673u: goto L_08AF28E8;
    case 674u: goto L_08AF28F0;
    case 675u: goto L_08AF28FC;
    case 676u: goto L_08AF2910;
    case 677u: goto L_08AF291C;
    case 678u: goto L_08AF2928;
    case 679u: goto L_08AF2940;
    case 680u: goto L_08AF2944;
    case 681u: goto L_08AF294C;
    case 682u: goto L_08AF2950;
    case 683u: goto L_08AF2960;
    case 684u: goto L_08AF296C;
    case 685u: goto L_08AF29B4;
    case 686u: goto L_08AF29BC;
    case 687u: goto L_08AF29C4;
    case 688u: goto L_08AF29CC;
    case 689u: goto L_08AF29D8;
    case 690u: goto L_08AF29E0;
    case 691u: goto L_08AF29E8;
    case 692u: goto L_08AF29F0;
    case 693u: goto L_08AF29FC;
    case 694u: goto L_08AF2A04;
    case 695u: goto L_08AF2A10;
    case 696u: goto L_08AF2A1C;
    case 697u: goto L_08AF2A24;
    case 698u: goto L_08AF2A38;
    case 699u: goto L_08AF2A60;
    case 700u: goto L_08AF2A68;
    case 701u: goto L_08AF2A7C;
    case 702u: goto L_08AF2A84;
    case 703u: goto L_08AF2A94;
    case 704u: goto L_08AF2A9C;
    case 705u: goto L_08AF2AA8;
    case 706u: goto L_08AF2AD4;
    case 707u: goto L_08AF2B18;
    case 708u: goto L_08AF2B20;
    case 709u: goto L_08AF2B30;
    case 710u: goto L_08AF2B38;
    case 711u: goto L_08AF2B44;
    case 712u: goto L_08AF2B50;
    case 713u: goto L_08AF2B68;
    case 714u: goto L_08AF2B70;
    case 715u: goto L_08AF2B74;
    case 716u: goto L_08AF2B98;
    case 717u: goto L_08AF2BBC;
    case 718u: goto L_08AF2BC4;
    case 719u: goto L_08AF2BE8;
    case 720u: goto L_08AF2BF0;
    case 721u: goto L_08AF2C14;
    case 722u: goto L_08AF2C2C;
    case 723u: goto L_08AF2C34;
    case 724u: goto L_08AF2C58;
    case 725u: goto L_08AF2C6C;
    case 726u: goto L_08AF2C88;
    case 727u: goto L_08AF2C94;
    case 728u: goto L_08AF2CA8;
    case 729u: goto L_08AF2CB0;
    case 730u: goto L_08AF2CBC;
    case 731u: goto L_08AF2CC4;
    case 732u: goto L_08AF2CD0;
    case 733u: goto L_08AF2CD4;
    case 734u: goto L_08AF2CDC;
    case 735u: goto L_08AF2CEC;
    case 736u: goto L_08AF2CF4;
    case 737u: goto L_08AF2D04;
    case 738u: goto L_08AF2D10;
    case 739u: goto L_08AF2D20;
    case 740u: goto L_08AF2D30;
    case 741u: goto L_08AF2D50;
    case 742u: goto L_08AF2D58;
    case 743u: goto L_08AF2D64;
    case 744u: goto L_08AF2D6C;
    case 745u: goto L_08AF2D7C;
    case 746u: goto L_08AF2D84;
    case 747u: goto L_08AF2D8C;
    case 748u: goto L_08AF2D94;
    case 749u: goto L_08AF2D9C;
    case 750u: goto L_08AF2DA4;
    case 751u: goto L_08AF2DAC;
    case 752u: goto L_08AF2DB4;
    case 753u: goto L_08AF2DC4;
    case 754u: goto L_08AF2DDC;
    case 755u: goto L_08AF2DE4;
    case 756u: goto L_08AF2DF4;
    case 757u: goto L_08AF2E00;
    case 758u: goto L_08AF2E08;
    case 759u: goto L_08AF2E0C;
    case 760u: goto L_08AF2E14;
    case 761u: goto L_08AF2E1C;
    case 762u: goto L_08AF2E20;
    case 763u: goto L_08AF2E28;
    case 764u: goto L_08AF2E48;
    case 765u: goto L_08AF2E54;
    case 766u: goto L_08AF2E60;
    case 767u: goto L_08AF2E74;
    case 768u: goto L_08AF2E80;
    case 769u: goto L_08AF2EC4;
    case 770u: goto L_08AF2ECC;
    case 771u: goto L_08AF2EE4;
    case 772u: goto L_08AF2EFC;
    case 773u: goto L_08AF2F04;
    case 774u: goto L_08AF2F0C;
    case 775u: goto L_08AF2F18;
    case 776u: goto L_08AF2F2C;
    case 777u: goto L_08AF2F38;
    case 778u: goto L_08AF2F50;
    case 779u: goto L_08AF2F64;
    case 780u: goto L_08AF2F7C;
    case 781u: goto L_08AF2F84;
    case 782u: goto L_08AF2F8C;
    case 783u: goto L_08AF2F98;
    case 784u: goto L_08AF2FA4;
    case 785u: goto L_08AF2FB0;
    case 786u: goto L_08AF2FC0;
    case 787u: goto L_08AF2FD4;
    case 788u: goto L_08AF2FDC;
    case 789u: goto L_08AF3000;
    case 790u: goto L_08AF3014;
    case 791u: goto L_08AF3028;
    case 792u: goto L_08AF3040;
    case 793u: goto L_08AF3048;
    case 794u: goto L_08AF3050;
    case 795u: goto L_08AF306C;
    case 796u: goto L_08AF3074;
    case 797u: goto L_08AF3080;
    case 798u: goto L_08AF3088;
    case 799u: goto L_08AF30A8;
    case 800u: goto L_08AF30AC;
    case 801u: goto L_08AF30B0;
    case 802u: goto L_08AF30D8;
    case 803u: goto L_08AF3130;
    case 804u: goto L_08AF3140;
    case 805u: goto L_08AF315C;
    case 806u: goto L_08AF3164;
    case 807u: goto L_08AF316C;
    case 808u: goto L_08AF3180;
    case 809u: goto L_08AF3194;
    case 810u: goto L_08AF31A0;
    case 811u: goto L_08AF31A8;
    case 812u: goto L_08AF31B0;
    case 813u: goto L_08AF31B8;
    case 814u: goto L_08AF31BC;
    case 815u: goto L_08AF31C8;
    case 816u: goto L_08AF31D0;
    case 817u: goto L_08AF31D4;
    case 818u: goto L_08AF31F8;
    case 819u: goto L_08AF3200;
    case 820u: goto L_08AF320C;
    case 821u: goto L_08AF3218;
    case 822u: goto L_08AF3220;
    case 823u: goto L_08AF3224;
    case 824u: goto L_08AF322C;
    case 825u: goto L_08AF3238;
    case 826u: goto L_08AF3240;
    case 827u: goto L_08AF3244;
    case 828u: goto L_08AF3248;
    case 829u: goto L_08AF324C;
    case 830u: goto L_08AF3254;
    case 831u: goto L_08AF325C;
    case 832u: goto L_08AF3268;
    case 833u: goto L_08AF3274;
    case 834u: goto L_08AF327C;
    case 835u: goto L_08AF3280;
    case 836u: goto L_08AF3288;
    case 837u: goto L_08AF3294;
    case 838u: goto L_08AF329C;
    case 839u: goto L_08AF32A0;
    case 840u: goto L_08AF32A4;
    case 841u: goto L_08AF32A8;
    case 842u: goto L_08AF32B0;
    case 843u: goto L_08AF32C4;
    case 844u: goto L_08AF32D8;
    case 845u: goto L_08AF32F0;
    case 846u: goto L_08AF32FC;
    case 847u: goto L_08AF3304;
    case 848u: goto L_08AF3324;
    case 849u: goto L_08AF3334;
    case 850u: goto L_08AF3358;
    case 851u: goto L_08AF3370;
    case 852u: goto L_08AF337C;
    case 853u: goto L_08AF338C;
    case 854u: goto L_08AF3394;
    case 855u: goto L_08AF33B8;
    case 856u: goto L_08AF33C0;
    case 857u: goto L_08AF33E0;
    case 858u: goto L_08AF3408;
    case 859u: goto L_08AF3414;
    case 860u: goto L_08AF3420;
    case 861u: goto L_08AF3428;
    case 862u: goto L_08AF3434;
    case 863u: goto L_08AF343C;
    case 864u: goto L_08AF3444;
    case 865u: goto L_08AF344C;
    case 866u: goto L_08AF3474;
    case 867u: goto L_08AF3478;
    case 868u: goto L_08AF3490;
    case 869u: goto L_08AF3494;
    case 870u: goto L_08AF349C;
    case 871u: goto L_08AF34CC;
    case 872u: goto L_08AF34DC;
    case 873u: goto L_08AF34FC;
    case 874u: goto L_08AF3504;
    case 875u: goto L_08AF351C;
    case 876u: goto L_08AF3528;
    case 877u: goto L_08AF3538;
    case 878u: goto L_08AF3544;
    case 879u: goto L_08AF3598;
    case 880u: goto L_08AF35B0;
    case 881u: goto L_08AF35C8;
    case 882u: goto L_08AF35F8;
    case 883u: goto L_08AF3600;
    case 884u: goto L_08AF3624;
    case 885u: goto L_08AF363C;
    case 886u: goto L_08AF3658;
    case 887u: goto L_08AF3688;
    case 888u: goto L_08AF3698;
    case 889u: goto L_08AF3704;
    case 890u: goto L_08AF371C;
    case 891u: goto L_08AF3724;
    case 892u: goto L_08AF3730;
    case 893u: goto L_08AF3760;
    case 894u: goto L_08AF3780;
    case 895u: goto L_08AF3788;
    case 896u: goto L_08AF3790;
    case 897u: goto L_08AF3798;
    case 898u: goto L_08AF37B8;
    case 899u: goto L_08AF37D8;
    case 900u: goto L_08AF37EC;
    case 901u: goto L_08AF381C;
    case 902u: goto L_08AF3850;
    case 903u: goto L_08AF3860;
    case 904u: goto L_08AF3880;
    case 905u: goto L_08AF3898;
    case 906u: goto L_08AF38AC;
    case 907u: goto L_08AF38B8;
    case 908u: goto L_08AF38CC;
    case 909u: goto L_08AF38FC;
    case 910u: goto L_08AF3904;
    case 911u: goto L_08AF3924;
    case 912u: goto L_08AF3944;
    case 913u: goto L_08AF3958;
    case 914u: goto L_08AF396C;
    case 915u: goto L_08AF3980;
    case 916u: goto L_08AF39B0;
    case 917u: goto L_08AF39C8;
    case 918u: goto L_08AF39E4;
    case 919u: goto L_08AF39F4;
    case 920u: goto L_08AF3A18;
    case 921u: goto L_08AF3A40;
    case 922u: goto L_08AF3A6C;
    case 923u: goto L_08AF3A84;
    case 924u: goto L_08AF3A98;
    case 925u: goto L_08AF3AB0;
    case 926u: goto L_08AF3AC4;
    case 927u: goto L_08AF3AE4;
    case 928u: goto L_08AF3AFC;
    case 929u: goto L_08AF3B10;
    case 930u: goto L_08AF3B28;
    case 931u: goto L_08AF3B3C;
    case 932u: goto L_08AF3B54;
    case 933u: goto L_08AF3B68;
    case 934u: goto L_08AF3B80;
    case 935u: goto L_08AF3BA4;
    case 936u: goto L_08AF3BC0;
    case 937u: goto L_08AF3BD4;
    case 938u: goto L_08AF3BF0;
    case 939u: goto L_08AF3C04;
    case 940u: goto L_08AF3C10;
    case 941u: goto L_08AF3C24;
    case 942u: goto L_08AF3C38;
    case 943u: goto L_08AF3C40;
    case 944u: goto L_08AF3C68;
    case 945u: goto L_08AF3C88;
    case 946u: goto L_08AF3C9C;
    case 947u: goto L_08AF3CB0;
    case 948u: goto L_08AF3CC4;
    case 949u: goto L_08AF3CD8;
    case 950u: goto L_08AF3D08;
    case 951u: goto L_08AF3D20;
    case 952u: goto L_08AF3D34;
    case 953u: goto L_08AF3D40;
    case 954u: goto L_08AF3D54;
    case 955u: goto L_08AF3D5C;
    case 956u: goto L_08AF3D7C;
    case 957u: goto L_08AF3D9C;
    case 958u: goto L_08AF3DB0;
    case 959u: goto L_08AF3DC4;
    case 960u: goto L_08AF3DD8;
    case 961u: goto L_08AF3E08;
    case 962u: goto L_08AF3E50;
    case 963u: goto L_08AF3E68;
    case 964u: goto L_08AF3E80;
    case 965u: goto L_08AF3EA4;
    case 966u: goto L_08AF3EAC;
    case 967u: goto L_08AF3EC8;
    case 968u: goto L_08AF3EE0;
    case 969u: goto L_08AF3EFC;
    case 970u: goto L_08AF3F20;
    case 971u: goto L_08AF3F30;
    case 972u: goto L_08AF3F44;
    case 973u: goto L_08AF3F68;
    case 974u: goto L_08AF3FA0;
    case 975u: goto L_08AF3FD4;
    case 976u: goto L_08AF3FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AF0000:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[6] & 512u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF0074;
    }
    goto L_08AF0010;
L_08AF0010:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF004C;
      }
      goto L_08AF0020;
    }
L_08AF0020:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AF0030u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF0030u) goto L_08AF0030;
    return;
L_08AF0030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF00A4;
      }
      goto L_08AF004C;
    }
L_08AF004C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF005Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF005Cu) goto L_08AF005C;
    return;
L_08AF005C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF00A4;
      }
      goto L_08AF0074;
    }
L_08AF0074:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF0094;
      }
      goto L_08AF007C;
    }
L_08AF007C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF0094;
      }
      goto L_08AF0084;
    }
L_08AF0084:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF0094;
L_08AF0094:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AF00A4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1050u, 0x08AEFCC4u>(ctx, &aot_mem) && ctx.pc == 0x08AF00A4u) goto L_08AF00A4;
    return;
L_08AF00A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    goto L_08AF00B0;
L_08AF00B0:
    if (static_cast<std::int32_t>(ctx.gpr[16]) <= 0) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
        goto L_08AF12A8;
    }
    goto L_08AF00B8;
L_08AF00B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF00D8;
      }
      goto L_08AF00C4;
    }
L_08AF00C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
        goto L_08AF12A8;
    }
    goto L_08AF00D4;
L_08AF00D4:
    ctx.gpr[4] = (0u | 0u);
    goto L_08AF00D8;
L_08AF00D8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AF00F4;
L_08AF00F4:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
    goto L_08AF0104;
L_08AF0104:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF09B8;
      }
      goto L_08AF010C;
    }
L_08AF010C:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-2976)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF0124:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF00F4;
      }
      goto L_08AF0130;
    }
L_08AF0130:
    ctx.gpr[4] = (0u | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF00F4;
      }
      goto L_08AF013C;
    }
L_08AF013C:
    ctx.gpr[20] = (ctx.gpr[20] | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF00F4;
      }
      goto L_08AF0148;
    }
L_08AF0148:
    ctx.gpr[20] = (ctx.gpr[20] | 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF00F4;
      }
      goto L_08AF0154;
    }
L_08AF0154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF00F4;
      }
      goto L_08AF016C;
    }
L_08AF016C:
    ctx.gpr[30] = (0u - ctx.gpr[30]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[20] | 4u);
      if (branch_taken) {
          goto L_08AF0180;
      }
      goto L_08AF0178;
    }
L_08AF0178:
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[20] | 4u);
    goto L_08AF0180;
L_08AF0180:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF00F4;
      }
      goto L_08AF0188;
    }
L_08AF0188:
    ctx.gpr[4] = (0u | 43u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF00F4;
      }
      goto L_08AF0198;
    }
L_08AF0198:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AF01D0;
      }
      goto L_08AF01AC;
    }
L_08AF01AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08AF01C8;
    }
    goto L_08AF01C8;
L_08AF01C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF00F4;
      }
      goto L_08AF01D0;
    }
L_08AF01D0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF020C;
      }
      goto L_08AF01E0;
    }
L_08AF01E0:
    ctx.gpr[4] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AF01E0;
      }
      goto L_08AF020C;
    }
L_08AF020C:
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08AF021C;
    }
    goto L_08AF021C;
L_08AF021C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF0104;
      }
      goto L_08AF0224;
    }
L_08AF0224:
    ctx.gpr[20] = (ctx.gpr[20] | 128u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF00F4;
      }
      goto L_08AF0230;
    }
L_08AF0230:
    ctx.gpr[5] = (0u | 0u);
    goto L_08AF0234;
L_08AF0234:
    ctx.gpr[4] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AF0234;
      }
      goto L_08AF0260;
    }
L_08AF0260:
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF0104;
      }
      goto L_08AF0270;
    }
L_08AF0270:
    ctx.gpr[20] = (ctx.gpr[20] | 8u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF00F4;
      }
      goto L_08AF027C;
    }
L_08AF027C:
    ctx.gpr[20] = (ctx.gpr[20] | 64u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF00F4;
      }
      goto L_08AF0288;
    }
L_08AF0288:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 108u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF02A8;
      }
      goto L_08AF0298;
    }
L_08AF0298:
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] | 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF00F4;
      }
      goto L_08AF02A8;
    }
L_08AF02A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
      if (branch_taken) {
          goto L_08AF00F4;
      }
      goto L_08AF02B0;
    }
L_08AF02B0:
    ctx.gpr[20] = (ctx.gpr[20] | 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF00F4;
      }
      goto L_08AF02BC;
    }
L_08AF02BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[20] & 132u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF09E0;
      }
      goto L_08AF02F4;
    }
L_08AF02F4:
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[20] & 32u);
      if (branch_taken) {
          goto L_08AF0304;
      }
      goto L_08AF0300;
    }
L_08AF0300:
    ctx.gpr[5] = (ctx.gpr[20] & 32u);
    goto L_08AF0304;
L_08AF0304:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
      if (branch_taken) {
          goto L_08AF0320;
      }
      goto L_08AF030C;
    }
L_08AF030C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF0370;
      }
      goto L_08AF0320;
    }
L_08AF0320:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AF033C;
      }
      goto L_08AF0328;
    }
L_08AF0328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF036C;
      }
      goto L_08AF033C;
    }
L_08AF033C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
        goto L_08AF0360;
    }
    goto L_08AF0344;
L_08AF0344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
      if (branch_taken) {
          goto L_08AF036C;
      }
      goto L_08AF0360;
    }
L_08AF0360:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    goto L_08AF036C;
L_08AF036C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08AF0370;
L_08AF0370:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[31] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF0388;
      }
      goto L_08AF037C;
    }
L_08AF037C:
    ctx.gpr[4] = (0u | 45u);
    ctx.gpr[5] = (0u - ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AF0388;
L_08AF0388:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF0854;
      }
      goto L_08AF0390;
    }
L_08AF0390:
    ctx.gpr[4] = (ctx.gpr[20] & 1u);
    ctx.gpr[5] = (ctx.gpr[20] & 132u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[5]);
    ctx.gpr[21] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[6]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[19] == ctx.gpr[4]) {
    ctx.gpr[19] = (0u | 6u);
        goto L_08AF03B8;
    }
    goto L_08AF03B8;
L_08AF03B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[5] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 103u);
    if (ctx.gpr[16] == ctx.gpr[4]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[7]);
        goto L_08AF03F4;
    }
    goto L_08AF03E0;
L_08AF03E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[7]);
    ctx.gpr[4] = (0u | 71u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AF04F0;
      }
      goto L_08AF03F0;
    }
L_08AF03F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[7]);
    goto L_08AF03F4;
L_08AF03F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[6]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23148)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23152)));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AF0418u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 524u, 0x08AF6874u>(ctx, &aot_mem) && ctx.pc == 0x08AF0418u) goto L_08AF0418;
    return;
L_08AF0418:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF0474;
      }
      goto L_08AF0420;
    }
L_08AF0420:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23148)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23152)));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AF0440u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 524u, 0x08AF6874u>(ctx, &aot_mem) && ctx.pc == 0x08AF0440u) goto L_08AF0440;
    return;
L_08AF0440:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
        goto L_08AF0460;
    }
    goto L_08AF0448;
L_08AF0448:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[31] = (0x08AF0454u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 556u, 0x08AF6A80u>(ctx, &aot_mem) && ctx.pc == 0x08AF0454u) goto L_08AF0454;
    return;
L_08AF0454:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_08AF0460;
L_08AF0460:
    ctx.gpr[31] = (0x08AF0468u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AF3E08;
L_08AF0468:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF047C;
      }
      goto L_08AF0474;
    }
L_08AF0474:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23140)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23144)));
    goto L_08AF047C;
L_08AF047C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[6]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23068)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23072)));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[21] = (0u | 102u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AF04A8u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 524u, 0x08AF6874u>(ctx, &aot_mem) && ctx.pc == 0x08AF04A8u) goto L_08AF04A8;
    return;
L_08AF04A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[5] = (0u | 69u);
      if (branch_taken) {
          goto L_08AF04D8;
      }
      goto L_08AF04B0;
    }
L_08AF04B0:
    ctx.gpr[31] = (0x08AF04B8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 528u, 0x08AF68D0u>(ctx, &aot_mem) && ctx.pc == 0x08AF04B8u) goto L_08AF04B8;
    return;
L_08AF04B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF04CCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 524u, 0x08AF6874u>(ctx, &aot_mem) && ctx.pc == 0x08AF04CCu) goto L_08AF04CC;
    return;
L_08AF04CC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
        goto L_08AF04EC;
    }
    goto L_08AF04D4;
L_08AF04D4:
    ctx.gpr[5] = (0u | 69u);
    goto L_08AF04D8;
L_08AF04D8:
    ctx.gpr[4] = (0u | 103u);
    if (ctx.gpr[16] == ctx.gpr[4]) {
    ctx.gpr[5] = (0u | 101u);
        goto L_08AF04E4;
    }
    goto L_08AF04E4;
L_08AF04E4:
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    goto L_08AF04EC;
L_08AF04EC:
    ctx.gpr[21] = (0u | 1u);
    goto L_08AF04F0;
L_08AF04F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[16] << 24u);
      if (branch_taken) {
          goto L_08AF050C;
      }
      goto L_08AF04FC;
    }
L_08AF04FC:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[19] = (0u | 1u);
        goto L_08AF0504;
    }
    goto L_08AF0504;
L_08AF0504:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[16] << 24u);
    goto L_08AF050C;
L_08AF050C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 24u));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08AF0528u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 943u, 0x08AEF564u>(ctx, &aot_mem) && ctx.pc == 0x08AF0528u) goto L_08AF0528;
    return;
L_08AF0528:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF0534u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0534u) goto L_08AF0534;
    return;
L_08AF0534:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[20] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF09E0;
      }
      goto L_08AF0544;
    }
L_08AF0544:
    ctx.gpr[6] = (ctx.gpr[21] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08AF0558u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08AF12FC;
L_08AF0558:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AF09E0;
      }
      goto L_08AF0564;
    }
L_08AF0564:
    ctx.gpr[4] = (ctx.gpr[20] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
      if (branch_taken) {
          goto L_08AF0588;
      }
      goto L_08AF0570;
    }
L_08AF0570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1080u, 0x08AEFFA0u>(ctx, &aot_mem); return;
      }
      goto L_08AF0588;
    }
L_08AF0588:
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AF05AC;
      }
      goto L_08AF0594;
    }
L_08AF0594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1080u, 0x08AEFFA0u>(ctx, &aot_mem); return;
      }
      goto L_08AF05AC;
    }
L_08AF05AC:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
        goto L_08AF05CC;
    }
    goto L_08AF05B4;
L_08AF05B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1080u, 0x08AEFFA0u>(ctx, &aot_mem); return;
      }
      goto L_08AF05CC;
    }
L_08AF05CC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1080u, 0x08AEFFA0u>(ctx, &aot_mem); return;
      }
      goto L_08AF05E0;
    }
L_08AF05E0:
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[20] & 32u);
      if (branch_taken) {
          goto L_08AF05F0;
      }
      goto L_08AF05EC;
    }
L_08AF05EC:
    ctx.gpr[5] = (ctx.gpr[20] & 32u);
    goto L_08AF05F0;
L_08AF05F0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
      if (branch_taken) {
          goto L_08AF060C;
      }
      goto L_08AF05F8;
    }
L_08AF05F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF0654;
      }
      goto L_08AF060C;
    }
L_08AF060C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AF0628;
      }
      goto L_08AF0614;
    }
L_08AF0614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF0654;
      }
      goto L_08AF0628;
    }
L_08AF0628:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
        goto L_08AF0648;
    }
    goto L_08AF0630;
L_08AF0630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08AF0654;
      }
      goto L_08AF0648;
    }
L_08AF0648:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    goto L_08AF0654;
L_08AF0654:
    ctx.gpr[31] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF0850;
      }
      goto L_08AF0660;
    }
L_08AF0660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    ctx.gpr[31] = (0u | 2u);
    ctx.gpr[20] = (ctx.gpr[20] | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[6]);
    ctx.gpr[16] = (0u | 120u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF0850;
      }
      goto L_08AF068C;
    }
L_08AF068C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[5] = (ctx.gpr[20] & 132u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
        goto L_08AF06B8;
    }
    goto L_08AF06B8;
L_08AF06B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08AF06FC;
      }
      goto L_08AF06C0;
    }
L_08AF06C0:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AF06CCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 380u, 0x08AED540u>(ctx, &aot_mem) && ctx.pc == 0x08AF06CCu) goto L_08AF06CC;
    return;
L_08AF06CC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AF06F0;
      }
      goto L_08AF06D8;
    }
L_08AF06D8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AF070C;
      }
      goto L_08AF06E4;
    }
L_08AF06E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AF070C;
      }
      goto L_08AF06F0;
    }
L_08AF06F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AF070C;
      }
      goto L_08AF06FC;
    }
L_08AF06FC:
    ctx.gpr[31] = (0x08AF0704u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0704u) goto L_08AF0704;
    return;
L_08AF0704:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_08AF070C;
L_08AF070C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AF09E0;
      }
      goto L_08AF0718;
    }
L_08AF0718:
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
    ctx.gpr[5] = (ctx.gpr[20] & 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
      if (branch_taken) {
          goto L_08AF0730;
      }
      goto L_08AF0728;
    }
L_08AF0728:
    ctx.gpr[5] = (ctx.gpr[20] & 32u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    goto L_08AF0730;
L_08AF0730:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
      if (branch_taken) {
          goto L_08AF074C;
      }
      goto L_08AF0738;
    }
L_08AF0738:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF0794;
      }
      goto L_08AF074C;
    }
L_08AF074C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AF0768;
      }
      goto L_08AF0754;
    }
L_08AF0754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF0794;
      }
      goto L_08AF0768;
    }
L_08AF0768:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
        goto L_08AF0788;
    }
    goto L_08AF0770;
L_08AF0770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08AF0794;
      }
      goto L_08AF0788;
    }
L_08AF0788:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    goto L_08AF0794;
L_08AF0794:
    ctx.gpr[31] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF0850;
      }
      goto L_08AF07A4;
    }
L_08AF07A4:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.gpr[5] = (ctx.gpr[20] & 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[20] & 1u);
      if (branch_taken) {
          goto L_08AF07C0;
      }
      goto L_08AF07B4;
    }
L_08AF07B4:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[20] & 32u);
    ctx.gpr[7] = (ctx.gpr[20] & 1u);
    goto L_08AF07C0;
L_08AF07C0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
      if (branch_taken) {
          goto L_08AF07DC;
      }
      goto L_08AF07C8;
    }
L_08AF07C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF0828;
      }
      goto L_08AF07DC;
    }
L_08AF07DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AF07F8;
      }
      goto L_08AF07E4;
    }
L_08AF07E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF0824;
      }
      goto L_08AF07F8;
    }
L_08AF07F8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
        goto L_08AF0818;
    }
    goto L_08AF0800;
L_08AF0800:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08AF0824;
      }
      goto L_08AF0818;
    }
L_08AF0818:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    goto L_08AF0824;
L_08AF0824:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08AF0828;
L_08AF0828:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
    ctx.gpr[31] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF0850;
      }
      goto L_08AF0840;
    }
L_08AF0840:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
      if (branch_taken) {
          goto L_08AF0850;
      }
      goto L_08AF0848;
    }
L_08AF0848:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
    ctx.gpr[20] = (ctx.gpr[20] | 2u);
    goto L_08AF0850;
L_08AF0850:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    goto L_08AF0854;
L_08AF0854:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF0868;
      }
      goto L_08AF0860;
    }
L_08AF0860:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[20] = (ctx.gpr[20] & ctx.gpr[4]);
    goto L_08AF0868;
L_08AF0868:
    ctx.gpr[4] = (ctx.gpr[20] & 132u);
    ctx.gpr[6] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(388));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AF0970;
      }
      goto L_08AF0880;
    }
L_08AF0880:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[31]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[31]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF08AC;
      }
      goto L_08AF0888;
    }
L_08AF0888:
    if (static_cast<std::int32_t>(ctx.gpr[31]) >= 0) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
        goto L_08AF08CC;
    }
    goto L_08AF0890;
L_08AF0890:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    goto L_08AF0894;
L_08AF0894:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
    ctx.gpr[31] = (0x08AF08A0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08AF08A0u) goto L_08AF08A0;
    return;
L_08AF08A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF09E0;
      }
      goto L_08AF08AC;
    }
L_08AF08AC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF090C;
      }
      goto L_08AF08B4;
    }
L_08AF08B4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[31]) < 3 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
        goto L_08AF0894;
    }
    goto L_08AF08C0;
L_08AF08C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 15u);
      if (branch_taken) {
          goto L_08AF0958;
      }
      goto L_08AF08C8;
    }
L_08AF08C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
    goto L_08AF08CC;
L_08AF08CC:
    ctx.gpr[6] = (ctx.gpr[20] & 1u);
    goto L_08AF08D0;
L_08AF08D0:
    ctx.gpr[4] = (ctx.gpr[5] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 3u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF08D0;
      }
      goto L_08AF08E8;
    }
L_08AF08E8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
      if (branch_taken) {
          goto L_08AF0970;
      }
      goto L_08AF08F0;
    }
L_08AF08F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 48u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
        goto L_08AF0974;
    }
    goto L_08AF0900;
L_08AF0900:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AF0970;
      }
      goto L_08AF090C;
    }
L_08AF090C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (0u | 10u);
      if (branch_taken) {
          goto L_08AF0944;
      }
      goto L_08AF0914;
    }
L_08AF0914:
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0914;
      }
      goto L_08AF0944;
    }
L_08AF0944:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF0970;
      }
      goto L_08AF0954;
    }
L_08AF0954:
    ctx.gpr[4] = (ctx.gpr[5] & 15u);
    goto L_08AF0958;
L_08AF0958:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF0954;
      }
      goto L_08AF0970;
    }
L_08AF0970:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
    goto L_08AF0974;
L_08AF0974:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[31] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(388));
      if (branch_taken) {
          goto L_08AF09AC;
      }
      goto L_08AF0980;
    }
L_08AF0980:
    ctx.gpr[4] = (ctx.gpr[20] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AF09B0;
      }
      goto L_08AF098C;
    }
L_08AF098C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08AF09A0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08AF12FC;
L_08AF09A0:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AF09E0;
      }
      goto L_08AF09AC;
    }
L_08AF09AC:
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[21]);
    goto L_08AF09B0;
L_08AF09B0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AF09E0;
      }
      goto L_08AF09B8;
    }
L_08AF09B8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08AF12A4;
      }
      goto L_08AF09C0;
    }
L_08AF09C0:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[20] & 132u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[5]);
    goto L_08AF09E0;
L_08AF09E0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
        goto L_08AF09FC;
    }
    goto L_08AF09FC;
L_08AF09FC:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[22] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08AF0A0C;
      }
      goto L_08AF0A04;
    }
L_08AF0A04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF0A1C;
      }
      goto L_08AF0A0C;
    }
L_08AF0A0C:
    ctx.gpr[4] = (ctx.gpr[20] & 2u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
        goto L_08AF0A20;
    }
    goto L_08AF0A18;
L_08AF0A18:
    ctx.gpr[22] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    goto L_08AF0A1C;
L_08AF0A1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    goto L_08AF0A20;
L_08AF0A20:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[30] - ctx.gpr[22]);
      if (branch_taken) {
          goto L_08AF0BB4;
      }
      goto L_08AF0A28;
    }
L_08AF0A28:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF0BB4;
      }
      goto L_08AF0A30;
    }
L_08AF0A30:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
      if (branch_taken) {
          goto L_08AF0AF4;
      }
      goto L_08AF0A38;
    }
L_08AF0A38:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF0AB4;
    }
    goto L_08AF0A40;
L_08AF0A40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF0A84;
      }
      goto L_08AF0A50;
    }
L_08AF0A50:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AF0A60u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF0A60u) goto L_08AF0A60;
    return;
L_08AF0A60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0AE4;
      }
      goto L_08AF0A84;
    }
L_08AF0A84:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF0A94u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF0A94u) goto L_08AF0A94;
    return;
L_08AF0A94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0AE4;
      }
      goto L_08AF0AB4;
    }
L_08AF0AB4:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF0ACC;
    }
    goto L_08AF0ABC;
L_08AF0ABC:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF0AC8;
      }
      goto L_08AF0AC4;
    }
L_08AF0AC4:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AF0AC8;
L_08AF0AC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AF0ACC;
L_08AF0ACC:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08AF0ADCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1050u, 0x08AEFCC4u>(ctx, &aot_mem) && ctx.pc == 0x08AF0ADCu) goto L_08AF0ADC;
    return;
L_08AF0ADC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF0AE4;
L_08AF0AE4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0A38;
      }
      goto L_08AF0AF4;
    }
L_08AF0AF4:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF0B78;
    }
    goto L_08AF0AFC;
L_08AF0AFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF0B44;
      }
      goto L_08AF0B0C;
    }
L_08AF0B0C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AF0B1Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF0B1Cu) goto L_08AF0B1C;
    return;
L_08AF0B1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[19]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_08AF0BB4;
      }
      goto L_08AF0B44;
    }
L_08AF0B44:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF0B54u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF0B54u) goto L_08AF0B54;
    return;
L_08AF0B54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_08AF0BB4;
      }
      goto L_08AF0B78;
    }
L_08AF0B78:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF0B98;
      }
      goto L_08AF0B80;
    }
L_08AF0B80:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF0B98;
      }
      goto L_08AF0B88;
    }
L_08AF0B88:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF0B98;
L_08AF0B98:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF0BA8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1050u, 0x08AEFCC4u>(ctx, &aot_mem) && ctx.pc == 0x08AF0BA8u) goto L_08AF0BA8;
    return;
L_08AF0BA8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF0BB4;
L_08AF0BB4:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(388));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AF0C7C;
      }
      goto L_08AF0BC4;
    }
L_08AF0BC4:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF0C40;
    }
    goto L_08AF0BCC;
L_08AF0BCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF0C10;
      }
      goto L_08AF0BDC;
    }
L_08AF0BDC:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AF0BECu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF0BECu) goto L_08AF0BEC;
    return;
L_08AF0BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0D44;
      }
      goto L_08AF0C10;
    }
L_08AF0C10:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF0C20u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF0C20u) goto L_08AF0C20;
    return;
L_08AF0C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0D44;
      }
      goto L_08AF0C40;
    }
L_08AF0C40:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF0C60;
      }
      goto L_08AF0C48;
    }
L_08AF0C48:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF0C60;
      }
      goto L_08AF0C50;
    }
L_08AF0C50:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF0C60;
L_08AF0C60:
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AF0C70u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1050u, 0x08AEFCC4u>(ctx, &aot_mem) && ctx.pc == 0x08AF0C70u) goto L_08AF0C70;
    return;
L_08AF0C70:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0D44;
      }
      goto L_08AF0C7C;
    }
L_08AF0C7C:
    ctx.gpr[4] = (ctx.gpr[20] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 48u);
      if (branch_taken) {
          goto L_08AF0D44;
      }
      goto L_08AF0C88;
    }
L_08AF0C88:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(388), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(389), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08AF0D08;
      }
      goto L_08AF0C94;
    }
L_08AF0C94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF0CD8;
      }
      goto L_08AF0CA4;
    }
L_08AF0CA4:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08AF0CB4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF0CB4u) goto L_08AF0CB4;
    return;
L_08AF0CB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0D44;
      }
      goto L_08AF0CD8;
    }
L_08AF0CD8:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF0CE8u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF0CE8u) goto L_08AF0CE8;
    return;
L_08AF0CE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0D44;
      }
      goto L_08AF0D08;
    }
L_08AF0D08:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF0D2C;
      }
      goto L_08AF0D14;
    }
L_08AF0D14:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF0D2C;
      }
      goto L_08AF0D1C;
    }
L_08AF0D1C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF0D2C;
L_08AF0D2C:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08AF0D3Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1050u, 0x08AEFCC4u>(ctx, &aot_mem) && ctx.pc == 0x08AF0D3Cu) goto L_08AF0D3C;
    return;
L_08AF0D3C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF0D44;
L_08AF0D44:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[4] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF0ED4;
      }
      goto L_08AF0D54;
    }
L_08AF0D54:
    ctx.gpr[16] = (ctx.gpr[30] - ctx.gpr[22]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF0ED4;
      }
      goto L_08AF0D60;
    }
L_08AF0D60:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
      if (branch_taken) {
          goto L_08AF0E24;
      }
      goto L_08AF0D68;
    }
L_08AF0D68:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF0DE4;
    }
    goto L_08AF0D70;
L_08AF0D70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF0DB4;
      }
      goto L_08AF0D80;
    }
L_08AF0D80:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF0D90u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF0D90u) goto L_08AF0D90;
    return;
L_08AF0D90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0E14;
      }
      goto L_08AF0DB4;
    }
L_08AF0DB4:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF0DC4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF0DC4u) goto L_08AF0DC4;
    return;
L_08AF0DC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0E14;
      }
      goto L_08AF0DE4;
    }
L_08AF0DE4:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF0DFC;
    }
    goto L_08AF0DEC;
L_08AF0DEC:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF0DFC;
    }
    goto L_08AF0DF4;
L_08AF0DF4:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AF0DFC;
L_08AF0DFC:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08AF0E0Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1050u, 0x08AEFCC4u>(ctx, &aot_mem) && ctx.pc == 0x08AF0E0Cu) goto L_08AF0E0C;
    return;
L_08AF0E0C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF0E14;
L_08AF0E14:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0D68;
      }
      goto L_08AF0E24;
    }
L_08AF0E24:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF0EA0;
    }
    goto L_08AF0E2C;
L_08AF0E2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF0E70;
      }
      goto L_08AF0E3C;
    }
L_08AF0E3C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF0E4Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF0E4Cu) goto L_08AF0E4C;
    return;
L_08AF0E4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0ED4;
      }
      goto L_08AF0E70;
    }
L_08AF0E70:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF0E80u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF0E80u) goto L_08AF0E80;
    return;
L_08AF0E80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0ED4;
      }
      goto L_08AF0EA0;
    }
L_08AF0EA0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF0EBC;
      }
      goto L_08AF0EA8;
    }
L_08AF0EA8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF0EBC;
      }
      goto L_08AF0EB0;
    }
L_08AF0EB0:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF0EBC;
L_08AF0EBC:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF0ECCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1050u, 0x08AEFCC4u>(ctx, &aot_mem) && ctx.pc == 0x08AF0ECCu) goto L_08AF0ECC;
    return;
L_08AF0ECC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF0ED4;
L_08AF0ED4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
      if (branch_taken) {
          goto L_08AF106C;
      }
      goto L_08AF0EE8;
    }
L_08AF0EE8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0FB0;
      }
      goto L_08AF0EF4;
    }
L_08AF0EF4:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF0F70;
    }
    goto L_08AF0EFC;
L_08AF0EFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF0F40;
      }
      goto L_08AF0F0C;
    }
L_08AF0F0C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF0F1Cu);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF0F1Cu) goto L_08AF0F1C;
    return;
L_08AF0F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0FA0;
      }
      goto L_08AF0F40;
    }
L_08AF0F40:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF0F50u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF0F50u) goto L_08AF0F50;
    return;
L_08AF0F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    goto L_08AF0F68;
L_08AF0F68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF0FA0;
      }
      goto L_08AF0F70;
    }
L_08AF0F70:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF0F88;
    }
    goto L_08AF0F78;
L_08AF0F78:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF0F88;
    }
    goto L_08AF0F80;
L_08AF0F80:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AF0F88;
L_08AF0F88:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08AF0F98u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1050u, 0x08AEFCC4u>(ctx, &aot_mem) && ctx.pc == 0x08AF0F98u) goto L_08AF0F98;
    return;
L_08AF0F98:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF0FA0;
L_08AF0FA0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0EF4;
      }
      goto L_08AF0FB0;
    }
L_08AF0FB0:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF1034;
    }
    goto L_08AF0FB8;
L_08AF0FB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF1000;
      }
      goto L_08AF0FC8;
    }
L_08AF0FC8:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF0FD8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF0FD8u) goto L_08AF0FD8;
    return;
L_08AF0FD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AF106C;
      }
      goto L_08AF1000;
    }
L_08AF1000:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF1010u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF1010u) goto L_08AF1010;
    return;
L_08AF1010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AF106C;
      }
      goto L_08AF1034;
    }
L_08AF1034:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AF1050;
      }
      goto L_08AF103C;
    }
L_08AF103C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AF1050;
      }
      goto L_08AF1044;
    }
L_08AF1044:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08AF1050;
L_08AF1050:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF1060u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1050u, 0x08AEFCC4u>(ctx, &aot_mem) && ctx.pc == 0x08AF1060u) goto L_08AF1060;
    return;
L_08AF1060:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF106C;
L_08AF106C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF10DC;
    }
    goto L_08AF1074;
L_08AF1074:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF10B4;
      }
      goto L_08AF1084;
    }
L_08AF1084:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AF1094u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF1094u) goto L_08AF1094;
    return;
L_08AF1094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF1108;
      }
      goto L_08AF10B4;
    }
L_08AF10B4:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF10C4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF10C4u) goto L_08AF10C4;
    return;
L_08AF10C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF1108;
      }
      goto L_08AF10DC;
    }
L_08AF10DC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF10F8;
      }
      goto L_08AF10E4;
    }
L_08AF10E4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF10F8;
      }
      goto L_08AF10EC;
    }
L_08AF10EC:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF10F8;
L_08AF10F8:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AF1108u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1050u, 0x08AEFCC4u>(ctx, &aot_mem) && ctx.pc == 0x08AF1108u) goto L_08AF1108;
    return;
L_08AF1108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08AF1288;
      }
      goto L_08AF1114;
    }
L_08AF1114:
    ctx.gpr[16] = (ctx.gpr[30] - ctx.gpr[22]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08AF1288;
      }
      goto L_08AF1120;
    }
L_08AF1120:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF11EC;
      }
      goto L_08AF1130;
    }
L_08AF1130:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF11AC;
    }
    goto L_08AF1138;
L_08AF1138:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF117C;
      }
      goto L_08AF1148;
    }
L_08AF1148:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AF1158u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF1158u) goto L_08AF1158;
    return;
L_08AF1158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF11DC;
      }
      goto L_08AF117C;
    }
L_08AF117C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF118Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF118Cu) goto L_08AF118C;
    return;
L_08AF118C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF11DC;
      }
      goto L_08AF11AC;
    }
L_08AF11AC:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF11C4;
    }
    goto L_08AF11B4;
L_08AF11B4:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF11C4;
    }
    goto L_08AF11BC;
L_08AF11BC:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AF11C4;
L_08AF11C4:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08AF11D4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1050u, 0x08AEFCC4u>(ctx, &aot_mem) && ctx.pc == 0x08AF11D4u) goto L_08AF11D4;
    return;
L_08AF11D4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF11DC;
L_08AF11DC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1130;
      }
      goto L_08AF11EC;
    }
L_08AF11EC:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF1258;
    }
    goto L_08AF11F4;
L_08AF11F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF1230;
      }
      goto L_08AF1204;
    }
L_08AF1204:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AF1214u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF1214u) goto L_08AF1214;
    return;
L_08AF1214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF1284;
      }
      goto L_08AF1230;
    }
L_08AF1230:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF1240u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF1240u) goto L_08AF1240;
    return;
L_08AF1240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF1284;
      }
      goto L_08AF1258;
    }
L_08AF1258:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1274;
      }
      goto L_08AF1260;
    }
L_08AF1260:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1274;
      }
      goto L_08AF1268;
    }
L_08AF1268:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF1274;
L_08AF1274:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF1284u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1050u, 0x08AEFCC4u>(ctx, &aot_mem) && ctx.pc == 0x08AF1284u) goto L_08AF1284;
    return;
L_08AF1284:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08AF1288;
L_08AF1288:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
        goto L_08AF1294;
    }
    goto L_08AF1294;
L_08AF1294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1080u, 0x08AEFFA0u>(ctx, &aot_mem); return;
      }
      goto L_08AF12A4;
    }
L_08AF12A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    goto L_08AF12A8;
L_08AF12A8:
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF12C8;
      }
      goto L_08AF12B4;
    }
L_08AF12B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AF12C8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1050u, 0x08AEFCC4u>(ctx, &aot_mem) && ctx.pc == 0x08AF12C8u) goto L_08AF12C8;
    return;
L_08AF12C8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF12FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(15));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] & ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[29] = (ctx.gpr[29] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF1388;
      }
      goto L_08AF134C;
    }
L_08AF134C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1388;
      }
      goto L_08AF1354;
    }
L_08AF1354:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1388;
      }
      goto L_08AF135C;
    }
L_08AF135C:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[13] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[11] = (0u | 2u);
    ctx.gpr[2] = (0u | 101u);
    ctx.gpr[3] = (0u | 69u);
    ctx.gpr[12] = (0u | 46u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[14] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[6] < ctx.gpr[13] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF13AC;
      }
      goto L_08AF1388;
    }
L_08AF1388:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[29] = (ctx.gpr[30] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF13AC:
    if (ctx.gpr[10] != 0u) {
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
        goto L_08AF13F4;
    }
    goto L_08AF13B4;
L_08AF13B4:
    if (ctx.gpr[9] == ctx.gpr[11]) {
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
        goto L_08AF13F4;
    }
    goto L_08AF13BC;
L_08AF13BC:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[10] == ctx.gpr[2]) {
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
        goto L_08AF13E8;
    }
    goto L_08AF13C8;
L_08AF13C8:
    if (ctx.gpr[10] == ctx.gpr[3]) {
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
        goto L_08AF13E8;
    }
    goto L_08AF13D0;
L_08AF13D0:
    if (ctx.gpr[10] != ctx.gpr[12]) {
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
        goto L_08AF13EC;
    }
    goto L_08AF13D8;
L_08AF13D8:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[14] = (ctx.gpr[13] | 0u);
      if (branch_taken) {
          goto L_08AF13E8;
      }
      goto L_08AF13E0;
    }
L_08AF13E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF13E8;
      }
      goto L_08AF13E8;
    }
L_08AF13E8:
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
    goto L_08AF13EC;
L_08AF13EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[6] < ctx.gpr[13] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF13AC;
      }
      goto L_08AF13F4;
    }
L_08AF13F4:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(20), ctx.gpr[14]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[11];
    ctx.gpr[10] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF1414;
      }
      goto L_08AF1404;
    }
L_08AF1404:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AF1438;
      }
      goto L_08AF140C;
    }
L_08AF140C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
      if (branch_taken) {
          goto L_08AF1490;
      }
      goto L_08AF1414;
    }
L_08AF1414:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    ctx.gpr[29] = (ctx.gpr[30] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF1438:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20)));
    ctx.gpr[11] = (0u | 3u);
    ctx.gpr[2] = (0u | 44u);
    goto L_08AF1444;
L_08AF1444:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[10] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF147C;
      }
      goto L_08AF1454;
    }
L_08AF1454:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[11]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[9] = (ctx.hi);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_08AF147C;
    }
    goto L_08AF1464;
L_08AF1464:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_08AF147C;
    }
    goto L_08AF146C;
L_08AF146C:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08AF147C;
L_08AF147C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AF1444;
      }
      goto L_08AF148C;
    }
L_08AF148C:
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    goto L_08AF1490;
L_08AF1490:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08AF14A4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF14A4u) goto L_08AF14A4;
    return;
L_08AF14A4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[29] = (ctx.gpr[30] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF14CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AF1524;
      }
      goto L_08AF1504;
    }
L_08AF1504:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AF15D0;
      }
      goto L_08AF1514;
    }
L_08AF1514:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-6528));
    ctx.gpr[20] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF1574;
      }
      goto L_08AF1524;
    }
L_08AF1524:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6528));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23064)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AF1540u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 547u, 0x08AEA64Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1540u) goto L_08AF1540;
    return;
L_08AF1540:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-23064), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-23060), ctx.gpr[17]);
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
L_08AF1574:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_08AF1578;
L_08AF1578:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23060)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23060)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23064)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-23060), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-23064), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF15C0;
      }
      goto L_08AF15A4;
    }
L_08AF15A4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AF15B4u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 547u, 0x08AEA64Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF15B4u) goto L_08AF15B4;
    return;
L_08AF15B4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-23060), ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-23064), 0u);
      if (branch_taken) {
          goto L_08AF15FC;
      }
      goto L_08AF15C0;
    }
L_08AF15C0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF1578;
      }
      goto L_08AF15D0;
    }
L_08AF15D0:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_08AF15FC:
    ctx.gpr[2] = (0u | 0u);
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
L_08AF1628:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-23056));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23040));
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2596));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2616));
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2588));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2568));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[30]);
    ctx.gpr[23] = (0u | 42u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    goto L_08AF16B8;
L_08AF16B8:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[21] = (0u | 37u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[19] = (2230u << 16u);
    goto L_08AF16C8;
L_08AF16C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24164)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23024)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(34));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF16E4u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 256u, 0x08AECD18u>(ctx, &aot_mem) && ctx.pc == 0x08AF16E4u) goto L_08AF16E4;
    return;
L_08AF16E4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[16]) <= 0) {
    ctx.gpr[19] = (ctx.gpr[17] - ctx.gpr[20]);
        goto L_08AF1708;
    }
    goto L_08AF16F0;
L_08AF16F0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AF16C8;
      }
      goto L_08AF16FC;
    }
L_08AF16FC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[17] - ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AF1708;
      }
      goto L_08AF1708;
    }
L_08AF1708:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF17C4;
      }
      goto L_08AF1714;
    }
L_08AF1714:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[6] & 512u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF1788;
    }
    goto L_08AF1724;
L_08AF1724:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF1760;
      }
      goto L_08AF1734;
    }
L_08AF1734:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AF1744u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF1744u) goto L_08AF1744;
    return;
L_08AF1744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF17B8;
      }
      goto L_08AF1760;
    }
L_08AF1760:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF1770u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF1770u) goto L_08AF1770;
    return;
L_08AF1770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF17B8;
      }
      goto L_08AF1788;
    }
L_08AF1788:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF17A8;
      }
      goto L_08AF1790;
    }
L_08AF1790:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF17A8;
      }
      goto L_08AF1798;
    }
L_08AF1798:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF17A8;
L_08AF17A8:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AF17B8u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF14CC;
L_08AF17B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    goto L_08AF17C4;
L_08AF17C4:
    if (static_cast<std::int32_t>(ctx.gpr[16]) <= 0) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
        goto L_08AF27A8;
    }
    goto L_08AF17CC;
L_08AF17CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF17EC;
      }
      goto L_08AF17D8;
    }
L_08AF17D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
        goto L_08AF27A8;
    }
    goto L_08AF17E8;
L_08AF17E8:
    ctx.gpr[4] = (0u | 0u);
    goto L_08AF17EC;
L_08AF17EC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AF1808;
L_08AF1808:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
    goto L_08AF1818;
L_08AF1818:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1EB8;
      }
      goto L_08AF1820;
    }
L_08AF1820:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-2536)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF1838:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF1808;
      }
      goto L_08AF1844;
    }
L_08AF1844:
    ctx.gpr[4] = (0u | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF1808;
      }
      goto L_08AF1850;
    }
L_08AF1850:
    ctx.gpr[20] = (ctx.gpr[20] | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF1808;
      }
      goto L_08AF185C;
    }
L_08AF185C:
    ctx.gpr[20] = (ctx.gpr[20] | 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF1808;
      }
      goto L_08AF1868;
    }
L_08AF1868:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) >= 0;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF1808;
      }
      goto L_08AF1878;
    }
L_08AF1878:
    ctx.gpr[22] = (0u - ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[20] | 4u);
      if (branch_taken) {
          goto L_08AF188C;
      }
      goto L_08AF1884;
    }
L_08AF1884:
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[20] | 4u);
    goto L_08AF188C;
L_08AF188C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1808;
      }
      goto L_08AF1894;
    }
L_08AF1894:
    ctx.gpr[4] = (0u | 43u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF1808;
      }
      goto L_08AF18A4;
    }
L_08AF18A4:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[23];
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AF18D0;
      }
      goto L_08AF18B4;
    }
L_08AF18B4:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08AF18C8;
    }
    goto L_08AF18C8;
L_08AF18C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1808;
      }
      goto L_08AF18D0;
    }
L_08AF18D0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF190C;
      }
      goto L_08AF18E0;
    }
L_08AF18E0:
    ctx.gpr[4] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AF18E0;
      }
      goto L_08AF190C;
    }
L_08AF190C:
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08AF191C;
    }
    goto L_08AF191C;
L_08AF191C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1818;
      }
      goto L_08AF1924;
    }
L_08AF1924:
    ctx.gpr[20] = (ctx.gpr[20] | 128u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF1808;
      }
      goto L_08AF1930;
    }
L_08AF1930:
    ctx.gpr[5] = (0u | 0u);
    goto L_08AF1934;
L_08AF1934:
    ctx.gpr[4] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AF1934;
      }
      goto L_08AF1960;
    }
L_08AF1960:
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF1818;
      }
      goto L_08AF1970;
    }
L_08AF1970:
    ctx.gpr[20] = (ctx.gpr[20] | 64u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF1808;
      }
      goto L_08AF197C;
    }
L_08AF197C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 108u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF199C;
      }
      goto L_08AF198C;
    }
L_08AF198C:
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] | 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF1808;
      }
      goto L_08AF199C;
    }
L_08AF199C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
      if (branch_taken) {
          goto L_08AF1808;
      }
      goto L_08AF19A4;
    }
L_08AF19A4:
    ctx.gpr[20] = (ctx.gpr[20] | 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF1808;
      }
      goto L_08AF19B0;
    }
L_08AF19B0:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[20] & 132u);
    ctx.gpr[8] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AF1EF0;
      }
      goto L_08AF19F0;
    }
L_08AF19F0:
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[20] & 32u);
      if (branch_taken) {
          goto L_08AF1A08;
      }
      goto L_08AF1A00;
    }
L_08AF1A00:
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[20] & 32u);
    goto L_08AF1A08;
L_08AF1A08:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
      if (branch_taken) {
          goto L_08AF1A1C;
      }
      goto L_08AF1A10;
    }
L_08AF1A10:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1A54;
      }
      goto L_08AF1A1C;
    }
L_08AF1A1C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AF1A30;
      }
      goto L_08AF1A24;
    }
L_08AF1A24:
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
      if (branch_taken) {
          goto L_08AF1A50;
      }
      goto L_08AF1A30;
    }
L_08AF1A30:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1A4C;
      }
      goto L_08AF1A38;
    }
L_08AF1A38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
      if (branch_taken) {
          goto L_08AF1A50;
      }
      goto L_08AF1A4C;
    }
L_08AF1A4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    goto L_08AF1A50;
L_08AF1A50:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08AF1A54;
L_08AF1A54:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[31] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF1A6C;
      }
      goto L_08AF1A60;
    }
L_08AF1A60:
    ctx.gpr[4] = (0u | 45u);
    ctx.gpr[5] = (0u - ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AF1A6C;
L_08AF1A6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF1D1C;
      }
      goto L_08AF1A74;
    }
L_08AF1A74:
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[20] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
      if (branch_taken) {
          goto L_08AF1A98;
      }
      goto L_08AF1A84;
    }
L_08AF1A84:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF16B8;
      }
      goto L_08AF1A98;
    }
L_08AF1A98:
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AF1AB8;
      }
      goto L_08AF1AA4;
    }
L_08AF1AA4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF16B8;
      }
      goto L_08AF1AB8;
    }
L_08AF1AB8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
        goto L_08AF1AD4;
    }
    goto L_08AF1AC0;
L_08AF1AC0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF16B8;
      }
      goto L_08AF1AD4;
    }
L_08AF1AD4:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF16B8;
      }
      goto L_08AF1AE4;
    }
L_08AF1AE4:
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[20] & 32u);
      if (branch_taken) {
          goto L_08AF1AFC;
      }
      goto L_08AF1AF4;
    }
L_08AF1AF4:
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[20] & 32u);
    goto L_08AF1AFC;
L_08AF1AFC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
      if (branch_taken) {
          goto L_08AF1B10;
      }
      goto L_08AF1B04;
    }
L_08AF1B04:
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
      if (branch_taken) {
          goto L_08AF1B40;
      }
      goto L_08AF1B10;
    }
L_08AF1B10:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AF1B24;
      }
      goto L_08AF1B18;
    }
L_08AF1B18:
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
      if (branch_taken) {
          goto L_08AF1B40;
      }
      goto L_08AF1B24;
    }
L_08AF1B24:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1B3C;
      }
      goto L_08AF1B2C;
    }
L_08AF1B2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_08AF1B40;
      }
      goto L_08AF1B3C;
    }
L_08AF1B3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    goto L_08AF1B40;
L_08AF1B40:
    ctx.gpr[31] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF1D18;
      }
      goto L_08AF1B4C;
    }
L_08AF1B4C:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0u | 2u);
    ctx.gpr[20] = (ctx.gpr[20] | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[16] = (0u | 120u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF1D18;
      }
      goto L_08AF1B70;
    }
L_08AF1B70:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[20] & 132u);
    ctx.gpr[5] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_08AF1B90;
    }
    goto L_08AF1B90;
L_08AF1B90:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08AF1BE0;
      }
      goto L_08AF1B98;
    }
L_08AF1B98:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AF1BA4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 380u, 0x08AED540u>(ctx, &aot_mem) && ctx.pc == 0x08AF1BA4u) goto L_08AF1BA4;
    return;
L_08AF1BA4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08AF1BD4;
      }
      goto L_08AF1BB8;
    }
L_08AF1BB8:
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[21]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AF1BFC;
      }
      goto L_08AF1BC8;
    }
L_08AF1BC8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AF1BFC;
      }
      goto L_08AF1BD4;
    }
L_08AF1BD4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AF1BFC;
      }
      goto L_08AF1BE0;
    }
L_08AF1BE0:
    ctx.gpr[31] = (0x08AF1BE8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08AF1BE8u) goto L_08AF1BE8;
    return;
L_08AF1BE8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    goto L_08AF1BFC;
L_08AF1BFC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[7]) < 0 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF1EF0;
      }
      goto L_08AF1C10;
    }
L_08AF1C10:
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[20] & 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08AF1C30;
      }
      goto L_08AF1C24;
    }
L_08AF1C24:
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[20] & 32u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    goto L_08AF1C30;
L_08AF1C30:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
      if (branch_taken) {
          goto L_08AF1C44;
      }
      goto L_08AF1C38;
    }
L_08AF1C38:
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
      if (branch_taken) {
          goto L_08AF1C74;
      }
      goto L_08AF1C44;
    }
L_08AF1C44:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AF1C58;
      }
      goto L_08AF1C4C;
    }
L_08AF1C4C:
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
      if (branch_taken) {
          goto L_08AF1C74;
      }
      goto L_08AF1C58;
    }
L_08AF1C58:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1C70;
      }
      goto L_08AF1C60;
    }
L_08AF1C60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_08AF1C74;
      }
      goto L_08AF1C70;
    }
L_08AF1C70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    goto L_08AF1C74;
L_08AF1C74:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
    ctx.gpr[31] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF1D18;
      }
      goto L_08AF1C84;
    }
L_08AF1C84:
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[20] & 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[20] & 1u);
      if (branch_taken) {
          goto L_08AF1CA8;
      }
      goto L_08AF1C98;
    }
L_08AF1C98:
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[20] & 32u);
    ctx.gpr[7] = (ctx.gpr[20] & 1u);
    goto L_08AF1CA8;
L_08AF1CA8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
      if (branch_taken) {
          goto L_08AF1CBC;
      }
      goto L_08AF1CB0;
    }
L_08AF1CB0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1CF0;
      }
      goto L_08AF1CBC;
    }
L_08AF1CBC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AF1CD0;
      }
      goto L_08AF1CC4;
    }
L_08AF1CC4:
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
      if (branch_taken) {
          goto L_08AF1CEC;
      }
      goto L_08AF1CD0;
    }
L_08AF1CD0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF1CE8;
      }
      goto L_08AF1CD8;
    }
L_08AF1CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_08AF1CEC;
      }
      goto L_08AF1CE8;
    }
L_08AF1CE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    goto L_08AF1CEC;
L_08AF1CEC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08AF1CF0;
L_08AF1CF0:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
    ctx.gpr[31] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF1D18;
      }
      goto L_08AF1D08;
    }
L_08AF1D08:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
      if (branch_taken) {
          goto L_08AF1D18;
      }
      goto L_08AF1D10;
    }
L_08AF1D10:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
    ctx.gpr[20] = (ctx.gpr[20] | 2u);
    goto L_08AF1D18;
L_08AF1D18:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    goto L_08AF1D1C;
L_08AF1D1C:
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF1D30;
      }
      goto L_08AF1D28;
    }
L_08AF1D28:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[20] = (ctx.gpr[20] & ctx.gpr[4]);
    goto L_08AF1D30;
L_08AF1D30:
    ctx.gpr[4] = (ctx.gpr[20] & 132u);
    ctx.gpr[6] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AF1E50;
      }
      goto L_08AF1D48;
    }
L_08AF1D48:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[31]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[31]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF1D84;
      }
      goto L_08AF1D50;
    }
L_08AF1D50:
    if (static_cast<std::int32_t>(ctx.gpr[31]) >= 0) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
        goto L_08AF1DA0;
    }
    goto L_08AF1D58;
L_08AF1D58:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    goto L_08AF1D5C;
L_08AF1D5C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
    ctx.gpr[31] = (0x08AF1D68u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08AF1D68u) goto L_08AF1D68;
    return;
L_08AF1D68:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF1EF0;
      }
      goto L_08AF1D84;
    }
L_08AF1D84:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[31]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF1DE0;
      }
      goto L_08AF1D8C;
    }
L_08AF1D8C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
        goto L_08AF1D5C;
    }
    goto L_08AF1D94;
L_08AF1D94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 15u);
      if (branch_taken) {
          goto L_08AF1E38;
      }
      goto L_08AF1D9C;
    }
L_08AF1D9C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
    goto L_08AF1DA0;
L_08AF1DA0:
    ctx.gpr[6] = (ctx.gpr[20] & 1u);
    goto L_08AF1DA4;
L_08AF1DA4:
    ctx.gpr[4] = (ctx.gpr[5] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 3u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF1DA4;
      }
      goto L_08AF1DBC;
    }
L_08AF1DBC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08AF1E50;
      }
      goto L_08AF1DC4;
    }
L_08AF1DC4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 48u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
        goto L_08AF1E54;
    }
    goto L_08AF1DD4;
L_08AF1DD4:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AF1E50;
      }
      goto L_08AF1DE0;
    }
L_08AF1DE0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (0u | 10u);
      if (branch_taken) {
          goto L_08AF1E20;
      }
      goto L_08AF1DF0;
    }
L_08AF1DF0:
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1DF0;
      }
      goto L_08AF1E20;
    }
L_08AF1E20:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08AF1E50;
      }
      goto L_08AF1E34;
    }
L_08AF1E34:
    ctx.gpr[4] = (ctx.gpr[5] & 15u);
    goto L_08AF1E38;
L_08AF1E38:
    ctx.gpr[4] = (ctx.gpr[15] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF1E34;
      }
      goto L_08AF1E50;
    }
L_08AF1E50:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
    goto L_08AF1E54;
L_08AF1E54:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[31] != ctx.gpr[4];
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08AF1E9C;
      }
      goto L_08AF1E60;
    }
L_08AF1E60:
    ctx.gpr[4] = (ctx.gpr[20] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[9] - ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AF1EA0;
      }
      goto L_08AF1E6C;
    }
L_08AF1E6C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AF1E80u);
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    goto L_08AF12FC;
L_08AF1E80:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF1EF0;
      }
      goto L_08AF1E9C;
    }
L_08AF1E9C:
    ctx.gpr[7] = (ctx.gpr[9] - ctx.gpr[21]);
    goto L_08AF1EA0;
L_08AF1EA0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF1EF0;
      }
      goto L_08AF1EB8;
    }
L_08AF1EB8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08AF27A4;
      }
      goto L_08AF1EC0;
    }
L_08AF1EC0:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[20] & 132u);
    ctx.gpr[8] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[8]);
    goto L_08AF1EF0;
L_08AF1EF0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
        goto L_08AF1EFC;
    }
    goto L_08AF1EFC;
L_08AF1EFC:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08AF1F0C;
      }
      goto L_08AF1F04;
    }
L_08AF1F04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF1F1C;
      }
      goto L_08AF1F0C;
    }
L_08AF1F0C:
    ctx.gpr[4] = (ctx.gpr[20] & 2u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
        goto L_08AF1F20;
    }
    goto L_08AF1F18;
L_08AF1F18:
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    goto L_08AF1F1C;
L_08AF1F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    goto L_08AF1F20;
L_08AF1F20:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AF20BC;
      }
      goto L_08AF1F28;
    }
L_08AF1F28:
    ctx.gpr[19] = (ctx.gpr[22] - ctx.gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AF20BC;
      }
      goto L_08AF1F34;
    }
L_08AF1F34:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1FFC;
      }
      goto L_08AF1F40;
    }
L_08AF1F40:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF1FBC;
    }
    goto L_08AF1F48;
L_08AF1F48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF1F8C;
      }
      goto L_08AF1F58;
    }
L_08AF1F58:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08AF1F68u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF1F68u) goto L_08AF1F68;
    return;
L_08AF1F68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF1FEC;
      }
      goto L_08AF1F8C;
    }
L_08AF1F8C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF1F9Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF1F9Cu) goto L_08AF1F9C;
    return;
L_08AF1F9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF1FEC;
      }
      goto L_08AF1FBC;
    }
L_08AF1FBC:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF1FD4;
    }
    goto L_08AF1FC4;
L_08AF1FC4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF1FD0;
      }
      goto L_08AF1FCC;
    }
L_08AF1FCC:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AF1FD0;
L_08AF1FD0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AF1FD4;
L_08AF1FD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08AF1FE4u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF14CC;
L_08AF1FE4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF1FEC;
L_08AF1FEC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1F40;
      }
      goto L_08AF1FFC;
    }
L_08AF1FFC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_08AF207C;
      }
      goto L_08AF2004;
    }
L_08AF2004:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF204C;
      }
      goto L_08AF2014;
    }
L_08AF2014:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08AF2024u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF2024u) goto L_08AF2024;
    return;
L_08AF2024:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[19]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_08AF20BC;
      }
      goto L_08AF204C;
    }
L_08AF204C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF2058u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF2058u) goto L_08AF2058;
    return;
L_08AF2058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_08AF20BC;
      }
      goto L_08AF207C;
    }
L_08AF207C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF20A0;
      }
      goto L_08AF2088;
    }
L_08AF2088:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF20A0;
      }
      goto L_08AF2090;
    }
L_08AF2090:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF20A0;
L_08AF20A0:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF20B0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF14CC;
L_08AF20B0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF20BC;
L_08AF20BC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AF2180;
      }
      goto L_08AF20CC;
    }
L_08AF20CC:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF2144;
    }
    goto L_08AF20D4;
L_08AF20D4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF2118;
      }
      goto L_08AF20E4;
    }
L_08AF20E4:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AF20F4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF20F4u) goto L_08AF20F4;
    return;
L_08AF20F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF2244;
      }
      goto L_08AF2118;
    }
L_08AF2118:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF2124u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF2124u) goto L_08AF2124;
    return;
L_08AF2124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF2244;
      }
      goto L_08AF2144;
    }
L_08AF2144:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF2164;
      }
      goto L_08AF214C;
    }
L_08AF214C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF2164;
      }
      goto L_08AF2154;
    }
L_08AF2154:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF2164;
L_08AF2164:
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AF2174u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF14CC;
L_08AF2174:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF2244;
      }
      goto L_08AF2180;
    }
L_08AF2180:
    ctx.gpr[4] = (ctx.gpr[20] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 48u);
      if (branch_taken) {
          goto L_08AF2244;
      }
      goto L_08AF218C;
    }
L_08AF218C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08AF2208;
      }
      goto L_08AF2198;
    }
L_08AF2198:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF21DC;
      }
      goto L_08AF21A8;
    }
L_08AF21A8:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08AF21B8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF21B8u) goto L_08AF21B8;
    return;
L_08AF21B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF2244;
      }
      goto L_08AF21DC;
    }
L_08AF21DC:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF21E8u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF21E8u) goto L_08AF21E8;
    return;
L_08AF21E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF2244;
      }
      goto L_08AF2208;
    }
L_08AF2208:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF222C;
      }
      goto L_08AF2214;
    }
L_08AF2214:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF222C;
      }
      goto L_08AF221C;
    }
L_08AF221C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF222C;
L_08AF222C:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08AF223Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF14CC;
L_08AF223C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF2244;
L_08AF2244:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF23D4;
      }
      goto L_08AF2254;
    }
L_08AF2254:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (ctx.gpr[22] - ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF23D4;
      }
      goto L_08AF2264;
    }
L_08AF2264:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF2328;
      }
      goto L_08AF226C;
    }
L_08AF226C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF22E8;
    }
    goto L_08AF2274;
L_08AF2274:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF22B8;
      }
      goto L_08AF2284;
    }
L_08AF2284:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF2294u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF2294u) goto L_08AF2294;
    return;
L_08AF2294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF2318;
      }
      goto L_08AF22B8;
    }
L_08AF22B8:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF22C8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF22C8u) goto L_08AF22C8;
    return;
L_08AF22C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF2318;
      }
      goto L_08AF22E8;
    }
L_08AF22E8:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF2300;
    }
    goto L_08AF22F0;
L_08AF22F0:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF2300;
    }
    goto L_08AF22F8;
L_08AF22F8:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AF2300;
L_08AF2300:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08AF2310u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF14CC;
L_08AF2310:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF2318;
L_08AF2318:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF226C;
      }
      goto L_08AF2328;
    }
L_08AF2328:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF23A0;
    }
    goto L_08AF2330;
L_08AF2330:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF2374;
      }
      goto L_08AF2340;
    }
L_08AF2340:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF2350u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF2350u) goto L_08AF2350;
    return;
L_08AF2350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF23D4;
      }
      goto L_08AF2374;
    }
L_08AF2374:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF2380u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF2380u) goto L_08AF2380;
    return;
L_08AF2380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF23D4;
      }
      goto L_08AF23A0;
    }
L_08AF23A0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF23BC;
      }
      goto L_08AF23A8;
    }
L_08AF23A8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF23BC;
      }
      goto L_08AF23B0;
    }
L_08AF23B0:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF23BC;
L_08AF23BC:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF23CCu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF14CC;
L_08AF23CC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF23D4;
L_08AF23D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF2564;
      }
      goto L_08AF23E8;
    }
L_08AF23E8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF24AC;
      }
      goto L_08AF23F0;
    }
L_08AF23F0:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF246C;
    }
    goto L_08AF23F8;
L_08AF23F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF243C;
      }
      goto L_08AF2408;
    }
L_08AF2408:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF2418u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF2418u) goto L_08AF2418;
    return;
L_08AF2418:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF249C;
      }
      goto L_08AF243C;
    }
L_08AF243C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF244Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF244Cu) goto L_08AF244C;
    return;
L_08AF244C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF249C;
      }
      goto L_08AF246C;
    }
L_08AF246C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF2484;
    }
    goto L_08AF2474;
L_08AF2474:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF2484;
    }
    goto L_08AF247C;
L_08AF247C:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AF2484;
L_08AF2484:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08AF2494u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF14CC;
L_08AF2494:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF249C;
L_08AF249C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF23F0;
      }
      goto L_08AF24AC;
    }
L_08AF24AC:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF252C;
    }
    goto L_08AF24B4;
L_08AF24B4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF24FC;
      }
      goto L_08AF24C4;
    }
L_08AF24C4:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF24D4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF24D4u) goto L_08AF24D4;
    return;
L_08AF24D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AF2564;
      }
      goto L_08AF24FC;
    }
L_08AF24FC:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF2508u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF2508u) goto L_08AF2508;
    return;
L_08AF2508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AF2564;
      }
      goto L_08AF252C;
    }
L_08AF252C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AF2548;
      }
      goto L_08AF2534;
    }
L_08AF2534:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AF2548;
      }
      goto L_08AF253C;
    }
L_08AF253C:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08AF2548;
L_08AF2548:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF2558u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF14CC;
L_08AF2558:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF2564;
L_08AF2564:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF25D4;
    }
    goto L_08AF256C;
L_08AF256C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF25AC;
      }
      goto L_08AF257C;
    }
L_08AF257C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AF258Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF258Cu) goto L_08AF258C;
    return;
L_08AF258C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF2600;
      }
      goto L_08AF25AC;
    }
L_08AF25AC:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF25BCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF25BCu) goto L_08AF25BC;
    return;
L_08AF25BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF2600;
      }
      goto L_08AF25D4;
    }
L_08AF25D4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF25F0;
      }
      goto L_08AF25DC;
    }
L_08AF25DC:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF25F0;
      }
      goto L_08AF25E4;
    }
L_08AF25E4:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF25F0;
L_08AF25F0:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AF2600u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF14CC;
L_08AF2600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
        goto L_08AF2788;
    }
    goto L_08AF260C;
L_08AF260C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (ctx.gpr[22] - ctx.gpr[16]);
    if (static_cast<std::int32_t>(ctx.gpr[16]) <= 0) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
        goto L_08AF2788;
    }
    goto L_08AF261C;
L_08AF261C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_08AF26EC;
      }
      goto L_08AF2630;
    }
L_08AF2630:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF26AC;
    }
    goto L_08AF2638;
L_08AF2638:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF267C;
      }
      goto L_08AF2648;
    }
L_08AF2648:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF2658u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF2658u) goto L_08AF2658;
    return;
L_08AF2658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF26DC;
      }
      goto L_08AF267C;
    }
L_08AF267C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF268Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF268Cu) goto L_08AF268C;
    return;
L_08AF268C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AF26DC;
      }
      goto L_08AF26AC;
    }
L_08AF26AC:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF26C4;
    }
    goto L_08AF26B4;
L_08AF26B4:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF26C4;
    }
    goto L_08AF26BC;
L_08AF26BC:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AF26C4;
L_08AF26C4:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08AF26D4u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF14CC;
L_08AF26D4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AF26DC;
L_08AF26DC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF2630;
      }
      goto L_08AF26EC;
    }
L_08AF26EC:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AF2758;
    }
    goto L_08AF26F4;
L_08AF26F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF2730;
      }
      goto L_08AF2704;
    }
L_08AF2704:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF2714u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF2714u) goto L_08AF2714;
    return;
L_08AF2714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF2784;
      }
      goto L_08AF2730;
    }
L_08AF2730:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF2740u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF2740u) goto L_08AF2740;
    return;
L_08AF2740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF2784;
      }
      goto L_08AF2758;
    }
L_08AF2758:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF2774;
      }
      goto L_08AF2760;
    }
L_08AF2760:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF2774;
      }
      goto L_08AF2768;
    }
L_08AF2768:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AF2774;
L_08AF2774:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF2784u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF14CC;
L_08AF2784:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    goto L_08AF2788;
L_08AF2788:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
        goto L_08AF2794;
    }
    goto L_08AF2794;
L_08AF2794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF16B8;
      }
      goto L_08AF27A4;
    }
L_08AF27A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    goto L_08AF27A8;
L_08AF27A8:
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF27C8;
      }
      goto L_08AF27B4;
    }
L_08AF27B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AF27C8u);
    ctx.gpr[7] = (0u | 1u);
    goto L_08AF14CC;
L_08AF27C8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF27FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF2A9C;
      }
      goto L_08AF280C;
    }
L_08AF280C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AF2818u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 38u, 0x08AF4298u>(ctx, &aot_mem) && ctx.pc == 0x08AF2818u) goto L_08AF2818;
    return;
L_08AF2818:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-8));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[10] & ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22488));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (ctx.gpr[11] & ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[10] & 1u);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[2];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08AF28C0;
      }
      goto L_08AF2854;
    }
L_08AF2854:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AF2878;
      }
      goto L_08AF285C;
    }
L_08AF285C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    goto L_08AF2878;
L_08AF2878:
    ctx.gpr[6] = (ctx.gpr[7] | 1u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-21456)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF28AC;
      }
      goto L_08AF2898;
    }
L_08AF2898:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x08AF28A8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21452)));
    goto L_08AF2AA8;
L_08AF28A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08AF28AC;
L_08AF28AC:
    ctx.gpr[31] = (0x08AF28B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 39u, 0x08AF42A0u>(ctx, &aot_mem) && ctx.pc == 0x08AF28B4u) goto L_08AF28B4;
    return;
L_08AF28B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF28C0:
    ctx.gpr[2] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF28FC;
      }
      goto L_08AF28D0;
    }
L_08AF28D0:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[3]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[12];
    ctx.gpr[7] = (ctx.gpr[3] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AF28F0;
      }
      goto L_08AF28E8;
    }
L_08AF28E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF28FC;
      }
      goto L_08AF28F0;
    }
L_08AF28F0:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08AF28FC;
L_08AF28FC:
    ctx.gpr[2] = (ctx.gpr[9] + ctx.gpr[11]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] & 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[9] = (ctx.gpr[7] | 1u);
        goto L_08AF2950;
    }
    goto L_08AF2910;
L_08AF2910:
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AF2940;
      }
      goto L_08AF291C;
    }
L_08AF291C:
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    if (ctx.gpr[11] != ctx.gpr[2]) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
        goto L_08AF2944;
    }
    goto L_08AF2928;
L_08AF2928:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[10] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF294C;
      }
      goto L_08AF2940;
    }
L_08AF2940:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    goto L_08AF2944;
L_08AF2944:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    goto L_08AF294C;
L_08AF294C:
    ctx.gpr[9] = (ctx.gpr[7] | 1u);
    goto L_08AF2950;
L_08AF2950:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AF2A94;
      }
      goto L_08AF2960;
    }
L_08AF2960:
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(512) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[7] >> 9u);
      if (branch_taken) {
          goto L_08AF29B4;
      }
      goto L_08AF296C;
    }
L_08AF296C:
    ctx.gpr[6] = (ctx.gpr[7] >> 3u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[10] << (ctx.gpr[7] & 31u));
    ctx.gpr[7] = (ctx.gpr[9] | ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AF2A94;
      }
      goto L_08AF29B4;
    }
L_08AF29B4:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[10] = (ctx.gpr[9] < static_cast<std::uint32_t>(5) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF29C4;
      }
      goto L_08AF29BC;
    }
L_08AF29BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[7] >> 3u);
      if (branch_taken) {
          goto L_08AF2A24;
      }
      goto L_08AF29C4;
    }
L_08AF29C4:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[9] < static_cast<std::uint32_t>(21) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF29D8;
      }
      goto L_08AF29CC;
    }
L_08AF29CC:
    ctx.gpr[9] = (ctx.gpr[7] >> 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08AF2A24;
      }
      goto L_08AF29D8;
    }
L_08AF29D8:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[9] < static_cast<std::uint32_t>(85) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF29E8;
      }
      goto L_08AF29E0;
    }
L_08AF29E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(91));
      if (branch_taken) {
          goto L_08AF2A24;
      }
      goto L_08AF29E8;
    }
L_08AF29E8:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[9] < static_cast<std::uint32_t>(341) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF29FC;
      }
      goto L_08AF29F0;
    }
L_08AF29F0:
    ctx.gpr[9] = (ctx.gpr[7] >> 12u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(110));
      if (branch_taken) {
          goto L_08AF2A24;
      }
      goto L_08AF29FC;
    }
L_08AF29FC:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08AF2A10;
      }
      goto L_08AF2A04;
    }
L_08AF2A04:
    ctx.gpr[9] = (ctx.gpr[7] >> 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(119));
      if (branch_taken) {
          goto L_08AF2A24;
      }
      goto L_08AF2A10;
    }
L_08AF2A10:
    ctx.gpr[10] = (ctx.gpr[10] < static_cast<std::uint32_t>(1365) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (0u | 126u);
      if (branch_taken) {
          goto L_08AF2A24;
      }
      goto L_08AF2A1C;
    }
L_08AF2A1C:
    ctx.gpr[9] = (ctx.gpr[7] >> 18u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(124));
    goto L_08AF2A24;
L_08AF2A24:
    ctx.gpr[11] = (ctx.gpr[9] << 3u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[5]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08AF2A60;
      }
      goto L_08AF2A38;
    }
L_08AF2A38:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[9] << (ctx.gpr[6] & 31u));
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AF2A84;
      }
      goto L_08AF2A60;
    }
L_08AF2A60:
    if (ctx.gpr[10] == ctx.gpr[11]) {
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
        goto L_08AF2A84;
    }
    goto L_08AF2A68;
L_08AF2A68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
        goto L_08AF2A84;
    }
    goto L_08AF2A7C;
L_08AF2A7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AF2A60;
      }
      goto L_08AF2A84;
    }
L_08AF2A84:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    goto L_08AF2A94;
L_08AF2A94:
    ctx.gpr[31] = (0x08AF2A9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 39u, 0x08AF42A0u>(ctx, &aot_mem) && ctx.pc == 0x08AF2A9Cu) goto L_08AF2A9C;
    return;
L_08AF2A9C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2AA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF2AD4u);
    ctx.gpr[20] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 38u, 0x08AF4298u>(ctx, &aot_mem) && ctx.pc == 0x08AF2AD4u) goto L_08AF2AD4;
    return;
L_08AF2AD4:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-22488));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[19] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4096));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[20]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[4] << 12u);
    ctx.gpr[18] = (0u + ctx.gpr[18]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4096 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AF2BE8;
      }
      goto L_08AF2B18;
    }
L_08AF2B18:
    ctx.gpr[31] = (0x08AF2B20u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 25u, 0x08AF41D0u>(ctx, &aot_mem) && ctx.pc == 0x08AF2B20u) goto L_08AF2B20;
    return;
L_08AF2B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[5] = (0u - ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AF2BBC;
      }
      goto L_08AF2B30;
    }
L_08AF2B30:
    ctx.gpr[31] = (0x08AF2B38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 25u, 0x08AF41D0u>(ctx, &aot_mem) && ctx.pc == 0x08AF2B38u) goto L_08AF2B38;
    return;
L_08AF2B38:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AF2B74;
      }
      goto L_08AF2B44;
    }
L_08AF2B44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF2B50u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 25u, 0x08AF41D0u>(ctx, &aot_mem) && ctx.pc == 0x08AF2B50u) goto L_08AF2B50;
    return;
L_08AF2B50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF2C14;
      }
      goto L_08AF2B68;
    }
L_08AF2B68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF2C2C;
      }
      goto L_08AF2B70;
    }
L_08AF2B70:
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[18]);
    goto L_08AF2B74;
L_08AF2B74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21436)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[18]);
    ctx.gpr[31] = (0x08AF2B98u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-21436), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 39u, 0x08AF42A0u>(ctx, &aot_mem) && ctx.pc == 0x08AF2B98u) goto L_08AF2B98;
    return;
L_08AF2B98:
    ctx.gpr[2] = (0u | 1u);
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
L_08AF2BBC:
    ctx.gpr[31] = (0x08AF2BC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 39u, 0x08AF42A0u>(ctx, &aot_mem) && ctx.pc == 0x08AF2BC4u) goto L_08AF2BC4;
    return;
L_08AF2BC4:
    ctx.gpr[2] = (0u | 0u);
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
L_08AF2BE8:
    ctx.gpr[31] = (0x08AF2BF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 39u, 0x08AF42A0u>(ctx, &aot_mem) && ctx.pc == 0x08AF2BF0u) goto L_08AF2BF0;
    return;
L_08AF2BF0:
    ctx.gpr[2] = (0u | 0u);
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
L_08AF2C14:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-21448)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-21436), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08AF2C2C;
L_08AF2C2C:
    ctx.gpr[31] = (0x08AF2C34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 39u, 0x08AF42A0u>(ctx, &aot_mem) && ctx.pc == 0x08AF2C34u) goto L_08AF2C34;
    return;
L_08AF2C34:
    ctx.gpr[2] = (0u | 0u);
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
L_08AF2C58:
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-25176));
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08AF2C6C;
L_08AF2C6C:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[8] = (ctx.gpr[3] | 0u);
      if (branch_taken) {
          goto L_08AF2C6C;
      }
      goto L_08AF2C88;
    }
L_08AF2C88:
    ctx.gpr[2] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[2];
    ctx.gpr[2] = (0u | 43u);
      if (branch_taken) {
          goto L_08AF2CA8;
      }
      goto L_08AF2C94;
    }
L_08AF2C94:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[3] | 0u);
      if (branch_taken) {
          goto L_08AF2CBC;
      }
      goto L_08AF2CA8;
    }
L_08AF2CA8:
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AF2CBC;
      }
      goto L_08AF2CB0;
    }
L_08AF2CB0:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[3] | 0u);
    goto L_08AF2CBC;
L_08AF2CBC:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 48u);
      if (branch_taken) {
          goto L_08AF2CD4;
      }
      goto L_08AF2CC4;
    }
L_08AF2CC4:
    ctx.gpr[2] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[2];
    ctx.gpr[14] = (ctx.gpr[10] + ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF2D04;
      }
      goto L_08AF2CD0;
    }
L_08AF2CD0:
    ctx.gpr[2] = (0u | 48u);
    goto L_08AF2CD4;
L_08AF2CD4:
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[2];
    ctx.gpr[14] = (ctx.gpr[10] + ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF2D04;
      }
      goto L_08AF2CDC;
    }
L_08AF2CDC:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[12] = (0u | 120u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[12];
    ctx.gpr[12] = (0u | 88u);
      if (branch_taken) {
          goto L_08AF2CF4;
      }
      goto L_08AF2CEC;
    }
L_08AF2CEC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[12];
    ctx.gpr[14] = (ctx.gpr[10] + ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF2D04;
      }
      goto L_08AF2CF4;
    }
L_08AF2CF4:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[8] = (ctx.gpr[3] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[14] = (ctx.gpr[10] + ctx.gpr[11]);
    goto L_08AF2D04;
L_08AF2D04:
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[15] = (ctx.gpr[14] & 4u);
      if (branch_taken) {
          goto L_08AF2D20;
      }
      goto L_08AF2D10;
    }
L_08AF2D10:
    ctx.gpr[7] = (0u | 10u);
    ctx.gpr[2] = (0u | 48u);
    if (ctx.gpr[11] == ctx.gpr[2]) {
    ctx.gpr[7] = (0u | 8u);
        goto L_08AF2D20;
    }
    goto L_08AF2D20;
L_08AF2D20:
    ctx.gpr[12] = (32768u << 16u);
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[12] = (32768u << 16u);
        goto L_08AF2D30;
    }
    goto L_08AF2D30;
L_08AF2D30:
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[13] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[12] = (ctx.lo);
    goto L_08AF2D50;
L_08AF2D50:
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.gpr[15] = (ctx.gpr[14] & 3u);
      if (branch_taken) {
          goto L_08AF2D64;
      }
      goto L_08AF2D58;
    }
L_08AF2D58:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-48));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF2D84;
      }
      goto L_08AF2D64;
    }
L_08AF2D64:
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.gpr[15] = (ctx.gpr[14] | 0u);
      if (branch_taken) {
          goto L_08AF2DDC;
      }
      goto L_08AF2D6C;
    }
L_08AF2D6C:
    ctx.gpr[14] = (0u | 87u);
    ctx.gpr[15] = (ctx.gpr[15] & 1u);
    if (ctx.gpr[15] != 0u) {
    ctx.gpr[14] = (0u | 55u);
        goto L_08AF2D7C;
    }
    goto L_08AF2D7C;
L_08AF2D7C:
    ctx.gpr[11] = (ctx.gpr[11] - ctx.gpr[14]);
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    goto L_08AF2D84;
L_08AF2D84:
    { const bool branch_taken = ctx.gpr[14] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF2DDC;
      }
      goto L_08AF2D8C;
    }
L_08AF2D8C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[2] = (ctx.gpr[12] < ctx.gpr[3] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF2DAC;
      }
      goto L_08AF2D94;
    }
L_08AF2D94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF2DAC;
      }
      goto L_08AF2D9C;
    }
L_08AF2D9C:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[12];
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF2DB4;
      }
      goto L_08AF2DA4;
    }
L_08AF2DA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF2DB4;
      }
      goto L_08AF2DAC;
    }
L_08AF2DAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF2DC4;
      }
      goto L_08AF2DB4;
    }
L_08AF2DB4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[3] = (ctx.lo);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[11]);
    goto L_08AF2DC4;
L_08AF2DC4:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[15] = (ctx.gpr[14] & 4u);
      if (branch_taken) {
          goto L_08AF2D50;
      }
      goto L_08AF2DDC;
    }
L_08AF2DDC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AF2E00;
      }
      goto L_08AF2DE4;
    }
L_08AF2DE4:
    ctx.gpr[3] = (32768u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[3] = (32768u << 16u);
        goto L_08AF2DF4;
    }
    goto L_08AF2DF4;
L_08AF2DF4:
    ctx.gpr[7] = (0u | 34u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AF2E0C;
      }
      goto L_08AF2E00;
    }
L_08AF2E00:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF2E0C;
      }
      goto L_08AF2E08;
    }
L_08AF2E08:
    ctx.gpr[3] = (0u - ctx.gpr[3]);
    goto L_08AF2E0C;
L_08AF2E0C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF2E20;
      }
      goto L_08AF2E14;
    }
L_08AF2E14:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
        goto L_08AF2E1C;
    }
    goto L_08AF2E1C;
L_08AF2E1C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AF2E20;
L_08AF2E20:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[3] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2E28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF2E48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24164)));
    goto L_08AF2C58;
L_08AF2E48:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2E54:
    ctx.gpr[2] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-23020));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2E60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF2E74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24164)));
    goto L_08AF2E54;
L_08AF2E74:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2E80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 20u));
    ctx.gpr[18] = (ctx.gpr[6] & 2047u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1023));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < 20 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF2FA4;
      }
      goto L_08AF2EC4;
    }
L_08AF2EC4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.gpr[4] = (16u << 16u);
      if (branch_taken) {
          goto L_08AF2F38;
      }
      goto L_08AF2ECC;
    }
L_08AF2ECC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22964)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22968)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF2EE4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61FCu>(ctx, &aot_mem) && ctx.pc == 0x08AF2EE4u) goto L_08AF2EE4;
    return;
L_08AF2EE4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22856)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF2EFCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 524u, 0x08AF6874u>(ctx, &aot_mem) && ctx.pc == 0x08AF2EFCu) goto L_08AF2EFC;
    return;
L_08AF2EFC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
        goto L_08AF30B0;
    }
    goto L_08AF2F04;
L_08AF2F04:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.gpr[4] = (32768u << 16u);
      if (branch_taken) {
          goto L_08AF2F18;
      }
      goto L_08AF2F0C;
    }
L_08AF2F0C:
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF30AC;
      }
      goto L_08AF2F18;
    }
L_08AF2F18:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
        goto L_08AF30B0;
    }
    goto L_08AF2F2C;
L_08AF2F2C:
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (49136u << 16u);
      if (branch_taken) {
          goto L_08AF30AC;
      }
      goto L_08AF2F38;
    }
L_08AF2F38:
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> (ctx.gpr[18] & 31u)));
    ctx.gpr[4] = (ctx.gpr[16] & ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF3050;
      }
      goto L_08AF2F50;
    }
L_08AF2F50:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22964)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22968)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF2F64u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61FCu>(ctx, &aot_mem) && ctx.pc == 0x08AF2F64u) goto L_08AF2F64;
    return;
L_08AF2F64:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22856)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF2F7Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 524u, 0x08AF6874u>(ctx, &aot_mem) && ctx.pc == 0x08AF2F7Cu) goto L_08AF2F7C;
    return;
L_08AF2F7C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
        goto L_08AF30B0;
    }
    goto L_08AF2F84;
L_08AF2F84:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[19] = (~(ctx.gpr[19] | 0u));
      if (branch_taken) {
          goto L_08AF2F98;
      }
      goto L_08AF2F8C;
    }
L_08AF2F8C:
    ctx.gpr[4] = (16u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> (ctx.gpr[18] & 31u)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08AF2F98;
L_08AF2F98:
    ctx.gpr[16] = (ctx.gpr[16] & ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF30AC;
      }
      goto L_08AF2FA4;
    }
L_08AF2FA4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 52 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-20));
      if (branch_taken) {
          goto L_08AF3000;
      }
      goto L_08AF2FB0;
    }
L_08AF2FB0:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (0u | 1024u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF2FDC;
      }
      goto L_08AF2FC0;
    }
L_08AF2FC0:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF2FD4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61FCu>(ctx, &aot_mem) && ctx.pc == 0x08AF2FD4u) goto L_08AF2FD4;
    return;
L_08AF2FD4:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AF2FDC;
L_08AF2FDC:
    ctx.gpr[3] = (ctx.gpr[5] | 0u);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
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
L_08AF3000:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[4] >> (ctx.gpr[19] & 31u));
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF3050;
      }
      goto L_08AF3014;
    }
L_08AF3014:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22964)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22968)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF3028u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61FCu>(ctx, &aot_mem) && ctx.pc == 0x08AF3028u) goto L_08AF3028;
    return;
L_08AF3028:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22856)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF3040u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 524u, 0x08AF6874u>(ctx, &aot_mem) && ctx.pc == 0x08AF3040u) goto L_08AF3040;
    return;
L_08AF3040:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AF306C;
      }
      goto L_08AF3048;
    }
L_08AF3048:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AF30B0;
      }
      goto L_08AF3050;
    }
L_08AF3050:
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
L_08AF306C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[19] = (~(ctx.gpr[19] | 0u));
      if (branch_taken) {
          goto L_08AF30A8;
      }
      goto L_08AF3074;
    }
L_08AF3074:
    ctx.gpr[4] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 52u);
      if (branch_taken) {
          goto L_08AF3088;
      }
      goto L_08AF3080;
    }
L_08AF3080:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF30A8;
      }
      goto L_08AF3088;
    }
L_08AF3088:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[18]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[6] << (ctx.gpr[4] & 31u));
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08AF30A8;
    }
    goto L_08AF30A8;
L_08AF30A8:
    ctx.gpr[17] = (ctx.gpr[17] & ctx.gpr[19]);
    goto L_08AF30AC;
L_08AF30AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    goto L_08AF30B0;
L_08AF30B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
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
L_08AF30D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (32768u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[12] = (32768u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[13] & ctx.gpr[12]);
    ctx.gpr[14] = (ctx.gpr[14] & ctx.gpr[8]);
    ctx.gpr[13] = (ctx.gpr[13] ^ ctx.gpr[12]);
    ctx.gpr[3] = (ctx.gpr[5] | 0u);
    ctx.gpr[15] = (ctx.gpr[14] | ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AF316C;
      }
      goto L_08AF3130;
    }
L_08AF3130:
    ctx.gpr[4] = (32752u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF316C;
      }
      goto L_08AF3140;
    }
L_08AF3140:
    ctx.gpr[4] = (ctx.gpr[11] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[4] = (ctx.gpr[14] | ctx.gpr[4]);
    ctx.gpr[5] = (32752u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF316C;
      }
      goto L_08AF315C;
    }
L_08AF315C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[14]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF31A0;
      }
      goto L_08AF3164;
    }
L_08AF3164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (16u << 16u);
      if (branch_taken) {
          goto L_08AF31BC;
      }
      goto L_08AF316C;
    }
L_08AF316C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF3180u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3180u) goto L_08AF3180;
    return;
L_08AF3180:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF3194u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 491u, 0x08AF6650u>(ctx, &aot_mem) && ctx.pc == 0x08AF3194u) goto L_08AF3194;
    return;
L_08AF3194:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF31A0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF3538;
      }
      goto L_08AF31A8;
    }
L_08AF31A8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3538;
      }
      goto L_08AF31B0;
    }
L_08AF31B0:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[11];
    ctx.gpr[4] = (ctx.gpr[12] >> 31u);
      if (branch_taken) {
          goto L_08AF31D4;
      }
      goto L_08AF31B8;
    }
L_08AF31B8:
    ctx.gpr[4] = (16u << 16u);
    goto L_08AF31BC;
L_08AF31BC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF31F8;
      }
      goto L_08AF31C8;
    }
L_08AF31C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 20u));
      if (branch_taken) {
          goto L_08AF3244;
      }
      goto L_08AF31D0;
    }
L_08AF31D0:
    ctx.gpr[4] = (ctx.gpr[12] >> 31u);
    goto L_08AF31D4;
L_08AF31D4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22952));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF31F8:
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[5] = (ctx.gpr[13] << 11u);
      if (branch_taken) {
          goto L_08AF3224;
      }
      goto L_08AF3200;
    }
L_08AF3200:
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1043));
      if (branch_taken) {
          goto L_08AF3248;
      }
      goto L_08AF320C;
    }
L_08AF320C:
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF320C;
      }
      goto L_08AF3218;
    }
L_08AF3218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF324C;
      }
      goto L_08AF3220;
    }
L_08AF3220:
    ctx.gpr[5] = (ctx.gpr[13] << 11u);
    goto L_08AF3224;
L_08AF3224:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1022));
      if (branch_taken) {
          goto L_08AF3248;
      }
      goto L_08AF322C;
    }
L_08AF322C:
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF322C;
      }
      goto L_08AF3238;
    }
L_08AF3238:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF324C;
      }
      goto L_08AF3240;
    }
L_08AF3240:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 20u));
    goto L_08AF3244;
L_08AF3244:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1023));
    goto L_08AF3248;
L_08AF3248:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_08AF324C;
L_08AF324C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 20u));
      if (branch_taken) {
          goto L_08AF32A0;
      }
      goto L_08AF3254;
    }
L_08AF3254:
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[7] = (ctx.gpr[14] << 11u);
      if (branch_taken) {
          goto L_08AF3280;
      }
      goto L_08AF325C;
    }
L_08AF325C:
    ctx.gpr[7] = (ctx.gpr[11] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1043));
      if (branch_taken) {
          goto L_08AF32A4;
      }
      goto L_08AF3268;
    }
L_08AF3268:
    ctx.gpr[7] = (ctx.gpr[7] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF3268;
      }
      goto L_08AF3274;
    }
L_08AF3274:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < -1022 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF32A8;
      }
      goto L_08AF327C;
    }
L_08AF327C:
    ctx.gpr[7] = (ctx.gpr[14] << 11u);
    goto L_08AF3280;
L_08AF3280:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1022));
      if (branch_taken) {
          goto L_08AF32A4;
      }
      goto L_08AF3288;
    }
L_08AF3288:
    ctx.gpr[7] = (ctx.gpr[7] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF3288;
      }
      goto L_08AF3294;
    }
L_08AF3294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < -1022 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF32A8;
      }
      goto L_08AF329C;
    }
L_08AF329C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 20u));
    goto L_08AF32A0;
L_08AF32A0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1023));
    goto L_08AF32A4;
L_08AF32A4:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < -1022 ? 1u : 0u);
    goto L_08AF32A8;
L_08AF32A8:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < -1022 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF32C4;
      }
      goto L_08AF32B0;
    }
L_08AF32B0:
    ctx.gpr[8] = (16u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[13] = (ctx.gpr[13] & ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (ctx.gpr[13] | ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF32FC;
      }
      goto L_08AF32C4;
    }
L_08AF32C4:
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1022));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (0u | 32u);
      if (branch_taken) {
          goto L_08AF32F0;
      }
      goto L_08AF32D8;
    }
L_08AF32D8:
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[8]);
    ctx.gpr[13] = (ctx.gpr[13] << (ctx.gpr[8] & 31u));
    ctx.gpr[9] = (ctx.gpr[10] >> (ctx.gpr[9] & 31u));
    ctx.gpr[13] = (ctx.gpr[13] | ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[10] << (ctx.gpr[8] & 31u));
      if (branch_taken) {
          goto L_08AF32FC;
      }
      goto L_08AF32F0;
    }
L_08AF32F0:
    ctx.gpr[13] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32));
    ctx.gpr[13] = (ctx.gpr[10] << (ctx.gpr[13] & 31u));
    ctx.gpr[10] = (0u | 0u);
    goto L_08AF32FC;
L_08AF32FC:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1022));
      if (branch_taken) {
          goto L_08AF3324;
      }
      goto L_08AF3304;
    }
L_08AF3304:
    ctx.gpr[8] = (16u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[14] = (ctx.gpr[14] & ctx.gpr[8]);
    ctx.gpr[14] = (ctx.gpr[14] | ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[13] - ctx.gpr[14]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[10] - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF3370;
      }
      goto L_08AF3324;
    }
L_08AF3324:
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[5]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (0u | 32u);
      if (branch_taken) {
          goto L_08AF3358;
      }
      goto L_08AF3334;
    }
L_08AF3334:
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[8]);
    ctx.gpr[14] = (ctx.gpr[14] << (ctx.gpr[8] & 31u));
    ctx.gpr[9] = (ctx.gpr[11] >> (ctx.gpr[9] & 31u));
    ctx.gpr[14] = (ctx.gpr[14] | ctx.gpr[9]);
    ctx.gpr[11] = (ctx.gpr[11] << (ctx.gpr[8] & 31u));
    ctx.gpr[8] = (ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[13] - ctx.gpr[14]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[10] - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF3370;
      }
      goto L_08AF3358;
    }
L_08AF3358:
    ctx.gpr[14] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32));
    ctx.gpr[14] = (ctx.gpr[11] << (ctx.gpr[14] & 31u));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[10] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[13] - ctx.gpr[14]);
    ctx.gpr[2] = (ctx.gpr[10] | 0u);
    goto L_08AF3370;
L_08AF3370:
    ctx.gpr[3] = (ctx.gpr[6] - ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[6] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF3414;
      }
      goto L_08AF337C;
    }
L_08AF337C:
    ctx.gpr[3] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
        goto L_08AF338C;
    }
    goto L_08AF338C;
L_08AF338C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    ctx.gpr[9] = (ctx.gpr[8] | ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF33B8;
      }
      goto L_08AF3394;
    }
L_08AF3394:
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[13]);
    ctx.gpr[8] = (ctx.gpr[10] >> 31u);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[13] - ctx.gpr[14]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[10] - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF3408;
      }
      goto L_08AF33B8;
    }
L_08AF33B8:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[13] = (ctx.gpr[8] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AF33E0;
      }
      goto L_08AF33C0;
    }
L_08AF33C0:
    ctx.gpr[8] = (ctx.gpr[2] >> 31u);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[8] = (ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[13] - ctx.gpr[14]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[10] - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF3408;
      }
      goto L_08AF33E0;
    }
L_08AF33E0:
    ctx.gpr[4] = (ctx.gpr[12] >> 31u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22952));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3408:
    ctx.gpr[15] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.gpr[6] = (ctx.gpr[3] | 0u);
      if (branch_taken) {
          goto L_08AF337C;
      }
      goto L_08AF3414;
    }
L_08AF3414:
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
        goto L_08AF3420;
    }
    goto L_08AF3420;
L_08AF3420:
    if (static_cast<std::int32_t>(ctx.gpr[6]) < 0) {
    ctx.gpr[6] = (ctx.gpr[13] | ctx.gpr[10]);
        goto L_08AF3434;
    }
    goto L_08AF3428;
L_08AF3428:
    ctx.gpr[13] = (ctx.gpr[6] | 0u);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[13] | ctx.gpr[10]);
    goto L_08AF3434;
L_08AF3434:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF344C;
      }
      goto L_08AF343C;
    }
L_08AF343C:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[13]);
        goto L_08AF3478;
    }
    goto L_08AF3444;
L_08AF3444:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3494;
      }
      goto L_08AF344C;
    }
L_08AF344C:
    ctx.gpr[4] = (ctx.gpr[12] >> 31u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22952));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3474:
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[13]);
    goto L_08AF3478;
L_08AF3478:
    ctx.gpr[6] = (ctx.gpr[10] >> 31u);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF3474;
      }
      goto L_08AF3490;
    }
L_08AF3490:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < -1022 ? 1u : 0u);
    goto L_08AF3494;
L_08AF3494:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1022));
        goto L_08AF34CC;
    }
    goto L_08AF349C;
L_08AF349C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1023));
    ctx.gpr[4] = (ctx.gpr[13] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 20u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF34CC:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF34FC;
      }
      goto L_08AF34DC;
    }
L_08AF34DC:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[13] << (ctx.gpr[4] & 31u));
    ctx.gpr[10] = (ctx.gpr[10] >> (ctx.gpr[5] & 31u));
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> (ctx.gpr[5] & 31u)));
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (ctx.gpr[13] | ctx.gpr[12]);
      if (branch_taken) {
          goto L_08AF3528;
      }
      goto L_08AF34FC;
    }
L_08AF34FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_08AF351C;
      }
      goto L_08AF3504;
    }
L_08AF3504:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[13] << (ctx.gpr[4] & 31u));
    ctx.gpr[10] = (ctx.gpr[10] >> (ctx.gpr[5] & 31u));
    ctx.gpr[10] = (ctx.gpr[4] | ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (ctx.gpr[12] | ctx.gpr[12]);
      if (branch_taken) {
          goto L_08AF3528;
      }
      goto L_08AF351C;
    }
L_08AF351C:
    ctx.gpr[10] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> (ctx.gpr[10] & 31u)));
    ctx.gpr[13] = (ctx.gpr[12] | ctx.gpr[12]);
    goto L_08AF3528;
L_08AF3528:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08AF3538;
L_08AF3538:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3544:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[18] = (16u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF3688;
      }
      goto L_08AF3598;
    }
L_08AF3598:
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[8] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF35F8;
      }
      goto L_08AF35B0;
    }
L_08AF35B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22816)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-22852)));
    ctx.gpr[31] = (0x08AF35C8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-22856)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 491u, 0x08AF6650u>(ctx, &aot_mem) && ctx.pc == 0x08AF35C8u) goto L_08AF35C8;
    return;
L_08AF35C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF35F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF363C;
      }
      goto L_08AF3600;
    }
L_08AF3600:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22916)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22920)));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-54));
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AF3624u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3624u) goto L_08AF3624;
    return;
L_08AF3624:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AF3688;
      }
      goto L_08AF363C;
    }
L_08AF363C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22852)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22856)));
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08AF3658u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 491u, 0x08AF6650u>(ctx, &aot_mem) && ctx.pc == 0x08AF3658u) goto L_08AF3658;
    return;
L_08AF3658:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3688:
    ctx.gpr[4] = (32752u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (16u << 16u);
      if (branch_taken) {
          goto L_08AF3724;
      }
      goto L_08AF3698;
    }
L_08AF3698:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 20u));
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (9u << 16u);
    ctx.gpr[16] = (ctx.gpr[8] & ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24420));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1023));
    ctx.gpr[4] = (16368u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 20u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22956)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22960)));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AF3704u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 441u, 0x08AF6264u>(ctx, &aot_mem) && ctx.pc == 0x08AF3704u) goto L_08AF3704;
    return;
L_08AF3704:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF3760;
      }
      goto L_08AF371C;
    }
L_08AF371C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF39B0;
      }
      goto L_08AF3724;
    }
L_08AF3724:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08AF3730u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61FCu>(ctx, &aot_mem) && ctx.pc == 0x08AF3730u) goto L_08AF3730;
    return;
L_08AF3730:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3760:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22852)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22856)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AF3780u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 524u, 0x08AF6874u>(ctx, &aot_mem) && ctx.pc == 0x08AF3780u) goto L_08AF3780;
    return;
L_08AF3780:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
        goto L_08AF3850;
    }
    goto L_08AF3788;
L_08AF3788:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[3] = (ctx.gpr[17] | 0u);
        goto L_08AF381C;
    }
    goto L_08AF3790;
L_08AF3790:
    ctx.gpr[31] = (0x08AF3798u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 528u, 0x08AF68D0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3798u) goto L_08AF3798;
    return;
L_08AF3798:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22932)));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22936)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF37B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF37B8u) goto L_08AF37B8;
    return;
L_08AF37B8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22924)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22928)));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF37D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF37D8u) goto L_08AF37D8;
    return;
L_08AF37D8:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF37ECu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61FCu>(ctx, &aot_mem) && ctx.pc == 0x08AF37ECu) goto L_08AF37EC;
    return;
L_08AF37EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF381C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3850:
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AF3860u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3860u) goto L_08AF3860;
    return;
L_08AF3860:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22804)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22808)));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AF3880u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3880u) goto L_08AF3880;
    return;
L_08AF3880:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22796)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22800)));
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF3898u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 441u, 0x08AF6264u>(ctx, &aot_mem) && ctx.pc == 0x08AF3898u) goto L_08AF3898;
    return;
L_08AF3898:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF38ACu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF38ACu) goto L_08AF38AC;
    return;
L_08AF38AC:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF38FC;
      }
      goto L_08AF38B8;
    }
L_08AF38B8:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AF38CCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 441u, 0x08AF6264u>(ctx, &aot_mem) && ctx.pc == 0x08AF38CCu) goto L_08AF38CC;
    return;
L_08AF38CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF38FC:
    ctx.gpr[31] = (0x08AF3904u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 528u, 0x08AF68D0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3904u) goto L_08AF3904;
    return;
L_08AF3904:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22932)));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22936)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF3924u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3924u) goto L_08AF3924;
    return;
L_08AF3924:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22924)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22928)));
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF3944u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3944u) goto L_08AF3944;
    return;
L_08AF3944:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF3958u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 441u, 0x08AF6264u>(ctx, &aot_mem) && ctx.pc == 0x08AF3958u) goto L_08AF3958;
    return;
L_08AF3958:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF396Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 441u, 0x08AF6264u>(ctx, &aot_mem) && ctx.pc == 0x08AF396Cu) goto L_08AF396C;
    return;
L_08AF396C:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF3980u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 441u, 0x08AF6264u>(ctx, &aot_mem) && ctx.pc == 0x08AF3980u) goto L_08AF3980;
    return;
L_08AF3980:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF39B0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22788)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22792)));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AF39C8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61FCu>(ctx, &aot_mem) && ctx.pc == 0x08AF39C8u) goto L_08AF39C8;
    return;
L_08AF39C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF39E4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 491u, 0x08AF6650u>(ctx, &aot_mem) && ctx.pc == 0x08AF39E4u) goto L_08AF39E4;
    return;
L_08AF39E4:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF39F4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 528u, 0x08AF68D0u>(ctx, &aot_mem) && ctx.pc == 0x08AF39F4u) goto L_08AF39F4;
    return;
L_08AF39F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF3A18u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3A18u) goto L_08AF3A18;
    return;
L_08AF3A18:
    ctx.gpr[4] = (6u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5242));
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[30] = (ctx.gpr[19] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AF3A40u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3A40u) goto L_08AF3A40;
    return;
L_08AF3A40:
    ctx.gpr[4] = (7u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18351));
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[19]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22868)));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22872)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF3A6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3A6Cu) goto L_08AF3A6C;
    return;
L_08AF3A6C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22884)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22888)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF3A84u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61FCu>(ctx, &aot_mem) && ctx.pc == 0x08AF3A84u) goto L_08AF3A84;
    return;
L_08AF3A84:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF3A98u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3A98u) goto L_08AF3A98;
    return;
L_08AF3A98:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22900)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22904)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF3AB0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61FCu>(ctx, &aot_mem) && ctx.pc == 0x08AF3AB0u) goto L_08AF3AB0;
    return;
L_08AF3AB0:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF3AC4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3AC4u) goto L_08AF3AC4;
    return;
L_08AF3AC4:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-22860)));
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF3AE4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-22864)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3AE4u) goto L_08AF3AE4;
    return;
L_08AF3AE4:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-22876)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF3AFCu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-22880)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61FCu>(ctx, &aot_mem) && ctx.pc == 0x08AF3AFCu) goto L_08AF3AFC;
    return;
L_08AF3AFC:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF3B10u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3B10u) goto L_08AF3B10;
    return;
L_08AF3B10:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-22892)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF3B28u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-22896)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61FCu>(ctx, &aot_mem) && ctx.pc == 0x08AF3B28u) goto L_08AF3B28;
    return;
L_08AF3B28:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF3B3Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3B3Cu) goto L_08AF3B3C;
    return;
L_08AF3B3C:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-22908)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF3B54u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-22912)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61FCu>(ctx, &aot_mem) && ctx.pc == 0x08AF3B54u) goto L_08AF3B54;
    return;
L_08AF3B54:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF3B68u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3B68u) goto L_08AF3B68;
    return;
L_08AF3B68:
    ctx.gpr[19] = (ctx.gpr[30] | ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF3B80u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61FCu>(ctx, &aot_mem) && ctx.pc == 0x08AF3B80u) goto L_08AF3B80;
    return;
L_08AF3B80:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08AF3D08;
      }
      goto L_08AF3BA4;
    }
L_08AF3BA4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22796)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22800)));
    ctx.gpr[30] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AF3BC0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3BC0u) goto L_08AF3BC0;
    return;
L_08AF3BC0:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF3BD4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3BD4u) goto L_08AF3BD4;
    return;
L_08AF3BD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF3BF0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61FCu>(ctx, &aot_mem) && ctx.pc == 0x08AF3BF0u) goto L_08AF3BF0;
    return;
L_08AF3BF0:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF3C04u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3C04u) goto L_08AF3C04;
    return;
L_08AF3C04:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF3C40;
      }
      goto L_08AF3C10;
    }
L_08AF3C10:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AF3C24u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 441u, 0x08AF6264u>(ctx, &aot_mem) && ctx.pc == 0x08AF3C24u) goto L_08AF3C24;
    return;
L_08AF3C24:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AF3C38u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 441u, 0x08AF6264u>(ctx, &aot_mem) && ctx.pc == 0x08AF3C38u) goto L_08AF3C38;
    return;
L_08AF3C38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3CD8;
      }
      goto L_08AF3C40;
    }
L_08AF3C40:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22932)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22936)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF3C68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3C68u) goto L_08AF3C68;
    return;
L_08AF3C68:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22924)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22928)));
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF3C88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3C88u) goto L_08AF3C88;
    return;
L_08AF3C88:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AF3C9Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61FCu>(ctx, &aot_mem) && ctx.pc == 0x08AF3C9Cu) goto L_08AF3C9C;
    return;
L_08AF3C9C:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AF3CB0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 441u, 0x08AF6264u>(ctx, &aot_mem) && ctx.pc == 0x08AF3CB0u) goto L_08AF3CB0;
    return;
L_08AF3CB0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08AF3CC4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 441u, 0x08AF6264u>(ctx, &aot_mem) && ctx.pc == 0x08AF3CC4u) goto L_08AF3CC4;
    return;
L_08AF3CC4:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF3CD8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 441u, 0x08AF6264u>(ctx, &aot_mem) && ctx.pc == 0x08AF3CD8u) goto L_08AF3CD8;
    return;
L_08AF3CD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3D08:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AF3D20u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 441u, 0x08AF6264u>(ctx, &aot_mem) && ctx.pc == 0x08AF3D20u) goto L_08AF3D20;
    return;
L_08AF3D20:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF3D34u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3D34u) goto L_08AF3D34;
    return;
L_08AF3D34:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF3D5C;
      }
      goto L_08AF3D40;
    }
L_08AF3D40:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AF3D54u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 441u, 0x08AF6264u>(ctx, &aot_mem) && ctx.pc == 0x08AF3D54u) goto L_08AF3D54;
    return;
L_08AF3D54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3DD8;
      }
      goto L_08AF3D5C;
    }
L_08AF3D5C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22932)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22936)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF3D7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3D7Cu) goto L_08AF3D7C;
    return;
L_08AF3D7C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22924)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22928)));
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF3D9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3D9Cu) goto L_08AF3D9C;
    return;
L_08AF3D9C:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AF3DB0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 441u, 0x08AF6264u>(ctx, &aot_mem) && ctx.pc == 0x08AF3DB0u) goto L_08AF3DB0;
    return;
L_08AF3DB0:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF3DC4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 441u, 0x08AF6264u>(ctx, &aot_mem) && ctx.pc == 0x08AF3DC4u) goto L_08AF3DC4;
    return;
L_08AF3DC4:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF3DD8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 441u, 0x08AF6264u>(ctx, &aot_mem) && ctx.pc == 0x08AF3DD8u) goto L_08AF3DD8;
    return;
L_08AF3DD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3E08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (16u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF3F20;
      }
      goto L_08AF3E50;
    }
L_08AF3E50:
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[7] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF3EA4;
      }
      goto L_08AF3E68;
    }
L_08AF3E68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22816)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-22852)));
    ctx.gpr[31] = (0x08AF3E80u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-22856)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 491u, 0x08AF6650u>(ctx, &aot_mem) && ctx.pc == 0x08AF3E80u) goto L_08AF3E80;
    return;
L_08AF3E80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3EA4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF3EE0;
      }
      goto L_08AF3EAC;
    }
L_08AF3EAC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22916)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22920)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-54));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF3EC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3EC8u) goto L_08AF3EC8;
    return;
L_08AF3EC8:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08AF3F20;
      }
      goto L_08AF3EE0;
    }
L_08AF3EE0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22852)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22856)));
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08AF3EFCu);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 491u, 0x08AF6650u>(ctx, &aot_mem) && ctx.pc == 0x08AF3EFCu) goto L_08AF3EFC;
    return;
L_08AF3EFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3F20:
    ctx.gpr[4] = (32752u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 20u));
      if (branch_taken) {
          goto L_08AF3F68;
      }
      goto L_08AF3F30;
    }
L_08AF3F30:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF3F44u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61FCu>(ctx, &aot_mem) && ctx.pc == 0x08AF3F44u) goto L_08AF3F44;
    return;
L_08AF3F44:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3F68:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1023));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[6] = (16u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[8] = (0u | 1023u);
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] << 20u);
    ctx.gpr[18] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[31] = (0x08AF3FA0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 528u, 0x08AF68D0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3FA0u) goto L_08AF3FA0;
    return;
L_08AF3FA0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22828)));
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22832)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AF3FD4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3FD4u) goto L_08AF3FD4;
    return;
L_08AF3FD4:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF3FE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AF3544;
L_08AF3FE8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22844)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22848)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF4000u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0187(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0187_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_187(Runtime &runtime) {
    runtime.register_generated_unit(187u, 0x08AF0000u, 16384u, &recomp_unit_0187, &recomp_unit_0187_entry);
    runtime.register_function(0x08AF0000u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0010u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0020u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0030u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF004Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF005Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0074u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF007Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0084u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0094u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF00A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF00B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF00B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF00C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF00D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF00D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF00F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0104u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF010Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0124u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0130u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF013Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0148u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0154u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF016Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0178u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0180u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0188u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0198u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF01ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF01C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF01D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF01E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF020Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF021Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0224u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0230u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0234u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0260u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0270u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF027Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0288u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0298u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF02A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF02B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF02BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF02F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0300u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0304u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF030Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0320u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0328u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF033Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0344u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0360u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF036Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0370u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF037Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0388u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0390u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF03B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF03E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF03F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF03F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0418u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0420u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0440u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0448u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0454u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0460u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0468u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0474u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF047Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF04A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF04B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF04B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF04CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF04D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF04D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF04E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF04ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF04F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF04FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0504u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF050Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0528u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0534u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0544u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0558u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0564u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0570u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0588u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0594u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF05ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF05B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF05CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF05E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF05ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF05F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF05F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF060Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0614u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0628u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0630u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0648u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0654u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0660u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF068Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF06B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF06C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF06CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF06D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF06E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF06F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF06FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0704u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF070Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0718u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0728u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0730u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0738u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF074Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0754u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0768u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0770u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0788u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0794u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF07A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF07B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF07C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF07C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF07DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF07E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF07F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0800u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0818u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0824u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0828u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0840u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0848u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0850u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0854u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0860u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0868u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0880u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0888u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0890u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0894u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF08A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF08ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF08B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF08C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF08C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF08CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF08D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF08E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF08F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0900u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF090Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0914u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0944u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0954u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0958u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0970u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0974u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0980u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF098Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A04u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A28u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A38u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A94u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0ABCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AC8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0ACCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0ADCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AE4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AF4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B44u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B54u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B78u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B80u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B88u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0BA8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0BB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0BC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0BCCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0BDCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0BECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C10u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C48u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C7Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C88u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C94u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0CA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0CB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0CD8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0CE8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D08u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D14u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D2Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D3Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D44u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D54u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D68u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D80u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D90u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DE4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DF4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E14u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E24u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E2Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E3Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E4Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E80u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0EA0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0EA8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0EB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0EBCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0ECCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0ED4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0EE8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0EF4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0EFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F68u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F78u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F80u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F88u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0FA0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0FB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0FB8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0FC8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0FD8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1000u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1010u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1034u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF103Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1044u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1050u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1060u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF106Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1074u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1084u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1094u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF10B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF10C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF10DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF10E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF10ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF10F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1108u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1114u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1120u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1130u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1138u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1148u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1158u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF117Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF118Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1204u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1214u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1230u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1240u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1258u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1260u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1268u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1274u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1284u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1288u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1294u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF12A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF12A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF12B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF12C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF12FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF134Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1354u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF135Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1388u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1404u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF140Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1414u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1438u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1444u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1454u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1464u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF146Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF147Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF148Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1490u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF14A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF14CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1504u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1514u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1524u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1540u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1574u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1578u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF15A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF15B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF15C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF15D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF15FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1628u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1708u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1714u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1724u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1734u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1744u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1760u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1770u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1788u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1790u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1798u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF17A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF17B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF17C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF17CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF17D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF17E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF17ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1808u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1818u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1820u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1838u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1844u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1850u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF185Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1868u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1878u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1884u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF188Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1894u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF18A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF18B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF18C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF18D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF18E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF190Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF191Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1924u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1930u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1934u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1960u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1970u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF197Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF198Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF199Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF19A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF19B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF19F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A00u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A08u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A10u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A24u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A38u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A4Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A54u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A74u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1AA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1AB8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1AC0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1AD4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1AE4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1AF4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1AFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B04u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B10u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B24u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B2Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B3Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B4Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B90u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BB8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BC8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BD4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BE8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C10u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C24u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C38u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C44u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C4Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C74u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CA8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CBCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CD0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CD8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CE8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D08u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D10u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D28u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D48u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D5Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D68u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D8Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D94u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1DA0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1DA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1DBCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1DC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1DD4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1DE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1DF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E34u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E38u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E54u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E80u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1EA0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1EB8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1EC0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1EF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1EFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F04u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F28u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F34u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F48u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F68u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F8Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FBCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FCCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FD0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FD4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FE4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2004u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2014u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2024u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF204Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2058u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF207Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2088u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2090u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2118u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2124u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2144u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF214Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2154u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2164u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2174u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2180u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF218Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2198u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF21A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF21B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF21DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF21E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2208u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2214u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF221Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF222Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF223Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2244u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2254u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2264u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF226Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2274u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2284u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2294u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF22B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF22C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF22E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF22F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF22F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2300u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2310u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2318u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2328u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2330u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2340u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2350u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2374u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2380u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2408u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2418u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF243Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF244Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF246Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2474u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF247Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2484u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2494u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF249Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF24ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF24B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF24C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF24D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF24FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2508u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF252Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2534u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF253Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2548u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2558u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2564u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF256Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF257Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF258Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF25ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF25BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF25D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF25DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF25E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF25F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2600u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF260Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF261Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2630u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2638u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2648u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2658u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF267Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF268Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2704u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2714u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2730u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2740u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2758u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2760u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2768u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2774u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2784u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2788u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2794u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF27A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF27A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF27B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF27C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF27FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF280Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2818u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2854u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF285Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2878u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2898u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF28A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF28ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF28B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF28C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF28D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF28E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF28F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF28FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2910u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF291Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2928u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2940u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2944u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF294Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2950u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2960u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF296Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A04u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A10u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A24u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A38u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A68u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A7Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A94u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2AA8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2AD4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B38u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B44u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B68u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B74u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2BBCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2BC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2BE8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2BF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C14u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C2Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C34u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C88u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C94u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CA8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CBCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CD0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CD4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CDCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CF4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D04u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D10u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D64u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D7Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D8Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D94u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2DA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2DACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2DB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2DC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2DDCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2DE4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2DF4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E00u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E08u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E14u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E28u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E48u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E54u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E74u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E80u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2EC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2ECCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2EE4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2EFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F04u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F2Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F38u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F64u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F7Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F8Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2FA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2FB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2FC0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2FD4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2FDCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3000u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3014u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3028u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3040u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3048u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3050u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF306Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3074u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3080u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3088u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF30A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF30ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF30B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF30D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3130u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3140u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF315Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3164u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF316Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3180u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3194u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3200u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF320Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3218u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3220u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3224u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF322Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3238u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3240u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3244u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3248u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF324Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3254u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF325Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3268u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3274u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF327Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3280u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3288u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3294u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF329Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF32A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF32A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF32A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF32B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF32C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF32D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF32F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF32FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3304u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3324u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3334u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3358u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3370u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF337Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF338Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3394u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF33B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF33C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF33E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3408u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3414u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3420u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3428u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3434u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF343Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3444u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF344Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3474u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3478u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3490u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3494u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF349Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF34CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF34DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF34FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3504u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF351Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3528u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3538u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3544u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3598u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF35B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF35C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF35F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3600u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3624u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF363Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3658u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3688u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3698u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3704u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF371Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3724u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3730u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3760u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3780u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3788u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3790u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3798u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF37B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF37D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF37ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF381Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3850u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3860u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3880u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3898u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF38ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF38B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF38CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF38FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3904u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3924u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3944u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3958u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF396Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3980u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF39B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF39C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF39E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF39F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3AB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3AC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3AE4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3AFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B10u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B28u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B3Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B54u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B68u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B80u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3BA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3BC0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3BD4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3BF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C04u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C10u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C24u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C38u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C68u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C88u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3CB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3CC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3CD8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D08u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D34u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D54u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D5Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D7Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3DB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3DC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3DD8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3E08u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3E50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3E68u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3E80u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3EA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3EACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3EC8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3EE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3EFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F44u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F68u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3FA0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3FD4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3FE8u, &recomp_unit_0187, "recomp_unit_0187");
}
} // namespace psprecomp
