#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0194[4086] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 6, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 13, 0, 0, 0,
    14, 0, 15, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 20, 0, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25,
    0, 26, 0, 27, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 32, 33, 0, 34, 0, 35, 0, 0, 0,
    0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 39, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 46, 0, 0, 47, 0, 0, 48, 0, 49, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55,
    0, 0, 0, 0, 56, 57, 0, 58, 0, 0, 0, 59, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0,
    0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 0, 0, 0, 71, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 78, 79, 80, 0, 0, 0, 0, 81, 0,
    82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 86, 0, 87, 0, 0, 88, 0,
    89, 0, 90, 91, 0, 92, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 96, 0, 0, 97, 0, 0, 98, 0, 99, 0, 100, 0, 0,
    0, 101, 0, 0, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 0, 109, 0, 0, 110, 0, 111, 0, 112, 0, 113, 0, 0,
    114, 0, 115, 0, 116, 0, 117, 0, 118, 0, 0, 0, 119, 0, 120, 0, 0, 121, 0, 122, 0, 0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 0,
    128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 131, 132, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0,
    0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140,
    0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 144, 0, 0, 0,
    0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 152, 153, 0, 0,
    0, 0, 0, 0, 154, 0, 155, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 162,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0,
    0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 171, 172, 0, 173, 174, 0, 0, 175, 0, 0, 176, 0, 177,
    178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181,
    0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0,
    0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 0, 198, 0, 199,
    0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0,
    0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 207, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 211, 0, 212,
    0, 213, 0, 214, 215, 0, 216, 217, 0, 218, 0, 219, 0, 220, 0, 0, 221, 0, 222, 0, 223, 224, 0, 225, 0, 0, 0, 226, 0, 227, 228, 0,
    0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 235, 0, 236, 0, 237, 0,
    238, 0, 239, 0, 240, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0,
    0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0,
    258, 0, 259, 0, 260, 0, 261, 0, 262, 0, 263, 0, 264, 265, 0, 266, 0, 267, 0, 268, 0, 269, 270, 271, 272, 273, 0, 274, 0, 275, 0, 276,
    0, 277, 0, 278, 0, 279, 0, 280, 0, 281, 0, 282, 0, 283, 0, 284, 285, 0, 286, 0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0,
    0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299,
    0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0,
    0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 311, 0, 312, 0,
    313, 0, 314, 315, 0, 316, 0, 317, 0, 318, 0, 319, 320, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0,
    0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0,
    339, 0, 340, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0,
    0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 354, 0, 355, 356, 0, 357, 0, 358, 0, 359, 0, 360, 0, 0, 0, 0, 361, 362,
    0, 363, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 369, 370, 0, 0, 0, 0,
    371, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0,
    0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 383, 0, 384, 0, 385, 0, 386, 0, 0, 387, 0, 388, 389,
    390, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394,
    0, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 401, 0, 402,
    0, 403, 0, 404, 0, 405, 0, 406, 0, 407, 0, 408, 0, 409, 0, 410, 0, 411, 412, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 417, 418, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0,
    0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 423, 424, 0, 0, 0, 0, 0, 0, 425, 0, 426, 0, 0, 427, 0, 0, 428, 429, 0, 430, 0,
    431, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 440,
    0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0,
    0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 449, 0, 450, 0, 0, 0, 451, 0, 0, 452, 0, 453, 0, 0, 0, 0, 0, 0,
    0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0,
    0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 461,
    0, 462, 0, 463, 0, 464, 0, 465, 0, 466, 0, 467, 0, 468, 0, 469, 0, 470, 0, 471, 0, 472, 0, 473, 0, 474, 0, 475, 0, 476, 0, 477,
    0, 478, 0, 479, 0, 480, 0, 481, 0, 0, 482, 0, 483, 0, 484, 0, 485, 0, 486, 0, 487, 0, 488, 0, 489, 0, 490, 0, 491, 0, 492, 0,
    493, 0, 494, 0, 495, 0, 496, 0, 497, 0, 498, 0, 499, 0, 500, 0, 501, 0, 502, 0, 503, 0, 504, 0, 505, 0, 506, 0, 507, 0, 508, 0,
    509, 0, 510, 0, 511, 0, 512, 0, 513, 0, 514, 0, 515, 0, 516, 0, 517, 0, 518, 0, 519, 0, 520, 0, 521, 0, 522, 0, 523, 0, 524, 0,
    525, 0, 526, 0, 527, 0, 528, 0, 529, 0, 530, 0, 531, 0, 532, 0, 533, 0, 534, 0, 535, 0, 536, 0, 537, 0, 538, 0, 539, 0, 540, 0,
    541, 0, 542, 0, 543, 0, 544, 0, 545, 0, 546, 0, 547, 0, 548, 0, 549, 0, 550, 0, 551, 0, 552, 0, 553, 0, 554, 0, 555, 0, 556, 0,
    557, 0, 558, 0, 559, 0, 560, 0, 561, 0, 562, 0, 563, 0, 564, 0, 565, 0, 566, 0, 567, 0, 568, 0, 569, 0, 570, 0, 571, 0, 572, 0,
    573, 0, 574, 0, 575, 0, 576, 0, 577, 0, 578, 0, 579, 0, 580, 0, 581, 0, 582, 0, 583, 0, 584, 0, 585, 0, 586, 0, 587, 588, 589, 0,
    590, 0, 591, 592, 593, 0, 594, 0, 595, 0, 596, 0, 597, 0, 598, 0, 599, 0, 600, 0, 601, 0, 602, 0, 603, 0, 604, 605, 606, 0, 607, 0,
    608, 0, 609, 0, 610, 0, 611, 0, 612, 0, 613, 0, 614, 0, 615, 0, 616, 0, 617, 0, 618, 0, 619, 0, 620, 0, 621, 0, 622, 0, 623, 0,
    624, 0, 625, 626, 627, 0, 628, 0, 629, 0, 630, 0, 631, 0, 632, 0, 0, 0, 633, 0, 634, 0, 635, 0, 636, 0, 637, 0, 638, 0, 0, 0,
    639, 0, 640, 641, 0, 642, 0, 643, 0, 644, 0, 0, 0, 645, 0, 646, 0, 647, 0, 648, 0, 649, 0, 650, 0, 651, 0, 652, 0, 653, 0, 654,
    0, 655, 0, 656, 0, 657, 0, 658, 0, 659, 0, 660, 0, 661, 0, 662, 0, 663, 0, 664, 0, 665, 0, 666, 0, 667, 0, 668, 0, 669, 0, 670,
    0, 671, 0, 672, 0, 673, 0, 674, 0, 675, 0, 676, 0, 677, 0, 678, 0, 679, 0, 680, 0, 681, 0, 682, 0, 683, 0, 684, 0, 685, 0, 686,
    0, 687, 0, 688, 0, 689, 0, 690, 0, 691, 0, 692, 0, 693, 0, 694, 0, 695, 0, 696, 0, 697, 0, 698, 0, 699, 0, 700, 0, 701, 0, 702,
    0, 703, 0, 704, 0, 705, 0, 706, 0, 707, 0, 708, 0, 709, 0, 710, 0, 711, 0, 712, 0, 713, 0, 714, 0, 715, 0, 716, 0, 717, 0, 718,
    0, 719, 0, 720, 0, 721, 0, 722, 0, 723, 0, 724, 0, 725, 0, 726, 0, 727, 0, 728, 0, 729, 0, 730, 731, 0, 732, 0, 733, 0, 734, 0,
    0, 735, 0, 736, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 739, 740, 0, 741, 0, 742, 743, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 746, 0, 747, 0, 0, 748, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 750, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 753, 0, 0, 754, 0, 0, 755, 756, 0, 0, 0, 757, 0, 0, 0, 758, 0, 759, 0, 760,
    0, 0, 761, 0, 762, 0, 763, 0, 764, 0, 765, 0, 766, 767, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0,
    0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 771, 0, 0, 772, 0, 0, 773, 0, 0, 0, 0, 774, 0, 0, 775, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 777, 0, 0, 0, 778, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0,
    0, 0, 782, 0, 0, 0, 0, 0, 0, 783, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 789, 0, 0, 790, 791, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 794, 0, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 796, 0, 0, 0, 797, 0, 0, 0, 798, 0, 0,
    0, 799, 0, 0, 0, 800, 0, 0, 0, 801, 0, 0, 0, 0, 802, 0, 0, 0, 803, 0, 0, 804, 805, 0, 0, 806, 807, 0, 0, 808, 809, 0,
    0, 810, 811, 0, 0, 812, 813, 0, 0, 814, 815, 0, 0, 816, 817, 0, 0, 818, 819, 0, 0, 820, 0, 0, 0, 821, 0, 0, 0, 0, 822, 0,
    823, 0, 824, 0, 825, 0, 826, 0, 0, 827, 0, 0, 828, 0, 829, 0, 830, 0, 831, 0, 832, 0, 833, 0, 834, 0, 835, 0, 0, 0, 836, 0,
    0, 0, 837, 0, 0, 0, 838, 0, 0, 0, 839, 0, 0, 0, 0, 840, 0, 0, 0, 0, 841, 0, 0, 842, 0, 0, 0, 843, 0, 0, 0, 844,
    0, 0, 845, 0, 0, 846, 0, 847, 0, 848, 0, 849, 0, 850, 0, 851, 0, 852, 0, 0, 0, 0, 853, 0, 0, 0, 854, 0, 0, 0, 0, 855,
    0, 0, 0, 856, 0, 0, 857, 0, 858, 859, 0, 0, 860, 0, 0, 861, 0, 0, 862, 0, 0, 863, 0, 0, 864, 865, 0, 0, 866, 0, 0, 867,
    0, 868, 0, 869, 0, 0, 870, 0, 0, 871, 0, 0, 0, 872, 873, 0, 0, 0, 0, 874, 0, 0, 0, 875, 0, 0, 876, 0, 0, 877, 0, 0,
    878, 0, 0, 879, 0, 0, 880, 0, 0, 881, 0, 0, 882, 0, 0, 883, 0, 884, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    885, 0, 886, 887, 0, 888, 889, 0, 890, 0, 0, 891, 0, 892, 0, 893, 894, 0, 0, 0, 0, 895, 0, 0, 0, 0, 896, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 897, 0, 0, 0, 898, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 899, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 900, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 901, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 902, 0, 0, 0, 0, 0, 0, 903, 0, 0, 0, 0, 0, 0, 0, 0, 904, 0, 0, 0, 0,
    0, 905, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 906, 0, 0, 0, 0, 0, 0, 0, 0, 907, 0, 0, 0, 0, 0, 908, 0, 0, 0, 909, 0, 910, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 911, 0, 0, 0, 0, 0, 0, 912, 0, 0, 0, 0, 0, 0, 913,
};
void recomp_unit_0194_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B0C01Cu;
        entry_id = (entry_delta < 16344u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0194[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B0C01C;
    case 2u: goto L_08B0C020;
    case 3u: goto L_08B0C058;
    case 4u: goto L_08B0C070;
    case 5u: goto L_08B0C080;
    case 6u: goto L_08B0C084;
    case 7u: goto L_08B0C09C;
    case 8u: goto L_08B0C0B0;
    case 9u: goto L_08B0C0C8;
    case 10u: goto L_08B0C0E0;
    case 11u: goto L_08B0C0F4;
    case 12u: goto L_08B0C0FC;
    case 13u: goto L_08B0C10C;
    case 14u: goto L_08B0C11C;
    case 15u: goto L_08B0C124;
    case 16u: goto L_08B0C12C;
    case 17u: goto L_08B0C140;
    case 18u: goto L_08B0C150;
    case 19u: goto L_08B0C15C;
    case 20u: goto L_08B0C16C;
    case 21u: goto L_08B0C178;
    case 22u: goto L_08B0C180;
    case 23u: goto L_08B0C188;
    case 24u: goto L_08B0C190;
    case 25u: goto L_08B0C198;
    case 26u: goto L_08B0C1A0;
    case 27u: goto L_08B0C1A8;
    case 28u: goto L_08B0C1B4;
    case 29u: goto L_08B0C1C4;
    case 30u: goto L_08B0C1D8;
    case 31u: goto L_08B0C1F0;
    case 32u: goto L_08B0C1F8;
    case 33u: goto L_08B0C1FC;
    case 34u: goto L_08B0C204;
    case 35u: goto L_08B0C20C;
    case 36u: goto L_08B0C220;
    case 37u: goto L_08B0C234;
    case 38u: goto L_08B0C248;
    case 39u: goto L_08B0C254;
    case 40u: goto L_08B0C258;
    case 41u: goto L_08B0C260;
    case 42u: goto L_08B0C280;
    case 43u: goto L_08B0C284;
    case 44u: goto L_08B0C2AC;
    case 45u: goto L_08B0C2E4;
    case 46u: goto L_08B0C2E8;
    case 47u: goto L_08B0C2F4;
    case 48u: goto L_08B0C300;
    case 49u: goto L_08B0C308;
    case 50u: goto L_08B0C330;
    case 51u: goto L_08B0C344;
    case 52u: goto L_08B0C350;
    case 53u: goto L_08B0C378;
    case 54u: goto L_08B0C388;
    case 55u: goto L_08B0C398;
    case 56u: goto L_08B0C3AC;
    case 57u: goto L_08B0C3B0;
    case 58u: goto L_08B0C3B8;
    case 59u: goto L_08B0C3C8;
    case 60u: goto L_08B0C3D4;
    case 61u: goto L_08B0C3DC;
    case 62u: goto L_08B0C3EC;
    case 63u: goto L_08B0C3F8;
    case 64u: goto L_08B0C404;
    case 65u: goto L_08B0C420;
    case 66u: goto L_08B0C42C;
    case 67u: goto L_08B0C44C;
    case 68u: goto L_08B0C46C;
    case 69u: goto L_08B0C474;
    case 70u: goto L_08B0C47C;
    case 71u: goto L_08B0C490;
    case 72u: goto L_08B0C4A4;
    case 73u: goto L_08B0C4BC;
    case 74u: goto L_08B0C51C;
    case 75u: goto L_08B0C524;
    case 76u: goto L_08B0C558;
    case 77u: goto L_08B0C574;
    case 78u: goto L_08B0C578;
    case 79u: goto L_08B0C57C;
    case 80u: goto L_08B0C580;
    case 81u: goto L_08B0C594;
    case 82u: goto L_08B0C59C;
    case 83u: goto L_08B0C5A4;
    case 84u: goto L_08B0C5E0;
    case 85u: goto L_08B0C5F4;
    case 86u: goto L_08B0C600;
    case 87u: goto L_08B0C608;
    case 88u: goto L_08B0C614;
    case 89u: goto L_08B0C61C;
    case 90u: goto L_08B0C624;
    case 91u: goto L_08B0C628;
    case 92u: goto L_08B0C630;
    case 93u: goto L_08B0C63C;
    case 94u: goto L_08B0C64C;
    case 95u: goto L_08B0C660;
    case 96u: goto L_08B0C668;
    case 97u: goto L_08B0C674;
    case 98u: goto L_08B0C680;
    case 99u: goto L_08B0C688;
    case 100u: goto L_08B0C690;
    case 101u: goto L_08B0C6A0;
    case 102u: goto L_08B0C6B0;
    case 103u: goto L_08B0C6B8;
    case 104u: goto L_08B0C6C0;
    case 105u: goto L_08B0C6C8;
    case 106u: goto L_08B0C6D0;
    case 107u: goto L_08B0C6D8;
    case 108u: goto L_08B0C6E0;
    case 109u: goto L_08B0C6EC;
    case 110u: goto L_08B0C6F8;
    case 111u: goto L_08B0C700;
    case 112u: goto L_08B0C708;
    case 113u: goto L_08B0C710;
    case 114u: goto L_08B0C71C;
    case 115u: goto L_08B0C724;
    case 116u: goto L_08B0C72C;
    case 117u: goto L_08B0C734;
    case 118u: goto L_08B0C73C;
    case 119u: goto L_08B0C74C;
    case 120u: goto L_08B0C754;
    case 121u: goto L_08B0C760;
    case 122u: goto L_08B0C768;
    case 123u: goto L_08B0C774;
    case 124u: goto L_08B0C77C;
    case 125u: goto L_08B0C784;
    case 126u: goto L_08B0C78C;
    case 127u: goto L_08B0C794;
    case 128u: goto L_08B0C79C;
    case 129u: goto L_08B0C7A4;
    case 130u: goto L_08B0C7D0;
    case 131u: goto L_08B0C7D4;
    case 132u: goto L_08B0C7D8;
    case 133u: goto L_08B0C7EC;
    case 134u: goto L_08B0C7F8;
    case 135u: goto L_08B0C810;
    case 136u: goto L_08B0C834;
    case 137u: goto L_08B0C850;
    case 138u: goto L_08B0C860;
    case 139u: goto L_08B0C864;
    case 140u: goto L_08B0C898;
    case 141u: goto L_08B0C8A0;
    case 142u: goto L_08B0C8D0;
    case 143u: goto L_08B0C908;
    case 144u: goto L_08B0C90C;
    case 145u: goto L_08B0C920;
    case 146u: goto L_08B0C938;
    case 147u: goto L_08B0C944;
    case 148u: goto L_08B0C954;
    case 149u: goto L_08B0C960;
    case 150u: goto L_08B0C970;
    case 151u: goto L_08B0C980;
    case 152u: goto L_08B0C98C;
    case 153u: goto L_08B0C990;
    case 154u: goto L_08B0C9AC;
    case 155u: goto L_08B0C9B4;
    case 156u: goto L_08B0C9B8;
    case 157u: goto L_08B0C9C0;
    case 158u: goto L_08B0C9E4;
    case 159u: goto L_08B0C9EC;
    case 160u: goto L_08B0CA08;
    case 161u: goto L_08B0CA10;
    case 162u: goto L_08B0CA18;
    case 163u: goto L_08B0CA44;
    case 164u: goto L_08B0CA64;
    case 165u: goto L_08B0CA84;
    case 166u: goto L_08B0CAA0;
    case 167u: goto L_08B0CAB4;
    case 168u: goto L_08B0CACC;
    case 169u: goto L_08B0CAD4;
    case 170u: goto L_08B0CADC;
    case 171u: goto L_08B0CAE8;
    case 172u: goto L_08B0CAEC;
    case 173u: goto L_08B0CAF4;
    case 174u: goto L_08B0CAF8;
    case 175u: goto L_08B0CB04;
    case 176u: goto L_08B0CB10;
    case 177u: goto L_08B0CB18;
    case 178u: goto L_08B0CB1C;
    case 179u: goto L_08B0CB58;
    case 180u: goto L_08B0CB68;
    case 181u: goto L_08B0CB98;
    case 182u: goto L_08B0CBB8;
    case 183u: goto L_08B0CBC0;
    case 184u: goto L_08B0CBC8;
    case 185u: goto L_08B0CF40;
    case 186u: goto L_08B0CF4C;
    case 187u: goto L_08B0D008;
    case 188u: goto L_08B0D024;
    case 189u: goto L_08B0D048;
    case 190u: goto L_08B0D050;
    case 191u: goto L_08B0D058;
    case 192u: goto L_08B0D060;
    case 193u: goto L_08B0D068;
    case 194u: goto L_08B0D070;
    case 195u: goto L_08B0D078;
    case 196u: goto L_08B0D080;
    case 197u: goto L_08B0D088;
    case 198u: goto L_08B0D090;
    case 199u: goto L_08B0D098;
    case 200u: goto L_08B0D0B0;
    case 201u: goto L_08B0D0B8;
    case 202u: goto L_08B0D0E0;
    case 203u: goto L_08B0D100;
    case 204u: goto L_08B0D120;
    case 205u: goto L_08B0D140;
    case 206u: goto L_08B0D148;
    case 207u: goto L_08B0D150;
    case 208u: goto L_08B0D154;
    case 209u: goto L_08B0D184;
    case 210u: goto L_08B0D18C;
    case 211u: goto L_08B0D190;
    case 212u: goto L_08B0D198;
    case 213u: goto L_08B0D1A0;
    case 214u: goto L_08B0D1A8;
    case 215u: goto L_08B0D1AC;
    case 216u: goto L_08B0D1B4;
    case 217u: goto L_08B0D1B8;
    case 218u: goto L_08B0D1C0;
    case 219u: goto L_08B0D1C8;
    case 220u: goto L_08B0D1D0;
    case 221u: goto L_08B0D1DC;
    case 222u: goto L_08B0D1E4;
    case 223u: goto L_08B0D1EC;
    case 224u: goto L_08B0D1F0;
    case 225u: goto L_08B0D1F8;
    case 226u: goto L_08B0D208;
    case 227u: goto L_08B0D210;
    case 228u: goto L_08B0D214;
    case 229u: goto L_08B0D220;
    case 230u: goto L_08B0D240;
    case 231u: goto L_08B0D248;
    case 232u: goto L_08B0D258;
    case 233u: goto L_08B0D274;
    case 234u: goto L_08B0D27C;
    case 235u: goto L_08B0D284;
    case 236u: goto L_08B0D28C;
    case 237u: goto L_08B0D294;
    case 238u: goto L_08B0D29C;
    case 239u: goto L_08B0D2A4;
    case 240u: goto L_08B0D2AC;
    case 241u: goto L_08B0D2B4;
    case 242u: goto L_08B0D2BC;
    case 243u: goto L_08B0D2D8;
    case 244u: goto L_08B0D2FC;
    case 245u: goto L_08B0D320;
    case 246u: goto L_08B0D344;
    case 247u: goto L_08B0D368;
    case 248u: goto L_08B0D38C;
    case 249u: goto L_08B0D3B0;
    case 250u: goto L_08B0D3DC;
    case 251u: goto L_08B0D3E4;
    case 252u: goto L_08B0D3EC;
    case 253u: goto L_08B0D3F4;
    case 254u: goto L_08B0D3FC;
    case 255u: goto L_08B0D404;
    case 256u: goto L_08B0D40C;
    case 257u: goto L_08B0D414;
    case 258u: goto L_08B0D41C;
    case 259u: goto L_08B0D424;
    case 260u: goto L_08B0D42C;
    case 261u: goto L_08B0D434;
    case 262u: goto L_08B0D43C;
    case 263u: goto L_08B0D444;
    case 264u: goto L_08B0D44C;
    case 265u: goto L_08B0D450;
    case 266u: goto L_08B0D458;
    case 267u: goto L_08B0D460;
    case 268u: goto L_08B0D468;
    case 269u: goto L_08B0D470;
    case 270u: goto L_08B0D474;
    case 271u: goto L_08B0D478;
    case 272u: goto L_08B0D47C;
    case 273u: goto L_08B0D480;
    case 274u: goto L_08B0D488;
    case 275u: goto L_08B0D490;
    case 276u: goto L_08B0D498;
    case 277u: goto L_08B0D4A0;
    case 278u: goto L_08B0D4A8;
    case 279u: goto L_08B0D4B0;
    case 280u: goto L_08B0D4B8;
    case 281u: goto L_08B0D4C0;
    case 282u: goto L_08B0D4C8;
    case 283u: goto L_08B0D4D0;
    case 284u: goto L_08B0D4D8;
    case 285u: goto L_08B0D4DC;
    case 286u: goto L_08B0D4E4;
    case 287u: goto L_08B0D4EC;
    case 288u: goto L_08B0D4F4;
    case 289u: goto L_08B0D4FC;
    case 290u: goto L_08B0D504;
    case 291u: goto L_08B0D50C;
    case 292u: goto L_08B0D514;
    case 293u: goto L_08B0D524;
    case 294u: goto L_08B0D540;
    case 295u: goto L_08B0D550;
    case 296u: goto L_08B0D55C;
    case 297u: goto L_08B0D56C;
    case 298u: goto L_08B0D588;
    case 299u: goto L_08B0D598;
    case 300u: goto L_08B0D5AC;
    case 301u: goto L_08B0D5BC;
    case 302u: goto L_08B0D5D8;
    case 303u: goto L_08B0D5E8;
    case 304u: goto L_08B0D5F8;
    case 305u: goto L_08B0D608;
    case 306u: goto L_08B0D624;
    case 307u: goto L_08B0D634;
    case 308u: goto L_08B0D644;
    case 309u: goto L_08B0D678;
    case 310u: goto L_08B0D684;
    case 311u: goto L_08B0D68C;
    case 312u: goto L_08B0D694;
    case 313u: goto L_08B0D69C;
    case 314u: goto L_08B0D6A4;
    case 315u: goto L_08B0D6A8;
    case 316u: goto L_08B0D6B0;
    case 317u: goto L_08B0D6B8;
    case 318u: goto L_08B0D6C0;
    case 319u: goto L_08B0D6C8;
    case 320u: goto L_08B0D6CC;
    case 321u: goto L_08B0D6D4;
    case 322u: goto L_08B0D6DC;
    case 323u: goto L_08B0D6F8;
    case 324u: goto L_08B0D70C;
    case 325u: goto L_08B0D734;
    case 326u: goto L_08B0D744;
    case 327u: goto L_08B0D754;
    case 328u: goto L_08B0D764;
    case 329u: goto L_08B0D770;
    case 330u: goto L_08B0D780;
    case 331u: goto L_08B0D790;
    case 332u: goto L_08B0D840;
    case 333u: goto L_08B0D864;
    case 334u: goto L_08B0D884;
    case 335u: goto L_08B0D8A8;
    case 336u: goto L_08B0D8C8;
    case 337u: goto L_08B0D908;
    case 338u: goto L_08B0D914;
    case 339u: goto L_08B0D91C;
    case 340u: goto L_08B0D924;
    case 341u: goto L_08B0D92C;
    case 342u: goto L_08B0D938;
    case 343u: goto L_08B0D950;
    case 344u: goto L_08B0D958;
    case 345u: goto L_08B0D980;
    case 346u: goto L_08B0D994;
    case 347u: goto L_08B0D9BC;
    case 348u: goto L_08B0D9D0;
    case 349u: goto L_08B0D9F4;
    case 350u: goto L_08B0DA0C;
    case 351u: goto L_08B0DA28;
    case 352u: goto L_08B0DA38;
    case 353u: goto L_08B0DA4C;
    case 354u: goto L_08B0DA54;
    case 355u: goto L_08B0DA5C;
    case 356u: goto L_08B0DA60;
    case 357u: goto L_08B0DA68;
    case 358u: goto L_08B0DA70;
    case 359u: goto L_08B0DA78;
    case 360u: goto L_08B0DA80;
    case 361u: goto L_08B0DA94;
    case 362u: goto L_08B0DA98;
    case 363u: goto L_08B0DAA0;
    case 364u: goto L_08B0DAA8;
    case 365u: goto L_08B0DAB8;
    case 366u: goto L_08B0DACC;
    case 367u: goto L_08B0DAE4;
    case 368u: goto L_08B0DAF4;
    case 369u: goto L_08B0DB04;
    case 370u: goto L_08B0DB08;
    case 371u: goto L_08B0DB1C;
    case 372u: goto L_08B0DB30;
    case 373u: goto L_08B0DB3C;
    case 374u: goto L_08B0DB48;
    case 375u: goto L_08B0DB64;
    case 376u: goto L_08B0DB7C;
    case 377u: goto L_08B0DB8C;
    case 378u: goto L_08B0DBA4;
    case 379u: goto L_08B0DBC8;
    case 380u: goto L_08B0DBF8;
    case 381u: goto L_08B0DCD8;
    case 382u: goto L_08B0DCE0;
    case 383u: goto L_08B0DCE8;
    case 384u: goto L_08B0DCF0;
    case 385u: goto L_08B0DCF8;
    case 386u: goto L_08B0DD00;
    case 387u: goto L_08B0DD0C;
    case 388u: goto L_08B0DD14;
    case 389u: goto L_08B0DD18;
    case 390u: goto L_08B0DD1C;
    case 391u: goto L_08B0DD34;
    case 392u: goto L_08B0DD40;
    case 393u: goto L_08B0DD58;
    case 394u: goto L_08B0DD98;
    case 395u: goto L_08B0DDB8;
    case 396u: goto L_08B0DDC0;
    case 397u: goto L_08B0DDC8;
    case 398u: goto L_08B0DDDC;
    case 399u: goto L_08B0DE00;
    case 400u: goto L_08B0DE08;
    case 401u: goto L_08B0DE10;
    case 402u: goto L_08B0DE18;
    case 403u: goto L_08B0DE20;
    case 404u: goto L_08B0DE28;
    case 405u: goto L_08B0DE30;
    case 406u: goto L_08B0DE38;
    case 407u: goto L_08B0DE40;
    case 408u: goto L_08B0DE48;
    case 409u: goto L_08B0DE50;
    case 410u: goto L_08B0DE58;
    case 411u: goto L_08B0DE60;
    case 412u: goto L_08B0DE64;
    case 413u: goto L_08B0DE68;
    case 414u: goto L_08B0DEA0;
    case 415u: goto L_08B0DEC8;
    case 416u: goto L_08B0DED0;
    case 417u: goto L_08B0DEE0;
    case 418u: goto L_08B0DEE4;
    case 419u: goto L_08B0DEE8;
    case 420u: goto L_08B0DF14;
    case 421u: goto L_08B0DF28;
    case 422u: goto L_08B0DF38;
    case 423u: goto L_08B0DF48;
    case 424u: goto L_08B0DF4C;
    case 425u: goto L_08B0DF68;
    case 426u: goto L_08B0DF70;
    case 427u: goto L_08B0DF7C;
    case 428u: goto L_08B0DF88;
    case 429u: goto L_08B0DF8C;
    case 430u: goto L_08B0DF94;
    case 431u: goto L_08B0DF9C;
    case 432u: goto L_08B0DFA8;
    case 433u: goto L_08B0DFB8;
    case 434u: goto L_08B0DFD0;
    case 435u: goto L_08B0E000;
    case 436u: goto L_08B0E030;
    case 437u: goto L_08B0E05C;
    case 438u: goto L_08B0E080;
    case 439u: goto L_08B0E08C;
    case 440u: goto L_08B0E098;
    case 441u: goto L_08B0E0A8;
    case 442u: goto L_08B0E0C4;
    case 443u: goto L_08B0E0D4;
    case 444u: goto L_08B0E0E0;
    case 445u: goto L_08B0E100;
    case 446u: goto L_08B0E124;
    case 447u: goto L_08B0E138;
    case 448u: goto L_08B0E148;
    case 449u: goto L_08B0E154;
    case 450u: goto L_08B0E15C;
    case 451u: goto L_08B0E16C;
    case 452u: goto L_08B0E178;
    case 453u: goto L_08B0E180;
    case 454u: goto L_08B0E1A4;
    case 455u: goto L_08B0E1C8;
    case 456u: goto L_08B0E1E4;
    case 457u: goto L_08B0E1FC;
    case 458u: goto L_08B0E214;
    case 459u: goto L_08B0E234;
    case 460u: goto L_08B0E290;
    case 461u: goto L_08B0E298;
    case 462u: goto L_08B0E2A0;
    case 463u: goto L_08B0E2A8;
    case 464u: goto L_08B0E2B0;
    case 465u: goto L_08B0E2B8;
    case 466u: goto L_08B0E2C0;
    case 467u: goto L_08B0E2C8;
    case 468u: goto L_08B0E2D0;
    case 469u: goto L_08B0E2D8;
    case 470u: goto L_08B0E2E0;
    case 471u: goto L_08B0E2E8;
    case 472u: goto L_08B0E2F0;
    case 473u: goto L_08B0E2F8;
    case 474u: goto L_08B0E300;
    case 475u: goto L_08B0E308;
    case 476u: goto L_08B0E310;
    case 477u: goto L_08B0E318;
    case 478u: goto L_08B0E320;
    case 479u: goto L_08B0E328;
    case 480u: goto L_08B0E330;
    case 481u: goto L_08B0E338;
    case 482u: goto L_08B0E344;
    case 483u: goto L_08B0E34C;
    case 484u: goto L_08B0E354;
    case 485u: goto L_08B0E35C;
    case 486u: goto L_08B0E364;
    case 487u: goto L_08B0E36C;
    case 488u: goto L_08B0E374;
    case 489u: goto L_08B0E37C;
    case 490u: goto L_08B0E384;
    case 491u: goto L_08B0E38C;
    case 492u: goto L_08B0E394;
    case 493u: goto L_08B0E39C;
    case 494u: goto L_08B0E3A4;
    case 495u: goto L_08B0E3AC;
    case 496u: goto L_08B0E3B4;
    case 497u: goto L_08B0E3BC;
    case 498u: goto L_08B0E3C4;
    case 499u: goto L_08B0E3CC;
    case 500u: goto L_08B0E3D4;
    case 501u: goto L_08B0E3DC;
    case 502u: goto L_08B0E3E4;
    case 503u: goto L_08B0E3EC;
    case 504u: goto L_08B0E3F4;
    case 505u: goto L_08B0E3FC;
    case 506u: goto L_08B0E404;
    case 507u: goto L_08B0E40C;
    case 508u: goto L_08B0E414;
    case 509u: goto L_08B0E41C;
    case 510u: goto L_08B0E424;
    case 511u: goto L_08B0E42C;
    case 512u: goto L_08B0E434;
    case 513u: goto L_08B0E43C;
    case 514u: goto L_08B0E444;
    case 515u: goto L_08B0E44C;
    case 516u: goto L_08B0E454;
    case 517u: goto L_08B0E45C;
    case 518u: goto L_08B0E464;
    case 519u: goto L_08B0E46C;
    case 520u: goto L_08B0E474;
    case 521u: goto L_08B0E47C;
    case 522u: goto L_08B0E484;
    case 523u: goto L_08B0E48C;
    case 524u: goto L_08B0E494;
    case 525u: goto L_08B0E49C;
    case 526u: goto L_08B0E4A4;
    case 527u: goto L_08B0E4AC;
    case 528u: goto L_08B0E4B4;
    case 529u: goto L_08B0E4BC;
    case 530u: goto L_08B0E4C4;
    case 531u: goto L_08B0E4CC;
    case 532u: goto L_08B0E4D4;
    case 533u: goto L_08B0E4DC;
    case 534u: goto L_08B0E4E4;
    case 535u: goto L_08B0E4EC;
    case 536u: goto L_08B0E4F4;
    case 537u: goto L_08B0E4FC;
    case 538u: goto L_08B0E504;
    case 539u: goto L_08B0E50C;
    case 540u: goto L_08B0E514;
    case 541u: goto L_08B0E51C;
    case 542u: goto L_08B0E524;
    case 543u: goto L_08B0E52C;
    case 544u: goto L_08B0E534;
    case 545u: goto L_08B0E53C;
    case 546u: goto L_08B0E544;
    case 547u: goto L_08B0E54C;
    case 548u: goto L_08B0E554;
    case 549u: goto L_08B0E55C;
    case 550u: goto L_08B0E564;
    case 551u: goto L_08B0E56C;
    case 552u: goto L_08B0E574;
    case 553u: goto L_08B0E57C;
    case 554u: goto L_08B0E584;
    case 555u: goto L_08B0E58C;
    case 556u: goto L_08B0E594;
    case 557u: goto L_08B0E59C;
    case 558u: goto L_08B0E5A4;
    case 559u: goto L_08B0E5AC;
    case 560u: goto L_08B0E5B4;
    case 561u: goto L_08B0E5BC;
    case 562u: goto L_08B0E5C4;
    case 563u: goto L_08B0E5CC;
    case 564u: goto L_08B0E5D4;
    case 565u: goto L_08B0E5DC;
    case 566u: goto L_08B0E5E4;
    case 567u: goto L_08B0E5EC;
    case 568u: goto L_08B0E5F4;
    case 569u: goto L_08B0E5FC;
    case 570u: goto L_08B0E604;
    case 571u: goto L_08B0E60C;
    case 572u: goto L_08B0E614;
    case 573u: goto L_08B0E61C;
    case 574u: goto L_08B0E624;
    case 575u: goto L_08B0E62C;
    case 576u: goto L_08B0E634;
    case 577u: goto L_08B0E63C;
    case 578u: goto L_08B0E644;
    case 579u: goto L_08B0E64C;
    case 580u: goto L_08B0E654;
    case 581u: goto L_08B0E65C;
    case 582u: goto L_08B0E664;
    case 583u: goto L_08B0E66C;
    case 584u: goto L_08B0E674;
    case 585u: goto L_08B0E67C;
    case 586u: goto L_08B0E684;
    case 587u: goto L_08B0E68C;
    case 588u: goto L_08B0E690;
    case 589u: goto L_08B0E694;
    case 590u: goto L_08B0E69C;
    case 591u: goto L_08B0E6A4;
    case 592u: goto L_08B0E6A8;
    case 593u: goto L_08B0E6AC;
    case 594u: goto L_08B0E6B4;
    case 595u: goto L_08B0E6BC;
    case 596u: goto L_08B0E6C4;
    case 597u: goto L_08B0E6CC;
    case 598u: goto L_08B0E6D4;
    case 599u: goto L_08B0E6DC;
    case 600u: goto L_08B0E6E4;
    case 601u: goto L_08B0E6EC;
    case 602u: goto L_08B0E6F4;
    case 603u: goto L_08B0E6FC;
    case 604u: goto L_08B0E704;
    case 605u: goto L_08B0E708;
    case 606u: goto L_08B0E70C;
    case 607u: goto L_08B0E714;
    case 608u: goto L_08B0E71C;
    case 609u: goto L_08B0E724;
    case 610u: goto L_08B0E72C;
    case 611u: goto L_08B0E734;
    case 612u: goto L_08B0E73C;
    case 613u: goto L_08B0E744;
    case 614u: goto L_08B0E74C;
    case 615u: goto L_08B0E754;
    case 616u: goto L_08B0E75C;
    case 617u: goto L_08B0E764;
    case 618u: goto L_08B0E76C;
    case 619u: goto L_08B0E774;
    case 620u: goto L_08B0E77C;
    case 621u: goto L_08B0E784;
    case 622u: goto L_08B0E78C;
    case 623u: goto L_08B0E794;
    case 624u: goto L_08B0E79C;
    case 625u: goto L_08B0E7A4;
    case 626u: goto L_08B0E7A8;
    case 627u: goto L_08B0E7AC;
    case 628u: goto L_08B0E7B4;
    case 629u: goto L_08B0E7BC;
    case 630u: goto L_08B0E7C4;
    case 631u: goto L_08B0E7CC;
    case 632u: goto L_08B0E7D4;
    case 633u: goto L_08B0E7E4;
    case 634u: goto L_08B0E7EC;
    case 635u: goto L_08B0E7F4;
    case 636u: goto L_08B0E7FC;
    case 637u: goto L_08B0E804;
    case 638u: goto L_08B0E80C;
    case 639u: goto L_08B0E81C;
    case 640u: goto L_08B0E824;
    case 641u: goto L_08B0E828;
    case 642u: goto L_08B0E830;
    case 643u: goto L_08B0E838;
    case 644u: goto L_08B0E840;
    case 645u: goto L_08B0E850;
    case 646u: goto L_08B0E858;
    case 647u: goto L_08B0E860;
    case 648u: goto L_08B0E868;
    case 649u: goto L_08B0E870;
    case 650u: goto L_08B0E878;
    case 651u: goto L_08B0E880;
    case 652u: goto L_08B0E888;
    case 653u: goto L_08B0E890;
    case 654u: goto L_08B0E898;
    case 655u: goto L_08B0E8A0;
    case 656u: goto L_08B0E8A8;
    case 657u: goto L_08B0E8B0;
    case 658u: goto L_08B0E8B8;
    case 659u: goto L_08B0E8C0;
    case 660u: goto L_08B0E8C8;
    case 661u: goto L_08B0E8D0;
    case 662u: goto L_08B0E8D8;
    case 663u: goto L_08B0E8E0;
    case 664u: goto L_08B0E8E8;
    case 665u: goto L_08B0E8F0;
    case 666u: goto L_08B0E8F8;
    case 667u: goto L_08B0E900;
    case 668u: goto L_08B0E908;
    case 669u: goto L_08B0E910;
    case 670u: goto L_08B0E918;
    case 671u: goto L_08B0E920;
    case 672u: goto L_08B0E928;
    case 673u: goto L_08B0E930;
    case 674u: goto L_08B0E938;
    case 675u: goto L_08B0E940;
    case 676u: goto L_08B0E948;
    case 677u: goto L_08B0E950;
    case 678u: goto L_08B0E958;
    case 679u: goto L_08B0E960;
    case 680u: goto L_08B0E968;
    case 681u: goto L_08B0E970;
    case 682u: goto L_08B0E978;
    case 683u: goto L_08B0E980;
    case 684u: goto L_08B0E988;
    case 685u: goto L_08B0E990;
    case 686u: goto L_08B0E998;
    case 687u: goto L_08B0E9A0;
    case 688u: goto L_08B0E9A8;
    case 689u: goto L_08B0E9B0;
    case 690u: goto L_08B0E9B8;
    case 691u: goto L_08B0E9C0;
    case 692u: goto L_08B0E9C8;
    case 693u: goto L_08B0E9D0;
    case 694u: goto L_08B0E9D8;
    case 695u: goto L_08B0E9E0;
    case 696u: goto L_08B0E9E8;
    case 697u: goto L_08B0E9F0;
    case 698u: goto L_08B0E9F8;
    case 699u: goto L_08B0EA00;
    case 700u: goto L_08B0EA08;
    case 701u: goto L_08B0EA10;
    case 702u: goto L_08B0EA18;
    case 703u: goto L_08B0EA20;
    case 704u: goto L_08B0EA28;
    case 705u: goto L_08B0EA30;
    case 706u: goto L_08B0EA38;
    case 707u: goto L_08B0EA40;
    case 708u: goto L_08B0EA48;
    case 709u: goto L_08B0EA50;
    case 710u: goto L_08B0EA58;
    case 711u: goto L_08B0EA60;
    case 712u: goto L_08B0EA68;
    case 713u: goto L_08B0EA70;
    case 714u: goto L_08B0EA78;
    case 715u: goto L_08B0EA80;
    case 716u: goto L_08B0EA88;
    case 717u: goto L_08B0EA90;
    case 718u: goto L_08B0EA98;
    case 719u: goto L_08B0EAA0;
    case 720u: goto L_08B0EAA8;
    case 721u: goto L_08B0EAB0;
    case 722u: goto L_08B0EAB8;
    case 723u: goto L_08B0EAC0;
    case 724u: goto L_08B0EAC8;
    case 725u: goto L_08B0EAD0;
    case 726u: goto L_08B0EAD8;
    case 727u: goto L_08B0EAE0;
    case 728u: goto L_08B0EAE8;
    case 729u: goto L_08B0EAF0;
    case 730u: goto L_08B0EAF8;
    case 731u: goto L_08B0EAFC;
    case 732u: goto L_08B0EB04;
    case 733u: goto L_08B0EB0C;
    case 734u: goto L_08B0EB14;
    case 735u: goto L_08B0EB20;
    case 736u: goto L_08B0EB28;
    case 737u: goto L_08B0EB38;
    case 738u: goto L_08B0EB48;
    case 739u: goto L_08B0EB6C;
    case 740u: goto L_08B0EB70;
    case 741u: goto L_08B0EB78;
    case 742u: goto L_08B0EB80;
    case 743u: goto L_08B0EB84;
    case 744u: goto L_08B0EC28;
    case 745u: goto L_08B0EC44;
    case 746u: goto L_08B0EC54;
    case 747u: goto L_08B0EC5C;
    case 748u: goto L_08B0EC68;
    case 749u: goto L_08B0EC7C;
    case 750u: goto L_08B0EE38;
    case 751u: goto L_08B0EE40;
    case 752u: goto L_08B0EF40;
    case 753u: goto L_08B0EF4C;
    case 754u: goto L_08B0EF58;
    case 755u: goto L_08B0EF64;
    case 756u: goto L_08B0EF68;
    case 757u: goto L_08B0EF78;
    case 758u: goto L_08B0EF88;
    case 759u: goto L_08B0EF90;
    case 760u: goto L_08B0EF98;
    case 761u: goto L_08B0EFA4;
    case 762u: goto L_08B0EFAC;
    case 763u: goto L_08B0EFB4;
    case 764u: goto L_08B0EFBC;
    case 765u: goto L_08B0EFC4;
    case 766u: goto L_08B0EFCC;
    case 767u: goto L_08B0EFD0;
    case 768u: goto L_08B0EFEC;
    case 769u: goto L_08B0F010;
    case 770u: goto L_08B0F034;
    case 771u: goto L_08B0F04C;
    case 772u: goto L_08B0F058;
    case 773u: goto L_08B0F064;
    case 774u: goto L_08B0F078;
    case 775u: goto L_08B0F084;
    case 776u: goto L_08B0F0C8;
    case 777u: goto L_08B0F0E0;
    case 778u: goto L_08B0F0F0;
    case 779u: goto L_08B0F104;
    case 780u: goto L_08B0F134;
    case 781u: goto L_08B0F188;
    case 782u: goto L_08B0F1A4;
    case 783u: goto L_08B0F1C0;
    case 784u: goto L_08B0F1C4;
    case 785u: goto L_08B0F1EC;
    case 786u: goto L_08B0F1F8;
    case 787u: goto L_08B0F228;
    case 788u: goto L_08B0F270;
    case 789u: goto L_08B0F2B0;
    case 790u: goto L_08B0F2BC;
    case 791u: goto L_08B0F2C0;
    case 792u: goto L_08B0F2D4;
    case 793u: goto L_08B0F2F0;
    case 794u: goto L_08B0F340;
    case 795u: goto L_08B0F360;
    case 796u: goto L_08B0F370;
    case 797u: goto L_08B0F380;
    case 798u: goto L_08B0F390;
    case 799u: goto L_08B0F3A0;
    case 800u: goto L_08B0F3B0;
    case 801u: goto L_08B0F3C0;
    case 802u: goto L_08B0F3D4;
    case 803u: goto L_08B0F3E4;
    case 804u: goto L_08B0F3F0;
    case 805u: goto L_08B0F3F4;
    case 806u: goto L_08B0F400;
    case 807u: goto L_08B0F404;
    case 808u: goto L_08B0F410;
    case 809u: goto L_08B0F414;
    case 810u: goto L_08B0F420;
    case 811u: goto L_08B0F424;
    case 812u: goto L_08B0F430;
    case 813u: goto L_08B0F434;
    case 814u: goto L_08B0F440;
    case 815u: goto L_08B0F444;
    case 816u: goto L_08B0F450;
    case 817u: goto L_08B0F454;
    case 818u: goto L_08B0F460;
    case 819u: goto L_08B0F464;
    case 820u: goto L_08B0F470;
    case 821u: goto L_08B0F480;
    case 822u: goto L_08B0F494;
    case 823u: goto L_08B0F49C;
    case 824u: goto L_08B0F4A4;
    case 825u: goto L_08B0F4AC;
    case 826u: goto L_08B0F4B4;
    case 827u: goto L_08B0F4C0;
    case 828u: goto L_08B0F4CC;
    case 829u: goto L_08B0F4D4;
    case 830u: goto L_08B0F4DC;
    case 831u: goto L_08B0F4E4;
    case 832u: goto L_08B0F4EC;
    case 833u: goto L_08B0F4F4;
    case 834u: goto L_08B0F4FC;
    case 835u: goto L_08B0F504;
    case 836u: goto L_08B0F514;
    case 837u: goto L_08B0F524;
    case 838u: goto L_08B0F534;
    case 839u: goto L_08B0F544;
    case 840u: goto L_08B0F558;
    case 841u: goto L_08B0F56C;
    case 842u: goto L_08B0F578;
    case 843u: goto L_08B0F588;
    case 844u: goto L_08B0F598;
    case 845u: goto L_08B0F5A4;
    case 846u: goto L_08B0F5B0;
    case 847u: goto L_08B0F5B8;
    case 848u: goto L_08B0F5C0;
    case 849u: goto L_08B0F5C8;
    case 850u: goto L_08B0F5D0;
    case 851u: goto L_08B0F5D8;
    case 852u: goto L_08B0F5E0;
    case 853u: goto L_08B0F5F4;
    case 854u: goto L_08B0F604;
    case 855u: goto L_08B0F618;
    case 856u: goto L_08B0F628;
    case 857u: goto L_08B0F634;
    case 858u: goto L_08B0F63C;
    case 859u: goto L_08B0F640;
    case 860u: goto L_08B0F64C;
    case 861u: goto L_08B0F658;
    case 862u: goto L_08B0F664;
    case 863u: goto L_08B0F670;
    case 864u: goto L_08B0F67C;
    case 865u: goto L_08B0F680;
    case 866u: goto L_08B0F68C;
    case 867u: goto L_08B0F698;
    case 868u: goto L_08B0F6A0;
    case 869u: goto L_08B0F6A8;
    case 870u: goto L_08B0F6B4;
    case 871u: goto L_08B0F6C0;
    case 872u: goto L_08B0F6D0;
    case 873u: goto L_08B0F6D4;
    case 874u: goto L_08B0F6E8;
    case 875u: goto L_08B0F6F8;
    case 876u: goto L_08B0F704;
    case 877u: goto L_08B0F710;
    case 878u: goto L_08B0F71C;
    case 879u: goto L_08B0F728;
    case 880u: goto L_08B0F734;
    case 881u: goto L_08B0F740;
    case 882u: goto L_08B0F74C;
    case 883u: goto L_08B0F758;
    case 884u: goto L_08B0F760;
    case 885u: goto L_08B0F79C;
    case 886u: goto L_08B0F7A4;
    case 887u: goto L_08B0F7A8;
    case 888u: goto L_08B0F7B0;
    case 889u: goto L_08B0F7B4;
    case 890u: goto L_08B0F7BC;
    case 891u: goto L_08B0F7C8;
    case 892u: goto L_08B0F7D0;
    case 893u: goto L_08B0F7D8;
    case 894u: goto L_08B0F7DC;
    case 895u: goto L_08B0F7F0;
    case 896u: goto L_08B0F804;
    case 897u: goto L_08B0F838;
    case 898u: goto L_08B0F848;
    case 899u: goto L_08B0F8E8;
    case 900u: goto L_08B0F934;
    case 901u: goto L_08B0F974;
    case 902u: goto L_08B0FE48;
    case 903u: goto L_08B0FE64;
    case 904u: goto L_08B0FE88;
    case 905u: goto L_08B0FEA0;
    case 906u: goto L_08B0FF38;
    case 907u: goto L_08B0FF5C;
    case 908u: goto L_08B0FF74;
    case 909u: goto L_08B0FF84;
    case 910u: goto L_08B0FF8C;
    case 911u: goto L_08B0FFB8;
    case 912u: goto L_08B0FFD4;
    case 913u: goto L_08B0FFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B0C01C:
    // nop
    goto L_08B0C020;
L_08B0C020:
    (void)(ctx.gpr[1] << 0u);
    ctx.gpr[1] = (ctx.gpr[26] & 21575u);
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B0C044u, 0x08B0BE10u, "control flow in delay slot"); return;
L_08B0C058:
    rt.unsupported(0x08B0C058u, 0x69466F49u, "unknown not lowered yet"); return;
L_08B0C070:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0C074u, 0x63657845u, "vfpu0 not lowered yet"); return;
L_08B0C080:
    // nop
    goto L_08B0C084;
L_08B0C084:
    rt.unsupported(0x08B0C084u, 0x75646F4Du, "unknown not lowered yet"); return;
L_08B0C09C:
    rt.unsupported(0x08B0C09Cu, 0x69647453u, "unknown not lowered yet"); return;
L_08B0C0B0:
    rt.unsupported(0x08B0C0B0u, 0x4D737953u, "unknown not lowered yet"); return;
L_08B0C0C8:
    ctx.execute_vfpu_vscl_ct<84u, 104u, 114u, 1u>();
    rt.unsupported(0x08B0C0CCu, 0x614D6461u, "vfpu0 not lowered yet"); return;
L_08B0C0E0:
    ctx.execute_vfpu_vcmp_ct<116u, 105u, 1u, 5u>();
    rt.unsupported(0x08B0C0E4u, 0x726F4673u, "unknown not lowered yet"); return;
L_08B0C0F4:
    if (ctx.gpr[27] == ctx.gpr[5]) {
    ctx.execute_vfpu_vscl_ct<117u, 115u, 112u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 486u, 0x08B24EC4u>(ctx, &aot_mem); return;
    }
    goto L_08B0C0FC;
L_08B0C0FC:
    ctx.execute_vfpu_compare3(110u, 100u, 70u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<114u, 85u, 115u, 1u>();
    rt.unsupported(0x08B0C104u, 0x00000072u, "special? not lowered yet"); return;
L_08B0C10C:
    rt.unsupported(0x08B0C10Cu, 0x41656373u, "unknown not lowered yet"); return;
L_08B0C11C:
    if (ctx.gpr[27] == ctx.gpr[5]) {
    ctx.execute_vfpu_compare3(97u, 115u, 67u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 492u, 0x08B24EECu>(ctx, &aot_mem); return;
    }
    goto L_08B0C124;
L_08B0C124:
    rt.unsupported(0x08B0C124u, 0x00006572u, "special? not lowered yet"); return;
L_08B0C12C:
    rt.unsupported(0x08B0C12Cu, 0x41656373u, "unknown not lowered yet"); return;
L_08B0C140:
    rt.unsupported(0x08B0C140u, 0x47656373u, "cop1? not lowered yet"); return;
L_08B0C150:
    rt.unsupported(0x08B0C150u, 0x43656373u, "unknown not lowered yet"); return;
L_08B0C15C:
    rt.unsupported(0x08B0C15Cu, 0x44656373u, "cop1? not lowered yet"); return;
L_08B0C16C:
    rt.unsupported(0x08B0C16Cu, 0x4D656373u, "unknown not lowered yet"); return;
L_08B0C178:
    if (ctx.gpr[11] != ctx.gpr[5]) {
    rt.unsupported(0x08B0C17Cu, 0x7355646Du, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 504u, 0x08B24F48u>(ctx, &aot_mem); return;
    }
    goto L_08B0C180;
L_08B0C180:
    ctx.gpr[14] = (0u | 0u);
    // nop
    goto L_08B0C188;
L_08B0C188:
    if (ctx.gpr[11] != ctx.gpr[5]) {
    rt.unsupported(0x08B0C18Cu, 0x696C6974u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 506u, 0x08B24F58u>(ctx, &aot_mem); return;
    }
    goto L_08B0C190;
L_08B0C190:
    rt.unsupported(0x08B0C190u, 0x00007974u, "special? not lowered yet"); return;
L_08B0C198:
    if (ctx.gpr[3] == ctx.gpr[5]) {
    rt.unsupported(0x08B0C19Cu, 0x7265776Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 508u, 0x08B24F68u>(ctx, &aot_mem); return;
    }
    goto L_08B0C1A0;
L_08B0C1A0:
    // nop
    // nop
    goto L_08B0C1A8;
L_08B0C1A8:
    rt.unsupported(0x08B0C1A8u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0C1B4:
    rt.unsupported(0x08B0C1B4u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0C1C4:
    rt.unsupported(0x08B0C1C4u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0C1D8:
    rt.unsupported(0x08B0C1D8u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0C1F0:
    if (ctx.gpr[19] == ctx.gpr[5]) {
    rt.unsupported(0x08B0C1F4u, 0x00006374u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 519u, 0x08B24FC0u>(ctx, &aot_mem); return;
    }
    goto L_08B0C1F8;
L_08B0C1F8:
    // nop
    goto L_08B0C1FC;
L_08B0C1FC:
    if (ctx.gpr[27] != ctx.gpr[5]) {
    rt.unsupported(0x08B0C200u, 0x446E616Cu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 521u, 0x08B24FCCu>(ctx, &aot_mem); return;
    }
    goto L_08B0C204;
L_08B0C204:
    rt.unsupported(0x08B0C204u, 0x00007672u, "special? not lowered yet"); return;
L_08B0C20C:
    ctx.execute_vfpu_vscl_ct<73u, 110u, 116u, 1u>();
    rt.unsupported(0x08B0C210u, 0x70757272u, "unknown not lowered yet"); return;
L_08B0C220:
    rt.unsupported(0x08B0C220u, 0xD632ACDBu, "vfpu not lowered yet"); return;
L_08B0C234:
    rt.unsupported(0x08B0C238u, 0x08AEA290u, "control flow in delay slot"); return;
L_08B0C248:
    ctx.set_vfpu_scalar_bits_ct<36u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23880)));
    rt.unsupported(0x08B0C24Cu, 0xD61E6961u, "vfpu not lowered yet"); return;
L_08B0C254:
    rt.unsupported(0x08B0C254u, 0xD7763699u, "vfpu not lowered yet"); return;
L_08B0C258:
    ctx.execute_vfpu_compare3(76u, 10u, 116u, 2u, 7u);
    rt.unsupported(0x08B0C25Cu, 0x9ED0AE87u, "unknown not lowered yet"); return;
L_08B0C260:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 7687 ? 1u : 0u);
    rt.unsupported(0x08B0C264u, 0x7945ECDAu, "unknown not lowered yet"); return;
L_08B0C280:
    rt.unsupported(0x08B0C280u, 0xB58E61B7u, "unknown not lowered yet"); return;
L_08B0C284:
    rt.unsupported(0x08B0C284u, 0xE26F226Eu, "unknown not lowered yet"); return;
L_08B0C2AC:
    rt.unsupported(0x08B0C2ACu, 0xE1D621D7u, "unknown not lowered yet"); return;
L_08B0C2E4:
    ctx.gpr[15] = (ctx.gpr[13] ^ 14758u);
    goto L_08B0C2E8;
L_08B0C2E8:
    ctx.gpr[25] = (static_cast<std::int32_t>(0u) < 10409 ? 1u : 0u);
    ctx.gpr[22] = (rt.memory().aot_load_word_left(ctx.gpr[9] + static_cast<std::uint32_t>(2384), ctx.gpr[22]));
    rt.unsupported(0x08B0C2F4u, 0x04B7766Eu, "regimm? not lowered yet"); return;
    ctx.pc = 0x0FC28EB8u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B0C2F4:
    rt.unsupported(0x08B0C2F4u, 0x04B7766Eu, "regimm? not lowered yet"); return;
L_08B0C300:
    if (ctx.gpr[6] == ctx.gpr[4]) {
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-19652)));
        (void)rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 817u, 0x08AFF860u>(ctx, &aot_mem); return;
    }
    goto L_08B0C308;
L_08B0C308:
    rt.unsupported(0x08B0C308u, 0xD4B95FFBu, "vfpu not lowered yet"); return;
L_08B0C330:
    rt.unsupported(0x08B0C330u, 0x46EBB729u, "cop1? not lowered yet"); return;
L_08B0C344:
    rt.unsupported(0x08B0C344u, 0x20628E6Fu, "unknown not lowered yet"); return;
L_08B0C350:
    rt.unsupported(0x08B0C350u, 0x21FF80E4u, "unknown not lowered yet"); return;
L_08B0C378:
    rt.unsupported(0x08B0C378u, 0xCEB870B1u, "unknown not lowered yet"); return;
L_08B0C388:
    rt.unsupported(0x08B0C388u, 0xE1CE83A7u, "unknown not lowered yet"); return;
L_08B0C398:
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(0u + static_cast<std::uint32_t>(17631))))));
    rt.unsupported(0x08B0C39Cu, 0xD7A29F46u, "vfpu not lowered yet"); return;
L_08B0C3AC:
    rt.unsupported(0x08B0C3ACu, 0xB5F6DC87u, "unknown not lowered yet"); return;
L_08B0C3B0:
    ctx.gpr[31] = (0x08B0C3B8u);
    ctx.gpr[29] = (static_cast<std::int32_t>(ctx.gpr[4]) < -32002 ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 80u, 0x0883C5DCu>(ctx, &aot_mem) && ctx.pc == 0x08B0C3B8u) goto L_08B0C3B8;
    return;
L_08B0C3B8:
    rt.unsupported(0x08B0C3B8u, 0x4D4E10ECu, "unknown not lowered yet"); return;
L_08B0C3C8:
    rt.unsupported(0x08B0C3C8u, 0x6A2774F3u, "unknown not lowered yet"); return;
L_08B0C3D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[27]) > 0;
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16612), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 122u, 0x08B20E8Cu>(ctx, &aot_mem); return;
      }
      goto L_08B0C3DC;
    }
L_08B0C3DC:
    rt.memory().aot_store_word_left(ctx.gpr[26] + static_cast<std::uint32_t>(-6294), ctx.gpr[9]);
    rt.unsupported(0x08B0C3E0u, 0xB287BD61u, "unknown not lowered yet"); return;
L_08B0C3EC:
    rt.unsupported(0x08B0C3ECu, 0x61EB33F5u, "vfpu0 not lowered yet"); return;
L_08B0C3F8:
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[23] + static_cast<std::uint32_t>(18855), ctx.gpr[8]));
    if (static_cast<std::int32_t>(ctx.gpr[9]) > 0) {
    rt.unsupported(0x08B0C400u, 0x7DB31251u, "special3? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 562u, 0x08AEE01Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0C404;
L_08B0C404:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(-22338), static_cast<std::uint8_t>(ctx.gpr[27]));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(-24232), static_cast<std::uint16_t>(ctx.gpr[20]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<36u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(-1896);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8373))))));
    ctx.set_vfpu_scalar_bits_ct<92u>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23600)));
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<86u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<78u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<7u, 1u>(vfpu_d); }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(30104), ctx.vfpu_scalar_bits_ct<111u>());
    goto L_08B0C420;
L_08B0C420:
    aot_mem.aot_store8(ctx.gpr[26] + static_cast<std::uint32_t>(-25215), static_cast<std::uint8_t>(ctx.gpr[24]));
    if (ctx.gpr[5] == ctx.gpr[1]) {
    rt.unsupported(0x08B0C428u, 0x68A46B95u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 795u, 0x08B1FC18u>(ctx, &aot_mem); return;
    }
    goto L_08B0C42C;
L_08B0C42C:
    ctx.gpr[12] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-11393), ctx.gpr[4]);
    ctx.gpr[20] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(16521), ctx.gpr[20]));
    rt.unsupported(0x08B0C438u, 0xB7660A23u, "unknown not lowered yet"); return;
L_08B0C44C:
    ctx.set_vfpu_scalar_bits_ct<45u>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20344)));
    rt.unsupported(0x08B0C450u, 0x42778A9Fu, "unknown not lowered yet"); return;
L_08B0C46C:
    { const bool branch_taken = ctx.gpr[27] == ctx.gpr[12];
    rt.unsupported(0x08B0C470u, 0xE2D56B2Du, "unknown not lowered yet"); return;
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 23u, 0x08AF81B4u>(ctx, &aot_mem); return;
      }
      goto L_08B0C474;
    }
L_08B0C474:
    rt.unsupported(0x08B0C478u, 0x5EC81C55u, "control flow in delay slot"); return;
L_08B0C47C:
    ctx.execute_vfpu_compare3(83u, 104u, 68u, 1u, 7u);
    rt.unsupported(0x08B0C480u, 0xB011922Fu, "unknown not lowered yet"); return;
L_08B0C490:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(7124), ctx.vfpu_scalar_bits_ct<123u>());
    ctx.gpr[14] = (ctx.gpr[23] ^ 29281u);
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(16562), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.pc = 0x04332CFCu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B0C4A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(-2393)));
    ctx.gpr[12] = (ctx.gpr[30] + static_cast<std::uint32_t>(22512));
    rt.unsupported(0x08B0C4ACu, 0x71EC4271u, "unknown not lowered yet"); return;
L_08B0C4BC:
    ctx.gpr[29] = (ctx.gpr[4] | 28012u);
    rt.unsupported(0x08B0C4C0u, 0x446D8DE6u, "cop1? not lowered yet"); return;
L_08B0C51C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[29]) > 0;
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(18148))))));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 687u, 0x08B22DE8u>(ctx, &aot_mem); return;
      }
      goto L_08B0C524;
    }
L_08B0C524:
    rt.unsupported(0x08B0C524u, 0x402FCF22u, "unknown not lowered yet"); return;
L_08B0C558:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-3833), static_cast<std::uint8_t>(ctx.gpr[17]));
    rt.unsupported(0x08B0C55Cu, 0x237DBD4Fu, "unknown not lowered yet"); return;
L_08B0C574:
    { const bool branch_taken = ctx.gpr[25] != ctx.gpr[13];
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(-19735), static_cast<std::uint16_t>(ctx.gpr[26]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 95u, 0x08B18B30u>(ctx, &aot_mem); return;
      }
      goto L_08B0C57C;
    }
L_08B0C578:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(-19735), static_cast<std::uint16_t>(ctx.gpr[26]));
    goto L_08B0C57C;
L_08B0C57C:
    rt.unsupported(0x08B0C57Cu, 0xF78BA90Au, "vfpu not lowered yet"); return;
L_08B0C580:
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 99u, 2u);
      ctx.read_vfpu_vector_ct<34u, 2u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 2u;
      constexpr std::uint32_t vfpu_input_length = 2u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 21u, vfpu_side); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(12580);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<55u, 4u>(vfpu_value); }
    rt.unsupported(0x08B0C588u, 0xB7F46618u, "unknown not lowered yet"); return;
L_08B0C594:
    ctx.gpr[9] = (ctx.gpr[16] < static_cast<std::uint32_t>(4522) ? 1u : 0u);
    rt.unsupported(0x08B0C598u, 0xD675EBB8u, "vfpu not lowered yet"); return;
L_08B0C59C:
    rt.unsupported(0x08B0C59Cu, 0x05572A5Fu, "regimm? not lowered yet"); return;
L_08B0C5A4:
    ctx.gpr[17] = (ctx.gpr[18] & 59990u);
    rt.unsupported(0x08B0C5A8u, 0x6A638D83u, "unknown not lowered yet"); return;
L_08B0C5E0:
    rt.unsupported(0x08B0C5E0u, 0xB293727Fu, "unknown not lowered yet"); return;
L_08B0C5F4:
    // nop
    // nop
    // nop
    goto L_08B0C600;
L_08B0C600:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B0C604u, 0x00006576u, "special? not lowered yet"); return;
L_08B0C608:
    rt.unsupported(0x08B0C608u, 0x42736148u, "unknown not lowered yet"); return;
L_08B0C614:
    rt.unsupported(0x08B0C614u, 0x63675F5Fu, "vfpu0 not lowered yet"); return;
L_08B0C61C:
    if (ctx.gpr[27] != ctx.gpr[20]) {
    ctx.execute_vfpu_compare3(97u, 121u, 112u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 907u, 0x08B25B6Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0C624;
L_08B0C624:
    rt.unsupported(0x08B0C624u, 0x00746E69u, "special? not lowered yet"); return;
L_08B0C628:
    if (ctx.gpr[27] != ctx.gpr[19]) {
    ctx.execute_vfpu_compare3(97u, 121u, 112u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 368u, 0x08B24B4Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0C630;
L_08B0C630:
    rt.unsupported(0x08B0C630u, 0x42746E69u, "unknown not lowered yet"); return;
L_08B0C63C:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B0C640u, 0x61576576u, "vfpu0 not lowered yet"); return;
L_08B0C64C:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    ctx.execute_vfpu_compare3(65u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B0C654u, 0x73695677u, "unknown not lowered yet"); return;
L_08B0C660:
    ctx.gpr[20] = (ctx.vfpu_scalar_bits_ct<83u>());
    ctx.gpr[13] = (ctx.gpr[3] + ctx.gpr[15]);
    goto L_08B0C668;
L_08B0C668:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B0C66Cu, 0x61486576u, "vfpu0 not lowered yet"); return;
L_08B0C674:
    rt.unsupported(0x08B0C674u, 0x70796177u, "unknown not lowered yet"); return;
L_08B0C680:
    ctx.execute_vfpu_compare3(104u, 97u, 108u, 1u, 6u);
    // nop
    goto L_08B0C688;
L_08B0C688:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B0C68Cu, 0x00000072u, "special? not lowered yet"); return;
L_08B0C690:
    ctx.execute_vfpu_vminmax(103u, 101u, 116u, 1u, false);
    rt.unsupported(0x08B0C694u, 0x74617465u, "unknown not lowered yet"); return;
L_08B0C6A0:
    ctx.execute_vfpu_vminmax(115u, 101u, 116u, 1u, false);
    rt.unsupported(0x08B0C6A4u, 0x74617465u, "unknown not lowered yet"); return;
L_08B0C6B0:
    ctx.execute_vfpu_vhdp(103u, 101u, 116u, 1u);
    ctx.gpr[13] = (ctx.gpr[3] | ctx.gpr[22]);
    goto L_08B0C6B8;
L_08B0C6B8:
    ctx.execute_vfpu_vhdp(115u, 101u, 116u, 1u);
    ctx.gpr[13] = (ctx.gpr[3] | ctx.gpr[22]);
    goto L_08B0C6C0;
L_08B0C6C0:
    rt.unsupported(0x08B0C6C0u, 0x7478656Eu, "unknown not lowered yet"); return;
L_08B0C6C8:
    rt.unsupported(0x08B0C6C8u, 0x69617069u, "unknown not lowered yet"); return;
L_08B0C6D0:
    rt.unsupported(0x08B0C6D0u, 0x72696170u, "unknown not lowered yet"); return;
L_08B0C6D8:
    rt.unsupported(0x08B0C6D8u, 0x6E697270u, "vfpu3 not lowered yet"); return;
L_08B0C6E0:
    rt.unsupported(0x08B0C6E0u, 0x756E6F74u, "unknown not lowered yet"); return;
L_08B0C6EC:
    rt.unsupported(0x08B0C6ECu, 0x74736F74u, "unknown not lowered yet"); return;
L_08B0C6F8:
    ctx.execute_vfpu_vscl_ct<116u, 121u, 112u, 1u>();
    // nop
    goto L_08B0C700;
L_08B0C700:
    ctx.execute_vfpu_vscl_ct<97u, 115u, 115u, 1u>();
    rt.unsupported(0x08B0C704u, 0x00007472u, "special? not lowered yet"); return;
L_08B0C708:
    rt.unsupported(0x08B0C708u, 0x61706E75u, "vfpu0 not lowered yet"); return;
L_08B0C710:
    ctx.execute_vfpu_vscl_ct<114u, 97u, 119u, 1u>();
    ctx.execute_vfpu_vcmp_ct<117u, 97u, 1u, 1u>();
    // nop
    goto L_08B0C71C;
L_08B0C71C:
    rt.unsupported(0x08B0C71Cu, 0x67776172u, "vfpu1 not lowered yet"); return;
L_08B0C724:
    rt.unsupported(0x08B0C724u, 0x73776172u, "unknown not lowered yet"); return;
L_08B0C72C:
    ctx.execute_vfpu_vcmp_ct<99u, 97u, 1u, 0u>();
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B0C734;
L_08B0C734:
    rt.unsupported(0x08B0C734u, 0x61637078u, "vfpu0 not lowered yet"); return;
L_08B0C73C:
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 3u>();
    rt.unsupported(0x08B0C740u, 0x67746365u, "vfpu1 not lowered yet"); return;
L_08B0C74C:
    rt.unsupported(0x08B0C74Cu, 0x6E696367u, "vfpu3 not lowered yet"); return;
L_08B0C754:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<102u, 105u, 108u, 1u>();
    // nop
    goto L_08B0C760;
L_08B0C760:
    rt.unsupported(0x08B0C760u, 0x69666F64u, "unknown not lowered yet"); return;
L_08B0C768:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0C76Cu, 0x69727473u, "unknown not lowered yet"); return;
L_08B0C774:
    rt.unsupported(0x08B0C774u, 0x75716572u, "unknown not lowered yet"); return;
L_08B0C77C:
    rt.unsupported(0x08B0C77Cu, 0x61657263u, "vfpu0 not lowered yet"); return;
L_08B0C784:
    rt.unsupported(0x08B0C784u, 0x70617277u, "unknown not lowered yet"); return;
L_08B0C78C:
    rt.unsupported(0x08B0C78Cu, 0x75736572u, "unknown not lowered yet"); return;
L_08B0C794:
    ctx.execute_vfpu_vcmp_ct<105u, 101u, 1u, 9u>();
    (void)(0u & 0u);
    goto L_08B0C79C;
L_08B0C79C:
    rt.unsupported(0x08B0C79Cu, 0x74617473u, "unknown not lowered yet"); return;
L_08B0C7A4:
    rt.unsupported(0x08B0C7A4u, 0x736F7460u, "unknown not lowered yet"); return;
L_08B0C7D0:
    jump_target = 0u;
    ctx.gpr[31] = (0x08B0C7D8u);
    if (0u == 0u) (void)(0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B0C7D8u) goto L_08B0C7D8;
    return;
L_08B0C7D4:
    if (0u == 0u) (void)(0u);
    goto L_08B0C7D8;
L_08B0C7D8:
    ctx.execute_vfpu_vscl_ct<98u, 97u, 115u, 1u>();
    rt.unsupported(0x08B0C7DCu, 0x74756F20u, "unknown not lowered yet"); return;
L_08B0C7EC:
    ctx.execute_vfpu_vscl_ct<95u, 95u, 109u, 1u>();
    rt.unsupported(0x08B0C7F0u, 0x61746174u, "vfpu0 not lowered yet"); return;
L_08B0C7F8:
    rt.unsupported(0x08B0C7F8u, 0x206C696Eu, "unknown not lowered yet"); return;
L_08B0C810:
    rt.unsupported(0x08B0C810u, 0x6E6E6163u, "vfpu3 not lowered yet"); return;
L_08B0C834:
    ctx.execute_vfpu_vscl_ct<108u, 101u, 118u, 1u>();
    rt.unsupported(0x08B0C838u, 0x756D206Cu, "unknown not lowered yet"); return;
L_08B0C850:
    rt.unsupported(0x08B0C850u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B0C860:
    (void)(0u ^ 0u);
    goto L_08B0C864;
L_08B0C864:
    ctx.execute_vfpu_vhdp(110u, 111u, 32u, 1u);
    rt.unsupported(0x08B0C868u, 0x74636E75u, "unknown not lowered yet"); return;
L_08B0C898:
    ctx.execute_vfpu_vscl_ct<95u, 95u, 102u, 1u>();
    rt.unsupported(0x08B0C89Cu, 0x0000766Eu, "special? not lowered yet"); return;
L_08B0C8A0:
    rt.unsupported(0x08B0C8A0u, 0x74657360u, "unknown not lowered yet"); return;
L_08B0C8D0:
    rt.unsupported(0x08B0C8D0u, 0x74657360u, "unknown not lowered yet"); return;
L_08B0C908:
    ctx.gpr[14] = (0u | 0u);
    goto L_08B0C90C;
L_08B0C90C:
    ctx.execute_vfpu_vscl_ct<97u, 115u, 115u, 1u>();
    ctx.execute_vfpu_compare3(114u, 116u, 105u, 1u, 6u);
    rt.unsupported(0x08B0C914u, 0x6166206Eu, "vfpu0 not lowered yet"); return;
L_08B0C920:
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 4u>();
    ctx.execute_vfpu_compare3(101u, 32u, 116u, 1u, 6u);
    rt.unsupported(0x08B0C928u, 0x6962206Fu, "unknown not lowered yet"); return;
L_08B0C938:
    ctx.execute_vfpu_compare3(95u, 95u, 116u, 1u, 6u);
    rt.unsupported(0x08B0C93Cu, 0x69727473u, "unknown not lowered yet"); return;
L_08B0C944:
    ctx.execute_vfpu_vscl_ct<116u, 114u, 117u, 1u>();
    // nop
    rt.unsupported(0x08B0C94Cu, 0x736C6166u, "unknown not lowered yet"); return;
L_08B0C954:
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 4u>();
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(14949));
    rt.unsupported(0x08B0C95Cu, 0x00000070u, "special? not lowered yet"); return;
L_08B0C960:
    rt.unsupported(0x08B0C960u, 0x636E7566u, "vfpu0 not lowered yet"); return;
L_08B0C970:
    rt.unsupported(0x08B0C970u, 0x72657375u, "unknown not lowered yet"); return;
L_08B0C980:
    ctx.execute_vfpu_vscl_ct<116u, 104u, 114u, 1u>();
    rt.unsupported(0x08B0C984u, 0x203A6461u, "unknown not lowered yet"); return;
L_08B0C98C:
    rt.unsupported(0x08B0C98Cu, 0x006C696Eu, "special? not lowered yet"); return;
L_08B0C990:
    ctx.execute_vfpu_vcmp_ct<111u, 111u, 1u, 2u>();
    rt.unsupported(0x08B0C994u, 0x206E6165u, "unknown not lowered yet"); return;
L_08B0C9AC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B0C9B0u, 0x48544150u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 252u, 0x08B21EE0u>(ctx, &aot_mem); return;
    }
    goto L_08B0C9B4;
L_08B0C9B4:
    // nop
    goto L_08B0C9B8;
L_08B0C9B8:
    ctx.gpr[31] = (ctx.gpr[17] < static_cast<std::uint32_t>(15167) ? 1u : 0u);
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[3]) > static_cast<std::int32_t>(ctx.gpr[1]) ? ctx.gpr[3] : ctx.gpr[1]);
    goto L_08B0C9C0;
L_08B0C9C0:
    rt.unsupported(0x08B0C9C0u, 0x206F6F74u, "unknown not lowered yet"); return;
L_08B0C9E4:
    rt.unsupported(0x08B0C9E4u, 0x414F4C5Fu, "unknown not lowered yet"); return;
L_08B0C9EC:
    rt.unsupported(0x08B0C9ECu, 0x4F4C5F60u, "unknown not lowered yet"); return;
L_08B0CA08:
    if (ctx.gpr[10] == ctx.gpr[5]) {
    rt.unsupported(0x08B0CA0Cu, 0x45524955u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 173u, 0x08B21388u>(ctx, &aot_mem); return;
    }
    goto L_08B0CA10;
L_08B0CA10:
    rt.unsupported(0x08B0CA10u, 0x4D414E44u, "unknown not lowered yet"); return;
L_08B0CA18:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    ctx.execute_vfpu_compare3(100u, 32u, 110u, 1u, 6u);
    ctx.execute_vfpu_compare3(116u, 32u, 108u, 1u, 6u);
    rt.unsupported(0x08B0CA24u, 0x70206461u, "unknown not lowered yet"); return;
L_08B0CA44:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    ctx.execute_vfpu_compare3(114u, 32u, 108u, 1u, 6u);
    rt.unsupported(0x08B0CA4Cu, 0x6E696461u, "vfpu3 not lowered yet"); return;
L_08B0CA64:
    rt.unsupported(0x08B0CA64u, 0x206F6F74u, "unknown not lowered yet"); return;
L_08B0CA84:
    rt.unsupported(0x08B0CA84u, 0x206F6F74u, "unknown not lowered yet"); return;
L_08B0CAA0:
    ctx.execute_vfpu_compare3(99u, 111u, 114u, 1u, 6u);
    rt.unsupported(0x08B0CAA4u, 0x6E697475u, "vfpu3 not lowered yet"); return;
L_08B0CAB4:
    rt.unsupported(0x08B0CAB4u, 0x2061754Cu, "unknown not lowered yet"); return;
L_08B0CACC:
    rt.unsupported(0x08B0CACCu, 0x6E6E7572u, "vfpu3 not lowered yet"); return;
L_08B0CAD4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_d); }
    // nop
    goto L_08B0CADC;
L_08B0CADC:
    rt.unsupported(0x08B0CADCu, 0x70737573u, "unknown not lowered yet"); return;
L_08B0CAE8:
    rt.unsupported(0x08B0CAE8u, 0x0000475Fu, "special? not lowered yet"); return;
L_08B0CAEC:
    if (ctx.gpr[18] == ctx.gpr[5]) {
    rt.unsupported(0x08B0CAF0u, 0x4E4F4953u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 371u, 0x08B2246Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0CAF4;
L_08B0CAF4:
    // nop
    goto L_08B0CAF8;
L_08B0CAF8:
    rt.unsupported(0x08B0CAF8u, 0x2061754Cu, "unknown not lowered yet"); return;
L_08B0CB04:
    rt.unsupported(0x08B0CB04u, 0x7077656Eu, "unknown not lowered yet"); return;
L_08B0CB10:
    ctx.execute_vfpu_compare3(95u, 95u, 109u, 1u, 6u);
    ctx.gpr[12] = (0u & 0u);
    goto L_08B0CB18;
L_08B0CB18:
    (void)(0u < 0u ? 1u : 0u);
    goto L_08B0CB1C;
L_08B0CB1C:
    ctx.execute_vfpu_compare3(99u, 111u, 114u, 1u, 6u);
    rt.unsupported(0x08B0CB20u, 0x6E697475u, "vfpu3 not lowered yet"); return;
L_08B0CB58:
    rt.unsupported(0x08B0CB58u, 0x2074756Fu, "unknown not lowered yet"); return;
L_08B0CB68:
    rt.unsupported(0x08B0CB68u, 0x69797254u, "unknown not lowered yet"); return;
L_08B0CB98:
    rt.unsupported(0x08B0CB98u, 0x4E726143u, "unknown not lowered yet"); return;
L_08B0CBB8:
    ctx.gpr[31] = (ctx.gpr[10] & 16711u);
    rt.unsupported(0x08B0CBBCu, 0x00000032u, "special? not lowered yet"); return;
L_08B0CBC0:
    rt.unsupported(0x08B0CBC4u, 0x53205349u, "control flow in delay slot"); return;
L_08B0CBC8:
    // nop
    ctx.pc = 0x09513914u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B0CF40:
    rt.unsupported(0x08B0CF40u, 0x74726170u, "unknown not lowered yet"); return;
L_08B0CF4C:
    rt.unsupported(0x08B0CF4Cu, 0x6B6F6D73u, "unknown not lowered yet"); return;
L_08B0D008:
    rt.unsupported(0x08B0D008u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B0D024:
    ctx.execute_vfpu_compare3(67u, 83u, 104u, 1u, 6u);
    ctx.execute_vfpu_vhdp(116u, 73u, 110u, 1u);
    ctx.execute_vfpu_vscl_ct<111u, 32u, 114u, 1u>();
    // nop
    ctx.pc = 0x09E59184u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B0D048:
    ctx.gpr[7] = (ctx.gpr[2] ^ 20039u);
    // nop
    goto L_08B0D050;
L_08B0D050:
    ctx.gpr[7] = (ctx.gpr[10] ^ 20039u);
    // nop
    goto L_08B0D058;
L_08B0D058:
    ctx.gpr[7] = (ctx.gpr[10] & 20039u);
    // nop
    goto L_08B0D060;
L_08B0D060:
    ctx.gpr[7] = (ctx.gpr[18] & 20039u);
    // nop
    goto L_08B0D068;
L_08B0D068:
    ctx.gpr[7] = (ctx.gpr[26] & 20039u);
    // nop
    goto L_08B0D070;
L_08B0D070:
    ctx.gpr[7] = (ctx.gpr[2] | 20039u);
    // nop
    goto L_08B0D078;
L_08B0D078:
    ctx.gpr[7] = (ctx.gpr[10] | 20039u);
    // nop
    goto L_08B0D080;
L_08B0D080:
    ctx.gpr[7] = (ctx.gpr[2] & 20039u);
    // nop
    goto L_08B0D088;
L_08B0D088:
    ctx.gpr[7] = (ctx.gpr[26] | 20039u);
    // nop
    goto L_08B0D090;
L_08B0D090:
    ctx.gpr[7] = (ctx.gpr[18] | 20039u);
    // nop
    goto L_08B0D098;
L_08B0D098:
    rt.unsupported(0x08B0D098u, 0x21212121u, "unknown not lowered yet"); return;
L_08B0D0B0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0D0B4u, 0x00316373u, "special? not lowered yet"); return;
L_08B0D0B8:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    rt.unsupported(0x08B0D0BCu, 0x73616820u, "unknown not lowered yet"); return;
L_08B0D0E0:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B0D0E4u, 0x6877202Au, "unknown not lowered yet"); return;
L_08B0D100:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B0D104u, 0x6877202Au, "unknown not lowered yet"); return;
L_08B0D120:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B0D124u, 0x6877202Au, "unknown not lowered yet"); return;
L_08B0D140:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D144u, 0x0053435Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 588u, 0x08B1E65Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0D148;
L_08B0D148:
    if (ctx.gpr[2] != ctx.gpr[12]) {
    rt.unsupported(0x08B0D14Cu, 0x41472049u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 442u, 0x08B22680u>(ctx, &aot_mem); return;
    }
    goto L_08B0D150;
L_08B0D150:
    rt.unsupported(0x08B0D150u, 0x0000454Du, "special? not lowered yet"); return;
L_08B0D154:
    rt.unsupported(0x08B0D154u, 0x74746553u, "unknown not lowered yet"); return;
L_08B0D184:
    rt.unsupported(0x08B0D188u, 0x54414D48u, "control flow in delay slot"); return;
L_08B0D18C:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 1u));
    goto L_08B0D190;
L_08B0D190:
    ctx.execute_vfpu_compare3(109u, 112u, 108u, 1u, 6u);
    ctx.gpr[12] = (ctx.gpr[1] + ctx.gpr[16]);
    goto L_08B0D198;
L_08B0D198:
    rt.unsupported(0x08B0D198u, 0x49525554u, "cop2/vfpu not lowered yet"); return;
L_08B0D1A0:
    ctx.execute_vfpu_compare3(109u, 112u, 108u, 1u, 6u);
    ctx.gpr[12] = (ctx.gpr[1] + ctx.gpr[17]);
    goto L_08B0D1A8;
L_08B0D1A8:
    ctx.gpr[10] = (ctx.gpr[2] << (ctx.gpr[2] & 31u));
    goto L_08B0D1AC;
L_08B0D1AC:
    ctx.execute_vfpu_compare3(109u, 112u, 108u, 1u, 6u);
    ctx.gpr[12] = (ctx.gpr[1] + ctx.gpr[18]);
    goto L_08B0D1B4;
L_08B0D1B4:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 17u));
    goto L_08B0D1B8;
L_08B0D1B8:
    ctx.execute_vfpu_compare3(109u, 112u, 108u, 1u, 6u);
    ctx.gpr[12] = (ctx.gpr[1] + ctx.gpr[19]);
    goto L_08B0D1C0;
L_08B0D1C0:
    rt.unsupported(0x08B0D1C0u, 0x4B4E4154u, "cop2/vfpu not lowered yet"); return;
L_08B0D1C8:
    ctx.execute_vfpu_compare3(109u, 112u, 108u, 1u, 6u);
    ctx.gpr[12] = (ctx.gpr[1] + ctx.gpr[20]);
    goto L_08B0D1D0;
L_08B0D1D0:
    rt.unsupported(0x08B0D1D0u, 0x20544948u, "unknown not lowered yet"); return;
L_08B0D1DC:
    ctx.execute_vfpu_compare3(109u, 112u, 108u, 1u, 6u);
    ctx.gpr[12] = (ctx.gpr[1] + ctx.gpr[21]);
    goto L_08B0D1E4;
L_08B0D1E4:
    if (ctx.gpr[2] != ctx.gpr[24]) {
    rt.unsupported(0x08B0D1E8u, 0x45532059u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 708u, 0x08B1F734u>(ctx, &aot_mem); return;
    }
    goto L_08B0D1EC;
L_08B0D1EC:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 13u));
    goto L_08B0D1F0;
L_08B0D1F0:
    ctx.execute_vfpu_compare3(109u, 112u, 108u, 1u, 6u);
    ctx.gpr[12] = (ctx.gpr[1] + ctx.gpr[22]);
    goto L_08B0D1F8;
L_08B0D1F8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0D1FCu, 0x00326373u, "special? not lowered yet"); return;
L_08B0D208:
    if (ctx.gpr[26] == ctx.gpr[21]) {
    ctx.gpr[16] = (ctx.gpr[1] | 12337u);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 38u, 0x08B20360u>(ctx, &aot_mem); return;
    }
    goto L_08B0D210;
L_08B0D210:
    rt.unsupported(0x08B0D210u, 0x00000031u, "special? not lowered yet"); return;
L_08B0D214:
    rt.unsupported(0x08B0D214u, 0x4C415447u, "unknown not lowered yet"); return;
L_08B0D220:
    ctx.execute_vfpu_compare3(97u, 100u, 104u, 1u, 6u);
    ctx.execute_vfpu_compare3(99u, 32u, 99u, 1u, 6u);
    rt.unsupported(0x08B0D228u, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08B0D240:
    if (ctx.gpr[26] == ctx.gpr[31]) {
    rt.unsupported(0x08B0D244u, 0x0057454Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 172u, 0x08B21378u>(ctx, &aot_mem); return;
    }
    goto L_08B0D248;
L_08B0D248:
    rt.unsupported(0x08B0D248u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0D258:
    rt.unsupported(0x08B0D258u, 0x6E657473u, "vfpu3 not lowered yet"); return;
L_08B0D274:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D278u, 0x00474A5Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 601u, 0x08B1E790u>(ctx, &aot_mem); return;
    }
    goto L_08B0D27C;
L_08B0D27C:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D280u, 0x0047485Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 602u, 0x08B1E798u>(ctx, &aot_mem); return;
    }
    goto L_08B0D284;
L_08B0D284:
    if (ctx.gpr[18] == ctx.gpr[5]) {
    ctx.gpr[9] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 573u, 0x08B1E394u>(ctx, &aot_mem); return;
    }
    goto L_08B0D28C;
L_08B0D28C:
    rt.unsupported(0x08B0D290u, 0x00494649u, "control flow in delay slot"); return;
L_08B0D294:
    if (ctx.gpr[26] != ctx.gpr[31]) {
    rt.unsupported(0x08B0D298u, 0x004E5241u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 175u, 0x08B213CCu>(ctx, &aot_mem); return;
    }
    goto L_08B0D29C;
L_08B0D29C:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D2A0u, 0x0051535Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 604u, 0x08B1E7B8u>(ctx, &aot_mem); return;
    }
    goto L_08B0D2A4;
L_08B0D2A4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B0D2A8u, 0x00004F4Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 605u, 0x08B1E7C0u>(ctx, &aot_mem); return;
    }
    goto L_08B0D2AC;
L_08B0D2AC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[2]) * static_cast<std::uint64_t>(ctx.gpr[19]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 606u, 0x08B1E7C8u>(ctx, &aot_mem); return;
    }
    goto L_08B0D2B4;
L_08B0D2B4:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D2B8u, 0x004D535Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 607u, 0x08B1E7D0u>(ctx, &aot_mem); return;
    }
    goto L_08B0D2BC;
L_08B0D2BC:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B0D2C0u, 0x7845202Au, "unknown not lowered yet"); return;
L_08B0D2D8:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B0D2DCu, 0x6877202Au, "unknown not lowered yet"); return;
L_08B0D2FC:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B0D300u, 0x6877202Au, "unknown not lowered yet"); return;
L_08B0D320:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B0D324u, 0x6877202Au, "unknown not lowered yet"); return;
L_08B0D344:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B0D348u, 0x6877202Au, "unknown not lowered yet"); return;
L_08B0D368:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B0D36Cu, 0x6877202Au, "unknown not lowered yet"); return;
L_08B0D38C:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B0D390u, 0x6877202Au, "unknown not lowered yet"); return;
L_08B0D3B0:
    rt.unsupported(0x08B0D3B0u, 0x76726573u, "unknown not lowered yet"); return;
L_08B0D3DC:
    rt.unsupported(0x08B0D3DCu, 0x4D525653u, "unknown not lowered yet"); return;
L_08B0D3E4:
    rt.unsupported(0x08B0D3E4u, 0x4E5F4F4Eu, "unknown not lowered yet"); return;
L_08B0D3EC:
    if (ctx.gpr[2] != ctx.gpr[31]) {
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[2]) * static_cast<std::uint64_t>(ctx.gpr[5]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 280u, 0x08B2210Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0D3F4;
L_08B0D3F4:
    rt.unsupported(0x08B0D3F4u, 0x475F5347u, "cop1? not lowered yet"); return;
L_08B0D3FC:
    rt.unsupported(0x08B0D3FCu, 0x445F5347u, "unsupported CFC1 control register"); return;
    ctx.gpr[12] = (0u | 0u);
    goto L_08B0D404;
L_08B0D404:
    rt.unsupported(0x08B0D404u, 0x4C5F5347u, "unknown not lowered yet"); return;
L_08B0D40C:
    if (ctx.gpr[26] == ctx.gpr[31]) {
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 21u));
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 284u, 0x08B2212Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0D414;
L_08B0D414:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B0D418u, 0x00004F4Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 617u, 0x08B1E930u>(ctx, &aot_mem); return;
    }
    goto L_08B0D41C;
L_08B0D41C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[2]) * static_cast<std::uint64_t>(ctx.gpr[19]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 618u, 0x08B1E938u>(ctx, &aot_mem); return;
    }
    goto L_08B0D424;
L_08B0D424:
    if (ctx.gpr[10] != ctx.gpr[1]) {
    rt.unsupported(0x08B0D428u, 0x00004F54u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 185u, 0x08B2155Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0D42C;
L_08B0D42C:
    if (ctx.gpr[26] == ctx.gpr[31]) {
    rt.unsupported(0x08B0D430u, 0x004C5954u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 286u, 0x08B2214Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0D434;
L_08B0D434:
    if (ctx.gpr[2] != ctx.gpr[31]) {
    rt.unsupported(0x08B0D438u, 0x00534D45u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 288u, 0x08B22154u>(ctx, &aot_mem); return;
    }
    goto L_08B0D43C;
L_08B0D43C:
    rt.unsupported(0x08B0D43Cu, 0x465F5347u, "cop1? not lowered yet"); return;
L_08B0D444:
    rt.unsupported(0x08B0D444u, 0x4B5F5347u, "cop2/vfpu not lowered yet"); return;
L_08B0D44C:
    ctx.gpr[12] = (0u | 0u);
    goto L_08B0D450;
L_08B0D450:
    rt.unsupported(0x08B0D454u, 0x00544D4Cu, "control flow in delay slot"); return;
L_08B0D458:
    rt.unsupported(0x08B0D45Cu, 0x00544D4Cu, "control flow in delay slot"); return;
L_08B0D460:
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(25637));
    rt.unsupported(0x08B0D464u, 0x00000073u, "special? not lowered yet"); return;
L_08B0D468:
    rt.unsupported(0x08B0D468u, 0x4D5F5347u, "unknown not lowered yet"); return;
L_08B0D470:
    rt.unsupported(0x08B0D470u, 0x4D5F5347u, "unknown not lowered yet"); return;
L_08B0D474:
    rt.unsupported(0x08B0D478u, 0x505F5347u, "control flow in delay slot"); return;
L_08B0D478:
    if (ctx.gpr[2] == ctx.gpr[31]) {
    ctx.gpr[10] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 293u, 0x08B22198u>(ctx, &aot_mem); return;
    }
    goto L_08B0D480;
L_08B0D47C:
    ctx.gpr[10] = (ctx.lo);
    goto L_08B0D480;
L_08B0D480:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 619u, 0x08B1E99Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0D488;
L_08B0D488:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 620u, 0x08B1E9A4u>(ctx, &aot_mem); return;
    }
    goto L_08B0D490;
L_08B0D490:
    rt.unsupported(0x08B0D490u, 0x475F504Du, "cop1? not lowered yet"); return;
L_08B0D498:
    rt.unsupported(0x08B0D498u, 0x475F504Du, "cop1? not lowered yet"); return;
L_08B0D4A0:
    if (ctx.gpr[18] == ctx.gpr[31]) {
    rt.unsupported(0x08B0D4A4u, 0x00454341u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 295u, 0x08B221C0u>(ctx, &aot_mem); return;
    }
    goto L_08B0D4A8;
L_08B0D4A8:
    ctx.gpr[31] = (ctx.gpr[2] & 21076u);
    ctx.gpr[12] = (0u | 0u);
    goto L_08B0D4B0;
L_08B0D4B0:
    rt.unsupported(0x08B0D4B0u, 0x4C5F5347u, "unknown not lowered yet"); return;
L_08B0D4B8:
    if (ctx.gpr[26] == ctx.gpr[31]) {
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 5u));
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 297u, 0x08B221D8u>(ctx, &aot_mem); return;
    }
    goto L_08B0D4C0;
L_08B0D4C0:
    rt.unsupported(0x08B0D4C4u, 0x00544D4Cu, "control flow in delay slot"); return;
L_08B0D4C8:
    if (ctx.gpr[2] != ctx.gpr[31]) {
    rt.unsupported(0x08B0D4CCu, 0x00544754u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 299u, 0x08B221E8u>(ctx, &aot_mem); return;
    }
    goto L_08B0D4D0;
L_08B0D4D0:
    if (ctx.gpr[26] == ctx.gpr[19]) {
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 17u));
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 186u, 0x08B21608u>(ctx, &aot_mem); return;
    }
    goto L_08B0D4D8;
L_08B0D4D8:
    ctx.gpr[4] = (ctx.gpr[3] & ctx.gpr[4]);
    goto L_08B0D4DC;
L_08B0D4DC:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D4E0u, 0x0053545Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 621u, 0x08B1E9F8u>(ctx, &aot_mem); return;
    }
    goto L_08B0D4E4;
L_08B0D4E4:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D4E8u, 0x0000525Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 622u, 0x08B1EA00u>(ctx, &aot_mem); return;
    }
    goto L_08B0D4EC;
L_08B0D4EC:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D4F0u, 0x0054535Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 623u, 0x08B1EA08u>(ctx, &aot_mem); return;
    }
    goto L_08B0D4F4;
L_08B0D4F4:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D4F8u, 0x004E535Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 624u, 0x08B1EA10u>(ctx, &aot_mem); return;
    }
    goto L_08B0D4FC;
L_08B0D4FC:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D500u, 0x0047535Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 625u, 0x08B1EA18u>(ctx, &aot_mem); return;
    }
    goto L_08B0D504;
L_08B0D504:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D508u, 0x00434E5Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 626u, 0x08B1EA20u>(ctx, &aot_mem); return;
    }
    goto L_08B0D50C;
L_08B0D50C:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D510u, 0x0053575Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 627u, 0x08B1EA28u>(ctx, &aot_mem); return;
    }
    goto L_08B0D514;
L_08B0D514:
    rt.unsupported(0x08B0D514u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0D524:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 28261 ? 1u : 0u);
    rt.unsupported(0x08B0D528u, 0x69616620u, "unknown not lowered yet"); return;
L_08B0D540:
    rt.unsupported(0x08B0D540u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0D550:
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(28261));
    rt.unsupported(0x08B0D554u, 0x6B6F2073u, "unknown not lowered yet"); return;
L_08B0D55C:
    rt.unsupported(0x08B0D55Cu, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0D56C:
    rt.unsupported(0x08B0D56Cu, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08B0D588:
    rt.unsupported(0x08B0D588u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0D598:
    rt.unsupported(0x08B0D598u, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08B0D5AC:
    rt.unsupported(0x08B0D5ACu, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0D5BC:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 25710 ? 1u : 0u);
    rt.unsupported(0x08B0D5C0u, 0x69616620u, "unknown not lowered yet"); return;
L_08B0D5D8:
    rt.unsupported(0x08B0D5D8u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0D5E8:
    rt.unsupported(0x08B0D5E8u, 0x7320646Eu, "unknown not lowered yet"); return;
L_08B0D5F8:
    rt.unsupported(0x08B0D5F8u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0D608:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[3]) < 29557 ? 1u : 0u);
    rt.unsupported(0x08B0D60Cu, 0x61662029u, "vfpu0 not lowered yet"); return;
L_08B0D624:
    rt.unsupported(0x08B0D624u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0D634:
    rt.unsupported(0x08B0D634u, 0x20687375u, "unknown not lowered yet"); return;
L_08B0D644:
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    rt.unsupported(0x08B0D650u, 0x6954203Du, "unknown not lowered yet"); return;
L_08B0D678:
    rt.unsupported(0x08B0D678u, 0x4E4E4F43u, "unknown not lowered yet"); return;
L_08B0D684:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D688u, 0x004A475Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 632u, 0x08B1EBA0u>(ctx, &aot_mem); return;
    }
    goto L_08B0D68C;
L_08B0D68C:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D690u, 0x0000485Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 633u, 0x08B1EBA8u>(ctx, &aot_mem); return;
    }
    goto L_08B0D694;
L_08B0D694:
    rt.unsupported(0x08B0D694u, 0x4C5F5347u, "unknown not lowered yet"); return;
L_08B0D69C:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D6A0u, 0x0000505Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 634u, 0x08B1EBB8u>(ctx, &aot_mem); return;
    }
    goto L_08B0D6A4;
L_08B0D6A4:
    ctx.gpr[14] = (0u | 0u);
    goto L_08B0D6A8;
L_08B0D6A8:
    rt.unsupported(0x08B0D6A8u, 0x475F5347u, "cop1? not lowered yet"); return;
L_08B0D6B0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 134u, 0x08B20FD8u>(ctx, &aot_mem); return;
    }
    goto L_08B0D6B8;
L_08B0D6B8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 174u, 0x08B213C8u>(ctx, &aot_mem); return;
    }
    goto L_08B0D6C0;
L_08B0D6C0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 627u, 0x08B22C10u>(ctx, &aot_mem); return;
    }
    goto L_08B0D6C8;
L_08B0D6C8:
    ctx.gpr[13] = (0u | 0u);
    goto L_08B0D6CC;
L_08B0D6CC:
    if (ctx.gpr[26] == ctx.gpr[31]) {
    ctx.gpr[10] = (static_cast<std::uint32_t>(std::countl_zero(ctx.gpr[2])));
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 176u, 0x08B21408u>(ctx, &aot_mem); return;
    }
    goto L_08B0D6D4;
L_08B0D6D4:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B0D6D8u, 0x004E485Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 636u, 0x08B1EBF0u>(ctx, &aot_mem); return;
    }
    goto L_08B0D6DC;
L_08B0D6DC:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B0D6E0u, 0x706F2072u, "unknown not lowered yet"); return;
L_08B0D6F8:
    rt.unsupported(0x08B0D6F8u, 0x6E6E6F63u, "vfpu3 not lowered yet"); return;
L_08B0D70C:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B0D710u, 0x6E6F2072u, "vfpu3 not lowered yet"); return;
L_08B0D734:
    rt.unsupported(0x08B0D734u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0D744:
    rt.unsupported(0x08B0D744u, 0x74706563u, "unknown not lowered yet"); return;
L_08B0D754:
    rt.unsupported(0x08B0D754u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0D764:
    ctx.execute_vfpu_vhdp(99u, 118u, 32u, 1u);
    ctx.execute_vfpu_vscl_ct<97u, 105u, 108u, 1u>();
    ctx.gpr[1] = (0u & 0u);
    goto L_08B0D770;
L_08B0D770:
    rt.unsupported(0x08B0D770u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B0D780:
    rt.unsupported(0x08B0D780u, 0x73207663u, "unknown not lowered yet"); return;
L_08B0D790:
    rt.unsupported(0x08B0D790u, 0x72617453u, "unknown not lowered yet"); return;
L_08B0D840:
    rt.unsupported(0x08B0D840u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B0D864:
    ctx.execute_vfpu_compare3(67u, 80u, 114u, 1u, 6u);
    rt.unsupported(0x08B0D868u, 0x7463656Au, "unknown not lowered yet"); return;
L_08B0D884:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B0D888u, 0x676E6976u, "vfpu1 not lowered yet"); return;
L_08B0D8A8:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B0D8ACu, 0x676E6976u, "vfpu1 not lowered yet"); return;
L_08B0D8C8:
    ctx.execute_vfpu_vscl_ct<85u, 110u, 100u, 1u>();
    ctx.execute_vfpu_vscl_ct<102u, 105u, 110u, 1u>();
    rt.unsupported(0x08B0D8D0u, 0x72702064u, "unknown not lowered yet"); return;
L_08B0D908:
    rt.unsupported(0x08B0D908u, 0x74726170u, "unknown not lowered yet"); return;
L_08B0D914:
    rt.unsupported(0x08B0D914u, 0x756F6C63u, "unknown not lowered yet"); return;
L_08B0D91C:
    rt.unsupported(0x08B0D91Cu, 0x756F6C63u, "unknown not lowered yet"); return;
L_08B0D924:
    rt.unsupported(0x08B0D924u, 0x756F6C63u, "unknown not lowered yet"); return;
L_08B0D92C:
    rt.unsupported(0x08B0D92Cu, 0x756F6C63u, "unknown not lowered yet"); return;
L_08B0D938:
    rt.unsupported(0x08B0D938u, 0x756F6C63u, "unknown not lowered yet"); return;
L_08B0D950:
    ctx.execute_vfpu_vminmax(102u, 97u, 116u, 1u, false);
    rt.unsupported(0x08B0D954u, 0x003A3073u, "special? not lowered yet"); return;
L_08B0D958:
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    rt.unsupported(0x08B0D960u, 0x433D3D3Du, "unknown not lowered yet"); return;
L_08B0D980:
    rt.unsupported(0x08B0D980u, 0x45534E49u, "cop1? not lowered yet"); return;
L_08B0D994:
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    rt.unsupported(0x08B0D99Cu, 0x433D3D3Du, "unknown not lowered yet"); return;
L_08B0D9BC:
    rt.unsupported(0x08B0D9BCu, 0x43454A45u, "unknown not lowered yet"); return;
L_08B0D9D0:
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    rt.unsupported(0x08B0D9D8u, 0x433D3D3Du, "unknown not lowered yet"); return;
L_08B0D9F4:
    rt.unsupported(0x08B0D9F4u, 0x20594C42u, "unknown not lowered yet"); return;
L_08B0DA0C:
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    rt.unsupported(0x08B0DA14u, 0x43533D3Du, "unknown not lowered yet"); return;
L_08B0DA28:
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    // nop
    goto L_08B0DA38;
L_08B0DA38:
    ctx.gpr[16] = (ctx.gpr[17] ^ 21325u);
    ctx.gpr[16] = (ctx.gpr[26] < static_cast<std::uint32_t>(21328) ? 1u : 0u);
    rt.unsupported(0x08B0DA40u, 0x45564153u, "cop1? not lowered yet"); return;
L_08B0DA4C:
    rt.unsupported(0x08B0DA4Cu, 0x73257325u, "unknown not lowered yet"); return;
L_08B0DA54:
    if (ctx.gpr[26] == ctx.gpr[21]) {
    ctx.gpr[16] = (ctx.gpr[1] | 12337u);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 115u, 0x08B20BACu>(ctx, &aot_mem); return;
    }
    goto L_08B0DA5C;
L_08B0DA5C:
    rt.unsupported(0x08B0DA5Cu, 0x00000031u, "special? not lowered yet"); return;
L_08B0DA60:
    rt.unsupported(0x08B0DA64u, 0x52544D4Fu, "control flow in delay slot"); return;
L_08B0DA68:
    if (ctx.gpr[26] == ctx.gpr[11]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 598u, 0x08B1E770u>(ctx, &aot_mem); return;
    }
    goto L_08B0DA70;
L_08B0DA70:
    rt.unsupported(0x08B0DA70u, 0x6174672Eu, "vfpu0 not lowered yet"); return;
L_08B0DA78:
    rt.unsupported(0x08B0DA78u, 0x73257325u, "unknown not lowered yet"); return;
L_08B0DA80:
    rt.unsupported(0x08B0DA80u, 0x49444441u, "cop2/vfpu not lowered yet"); return;
L_08B0DA94:
    ctx.gpr[14] = (0u | ctx.gpr[10]);
    goto L_08B0DA98;
L_08B0DA98:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B0DA9Cu, 0x00005455u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 644u, 0x08B1EFB4u>(ctx, &aot_mem); return;
    }
    goto L_08B0DAA0;
L_08B0DAA0:
    if (ctx.gpr[2] == ctx.gpr[9]) {
    rt.unsupported(0x08B0DAA4u, 0x20444550u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 91u, 0x08B207F0u>(ctx, &aot_mem); return;
    }
    goto L_08B0DAA8;
L_08B0DAA8:
    rt.unsupported(0x08B0DAA8u, 0x203A4F54u, "unknown not lowered yet"); return;
L_08B0DAB8:
    ctx.execute_vfpu_vscl_ct<119u, 97u, 118u, 1u>();
    rt.unsupported(0x08B0DABCu, 0x696E6920u, "unknown not lowered yet"); return;
L_08B0DACC:
    ctx.execute_vfpu_vscl_ct<119u, 97u, 118u, 1u>();
    rt.unsupported(0x08B0DAD0u, 0x74657320u, "unknown not lowered yet"); return;
L_08B0DAE4:
    rt.unsupported(0x08B0DAE4u, 0x6E756F73u, "vfpu3 not lowered yet"); return;
L_08B0DAF4:
    rt.unsupported(0x08B0DAF4u, 0x6E756F73u, "vfpu3 not lowered yet"); return;
L_08B0DB04:
    // nop
    goto L_08B0DB08;
L_08B0DB08:
    rt.unsupported(0x08B0DB08u, 0x6E756F73u, "vfpu3 not lowered yet"); return;
L_08B0DB1C:
    rt.unsupported(0x08B0DB1Cu, 0x6E756F73u, "vfpu3 not lowered yet"); return;
L_08B0DB30:
    ctx.execute_vfpu_compare3(99u, 115u, 116u, 1u, 6u);
    rt.unsupported(0x08B0DB34u, 0x615F696Eu, "vfpu0 not lowered yet"); return;
L_08B0DB3C:
    rt.unsupported(0x08B0DB3Cu, 0x41430A0Au, "unknown not lowered yet"); return;
L_08B0DB48:
    rt.unsupported(0x08B0DB48u, 0x4F4D2044u, "unknown not lowered yet"); return;
L_08B0DB64:
    rt.unsupported(0x08B0DB64u, 0x4E4E4143u, "unknown not lowered yet"); return;
L_08B0DB7C:
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(17741));
    rt.unsupported(0x08B0DB80u, 0x4E492073u, "unknown not lowered yet"); return;
L_08B0DB8C:
    rt.unsupported(0x08B0DB8Cu, 0x4E4F4954u, "unknown not lowered yet"); return;
L_08B0DBA4:
    rt.unsupported(0x08B0DBA4u, 0x4E4E4143u, "unknown not lowered yet"); return;
L_08B0DBC8:
    rt.unsupported(0x08B0DBC8u, 0x61430A0Au, "vfpu0 not lowered yet"); return;
L_08B0DBF8:
    rt.unsupported(0x08B0DBF8u, 0x72745843u, "unknown not lowered yet"); return;
L_08B0DCD8:
    ctx.execute_vfpu_vscl_ct<98u, 97u, 115u, 1u>();
    // nop
    goto L_08B0DCE0;
L_08B0DCE0:
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 4u>();
    (void)(0u | 0u);
    goto L_08B0DCE8;
L_08B0DCE8:
    rt.unsupported(0x08B0DCE8u, 0x69727473u, "unknown not lowered yet"); return;
L_08B0DCF0:
    rt.unsupported(0x08B0DCF0u, 0x6874616Du, "unknown not lowered yet"); return;
L_08B0DCF8:
    rt.unsupported(0x08B0DCF8u, 0x75626564u, "unknown not lowered yet"); return;
L_08B0DD00:
    rt.unsupported(0x08B0DD00u, 0x6E697270u, "vfpu3 not lowered yet"); return;
L_08B0DD0C:
    rt.unsupported(0x08B0DD0Cu, 0x6E695F5Fu, "vfpu3 not lowered yet"); return;
L_08B0DD14:
    rt.unsupported(0x08B0DD14u, 0x0000203Au, "special? not lowered yet"); return;
L_08B0DD18:
    rt.unsupported(0x08B0DD18u, 0x00000A0Du, "special? not lowered yet"); return;
L_08B0DD1C:
    rt.unsupported(0x08B0DD1Cu, 0x72726528u, "unknown not lowered yet"); return;
L_08B0DD34:
    ctx.gpr[1] = (ctx.gpr[27] & 29799u);
    // nop
    // nop
    goto L_08B0DD40;
L_08B0DD40:
    rt.unsupported(0x08B0DD40u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B0DD58:
    ctx.execute_vfpu_compare3(67u, 67u, 108u, 1u, 6u);
    rt.unsupported(0x08B0DD5Cu, 0x72206B63u, "unknown not lowered yet"); return;
L_08B0DD98:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    if (0u == 0u) (void)(0u);
    goto L_08B0DDB8;
L_08B0DDB8:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0DDBCu, 0x45594F52u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 661u, 0x08B1F2CCu>(ctx, &aot_mem); return;
    }
    goto L_08B0DDC0;
L_08B0DDC0:
    if (ctx.gpr[18] == ctx.gpr[3]) {
    rt.unsupported(0x08B0DDC4u, 0x20454E41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 506u, 0x08B15ED4u>(ctx, &aot_mem); return;
    }
    goto L_08B0DDC8;
L_08B0DDC8:
    rt.unsupported(0x08B0DDC8u, 0x4E47414Du, "unknown not lowered yet"); return;
L_08B0DDDC:
    ctx.gpr[12] = (0u | 0u);
    // nop
    ctx.pc = 0x09859DD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B0DE00:
    rt.unsupported(0x08B0DE00u, 0x45434956u, "cop1? not lowered yet"); return;
L_08B0DE08:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 188u, 0x08B21730u>(ctx, &aot_mem); return;
    }
    goto L_08B0DE10;
L_08B0DE10:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 221u, 0x08B21B20u>(ctx, &aot_mem); return;
    }
    goto L_08B0DE18;
L_08B0DE18:
    rt.unsupported(0x08B0DE18u, 0x43414542u, "unknown not lowered yet"); return;
L_08B0DE20:
    rt.unsupported(0x08B0DE20u, 0x43414542u, "unknown not lowered yet"); return;
L_08B0DE28:
    rt.unsupported(0x08B0DE28u, 0x43414542u, "unknown not lowered yet"); return;
L_08B0DE30:
    rt.unsupported(0x08B0DE30u, 0x464C4F47u, "cop1? not lowered yet"); return;
L_08B0DE38:
    rt.unsupported(0x08B0DE3Cu, 0x00000049u, "control flow in delay slot"); return;
L_08B0DE40:
    rt.unsupported(0x08B0DE40u, 0x4B434F44u, "cop2/vfpu not lowered yet"); return;
L_08B0DE48:
    rt.unsupported(0x08B0DE48u, 0x41564148u, "unknown not lowered yet"); return;
L_08B0DE50:
    rt.unsupported(0x08B0DE54u, 0x00000049u, "control flow in delay slot"); return;
L_08B0DE58:
    rt.unsupported(0x08B0DE58u, 0x4E524F50u, "unknown not lowered yet"); return;
L_08B0DE60:
    if (ctx.gpr[26] != ctx.gpr[15]) {
    rt.unsupported(0x08B0DE64u, 0x0000004Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 737u, 0x08B22F74u>(ctx, &aot_mem); return;
    }
    goto L_08B0DE68;
L_08B0DE64:
    rt.unsupported(0x08B0DE64u, 0x0000004Eu, "special? not lowered yet"); return;
L_08B0DE68:
    rt.unsupported(0x08B0DE68u, 0x4F505F41u, "unknown not lowered yet"); return;
L_08B0DEA0:
    rt.unsupported(0x08B0DEA0u, 0x61427349u, "vfpu0 not lowered yet"); return;
L_08B0DEC8:
    if (ctx.gpr[18] != ctx.gpr[14]) {
    rt.unsupported(0x08B0DECCu, 0x44494C41u, "unsupported CFC1 control register"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 33u, 0x08B202F4u>(ctx, &aot_mem); return;
    }
    goto L_08B0DED0;
L_08B0DED0:
    rt.unsupported(0x08B0DED0u, 0x4E414220u, "unknown not lowered yet"); return;
L_08B0DEE0:
    ctx.gpr[12] = (0u | ctx.gpr[10]);
    goto L_08B0DEE4;
L_08B0DEE4:
    // nop
    goto L_08B0DEE8;
L_08B0DEE8:
    rt.unsupported(0x08B0DEE8u, 0x6E65704Fu, "vfpu3 not lowered yet"); return;
L_08B0DF14:
    rt.unsupported(0x08B0DF14u, 0x6E65706Fu, "vfpu3 not lowered yet"); return;
L_08B0DF28:
    rt.unsupported(0x08B0DF28u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B0DF38:
    rt.unsupported(0x08B0DF38u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B0DF48:
    rt.unsupported(0x08B0DF48u, 0x00005741u, "special? not lowered yet"); return;
L_08B0DF4C:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<114u, 32u, 103u, 1u>();
    rt.unsupported(0x08B0DF54u, 0x6E697474u, "vfpu3 not lowered yet"); return;
L_08B0DF68:
    rt.unsupported(0x08B0DF68u, 0x73257325u, "unknown not lowered yet"); return;
L_08B0DF70:
    rt.unsupported(0x08B0DF70u, 0x43534944u, "unknown not lowered yet"); return;
L_08B0DF7C:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B0DF80u, 0x44525355u, "unsupported CFC1 control register"); return;
    jump_target = ctx.gpr[1];
    ctx.gpr[10] = (0x08B0DF8Cu);
    rt.unsupported(0x08B0DF88u, 0x6E65706Fu, "vfpu3 not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B0DF8Cu) goto L_08B0DF8C;
    return;
L_08B0DF88:
    rt.unsupported(0x08B0DF88u, 0x6E65706Fu, "vfpu3 not lowered yet"); return;
L_08B0DF8C:
    rt.unsupported(0x08B0DF8Cu, 0x20676E69u, "unknown not lowered yet"); return;
L_08B0DF94:
    if (ctx.gpr[10] != ctx.gpr[1]) {
    ctx.gpr[15] = (ctx.gpr[26] < static_cast<std::uint32_t>(18756) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 203u, 0x08B2AC2Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0DF9C;
L_08B0DF9C:
    ctx.gpr[20] = (ctx.gpr[10] + static_cast<std::uint32_t>(17747));
    rt.unsupported(0x08B0DFA0u, 0x41522E73u, "unknown not lowered yet"); return;
L_08B0DFA8:
    ctx.execute_vfpu_vscl_ct<102u, 105u, 108u, 1u>();
    ctx.execute_vfpu_vscl_ct<110u, 97u, 109u, 1u>();
    // nop
    ctx.pc = 0x09CC9480u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B0DFB8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0DFBCu, 0x20676E69u, "unknown not lowered yet"); return;
L_08B0DFD0:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B0DFD4u, 0x74206465u, "unknown not lowered yet"); return;
L_08B0E000:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B0E004u, 0x74206465u, "unknown not lowered yet"); return;
L_08B0E030:
    rt.unsupported(0x08B0E030u, 0x6B656573u, "unknown not lowered yet"); return;
L_08B0E05C:
    rt.unsupported(0x08B0E05Cu, 0x72646461u, "unknown not lowered yet"); return;
L_08B0E080:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    if (ctx.gpr[1] == 0u) {
    rt.unsupported(0x08B0E088u, 0x43206465u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1074u, 0x08B2721Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0E08C;
L_08B0E08C:
    ctx.execute_vfpu_vscl_ct<111u, 109u, 109u, 1u>();
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(29806));
    ctx.gpr[1] = (0u & 0u);
    goto L_08B0E098;
L_08B0E098:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0E09Cu, 0x62206465u, "vfpu0 not lowered yet"); return;
L_08B0E0A8:
    rt.unsupported(0x08B0E0A8u, 0x6E6F7257u, "vfpu3 not lowered yet"); return;
L_08B0E0C4:
    rt.unsupported(0x08B0E0C4u, 0x414F4C0Au, "unknown not lowered yet"); return;
L_08B0E0D4:
    rt.unsupported(0x08B0E0D4u, 0x4E414220u, "unknown not lowered yet"); return;
L_08B0E0E0:
    rt.unsupported(0x08B0E0E0u, 0x69725420u, "unknown not lowered yet"); return;
L_08B0E100:
    rt.unsupported(0x08B0E100u, 0x72617453u, "unknown not lowered yet"); return;
L_08B0E124:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0E128u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B0E138:
    rt.unsupported(0x08B0E138u, 0x44414F4Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B0E13Cu, 0x20474E49u, "unknown not lowered yet"); return;
L_08B0E148:
    rt.unsupported(0x08B0E148u, 0x41494420u, "unknown not lowered yet"); return;
L_08B0E154:
    (void)(ctx.gpr[1] & 21583u);
    if (0u == 0u) (void)(0u);
    goto L_08B0E15C;
L_08B0E15C:
    rt.unsupported(0x08B0E15Cu, 0x44414F4Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B0E160u, 0x20474E49u, "unknown not lowered yet"); return;
L_08B0E16C:
    rt.unsupported(0x08B0E16Cu, 0x41494420u, "unknown not lowered yet"); return;
L_08B0E178:
    (void)(ctx.gpr[9] & 21583u);
    if (0u == 0u) (void)(0u);
    goto L_08B0E180;
L_08B0E180:
    rt.unsupported(0x08B0E180u, 0x44414F4Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B0E184u, 0x20474E49u, "unknown not lowered yet"); return;
L_08B0E1A4:
    rt.unsupported(0x08B0E1A4u, 0x44414F4Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B0E1A8u, 0x20474E49u, "unknown not lowered yet"); return;
L_08B0E1C8:
    rt.unsupported(0x08B0E1C8u, 0x44414F4Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B0E1CCu, 0x20474E49u, "unknown not lowered yet"); return;
L_08B0E1E4:
    rt.unsupported(0x08B0E1E4u, 0x61647055u, "vfpu0 not lowered yet"); return;
L_08B0E1FC:
    rt.unsupported(0x08B0E1FCu, 0x20786673u, "unknown not lowered yet"); return;
L_08B0E214:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B0E218u, 0x6E692072u, "vfpu3 not lowered yet"); return;
L_08B0E234:
    rt.unsupported(0x08B0E234u, 0x20776F6Eu, "unknown not lowered yet"); return;
L_08B0E290:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E294u, 0x00003145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 42u, 0x08B203A0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E298;
L_08B0E298:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E29Cu, 0x00003245u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 43u, 0x08B203A8u>(ctx, &aot_mem); return;
    }
    goto L_08B0E2A0;
L_08B0E2A0:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E2A4u, 0x00003345u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 44u, 0x08B203B0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E2A8;
L_08B0E2A8:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E2ACu, 0x00003445u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 45u, 0x08B203B8u>(ctx, &aot_mem); return;
    }
    goto L_08B0E2B0;
L_08B0E2B0:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E2B4u, 0x00003545u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 46u, 0x08B203C0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E2B8;
L_08B0E2B8:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E2BCu, 0x00003645u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 47u, 0x08B203C8u>(ctx, &aot_mem); return;
    }
    goto L_08B0E2C0;
L_08B0E2C0:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E2C4u, 0x00003745u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 48u, 0x08B203D0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E2C8;
L_08B0E2C8:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E2CCu, 0x00003845u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 49u, 0x08B203D8u>(ctx, &aot_mem); return;
    }
    goto L_08B0E2D0;
L_08B0E2D0:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E2D4u, 0x00003945u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 50u, 0x08B203E0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E2D8;
L_08B0E2D8:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E2DCu, 0x00303145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 51u, 0x08B203E8u>(ctx, &aot_mem); return;
    }
    goto L_08B0E2E0;
L_08B0E2E0:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E2E4u, 0x00313145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 52u, 0x08B203F0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E2E8;
L_08B0E2E8:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E2ECu, 0x00323145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 53u, 0x08B203F8u>(ctx, &aot_mem); return;
    }
    goto L_08B0E2F0;
L_08B0E2F0:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E2F4u, 0x00333145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 54u, 0x08B20400u>(ctx, &aot_mem); return;
    }
    goto L_08B0E2F8;
L_08B0E2F8:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E2FCu, 0x00343145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 55u, 0x08B20408u>(ctx, &aot_mem); return;
    }
    goto L_08B0E300;
L_08B0E300:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E304u, 0x00353145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 56u, 0x08B20410u>(ctx, &aot_mem); return;
    }
    goto L_08B0E308;
L_08B0E308:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E30Cu, 0x00363145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 57u, 0x08B20418u>(ctx, &aot_mem); return;
    }
    goto L_08B0E310;
L_08B0E310:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E314u, 0x00373145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 58u, 0x08B20420u>(ctx, &aot_mem); return;
    }
    goto L_08B0E318;
L_08B0E318:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E31Cu, 0x00383145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 59u, 0x08B20428u>(ctx, &aot_mem); return;
    }
    goto L_08B0E320;
L_08B0E320:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E324u, 0x00393145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 60u, 0x08B20430u>(ctx, &aot_mem); return;
    }
    goto L_08B0E328;
L_08B0E328:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E32Cu, 0x00303245u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 61u, 0x08B20438u>(ctx, &aot_mem); return;
    }
    goto L_08B0E330;
L_08B0E330:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0E334u, 0x00313245u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 62u, 0x08B20440u>(ctx, &aot_mem); return;
    }
    goto L_08B0E338;
L_08B0E338:
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B0E338u, 0x00000020u); return; } }
    rt.unsupported(0x08B0E33Cu, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B0E344:
    rt.unsupported(0x08B0E344u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E34C:
    rt.unsupported(0x08B0E34Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E354:
    rt.unsupported(0x08B0E354u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E35C:
    rt.unsupported(0x08B0E35Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E364:
    rt.unsupported(0x08B0E364u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E36C:
    rt.unsupported(0x08B0E36Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E374:
    rt.unsupported(0x08B0E374u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E37C:
    rt.unsupported(0x08B0E37Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E384:
    rt.unsupported(0x08B0E384u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E38C:
    rt.unsupported(0x08B0E38Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E394:
    rt.unsupported(0x08B0E394u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E39C:
    rt.unsupported(0x08B0E39Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E3A4:
    rt.unsupported(0x08B0E3A4u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E3AC:
    rt.unsupported(0x08B0E3ACu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E3B4:
    rt.unsupported(0x08B0E3B4u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E3BC:
    rt.unsupported(0x08B0E3BCu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E3C4:
    rt.unsupported(0x08B0E3C4u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E3CC:
    rt.unsupported(0x08B0E3CCu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E3D4:
    rt.unsupported(0x08B0E3D4u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E3DC:
    rt.unsupported(0x08B0E3DCu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E3E4:
    rt.unsupported(0x08B0E3E4u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E3EC:
    rt.unsupported(0x08B0E3ECu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E3F4:
    rt.unsupported(0x08B0E3F4u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E3FC:
    rt.unsupported(0x08B0E3FCu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E404:
    rt.unsupported(0x08B0E404u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E40C:
    rt.unsupported(0x08B0E40Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E414:
    rt.unsupported(0x08B0E414u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E41C:
    rt.unsupported(0x08B0E41Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E424:
    rt.unsupported(0x08B0E424u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E42C:
    rt.unsupported(0x08B0E42Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E434:
    rt.unsupported(0x08B0E434u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E43C:
    rt.unsupported(0x08B0E43Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E444:
    rt.unsupported(0x08B0E444u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E44C:
    rt.unsupported(0x08B0E44Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E454:
    rt.unsupported(0x08B0E454u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E45C:
    rt.unsupported(0x08B0E45Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E464:
    rt.unsupported(0x08B0E464u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E46C:
    rt.unsupported(0x08B0E46Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E474:
    rt.unsupported(0x08B0E474u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E47C:
    rt.unsupported(0x08B0E47Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E484:
    rt.unsupported(0x08B0E484u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E48C:
    rt.unsupported(0x08B0E48Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E494:
    rt.unsupported(0x08B0E494u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E49C:
    rt.unsupported(0x08B0E49Cu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E4A4:
    rt.unsupported(0x08B0E4A4u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E4AC:
    rt.unsupported(0x08B0E4ACu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E4B4:
    rt.unsupported(0x08B0E4B4u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E4BC:
    rt.unsupported(0x08B0E4BCu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E4C4:
    rt.unsupported(0x08B0E4C4u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E4CC:
    rt.unsupported(0x08B0E4CCu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E4D4:
    rt.unsupported(0x08B0E4D4u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E4DC:
    rt.unsupported(0x08B0E4DCu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E4E4:
    rt.unsupported(0x08B0E4E4u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E4EC:
    rt.unsupported(0x08B0E4ECu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E4F4:
    rt.unsupported(0x08B0E4F4u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E4FC:
    rt.unsupported(0x08B0E4FCu, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E504:
    rt.unsupported(0x08B0E504u, 0x4E544152u, "unknown not lowered yet"); return;
L_08B0E50C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 29u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 760u, 0x08B1FA50u>(ctx, &aot_mem); return;
    }
    goto L_08B0E514;
L_08B0E514:
    if (ctx.gpr[26] == ctx.gpr[9]) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 220u, 0x08B21A50u>(ctx, &aot_mem); return;
    }
    goto L_08B0E51C;
L_08B0E51C:
    rt.unsupported(0x08B0E520u, 0x00454D49u, "control flow in delay slot"); return;
L_08B0E524:
    rt.unsupported(0x08B0E524u, 0x4F5F5453u, "unknown not lowered yet"); return;
L_08B0E52C:
    if (ctx.gpr[26] == ctx.gpr[25]) {
    ctx.gpr[10] = (ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 628u, 0x08B1EA40u>(ctx, &aot_mem); return;
    }
    goto L_08B0E534;
L_08B0E534:
    rt.unsupported(0x08B0E538u, 0x00005648u, "control flow in delay slot"); return;
L_08B0E53C:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E540u, 0x0050525Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 761u, 0x08B1FA58u>(ctx, &aot_mem); return;
    }
    goto L_08B0E544;
L_08B0E544:
    rt.unsupported(0x08B0E548u, 0x00004349u, "control flow in delay slot"); return;
L_08B0E54C:
    if (ctx.gpr[26] != ctx.gpr[31]) {
    rt.unsupported(0x08B0E550u, 0x00545341u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 766u, 0x08B1FA90u>(ctx, &aot_mem); return;
    }
    goto L_08B0E554;
L_08B0E554:
    if (ctx.gpr[26] != ctx.gpr[31]) {
    ctx.lo = ctx.gpr[2];
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 767u, 0x08B1FA98u>(ctx, &aot_mem); return;
    }
    goto L_08B0E55C;
L_08B0E55C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B0E560u, 0x00505845u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 629u, 0x08B1EA6Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0E564;
L_08B0E564:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B0E568u, 0x00505845u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 307u, 0x08B22270u>(ctx, &aot_mem); return;
    }
    goto L_08B0E56C;
L_08B0E56C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[20] << (ctx.gpr[2] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 766u, 0x08B1FA90u>(ctx, &aot_mem); return;
    }
    goto L_08B0E574;
L_08B0E574:
    rt.unsupported(0x08B0E574u, 0x45525954u, "cop1? not lowered yet"); return;
L_08B0E57C:
    if (ctx.gpr[26] == ctx.gpr[31]) {
    rt.unsupported(0x08B0E580u, 0x00524154u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 978u, 0x08B236CCu>(ctx, &aot_mem); return;
    }
    goto L_08B0E584;
L_08B0E584:
    if (ctx.gpr[26] == ctx.gpr[31]) {
    rt.unsupported(0x08B0E588u, 0x004E4754u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 980u, 0x08B236D4u>(ctx, &aot_mem); return;
    }
    goto L_08B0E58C;
L_08B0E58C:
    rt.unsupported(0x08B0E58Cu, 0x425F4D54u, "unknown not lowered yet"); return;
L_08B0E594:
    rt.unsupported(0x08B0E594u, 0x445F4D54u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B0E598u, 0x00004445u, "special? not lowered yet"); return;
L_08B0E59C:
    rt.unsupported(0x08B0E59Cu, 0x485F5453u, "cop2/vfpu not lowered yet"); return;
L_08B0E5A4:
    rt.unsupported(0x08B0E5A8u, 0x0000434Cu, "control flow in delay slot"); return;
L_08B0E5AC:
    rt.unsupported(0x08B0E5ACu, 0x475F5453u, "cop1? not lowered yet"); return;
L_08B0E5B4:
    rt.unsupported(0x08B0E5B4u, 0x475F5453u, "cop1? not lowered yet"); return;
L_08B0E5BC:
    rt.unsupported(0x08B0E5BCu, 0x475F5453u, "cop1? not lowered yet"); return;
L_08B0E5C4:
    rt.unsupported(0x08B0E5C4u, 0x475F5453u, "cop1? not lowered yet"); return;
L_08B0E5CC:
    rt.unsupported(0x08B0E5CCu, 0x475F5453u, "cop1? not lowered yet"); return;
L_08B0E5D4:
    rt.unsupported(0x08B0E5D4u, 0x475F5453u, "cop1? not lowered yet"); return;
L_08B0E5DC:
    rt.unsupported(0x08B0E5DCu, 0x475F5453u, "cop1? not lowered yet"); return;
L_08B0E5E4:
    rt.unsupported(0x08B0E5E4u, 0x475F5453u, "cop1? not lowered yet"); return;
L_08B0E5EC:
    rt.unsupported(0x08B0E5ECu, 0x475F5453u, "cop1? not lowered yet"); return;
L_08B0E5F4:
    rt.unsupported(0x08B0E5F4u, 0x475F5453u, "cop1? not lowered yet"); return;
L_08B0E5FC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (static_cast<std::uint32_t>(std::countl_one(ctx.gpr[2])));
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 256u, 0x08B21F1Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0E604;
L_08B0E604:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 9u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 774u, 0x08B1FB18u>(ctx, &aot_mem); return;
    }
    goto L_08B0E60C;
L_08B0E60C:
    rt.unsupported(0x08B0E60Cu, 0x4B4D5448u, "cop2/vfpu not lowered yet"); return;
L_08B0E614:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B0E618u, 0x00505845u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 36u, 0x08B20344u>(ctx, &aot_mem); return;
    }
    goto L_08B0E61C;
L_08B0E61C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[18] >> (ctx.gpr[2] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1125u, 0x08B23B28u>(ctx, &aot_mem); return;
    }
    goto L_08B0E624;
L_08B0E624:
    rt.unsupported(0x08B0E628u, 0x00544948u, "control flow in delay slot"); return;
L_08B0E62C:
    if (ctx.gpr[10] != ctx.gpr[3]) {
    ctx.gpr[8] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 663u, 0x08B1F334u>(ctx, &aot_mem); return;
    }
    goto L_08B0E634;
L_08B0E634:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 9u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 631u, 0x08B1EB44u>(ctx, &aot_mem); return;
    }
    goto L_08B0E63C;
L_08B0E63C:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E640u, 0x0046445Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 780u, 0x08B1FB58u>(ctx, &aot_mem); return;
    }
    goto L_08B0E644;
L_08B0E644:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E648u, 0x0043445Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 781u, 0x08B1FB60u>(ctx, &aot_mem); return;
    }
    goto L_08B0E64C;
L_08B0E64C:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.gpr[9] = (ctx.gpr[11] >> 5u);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 111u, 0x08B20B60u>(ctx, &aot_mem); return;
    }
    goto L_08B0E654;
L_08B0E654:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.gpr[9] = (ctx.gpr[1] >> 29u);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 112u, 0x08B20B68u>(ctx, &aot_mem); return;
    }
    goto L_08B0E65C;
L_08B0E65C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[19] << (ctx.gpr[2] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 347u, 0x08B223B0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E664;
L_08B0E664:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.gpr[8] = (ctx.gpr[13] << (ctx.gpr[2] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 784u, 0x08B1FB80u>(ctx, &aot_mem); return;
    }
    goto L_08B0E66C;
L_08B0E66C:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.gpr[8] = (ctx.gpr[13] << (ctx.gpr[2] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 785u, 0x08B1FB88u>(ctx, &aot_mem); return;
    }
    goto L_08B0E674;
L_08B0E674:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.gpr[9] = (ctx.gpr[13] >> 5u);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20B88u>(ctx, &aot_mem); return;
    }
    goto L_08B0E67C;
L_08B0E67C:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.gpr[9] = (ctx.gpr[13] >> 29u);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 114u, 0x08B20B90u>(ctx, &aot_mem); return;
    }
    goto L_08B0E684;
L_08B0E684:
    rt.unsupported(0x08B0E684u, 0x44544F54u, "unsupported CFC1 control register"); return;
    jump_target = ctx.gpr[2];
    ctx.gpr[10] = (0x08B0E690u);
    rt.unsupported(0x08B0E68Cu, 0x4143584Du, "unknown not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B0E690u) goto L_08B0E690;
    return;
L_08B0E68C:
    rt.unsupported(0x08B0E68Cu, 0x4143584Du, "unknown not lowered yet"); return;
L_08B0E690:
    ctx.gpr[8] = (ctx.lo);
    goto L_08B0E694;
L_08B0E694:
    rt.unsupported(0x08B0E694u, 0x4143584Du, "unknown not lowered yet"); return;
L_08B0E69C:
    rt.unsupported(0x08B0E69Cu, 0x4C46584Du, "unknown not lowered yet"); return;
L_08B0E6A4:
    if (ctx.gpr[10] != ctx.gpr[10]) {
    rt.unsupported(0x08B0E6A8u, 0x0000504Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 256u, 0x08B247DCu>(ctx, &aot_mem); return;
    }
    goto L_08B0E6AC;
L_08B0E6A8:
    rt.unsupported(0x08B0E6A8u, 0x0000504Du, "special? not lowered yet"); return;
L_08B0E6AC:
    if (ctx.gpr[26] == ctx.gpr[20]) {
    rt.unsupported(0x08B0E6B0u, 0x00005554u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 876u, 0x08B233B8u>(ctx, &aot_mem); return;
    }
    goto L_08B0E6B4;
L_08B0E6B4:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E6B8u, 0x00004E55u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 270u, 0x08B21FDCu>(ctx, &aot_mem); return;
    }
    goto L_08B0E6BC;
L_08B0E6BC:
    rt.unsupported(0x08B0E6BCu, 0x4E495250u, "unknown not lowered yet"); return;
L_08B0E6C4:
    rt.unsupported(0x08B0E6C4u, 0x4E494244u, "unknown not lowered yet"); return;
L_08B0E6CC:
    rt.unsupported(0x08B0E6CCu, 0x49504244u, "cop2/vfpu not lowered yet"); return;
L_08B0E6D4:
    rt.unsupported(0x08B0E6D4u, 0x4E495254u, "unknown not lowered yet"); return;
L_08B0E6DC:
    if (ctx.gpr[18] == ctx.gpr[20]) {
    ctx.lo = 0u;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 760u, 0x08B23020u>(ctx, &aot_mem); return;
    }
    goto L_08B0E6E4;
L_08B0E6E4:
    rt.unsupported(0x08B0E6E4u, 0x4E495551u, "unknown not lowered yet"); return;
L_08B0E6EC:
    rt.unsupported(0x08B0E6ECu, 0x49555150u, "cop2/vfpu not lowered yet"); return;
L_08B0E6F4:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E6F8u, 0x00004355u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 363u, 0x08B22430u>(ctx, &aot_mem); return;
    }
    goto L_08B0E6FC;
L_08B0E6FC:
    rt.unsupported(0x08B0E6FCu, 0x4E554F4Eu, "unknown not lowered yet"); return;
L_08B0E704:
    rt.unsupported(0x08B0E708u, 0x00454548u, "control flow in delay slot"); return;
L_08B0E708:
    rt.unsupported(0x08B0E70Cu, 0x575F5453u, "control flow in delay slot"); return;
L_08B0E70C:
    rt.unsupported(0x08B0E710u, 0x00444548u, "control flow in delay slot"); return;
L_08B0E714:
    if (ctx.gpr[26] == ctx.gpr[31]) {
    rt.unsupported(0x08B0E718u, 0x00504F54u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1035u, 0x08B23864u>(ctx, &aot_mem); return;
    }
    goto L_08B0E71C;
L_08B0E71C:
    if (ctx.gpr[26] == ctx.gpr[31]) {
    rt.unsupported(0x08B0E720u, 0x00444F54u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1037u, 0x08B2386Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0E724;
L_08B0E724:
    rt.unsupported(0x08B0E724u, 0x465F5453u, "cop1? not lowered yet"); return;
L_08B0E72C:
    ctx.gpr[31] = (ctx.gpr[18] & 21587u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(std::countl_one(ctx.gpr[2])));
    goto L_08B0E734;
L_08B0E734:
    ctx.gpr[31] = (ctx.gpr[18] & 21587u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(std::countl_one(ctx.gpr[2])));
    goto L_08B0E73C;
L_08B0E73C:
    rt.unsupported(0x08B0E73Cu, 0x4C5F5453u, "unknown not lowered yet"); return;
L_08B0E744:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E748u, 0x0043435Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 802u, 0x08B1FC60u>(ctx, &aot_mem); return;
    }
    goto L_08B0E74C;
L_08B0E74C:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E750u, 0x0056485Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 803u, 0x08B1FC68u>(ctx, &aot_mem); return;
    }
    goto L_08B0E754;
L_08B0E754:
    rt.unsupported(0x08B0E754u, 0x44534150u, "unsupported CFC1 control register"); return;
    ctx.gpr[9] = (ctx.lo);
    goto L_08B0E75C;
L_08B0E75C:
    if (ctx.gpr[2] != ctx.gpr[14]) {
    rt.unsupported(0x08B0E760u, 0x00005841u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 378u, 0x08B22494u>(ctx, &aot_mem); return;
    }
    goto L_08B0E764;
L_08B0E764:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E768u, 0x00534C5Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 805u, 0x08B1FC80u>(ctx, &aot_mem); return;
    }
    goto L_08B0E76C;
L_08B0E76C:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E770u, 0x0041485Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 806u, 0x08B1FC88u>(ctx, &aot_mem); return;
    }
    goto L_08B0E774;
L_08B0E774:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E778u, 0x0045465Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 807u, 0x08B1FC90u>(ctx, &aot_mem); return;
    }
    goto L_08B0E77C;
L_08B0E77C:
    rt.unsupported(0x08B0E77Cu, 0x45524946u, "cop1? not lowered yet"); return;
L_08B0E784:
    rt.unsupported(0x08B0E788u, 0x0000444Cu, "control flow in delay slot"); return;
L_08B0E78C:
    rt.unsupported(0x08B0E78Cu, 0x434E4F4Du, "unknown not lowered yet"); return;
L_08B0E794:
    rt.unsupported(0x08B0E794u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B0E79C:
    rt.unsupported(0x08B0E79Cu, 0x424E4F4Du, "unknown not lowered yet"); return;
L_08B0E7A4:
    if (ctx.gpr[26] == ctx.gpr[18]) {
    rt.unsupported(0x08B0E7A8u, 0x00505845u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 640u, 0x08B1ECB4u>(ctx, &aot_mem); return;
    }
    goto L_08B0E7AC;
L_08B0E7A8:
    rt.unsupported(0x08B0E7A8u, 0x00505845u, "special? not lowered yet"); return;
L_08B0E7AC:
    rt.unsupported(0x08B0E7B0u, 0x004C564Cu, "control flow in delay slot"); return;
L_08B0E7B4:
    if (ctx.gpr[18] != ctx.gpr[20]) {
    rt.unsupported(0x08B0E7B8u, 0x004E4F4Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 195u, 0x08B21904u>(ctx, &aot_mem); return;
    }
    goto L_08B0E7BC;
L_08B0E7BC:
    if (ctx.gpr[18] != ctx.gpr[20]) {
    if (ctx.gpr[12] != 0u) ctx.gpr[9] = (ctx.gpr[2]);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 197u, 0x08B2190Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0E7C4;
L_08B0E7C4:
    if (ctx.gpr[2] != ctx.gpr[14]) {
    ctx.gpr[10] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 392u, 0x08B224FCu>(ctx, &aot_mem); return;
    }
    goto L_08B0E7CC;
L_08B0E7CC:
    rt.unsupported(0x08B0E7CCu, 0x4D414447u, "unknown not lowered yet"); return;
L_08B0E7D4:
    rt.unsupported(0x08B0E7D4u, 0x4A414748u, "cop2/vfpu not lowered yet"); return;
L_08B0E7E4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 280u, 0x08B2210Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0E7EC;
L_08B0E7EC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 392u, 0x08B224FCu>(ctx, &aot_mem); return;
    }
    goto L_08B0E7F4;
L_08B0E7F4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1194u, 0x08B23D44u>(ctx, &aot_mem); return;
    }
    goto L_08B0E7FC;
L_08B0E7FC:
    if (ctx.gpr[2] != ctx.gpr[20]) {
    ctx.gpr[10] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 920u, 0x08B23518u>(ctx, &aot_mem); return;
    }
    goto L_08B0E804;
L_08B0E804:
    if (ctx.gpr[2] == ctx.gpr[12]) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 106u, 0x08B20910u>(ctx, &aot_mem); return;
    }
    goto L_08B0E80C;
L_08B0E80C:
    rt.unsupported(0x08B0E80Cu, 0x4F534D54u, "unknown not lowered yet"); return;
L_08B0E81C:
    if (ctx.gpr[18] == ctx.gpr[4]) {
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<67u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<65u, 1u>(vfpu_d); }
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 283u, 0x08B22128u>(ctx, &aot_mem); return;
    }
    goto L_08B0E824;
L_08B0E824:
    // nop
    goto L_08B0E828;
L_08B0E828:
    rt.unsupported(0x08B0E828u, 0x4B494244u, "cop2/vfpu not lowered yet"); return;
L_08B0E830:
    rt.unsupported(0x08B0E830u, 0x4B494244u, "cop2/vfpu not lowered yet"); return;
L_08B0E838:
    if (ctx.gpr[2] == ctx.gpr[18]) {
    ctx.lo = 0u;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 926u, 0x08B23544u>(ctx, &aot_mem); return;
    }
    goto L_08B0E840;
L_08B0E840:
    rt.unsupported(0x08B0E840u, 0x4B494244u, "cop2/vfpu not lowered yet"); return;
L_08B0E850:
    rt.unsupported(0x08B0E850u, 0x4B494244u, "cop2/vfpu not lowered yet"); return;
L_08B0E858:
    rt.unsupported(0x08B0E858u, 0x4B494244u, "cop2/vfpu not lowered yet"); return;
L_08B0E860:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E864u, 0x004F475Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 825u, 0x08B1FD7Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0E868;
L_08B0E868:
    rt.unsupported(0x08B0E868u, 0x4D5F5453u, "unknown not lowered yet"); return;
L_08B0E870:
    rt.unsupported(0x08B0E874u, 0x00544F48u, "control flow in delay slot"); return;
L_08B0E878:
    rt.unsupported(0x08B0E87Cu, 0x005A5A49u, "control flow in delay slot"); return;
L_08B0E880:
    rt.unsupported(0x08B0E880u, 0x4E5F5453u, "unknown not lowered yet"); return;
L_08B0E888:
    if (ctx.gpr[2] != ctx.gpr[31]) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 417u, 0x08B225C0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E890;
L_08B0E890:
    if (ctx.gpr[2] != ctx.gpr[31]) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 642u, 0x08B1EDE4u>(ctx, &aot_mem); return;
    }
    goto L_08B0E898;
L_08B0E898:
    rt.unsupported(0x08B0E898u, 0x475F5453u, "cop1? not lowered yet"); return;
L_08B0E8A0:
    rt.unsupported(0x08B0E8A0u, 0x495F5453u, "cop2/vfpu not lowered yet"); return;
L_08B0E8A8:
    rt.unsupported(0x08B0E8A8u, 0x43485453u, "unknown not lowered yet"); return;
L_08B0E8B0:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E8B4u, 0x0031305Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1088u, 0x08B23A00u>(ctx, &aot_mem); return;
    }
    goto L_08B0E8B8;
L_08B0E8B8:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E8BCu, 0x0032305Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1089u, 0x08B23A08u>(ctx, &aot_mem); return;
    }
    goto L_08B0E8C0;
L_08B0E8C0:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E8C4u, 0x0033305Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1090u, 0x08B23A10u>(ctx, &aot_mem); return;
    }
    goto L_08B0E8C8;
L_08B0E8C8:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E8CCu, 0x0034305Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1091u, 0x08B23A18u>(ctx, &aot_mem); return;
    }
    goto L_08B0E8D0;
L_08B0E8D0:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E8D4u, 0x0035305Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1092u, 0x08B23A20u>(ctx, &aot_mem); return;
    }
    goto L_08B0E8D8;
L_08B0E8D8:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E8DCu, 0x0036305Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1093u, 0x08B23A28u>(ctx, &aot_mem); return;
    }
    goto L_08B0E8E0;
L_08B0E8E0:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E8E4u, 0x0037305Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1094u, 0x08B23A30u>(ctx, &aot_mem); return;
    }
    goto L_08B0E8E8;
L_08B0E8E8:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E8ECu, 0x0038305Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1095u, 0x08B23A38u>(ctx, &aot_mem); return;
    }
    goto L_08B0E8F0;
L_08B0E8F0:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E8F4u, 0x0039305Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1096u, 0x08B23A40u>(ctx, &aot_mem); return;
    }
    goto L_08B0E8F8;
L_08B0E8F8:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E8FCu, 0x0030315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1097u, 0x08B23A48u>(ctx, &aot_mem); return;
    }
    goto L_08B0E900;
L_08B0E900:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E904u, 0x0031315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1098u, 0x08B23A50u>(ctx, &aot_mem); return;
    }
    goto L_08B0E908;
L_08B0E908:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E90Cu, 0x0032315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1099u, 0x08B23A58u>(ctx, &aot_mem); return;
    }
    goto L_08B0E910;
L_08B0E910:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E914u, 0x0033315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1100u, 0x08B23A60u>(ctx, &aot_mem); return;
    }
    goto L_08B0E918;
L_08B0E918:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E91Cu, 0x0034315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1101u, 0x08B23A68u>(ctx, &aot_mem); return;
    }
    goto L_08B0E920;
L_08B0E920:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E924u, 0x0035315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1102u, 0x08B23A70u>(ctx, &aot_mem); return;
    }
    goto L_08B0E928;
L_08B0E928:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E92Cu, 0x0036315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1103u, 0x08B23A78u>(ctx, &aot_mem); return;
    }
    goto L_08B0E930;
L_08B0E930:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E934u, 0x0037315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1104u, 0x08B23A80u>(ctx, &aot_mem); return;
    }
    goto L_08B0E938;
L_08B0E938:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E93Cu, 0x0038315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1105u, 0x08B23A88u>(ctx, &aot_mem); return;
    }
    goto L_08B0E940;
L_08B0E940:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E944u, 0x0039315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1106u, 0x08B23A90u>(ctx, &aot_mem); return;
    }
    goto L_08B0E948;
L_08B0E948:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E94Cu, 0x0030325Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1107u, 0x08B23A98u>(ctx, &aot_mem); return;
    }
    goto L_08B0E950;
L_08B0E950:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E954u, 0x0033325Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1108u, 0x08B23AA0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E958;
L_08B0E958:
    rt.unsupported(0x08B0E958u, 0x43485453u, "unknown not lowered yet"); return;
L_08B0E960:
    rt.unsupported(0x08B0E960u, 0x43485453u, "unknown not lowered yet"); return;
L_08B0E968:
    rt.unsupported(0x08B0E968u, 0x43485453u, "unknown not lowered yet"); return;
L_08B0E970:
    rt.unsupported(0x08B0E970u, 0x43485453u, "unknown not lowered yet"); return;
L_08B0E978:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E97Cu, 0x0031325Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1113u, 0x08B23AC8u>(ctx, &aot_mem); return;
    }
    goto L_08B0E980;
L_08B0E980:
    if (ctx.gpr[2] != ctx.gpr[6]) {
    rt.unsupported(0x08B0E984u, 0x0032325Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1114u, 0x08B23AD0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E988;
L_08B0E988:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.lo = ctx.gpr[2];
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 454u, 0x08B226DCu>(ctx, &aot_mem); return;
    }
    goto L_08B0E990;
L_08B0E990:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[8] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20AE0u>(ctx, &aot_mem); return;
    }
    goto L_08B0E998;
L_08B0E998:
    if (ctx.gpr[26] == ctx.gpr[31]) {
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[1]) >> 9u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 705u, 0x08B1F6E8u>(ctx, &aot_mem); return;
    }
    goto L_08B0E9A0;
L_08B0E9A0:
    ctx.gpr[31] = (ctx.gpr[10] ^ 17235u);
    rt.unsupported(0x08B0E9A4u, 0x00004D4Du, "special? not lowered yet"); return;
L_08B0E9A8:
    if (ctx.gpr[26] == ctx.gpr[31]) {
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 29u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 706u, 0x08B1F6F8u>(ctx, &aot_mem); return;
    }
    goto L_08B0E9B0;
L_08B0E9B0:
    rt.unsupported(0x08B0E9B4u, 0x00484349u, "control flow in delay slot"); return;
L_08B0E9B8:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E9BCu, 0x004E435Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 839u, 0x08B1FED4u>(ctx, &aot_mem); return;
    }
    goto L_08B0E9C0;
L_08B0E9C0:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0E9C4u, 0x0052545Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 840u, 0x08B1FEDCu>(ctx, &aot_mem); return;
    }
    goto L_08B0E9C8;
L_08B0E9C8:
    rt.unsupported(0x08B0E9C8u, 0x425F5453u, "unknown not lowered yet"); return;
L_08B0E9D0:
    rt.unsupported(0x08B0E9D0u, 0x4C5F5453u, "unknown not lowered yet"); return;
L_08B0E9D8:
    rt.unsupported(0x08B0E9D8u, 0x445F5453u, "unsupported CFC1 control register"); return;
    ctx.gpr[10] = (ctx.lo);
    goto L_08B0E9E0;
L_08B0E9E0:
    rt.unsupported(0x08B0E9E0u, 0x47414553u, "cop1? not lowered yet"); return;
L_08B0E9E8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B0E9ECu, 0x0052464Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 987u, 0x08B23704u>(ctx, &aot_mem); return;
    }
    goto L_08B0E9F0;
L_08B0E9F0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[16] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 846u, 0x08B1FF0Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0E9F8;
L_08B0E9F8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[17] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 847u, 0x08B1FF14u>(ctx, &aot_mem); return;
    }
    goto L_08B0EA00;
L_08B0EA00:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[18] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 848u, 0x08B1FF1Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0EA08;
L_08B0EA08:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[19] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 849u, 0x08B1FF24u>(ctx, &aot_mem); return;
    }
    goto L_08B0EA10;
L_08B0EA10:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[20] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 850u, 0x08B1FF2Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0EA18;
L_08B0EA18:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[21] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 851u, 0x08B1FF34u>(ctx, &aot_mem); return;
    }
    goto L_08B0EA20;
L_08B0EA20:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[22] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 853u, 0x08B1FF3Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0EA28;
L_08B0EA28:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[23] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 855u, 0x08B1FF44u>(ctx, &aot_mem); return;
    }
    goto L_08B0EA30;
L_08B0EA30:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[24] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 856u, 0x08B1FF4Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0EA38;
L_08B0EA38:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[25] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 857u, 0x08B1FF54u>(ctx, &aot_mem); return;
    }
    goto L_08B0EA40;
L_08B0EA40:
    rt.unsupported(0x08B0EA44u, 0x0052464Cu, "control flow in delay slot"); return;
L_08B0EA48:
    rt.unsupported(0x08B0EA48u, 0x41525053u, "unknown not lowered yet"); return;
L_08B0EA50:
    if (ctx.gpr[26] != ctx.gpr[31]) {
    rt.unsupported(0x08B0EA54u, 0x00504145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1140u, 0x08B23BA0u>(ctx, &aot_mem); return;
    }
    goto L_08B0EA58;
L_08B0EA58:
    rt.unsupported(0x08B0EA58u, 0x415F5453u, "unknown not lowered yet"); return;
L_08B0EA60:
    rt.unsupported(0x08B0EA60u, 0x445F5453u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B0EA64u, 0x00414D41u, "special? not lowered yet"); return;
L_08B0EA68:
    if (ctx.gpr[2] == ctx.gpr[15]) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 874u, 0x08B233ACu>(ctx, &aot_mem); return;
    }
    goto L_08B0EA70;
L_08B0EA70:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0EA74u, 0x0000315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1144u, 0x08B23BC0u>(ctx, &aot_mem); return;
    }
    goto L_08B0EA78;
L_08B0EA78:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0EA7Cu, 0x0000325Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1145u, 0x08B23BC8u>(ctx, &aot_mem); return;
    }
    goto L_08B0EA80;
L_08B0EA80:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0EA84u, 0x0000335Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1146u, 0x08B23BD0u>(ctx, &aot_mem); return;
    }
    goto L_08B0EA88;
L_08B0EA88:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0EA8Cu, 0x0000345Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1147u, 0x08B23BD8u>(ctx, &aot_mem); return;
    }
    goto L_08B0EA90;
L_08B0EA90:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0EA94u, 0x0000355Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1148u, 0x08B23BE0u>(ctx, &aot_mem); return;
    }
    goto L_08B0EA98;
L_08B0EA98:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0EA9Cu, 0x0000365Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1149u, 0x08B23BE8u>(ctx, &aot_mem); return;
    }
    goto L_08B0EAA0;
L_08B0EAA0:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0EAA4u, 0x0000375Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1150u, 0x08B23BF0u>(ctx, &aot_mem); return;
    }
    goto L_08B0EAA8;
L_08B0EAA8:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0EAACu, 0x0000385Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1151u, 0x08B23BF8u>(ctx, &aot_mem); return;
    }
    goto L_08B0EAB0;
L_08B0EAB0:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0EAB4u, 0x0000395Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1152u, 0x08B23C00u>(ctx, &aot_mem); return;
    }
    goto L_08B0EAB8;
L_08B0EAB8:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0EABCu, 0x0030315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1153u, 0x08B23C08u>(ctx, &aot_mem); return;
    }
    goto L_08B0EAC0;
L_08B0EAC0:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0EAC4u, 0x0031315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1154u, 0x08B23C10u>(ctx, &aot_mem); return;
    }
    goto L_08B0EAC8;
L_08B0EAC8:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0EACCu, 0x0032315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1155u, 0x08B23C18u>(ctx, &aot_mem); return;
    }
    goto L_08B0EAD0;
L_08B0EAD0:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0EAD4u, 0x0033315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1156u, 0x08B23C20u>(ctx, &aot_mem); return;
    }
    goto L_08B0EAD8;
L_08B0EAD8:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0EADCu, 0x0034315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1157u, 0x08B23C28u>(ctx, &aot_mem); return;
    }
    goto L_08B0EAE0;
L_08B0EAE0:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B0EAE4u, 0x0035315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1158u, 0x08B23C30u>(ctx, &aot_mem); return;
    }
    goto L_08B0EAE8;
L_08B0EAE8:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B0EAECu, 0x00000045u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 116u, 0x08B20BF8u>(ctx, &aot_mem); return;
    }
    goto L_08B0EAF0;
L_08B0EAF0:
    rt.unsupported(0x08B0EAF0u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B0EAF8:
    rt.unsupported(0x08B0EAF8u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B0EAFC:
    ctx.gpr[16] = (ctx.gpr[17] & 9567u);
    rt.unsupported(0x08B0EB00u, 0x00000069u, "special? not lowered yet"); return;
L_08B0EB04:
    ctx.gpr[4] = (ctx.gpr[19] ^ 9504u);
    rt.unsupported(0x08B0EB08u, 0x00642530u, "special? not lowered yet"); return;
L_08B0EB0C:
    ctx.gpr[4] = (ctx.gpr[19] ^ 9504u);
    ctx.gpr[12] = (0u | 0u);
    goto L_08B0EB14;
L_08B0EB14:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0EB18u, 0x20732520u, "unknown not lowered yet"); return;
L_08B0EB20:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B0EB24u, 0x004F4F5Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 4u, 0x08B2003Cu>(ctx, &aot_mem); return;
    }
    goto L_08B0EB28;
L_08B0EB28:
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(8224) ? 1u : 0u);
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(26162));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(8307) ? 1u : 0u);
    rt.unsupported(0x08B0EB34u, 0x00006632u, "special? not lowered yet"); return;
L_08B0EB38:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(9509));
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<36u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    ctx.gpr[4] = (0u | 0u);
    goto L_08B0EB48;
L_08B0EB48:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0EB4Cu, 0x732520DBu, "unknown not lowered yet"); return;
L_08B0EB6C:
    ctx.gpr[12] = (0u | 0u);
    goto L_08B0EB70;
L_08B0EB70:
    ctx.execute_vfpu_vhdp(37u, 46u, 50u, 1u);
    // nop
    goto L_08B0EB78;
L_08B0EB78:
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(25637));
    // nop
    goto L_08B0EB80;
L_08B0EB80:
    ctx.gpr[12] = (ctx.gpr[6] | ctx.gpr[27]);
    goto L_08B0EB84;
L_08B0EB84:
    ctx.gpr[14] = (ctx.gpr[17] & 9508u);
    (void)(0u ^ 0u);
    // nop
    rt.unsupported(0x08B0EB94u, 0x088495B8u, "control flow in delay slot"); return;
L_08B0EC28:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0EC2Cu, 0x20676E69u, "unknown not lowered yet"); return;
L_08B0EC44:
    rt.unsupported(0x08B0EC44u, 0x72617473u, "unknown not lowered yet"); return;
L_08B0EC54:
    rt.unsupported(0x08B0EC58u, 0x52494654u, "control flow in delay slot"); return;
L_08B0EC5C:
    rt.unsupported(0x08B0EC5Cu, 0x00000045u, "special? not lowered yet"); return;
L_08B0EC68:
    rt.unsupported(0x08B0EC68u, 0x746C756Du, "unknown not lowered yet"); return;
L_08B0EC7C:
    rt.unsupported(0x08B0EC7Cu, 0x6E6B6E55u, "vfpu3 not lowered yet"); return;
L_08B0EE38:
    rt.unsupported(0x08B0EE3Cu, 0x50204445u, "control flow in delay slot"); return;
L_08B0EE40:
    rt.unsupported(0x08B0EE40u, 0x4F59414Cu, "unknown not lowered yet"); return;
L_08B0EF40:
    rt.unsupported(0x08B0EF40u, 0x74726170u, "unknown not lowered yet"); return;
L_08B0EF4C:
    rt.unsupported(0x08B0EF4Cu, 0x61697274u, "vfpu0 not lowered yet"); return;
L_08B0EF58:
    rt.unsupported(0x08B0EF58u, 0x61697274u, "vfpu0 not lowered yet"); return;
L_08B0EF64:
    rt.unsupported(0x08B0EF64u, 0x00647568u, "special? not lowered yet"); return;
L_08B0EF68:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 116u, 1u>();
    rt.unsupported(0x08B0EF6Cu, 0x0036314Du, "special? not lowered yet"); return;
L_08B0EF78:
    rt.unsupported(0x08B0EF78u, 0x4B434F4Cu, "cop2/vfpu not lowered yet"); return;
L_08B0EF88:
    rt.unsupported(0x08B0EF88u, 0x636E6F63u, "vfpu0 not lowered yet"); return;
L_08B0EF90:
    ctx.execute_vfpu_vscl_ct<102u, 111u, 114u, 1u>();
    ctx.gpr[12] = (ctx.gpr[3] + ctx.gpr[8]);
    goto L_08B0EF98;
L_08B0EF98:
    ctx.execute_vfpu_vscl_ct<102u, 111u, 114u, 1u>();
    rt.unsupported(0x08B0EF9Cu, 0x69686361u, "unknown not lowered yet"); return;
L_08B0EFA4:
    rt.unsupported(0x08B0EFA4u, 0x6E746567u, "vfpu3 not lowered yet"); return;
L_08B0EFAC:
    rt.unsupported(0x08B0EFACu, 0x6E746573u, "vfpu3 not lowered yet"); return;
L_08B0EFB4:
    rt.unsupported(0x08B0EFB4u, 0x74726F73u, "unknown not lowered yet"); return;
L_08B0EFBC:
    ctx.execute_vfpu_vscl_ct<105u, 110u, 115u, 1u>();
    rt.unsupported(0x08B0EFC0u, 0x00007472u, "special? not lowered yet"); return;
L_08B0EFC4:
    ctx.execute_vfpu_compare3(114u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B0EFC8u, 0x00006576u, "special? not lowered yet"); return;
L_08B0EFCC:
    // nop
    goto L_08B0EFD0;
L_08B0EFD0:
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 4u>();
    ctx.execute_vfpu_compare3(101u, 32u, 99u, 1u, 6u);
    rt.unsupported(0x08B0EFD8u, 0x6961746Eu, "unknown not lowered yet"); return;
L_08B0EFEC:
    rt.unsupported(0x08B0EFECu, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B0F010:
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 4u>();
    (void)(0u | 0u);
    rt.unsupported(0x08B0F018u, 0x00006277u, "special? not lowered yet"); return;
L_08B0F034:
    rt.unsupported(0x08B0F034u, 0x4F525245u, "unknown not lowered yet"); return;
L_08B0F04C:
    if (0u == 0u) (void)(0u);
    rt.unsupported(0x08B0F050u, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B0F058:
    rt.unsupported(0x08B0F058u, 0x43534944u, "unknown not lowered yet"); return;
L_08B0F064:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B0F068u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B0F06Cu, 0x432F5249u, "unknown not lowered yet"); return;
L_08B0F078:
    rt.unsupported(0x08B0F078u, 0x4D41472Fu, "unknown not lowered yet"); return;
L_08B0F084:
    rt.unsupported(0x08B0F084u, 0x6E756843u, "vfpu3 not lowered yet"); return;
L_08B0F0C8:
    rt.unsupported(0x08B0F0C8u, 0x006E6176u, "special? not lowered yet"); return;
L_08B0F0E0:
    ctx.execute_vfpu_vscl_ct<126u, 99u, 78u, 1u>();
    rt.unsupported(0x08B0F0E4u, 0x73655374u, "unknown not lowered yet"); return;
L_08B0F0F0:
    rt.unsupported(0x08B0F0F0u, 0x7473694Cu, "unknown not lowered yet"); return;
L_08B0F104:
    rt.unsupported(0x08B0F104u, 0x206F6F54u, "unknown not lowered yet"); return;
L_08B0F134:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.execute_vfpu_compare3(32u, 84u, 111u, 1u, 6u);
    rt.unsupported(0x08B0F144u, 0x6E616D20u, "vfpu3 not lowered yet"); return;
L_08B0F188:
    rt.unsupported(0x08B0F188u, 0x6E6E6F43u, "vfpu3 not lowered yet"); return;
L_08B0F1A4:
    rt.unsupported(0x08B0F1A4u, 0x74654E63u, "unknown not lowered yet"); return;
L_08B0F1C0:
    ctx.gpr[12] = (0u | ctx.gpr[10]);
    goto L_08B0F1C4;
L_08B0F1C4:
    ctx.execute_vfpu_vscl_ct<65u, 116u, 116u, 1u>();
    rt.unsupported(0x08B0F1C8u, 0x2074706Du, "unknown not lowered yet"); return;
L_08B0F1EC:
    ctx.execute_vfpu_vhdp(111u, 110u, 32u, 1u);
    ctx.execute_vfpu_vscl_ct<97u, 105u, 108u, 1u>();
    ctx.gpr[5] = (0u & ctx.gpr[10]);
    goto L_08B0F1F8;
L_08B0F1F8:
    rt.unsupported(0x08B0F1F8u, 0x706F7244u, "unknown not lowered yet"); return;
L_08B0F228:
    ctx.execute_vfpu_compare3(65u, 100u, 104u, 1u, 6u);
    ctx.execute_vfpu_compare3(99u, 32u, 67u, 1u, 6u);
    rt.unsupported(0x08B0F230u, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08B0F270:
    ctx.execute_vfpu_compare3(65u, 100u, 104u, 1u, 6u);
    ctx.execute_vfpu_compare3(99u, 32u, 67u, 1u, 6u);
    rt.unsupported(0x08B0F278u, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08B0F2B0:
    rt.unsupported(0x08B0F2B0u, 0x76506576u, "unknown not lowered yet"); return;
L_08B0F2BC:
    rt.unsupported(0x08B0F2BCu, 0x004B4341u, "special? not lowered yet"); return;
L_08B0F2C0:
    rt.unsupported(0x08B0F2C0u, 0x4F464E49u, "unknown not lowered yet"); return;
L_08B0F2D4:
    rt.unsupported(0x08B0F2D4u, 0x203D2078u, "unknown not lowered yet"); return;
L_08B0F2F0:
    rt.unsupported(0x08B0F2F0u, 0x6E69616Du, "vfpu3 not lowered yet"); return;
L_08B0F340:
    ctx.gpr[14] = (ctx.gpr[9] & 9504u);
    rt.unsupported(0x08B0F344u, 0x70202066u, "unknown not lowered yet"); return;
L_08B0F360:
    ctx.execute_vfpu_vscl_ct<119u, 104u, 101u, 1u>();
    ctx.execute_vfpu_vhdp(108u, 95u, 114u, 1u);
    ctx.execute_vfpu_vminmax(95u, 100u, 117u, 1u, false);
    ctx.gpr[15] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B0F370;
L_08B0F370:
    ctx.execute_vfpu_vscl_ct<119u, 104u, 101u, 1u>();
    ctx.execute_vfpu_vminmax(108u, 95u, 114u, 1u, false);
    ctx.execute_vfpu_vminmax(95u, 100u, 117u, 1u, false);
    ctx.gpr[15] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B0F380;
L_08B0F380:
    ctx.execute_vfpu_vscl_ct<119u, 104u, 101u, 1u>();
    rt.unsupported(0x08B0F384u, 0x62725F6Cu, "vfpu0 not lowered yet"); return;
L_08B0F390:
    ctx.execute_vfpu_vscl_ct<119u, 104u, 101u, 1u>();
    ctx.execute_vfpu_vhdp(108u, 95u, 108u, 1u);
    ctx.execute_vfpu_vminmax(95u, 100u, 117u, 1u, false);
    ctx.gpr[15] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B0F3A0;
L_08B0F3A0:
    ctx.execute_vfpu_vscl_ct<119u, 104u, 101u, 1u>();
    ctx.execute_vfpu_vminmax(108u, 95u, 108u, 1u, false);
    ctx.execute_vfpu_vminmax(95u, 100u, 117u, 1u, false);
    ctx.gpr[15] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B0F3B0;
L_08B0F3B0:
    ctx.execute_vfpu_vscl_ct<119u, 104u, 101u, 1u>();
    rt.unsupported(0x08B0F3B4u, 0x626C5F6Cu, "vfpu0 not lowered yet"); return;
L_08B0F3C0:
    rt.unsupported(0x08B0F3C0u, 0x706D7562u, "unknown not lowered yet"); return;
L_08B0F3D4:
    rt.unsupported(0x08B0F3D4u, 0x6E6E6F62u, "vfpu3 not lowered yet"); return;
L_08B0F3E4:
    rt.unsupported(0x08B0F3E4u, 0x676E6977u, "vfpu1 not lowered yet"); return;
L_08B0F3F0:
    rt.unsupported(0x08B0F3F0u, 0x00000079u, "special? not lowered yet"); return;
L_08B0F3F4:
    rt.unsupported(0x08B0F3F4u, 0x676E6977u, "vfpu1 not lowered yet"); return;
L_08B0F400:
    rt.unsupported(0x08B0F400u, 0x00000079u, "special? not lowered yet"); return;
L_08B0F404:
    rt.unsupported(0x08B0F404u, 0x726F6F64u, "unknown not lowered yet"); return;
L_08B0F410:
    rt.unsupported(0x08B0F410u, 0x00000079u, "special? not lowered yet"); return;
L_08B0F414:
    rt.unsupported(0x08B0F414u, 0x726F6F64u, "unknown not lowered yet"); return;
L_08B0F420:
    rt.unsupported(0x08B0F420u, 0x00000079u, "special? not lowered yet"); return;
L_08B0F424:
    rt.unsupported(0x08B0F424u, 0x676E6977u, "vfpu1 not lowered yet"); return;
L_08B0F430:
    rt.unsupported(0x08B0F430u, 0x00000079u, "special? not lowered yet"); return;
L_08B0F434:
    rt.unsupported(0x08B0F434u, 0x676E6977u, "vfpu1 not lowered yet"); return;
L_08B0F440:
    rt.unsupported(0x08B0F440u, 0x00000079u, "special? not lowered yet"); return;
L_08B0F444:
    rt.unsupported(0x08B0F444u, 0x726F6F64u, "unknown not lowered yet"); return;
L_08B0F450:
    rt.unsupported(0x08B0F450u, 0x00000079u, "special? not lowered yet"); return;
L_08B0F454:
    rt.unsupported(0x08B0F454u, 0x726F6F64u, "unknown not lowered yet"); return;
L_08B0F460:
    rt.unsupported(0x08B0F460u, 0x00000079u, "special? not lowered yet"); return;
L_08B0F464:
    rt.unsupported(0x08B0F464u, 0x746F6F62u, "unknown not lowered yet"); return;
L_08B0F470:
    rt.unsupported(0x08B0F470u, 0x706D7562u, "unknown not lowered yet"); return;
L_08B0F480:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<119u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<115u, 99u, 114u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<95u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<101u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0F48Cu, 0x796D6D75u, "unknown not lowered yet"); return;
L_08B0F494:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B0F498u, 0x6E6F7266u, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 22u, 0x08B28A58u>(ctx, &aot_mem); return;
    }
    goto L_08B0F49C;
L_08B0F49C:
    rt.unsupported(0x08B0F49Cu, 0x61657374u, "vfpu0 not lowered yet"); return;
L_08B0F4A4:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B0F4A8u, 0x6B636162u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 23u, 0x08B28A68u>(ctx, &aot_mem); return;
    }
    goto L_08B0F4AC;
L_08B0F4AC:
    rt.unsupported(0x08B0F4ACu, 0x74616573u, "unknown not lowered yet"); return;
L_08B0F4B4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0F4B8u, 0x6867696Cu, "unknown not lowered yet"); return;
L_08B0F4C0:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 4u>();
    rt.unsupported(0x08B0F4C4u, 0x6867696Cu, "unknown not lowered yet"); return;
L_08B0F4CC:
    rt.unsupported(0x08B0F4CCu, 0x61687865u, "vfpu0 not lowered yet"); return;
L_08B0F4D4:
    rt.unsupported(0x08B0F4D4u, 0x72747865u, "unknown not lowered yet"); return;
L_08B0F4DC:
    rt.unsupported(0x08B0F4DCu, 0x72747865u, "unknown not lowered yet"); return;
L_08B0F4E4:
    rt.unsupported(0x08B0F4E4u, 0x72747865u, "unknown not lowered yet"); return;
L_08B0F4EC:
    rt.unsupported(0x08B0F4ECu, 0x72747865u, "unknown not lowered yet"); return;
L_08B0F4F4:
    rt.unsupported(0x08B0F4F4u, 0x72747865u, "unknown not lowered yet"); return;
L_08B0F4FC:
    rt.unsupported(0x08B0F4FCu, 0x72747865u, "unknown not lowered yet"); return;
L_08B0F504:
    rt.unsupported(0x08B0F504u, 0x74616F62u, "unknown not lowered yet"); return;
L_08B0F514:
    rt.unsupported(0x08B0F514u, 0x74616F62u, "unknown not lowered yet"); return;
L_08B0F524:
    rt.unsupported(0x08B0F524u, 0x74616F62u, "unknown not lowered yet"); return;
L_08B0F534:
    rt.unsupported(0x08B0F534u, 0x74616F62u, "unknown not lowered yet"); return;
L_08B0F544:
    rt.unsupported(0x08B0F544u, 0x74616F62u, "unknown not lowered yet"); return;
L_08B0F558:
    rt.unsupported(0x08B0F558u, 0x74616F62u, "unknown not lowered yet"); return;
L_08B0F56C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<119u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<115u, 99u, 114u, 1u>();
    ctx.gpr[13] = (0u | 0u);
    goto L_08B0F578;
L_08B0F578:
    rt.unsupported(0x08B0F578u, 0x726F6F64u, "unknown not lowered yet"); return;
L_08B0F588:
    rt.unsupported(0x08B0F588u, 0x726F6F64u, "unknown not lowered yet"); return;
L_08B0F598:
    rt.unsupported(0x08B0F598u, 0x6867696Cu, "unknown not lowered yet"); return;
L_08B0F5A4:
    rt.unsupported(0x08B0F5A4u, 0x6867696Cu, "unknown not lowered yet"); return;
L_08B0F5B0:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B0F5B4u, 0x7466656Cu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 27u, 0x08B28B74u>(ctx, &aot_mem); return;
    }
    goto L_08B0F5B8;
L_08B0F5B8:
    rt.unsupported(0x08B0F5B8u, 0x746E655Fu, "unknown not lowered yet"); return;
L_08B0F5C0:
    rt.unsupported(0x08B0F5C4u, 0x5F64696Du, "control flow in delay slot"); return;
L_08B0F5C8:
    rt.unsupported(0x08B0F5C8u, 0x72746E65u, "unknown not lowered yet"); return;
L_08B0F5D0:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B0F5D4u, 0x68676972u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 29u, 0x08B28B94u>(ctx, &aot_mem); return;
    }
    goto L_08B0F5D8;
L_08B0F5D8:
    rt.unsupported(0x08B0F5D8u, 0x6E655F74u, "vfpu3 not lowered yet"); return;
L_08B0F5E0:
    rt.unsupported(0x08B0F5E0u, 0x726F6F64u, "unknown not lowered yet"); return;
L_08B0F5F4:
    rt.unsupported(0x08B0F5F4u, 0x726F6F64u, "unknown not lowered yet"); return;
L_08B0F604:
    rt.unsupported(0x08B0F604u, 0x706D6172u, "unknown not lowered yet"); return;
L_08B0F618:
    rt.unsupported(0x08B0F618u, 0x706D6172u, "unknown not lowered yet"); return;
L_08B0F628:
    ctx.execute_vfpu_vminmax(99u, 104u, 105u, 1u, false);
    ctx.execute_vfpu_vhdp(95u, 108u, 101u, 1u);
    rt.unsupported(0x08B0F630u, 0x00000074u, "special? not lowered yet"); return;
L_08B0F634:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B0F638u, 0x6E696F70u, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 30u, 0x08B28BF8u>(ctx, &aot_mem); return;
    }
    goto L_08B0F63C;
L_08B0F63C:
    rt.unsupported(0x08B0F63Cu, 0x00000074u, "special? not lowered yet"); return;
L_08B0F640:
    ctx.gpr[18] = (ctx.gpr[11] & 24931u);
    ctx.execute_vfpu_vminmax(95u, 100u, 117u, 1u, false);
    ctx.gpr[15] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B0F64C;
L_08B0F64C:
    ctx.gpr[18] = (ctx.gpr[19] & 24931u);
    ctx.execute_vfpu_vminmax(95u, 100u, 117u, 1u, false);
    ctx.gpr[15] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B0F658;
L_08B0F658:
    ctx.gpr[18] = (ctx.gpr[27] & 24931u);
    ctx.execute_vfpu_vminmax(95u, 100u, 117u, 1u, false);
    ctx.gpr[15] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B0F664;
L_08B0F664:
    ctx.gpr[18] = (ctx.gpr[3] | 24931u);
    ctx.execute_vfpu_vminmax(95u, 100u, 117u, 1u, false);
    ctx.gpr[15] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B0F670;
L_08B0F670:
    rt.unsupported(0x08B0F670u, 0x73616863u, "unknown not lowered yet"); return;
L_08B0F67C:
    rt.unsupported(0x08B0F67Cu, 0x00000079u, "special? not lowered yet"); return;
L_08B0F680:
    rt.unsupported(0x08B0F680u, 0x72706F74u, "unknown not lowered yet"); return;
L_08B0F68C:
    rt.unsupported(0x08B0F68Cu, 0x6B636162u, "unknown not lowered yet"); return;
L_08B0F698:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 4u>();
    // nop
    goto L_08B0F6A0;
L_08B0F6A0:
    rt.unsupported(0x08B0F6A0u, 0x6B706F74u, "unknown not lowered yet"); return;
L_08B0F6A8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<107u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vhdp(95u, 108u, 101u, 1u);
    rt.unsupported(0x08B0F6B0u, 0x00000074u, "special? not lowered yet"); return;
L_08B0F6B4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<107u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0F6B8u, 0x6769725Fu, "vfpu1 not lowered yet"); return;
L_08B0F6C0:
    ctx.execute_vfpu_vscl_ct<119u, 104u, 101u, 1u>();
    rt.unsupported(0x08B0F6C4u, 0x72665F6Cu, "unknown not lowered yet"); return;
L_08B0F6D0:
    rt.unsupported(0x08B0F6D0u, 0x00000079u, "special? not lowered yet"); return;
L_08B0F6D4:
    ctx.execute_vfpu_vscl_ct<119u, 104u, 101u, 1u>();
    ctx.execute_vfpu_vscl_ct<108u, 95u, 114u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<95u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0F6E0u, 0x796D6D75u, "unknown not lowered yet"); return;
L_08B0F6E8:
    rt.unsupported(0x08B0F6E8u, 0x6867696Cu, "unknown not lowered yet"); return;
L_08B0F6F8:
    rt.unsupported(0x08B0F6F8u, 0x6867696Cu, "unknown not lowered yet"); return;
L_08B0F704:
    rt.unsupported(0x08B0F704u, 0x6867696Cu, "unknown not lowered yet"); return;
L_08B0F710:
    rt.unsupported(0x08B0F710u, 0x6B726F66u, "unknown not lowered yet"); return;
L_08B0F71C:
    rt.unsupported(0x08B0F71Cu, 0x6B726F66u, "unknown not lowered yet"); return;
L_08B0F728:
    ctx.execute_vfpu_vscl_ct<119u, 104u, 101u, 1u>();
    rt.unsupported(0x08B0F72Cu, 0x72665F6Cu, "unknown not lowered yet"); return;
L_08B0F734:
    ctx.execute_vfpu_vscl_ct<119u, 104u, 101u, 1u>();
    ctx.execute_vfpu_vscl_ct<108u, 95u, 114u, 1u>();
    ctx.gpr[14] = (0u + 0u);
    goto L_08B0F740;
L_08B0F740:
    rt.unsupported(0x08B0F740u, 0x6764756Du, "vfpu1 not lowered yet"); return;
L_08B0F74C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    rt.unsupported(0x08B0F750u, 0x6162656Cu, "vfpu0 not lowered yet"); return;
L_08B0F758:
    rt.unsupported(0x08B0F758u, 0x494C4F50u, "cop2/vfpu not lowered yet"); return;
L_08B0F760:
    ctx.execute_vfpu_vcmp_ct<117u, 108u, 1u, 14u>();
    // nop
    ctx.gpr[16] = (ctx.gpr[9] & 28271u);
    // nop
    ctx.gpr[16] = (ctx.gpr[17] & 28271u);
    // nop
    ctx.gpr[16] = (ctx.gpr[25] & 28271u);
    // nop
    ctx.gpr[16] = (ctx.gpr[1] | 28271u);
    // nop
    ctx.gpr[16] = (ctx.gpr[9] | 28271u);
    // nop
    ctx.gpr[16] = (ctx.gpr[17] | 28271u);
    // nop
    // nop
    goto L_08B0F79C;
L_08B0F79C:
    rt.unsupported(0x08B0F79Cu, 0x46454552u, "cop1? not lowered yet"); return;
L_08B0F7A4:
    rt.unsupported(0x08B0F7A4u, 0x0069685Fu, "special? not lowered yet"); return;
L_08B0F7A8:
    rt.unsupported(0x08B0F7A8u, 0x72747865u, "unknown not lowered yet"); return;
L_08B0F7B0:
    rt.unsupported(0x08B0F7B0u, 0x006F6C5Fu, "special? not lowered yet"); return;
L_08B0F7B4:
    ctx.execute_vfpu_compare3(95u, 118u, 108u, 1u, 6u);
    // nop
    goto L_08B0F7BC;
L_08B0F7BC:
    rt.unsupported(0x08B0F7BCu, 0x72616572u, "unknown not lowered yet"); return;
L_08B0F7C8:
    rt.unsupported(0x08B0F7C8u, 0x74616F62u, "unknown not lowered yet"); return;
L_08B0F7D0:
    ctx.execute_vfpu_vminmax(95u, 100u, 97u, 1u, false);
    // nop
    goto L_08B0F7D8;
L_08B0F7D8:
    rt.unsupported(0x08B0F7D8u, 0x006B6F5Fu, "special? not lowered yet"); return;
L_08B0F7DC:
    rt.unsupported(0x08B0F7DCu, 0x68655643u, "unknown not lowered yet"); return;
L_08B0F7F0:
    ctx.execute_vfpu_compare3(100u, 101u, 99u, 1u, 6u);
    rt.unsupported(0x08B0F7F4u, 0x735F6564u, "unknown not lowered yet"); return;
L_08B0F804:
    rt.unsupported(0x08B0F804u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B0F838:
    ctx.execute_vfpu_vminmax(67u, 68u, 117u, 1u, false);
    ctx.gpr[15] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    rt.unsupported(0x08B0F840u, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B0F848:
    ctx.gpr[12] = (0u | 0u);
    // nop
    rt.unsupported(0x08B0F854u, 0x08879F68u, "control flow in delay slot"); return;
L_08B0F8E8:
    ctx.gpr[29] = (15626u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    rt.unsupported(0x08B0F91Cu, 0x7661530Au, "unknown not lowered yet"); return;
L_08B0F934:
    ctx.execute_vfpu_vcmp_ct<105u, 108u, 1u, 7u>();
    rt.unsupported(0x08B0F938u, 0x79727420u, "unknown not lowered yet"); return;
L_08B0F974:
    ctx.execute_vfpu_vscl_ct<68u, 101u, 108u, 1u>();
    rt.unsupported(0x08B0F978u, 0x20646574u, "unknown not lowered yet"); return;
L_08B0FE48:
    rt.unsupported(0x08B0FE48u, 0x746E6F63u, "unknown not lowered yet"); return;
L_08B0FE64:
    rt.unsupported(0x08B0FE64u, 0x636E7566u, "vfpu0 not lowered yet"); return;
L_08B0FE88:
    rt.unsupported(0x08B0FE88u, 0x736E6F63u, "unknown not lowered yet"); return;
L_08B0FEA0:
    ctx.execute_vfpu_vscl_ct<99u, 111u, 100u, 1u>();
    rt.unsupported(0x08B0FEA4u, 0x7A697320u, "unknown not lowered yet"); return;
L_08B0FF38:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B0FF48u, 0x4143202Au, "unknown not lowered yet"); return;
L_08B0FF5C:
    rt.unsupported(0x08B0FF5Cu, 0x20214445u, "unknown not lowered yet"); return;
L_08B0FF74:
    rt.unsupported(0x08B0FF74u, 0x20444C4Fu, "unknown not lowered yet"); return;
L_08B0FF84:
    ctx.gpr[14] = (ctx.gpr[17] < static_cast<std::uint32_t>(11844) ? 1u : 0u);
    if (0u == 0u) (void)(0u);
    goto L_08B0FF8C;
L_08B0FF8C:
    rt.unsupported(0x08B0FF8Cu, 0x6E6B6E55u, "vfpu3 not lowered yet"); return;
L_08B0FFB8:
    rt.unsupported(0x08B0FFB8u, 0x74696157u, "unknown not lowered yet"); return;
L_08B0FFD4:
    rt.unsupported(0x08B0FFD4u, 0x20444C4Fu, "unknown not lowered yet"); return;
L_08B0FFF0:
    rt.unsupported(0x08B0FFF0u, 0x7020676Eu, "unknown not lowered yet"); return;
}

void recomp_unit_0194(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0194_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_194(Runtime &runtime) {
    runtime.register_generated_unit(194u, 0x08B0C000u, 16384u, &recomp_unit_0194, &recomp_unit_0194_entry);
    runtime.register_function(0x08B0C01Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C020u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C058u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C070u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C080u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C084u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C09Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C0B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C0C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C0E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C0F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C0FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C10Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C11Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C124u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C12Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C140u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C150u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C15Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C16Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C178u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C180u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C188u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C190u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C198u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C1A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C1A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C1B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C1C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C1D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C1F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C1F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C1FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C204u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C20Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C220u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C234u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C248u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C254u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C258u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C260u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C280u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C284u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C2ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C2E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C2E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C2F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C300u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C308u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C330u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C344u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C350u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C378u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C388u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C398u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C3ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C3B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C3B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C3C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C3D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C3DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C3ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C3F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C404u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C420u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C42Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C44Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C46Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C474u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C47Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C490u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C4A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C4BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C51Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C524u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C558u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C574u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C578u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C57Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C580u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C594u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C59Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C600u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C608u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C614u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C61Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C624u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C628u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C630u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C63Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C64Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C660u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C668u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C674u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C680u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C688u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C690u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C700u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C708u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C710u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C71Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C724u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C72Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C734u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C73Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C74Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C754u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C760u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C768u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C774u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C77Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C784u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C78Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C794u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C79Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C7A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C7D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C7D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C7D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C7ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C7F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C810u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C834u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C850u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C860u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C864u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C898u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C8A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C8D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C908u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C90Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C920u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C938u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C944u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C954u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C960u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C970u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C980u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C98Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C990u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C9ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C9B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C9B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C9C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C9E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C9ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA08u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA10u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA18u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA44u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA64u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA84u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CAA0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CAB4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CACCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CAD4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CADCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CAE8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CAECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CAF4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CAF8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB04u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB10u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB18u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB1Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB58u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB68u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB98u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CBB8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CBC0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CBC8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF40u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF4Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D008u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D024u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D048u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D050u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D058u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D060u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D068u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D070u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D078u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D080u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D088u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D090u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D098u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D100u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D120u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D140u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D148u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D150u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D154u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D184u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D18Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D190u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D198u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D208u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D210u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D214u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D220u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D240u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D248u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D258u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D274u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D27Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D284u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D28Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D294u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D29Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D2A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D2ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D2B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D2BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D2D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D2FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D320u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D344u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D368u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D38Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D404u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D40Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D414u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D41Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D424u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D42Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D434u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D43Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D444u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D44Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D450u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D458u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D460u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D468u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D470u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D474u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D478u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D47Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D480u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D488u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D490u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D498u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D504u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D50Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D514u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D524u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D540u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D550u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D55Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D56Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D588u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D598u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D608u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D624u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D634u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D644u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D678u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D684u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D68Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D694u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D69Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D6A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D6A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D6B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D6B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D6C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D6C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D6CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D6D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D6DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D6F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D70Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D734u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D744u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D754u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D764u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D770u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D780u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D790u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D840u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D864u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D884u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D8A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D8C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D908u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D914u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D91Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D924u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D92Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D938u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D950u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D958u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D980u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D994u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D9BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D9D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D9F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA0Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA28u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA38u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA4Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA54u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA5Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA60u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA68u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA70u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA78u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA80u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA94u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA98u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DAA0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DAA8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DAB8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DACCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DAE4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DAF4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DB04u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DB08u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DB1Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DB30u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DB3Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DB48u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DB64u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DB7Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DB8Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DBA4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DBC8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DBF8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCD8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCE0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCE8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCF0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCF8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD00u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD0Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD14u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD18u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD1Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD34u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD40u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD58u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD98u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDB8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDC0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDC8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDDCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE00u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE08u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE10u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE18u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE20u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE28u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE30u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE38u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE40u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE48u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE50u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE58u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE60u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE64u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE68u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DEA0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DEC8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DED0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DEE0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DEE4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DEE8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF14u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF28u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF38u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF48u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF4Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF68u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF70u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF7Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF88u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF8Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF94u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF9Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFA8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFB8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFD0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E000u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E030u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E05Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E080u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E08Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E098u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E100u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E124u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E138u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E148u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E154u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E15Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E16Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E178u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E180u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E214u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E234u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E290u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E298u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E300u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E308u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E310u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E318u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E320u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E328u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E330u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E338u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E344u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E34Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E354u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E35Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E364u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E36Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E374u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E37Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E384u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E38Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E394u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E39Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E404u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E40Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E414u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E41Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E424u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E42Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E434u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E43Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E444u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E44Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E454u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E45Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E464u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E46Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E474u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E47Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E484u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E48Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E494u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E49Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E504u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E50Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E514u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E51Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E524u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E52Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E534u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E53Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E544u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E54Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E554u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E55Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E564u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E56Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E574u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E57Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E584u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E58Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E594u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E59Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E604u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E60Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E614u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E61Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E624u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E62Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E634u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E63Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E644u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E64Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E654u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E65Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E664u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E66Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E674u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E67Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E684u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E68Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E690u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E694u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E69Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E704u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E708u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E70Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E714u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E71Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E724u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E72Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E734u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E73Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E744u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E74Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E754u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E75Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E764u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E76Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E774u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E77Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E784u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E78Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E794u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E79Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E804u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E80Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E81Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E824u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E828u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E830u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E838u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E840u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E850u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E858u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E860u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E868u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E870u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E878u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E880u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E888u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E890u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E898u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E900u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E908u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E910u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E918u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E920u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E928u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E930u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E938u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E940u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E948u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E950u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E958u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E960u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E968u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E970u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E978u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E980u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E988u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E990u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E998u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA00u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA08u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA10u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA18u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA20u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA28u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA30u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA38u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA40u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA48u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA50u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA58u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA60u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA68u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA70u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA78u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA80u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA88u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA90u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA98u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EAA0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EAA8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EAB0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EAB8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EAC0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EAC8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EAD0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EAD8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EAE0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EAE8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EAF0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EAF8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EAFCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB04u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB0Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB14u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB20u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB28u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB38u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB48u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB6Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB70u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB78u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB80u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB84u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EC28u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EC44u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EC54u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EC5Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EC68u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EC7Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EE38u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EE40u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF40u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF4Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF58u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF64u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF68u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF78u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF88u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF90u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF98u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EFA4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EFACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EFB4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EFBCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EFC4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EFCCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EFD0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EFECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F010u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F034u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F04Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F058u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F064u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F078u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F084u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F0C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F0E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F0F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F104u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F134u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F188u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F1A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F1C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F1C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F1ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F1F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F228u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F270u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F2B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F2BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F2C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F2D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F2F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F340u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F360u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F370u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F380u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F390u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F3A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F3B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F3C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F3D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F3E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F3F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F3F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F400u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F404u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F410u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F414u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F420u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F424u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F430u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F434u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F440u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F444u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F450u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F454u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F460u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F464u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F470u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F480u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F494u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F49Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F4A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F4ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F4B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F4C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F4CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F4D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F4DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F4E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F4ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F4F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F4FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F504u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F514u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F524u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F534u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F544u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F558u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F56Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F578u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F588u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F598u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F5A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F5B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F5B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F5C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F5C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F5D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F5D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F5E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F5F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F604u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F618u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F628u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F634u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F63Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F640u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F64Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F658u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F664u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F670u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F67Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F680u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F68Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F698u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F6A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F6A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F6B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F6C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F6D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F6D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F6E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F6F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F704u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F710u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F71Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F728u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F734u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F740u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F74Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F758u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F760u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F79Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F7A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F7A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F7B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F7B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F7BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F7C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F7D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F7D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F7DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F7F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F804u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F838u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F848u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F8E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F934u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F974u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FE48u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FE64u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FE88u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FEA0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FF38u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FF5Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FF74u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FF84u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FF8Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FFB8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FFD4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FFF0u, &recomp_unit_0194, "recomp_unit_0194");
}
} // namespace psprecomp
