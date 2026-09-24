#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0036[4095] = {
    1, 0, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 19, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27,
    0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 38,
    0, 39, 0, 40, 0, 41, 0, 42, 0, 0, 0, 43, 0, 44, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0,
    0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 57, 58, 0, 59, 60, 0,
    0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 69, 0, 70, 0,
    0, 0, 71, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 83, 0, 84, 0, 85, 0, 0, 86,
    0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 90, 0, 91, 0, 92, 0, 93, 0, 0, 0,
    94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 97, 0, 0, 98, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 103, 0, 104,
    0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 109, 0, 110, 0, 0, 111,
    0, 0, 112, 0, 113, 0, 114, 115, 0, 116, 0, 0, 0, 0, 117, 118, 0, 119, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 123, 0,
    0, 124, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0, 130, 0, 131, 0, 132, 0, 133, 0, 0, 134, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0,
    0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 145, 0, 146, 0, 147, 0, 0, 0, 148, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154,
    0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 157, 0, 158, 0, 159, 0, 0, 160, 0, 161, 0, 0, 162, 0, 163, 0, 0, 0,
    0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 172, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0,
    0, 177, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 185, 0, 0,
    186, 0, 187, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197,
    198, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0,
    204, 0, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 208, 209, 0, 210, 211, 0, 0, 212, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0,
    0, 0, 0, 215, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 224, 0,
    225, 0, 226, 0, 227, 228, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 232, 0, 233, 0, 234, 0, 0, 235, 0, 0, 0, 236, 0, 0,
    0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0,
    0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251,
    0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0,
    0, 258, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 262, 0, 0, 263, 0, 0, 264, 0, 0,
    0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 269, 0, 270, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 0, 0, 279, 0, 280, 0, 281, 0, 0, 0, 0, 0,
    282, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 295, 0, 296, 0, 0, 0, 0,
    297, 0, 0, 0, 0, 298, 0, 299, 0, 300, 0, 301, 0, 302, 0, 0, 303, 0, 0, 304, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0,
    0, 308, 0, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 316, 0, 317, 0, 318, 0, 319, 0, 0,
    320, 0, 0, 0, 321, 0, 0, 0, 322, 0, 323, 0, 324, 0, 325, 0, 0, 326, 0, 327, 0, 0, 328, 0, 329, 0, 0, 330, 0, 331, 0, 332,
    0, 333, 0, 334, 335, 0, 336, 0, 0, 337, 0, 0, 338, 0, 339, 0, 340, 0, 341, 0, 342, 0, 343, 0, 0, 344, 0, 0, 0, 345, 0, 0,
    0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 350, 0, 0, 0, 351, 0, 0, 352, 0, 353,
    0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 358, 0, 0, 359, 0, 360, 0, 361, 0, 362, 0, 363, 364, 0, 365,
    0, 0, 0, 366, 0, 0, 367, 0, 368, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 376, 0, 377, 0, 0, 0, 0, 378,
    0, 0, 379, 0, 380, 0, 0, 0, 381, 0, 382, 0, 383, 0, 384, 0, 385, 0, 386, 0, 387, 0, 388, 0, 0, 389, 0, 390, 0, 0, 391, 392,
    0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0,
    0, 401, 0, 402, 0, 0, 0, 0, 403, 0, 0, 404, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 408, 0, 0, 0, 0, 409, 0, 410,
    0, 0, 0, 411, 0, 412, 0, 0, 0, 413, 0, 414, 0, 0, 0, 415, 416, 417, 0, 0, 0, 418, 0, 419, 0, 0, 0, 420, 0, 0, 421, 0,
    0, 0, 422, 0, 0, 0, 423, 0, 424, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 427, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 432, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0,
    441, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 0, 446, 0,
    0, 447, 0, 448, 0, 449, 0, 450, 0, 451, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0,
    0, 455, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 460, 0, 0,
    0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 467, 0,
    468, 0, 0, 469, 470, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0,
    0, 0, 0, 0, 0, 476, 0, 477, 0, 478, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 481, 0,
    0, 482, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 487, 0, 488, 0, 0, 0, 0,
    0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0,
    0, 0, 0, 0, 0, 0, 493, 0, 0, 494, 0, 495, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 498, 499, 0, 0, 0, 0, 0, 0, 500, 0,
    0, 501, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 504, 0, 505, 0, 506, 0, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 509, 0, 0, 0,
    510, 0, 511, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 518,
    0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 523, 0, 524, 0, 525, 0, 0, 0, 526, 0, 527, 0, 0, 0, 528, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 531, 0, 0, 532,
    0, 0, 0, 533, 0, 534, 0, 0, 0, 535, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0,
    539, 0, 540, 0, 541, 0, 0, 0, 542, 0, 543, 0, 544, 0, 0, 0, 545, 0, 546, 0, 547, 0, 548, 549, 0, 550, 0, 0, 0, 0, 551, 552,
    0, 553, 0, 0, 0, 0, 554, 0, 0, 555, 0, 0, 0, 0, 556, 0, 557, 0, 0, 0, 558, 0, 559, 0, 560, 0, 0, 0, 561, 0, 562, 0,
    563, 0, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 0, 0, 0, 568, 0, 569, 0, 0, 0, 0, 570, 0,
    571, 0, 0, 572, 0, 573, 0, 0, 0, 0, 574, 0, 575, 0, 0, 0, 0, 0, 576, 0, 577, 0, 0, 0, 0, 578, 0, 579, 0, 0, 0, 580,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0,
    585, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 589, 0, 590, 0,
    0, 0, 591, 0, 592, 0, 0, 0, 593, 0, 594, 0, 0, 0, 595, 0, 0, 0, 596, 0, 597, 0, 0, 0, 0, 598, 0, 599, 0, 600, 0, 0,
    0, 0, 601, 0, 602, 0, 0, 0, 603, 0, 604, 0, 0, 0, 0, 605, 0, 606, 0, 0, 0, 607, 0, 608, 0, 0, 609, 0, 610, 0, 0, 0,
    611, 0, 612, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 614, 0, 0, 615, 0, 0, 616, 0, 0, 617, 0, 0, 0, 0, 0, 0, 618, 0, 0,
    619, 0, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 623, 0, 624, 0, 0, 0, 625, 0, 0, 0, 626, 0, 627, 0, 0,
    0, 628, 0, 629, 0, 0, 630, 0, 631, 0, 632, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 636, 0, 0, 0, 637, 0, 638,
    0, 639, 0, 0, 0, 640, 0, 641, 0, 0, 0, 0, 642, 0, 0, 0, 643, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 0, 0, 646, 0, 647,
    0, 0, 0, 648, 0, 0, 0, 649, 0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 0, 652, 0, 0, 653, 0, 0, 654, 0, 0, 0, 655, 0,
    0, 0, 656, 0, 657, 0, 0, 0, 0, 658, 0, 0, 659, 0, 0, 660, 0, 0, 0, 661, 0, 662, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0,
    664, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 667, 0, 0, 668, 0, 0, 0, 669, 0, 670, 0, 0, 0, 0, 0, 0, 671, 0, 0, 672,
    0, 673, 0, 0, 0, 674, 0, 675, 0, 0, 676, 0, 677, 0, 678, 0, 0, 0, 679, 0, 680, 0, 0, 681, 0, 682, 0, 0, 683, 0, 0, 0,
    684, 0, 0, 685, 0, 686, 0, 0, 0, 687, 0, 0, 688, 0, 689, 0, 0, 0, 0, 0, 690, 0, 691, 0, 692, 0, 0, 0, 0, 0, 0, 693,
    0, 0, 0, 694, 0, 0, 0, 695, 0, 0, 0, 696, 0, 697, 0, 0, 0, 0, 0, 0, 0, 698, 0, 699, 0, 0, 0, 700, 0, 0, 0, 701,
    702, 0, 0, 0, 703, 0, 0, 0, 704, 0, 0, 705, 0, 0, 0, 706, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 711, 0, 712, 0, 713, 0, 0, 0, 0, 0, 714, 0, 0, 0, 715, 0, 0, 716, 0, 0, 0, 717,
    0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 721, 0, 0,
    722, 0, 0, 0, 723, 0, 0, 724, 0, 725, 0, 0, 0, 726, 0, 0, 0, 727, 0, 728, 0, 729, 0, 0, 0, 0, 0, 0, 730, 0, 0, 731,
    732, 0, 0, 0, 0, 0, 0, 733, 0, 0, 734, 0, 0, 735, 0, 0, 0, 0, 0, 736, 0, 737, 0, 738, 0, 739, 0, 0, 740, 0, 0, 741,
    0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 747, 0, 0, 0, 0, 0, 748, 0, 0, 749, 0, 0, 0, 0, 750, 0, 751, 0, 752, 0, 0,
    753, 0, 0, 754, 0, 0, 755, 756, 0, 757, 0, 0, 758, 0, 0, 759, 0, 0, 760, 761, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763,
    0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 765, 0, 0, 766, 0, 0, 0, 0, 0, 0, 767, 0, 0, 768, 0, 0, 769, 0, 770, 0, 0,
    771, 0, 0, 772, 0, 0, 0, 0, 0, 773, 0, 774, 0, 0, 0, 0, 0, 775, 0, 776, 0, 777, 0, 0, 0, 778, 0, 0, 0, 779, 0, 0,
    0, 780, 0, 0, 781, 0, 0, 0, 782, 0, 783, 0, 0, 784, 0, 0, 0, 0, 785, 0, 0, 0, 0, 786, 0, 0, 0, 0, 0, 787, 0, 0,
    0, 0, 0, 788, 0, 789, 0, 0, 790, 0, 0, 0, 0, 0, 0, 791, 0, 792, 0, 0, 0, 0, 793, 0, 794, 0, 0, 0, 0, 795, 796, 0,
    0, 797, 0, 0, 798, 0, 799, 0, 800, 0, 0, 0, 0, 0, 801, 0, 802, 0, 0, 803, 0, 0, 804, 0, 0, 805, 0, 0, 0, 0, 806, 0,
    0, 0, 0, 0, 807, 0, 808, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 809, 0, 810, 0, 0, 0, 811, 0, 812, 0, 0,
    813, 0, 0, 0, 0, 814, 0, 0, 0, 0, 815, 0, 0, 816, 0, 0, 0, 817, 0, 0, 0, 0, 818, 0, 0, 819, 0, 820, 0, 0, 0, 0,
    0, 821, 0, 0, 822, 0, 823, 0, 824, 0, 0, 0, 825, 0, 826, 0, 0, 0, 827, 0, 0, 828, 0, 0, 829, 0, 830, 0, 0, 831, 832, 0,
    833, 0, 834, 0, 0, 835, 0, 0, 0, 0, 0, 0, 836, 0, 0, 0, 837, 0, 0, 838, 0, 0, 0, 839, 0, 840, 0, 0, 841, 0, 0, 0,
    842, 0, 0, 0, 0, 0, 843, 0, 844, 0, 0, 845, 0, 0, 0, 0, 0, 846, 0, 847, 0, 0, 0, 848, 0, 849, 0, 850, 0, 0, 851, 0,
    0, 0, 852, 0, 0, 0, 853, 0, 0, 0, 854, 0, 0, 0, 0, 0, 855, 0, 0, 856, 0, 857, 0, 0, 858, 0, 859, 0, 860, 0, 861, 0,
    862, 0, 0, 0, 0, 0, 863, 0, 864, 0, 0, 0, 0, 0, 0, 0, 865, 0, 0, 866, 0, 867, 0, 0, 868, 0, 869, 0, 870, 0, 0, 871,
    0, 872, 0, 0, 0, 0, 0, 873, 0, 0, 874, 0, 875, 0, 0, 876, 0, 877, 0, 0, 878, 0, 879, 0, 0, 880, 0, 0, 881, 0, 882, 0,
    0, 883, 0, 884, 0, 0, 885, 0, 0, 0, 886, 0, 887, 0, 0, 888, 0, 0, 889, 0, 0, 0, 890, 0, 891, 0, 0, 0, 0, 0, 892, 0,
    0, 893, 0, 894, 0, 895, 0, 0, 896, 0, 0, 0, 897, 0, 0, 898, 0, 0, 899, 0, 900, 0, 0, 0, 901, 0, 0, 0, 0, 0, 902, 0,
    0, 903, 0, 904, 0, 0, 905, 0, 0, 0, 906, 0, 0, 907, 0, 0, 0, 0, 908, 0, 0, 0, 909, 0, 910, 0, 0, 0, 911, 0, 912, 0,
    0, 913, 0, 0, 914, 0, 915, 0, 0, 916, 0, 917, 0, 0, 918, 0, 0, 0, 0, 919, 0, 0, 920, 0, 0, 0, 0, 921, 0, 0, 922, 0,
    0, 923, 0, 0, 0, 0, 924, 0, 925, 0, 0, 0, 0, 0, 926, 0, 0, 927, 0, 0, 0, 0, 928, 0, 0, 929, 0, 930, 0, 0, 931, 0,
    0, 0, 0, 932, 0, 0, 933, 0, 934, 0, 0, 935, 0, 936, 0, 0, 937, 0, 938, 0, 0, 939, 0, 940, 0, 0, 941, 0, 942, 0, 0, 943,
    0, 944, 0, 945, 0, 0, 946, 0, 0, 0, 0, 947, 0, 0, 0, 948, 0, 949, 0, 0, 0, 0, 0, 0, 950, 0, 951, 0, 0, 952, 0, 953,
    0, 954, 0, 0, 0, 955, 0, 0, 0, 956, 0, 0, 0, 0, 0, 0, 0, 0, 0, 957, 0, 0, 958, 0, 0, 0, 959, 0, 0, 960, 0, 0,
    961, 0, 0, 962, 0, 0, 963, 0, 964, 0, 0, 965, 0, 0, 966, 0, 0, 967, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 968, 0, 0, 0, 0, 969, 0, 0, 970, 0, 0, 971, 0, 0, 972, 0, 0, 973, 0, 0, 0, 0, 0, 974, 0, 0, 0, 975, 0, 0,
    976, 0, 0, 977, 0, 978, 0, 0, 979, 0, 0, 980, 0, 0, 981, 0, 982, 0, 0, 0, 983, 0, 0, 0, 984, 0, 0, 0, 0, 0, 985, 0,
    0, 0, 0, 0, 986, 0, 0, 987, 0, 988, 0, 989, 0, 0, 0, 990, 0, 991, 0, 0, 0, 992, 0, 0, 0, 0, 0, 0, 993, 0, 994, 0,
    0, 0, 0, 0, 995, 0, 996, 0, 0, 0, 0, 997, 0, 0, 998, 0, 999, 0, 1000, 0, 0, 0, 0, 1001, 0, 1002, 0, 1003, 0, 1004, 0, 0,
    0, 1005, 0, 1006, 0, 0, 1007, 0, 0, 0, 1008, 0, 0, 1009, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1010, 0, 0, 0, 0,
    0, 1011, 0, 0, 0, 0, 1012, 0, 0, 1013, 0, 0, 0, 1014, 0, 0, 1015, 0, 0, 0, 1016, 0, 0, 1017, 0, 1018, 0, 0, 0, 1019, 0, 0,
    0, 1020, 0, 0, 1021, 1022, 0, 0, 0, 0, 0, 0, 1023, 0, 1024, 0, 0, 0, 1025, 0, 1026, 0, 0, 0, 1027, 0, 1028, 0, 0, 1029, 0, 0,
    0, 1030, 0, 0, 1031, 0, 1032, 0, 0, 1033, 0, 1034, 0, 1035, 0, 0, 0, 0, 1036, 0, 1037, 0, 1038, 0, 1039, 0, 1040, 0, 0, 1041, 0, 1042,
    0, 1043, 0, 0, 0, 1044, 0, 0, 0, 0, 0, 0, 1045, 0, 1046, 0, 0, 1047, 0, 0, 0, 0, 1048, 0, 1049, 0, 1050, 0, 1051, 0, 1052, 0,
    1053, 0, 0, 1054, 0, 0, 0, 0, 1055, 0, 1056, 0, 0, 0, 1057, 0, 0, 1058, 0, 1059, 0, 1060, 1061, 0, 0, 0, 1062, 0, 0, 0, 1063,
};
void recomp_unit_0036_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08894004u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0036[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08894004;
    case 2u: goto L_08894010;
    case 3u: goto L_08894020;
    case 4u: goto L_0889402C;
    case 5u: goto L_0889403C;
    case 6u: goto L_08894050;
    case 7u: goto L_08894060;
    case 8u: goto L_08894080;
    case 9u: goto L_08894094;
    case 10u: goto L_088940C4;
    case 11u: goto L_088940D0;
    case 12u: goto L_08894108;
    case 13u: goto L_0889411C;
    case 14u: goto L_08894134;
    case 15u: goto L_08894140;
    case 16u: goto L_08894150;
    case 17u: goto L_0889415C;
    case 18u: goto L_08894164;
    case 19u: goto L_08894190;
    case 20u: goto L_08894198;
    case 21u: goto L_088941A4;
    case 22u: goto L_088941D0;
    case 23u: goto L_088941D8;
    case 24u: goto L_088941F0;
    case 25u: goto L_08894250;
    case 26u: goto L_08894264;
    case 27u: goto L_08894280;
    case 28u: goto L_08894290;
    case 29u: goto L_08894298;
    case 30u: goto L_088942CC;
    case 31u: goto L_088942D4;
    case 32u: goto L_088942DC;
    case 33u: goto L_088942E4;
    case 34u: goto L_08894330;
    case 35u: goto L_0889434C;
    case 36u: goto L_08894368;
    case 37u: goto L_08894370;
    case 38u: goto L_08894380;
    case 39u: goto L_08894388;
    case 40u: goto L_08894390;
    case 41u: goto L_08894398;
    case 42u: goto L_088943A0;
    case 43u: goto L_088943B0;
    case 44u: goto L_088943B8;
    case 45u: goto L_088943C4;
    case 46u: goto L_088943CC;
    case 47u: goto L_088943E4;
    case 48u: goto L_088943F0;
    case 49u: goto L_08894408;
    case 50u: goto L_08894418;
    case 51u: goto L_08894420;
    case 52u: goto L_0889442C;
    case 53u: goto L_08894438;
    case 54u: goto L_08894448;
    case 55u: goto L_08894454;
    case 56u: goto L_08894460;
    case 57u: goto L_0889446C;
    case 58u: goto L_08894470;
    case 59u: goto L_08894478;
    case 60u: goto L_0889447C;
    case 61u: goto L_08894488;
    case 62u: goto L_08894498;
    case 63u: goto L_088944A4;
    case 64u: goto L_088944AC;
    case 65u: goto L_088944B8;
    case 66u: goto L_088944C4;
    case 67u: goto L_088944DC;
    case 68u: goto L_088944E4;
    case 69u: goto L_088944F4;
    case 70u: goto L_088944FC;
    case 71u: goto L_0889450C;
    case 72u: goto L_08894514;
    case 73u: goto L_08894520;
    case 74u: goto L_0889452C;
    case 75u: goto L_08894544;
    case 76u: goto L_08894568;
    case 77u: goto L_08894570;
    case 78u: goto L_08894584;
    case 79u: goto L_08894598;
    case 80u: goto L_088945A4;
    case 81u: goto L_088945BC;
    case 82u: goto L_088945E0;
    case 83u: goto L_088945E4;
    case 84u: goto L_088945EC;
    case 85u: goto L_088945F4;
    case 86u: goto L_08894600;
    case 87u: goto L_08894624;
    case 88u: goto L_08894644;
    case 89u: goto L_0889464C;
    case 90u: goto L_0889465C;
    case 91u: goto L_08894664;
    case 92u: goto L_0889466C;
    case 93u: goto L_08894674;
    case 94u: goto L_08894684;
    case 95u: goto L_08894694;
    case 96u: goto L_088946A4;
    case 97u: goto L_088946AC;
    case 98u: goto L_088946B8;
    case 99u: goto L_088946C0;
    case 100u: goto L_088946C8;
    case 101u: goto L_088946E4;
    case 102u: goto L_088946EC;
    case 103u: goto L_088946F8;
    case 104u: goto L_08894700;
    case 105u: goto L_08894710;
    case 106u: goto L_0889471C;
    case 107u: goto L_08894754;
    case 108u: goto L_0889475C;
    case 109u: goto L_0889476C;
    case 110u: goto L_08894774;
    case 111u: goto L_08894780;
    case 112u: goto L_0889478C;
    case 113u: goto L_08894794;
    case 114u: goto L_0889479C;
    case 115u: goto L_088947A0;
    case 116u: goto L_088947A8;
    case 117u: goto L_088947BC;
    case 118u: goto L_088947C0;
    case 119u: goto L_088947C8;
    case 120u: goto L_088947DC;
    case 121u: goto L_088947E4;
    case 122u: goto L_088947F4;
    case 123u: goto L_088947FC;
    case 124u: goto L_08894808;
    case 125u: goto L_0889481C;
    case 126u: goto L_08894824;
    case 127u: goto L_08894834;
    case 128u: goto L_0889483C;
    case 129u: goto L_08894844;
    case 130u: goto L_08894854;
    case 131u: goto L_0889485C;
    case 132u: goto L_08894864;
    case 133u: goto L_0889486C;
    case 134u: goto L_08894878;
    case 135u: goto L_088948BC;
    case 136u: goto L_08894900;
    case 137u: goto L_08894944;
    case 138u: goto L_08894988;
    case 139u: goto L_088949A0;
    case 140u: goto L_088949B0;
    case 141u: goto L_088949F0;
    case 142u: goto L_08894A0C;
    case 143u: goto L_08894A1C;
    case 144u: goto L_08894A4C;
    case 145u: goto L_08894A88;
    case 146u: goto L_08894A90;
    case 147u: goto L_08894A98;
    case 148u: goto L_08894AA8;
    case 149u: goto L_08894AB8;
    case 150u: goto L_08894AC0;
    case 151u: goto L_08894AD8;
    case 152u: goto L_08894AE0;
    case 153u: goto L_08894AF0;
    case 154u: goto L_08894B00;
    case 155u: goto L_08894B24;
    case 156u: goto L_08894B34;
    case 157u: goto L_08894B3C;
    case 158u: goto L_08894B44;
    case 159u: goto L_08894B4C;
    case 160u: goto L_08894B58;
    case 161u: goto L_08894B60;
    case 162u: goto L_08894B6C;
    case 163u: goto L_08894B74;
    case 164u: goto L_08894B8C;
    case 165u: goto L_08894B98;
    case 166u: goto L_08894BA4;
    case 167u: goto L_08894BB4;
    case 168u: goto L_08894BC4;
    case 169u: goto L_08894BD4;
    case 170u: goto L_08894C20;
    case 171u: goto L_08894C34;
    case 172u: goto L_08894C3C;
    case 173u: goto L_08894C48;
    case 174u: goto L_08894C58;
    case 175u: goto L_08894C68;
    case 176u: goto L_08894C78;
    case 177u: goto L_08894C88;
    case 178u: goto L_08894C90;
    case 179u: goto L_08894C9C;
    case 180u: goto L_08894CB4;
    case 181u: goto L_08894CC4;
    case 182u: goto L_08894CD4;
    case 183u: goto L_08894CE4;
    case 184u: goto L_08894CEC;
    case 185u: goto L_08894CF8;
    case 186u: goto L_08894D04;
    case 187u: goto L_08894D0C;
    case 188u: goto L_08894D18;
    case 189u: goto L_08894D28;
    case 190u: goto L_08894D38;
    case 191u: goto L_08894D50;
    case 192u: goto L_08894D58;
    case 193u: goto L_08894D60;
    case 194u: goto L_08894D68;
    case 195u: goto L_08894D70;
    case 196u: goto L_08894D78;
    case 197u: goto L_08894D80;
    case 198u: goto L_08894D84;
    case 199u: goto L_08894D8C;
    case 200u: goto L_08894D98;
    case 201u: goto L_08894DB0;
    case 202u: goto L_08894DD8;
    case 203u: goto L_08894DFC;
    case 204u: goto L_08894E04;
    case 205u: goto L_08894E14;
    case 206u: goto L_08894E20;
    case 207u: goto L_08894E2C;
    case 208u: goto L_08894E38;
    case 209u: goto L_08894E3C;
    case 210u: goto L_08894E44;
    case 211u: goto L_08894E48;
    case 212u: goto L_08894E54;
    case 213u: goto L_08894E64;
    case 214u: goto L_08894E6C;
    case 215u: goto L_08894E90;
    case 216u: goto L_08894E98;
    case 217u: goto L_08894EA4;
    case 218u: goto L_08894EB0;
    case 219u: goto L_08894EBC;
    case 220u: goto L_08894EC4;
    case 221u: goto L_08894ED0;
    case 222u: goto L_08894EDC;
    case 223u: goto L_08894EF4;
    case 224u: goto L_08894EFC;
    case 225u: goto L_08894F04;
    case 226u: goto L_08894F0C;
    case 227u: goto L_08894F14;
    case 228u: goto L_08894F18;
    case 229u: goto L_08894F20;
    case 230u: goto L_08894F30;
    case 231u: goto L_08894F44;
    case 232u: goto L_08894F4C;
    case 233u: goto L_08894F54;
    case 234u: goto L_08894F5C;
    case 235u: goto L_08894F68;
    case 236u: goto L_08894F78;
    case 237u: goto L_08894F88;
    case 238u: goto L_08894FA0;
    case 239u: goto L_08894FAC;
    case 240u: goto L_08894FC4;
    case 241u: goto L_08894FD4;
    case 242u: goto L_08894FE4;
    case 243u: goto L_08894FF8;
    case 244u: goto L_08895008;
    case 245u: goto L_0889501C;
    case 246u: goto L_0889502C;
    case 247u: goto L_0889503C;
    case 248u: goto L_0889504C;
    case 249u: goto L_08895060;
    case 250u: goto L_08895070;
    case 251u: goto L_08895080;
    case 252u: goto L_08895094;
    case 253u: goto L_088950A0;
    case 254u: goto L_088950B8;
    case 255u: goto L_088950D0;
    case 256u: goto L_088950E4;
    case 257u: goto L_088950F0;
    case 258u: goto L_08895108;
    case 259u: goto L_08895110;
    case 260u: goto L_08895128;
    case 261u: goto L_0889515C;
    case 262u: goto L_08895160;
    case 263u: goto L_0889516C;
    case 264u: goto L_08895178;
    case 265u: goto L_08895198;
    case 266u: goto L_088951A0;
    case 267u: goto L_088951B8;
    case 268u: goto L_088951C4;
    case 269u: goto L_088951CC;
    case 270u: goto L_088951D4;
    case 271u: goto L_088951DC;
    case 272u: goto L_088951EC;
    case 273u: goto L_0889521C;
    case 274u: goto L_0889522C;
    case 275u: goto L_08895234;
    case 276u: goto L_0889523C;
    case 277u: goto L_08895244;
    case 278u: goto L_0889524C;
    case 279u: goto L_0889525C;
    case 280u: goto L_08895264;
    case 281u: goto L_0889526C;
    case 282u: goto L_08895284;
    case 283u: goto L_08895298;
    case 284u: goto L_088952A8;
    case 285u: goto L_088952C0;
    case 286u: goto L_088952CC;
    case 287u: goto L_088952DC;
    case 288u: goto L_088952EC;
    case 289u: goto L_088952FC;
    case 290u: goto L_08895314;
    case 291u: goto L_08895324;
    case 292u: goto L_0889533C;
    case 293u: goto L_0889534C;
    case 294u: goto L_08895360;
    case 295u: goto L_08895368;
    case 296u: goto L_08895370;
    case 297u: goto L_08895384;
    case 298u: goto L_08895398;
    case 299u: goto L_088953A0;
    case 300u: goto L_088953A8;
    case 301u: goto L_088953B0;
    case 302u: goto L_088953B8;
    case 303u: goto L_088953C4;
    case 304u: goto L_088953D0;
    case 305u: goto L_088953D8;
    case 306u: goto L_088953E8;
    case 307u: goto L_088953F8;
    case 308u: goto L_08895408;
    case 309u: goto L_08895418;
    case 310u: goto L_08895424;
    case 311u: goto L_08895430;
    case 312u: goto L_0889544C;
    case 313u: goto L_08895484;
    case 314u: goto L_088954C8;
    case 315u: goto L_088954D8;
    case 316u: goto L_088954E0;
    case 317u: goto L_088954E8;
    case 318u: goto L_088954F0;
    case 319u: goto L_088954F8;
    case 320u: goto L_08895504;
    case 321u: goto L_08895514;
    case 322u: goto L_08895524;
    case 323u: goto L_0889552C;
    case 324u: goto L_08895534;
    case 325u: goto L_0889553C;
    case 326u: goto L_08895548;
    case 327u: goto L_08895550;
    case 328u: goto L_0889555C;
    case 329u: goto L_08895564;
    case 330u: goto L_08895570;
    case 331u: goto L_08895578;
    case 332u: goto L_08895580;
    case 333u: goto L_08895588;
    case 334u: goto L_08895590;
    case 335u: goto L_08895594;
    case 336u: goto L_0889559C;
    case 337u: goto L_088955A8;
    case 338u: goto L_088955B4;
    case 339u: goto L_088955BC;
    case 340u: goto L_088955C4;
    case 341u: goto L_088955CC;
    case 342u: goto L_088955D4;
    case 343u: goto L_088955DC;
    case 344u: goto L_088955E8;
    case 345u: goto L_088955F8;
    case 346u: goto L_08895608;
    case 347u: goto L_08895610;
    case 348u: goto L_08895648;
    case 349u: goto L_08895650;
    case 350u: goto L_0889565C;
    case 351u: goto L_0889566C;
    case 352u: goto L_08895678;
    case 353u: goto L_08895680;
    case 354u: goto L_08895690;
    case 355u: goto L_08895698;
    case 356u: goto L_088956B0;
    case 357u: goto L_088956B8;
    case 358u: goto L_088956C8;
    case 359u: goto L_088956D4;
    case 360u: goto L_088956DC;
    case 361u: goto L_088956E4;
    case 362u: goto L_088956EC;
    case 363u: goto L_088956F4;
    case 364u: goto L_088956F8;
    case 365u: goto L_08895700;
    case 366u: goto L_08895710;
    case 367u: goto L_0889571C;
    case 368u: goto L_08895724;
    case 369u: goto L_08895734;
    case 370u: goto L_08895744;
    case 371u: goto L_08895754;
    case 372u: goto L_08895764;
    case 373u: goto L_08895778;
    case 374u: goto L_088957C4;
    case 375u: goto L_088957D8;
    case 376u: goto L_088957E4;
    case 377u: goto L_088957EC;
    case 378u: goto L_08895800;
    case 379u: goto L_0889580C;
    case 380u: goto L_08895814;
    case 381u: goto L_08895824;
    case 382u: goto L_0889582C;
    case 383u: goto L_08895834;
    case 384u: goto L_0889583C;
    case 385u: goto L_08895844;
    case 386u: goto L_0889584C;
    case 387u: goto L_08895854;
    case 388u: goto L_0889585C;
    case 389u: goto L_08895868;
    case 390u: goto L_08895870;
    case 391u: goto L_0889587C;
    case 392u: goto L_08895880;
    case 393u: goto L_08895888;
    case 394u: goto L_088958A0;
    case 395u: goto L_088958AC;
    case 396u: goto L_088958B8;
    case 397u: goto L_088958C8;
    case 398u: goto L_088958D8;
    case 399u: goto L_088958E8;
    case 400u: goto L_088958FC;
    case 401u: goto L_08895908;
    case 402u: goto L_08895910;
    case 403u: goto L_08895924;
    case 404u: goto L_08895930;
    case 405u: goto L_08895938;
    case 406u: goto L_0889594C;
    case 407u: goto L_0889595C;
    case 408u: goto L_08895964;
    case 409u: goto L_08895978;
    case 410u: goto L_08895980;
    case 411u: goto L_08895990;
    case 412u: goto L_08895998;
    case 413u: goto L_088959A8;
    case 414u: goto L_088959B0;
    case 415u: goto L_088959C0;
    case 416u: goto L_088959C4;
    case 417u: goto L_088959C8;
    case 418u: goto L_088959D8;
    case 419u: goto L_088959E0;
    case 420u: goto L_088959F0;
    case 421u: goto L_088959FC;
    case 422u: goto L_08895A0C;
    case 423u: goto L_08895A1C;
    case 424u: goto L_08895A24;
    case 425u: goto L_08895A34;
    case 426u: goto L_08895A44;
    case 427u: goto L_08895A54;
    case 428u: goto L_08895A5C;
    case 429u: goto L_08895A6C;
    case 430u: goto L_08895A98;
    case 431u: goto L_08895AA8;
    case 432u: goto L_08895AB0;
    case 433u: goto L_08895ABC;
    case 434u: goto L_08895AD0;
    case 435u: goto L_08895AE0;
    case 436u: goto L_08895AF0;
    case 437u: goto L_08895B20;
    case 438u: goto L_08895B38;
    case 439u: goto L_08895B48;
    case 440u: goto L_08895B78;
    case 441u: goto L_08895B84;
    case 442u: goto L_08895B8C;
    case 443u: goto L_08895BA4;
    case 444u: goto L_08895BE0;
    case 445u: goto L_08895BE8;
    case 446u: goto L_08895BFC;
    case 447u: goto L_08895C08;
    case 448u: goto L_08895C10;
    case 449u: goto L_08895C18;
    case 450u: goto L_08895C20;
    case 451u: goto L_08895C28;
    case 452u: goto L_08895C30;
    case 453u: goto L_08895C64;
    case 454u: goto L_08895C78;
    case 455u: goto L_08895C88;
    case 456u: goto L_08895C90;
    case 457u: goto L_08895CC8;
    case 458u: goto L_08895CE4;
    case 459u: goto L_08895CEC;
    case 460u: goto L_08895CF8;
    case 461u: goto L_08895D0C;
    case 462u: goto L_08895D24;
    case 463u: goto L_08895D2C;
    case 464u: goto L_08895D38;
    case 465u: goto L_08895D50;
    case 466u: goto L_08895D70;
    case 467u: goto L_08895D7C;
    case 468u: goto L_08895D84;
    case 469u: goto L_08895D90;
    case 470u: goto L_08895D94;
    case 471u: goto L_08895D9C;
    case 472u: goto L_08895DB8;
    case 473u: goto L_08895DC8;
    case 474u: goto L_08895DD0;
    case 475u: goto L_08895DFC;
    case 476u: goto L_08895E18;
    case 477u: goto L_08895E20;
    case 478u: goto L_08895E28;
    case 479u: goto L_08895E30;
    case 480u: goto L_08895E70;
    case 481u: goto L_08895E7C;
    case 482u: goto L_08895E88;
    case 483u: goto L_08895E90;
    case 484u: goto L_08895EBC;
    case 485u: goto L_08895ED0;
    case 486u: goto L_08895EE0;
    case 487u: goto L_08895EE8;
    case 488u: goto L_08895EF0;
    case 489u: goto L_08895F08;
    case 490u: goto L_08895F14;
    case 491u: goto L_08895F60;
    case 492u: goto L_08895F78;
    case 493u: goto L_08895F9C;
    case 494u: goto L_08895FA8;
    case 495u: goto L_08895FB0;
    case 496u: goto L_08895FC0;
    case 497u: goto L_08895FD0;
    case 498u: goto L_08895FDC;
    case 499u: goto L_08895FE0;
    case 500u: goto L_08895FFC;
    case 501u: goto L_08896008;
    case 502u: goto L_08896014;
    case 503u: goto L_0889602C;
    case 504u: goto L_08896034;
    case 505u: goto L_0889603C;
    case 506u: goto L_08896044;
    case 507u: goto L_0889605C;
    case 508u: goto L_0889606C;
    case 509u: goto L_08896074;
    case 510u: goto L_08896084;
    case 511u: goto L_0889608C;
    case 512u: goto L_088960A0;
    case 513u: goto L_088960AC;
    case 514u: goto L_088960C4;
    case 515u: goto L_088960D4;
    case 516u: goto L_088960DC;
    case 517u: goto L_088960F4;
    case 518u: goto L_08896100;
    case 519u: goto L_08896110;
    case 520u: goto L_08896134;
    case 521u: goto L_08896154;
    case 522u: goto L_08896160;
    case 523u: goto L_0889618C;
    case 524u: goto L_08896194;
    case 525u: goto L_0889619C;
    case 526u: goto L_088961AC;
    case 527u: goto L_088961B4;
    case 528u: goto L_088961C4;
    case 529u: goto L_088961D4;
    case 530u: goto L_088961DC;
    case 531u: goto L_088961F4;
    case 532u: goto L_08896200;
    case 533u: goto L_08896210;
    case 534u: goto L_08896218;
    case 535u: goto L_08896228;
    case 536u: goto L_08896234;
    case 537u: goto L_0889626C;
    case 538u: goto L_08896278;
    case 539u: goto L_08896284;
    case 540u: goto L_0889628C;
    case 541u: goto L_08896294;
    case 542u: goto L_088962A4;
    case 543u: goto L_088962AC;
    case 544u: goto L_088962B4;
    case 545u: goto L_088962C4;
    case 546u: goto L_088962CC;
    case 547u: goto L_088962D4;
    case 548u: goto L_088962DC;
    case 549u: goto L_088962E0;
    case 550u: goto L_088962E8;
    case 551u: goto L_088962FC;
    case 552u: goto L_08896300;
    case 553u: goto L_08896308;
    case 554u: goto L_0889631C;
    case 555u: goto L_08896328;
    case 556u: goto L_0889633C;
    case 557u: goto L_08896344;
    case 558u: goto L_08896354;
    case 559u: goto L_0889635C;
    case 560u: goto L_08896364;
    case 561u: goto L_08896374;
    case 562u: goto L_0889637C;
    case 563u: goto L_08896384;
    case 564u: goto L_08896394;
    case 565u: goto L_088963A8;
    case 566u: goto L_088963C0;
    case 567u: goto L_088963C8;
    case 568u: goto L_088963E0;
    case 569u: goto L_088963E8;
    case 570u: goto L_088963FC;
    case 571u: goto L_08896404;
    case 572u: goto L_08896410;
    case 573u: goto L_08896418;
    case 574u: goto L_0889642C;
    case 575u: goto L_08896434;
    case 576u: goto L_0889644C;
    case 577u: goto L_08896454;
    case 578u: goto L_08896468;
    case 579u: goto L_08896470;
    case 580u: goto L_08896480;
    case 581u: goto L_088964AC;
    case 582u: goto L_088964BC;
    case 583u: goto L_088964D0;
    case 584u: goto L_088964F0;
    case 585u: goto L_08896504;
    case 586u: goto L_08896524;
    case 587u: goto L_08896538;
    case 588u: goto L_0889656C;
    case 589u: goto L_08896574;
    case 590u: goto L_0889657C;
    case 591u: goto L_0889658C;
    case 592u: goto L_08896594;
    case 593u: goto L_088965A4;
    case 594u: goto L_088965AC;
    case 595u: goto L_088965BC;
    case 596u: goto L_088965CC;
    case 597u: goto L_088965D4;
    case 598u: goto L_088965E8;
    case 599u: goto L_088965F0;
    case 600u: goto L_088965F8;
    case 601u: goto L_0889660C;
    case 602u: goto L_08896614;
    case 603u: goto L_08896624;
    case 604u: goto L_0889662C;
    case 605u: goto L_08896640;
    case 606u: goto L_08896648;
    case 607u: goto L_08896658;
    case 608u: goto L_08896660;
    case 609u: goto L_0889666C;
    case 610u: goto L_08896674;
    case 611u: goto L_08896684;
    case 612u: goto L_0889668C;
    case 613u: goto L_0889669C;
    case 614u: goto L_088966B8;
    case 615u: goto L_088966C4;
    case 616u: goto L_088966D0;
    case 617u: goto L_088966DC;
    case 618u: goto L_088966F8;
    case 619u: goto L_08896704;
    case 620u: goto L_0889671C;
    case 621u: goto L_08896728;
    case 622u: goto L_08896738;
    case 623u: goto L_08896748;
    case 624u: goto L_08896750;
    case 625u: goto L_08896760;
    case 626u: goto L_08896770;
    case 627u: goto L_08896778;
    case 628u: goto L_08896788;
    case 629u: goto L_08896790;
    case 630u: goto L_0889679C;
    case 631u: goto L_088967A4;
    case 632u: goto L_088967AC;
    case 633u: goto L_088967BC;
    case 634u: goto L_088967CC;
    case 635u: goto L_088967DC;
    case 636u: goto L_088967E8;
    case 637u: goto L_088967F8;
    case 638u: goto L_08896800;
    case 639u: goto L_08896808;
    case 640u: goto L_08896818;
    case 641u: goto L_08896820;
    case 642u: goto L_08896834;
    case 643u: goto L_08896844;
    case 644u: goto L_08896850;
    case 645u: goto L_08896860;
    case 646u: goto L_08896878;
    case 647u: goto L_08896880;
    case 648u: goto L_08896890;
    case 649u: goto L_088968A0;
    case 650u: goto L_088968B4;
    case 651u: goto L_088968C8;
    case 652u: goto L_088968D4;
    case 653u: goto L_088968E0;
    case 654u: goto L_088968EC;
    case 655u: goto L_088968FC;
    case 656u: goto L_0889690C;
    case 657u: goto L_08896914;
    case 658u: goto L_08896928;
    case 659u: goto L_08896934;
    case 660u: goto L_08896940;
    case 661u: goto L_08896950;
    case 662u: goto L_08896958;
    case 663u: goto L_0889696C;
    case 664u: goto L_08896984;
    case 665u: goto L_08896990;
    case 666u: goto L_088969A8;
    case 667u: goto L_088969B4;
    case 668u: goto L_088969C0;
    case 669u: goto L_088969D0;
    case 670u: goto L_088969D8;
    case 671u: goto L_088969F4;
    case 672u: goto L_08896A00;
    case 673u: goto L_08896A08;
    case 674u: goto L_08896A18;
    case 675u: goto L_08896A20;
    case 676u: goto L_08896A2C;
    case 677u: goto L_08896A34;
    case 678u: goto L_08896A3C;
    case 679u: goto L_08896A4C;
    case 680u: goto L_08896A54;
    case 681u: goto L_08896A60;
    case 682u: goto L_08896A68;
    case 683u: goto L_08896A74;
    case 684u: goto L_08896A84;
    case 685u: goto L_08896A90;
    case 686u: goto L_08896A98;
    case 687u: goto L_08896AA8;
    case 688u: goto L_08896AB4;
    case 689u: goto L_08896ABC;
    case 690u: goto L_08896AD4;
    case 691u: goto L_08896ADC;
    case 692u: goto L_08896AE4;
    case 693u: goto L_08896B00;
    case 694u: goto L_08896B10;
    case 695u: goto L_08896B20;
    case 696u: goto L_08896B30;
    case 697u: goto L_08896B38;
    case 698u: goto L_08896B58;
    case 699u: goto L_08896B60;
    case 700u: goto L_08896B70;
    case 701u: goto L_08896B80;
    case 702u: goto L_08896B84;
    case 703u: goto L_08896B94;
    case 704u: goto L_08896BA4;
    case 705u: goto L_08896BB0;
    case 706u: goto L_08896BC0;
    case 707u: goto L_08896BCC;
    case 708u: goto L_08896C54;
    case 709u: goto L_08896C60;
    case 710u: goto L_08896CA0;
    case 711u: goto L_08896CAC;
    case 712u: goto L_08896CB4;
    case 713u: goto L_08896CBC;
    case 714u: goto L_08896CD4;
    case 715u: goto L_08896CE4;
    case 716u: goto L_08896CF0;
    case 717u: goto L_08896D00;
    case 718u: goto L_08896D0C;
    case 719u: goto L_08896D44;
    case 720u: goto L_08896D5C;
    case 721u: goto L_08896D78;
    case 722u: goto L_08896D84;
    case 723u: goto L_08896D94;
    case 724u: goto L_08896DA0;
    case 725u: goto L_08896DA8;
    case 726u: goto L_08896DB8;
    case 727u: goto L_08896DC8;
    case 728u: goto L_08896DD0;
    case 729u: goto L_08896DD8;
    case 730u: goto L_08896DF4;
    case 731u: goto L_08896E00;
    case 732u: goto L_08896E04;
    case 733u: goto L_08896E20;
    case 734u: goto L_08896E2C;
    case 735u: goto L_08896E38;
    case 736u: goto L_08896E50;
    case 737u: goto L_08896E58;
    case 738u: goto L_08896E60;
    case 739u: goto L_08896E68;
    case 740u: goto L_08896E74;
    case 741u: goto L_08896E80;
    case 742u: goto L_08896E94;
    case 743u: goto L_08896EBC;
    case 744u: goto L_08896EC8;
    case 745u: goto L_08896EF0;
    case 746u: goto L_08896F24;
    case 747u: goto L_08896F30;
    case 748u: goto L_08896F48;
    case 749u: goto L_08896F54;
    case 750u: goto L_08896F68;
    case 751u: goto L_08896F70;
    case 752u: goto L_08896F78;
    case 753u: goto L_08896F84;
    case 754u: goto L_08896F90;
    case 755u: goto L_08896F9C;
    case 756u: goto L_08896FA0;
    case 757u: goto L_08896FA8;
    case 758u: goto L_08896FB4;
    case 759u: goto L_08896FC0;
    case 760u: goto L_08896FCC;
    case 761u: goto L_08896FD0;
    case 762u: goto L_08896FD8;
    case 763u: goto L_08897000;
    case 764u: goto L_08897020;
    case 765u: goto L_08897030;
    case 766u: goto L_0889703C;
    case 767u: goto L_08897058;
    case 768u: goto L_08897064;
    case 769u: goto L_08897070;
    case 770u: goto L_08897078;
    case 771u: goto L_08897084;
    case 772u: goto L_08897090;
    case 773u: goto L_088970A8;
    case 774u: goto L_088970B0;
    case 775u: goto L_088970C8;
    case 776u: goto L_088970D0;
    case 777u: goto L_088970D8;
    case 778u: goto L_088970E8;
    case 779u: goto L_088970F8;
    case 780u: goto L_08897108;
    case 781u: goto L_08897114;
    case 782u: goto L_08897124;
    case 783u: goto L_0889712C;
    case 784u: goto L_08897138;
    case 785u: goto L_0889714C;
    case 786u: goto L_08897160;
    case 787u: goto L_08897178;
    case 788u: goto L_08897190;
    case 789u: goto L_08897198;
    case 790u: goto L_088971A4;
    case 791u: goto L_088971C0;
    case 792u: goto L_088971C8;
    case 793u: goto L_088971DC;
    case 794u: goto L_088971E4;
    case 795u: goto L_088971F8;
    case 796u: goto L_088971FC;
    case 797u: goto L_08897208;
    case 798u: goto L_08897214;
    case 799u: goto L_0889721C;
    case 800u: goto L_08897224;
    case 801u: goto L_0889723C;
    case 802u: goto L_08897244;
    case 803u: goto L_08897250;
    case 804u: goto L_0889725C;
    case 805u: goto L_08897268;
    case 806u: goto L_0889727C;
    case 807u: goto L_08897294;
    case 808u: goto L_0889729C;
    case 809u: goto L_088972D8;
    case 810u: goto L_088972E0;
    case 811u: goto L_088972F0;
    case 812u: goto L_088972F8;
    case 813u: goto L_08897304;
    case 814u: goto L_08897318;
    case 815u: goto L_0889732C;
    case 816u: goto L_08897338;
    case 817u: goto L_08897348;
    case 818u: goto L_0889735C;
    case 819u: goto L_08897368;
    case 820u: goto L_08897370;
    case 821u: goto L_08897388;
    case 822u: goto L_08897394;
    case 823u: goto L_0889739C;
    case 824u: goto L_088973A4;
    case 825u: goto L_088973B4;
    case 826u: goto L_088973BC;
    case 827u: goto L_088973CC;
    case 828u: goto L_088973D8;
    case 829u: goto L_088973E4;
    case 830u: goto L_088973EC;
    case 831u: goto L_088973F8;
    case 832u: goto L_088973FC;
    case 833u: goto L_08897404;
    case 834u: goto L_0889740C;
    case 835u: goto L_08897418;
    case 836u: goto L_08897434;
    case 837u: goto L_08897444;
    case 838u: goto L_08897450;
    case 839u: goto L_08897460;
    case 840u: goto L_08897468;
    case 841u: goto L_08897474;
    case 842u: goto L_08897484;
    case 843u: goto L_0889749C;
    case 844u: goto L_088974A4;
    case 845u: goto L_088974B0;
    case 846u: goto L_088974C8;
    case 847u: goto L_088974D0;
    case 848u: goto L_088974E0;
    case 849u: goto L_088974E8;
    case 850u: goto L_088974F0;
    case 851u: goto L_088974FC;
    case 852u: goto L_0889750C;
    case 853u: goto L_0889751C;
    case 854u: goto L_0889752C;
    case 855u: goto L_08897544;
    case 856u: goto L_08897550;
    case 857u: goto L_08897558;
    case 858u: goto L_08897564;
    case 859u: goto L_0889756C;
    case 860u: goto L_08897574;
    case 861u: goto L_0889757C;
    case 862u: goto L_08897584;
    case 863u: goto L_0889759C;
    case 864u: goto L_088975A4;
    case 865u: goto L_088975C4;
    case 866u: goto L_088975D0;
    case 867u: goto L_088975D8;
    case 868u: goto L_088975E4;
    case 869u: goto L_088975EC;
    case 870u: goto L_088975F4;
    case 871u: goto L_08897600;
    case 872u: goto L_08897608;
    case 873u: goto L_08897620;
    case 874u: goto L_0889762C;
    case 875u: goto L_08897634;
    case 876u: goto L_08897640;
    case 877u: goto L_08897648;
    case 878u: goto L_08897654;
    case 879u: goto L_0889765C;
    case 880u: goto L_08897668;
    case 881u: goto L_08897674;
    case 882u: goto L_0889767C;
    case 883u: goto L_08897688;
    case 884u: goto L_08897690;
    case 885u: goto L_0889769C;
    case 886u: goto L_088976AC;
    case 887u: goto L_088976B4;
    case 888u: goto L_088976C0;
    case 889u: goto L_088976CC;
    case 890u: goto L_088976DC;
    case 891u: goto L_088976E4;
    case 892u: goto L_088976FC;
    case 893u: goto L_08897708;
    case 894u: goto L_08897710;
    case 895u: goto L_08897718;
    case 896u: goto L_08897724;
    case 897u: goto L_08897734;
    case 898u: goto L_08897740;
    case 899u: goto L_0889774C;
    case 900u: goto L_08897754;
    case 901u: goto L_08897764;
    case 902u: goto L_0889777C;
    case 903u: goto L_08897788;
    case 904u: goto L_08897790;
    case 905u: goto L_0889779C;
    case 906u: goto L_088977AC;
    case 907u: goto L_088977B8;
    case 908u: goto L_088977CC;
    case 909u: goto L_088977DC;
    case 910u: goto L_088977E4;
    case 911u: goto L_088977F4;
    case 912u: goto L_088977FC;
    case 913u: goto L_08897808;
    case 914u: goto L_08897814;
    case 915u: goto L_0889781C;
    case 916u: goto L_08897828;
    case 917u: goto L_08897830;
    case 918u: goto L_0889783C;
    case 919u: goto L_08897850;
    case 920u: goto L_0889785C;
    case 921u: goto L_08897870;
    case 922u: goto L_0889787C;
    case 923u: goto L_08897888;
    case 924u: goto L_0889789C;
    case 925u: goto L_088978A4;
    case 926u: goto L_088978BC;
    case 927u: goto L_088978C8;
    case 928u: goto L_088978DC;
    case 929u: goto L_088978E8;
    case 930u: goto L_088978F0;
    case 931u: goto L_088978FC;
    case 932u: goto L_08897910;
    case 933u: goto L_0889791C;
    case 934u: goto L_08897924;
    case 935u: goto L_08897930;
    case 936u: goto L_08897938;
    case 937u: goto L_08897944;
    case 938u: goto L_0889794C;
    case 939u: goto L_08897958;
    case 940u: goto L_08897960;
    case 941u: goto L_0889796C;
    case 942u: goto L_08897974;
    case 943u: goto L_08897980;
    case 944u: goto L_08897988;
    case 945u: goto L_08897990;
    case 946u: goto L_0889799C;
    case 947u: goto L_088979B0;
    case 948u: goto L_088979C0;
    case 949u: goto L_088979C8;
    case 950u: goto L_088979E4;
    case 951u: goto L_088979EC;
    case 952u: goto L_088979F8;
    case 953u: goto L_08897A00;
    case 954u: goto L_08897A08;
    case 955u: goto L_08897A18;
    case 956u: goto L_08897A28;
    case 957u: goto L_08897A50;
    case 958u: goto L_08897A5C;
    case 959u: goto L_08897A6C;
    case 960u: goto L_08897A78;
    case 961u: goto L_08897A84;
    case 962u: goto L_08897A90;
    case 963u: goto L_08897A9C;
    case 964u: goto L_08897AA4;
    case 965u: goto L_08897AB0;
    case 966u: goto L_08897ABC;
    case 967u: goto L_08897AC8;
    case 968u: goto L_08897B0C;
    case 969u: goto L_08897B20;
    case 970u: goto L_08897B2C;
    case 971u: goto L_08897B38;
    case 972u: goto L_08897B44;
    case 973u: goto L_08897B50;
    case 974u: goto L_08897B68;
    case 975u: goto L_08897B78;
    case 976u: goto L_08897B84;
    case 977u: goto L_08897B90;
    case 978u: goto L_08897B98;
    case 979u: goto L_08897BA4;
    case 980u: goto L_08897BB0;
    case 981u: goto L_08897BBC;
    case 982u: goto L_08897BC4;
    case 983u: goto L_08897BD4;
    case 984u: goto L_08897BE4;
    case 985u: goto L_08897BFC;
    case 986u: goto L_08897C14;
    case 987u: goto L_08897C20;
    case 988u: goto L_08897C28;
    case 989u: goto L_08897C30;
    case 990u: goto L_08897C40;
    case 991u: goto L_08897C48;
    case 992u: goto L_08897C58;
    case 993u: goto L_08897C74;
    case 994u: goto L_08897C7C;
    case 995u: goto L_08897C94;
    case 996u: goto L_08897C9C;
    case 997u: goto L_08897CB0;
    case 998u: goto L_08897CBC;
    case 999u: goto L_08897CC4;
    case 1000u: goto L_08897CCC;
    case 1001u: goto L_08897CE0;
    case 1002u: goto L_08897CE8;
    case 1003u: goto L_08897CF0;
    case 1004u: goto L_08897CF8;
    case 1005u: goto L_08897D08;
    case 1006u: goto L_08897D10;
    case 1007u: goto L_08897D1C;
    case 1008u: goto L_08897D2C;
    case 1009u: goto L_08897D38;
    case 1010u: goto L_08897D70;
    case 1011u: goto L_08897D88;
    case 1012u: goto L_08897D9C;
    case 1013u: goto L_08897DA8;
    case 1014u: goto L_08897DB8;
    case 1015u: goto L_08897DC4;
    case 1016u: goto L_08897DD4;
    case 1017u: goto L_08897DE0;
    case 1018u: goto L_08897DE8;
    case 1019u: goto L_08897DF8;
    case 1020u: goto L_08897E08;
    case 1021u: goto L_08897E14;
    case 1022u: goto L_08897E18;
    case 1023u: goto L_08897E34;
    case 1024u: goto L_08897E3C;
    case 1025u: goto L_08897E4C;
    case 1026u: goto L_08897E54;
    case 1027u: goto L_08897E64;
    case 1028u: goto L_08897E6C;
    case 1029u: goto L_08897E78;
    case 1030u: goto L_08897E88;
    case 1031u: goto L_08897E94;
    case 1032u: goto L_08897E9C;
    case 1033u: goto L_08897EA8;
    case 1034u: goto L_08897EB0;
    case 1035u: goto L_08897EB8;
    case 1036u: goto L_08897ECC;
    case 1037u: goto L_08897ED4;
    case 1038u: goto L_08897EDC;
    case 1039u: goto L_08897EE4;
    case 1040u: goto L_08897EEC;
    case 1041u: goto L_08897EF8;
    case 1042u: goto L_08897F00;
    case 1043u: goto L_08897F08;
    case 1044u: goto L_08897F18;
    case 1045u: goto L_08897F34;
    case 1046u: goto L_08897F3C;
    case 1047u: goto L_08897F48;
    case 1048u: goto L_08897F5C;
    case 1049u: goto L_08897F64;
    case 1050u: goto L_08897F6C;
    case 1051u: goto L_08897F74;
    case 1052u: goto L_08897F7C;
    case 1053u: goto L_08897F84;
    case 1054u: goto L_08897F90;
    case 1055u: goto L_08897FA4;
    case 1056u: goto L_08897FAC;
    case 1057u: goto L_08897FBC;
    case 1058u: goto L_08897FC8;
    case 1059u: goto L_08897FD0;
    case 1060u: goto L_08897FD8;
    case 1061u: goto L_08897FDC;
    case 1062u: goto L_08897FEC;
    case 1063u: goto L_08897FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08894004:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 91u, 0x088984CCu>(ctx, &aot_mem); return;
      }
      goto L_08894010;
    }
L_08894010:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08894020;
L_08894020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088940C4;
      }
      goto L_0889402C;
    }
L_0889402C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894080;
      }
      goto L_0889403C;
    }
L_0889403C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08894080;
      }
      goto L_08894050;
    }
L_08894050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894080;
      }
      goto L_08894060;
    }
L_08894060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08894094;
      }
      goto L_08894080;
    }
L_08894080:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08894094;
L_08894094:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08894108;
      }
      goto L_088940C4;
    }
L_088940C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894108;
      }
      goto L_088940D0;
    }
L_088940D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    goto L_08894108;
L_08894108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(54) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_0889411C;
    }
L_0889411C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(2848)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894164;
      }
      goto L_08894140;
    }
L_08894140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08894190;
      }
      goto L_08894150;
    }
L_08894150:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[31] = (0x0889415Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 228u, 0x088D91E4u>(ctx, &aot_mem) && ctx.pc == 0x0889415Cu) goto L_0889415C;
    return;
L_0889415C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08894190;
      }
      goto L_08894164;
    }
L_08894164:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x08894190u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x08894190u) goto L_08894190;
    return;
L_08894190:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08894198;
    }
L_08894198:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088941D8;
      }
      goto L_088941A4;
    }
L_088941A4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x088941D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x088941D0u) goto L_088941D0;
    return;
L_088941D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088943B0;
      }
      goto L_088941D8;
    }
L_088941D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1796)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088943B0;
      }
      goto L_088941F0;
    }
L_088941F0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(15472))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08894250u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 158u, 0x088C0F80u>(ctx, &aot_mem) && ctx.pc == 0x08894250u) goto L_08894250;
    return;
L_08894250:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(208))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894368;
      }
      goto L_08894264;
    }
L_08894264:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08894298;
      }
      goto L_08894280;
    }
L_08894280:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08894298;
      }
      goto L_08894290;
    }
L_08894290:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889434C;
      }
      goto L_08894298;
    }
L_08894298:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088942DC;
      }
      goto L_088942CC;
    }
L_088942CC:
    ctx.gpr[31] = (0x088942D4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 859u, 0x0889FEC0u>(ctx, &aot_mem) && ctx.pc == 0x088942D4u) goto L_088942D4;
    return;
L_088942D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088942E4;
      }
      goto L_088942DC;
    }
L_088942DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889434C;
      }
      goto L_088942E4;
    }
L_088942E4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
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
          goto L_0889434C;
      }
      goto L_08894330;
    }
L_08894330:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_0889434C;
L_0889434C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(208))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894264;
      }
      goto L_08894368;
    }
L_08894368:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894388;
      }
      goto L_08894370;
    }
L_08894370:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x08894380u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08894380u) goto L_08894380;
    return;
L_08894380:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088943A0;
      }
      goto L_08894388;
    }
L_08894388:
    ctx.gpr[31] = (0x08894390u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x08894390u) goto L_08894390;
    return;
L_08894390:
    ctx.gpr[31] = (0x08894398u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x08894398u) goto L_08894398;
    return;
L_08894398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_088943A0;
    }
L_088943A0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1796), ctx.gpr[4]);
    goto L_088943B0;
L_088943B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_088943B8;
    }
L_088943B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088943C4u);
    ctx.gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088943C4u) goto L_088943C4;
    return;
L_088943C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894418;
      }
      goto L_088943CC;
    }
L_088943CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894418;
      }
      goto L_088943E4;
    }
L_088943E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088943F0u);
    ctx.gpr[5] = (0u | 137u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x088943F0u) goto L_088943F0;
    return;
L_088943F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08894408u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x08894408u) goto L_08894408;
    return;
L_08894408:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    goto L_08894418;
L_08894418:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08894420;
    }
L_08894420:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894438;
      }
      goto L_0889442C;
    }
L_0889442C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08894438;
    }
L_08894438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 50u);
      if (branch_taken) {
          goto L_0889447C;
      }
      goto L_08894448;
    }
L_08894448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894470;
      }
      goto L_08894454;
    }
L_08894454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_08894470;
    }
    goto L_08894460;
L_08894460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x0889446Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0889446Cu) goto L_0889446C;
    return;
L_0889446C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_08894470;
L_08894470:
    ctx.gpr[31] = (0x08894478u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x08894478u) goto L_08894478;
    return;
L_08894478:
    ctx.gpr[4] = (0u | 50u);
    goto L_0889447C;
L_0889447C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08894488;
    }
L_08894488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088944A4;
      }
      goto L_08894498;
    }
L_08894498:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_088944A4;
    }
L_088944A4:
    ctx.gpr[31] = (0x088944ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x088944ACu) goto L_088944AC;
    return;
L_088944AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088944FC;
      }
      goto L_088944B8;
    }
L_088944B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1800)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889450C;
      }
      goto L_088944C4;
    }
L_088944C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1800)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889450C;
      }
      goto L_088944DC;
    }
L_088944DC:
    ctx.gpr[31] = (0x088944E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x088944E4u) goto L_088944E4;
    return;
L_088944E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088944F4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 566u, 0x08A2ACB0u>(ctx, &aot_mem) && ctx.pc == 0x088944F4u) goto L_088944F4;
    return;
L_088944F4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1800), 0u);
      if (branch_taken) {
          goto L_0889450C;
      }
      goto L_088944FC;
    }
L_088944FC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889450Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x0889450Cu) goto L_0889450C;
    return;
L_0889450C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08894514;
    }
L_08894514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894570;
      }
      goto L_08894520;
    }
L_08894520:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), 0u);
    ctx.gpr[31] = (0x0889452Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0889452Cu) goto L_0889452C;
    return;
L_0889452C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15500)));
    ctx.gpr[31] = (0x08894544u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15496)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08894544u) goto L_08894544;
    return;
L_08894544:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08894568u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x08894568u) goto L_08894568;
    return;
L_08894568:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088945E4;
      }
      goto L_08894570;
    }
L_08894570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088945E4;
      }
      goto L_08894584;
    }
L_08894584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088945E4;
      }
      goto L_08894598;
    }
L_08894598:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), 0u);
    ctx.gpr[31] = (0x088945A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088945A4u) goto L_088945A4;
    return;
L_088945A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15500)));
    ctx.gpr[31] = (0x088945BCu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15496)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x088945BCu) goto L_088945BC;
    return;
L_088945BC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x088945E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x088945E0u) goto L_088945E0;
    return;
L_088945E0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(600), 0u);
    goto L_088945E4;
L_088945E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_088945EC;
    }
L_088945EC:
    ctx.gpr[31] = (0x088945F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x088945F4u) goto L_088945F4;
    return;
L_088945F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889465C;
      }
      goto L_08894600;
    }
L_08894600:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8088)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0889465C;
      }
      goto L_08894624;
    }
L_08894624:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7256)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889465C;
      }
      goto L_08894644;
    }
L_08894644:
    ctx.gpr[31] = (0x0889464Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x0889464Cu) goto L_0889464C;
    return;
L_0889464C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0889465Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2AA08u>(ctx, &aot_mem) && ctx.pc == 0x0889465Cu) goto L_0889465C;
    return;
L_0889465C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08894664;
    }
L_08894664:
    ctx.gpr[31] = (0x0889466Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x0889466Cu) goto L_0889466C;
    return;
L_0889466C:
    ctx.gpr[31] = (0x08894674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x08894674u) goto L_08894674;
    return;
L_08894674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08894684u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 719u, 0x08A2B5FCu>(ctx, &aot_mem) && ctx.pc == 0x08894684u) goto L_08894684;
    return;
L_08894684:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088946EC;
      }
      goto L_08894694;
    }
L_08894694:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[6] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088946EC;
      }
      goto L_088946A4;
    }
L_088946A4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088946EC;
      }
      goto L_088946AC;
    }
L_088946AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088946EC;
      }
      goto L_088946B8;
    }
L_088946B8:
    ctx.gpr[31] = (0x088946C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088946C0u) goto L_088946C0;
    return;
L_088946C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088946EC;
      }
      goto L_088946C8;
    }
L_088946C8:
    ctx.gpr[4] = (0u | 5000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[31] = (0x088946E4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 549u, 0x089BA410u>(ctx, &aot_mem) && ctx.pc == 0x088946E4u) goto L_088946E4;
    return;
L_088946E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889485C;
      }
      goto L_088946EC;
    }
L_088946EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889485C;
      }
      goto L_088946F8;
    }
L_088946F8:
    ctx.gpr[31] = (0x08894700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x08894700u) goto L_08894700;
    return;
L_08894700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08894710u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 719u, 0x08A2B5FCu>(ctx, &aot_mem) && ctx.pc == 0x08894710u) goto L_08894710;
    return;
L_08894710:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889485C;
      }
      goto L_0889471C;
    }
L_0889471C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(292)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08894774;
      }
      goto L_08894754;
    }
L_08894754:
    ctx.gpr[31] = (0x0889475Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x0889475Cu) goto L_0889475C;
    return;
L_0889475C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0889476Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2AA08u>(ctx, &aot_mem) && ctx.pc == 0x0889476Cu) goto L_0889476C;
    return;
L_0889476C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889485C;
      }
      goto L_08894774;
    }
L_08894774:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088947DC;
      }
      goto L_08894780;
    }
L_08894780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
        goto L_088947A0;
    }
    goto L_0889478C;
L_0889478C:
    ctx.gpr[31] = (0x08894794u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08894794u) goto L_08894794;
    return;
L_08894794:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088947DC;
      }
      goto L_0889479C;
    }
L_0889479C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    goto L_088947A0;
L_088947A0:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
        goto L_088947C0;
    }
    goto L_088947A8;
L_088947A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088947DC;
      }
      goto L_088947BC;
    }
L_088947BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    goto L_088947C0;
L_088947C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088947FC;
      }
      goto L_088947C8;
    }
L_088947C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088947FC;
      }
      goto L_088947DC;
    }
L_088947DC:
    ctx.gpr[31] = (0x088947E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x088947E4u) goto L_088947E4;
    return;
L_088947E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088947F4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2AA08u>(ctx, &aot_mem) && ctx.pc == 0x088947F4u) goto L_088947F4;
    return;
L_088947F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889485C;
      }
      goto L_088947FC;
    }
L_088947FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(685)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889483C;
      }
      goto L_08894808;
    }
L_08894808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[5] = (0u | 80u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889485C;
      }
      goto L_0889481C;
    }
L_0889481C:
    ctx.gpr[31] = (0x08894824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x08894824u) goto L_08894824;
    return;
L_08894824:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08894834u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2AA08u>(ctx, &aot_mem) && ctx.pc == 0x08894834u) goto L_08894834;
    return;
L_08894834:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 91u, 0x088984CCu>(ctx, &aot_mem); return;
      }
      goto L_0889483C;
    }
L_0889483C:
    ctx.gpr[31] = (0x08894844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x08894844u) goto L_08894844;
    return;
L_08894844:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08894854u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2AA08u>(ctx, &aot_mem) && ctx.pc == 0x08894854u) goto L_08894854;
    return;
L_08894854:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 91u, 0x088984CCu>(ctx, &aot_mem); return;
      }
      goto L_0889485C;
    }
L_0889485C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08894864;
    }
L_08894864:
    ctx.gpr[31] = (0x0889486Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x0889486Cu) goto L_0889486C;
    return;
L_0889486C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894B6C;
      }
      goto L_08894878;
    }
L_08894878:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_088948BC;
    }
    goto L_088948BC;
L_088948BC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
        goto L_08894900;
    }
    goto L_08894900;
L_08894900:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 99u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
        goto L_08894944;
    }
    goto L_08894944;
L_08894944:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (0u | 99u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
        goto L_08894988;
    }
    goto L_08894988;
L_08894988:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[8] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894AB8;
      }
      goto L_088949A0;
    }
L_088949A0:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894AA8;
      }
      goto L_088949B0;
    }
L_088949B0:
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[10] = (ctx.gpr[7] << 5u);
    ctx.gpr[11] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[11] = (ctx.gpr[11] << 2u);
    ctx.gpr[10] = (ctx.gpr[11] - ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[8] + ctx.gpr[10]);
    ctx.gpr[11] = (ctx.gpr[10] << 4u);
    ctx.gpr[10] = (ctx.gpr[11] - ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(20));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894A98;
      }
      goto L_088949F0;
    }
L_088949F0:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(68)));
    ctx.gpr[11] = (ctx.gpr[11] & 14u);
    ctx.gpr[2] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08894A90;
      }
      goto L_08894A0C;
    }
L_08894A0C:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[11] = (ctx.gpr[11] & 2u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894A90;
      }
      goto L_08894A1C;
    }
L_08894A1C:
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[11] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[11] = (14289u << 16u);
    ctx.gpr[11] = (ctx.gpr[11] | 46871u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08894A90;
      }
      goto L_08894A4C;
    }
L_08894A4C:
    ctx.gpr[11] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
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
    ctx.gpr[11] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08894A90;
      }
      goto L_08894A88;
    }
L_08894A88:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (ctx.gpr[10] | 0u);
    goto L_08894A90;
L_08894A90:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_088949F0;
      }
      goto L_08894A98;
    }
L_08894A98:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088949B0;
      }
      goto L_08894AA8;
    }
L_08894AA8:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088949A0;
      }
      goto L_08894AB8;
    }
L_08894AB8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894B6C;
      }
      goto L_08894AC0;
    }
L_08894AC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(540)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894B60;
      }
      goto L_08894AD8;
    }
L_08894AD8:
    ctx.gpr[31] = (0x08894AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x08894AE0u) goto L_08894AE0;
    return;
L_08894AE0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08894AF0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2AA08u>(ctx, &aot_mem) && ctx.pc == 0x08894AF0u) goto L_08894AF0;
    return;
L_08894AF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[31] = (0x08894B00u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08894B00u) goto L_08894B00;
    return;
L_08894B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] | 1024u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[31] = (0x08894B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08894B24u) goto L_08894B24;
    return;
L_08894B24:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08894B34u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 772u, 0x0889FAB8u>(ctx, &aot_mem) && ctx.pc == 0x08894B34u) goto L_08894B34;
    return;
L_08894B34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08894B4C;
      }
      goto L_08894B3C;
    }
L_08894B3C:
    ctx.gpr[31] = (0x08894B44u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 787u, 0x0889FB40u>(ctx, &aot_mem) && ctx.pc == 0x08894B44u) goto L_08894B44;
    return;
L_08894B44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894B58;
      }
      goto L_08894B4C;
    }
L_08894B4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    goto L_08894B58;
L_08894B58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08894B6C;
      }
      goto L_08894B60;
    }
L_08894B60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08894B6Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x08894B6Cu) goto L_08894B6C;
    return;
L_08894B6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08894B74;
    }
L_08894B74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894C34;
      }
      goto L_08894B8C;
    }
L_08894B8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894BC4;
      }
      goto L_08894B98;
    }
L_08894B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894BC4;
      }
      goto L_08894BA4;
    }
L_08894BA4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08894BB4u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08894BB4u) goto L_08894BB4;
    return;
L_08894BB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08894C34;
      }
      goto L_08894BC4;
    }
L_08894BC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08894C34;
      }
      goto L_08894BD4;
    }
L_08894BD4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1360), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1364), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08894C20u);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 361u, 0x089A1960u>(ctx, &aot_mem) && ctx.pc == 0x08894C20u) goto L_08894C20;
    return;
L_08894C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    goto L_08894C34;
L_08894C34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08894C3C;
    }
L_08894C3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894C88;
      }
      goto L_08894C48;
    }
L_08894C48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08894C88;
      }
      goto L_08894C58;
    }
L_08894C58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08894C88;
      }
      goto L_08894C68;
    }
L_08894C68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08894C88;
      }
      goto L_08894C78;
    }
L_08894C78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08894C88u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 678u, 0x089A2D68u>(ctx, &aot_mem) && ctx.pc == 0x08894C88u) goto L_08894C88;
    return;
L_08894C88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08894C90;
    }
L_08894C90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894D60;
      }
      goto L_08894C9C;
    }
L_08894C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1800)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894CEC;
      }
      goto L_08894CB4;
    }
L_08894CB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08894D84;
      }
      goto L_08894CC4;
    }
L_08894CC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08894D84;
      }
      goto L_08894CD4;
    }
L_08894CD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08894CE4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 678u, 0x089A2D68u>(ctx, &aot_mem) && ctx.pc == 0x08894CE4u) goto L_08894CE4;
    return;
L_08894CE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08894D84;
      }
      goto L_08894CEC;
    }
L_08894CEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894D84;
      }
      goto L_08894CF8;
    }
L_08894CF8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08894D04u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x08894D04u) goto L_08894D04;
    return;
L_08894D04:
    ctx.gpr[31] = (0x08894D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08894D0Cu) goto L_08894D0C;
    return;
L_08894D0C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_08894D28;
    }
    goto L_08894D18;
L_08894D18:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08894D28;
      }
      goto L_08894D28;
    }
L_08894D28:
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08894D38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x08894D38u) goto L_08894D38;
    return;
L_08894D38:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1800), ctx.gpr[4]);
    ctx.gpr[31] = (0x08894D50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x08894D50u) goto L_08894D50;
    return;
L_08894D50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894D84;
      }
      goto L_08894D58;
    }
L_08894D58:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), 0u);
      if (branch_taken) {
          goto L_08894D84;
      }
      goto L_08894D60;
    }
L_08894D60:
    ctx.gpr[31] = (0x08894D68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x08894D68u) goto L_08894D68;
    return;
L_08894D68:
    ctx.gpr[31] = (0x08894D70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x08894D70u) goto L_08894D70;
    return;
L_08894D70:
    ctx.gpr[31] = (0x08894D78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x08894D78u) goto L_08894D78;
    return;
L_08894D78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894D84;
      }
      goto L_08894D80;
    }
L_08894D80:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), 0u);
    goto L_08894D84;
L_08894D84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08894D8C;
    }
L_08894D8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894DD8;
      }
      goto L_08894D98;
    }
L_08894D98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1800)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894DFC;
      }
      goto L_08894DB0;
    }
L_08894DB0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08894DFC;
      }
      goto L_08894DD8;
    }
L_08894DD8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_08894DFC;
L_08894DFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08894E04;
    }
L_08894E04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 50u);
      if (branch_taken) {
          goto L_08894E48;
      }
      goto L_08894E14;
    }
L_08894E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894E3C;
      }
      goto L_08894E20;
    }
L_08894E20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_08894E3C;
    }
    goto L_08894E2C;
L_08894E2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08894E38u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08894E38u) goto L_08894E38;
    return;
L_08894E38:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_08894E3C;
L_08894E3C:
    ctx.gpr[31] = (0x08894E44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x08894E44u) goto L_08894E44;
    return;
L_08894E44:
    ctx.gpr[4] = (0u | 50u);
    goto L_08894E48;
L_08894E48:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08894E54;
    }
L_08894E54:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08894E64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 590u, 0x08886F74u>(ctx, &aot_mem) && ctx.pc == 0x08894E64u) goto L_08894E64;
    return;
L_08894E64:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894E98;
      }
      goto L_08894E6C;
    }
L_08894E6C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(608));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08894E90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 311u, 0x089A16E4u>(ctx, &aot_mem) && ctx.pc == 0x08894E90u) goto L_08894E90;
    return;
L_08894E90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08894EBC;
      }
      goto L_08894E98;
    }
L_08894E98:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[31] = (0x08894EA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 577u, 0x08886E84u>(ctx, &aot_mem) && ctx.pc == 0x08894EA4u) goto L_08894EA4;
    return;
L_08894EA4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08894EB0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 546u, 0x08ACE610u>(ctx, &aot_mem) && ctx.pc == 0x08894EB0u) goto L_08894EB0;
    return;
L_08894EB0:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(608));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08894EBC;
L_08894EBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08894EC4;
    }
L_08894EC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895160;
      }
      goto L_08894ED0;
    }
L_08894ED0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894F20;
      }
      goto L_08894EDC;
    }
L_08894EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(544)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894F20;
      }
      goto L_08894EF4;
    }
L_08894EF4:
    ctx.gpr[31] = (0x08894EFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x08894EFCu) goto L_08894EFC;
    return;
L_08894EFC:
    ctx.gpr[31] = (0x08894F04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x08894F04u) goto L_08894F04;
    return;
L_08894F04:
    ctx.gpr[31] = (0x08894F0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x08894F0Cu) goto L_08894F0C;
    return;
L_08894F0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08894F18;
      }
      goto L_08894F14;
    }
L_08894F14:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), 0u);
    goto L_08894F18;
L_08894F18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08894F20;
    }
L_08894F20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08894FA0;
      }
      goto L_08894F30;
    }
L_08894F30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894FA0;
      }
      goto L_08894F44;
    }
L_08894F44:
    ctx.gpr[31] = (0x08894F4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x08894F4Cu) goto L_08894F4C;
    return;
L_08894F4C:
    ctx.gpr[31] = (0x08894F54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 474u, 0x088868F4u>(ctx, &aot_mem) && ctx.pc == 0x08894F54u) goto L_08894F54;
    return;
L_08894F54:
    ctx.gpr[31] = (0x08894F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08894F5Cu) goto L_08894F5C;
    return;
L_08894F5C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_08894F78;
    }
    goto L_08894F68;
L_08894F68:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08894F78;
      }
      goto L_08894F78;
    }
L_08894F78:
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08894F88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x08894F88u) goto L_08894F88;
    return;
L_08894F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08894FA0;
    }
L_08894FA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1800)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895160;
      }
      goto L_08894FAC;
    }
L_08894FAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1800)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895160;
      }
      goto L_08894FC4;
    }
L_08894FC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889515C;
      }
      goto L_08894FD4;
    }
L_08894FD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889515C;
      }
      goto L_08894FE4;
    }
L_08894FE4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (ctx.gpr[5] & 512u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889502C;
      }
      goto L_08894FF8;
    }
L_08894FF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889502C;
      }
      goto L_08895008;
    }
L_08895008:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889502C;
      }
      goto L_0889501C;
    }
L_0889501C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088950A0;
      }
      goto L_0889502C;
    }
L_0889502C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (ctx.gpr[5] & 1024u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088950A0;
      }
      goto L_0889503C;
    }
L_0889503C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895070;
      }
      goto L_0889504C;
    }
L_0889504C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895070;
      }
      goto L_08895060;
    }
L_08895060:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088950A0;
      }
      goto L_08895070;
    }
L_08895070:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088950A0;
      }
      goto L_08895080;
    }
L_08895080:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088950A0;
      }
      goto L_08895094;
    }
L_08895094:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 12u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_088950A0;
L_088950A0:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(544)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895108;
      }
      goto L_088950B8;
    }
L_088950B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088950F0;
      }
      goto L_088950D0;
    }
L_088950D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(542)));
    ctx.gpr[6] = (ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088950F0;
      }
      goto L_088950E4;
    }
L_088950E4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (0u | 11u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[6]));
    goto L_088950F0;
L_088950F0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(544)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088950B8;
      }
      goto L_08895108;
    }
L_08895108:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889515C;
      }
      goto L_08895110;
    }
L_08895110:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08895128u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 472u, 0x0888E3F0u>(ctx, &aot_mem) && ctx.pc == 0x08895128u) goto L_08895128;
    return;
L_08895128:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[31] = (0x0889515Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 863u, 0x0888BAA8u>(ctx, &aot_mem) && ctx.pc == 0x0889515Cu) goto L_0889515C;
    return;
L_0889515C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1800), 0u);
    goto L_08895160;
L_08895160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088955DC;
      }
      goto L_0889516C;
    }
L_0889516C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088955DC;
      }
      goto L_08895178;
    }
L_08895178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088951A0;
      }
      goto L_08895198;
    }
L_08895198:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_088951A0;
    }
L_088951A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088951CC;
      }
      goto L_088951B8;
    }
L_088951B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088951C4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x088951C4u) goto L_088951C4;
    return;
L_088951C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_088951CC;
    }
L_088951CC:
    ctx.gpr[31] = (0x088951D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x088951D4u) goto L_088951D4;
    return;
L_088951D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895648;
      }
      goto L_088951DC;
    }
L_088951DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088952C0;
      }
      goto L_088951EC;
    }
L_088951EC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08895234;
      }
      goto L_0889521C;
    }
L_0889521C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889524C;
      }
      goto L_0889522C;
    }
L_0889522C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895360;
      }
      goto L_08895234;
    }
L_08895234:
    ctx.gpr[31] = (0x0889523Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x0889523Cu) goto L_0889523C;
    return;
L_0889523C:
    ctx.gpr[31] = (0x08895244u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x08895244u) goto L_08895244;
    return;
L_08895244:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 91u, 0x088984CCu>(ctx, &aot_mem); return;
      }
      goto L_0889524C;
    }
L_0889524C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895360;
      }
      goto L_0889525C;
    }
L_0889525C:
    ctx.gpr[31] = (0x08895264u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08895264u) goto L_08895264;
    return;
L_08895264:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895360;
      }
      goto L_0889526C;
    }
L_0889526C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895360;
      }
      goto L_08895284;
    }
L_08895284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895360;
      }
      goto L_08895298;
    }
L_08895298:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088952A8u);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x088952A8u) goto L_088952A8;
    return;
L_088952A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08895360;
      }
      goto L_088952C0;
    }
L_088952C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895360;
      }
      goto L_088952CC;
    }
L_088952CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895360;
      }
      goto L_088952DC;
    }
L_088952DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895360;
      }
      goto L_088952EC;
    }
L_088952EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895360;
      }
      goto L_088952FC;
    }
L_088952FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895360;
      }
      goto L_08895314;
    }
L_08895314:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889533C;
      }
      goto L_08895324;
    }
L_08895324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895360;
      }
      goto L_0889533C;
    }
L_0889533C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889534Cu);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x0889534Cu) goto L_0889534C;
    return;
L_0889534C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08895360;
L_08895360:
    ctx.gpr[31] = (0x08895368u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 825u, 0x0889FD24u>(ctx, &aot_mem) && ctx.pc == 0x08895368u) goto L_08895368;
    return;
L_08895368:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895384;
      }
      goto L_08895370;
    }
L_08895370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088953A0;
      }
      goto L_08895384;
    }
L_08895384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
        goto L_088953B8;
    }
    goto L_08895398;
L_08895398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088953D8;
      }
      goto L_088953A0;
    }
L_088953A0:
    ctx.gpr[31] = (0x088953A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x088953A8u) goto L_088953A8;
    return;
L_088953A8:
    ctx.gpr[31] = (0x088953B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x088953B0u) goto L_088953B0;
    return;
L_088953B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 91u, 0x088984CCu>(ctx, &aot_mem); return;
      }
      goto L_088953B8;
    }
L_088953B8:
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088953D8;
      }
      goto L_088953C4;
    }
L_088953C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[31] = (0x088953D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 230u, 0x08885294u>(ctx, &aot_mem) && ctx.pc == 0x088953D0u) goto L_088953D0;
    return;
L_088953D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088953F8;
      }
      goto L_088953D8;
    }
L_088953D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088953F8;
      }
      goto L_088953E8;
    }
L_088953E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088953F8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 678u, 0x089A2D68u>(ctx, &aot_mem) && ctx.pc == 0x088953F8u) goto L_088953F8;
    return;
L_088953F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895424;
      }
      goto L_08895408;
    }
L_08895408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895424;
      }
      goto L_08895418;
    }
L_08895418:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895424u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08895424u) goto L_08895424;
    return;
L_08895424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889559C;
      }
      goto L_08895430;
    }
L_08895430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(616)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889559C;
      }
      goto L_0889544C;
    }
L_0889544C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
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
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895594;
      }
      goto L_08895484;
    }
L_08895484:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(15472))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08895594;
      }
      goto L_088954C8;
    }
L_088954C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895504;
      }
      goto L_088954D8;
    }
L_088954D8:
    ctx.gpr[31] = (0x088954E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F7ACu>(ctx, &aot_mem) && ctx.pc == 0x088954E0u) goto L_088954E0;
    return;
L_088954E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895504;
      }
      goto L_088954E8;
    }
L_088954E8:
    ctx.gpr[31] = (0x088954F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F7ACu>(ctx, &aot_mem) && ctx.pc == 0x088954F0u) goto L_088954F0;
    return;
L_088954F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895504;
      }
      goto L_088954F8;
    }
L_088954F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[31] = (0x08895504u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 29u, 0x08888354u>(ctx, &aot_mem) && ctx.pc == 0x08895504u) goto L_08895504;
    return;
L_08895504:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895564;
      }
      goto L_08895514;
    }
L_08895514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895564;
      }
      goto L_08895524;
    }
L_08895524:
    ctx.gpr[31] = (0x0889552Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0889552Cu) goto L_0889552C;
    return;
L_0889552C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895548;
      }
      goto L_08895534;
    }
L_08895534:
    ctx.gpr[31] = (0x0889553Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x0889553Cu) goto L_0889553C;
    return;
L_0889553C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895564;
      }
      goto L_08895548;
    }
L_08895548:
    ctx.gpr[31] = (0x08895550u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x08895550u) goto L_08895550;
    return;
L_08895550:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889555Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x0889555Cu) goto L_0889555C;
    return;
L_0889555C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895594;
      }
      goto L_08895564;
    }
L_08895564:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08895570u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(380));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 112u, 0x08884834u>(ctx, &aot_mem) && ctx.pc == 0x08895570u) goto L_08895570;
    return;
L_08895570:
    ctx.gpr[31] = (0x08895578u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x08895578u) goto L_08895578;
    return;
L_08895578:
    ctx.gpr[31] = (0x08895580u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x08895580u) goto L_08895580;
    return;
L_08895580:
    ctx.gpr[31] = (0x08895588u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x08895588u) goto L_08895588;
    return;
L_08895588:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895594;
      }
      goto L_08895590;
    }
L_08895590:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), 0u);
    goto L_08895594;
L_08895594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895648;
      }
      goto L_0889559C;
    }
L_0889559C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895648;
      }
      goto L_088955A8;
    }
L_088955A8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088955B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(388));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 112u, 0x08884834u>(ctx, &aot_mem) && ctx.pc == 0x088955B4u) goto L_088955B4;
    return;
L_088955B4:
    ctx.gpr[31] = (0x088955BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x088955BCu) goto L_088955BC;
    return;
L_088955BC:
    ctx.gpr[31] = (0x088955C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x088955C4u) goto L_088955C4;
    return;
L_088955C4:
    ctx.gpr[31] = (0x088955CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x088955CCu) goto L_088955CC;
    return;
L_088955CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895648;
      }
      goto L_088955D4;
    }
L_088955D4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), 0u);
      if (branch_taken) {
          goto L_08895648;
      }
      goto L_088955DC;
    }
L_088955DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895610;
      }
      goto L_088955E8;
    }
L_088955E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895610;
      }
      goto L_088955F8;
    }
L_088955F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895608u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 227u, 0x088892C8u>(ctx, &aot_mem) && ctx.pc == 0x08895608u) goto L_08895608;
    return;
L_08895608:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895648;
      }
      goto L_08895610;
    }
L_08895610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 31u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x08895648u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x08895648u) goto L_08895648;
    return;
L_08895648:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08895650;
    }
L_08895650:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895698;
      }
      goto L_0889565C;
    }
L_0889565C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895690;
      }
      goto L_0889566C;
    }
L_0889566C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895690;
      }
      goto L_08895678;
    }
L_08895678:
    ctx.gpr[31] = (0x08895680u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x08895680u) goto L_08895680;
    return;
L_08895680:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895690u);
    ctx.gpr[6] = (0u | 6000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 385u, 0x089A1B10u>(ctx, &aot_mem) && ctx.pc == 0x08895690u) goto L_08895690;
    return;
L_08895690:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08895698;
    }
L_08895698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895834;
      }
      goto L_088956B0;
    }
L_088956B0:
    ctx.gpr[31] = (0x088956B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088956B8u) goto L_088956B8;
    return;
L_088956B8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
        goto L_088956F8;
    }
    goto L_088956C8;
L_088956C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
        goto L_088956F8;
    }
    goto L_088956D4;
L_088956D4:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08895724;
      }
      goto L_088956DC;
    }
L_088956DC:
    ctx.gpr[31] = (0x088956E4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088956E4u) goto L_088956E4;
    return;
L_088956E4:
    ctx.gpr[31] = (0x088956ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 27u, 0x08A980DCu>(ctx, &aot_mem) && ctx.pc == 0x088956ECu) goto L_088956EC;
    return;
L_088956EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895724;
      }
      goto L_088956F4;
    }
L_088956F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    goto L_088956F8;
L_088956F8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889582C;
      }
      goto L_08895700;
    }
L_08895700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0889582C;
      }
      goto L_08895710;
    }
L_08895710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x0889571Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 772u, 0x0889FAB8u>(ctx, &aot_mem) && ctx.pc == 0x0889571Cu) goto L_0889571C;
    return;
L_0889571C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889582C;
      }
      goto L_08895724;
    }
L_08895724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895834;
      }
      goto L_08895734;
    }
L_08895734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895834;
      }
      goto L_08895744;
    }
L_08895744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 48u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895834;
      }
      goto L_08895754;
    }
L_08895754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088957C4;
      }
      goto L_08895764;
    }
L_08895764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088957C4;
      }
      goto L_08895778;
    }
L_08895778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (14289u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08895834;
      }
      goto L_088957C4;
    }
L_088957C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088957EC;
      }
      goto L_088957D8;
    }
L_088957D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x088957E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 179u, 0x08884F2Cu>(ctx, &aot_mem) && ctx.pc == 0x088957E4u) goto L_088957E4;
    return;
L_088957E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895834;
      }
      goto L_088957EC;
    }
L_088957EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895814;
      }
      goto L_08895800;
    }
L_08895800:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x0889580Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 592u, 0x0888A660u>(ctx, &aot_mem) && ctx.pc == 0x0889580Cu) goto L_0889580C;
    return;
L_0889580C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895834;
      }
      goto L_08895814;
    }
L_08895814:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895824u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 227u, 0x088892C8u>(ctx, &aot_mem) && ctx.pc == 0x08895824u) goto L_08895824;
    return;
L_08895824:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895834;
      }
      goto L_0889582C;
    }
L_0889582C:
    ctx.gpr[31] = (0x08895834u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x08895834u) goto L_08895834;
    return;
L_08895834:
    ctx.gpr[31] = (0x0889583Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 33u, 0x08958280u>(ctx, &aot_mem) && ctx.pc == 0x0889583Cu) goto L_0889583C;
    return;
L_0889583C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895880;
      }
      goto L_08895844;
    }
L_08895844:
    ctx.gpr[31] = (0x0889584Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0889584Cu) goto L_0889584C;
    return;
L_0889584C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895880;
      }
      goto L_08895854;
    }
L_08895854:
    ctx.gpr[31] = (0x0889585Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0889585Cu) goto L_0889585C;
    return;
L_0889585C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08895868u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 772u, 0x0889FAB8u>(ctx, &aot_mem) && ctx.pc == 0x08895868u) goto L_08895868;
    return;
L_08895868:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895880;
      }
      goto L_08895870;
    }
L_08895870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895880;
      }
      goto L_0889587C;
    }
L_0889587C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1772), 0u);
    goto L_08895880;
L_08895880:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08895888;
    }
L_08895888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088959D8;
      }
      goto L_088958A0;
    }
L_088958A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088959D8;
      }
      goto L_088958AC;
    }
L_088958AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088959D8;
      }
      goto L_088958B8;
    }
L_088958B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088959D8;
      }
      goto L_088958C8;
    }
L_088958C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088959D8;
      }
      goto L_088958D8;
    }
L_088958D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 48u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088959D8;
      }
      goto L_088958E8;
    }
L_088958E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895910;
      }
      goto L_088958FC;
    }
L_088958FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x08895908u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 179u, 0x08884F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08895908u) goto L_08895908;
    return;
L_08895908:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088959D8;
      }
      goto L_08895910;
    }
L_08895910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895938;
      }
      goto L_08895924;
    }
L_08895924:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x08895930u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 592u, 0x0888A660u>(ctx, &aot_mem) && ctx.pc == 0x08895930u) goto L_08895930;
    return;
L_08895930:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088959D8;
      }
      goto L_08895938;
    }
L_08895938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895964;
      }
      goto L_0889594C;
    }
L_0889594C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889595Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 227u, 0x088892C8u>(ctx, &aot_mem) && ctx.pc == 0x0889595Cu) goto L_0889595C;
    return;
L_0889595C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088959D8;
      }
      goto L_08895964;
    }
L_08895964:
    ctx.gpr[4] = (0u | 15u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08895980;
      }
      goto L_08895978;
    }
L_08895978:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 15u);
      if (branch_taken) {
          goto L_088959C4;
      }
      goto L_08895980;
    }
L_08895980:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08895998;
      }
      goto L_08895990;
    }
L_08895990:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 11u);
      if (branch_taken) {
          goto L_088959C4;
      }
      goto L_08895998;
    }
L_08895998:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088959B0;
      }
      goto L_088959A8;
    }
L_088959A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 16u);
      if (branch_taken) {
          goto L_088959C4;
      }
      goto L_088959B0;
    }
L_088959B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088959C8;
      }
      goto L_088959C0;
    }
L_088959C0:
    ctx.gpr[4] = (0u | 12u);
    goto L_088959C4;
L_088959C4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_088959C8;
L_088959C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088959D8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 761u, 0x0888B414u>(ctx, &aot_mem) && ctx.pc == 0x088959D8u) goto L_088959D8;
    return;
L_088959D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_088959E0;
    }
L_088959E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895A24;
      }
      goto L_088959F0;
    }
L_088959F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895A24;
      }
      goto L_088959FC;
    }
L_088959FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895A1C;
      }
      goto L_08895A0C;
    }
L_08895A0C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895A1Cu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08895A1Cu) goto L_08895A1C;
    return;
L_08895A1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08895A24;
    }
L_08895A24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895AA8;
      }
      goto L_08895A34;
    }
L_08895A34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895A5C;
      }
      goto L_08895A44;
    }
L_08895A44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895A54u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 385u, 0x089A1B10u>(ctx, &aot_mem) && ctx.pc == 0x08895A54u) goto L_08895A54;
    return;
L_08895A54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895A6C;
      }
      goto L_08895A5C;
    }
L_08895A5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895A6Cu);
    ctx.gpr[6] = (0u | 6000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 385u, 0x089A1B10u>(ctx, &aot_mem) && ctx.pc == 0x08895A6Cu) goto L_08895A6C;
    return;
L_08895A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8140)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895AA8;
      }
      goto L_08895A98;
    }
L_08895A98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_08895AA8;
L_08895AA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08895AB0;
    }
L_08895AB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895C20;
      }
      goto L_08895ABC;
    }
L_08895ABC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08895AD0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x08895AD0u) goto L_08895AD0;
    return;
L_08895AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1760), ctx.gpr[4]);
    ctx.gpr[31] = (0x08895AE0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1760));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08895AE0u) goto L_08895AE0;
    return;
L_08895AE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1780), ctx.gpr[4]);
    ctx.gpr[31] = (0x08895AF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 2u, 0x089A000Cu>(ctx, &aot_mem) && ctx.pc == 0x08895AF0u) goto L_08895AF0;
    return;
L_08895AF0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08895C10;
      }
      goto L_08895B20;
    }
L_08895B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895C28;
      }
      goto L_08895B38;
    }
L_08895B38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895B78;
      }
      goto L_08895B48;
    }
L_08895B48:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08895BE8;
      }
      goto L_08895B78;
    }
L_08895B78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[31] = (0x08895B84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 228u, 0x088D91E4u>(ctx, &aot_mem) && ctx.pc == 0x08895B84u) goto L_08895B84;
    return;
L_08895B84:
    ctx.gpr[31] = (0x08895B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08895B8Cu) goto L_08895B8C;
    return;
L_08895B8C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15548)));
    ctx.gpr[31] = (0x08895BA4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15544)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08895BA4u) goto L_08895BA4;
    return;
L_08895BA4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15556)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15552)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08895BE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 262u, 0x089A12E4u>(ctx, &aot_mem) && ctx.pc == 0x08895BE0u) goto L_08895BE0;
    return;
L_08895BE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895BFC;
      }
      goto L_08895BE8;
    }
L_08895BE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08895BFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 336u, 0x089A1828u>(ctx, &aot_mem) && ctx.pc == 0x08895BFCu) goto L_08895BFC;
    return;
L_08895BFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895C08u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 247u, 0x089A11A4u>(ctx, &aot_mem) && ctx.pc == 0x08895C08u) goto L_08895C08;
    return;
L_08895C08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895C28;
      }
      goto L_08895C10;
    }
L_08895C10:
    ctx.gpr[31] = (0x08895C18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x08895C18u) goto L_08895C18;
    return;
L_08895C18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895C28;
      }
      goto L_08895C20;
    }
L_08895C20:
    ctx.gpr[31] = (0x08895C28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x08895C28u) goto L_08895C28;
    return;
L_08895C28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08895C30;
    }
L_08895C30:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2016));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895C90;
      }
      goto L_08895C64;
    }
L_08895C64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08895C78u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x08895C78u) goto L_08895C78;
    return;
L_08895C78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1760), ctx.gpr[4]);
    ctx.gpr[31] = (0x08895C88u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1760));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08895C88u) goto L_08895C88;
    return;
L_08895C88:
    ctx.gpr[31] = (0x08895C90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 2u, 0x089A000Cu>(ctx, &aot_mem) && ctx.pc == 0x08895C90u) goto L_08895C90;
    return;
L_08895C90:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2032)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08895CEC;
      }
      goto L_08895CC8;
    }
L_08895CC8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2016));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2032)));
    ctx.gpr[31] = (0x08895CE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 311u, 0x089A16E4u>(ctx, &aot_mem) && ctx.pc == 0x08895CE4u) goto L_08895CE4;
    return;
L_08895CE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895E28;
      }
      goto L_08895CEC;
    }
L_08895CEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895D0C;
      }
      goto L_08895CF8;
    }
L_08895CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895DD0;
      }
      goto L_08895D0C;
    }
L_08895D0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895E28;
      }
      goto L_08895D24;
    }
L_08895D24:
    ctx.gpr[31] = (0x08895D2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 745u, 0x089AB6B8u>(ctx, &aot_mem) && ctx.pc == 0x08895D2Cu) goto L_08895D2C;
    return;
L_08895D2C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08895D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08895D38u) goto L_08895D38;
    return;
L_08895D38:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15548)));
    ctx.gpr[31] = (0x08895D50u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15544)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08895D50u) goto L_08895D50;
    return;
L_08895D50:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(500));
    ctx.gpr[31] = (0x08895D70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x08895D70u) goto L_08895D70;
    return;
L_08895D70:
    ctx.gpr[4] = (16u << 16u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (128u << 16u);
      if (branch_taken) {
          goto L_08895D9C;
      }
      goto L_08895D7C;
    }
L_08895D7C:
    if (ctx.gpr[17] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
        goto L_08895D94;
    }
    goto L_08895D84;
L_08895D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895D9C;
      }
      goto L_08895D90;
    }
L_08895D90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    goto L_08895D94;
L_08895D94:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895DC8;
      }
      goto L_08895D9C;
    }
L_08895D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895DC8;
      }
      goto L_08895DB8;
    }
L_08895DB8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895DC8u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08895DC8u) goto L_08895DC8;
    return;
L_08895DC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895E28;
      }
      goto L_08895DD0;
    }
L_08895DD0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2032)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08895E20;
      }
      goto L_08895DFC;
    }
L_08895DFC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2016));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2032)));
    ctx.gpr[31] = (0x08895E18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 311u, 0x089A16E4u>(ctx, &aot_mem) && ctx.pc == 0x08895E18u) goto L_08895E18;
    return;
L_08895E18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08895E28;
      }
      goto L_08895E20;
    }
L_08895E20:
    ctx.gpr[31] = (0x08895E28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x08895E28u) goto L_08895E28;
    return;
L_08895E28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08895E30;
    }
L_08895E30:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(608));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08895EE8;
      }
      goto L_08895E70;
    }
L_08895E70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895EE8;
      }
      goto L_08895E7C;
    }
L_08895E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x08895E88u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(608));
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 206u, 0x0891D230u>(ctx, &aot_mem) && ctx.pc == 0x08895E88u) goto L_08895E88;
    return;
L_08895E88:
    ctx.gpr[31] = (0x08895E90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 187u, 0x089ED3D0u>(ctx, &aot_mem) && ctx.pc == 0x08895E90u) goto L_08895E90;
    return;
L_08895E90:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[4] = (17352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08895EE0;
      }
      goto L_08895EBC;
    }
L_08895EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895ED0u);
    ctx.gpr[5] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 517u, 0x08886B04u>(ctx, &aot_mem) && ctx.pc == 0x08895ED0u) goto L_08895ED0;
    return;
L_08895ED0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08895EE0u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08895EE0u) goto L_08895EE0;
    return;
L_08895EE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08895EE8;
    }
L_08895EE8:
    ctx.gpr[31] = (0x08895EF0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 121u, 0x08884920u>(ctx, &aot_mem) && ctx.pc == 0x08895EF0u) goto L_08895EF0;
    return;
L_08895EF0:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896044;
      }
      goto L_08895F08;
    }
L_08895F08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896034;
      }
      goto L_08895F14;
    }
L_08895F14:
    ctx.gpr[4] = (17761u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08895F60u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 158u, 0x088C0F80u>(ctx, &aot_mem) && ctx.pc == 0x08895F60u) goto L_08895F60;
    return;
L_08895F60:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(496))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08895FFC;
      }
      goto L_08895F78;
    }
L_08895F78:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08895F9Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 115u, 0x088848A0u>(ctx, &aot_mem) && ctx.pc == 0x08895F9Cu) goto L_08895F9C;
    return;
L_08895F9C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08895FA8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 124u, 0x08884970u>(ctx, &aot_mem) && ctx.pc == 0x08895FA8u) goto L_08895FA8;
    return;
L_08895FA8:
    ctx.gpr[31] = (0x08895FB0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 123u, 0x08884958u>(ctx, &aot_mem) && ctx.pc == 0x08895FB0u) goto L_08895FB0;
    return;
L_08895FB0:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08895FE0;
      }
      goto L_08895FC0;
    }
L_08895FC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08895FE0;
      }
      goto L_08895FD0;
    }
L_08895FD0:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08895FDCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 123u, 0x08884958u>(ctx, &aot_mem) && ctx.pc == 0x08895FDCu) goto L_08895FDC;
    return;
L_08895FDC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08895FE0;
L_08895FE0:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(496))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08895F78;
      }
      goto L_08895FFC;
    }
L_08895FFC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889602C;
      }
      goto L_08896008;
    }
L_08896008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x08896014u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1332));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08896014u) goto L_08896014;
    return;
L_08896014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889602Cu);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x0889602Cu) goto L_0889602C;
    return;
L_0889602C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889603C;
      }
      goto L_08896034;
    }
L_08896034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    goto L_0889603C;
L_0889603C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08896044;
    }
L_08896044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1800)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889608C;
      }
      goto L_0889605C;
    }
L_0889605C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1800), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896084;
      }
      goto L_0889606C;
    }
L_0889606C:
    ctx.gpr[31] = (0x08896074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x08896074u) goto L_08896074;
    return;
L_08896074:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08896084u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2AA08u>(ctx, &aot_mem) && ctx.pc == 0x08896084u) goto L_08896084;
    return;
L_08896084:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 91u, 0x088984CCu>(ctx, &aot_mem); return;
      }
      goto L_0889608C;
    }
L_0889608C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(608));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x088960A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 115u, 0x088848A0u>(ctx, &aot_mem) && ctx.pc == 0x088960A0u) goto L_088960A0;
    return;
L_088960A0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x088960ACu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 124u, 0x08884970u>(ctx, &aot_mem) && ctx.pc == 0x088960ACu) goto L_088960AC;
    return;
L_088960AC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088961B4;
      }
      goto L_088960C4;
    }
L_088960C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08896110;
      }
      goto L_088960D4;
    }
L_088960D4:
    ctx.gpr[31] = (0x088960DCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 123u, 0x08884958u>(ctx, &aot_mem) && ctx.pc == 0x088960DCu) goto L_088960DC;
    return;
L_088960DC:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896110;
      }
      goto L_088960F4;
    }
L_088960F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08896100u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08896100u) goto L_08896100;
    return;
L_08896100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_08896110;
L_08896110:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8088)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08896160;
      }
      goto L_08896134;
    }
L_08896134:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7256)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896160;
      }
      goto L_08896154;
    }
L_08896154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896194;
      }
      goto L_08896160;
    }
L_08896160:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1340)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896384;
      }
      goto L_0889618C;
    }
L_0889618C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088967A4;
      }
      goto L_08896194;
    }
L_08896194:
    ctx.gpr[31] = (0x0889619Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x0889619Cu) goto L_0889619C;
    return;
L_0889619C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088961ACu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2AA08u>(ctx, &aot_mem) && ctx.pc == 0x088961ACu) goto L_088961AC;
    return;
L_088961AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 91u, 0x088984CCu>(ctx, &aot_mem); return;
      }
      goto L_088961B4;
    }
L_088961B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08896160;
      }
      goto L_088961C4;
    }
L_088961C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08896210;
      }
      goto L_088961D4;
    }
L_088961D4:
    ctx.gpr[31] = (0x088961DCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 123u, 0x08884958u>(ctx, &aot_mem) && ctx.pc == 0x088961DCu) goto L_088961DC;
    return;
L_088961DC:
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896210;
      }
      goto L_088961F4;
    }
L_088961F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08896200u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08896200u) goto L_08896200;
    return;
L_08896200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_08896210;
L_08896210:
    ctx.gpr[31] = (0x08896218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x08896218u) goto L_08896218;
    return;
L_08896218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08896228u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 719u, 0x08A2B5FCu>(ctx, &aot_mem) && ctx.pc == 0x08896228u) goto L_08896228;
    return;
L_08896228:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889637C;
      }
      goto L_08896234;
    }
L_08896234:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(292)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088962AC;
      }
      goto L_0889626C;
    }
L_0889626C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889628C;
      }
      goto L_08896278;
    }
L_08896278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088962CC;
      }
      goto L_08896284;
    }
L_08896284:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
      if (branch_taken) {
          goto L_088962E0;
      }
      goto L_0889628C;
    }
L_0889628C:
    ctx.gpr[31] = (0x08896294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x08896294u) goto L_08896294;
    return;
L_08896294:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088962A4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2AA08u>(ctx, &aot_mem) && ctx.pc == 0x088962A4u) goto L_088962A4;
    return;
L_088962A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 91u, 0x088984CCu>(ctx, &aot_mem); return;
      }
      goto L_088962AC;
    }
L_088962AC:
    ctx.gpr[31] = (0x088962B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x088962B4u) goto L_088962B4;
    return;
L_088962B4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088962C4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2AA08u>(ctx, &aot_mem) && ctx.pc == 0x088962C4u) goto L_088962C4;
    return;
L_088962C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 91u, 0x088984CCu>(ctx, &aot_mem); return;
      }
      goto L_088962CC;
    }
L_088962CC:
    ctx.gpr[31] = (0x088962D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088962D4u) goto L_088962D4;
    return;
L_088962D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889628C;
      }
      goto L_088962DC;
    }
L_088962DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    goto L_088962E0;
L_088962E0:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
        goto L_08896300;
    }
    goto L_088962E8;
L_088962E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889628C;
      }
      goto L_088962FC;
    }
L_088962FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    goto L_08896300;
L_08896300:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889631C;
      }
      goto L_08896308;
    }
L_08896308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889628C;
      }
      goto L_0889631C;
    }
L_0889631C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(685)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889635C;
      }
      goto L_08896328;
    }
L_08896328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[5] = (0u | 80u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889637C;
      }
      goto L_0889633C;
    }
L_0889633C:
    ctx.gpr[31] = (0x08896344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x08896344u) goto L_08896344;
    return;
L_08896344:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08896354u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2AA08u>(ctx, &aot_mem) && ctx.pc == 0x08896354u) goto L_08896354;
    return;
L_08896354:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 91u, 0x088984CCu>(ctx, &aot_mem); return;
      }
      goto L_0889635C;
    }
L_0889635C:
    ctx.gpr[31] = (0x08896364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x08896364u) goto L_08896364;
    return;
L_08896364:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08896374u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2AA08u>(ctx, &aot_mem) && ctx.pc == 0x08896374u) goto L_08896374;
    return;
L_08896374:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 91u, 0x088984CCu>(ctx, &aot_mem); return;
      }
      goto L_0889637C;
    }
L_0889637C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08896160;
      }
      goto L_08896384;
    }
L_08896384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088964AC;
      }
      goto L_08896394;
    }
L_08896394:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(624)));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[31] = (0x088963A8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 383u, 0x08AF9AC4u>(ctx, &aot_mem) && ctx.pc == 0x088963A8u) goto L_088963A8;
    return;
L_088963A8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896418;
      }
      goto L_088963C0;
    }
L_088963C0:
    ctx.gpr[31] = (0x088963C8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 384u, 0x08AF9AE8u>(ctx, &aot_mem) && ctx.pc == 0x088963C8u) goto L_088963C8;
    return;
L_088963C8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088963FC;
      }
      goto L_088963E0;
    }
L_088963E0:
    ctx.gpr[31] = (0x088963E8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 385u, 0x08AF9B0Cu>(ctx, &aot_mem) && ctx.pc == 0x088963E8u) goto L_088963E8;
    return;
L_088963E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08896410;
      }
      goto L_088963FC;
    }
L_088963FC:
    ctx.gpr[31] = (0x08896404u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 386u, 0x08AF9B34u>(ctx, &aot_mem) && ctx.pc == 0x08896404u) goto L_08896404;
    return;
L_08896404:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08896410;
L_08896410:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08896480;
      }
      goto L_08896418;
    }
L_08896418:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896480;
      }
      goto L_0889642C;
    }
L_0889642C:
    ctx.gpr[31] = (0x08896434u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 384u, 0x08AF9AE8u>(ctx, &aot_mem) && ctx.pc == 0x08896434u) goto L_08896434;
    return;
L_08896434:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896468;
      }
      goto L_0889644C;
    }
L_0889644C:
    ctx.gpr[31] = (0x08896454u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 385u, 0x08AF9B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08896454u) goto L_08896454;
    return;
L_08896454:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08896480;
      }
      goto L_08896468;
    }
L_08896468:
    ctx.gpr[31] = (0x08896470u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 386u, 0x08AF9B34u>(ctx, &aot_mem) && ctx.pc == 0x08896470u) goto L_08896470;
    return;
L_08896470:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08896480;
L_08896480:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(624)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16480u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_088964AC;
L_088964AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(624)));
    ctx.gpr[31] = (0x088964BCu);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 118u, 0x088848F0u>(ctx, &aot_mem) && ctx.pc == 0x088964BCu) goto L_088964BC;
    return;
L_088964BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1344)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896538;
      }
      goto L_088964D0;
    }
L_088964D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(624)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088964F0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 118u, 0x088848F0u>(ctx, &aot_mem) && ctx.pc == 0x088964F0u) goto L_088964F0;
    return;
L_088964F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1344)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896538;
      }
      goto L_08896504;
    }
L_08896504:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(624)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08896524u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 118u, 0x088848F0u>(ctx, &aot_mem) && ctx.pc == 0x08896524u) goto L_08896524;
    return;
L_08896524:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1344)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896790;
      }
      goto L_08896538;
    }
L_08896538:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889656Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 492u, 0x08AFE080u>(ctx, &aot_mem) && ctx.pc == 0x0889656Cu) goto L_0889656C;
    return;
L_0889656C:
    ctx.gpr[31] = (0x08896574u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 887u, 0x089A3C28u>(ctx, &aot_mem) && ctx.pc == 0x08896574u) goto L_08896574;
    return;
L_08896574:
    ctx.gpr[31] = (0x0889657Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x0889657Cu) goto L_0889657C;
    return;
L_0889657C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0889658Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 538u, 0x08A2AB5Cu>(ctx, &aot_mem) && ctx.pc == 0x0889658Cu) goto L_0889658C;
    return;
L_0889658C:
    ctx.gpr[31] = (0x08896594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x08896594u) goto L_08896594;
    return;
L_08896594:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088965A4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 594u, 0x08A2AE04u>(ctx, &aot_mem) && ctx.pc == 0x088965A4u) goto L_088965A4;
    return;
L_088965A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896778;
      }
      goto L_088965AC;
    }
L_088965AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08896614;
      }
      goto L_088965BC;
    }
L_088965BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088965F0;
      }
      goto L_088965CC;
    }
L_088965CC:
    ctx.gpr[31] = (0x088965D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 474u, 0x088868F4u>(ctx, &aot_mem) && ctx.pc == 0x088965D4u) goto L_088965D4;
    return;
L_088965D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088965E8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 549u, 0x089BA410u>(ctx, &aot_mem) && ctx.pc == 0x088965E8u) goto L_088965E8;
    return;
L_088965E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088967F8;
      }
      goto L_088965F0;
    }
L_088965F0:
    ctx.gpr[31] = (0x088965F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 474u, 0x088868F4u>(ctx, &aot_mem) && ctx.pc == 0x088965F8u) goto L_088965F8;
    return;
L_088965F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 21u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0889660Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 549u, 0x089BA410u>(ctx, &aot_mem) && ctx.pc == 0x0889660Cu) goto L_0889660C;
    return;
L_0889660C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088967F8;
      }
      goto L_08896614;
    }
L_08896614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08896648;
      }
      goto L_08896624;
    }
L_08896624:
    ctx.gpr[31] = (0x0889662Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 474u, 0x088868F4u>(ctx, &aot_mem) && ctx.pc == 0x0889662Cu) goto L_0889662C;
    return;
L_0889662C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08896640u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 549u, 0x089BA410u>(ctx, &aot_mem) && ctx.pc == 0x08896640u) goto L_08896640;
    return;
L_08896640:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088967F8;
      }
      goto L_08896648;
    }
L_08896648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08896674;
      }
      goto L_08896658;
    }
L_08896658:
    ctx.gpr[31] = (0x08896660u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 474u, 0x088868F4u>(ctx, &aot_mem) && ctx.pc == 0x08896660u) goto L_08896660;
    return;
L_08896660:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889666Cu);
    ctx.gpr[5] = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x0889666Cu) goto L_0889666C;
    return;
L_0889666C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088967F8;
      }
      goto L_08896674;
    }
L_08896674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08896728;
      }
      goto L_08896684;
    }
L_08896684:
    ctx.gpr[31] = (0x0889668Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 474u, 0x088868F4u>(ctx, &aot_mem) && ctx.pc == 0x0889668Cu) goto L_0889668C;
    return;
L_0889668C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(596), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889669Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x0889669Cu) goto L_0889669C;
    return;
L_0889669C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088966B8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088966B8u) goto L_088966B8;
    return;
L_088966B8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x088966C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 346u, 0x08AF98C8u>(ctx, &aot_mem) && ctx.pc == 0x088966C4u) goto L_088966C4;
    return;
L_088966C4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_088966DC;
      }
      goto L_088966D0;
    }
L_088966D0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088966DC;
L_088966DC:
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_08896704;
      }
      goto L_088966F8;
    }
L_088966F8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0889671C;
      }
      goto L_08896704;
    }
L_08896704:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_0889671C;
L_0889671C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1800), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088967F8;
      }
      goto L_08896728;
    }
L_08896728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08896750;
      }
      goto L_08896738;
    }
L_08896738:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(596), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08896748u);
    ctx.gpr[5] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x08896748u) goto L_08896748;
    return;
L_08896748:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088967F8;
      }
      goto L_08896750;
    }
L_08896750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088967F8;
      }
      goto L_08896760;
    }
L_08896760:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(596), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08896770u);
    ctx.gpr[5] = (0u | 54u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x08896770u) goto L_08896770;
    return;
L_08896770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088967F8;
      }
      goto L_08896778;
    }
L_08896778:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(596), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08896788u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x08896788u) goto L_08896788;
    return;
L_08896788:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1800), 0u);
      if (branch_taken) {
          goto L_088967F8;
      }
      goto L_08896790;
    }
L_08896790:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889679Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x0889679Cu) goto L_0889679C;
    return;
L_0889679C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088967F8;
      }
      goto L_088967A4;
    }
L_088967A4:
    ctx.gpr[31] = (0x088967ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 346u, 0x08AF98C8u>(ctx, &aot_mem) && ctx.pc == 0x088967ACu) goto L_088967AC;
    return;
L_088967AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088967CC;
      }
      goto L_088967BC;
    }
L_088967BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088967F8;
      }
      goto L_088967CC;
    }
L_088967CC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(608));
    ctx.gpr[31] = (0x088967DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 124u, 0x08884970u>(ctx, &aot_mem) && ctx.pc == 0x088967DCu) goto L_088967DC;
    return;
L_088967DC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[31] = (0x088967E8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 120u, 0x08884910u>(ctx, &aot_mem) && ctx.pc == 0x088967E8u) goto L_088967E8;
    return;
L_088967E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088967F8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 311u, 0x089A16E4u>(ctx, &aot_mem) && ctx.pc == 0x088967F8u) goto L_088967F8;
    return;
L_088967F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 91u, 0x088984CCu>(ctx, &aot_mem); return;
      }
      goto L_08896800;
    }
L_08896800:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896820;
      }
      goto L_08896808;
    }
L_08896808:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08896818u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08896818u) goto L_08896818;
    return;
L_08896818:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08896820;
    }
L_08896820:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(608));
    ctx.gpr[31] = (0x08896834u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08896834u) goto L_08896834;
    return;
L_08896834:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08896844u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 115u, 0x088848A0u>(ctx, &aot_mem) && ctx.pc == 0x08896844u) goto L_08896844;
    return;
L_08896844:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08896850u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 124u, 0x08884970u>(ctx, &aot_mem) && ctx.pc == 0x08896850u) goto L_08896850;
    return;
L_08896850:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08896860u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 123u, 0x08884958u>(ctx, &aot_mem) && ctx.pc == 0x08896860u) goto L_08896860;
    return;
L_08896860:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1340)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088969D8;
      }
      goto L_08896878;
    }
L_08896878:
    ctx.gpr[31] = (0x08896880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 346u, 0x08AF98C8u>(ctx, &aot_mem) && ctx.pc == 0x08896880u) goto L_08896880;
    return;
L_08896880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088968A0;
      }
      goto L_08896890;
    }
L_08896890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08896A00;
      }
      goto L_088968A0;
    }
L_088968A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088969B4;
      }
      goto L_088968B4;
    }
L_088968B4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088968C8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 119u, 0x088848FCu>(ctx, &aot_mem) && ctx.pc == 0x088968C8u) goto L_088968C8;
    return;
L_088968C8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    ctx.gpr[31] = (0x088968D4u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(608));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 124u, 0x08884970u>(ctx, &aot_mem) && ctx.pc == 0x088968D4u) goto L_088968D4;
    return;
L_088968D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896984;
      }
      goto L_088968E0;
    }
L_088968E0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.gpr[31] = (0x088968ECu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 120u, 0x08884910u>(ctx, &aot_mem) && ctx.pc == 0x088968ECu) goto L_088968EC;
    return;
L_088968EC:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088968FCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 475u, 0x08899D74u>(ctx, &aot_mem) && ctx.pc == 0x088968FCu) goto L_088968FC;
    return;
L_088968FC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896984;
      }
      goto L_0889690C;
    }
L_0889690C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896934;
      }
      goto L_08896914;
    }
L_08896914:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[31] = (0x08896928u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 726u, 0x08977AB8u>(ctx, &aot_mem) && ctx.pc == 0x08896928u) goto L_08896928;
    return;
L_08896928:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[31] = (0x08896934u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 124u, 0x08884970u>(ctx, &aot_mem) && ctx.pc == 0x08896934u) goto L_08896934;
    return;
L_08896934:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.gpr[31] = (0x08896940u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08896940u) goto L_08896940;
    return;
L_08896940:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[31] = (0x08896950u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 115u, 0x088848A0u>(ctx, &aot_mem) && ctx.pc == 0x08896950u) goto L_08896950;
    return;
L_08896950:
    ctx.gpr[31] = (0x08896958u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 122u, 0x0888493Cu>(ctx, &aot_mem) && ctx.pc == 0x08896958u) goto L_08896958;
    return;
L_08896958:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1340)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896984;
      }
      goto L_0889696C;
    }
L_0889696C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_08896984;
L_08896984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088969B4;
      }
      goto L_08896990;
    }
L_08896990:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[31] = (0x088969A8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 726u, 0x08977AB8u>(ctx, &aot_mem) && ctx.pc == 0x088969A8u) goto L_088969A8;
    return;
L_088969A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088969B4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 124u, 0x08884970u>(ctx, &aot_mem) && ctx.pc == 0x088969B4u) goto L_088969B4;
    return;
L_088969B4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.gpr[31] = (0x088969C0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 120u, 0x08884910u>(ctx, &aot_mem) && ctx.pc == 0x088969C0u) goto L_088969C0;
    return;
L_088969C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088969D0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 311u, 0x089A16E4u>(ctx, &aot_mem) && ctx.pc == 0x088969D0u) goto L_088969D0;
    return;
L_088969D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08896A00;
      }
      goto L_088969D8;
    }
L_088969D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088969F4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 492u, 0x08AFE080u>(ctx, &aot_mem) && ctx.pc == 0x088969F4u) goto L_088969F4;
    return;
L_088969F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08896A00u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08896A00u) goto L_08896A00;
    return;
L_08896A00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08896A08;
    }
L_08896A08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08896820;
      }
      goto L_08896A18;
    }
L_08896A18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_08896800;
      }
      goto L_08896A20;
    }
L_08896A20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088970D0;
      }
      goto L_08896A2C;
    }
L_08896A2C:
    ctx.gpr[31] = (0x08896A34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08896A34u) goto L_08896A34;
    return;
L_08896A34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896A98;
      }
      goto L_08896A3C;
    }
L_08896A3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08896A98;
      }
      goto L_08896A4C;
    }
L_08896A4C:
    ctx.gpr[31] = (0x08896A54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 477u, 0x08AFA260u>(ctx, &aot_mem) && ctx.pc == 0x08896A54u) goto L_08896A54;
    return;
L_08896A54:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08896A98;
      }
      goto L_08896A60;
    }
L_08896A60:
    ctx.gpr[31] = (0x08896A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08896A68u) goto L_08896A68;
    return;
L_08896A68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2088)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08896A98;
      }
      goto L_08896A74;
    }
L_08896A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896A98;
      }
      goto L_08896A84;
    }
L_08896A84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08896A90u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x08896A90u) goto L_08896A90;
    return;
L_08896A90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08896A98;
    }
L_08896A98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08896CB4;
      }
      goto L_08896AA8;
    }
L_08896AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896CB4;
      }
      goto L_08896AB4;
    }
L_08896AB4:
    ctx.gpr[31] = (0x08896ABCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 121u, 0x08884920u>(ctx, &aot_mem) && ctx.pc == 0x08896ABCu) goto L_08896ABC;
    return;
L_08896ABC:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896B60;
      }
      goto L_08896AD4;
    }
L_08896AD4:
    ctx.gpr[31] = (0x08896ADCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 436u, 0x08AF9F40u>(ctx, &aot_mem) && ctx.pc == 0x08896ADCu) goto L_08896ADC;
    return;
L_08896ADC:
    ctx.gpr[31] = (0x08896AE4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 123u, 0x08884958u>(ctx, &aot_mem) && ctx.pc == 0x08896AE4u) goto L_08896AE4;
    return;
L_08896AE4:
    ctx.gpr[4] = (14801u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896B60;
      }
      goto L_08896B00;
    }
L_08896B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896B38;
      }
      goto L_08896B10;
    }
L_08896B10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896CAC;
      }
      goto L_08896B20;
    }
L_08896B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x08896B30u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 12u, 0x088A00D8u>(ctx, &aot_mem) && ctx.pc == 0x08896B30u) goto L_08896B30;
    return;
L_08896B30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896CAC;
      }
      goto L_08896B38;
    }
L_08896B38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08896B58u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08896B58u) goto L_08896B58;
    return;
L_08896B58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08896CAC;
      }
      goto L_08896B60;
    }
L_08896B60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (ctx.gpr[4] != ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
        goto L_08896B84;
    }
    goto L_08896B70;
L_08896B70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(398))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896B94;
      }
      goto L_08896B80;
    }
L_08896B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    goto L_08896B84;
L_08896B84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08896CAC;
      }
      goto L_08896B94;
    }
L_08896B94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(542)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896CAC;
      }
      goto L_08896BA4;
    }
L_08896BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x08896BB0u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 417u, 0x08AF9DC0u>(ctx, &aot_mem) && ctx.pc == 0x08896BB0u) goto L_08896BB0;
    return;
L_08896BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(360), 0u);
    ctx.gpr[31] = (0x08896BC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 477u, 0x08AFA260u>(ctx, &aot_mem) && ctx.pc == 0x08896BC0u) goto L_08896BC0;
    return;
L_08896BC0:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08896C60;
      }
      goto L_08896BCC;
    }
L_08896BCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2096)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08896C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 299u, 0x0891D928u>(ctx, &aot_mem) && ctx.pc == 0x08896C54u) goto L_08896C54;
    return;
L_08896C54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08896CA0;
      }
      goto L_08896C60;
    }
L_08896C60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16204u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08896CA0;
L_08896CA0:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08896CAC;
L_08896CAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08896CB4;
    }
L_08896CB4:
    ctx.gpr[31] = (0x08896CBCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 121u, 0x08884920u>(ctx, &aot_mem) && ctx.pc == 0x08896CBCu) goto L_08896CBC;
    return;
L_08896CBC:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088970E8;
      }
      goto L_08896CD4;
    }
L_08896CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088970E8;
      }
      goto L_08896CE4;
    }
L_08896CE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088970B0;
      }
      goto L_08896CF0;
    }
L_08896CF0:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08896D00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08896D00u) goto L_08896D00;
    return;
L_08896D00:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.gpr[31] = (0x08896D0Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 120u, 0x08884910u>(ctx, &aot_mem) && ctx.pc == 0x08896D0Cu) goto L_08896D0C;
    return;
L_08896D0C:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08896D44u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 158u, 0x088C0F80u>(ctx, &aot_mem) && ctx.pc == 0x08896D44u) goto L_08896D44;
    return;
L_08896D44:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(736))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896E20;
      }
      goto L_08896D5C;
    }
L_08896D5C:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    ctx.gpr[31] = (0x08896D78u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08896D78u) goto L_08896D78;
    return;
L_08896D78:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08896D84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08896D84u) goto L_08896D84;
    return;
L_08896D84:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08896D94u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 115u, 0x088848A0u>(ctx, &aot_mem) && ctx.pc == 0x08896D94u) goto L_08896D94;
    return;
L_08896D94:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08896DA0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 124u, 0x08884970u>(ctx, &aot_mem) && ctx.pc == 0x08896DA0u) goto L_08896DA0;
    return;
L_08896DA0:
    ctx.gpr[31] = (0x08896DA8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 121u, 0x08884920u>(ctx, &aot_mem) && ctx.pc == 0x08896DA8u) goto L_08896DA8;
    return;
L_08896DA8:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896E04;
      }
      goto L_08896DB8;
    }
L_08896DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08896E04;
      }
      goto L_08896DC8;
    }
L_08896DC8:
    ctx.gpr[31] = (0x08896DD0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 859u, 0x0889FEC0u>(ctx, &aot_mem) && ctx.pc == 0x08896DD0u) goto L_08896DD0;
    return;
L_08896DD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896E04;
      }
      goto L_08896DD8;
    }
L_08896DD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08896E04;
      }
      goto L_08896DF4;
    }
L_08896DF4:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08896E00u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 121u, 0x08884920u>(ctx, &aot_mem) && ctx.pc == 0x08896E00u) goto L_08896E00;
    return;
L_08896E00:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08896E04;
L_08896E04:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(736))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08896D5C;
      }
      goto L_08896E20;
    }
L_08896E20:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896E58;
      }
      goto L_08896E2C;
    }
L_08896E2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x08896E38u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1332));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08896E38u) goto L_08896E38;
    return;
L_08896E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08896E50u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08896E50u) goto L_08896E50;
    return;
L_08896E50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088970A8;
      }
      goto L_08896E58;
    }
L_08896E58:
    ctx.gpr[31] = (0x08896E60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F7ACu>(ctx, &aot_mem) && ctx.pc == 0x08896E60u) goto L_08896E60;
    return;
L_08896E60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088970A8;
      }
      goto L_08896E68;
    }
L_08896E68:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    ctx.gpr[31] = (0x08896E74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08896E74u) goto L_08896E74;
    return;
L_08896E74:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08896E80u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 120u, 0x08884910u>(ctx, &aot_mem) && ctx.pc == 0x08896E80u) goto L_08896E80;
    return;
L_08896E80:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    ctx.gpr[31] = (0x08896E94u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 120u, 0x08884910u>(ctx, &aot_mem) && ctx.pc == 0x08896E94u) goto L_08896E94;
    return;
L_08896E94:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08896EBCu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 376u, 0x089757BCu>(ctx, &aot_mem) && ctx.pc == 0x08896EBCu) goto L_08896EBC;
    return;
L_08896EBC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_088970A8;
      }
      goto L_08896EC8;
    }
L_08896EC8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    ctx.gpr[31] = (0x08896EF0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 844u, 0x08AFBA98u>(ctx, &aot_mem) && ctx.pc == 0x08896EF0u) goto L_08896EF0;
    return;
L_08896EF0:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(788));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08896F24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 270u, 0x088C1B24u>(ctx, &aot_mem) && ctx.pc == 0x08896F24u) goto L_08896F24;
    return;
L_08896F24:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(788))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088970A8;
      }
      goto L_08896F30;
    }
L_08896F30:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.gpr[31] = (0x08896F48u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 391u, 0x088724E0u>(ctx, &aot_mem) && ctx.pc == 0x08896F48u) goto L_08896F48;
    return;
L_08896F48:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    ctx.gpr[31] = (0x08896F54u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 324u, 0x089EA2B8u>(ctx, &aot_mem) && ctx.pc == 0x08896F54u) goto L_08896F54;
    return;
L_08896F54:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08896FD0;
      }
      goto L_08896F68;
    }
L_08896F68:
    ctx.gpr[31] = (0x08896F70u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 148u, 0x08A28F64u>(ctx, &aot_mem) && ctx.pc == 0x08896F70u) goto L_08896F70;
    return;
L_08896F70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08896FA8;
      }
      goto L_08896F78;
    }
L_08896F78:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08896F84u);
    ctx.gpr[4] = (0u | 1472u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x08896F84u) goto L_08896F84;
    return;
L_08896F84:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08896FA0;
      }
      goto L_08896F90;
    }
L_08896F90:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08896F9Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 577u, 0x08A379F0u>(ctx, &aot_mem) && ctx.pc == 0x08896F9Cu) goto L_08896F9C;
    return;
L_08896F9C:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08896FA0;
L_08896FA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08896FD0;
      }
      goto L_08896FA8;
    }
L_08896FA8:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08896FB4u);
    ctx.gpr[4] = (0u | 1760u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x08896FB4u) goto L_08896FB4;
    return;
L_08896FB4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08896FD0;
      }
      goto L_08896FC0;
    }
L_08896FC0:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08896FCCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 357u, 0x0880E120u>(ctx, &aot_mem) && ctx.pc == 0x08896FCCu) goto L_08896FCC;
    return;
L_08896FCC:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08896FD0;
L_08896FD0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088970A8;
      }
      goto L_08896FD8;
    }
L_08896FD8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    ctx.gpr[31] = (0x08897000u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 498u, 0x08AFE144u>(ctx, &aot_mem) && ctx.pc == 0x08897000u) goto L_08897000;
    return;
L_08897000:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(928));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08897020u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 119u, 0x088848FCu>(ctx, &aot_mem) && ctx.pc == 0x08897020u) goto L_08897020;
    return;
L_08897020:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08897030u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 114u, 0x08884888u>(ctx, &aot_mem) && ctx.pc == 0x08897030u) goto L_08897030;
    return;
L_08897030:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0889703Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 398u, 0x08AF9C50u>(ctx, &aot_mem) && ctx.pc == 0x0889703Cu) goto L_0889703C;
    return;
L_0889703C:
    ctx.gpr[4] = (16479u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08897058u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 126u, 0x0888499Cu>(ctx, &aot_mem) && ctx.pc == 0x08897058u) goto L_08897058;
    return;
L_08897058:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08897064u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 417u, 0x08AF9DC0u>(ctx, &aot_mem) && ctx.pc == 0x08897064u) goto L_08897064;
    return;
L_08897064:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08897070u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 500u, 0x08AFE168u>(ctx, &aot_mem) && ctx.pc == 0x08897070u) goto L_08897070;
    return;
L_08897070:
    ctx.gpr[31] = (0x08897078u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08897078u) goto L_08897078;
    return;
L_08897078:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088970A8;
      }
      goto L_08897084;
    }
L_08897084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x08897090u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1332));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08897090u) goto L_08897090;
    return;
L_08897090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088970A8u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x088970A8u) goto L_088970A8;
    return;
L_088970A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088970C8;
      }
      goto L_088970B0;
    }
L_088970B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088970C8u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x088970C8u) goto L_088970C8;
    return;
L_088970C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_088970D0;
    }
L_088970D0:
    ctx.gpr[31] = (0x088970D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 92u, 0x089A0714u>(ctx, &aot_mem) && ctx.pc == 0x088970D8u) goto L_088970D8;
    return;
L_088970D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_088970E8;
L_088970E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889712C;
      }
      goto L_088970F8;
    }
L_088970F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889712C;
      }
      goto L_08897108;
    }
L_08897108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889712C;
      }
      goto L_08897114;
    }
L_08897114:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897124u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08897124u) goto L_08897124;
    return;
L_08897124:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_0889712C;
    }
L_0889712C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897160;
      }
      goto L_08897138;
    }
L_08897138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08897160;
      }
      goto L_0889714C;
    }
L_0889714C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08897198;
      }
      goto L_08897160;
    }
L_08897160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x08897178u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 92u, 0x089A0714u>(ctx, &aot_mem) && ctx.pc == 0x08897178u) goto L_08897178;
    return;
L_08897178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08897190u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08897190u) goto L_08897190;
    return;
L_08897190:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08897198;
    }
L_08897198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897224;
      }
      goto L_088971A4;
    }
L_088971A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088971C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850DACu>(ctx, &aot_mem) && ctx.pc == 0x088971C0u) goto L_088971C0;
    return;
L_088971C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088971E4;
      }
      goto L_088971C8;
    }
L_088971C8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x088971DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 291u, 0x0889D7CCu>(ctx, &aot_mem) && ctx.pc == 0x088971DCu) goto L_088971DC;
    return;
L_088971DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088971FC;
      }
      goto L_088971E4;
    }
L_088971E4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x088971F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 40u, 0x0889C4E4u>(ctx, &aot_mem) && ctx.pc == 0x088971F8u) goto L_088971F8;
    return;
L_088971F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088971FC;
L_088971FC:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889721C;
      }
      goto L_08897208;
    }
L_08897208:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08897224;
      }
      goto L_08897214;
    }
L_08897214:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_0889721C;
    }
L_0889721C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 91u, 0x088984CCu>(ctx, &aot_mem); return;
      }
      goto L_08897224;
    }
L_08897224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889723Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889723Cu) goto L_0889723C;
    return;
L_0889723C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08897244;
    }
L_08897244:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897250u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 275u, 0x0899DBE8u>(ctx, &aot_mem) && ctx.pc == 0x08897250u) goto L_08897250;
    return;
L_08897250:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088972F8;
      }
      goto L_0889725C;
    }
L_0889725C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088972E0;
      }
      goto L_08897268;
    }
L_08897268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088972E0;
      }
      goto L_0889727C;
    }
L_0889727C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x08897294u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 474u, 0x088868F4u>(ctx, &aot_mem) && ctx.pc == 0x08897294u) goto L_08897294;
    return;
L_08897294:
    ctx.gpr[31] = (0x0889729Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 218u, 0x089ED5ACu>(ctx, &aot_mem) && ctx.pc == 0x0889729Cu) goto L_0889729C;
    return;
L_0889729C:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x088972D8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 417u, 0x08AF9DC0u>(ctx, &aot_mem) && ctx.pc == 0x088972D8u) goto L_088972D8;
    return;
L_088972D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889749C;
      }
      goto L_088972E0;
    }
L_088972E0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088972F0u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x088972F0u) goto L_088972F0;
    return;
L_088972F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_088972F8;
    }
L_088972F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897368;
      }
      goto L_08897304;
    }
L_08897304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08897368;
      }
      goto L_08897318;
    }
L_08897318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08897368;
      }
      goto L_0889732C;
    }
L_0889732C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088973BC;
      }
      goto L_08897338;
    }
L_08897338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088973BC;
      }
      goto L_08897348;
    }
L_08897348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088973BC;
      }
      goto L_0889735C;
    }
L_0889735C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088973BC;
      }
      goto L_08897368;
    }
L_08897368:
    ctx.gpr[31] = (0x08897370u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 92u, 0x089A0714u>(ctx, &aot_mem) && ctx.pc == 0x08897370u) goto L_08897370;
    return;
L_08897370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08897388u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08897388u) goto L_08897388;
    return;
L_08897388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088973B4;
      }
      goto L_08897394;
    }
L_08897394:
    ctx.gpr[31] = (0x0889739Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 412u, 0x08AF9D68u>(ctx, &aot_mem) && ctx.pc == 0x0889739Cu) goto L_0889739C;
    return;
L_0889739C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088973B4;
      }
      goto L_088973A4;
    }
L_088973A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088973B4u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x088973B4u) goto L_088973B4;
    return;
L_088973B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_088973BC;
    }
L_088973BC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088973FC;
      }
      goto L_088973CC;
    }
L_088973CC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[31] = (0x088973D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 495u, 0x08AFA354u>(ctx, &aot_mem) && ctx.pc == 0x088973D8u) goto L_088973D8;
    return;
L_088973D8:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088973FC;
      }
      goto L_088973E4;
    }
L_088973E4:
    ctx.gpr[31] = (0x088973ECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 458u, 0x08AFA16Cu>(ctx, &aot_mem) && ctx.pc == 0x088973ECu) goto L_088973EC;
    return;
L_088973EC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088973FC;
      }
      goto L_088973F8;
    }
L_088973F8:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_088973FC;
L_088973FC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897468;
      }
      goto L_08897404;
    }
L_08897404:
    ctx.gpr[31] = (0x0889740Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x0889740Cu) goto L_0889740C;
    return;
L_0889740C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08897418u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08897418u) goto L_08897418;
    return;
L_08897418:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08897434u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 117u, 0x088848D4u>(ctx, &aot_mem) && ctx.pc == 0x08897434u) goto L_08897434;
    return;
L_08897434:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08897444u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 115u, 0x088848A0u>(ctx, &aot_mem) && ctx.pc == 0x08897444u) goto L_08897444;
    return;
L_08897444:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[31] = (0x08897450u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 120u, 0x08884910u>(ctx, &aot_mem) && ctx.pc == 0x08897450u) goto L_08897450;
    return;
L_08897450:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[31] = (0x08897460u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1049u, 0x08893758u>(ctx, &aot_mem) && ctx.pc == 0x08897460u) goto L_08897460;
    return;
L_08897460:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897484;
      }
      goto L_08897468;
    }
L_08897468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897484;
      }
      goto L_08897474;
    }
L_08897474:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897484u);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08897484u) goto L_08897484;
    return;
L_08897484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889749Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889749Cu) goto L_0889749C;
    return;
L_0889749C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_088974A4;
    }
L_088974A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889781C;
      }
      goto L_088974B0;
    }
L_088974B0:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088974D0;
      }
      goto L_088974C8;
    }
L_088974C8:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088974D0;
L_088974D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088974E8;
      }
      goto L_088974E0;
    }
L_088974E0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088974E8;
L_088974E8:
    ctx.gpr[31] = (0x088974F0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 121u, 0x08884920u>(ctx, &aot_mem) && ctx.pc == 0x088974F0u) goto L_088974F0;
    return;
L_088974F0:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x088974FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 346u, 0x08AF98C8u>(ctx, &aot_mem) && ctx.pc == 0x088974FCu) goto L_088974FC;
    return;
L_088974FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897814;
      }
      goto L_0889750C;
    }
L_0889750C:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08897690;
      }
      goto L_0889751C;
    }
L_0889751C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889752Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 336u, 0x089A1828u>(ctx, &aot_mem) && ctx.pc == 0x0889752Cu) goto L_0889752C;
    return;
L_0889752C:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08897648;
      }
      goto L_08897544;
    }
L_08897544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897608;
      }
      goto L_08897550;
    }
L_08897550:
    ctx.gpr[31] = (0x08897558u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 818u, 0x08AFB8C0u>(ctx, &aot_mem) && ctx.pc == 0x08897558u) goto L_08897558;
    return;
L_08897558:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08897608;
      }
      goto L_08897564;
    }
L_08897564:
    ctx.gpr[31] = (0x0889756Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 818u, 0x08AFB8C0u>(ctx, &aot_mem) && ctx.pc == 0x0889756Cu) goto L_0889756C;
    return;
L_0889756C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897608;
      }
      goto L_08897574;
    }
L_08897574:
    ctx.gpr[31] = (0x0889757Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0889757Cu) goto L_0889757C;
    return;
L_0889757C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088975EC;
      }
      goto L_08897584;
    }
L_08897584:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088975C4;
      }
      goto L_0889759C;
    }
L_0889759C:
    ctx.gpr[31] = (0x088975A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088975A4u) goto L_088975A4;
    return;
L_088975A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088975D8;
      }
      goto L_088975C4;
    }
L_088975C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088975D0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x088975D0u) goto L_088975D0;
    return;
L_088975D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088977E4;
      }
      goto L_088975D8;
    }
L_088975D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088975E4u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x088975E4u) goto L_088975E4;
    return;
L_088975E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088977E4;
      }
      goto L_088975EC;
    }
L_088975EC:
    ctx.gpr[31] = (0x088975F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 818u, 0x08AFB8C0u>(ctx, &aot_mem) && ctx.pc == 0x088975F4u) goto L_088975F4;
    return;
L_088975F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897600u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08897600u) goto L_08897600;
    return;
L_08897600:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088977E4;
      }
      goto L_08897608;
    }
L_08897608:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08897634;
      }
      goto L_08897620;
    }
L_08897620:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889762Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x0889762Cu) goto L_0889762C;
    return;
L_0889762C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088977E4;
      }
      goto L_08897634;
    }
L_08897634:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897640u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08897640u) goto L_08897640;
    return;
L_08897640:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088977E4;
      }
      goto L_08897648;
    }
L_08897648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889767C;
      }
      goto L_08897654;
    }
L_08897654:
    ctx.gpr[31] = (0x0889765Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 818u, 0x08AFB8C0u>(ctx, &aot_mem) && ctx.pc == 0x0889765Cu) goto L_0889765C;
    return;
L_0889765C:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889767C;
      }
      goto L_08897668;
    }
L_08897668:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897674u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08897674u) goto L_08897674;
    return;
L_08897674:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088977E4;
      }
      goto L_0889767C;
    }
L_0889767C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897688u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08897688u) goto L_08897688;
    return;
L_08897688:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088977E4;
      }
      goto L_08897690;
    }
L_08897690:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889769Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 492u, 0x08AFE080u>(ctx, &aot_mem) && ctx.pc == 0x0889769Cu) goto L_0889769C;
    return;
L_0889769C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088976E4;
      }
      goto L_088976AC;
    }
L_088976AC:
    ctx.gpr[31] = (0x088976B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x088976B4u) goto L_088976B4;
    return;
L_088976B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088976CC;
      }
      goto L_088976C0;
    }
L_088976C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[31] = (0x088976CCu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1760));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x088976CCu) goto L_088976CC;
    return;
L_088976CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1760), ctx.gpr[4]);
    ctx.gpr[31] = (0x088976DCu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1760));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x088976DCu) goto L_088976DC;
    return;
L_088976DC:
    ctx.gpr[31] = (0x088976E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 2u, 0x089A000Cu>(ctx, &aot_mem) && ctx.pc == 0x088976E4u) goto L_088976E4;
    return;
L_088976E4:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08897710;
      }
      goto L_088976FC;
    }
L_088976FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897708u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08897708u) goto L_08897708;
    return;
L_08897708:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897724;
      }
      goto L_08897710;
    }
L_08897710:
    ctx.gpr[31] = (0x08897718u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 818u, 0x08AFB8C0u>(ctx, &aot_mem) && ctx.pc == 0x08897718u) goto L_08897718;
    return;
L_08897718:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897724u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08897724u) goto L_08897724;
    return;
L_08897724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088977E4;
      }
      goto L_08897734;
    }
L_08897734:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897740u);
    ctx.gpr[5] = (0u | 134u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x08897740u) goto L_08897740;
    return;
L_08897740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[31] = (0x0889774Cu);
    ctx.gpr[5] = (0u | 126u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x0889774Cu) goto L_0889774C;
    return;
L_0889774C:
    ctx.gpr[31] = (0x08897754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 346u, 0x08AF98C8u>(ctx, &aot_mem) && ctx.pc == 0x08897754u) goto L_08897754;
    return;
L_08897754:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1772), ctx.gpr[4]);
    ctx.gpr[31] = (0x08897764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 346u, 0x08AF98C8u>(ctx, &aot_mem) && ctx.pc == 0x08897764u) goto L_08897764;
    return;
L_08897764:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(3000));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1772), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889777Cu);
    ctx.gpr[5] = (0u | 47u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x0889777Cu) goto L_0889777C;
    return;
L_0889777C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[31] = (0x08897788u);
    ctx.gpr[5] = (0u | 47u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x08897788u) goto L_08897788;
    return;
L_08897788:
    ctx.gpr[31] = (0x08897790u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08897790u) goto L_08897790;
    return;
L_08897790:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0889779Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x0889779Cu) goto L_0889779C;
    return;
L_0889779C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[31] = (0x088977ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x088977ACu) goto L_088977AC;
    return;
L_088977AC:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088977B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x088977B8u) goto L_088977B8;
    return;
L_088977B8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088977CCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 250u, 0x08A1D3E8u>(ctx, &aot_mem) && ctx.pc == 0x088977CCu) goto L_088977CC;
    return;
L_088977CC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.gpr[31] = (0x088977DCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 250u, 0x08A1D3E8u>(ctx, &aot_mem) && ctx.pc == 0x088977DCu) goto L_088977DC;
    return;
L_088977DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_088977E4;
L_088977E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08897814;
      }
      goto L_088977F4;
    }
L_088977F4:
    ctx.gpr[31] = (0x088977FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 818u, 0x08AFB8C0u>(ctx, &aot_mem) && ctx.pc == 0x088977FCu) goto L_088977FC;
    return;
L_088977FC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897814;
      }
      goto L_08897808;
    }
L_08897808:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897814u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08897814u) goto L_08897814;
    return;
L_08897814:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897828;
      }
      goto L_0889781C;
    }
L_0889781C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897828u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x08897828u) goto L_08897828;
    return;
L_08897828:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08897830;
    }
L_08897830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889794C;
      }
      goto L_0889783C;
    }
L_0889783C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897850u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 609u, 0x088871B0u>(ctx, &aot_mem) && ctx.pc == 0x08897850u) goto L_08897850;
    return;
L_08897850:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889785Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 124u, 0x08884970u>(ctx, &aot_mem) && ctx.pc == 0x0889785Cu) goto L_0889785C;
    return;
L_0889785C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08897870u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 115u, 0x088848A0u>(ctx, &aot_mem) && ctx.pc == 0x08897870u) goto L_08897870;
    return;
L_08897870:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0889787Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 124u, 0x08884970u>(ctx, &aot_mem) && ctx.pc == 0x0889787Cu) goto L_0889787C;
    return;
L_0889787C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08897888u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 120u, 0x08884910u>(ctx, &aot_mem) && ctx.pc == 0x08897888u) goto L_08897888;
    return;
L_08897888:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889789Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 311u, 0x089A16E4u>(ctx, &aot_mem) && ctx.pc == 0x0889789Cu) goto L_0889789C;
    return;
L_0889789C:
    ctx.gpr[31] = (0x088978A4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 121u, 0x08884920u>(ctx, &aot_mem) && ctx.pc == 0x088978A4u) goto L_088978A4;
    return;
L_088978A4:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088978F0;
      }
      goto L_088978BC;
    }
L_088978BC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[31] = (0x088978C8u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 120u, 0x08884910u>(ctx, &aot_mem) && ctx.pc == 0x088978C8u) goto L_088978C8;
    return;
L_088978C8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088978DCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 311u, 0x089A16E4u>(ctx, &aot_mem) && ctx.pc == 0x088978DCu) goto L_088978DC;
    return;
L_088978DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088978E8u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x088978E8u) goto L_088978E8;
    return;
L_088978E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897944;
      }
      goto L_088978F0;
    }
L_088978F0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[31] = (0x088978FCu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 120u, 0x08884910u>(ctx, &aot_mem) && ctx.pc == 0x088978FCu) goto L_088978FC;
    return;
L_088978FC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897910u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 311u, 0x089A16E4u>(ctx, &aot_mem) && ctx.pc == 0x08897910u) goto L_08897910;
    return;
L_08897910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897944;
      }
      goto L_0889791C;
    }
L_0889791C:
    ctx.gpr[31] = (0x08897924u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 818u, 0x08AFB8C0u>(ctx, &aot_mem) && ctx.pc == 0x08897924u) goto L_08897924;
    return;
L_08897924:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08897944;
      }
      goto L_08897930;
    }
L_08897930:
    ctx.gpr[31] = (0x08897938u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 818u, 0x08AFB8C0u>(ctx, &aot_mem) && ctx.pc == 0x08897938u) goto L_08897938;
    return;
L_08897938:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897944u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08897944u) goto L_08897944;
    return;
L_08897944:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897958;
      }
      goto L_0889794C;
    }
L_0889794C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897958u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x08897958u) goto L_08897958;
    return;
L_08897958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08897960;
    }
L_08897960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897CF0;
      }
      goto L_0889796C;
    }
L_0889796C:
    ctx.gpr[31] = (0x08897974u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 121u, 0x08884920u>(ctx, &aot_mem) && ctx.pc == 0x08897974u) goto L_08897974;
    return;
L_08897974:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08897980u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 823u, 0x08AFB920u>(ctx, &aot_mem) && ctx.pc == 0x08897980u) goto L_08897980;
    return;
L_08897980:
    ctx.gpr[31] = (0x08897988u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 822u, 0x08AFB918u>(ctx, &aot_mem) && ctx.pc == 0x08897988u) goto L_08897988;
    return;
L_08897988:
    ctx.gpr[31] = (0x08897990u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08897990u) goto L_08897990;
    return;
L_08897990:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0889799Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 821u, 0x08AFB910u>(ctx, &aot_mem) && ctx.pc == 0x0889799Cu) goto L_0889799C;
    return;
L_0889799C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1760), ctx.gpr[4]);
    ctx.gpr[31] = (0x088979B0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1760));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x088979B0u) goto L_088979B0;
    return;
L_088979B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1328), ctx.gpr[4]);
    ctx.gpr[31] = (0x088979C0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1328));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x088979C0u) goto L_088979C0;
    return;
L_088979C0:
    ctx.gpr[31] = (0x088979C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 2u, 0x089A000Cu>(ctx, &aot_mem) && ctx.pc == 0x088979C8u) goto L_088979C8;
    return;
L_088979C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(616)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08897A00;
      }
      goto L_088979E4;
    }
L_088979E4:
    ctx.gpr[31] = (0x088979ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 92u, 0x089A0714u>(ctx, &aot_mem) && ctx.pc == 0x088979ECu) goto L_088979EC;
    return;
L_088979EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088979F8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 492u, 0x08AFE080u>(ctx, &aot_mem) && ctx.pc == 0x088979F8u) goto L_088979F8;
    return;
L_088979F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897CE8;
      }
      goto L_08897A00;
    }
L_08897A00:
    ctx.gpr[31] = (0x08897A08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 346u, 0x08AF98C8u>(ctx, &aot_mem) && ctx.pc == 0x08897A08u) goto L_08897A08;
    return;
L_08897A08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897BC4;
      }
      goto L_08897A18;
    }
L_08897A18:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08897BC4;
      }
      goto L_08897A28;
    }
L_08897A28:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08897A50u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 119u, 0x088848FCu>(ctx, &aot_mem) && ctx.pc == 0x08897A50u) goto L_08897A50;
    return;
L_08897A50:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[31] = (0x08897A5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 397u, 0x08AF9C48u>(ctx, &aot_mem) && ctx.pc == 0x08897A5Cu) goto L_08897A5C;
    return;
L_08897A5C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08897A6Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 113u, 0x08884860u>(ctx, &aot_mem) && ctx.pc == 0x08897A6Cu) goto L_08897A6C;
    return;
L_08897A6C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08897A78u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 124u, 0x08884970u>(ctx, &aot_mem) && ctx.pc == 0x08897A78u) goto L_08897A78;
    return;
L_08897A78:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.gpr[31] = (0x08897A84u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08897A84u) goto L_08897A84;
    return;
L_08897A84:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08897A90u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 124u, 0x08884970u>(ctx, &aot_mem) && ctx.pc == 0x08897A90u) goto L_08897A90;
    return;
L_08897A90:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08897A9Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x08897A9Cu) goto L_08897A9C;
    return;
L_08897A9C:
    ctx.gpr[31] = (0x08897AA4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 821u, 0x08AFB910u>(ctx, &aot_mem) && ctx.pc == 0x08897AA4u) goto L_08897AA4;
    return;
L_08897AA4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08897AB0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 121u, 0x08884920u>(ctx, &aot_mem) && ctx.pc == 0x08897AB0u) goto L_08897AB0;
    return;
L_08897AB0:
    ctx.fpr[12] = ctx.fpr[22] / ctx.fpr[0];
    ctx.gpr[31] = (0x08897ABCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 125u, 0x08884980u>(ctx, &aot_mem) && ctx.pc == 0x08897ABCu) goto L_08897ABC;
    return;
L_08897ABC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08897AC8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08897AC8u) goto L_08897AC8;
    return;
L_08897AC8:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[17] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-7399), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08897B0Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 489u, 0x088C697Cu>(ctx, &aot_mem) && ctx.pc == 0x08897B0Cu) goto L_08897B0C;
    return;
L_08897B0C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-7399), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08897BBC;
      }
      goto L_08897B20;
    }
L_08897B20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[31] = (0x08897B2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 228u, 0x088D91E4u>(ctx, &aot_mem) && ctx.pc == 0x08897B2Cu) goto L_08897B2C;
    return;
L_08897B2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[31] = (0x08897B38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 516u, 0x0899EDBCu>(ctx, &aot_mem) && ctx.pc == 0x08897B38u) goto L_08897B38;
    return;
L_08897B38:
    ctx.gpr[4] = (0u | 500u);
    ctx.gpr[31] = (0x08897B44u);
    ctx.gpr[5] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 556u, 0x08886CBCu>(ctx, &aot_mem) && ctx.pc == 0x08897B44u) goto L_08897B44;
    return;
L_08897B44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897B50u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 262u, 0x089A12E4u>(ctx, &aot_mem) && ctx.pc == 0x08897B50u) goto L_08897B50;
    return;
L_08897B50:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08897B98;
      }
      goto L_08897B68;
    }
L_08897B68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897B98;
      }
      goto L_08897B78;
    }
L_08897B78:
    ctx.gpr[4] = (0u | 2000u);
    ctx.gpr[31] = (0x08897B84u);
    ctx.gpr[5] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 556u, 0x08886CBCu>(ctx, &aot_mem) && ctx.pc == 0x08897B84u) goto L_08897B84;
    return;
L_08897B84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897B90u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 247u, 0x089A11A4u>(ctx, &aot_mem) && ctx.pc == 0x08897B90u) goto L_08897B90;
    return;
L_08897B90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897BBC;
      }
      goto L_08897B98;
    }
L_08897B98:
    ctx.gpr[4] = (0u | 50u);
    ctx.gpr[31] = (0x08897BA4u);
    ctx.gpr[5] = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 556u, 0x08886CBCu>(ctx, &aot_mem) && ctx.pc == 0x08897BA4u) goto L_08897BA4;
    return;
L_08897BA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897BB0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 247u, 0x089A11A4u>(ctx, &aot_mem) && ctx.pc == 0x08897BB0u) goto L_08897BB0;
    return;
L_08897BB0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897BBCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08897BBCu) goto L_08897BBC;
    return;
L_08897BBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897CCC;
      }
      goto L_08897BC4;
    }
L_08897BC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08897CCC;
      }
      goto L_08897BD4;
    }
L_08897BD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897CCC;
      }
      goto L_08897BE4;
    }
L_08897BE4:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08897C28;
      }
      goto L_08897BFC;
    }
L_08897BFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08897C14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 336u, 0x089A1828u>(ctx, &aot_mem) && ctx.pc == 0x08897C14u) goto L_08897C14;
    return;
L_08897C14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897C20u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08897C20u) goto L_08897C20;
    return;
L_08897C20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897CCC;
      }
      goto L_08897C28;
    }
L_08897C28:
    ctx.gpr[31] = (0x08897C30u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 379u, 0x08AF9A74u>(ctx, &aot_mem) && ctx.pc == 0x08897C30u) goto L_08897C30;
    return;
L_08897C30:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08897C9C;
      }
      goto L_08897C40;
    }
L_08897C40:
    ctx.gpr[31] = (0x08897C48u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 379u, 0x08AF9A74u>(ctx, &aot_mem) && ctx.pc == 0x08897C48u) goto L_08897C48;
    return;
L_08897C48:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08897C9C;
      }
      goto L_08897C58;
    }
L_08897C58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08897CC4;
      }
      goto L_08897C74;
    }
L_08897C74:
    ctx.gpr[31] = (0x08897C7Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08897C7Cu) goto L_08897C7C;
    return;
L_08897C7C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15564)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15560)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08897C94u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 524u, 0x08AF6874u>(ctx, &aot_mem) && ctx.pc == 0x08897C94u) goto L_08897C94;
    return;
L_08897C94:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08897CC4;
      }
      goto L_08897C9C;
    }
L_08897C9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08897CB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 336u, 0x089A1828u>(ctx, &aot_mem) && ctx.pc == 0x08897CB0u) goto L_08897CB0;
    return;
L_08897CB0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897CBCu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08897CBCu) goto L_08897CBC;
    return;
L_08897CBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897CCC;
      }
      goto L_08897CC4;
    }
L_08897CC4:
    ctx.gpr[31] = (0x08897CCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x08897CCCu) goto L_08897CCC;
    return;
L_08897CCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08897CE0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x08897CE0u) goto L_08897CE0;
    return;
L_08897CE0:
    ctx.gpr[31] = (0x08897CE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 2u, 0x089A000Cu>(ctx, &aot_mem) && ctx.pc == 0x08897CE8u) goto L_08897CE8;
    return;
L_08897CE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897D08;
      }
      goto L_08897CF0;
    }
L_08897CF0:
    ctx.gpr[31] = (0x08897CF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 92u, 0x089A0714u>(ctx, &aot_mem) && ctx.pc == 0x08897CF8u) goto L_08897CF8;
    return;
L_08897CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_08897D08;
L_08897D08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08897D10;
    }
L_08897D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897E54;
      }
      goto L_08897D1C;
    }
L_08897D1C:
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08897D2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08897D2Cu) goto L_08897D2C;
    return;
L_08897D2C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.gpr[31] = (0x08897D38u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 120u, 0x08884910u>(ctx, &aot_mem) && ctx.pc == 0x08897D38u) goto L_08897D38;
    return;
L_08897D38:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1232));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08897D70u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 158u, 0x088C0F80u>(ctx, &aot_mem) && ctx.pc == 0x08897D70u) goto L_08897D70;
    return;
L_08897D70:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(1232))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897E34;
      }
      goto L_08897D88;
    }
L_08897D88:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[31] = (0x08897D9Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 458u, 0x08AFA16Cu>(ctx, &aot_mem) && ctx.pc == 0x08897D9Cu) goto L_08897D9C;
    return;
L_08897D9C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08897E18;
      }
      goto L_08897DA8;
    }
L_08897DA8:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1248));
    ctx.gpr[31] = (0x08897DB8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08897DB8u) goto L_08897DB8;
    return;
L_08897DB8:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08897DC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08897DC4u) goto L_08897DC4;
    return;
L_08897DC4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08897DD4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 115u, 0x088848A0u>(ctx, &aot_mem) && ctx.pc == 0x08897DD4u) goto L_08897DD4;
    return;
L_08897DD4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08897DE0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 124u, 0x08884970u>(ctx, &aot_mem) && ctx.pc == 0x08897DE0u) goto L_08897DE0;
    return;
L_08897DE0:
    ctx.gpr[31] = (0x08897DE8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 121u, 0x08884920u>(ctx, &aot_mem) && ctx.pc == 0x08897DE8u) goto L_08897DE8;
    return;
L_08897DE8:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08897E18;
      }
      goto L_08897DF8;
    }
L_08897DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08897E18;
      }
      goto L_08897E08;
    }
L_08897E08:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08897E14u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 121u, 0x08884920u>(ctx, &aot_mem) && ctx.pc == 0x08897E14u) goto L_08897E14;
    return;
L_08897E14:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08897E18;
L_08897E18:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(1232))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897D88;
      }
      goto L_08897E34;
    }
L_08897E34:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897E4C;
      }
      goto L_08897E3C;
    }
L_08897E3C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(604));
    ctx.gpr[31] = (0x08897E4Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08897E4Cu) goto L_08897E4C;
    return;
L_08897E4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897E64;
      }
      goto L_08897E54;
    }
L_08897E54:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897E64u);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08897E64u) goto L_08897E64;
    return;
L_08897E64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08897E6C;
    }
L_08897E6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897EDC;
      }
      goto L_08897E78;
    }
L_08897E78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897E94;
      }
      goto L_08897E88;
    }
L_08897E88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[31] = (0x08897E94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 266u, 0x088D534Cu>(ctx, &aot_mem) && ctx.pc == 0x08897E94u) goto L_08897E94;
    return;
L_08897E94:
    ctx.gpr[31] = (0x08897E9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 818u, 0x08AFB8C0u>(ctx, &aot_mem) && ctx.pc == 0x08897E9Cu) goto L_08897E9C;
    return;
L_08897E9C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08897EE4;
      }
      goto L_08897EA8;
    }
L_08897EA8:
    ctx.gpr[31] = (0x08897EB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x08897EB0u) goto L_08897EB0;
    return;
L_08897EB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897EE4;
      }
      goto L_08897EB8;
    }
L_08897EB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08897ECCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x08897ECCu) goto L_08897ECC;
    return;
L_08897ECC:
    ctx.gpr[31] = (0x08897ED4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 2u, 0x089A000Cu>(ctx, &aot_mem) && ctx.pc == 0x08897ED4u) goto L_08897ED4;
    return;
L_08897ED4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897EE4;
      }
      goto L_08897EDC;
    }
L_08897EDC:
    ctx.gpr[31] = (0x08897EE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 474u, 0x088868F4u>(ctx, &aot_mem) && ctx.pc == 0x08897EE4u) goto L_08897EE4;
    return;
L_08897EE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 69u, 0x088983D8u>(ctx, &aot_mem); return;
      }
      goto L_08897EEC;
    }
L_08897EEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 63u, 0x0889838Cu>(ctx, &aot_mem); return;
      }
      goto L_08897EF8;
    }
L_08897EF8:
    ctx.gpr[31] = (0x08897F00u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08897F00u) goto L_08897F00;
    return;
L_08897F00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897F74;
      }
      goto L_08897F08;
    }
L_08897F08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08897F74;
      }
      goto L_08897F18;
    }
L_08897F18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08897F74;
      }
      goto L_08897F34;
    }
L_08897F34:
    ctx.gpr[31] = (0x08897F3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 818u, 0x08AFB8C0u>(ctx, &aot_mem) && ctx.pc == 0x08897F3Cu) goto L_08897F3C;
    return;
L_08897F3C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897F64;
      }
      goto L_08897F48;
    }
L_08897F48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
        goto L_08897F84;
    }
    goto L_08897F5C;
L_08897F5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08897F90;
      }
      goto L_08897F64;
    }
L_08897F64:
    ctx.gpr[31] = (0x08897F6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 474u, 0x088868F4u>(ctx, &aot_mem) && ctx.pc == 0x08897F6Cu) goto L_08897F6C;
    return;
L_08897F6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 91u, 0x088984CCu>(ctx, &aot_mem); return;
      }
      goto L_08897F74;
    }
L_08897F74:
    ctx.gpr[31] = (0x08897F7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 474u, 0x088868F4u>(ctx, &aot_mem) && ctx.pc == 0x08897F7Cu) goto L_08897F7C;
    return;
L_08897F7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 91u, 0x088984CCu>(ctx, &aot_mem); return;
      }
      goto L_08897F84;
    }
L_08897F84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08897FAC;
      }
      goto L_08897F90;
    }
L_08897F90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 9u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
        goto L_08897FD0;
    }
    goto L_08897FA4;
L_08897FA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
      if (branch_taken) {
          goto L_08897FDC;
      }
      goto L_08897FAC;
    }
L_08897FAC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897FBCu);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08897FBCu) goto L_08897FBC;
    return;
L_08897FBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08897FC8u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08897FC8u) goto L_08897FC8;
    return;
L_08897FC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 91u, 0x088984CCu>(ctx, &aot_mem); return;
      }
      goto L_08897FD0;
    }
L_08897FD0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 10u, 0x08898074u>(ctx, &aot_mem); return;
      }
      goto L_08897FD8;
    }
L_08897FD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    goto L_08897FDC;
L_08897FDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08897FFC;
      }
      goto L_08897FEC;
    }
L_08897FEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 10u, 0x08898074u>(ctx, &aot_mem); return;
      }
      goto L_08897FFC;
    }
L_08897FFC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1264));
    ctx.pc = 0x08898000u; return;
}

void recomp_unit_0036(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0036_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_36(Runtime &runtime) {
    runtime.register_generated_unit(36u, 0x08894000u, 16384u, &recomp_unit_0036, &recomp_unit_0036_entry);
    runtime.register_function(0x08894004u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894010u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894020u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889402Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889403Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894050u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894060u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894080u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894094u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088940C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088940D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894108u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889411Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894134u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894140u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894150u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889415Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894164u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894190u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894198u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088941A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088941D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088941D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088941F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894250u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894264u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894280u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894290u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894298u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088942CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088942D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088942DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088942E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894330u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889434Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894368u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894370u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894380u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894388u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894390u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894398u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894408u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894418u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894420u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889442Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894438u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894448u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894454u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894460u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889446Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894470u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894478u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889447Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894488u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894498u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889450Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894514u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894520u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889452Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894544u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894568u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894570u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894584u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894598u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088945A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088945BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088945E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088945E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088945ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088945F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894600u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894624u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894644u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889464Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889465Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894664u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889466Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894674u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894684u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894694u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088946A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088946ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088946B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088946C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088946C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088946E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088946ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088946F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894700u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894710u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889471Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894754u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889475Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889476Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894774u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894780u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889478Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894794u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889479Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894808u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889481Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894824u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894834u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889483Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894844u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894854u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889485Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894864u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889486Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894878u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088948BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894900u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894944u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894988u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088949A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088949B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088949F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A0Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A1Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A4Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A88u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A90u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A98u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894AA8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894AB8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894AC0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894AD8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894AE0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894AF0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B00u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B24u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B34u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B44u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B4Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B58u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B74u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B8Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B98u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BA4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BB4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BD4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C20u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C34u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C58u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C68u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C88u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C90u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C9Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CB4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CD4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CF8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D04u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D0Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D28u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D38u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D50u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D58u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D68u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D70u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D80u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D8Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D98u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DB0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DD8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E04u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E14u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E20u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E2Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E38u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E44u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E64u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E90u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E98u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894EA4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894EB0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894EBCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894EC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894ED0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894EDCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894EF4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894EFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F04u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F0Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F14u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F20u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F44u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F4Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F5Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F68u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F88u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894FA0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894FACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894FC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894FD4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894FE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894FF8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895008u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889501Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889502Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889503Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889504Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895060u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895070u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895080u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895094u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088950A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088950B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088950D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088950E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088950F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895108u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895110u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895128u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889515Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895160u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889516Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895178u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895198u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088951A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088951B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088951C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088951CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088951D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088951DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088951ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889521Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889522Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895234u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889523Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895244u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889524Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889525Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895264u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889526Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895284u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895298u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088952A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088952C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088952CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088952DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088952ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088952FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895314u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895324u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889533Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889534Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895360u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895368u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895370u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895384u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895398u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895408u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895418u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895424u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895430u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889544Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895484u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895504u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895514u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895524u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889552Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895534u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889553Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895548u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895550u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889555Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895564u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895570u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895578u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895580u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895588u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895590u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895594u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889559Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088955A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088955B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088955BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088955C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088955CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088955D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088955DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088955E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088955F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895608u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895610u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895648u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895650u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889565Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889566Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895678u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895680u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895690u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895698u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895700u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895710u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889571Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895724u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895734u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895744u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895754u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895764u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895778u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088957C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088957D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088957E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088957ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895800u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889580Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895814u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895824u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889582Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895834u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889583Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895844u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889584Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895854u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889585Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895868u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895870u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889587Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895880u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895888u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088958A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088958ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088958B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088958C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088958D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088958E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088958FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895908u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895910u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895924u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895930u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895938u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889594Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889595Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895964u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895978u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895980u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895990u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895998u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A0Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A1Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A24u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A34u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A44u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A5Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A98u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895AA8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895AB0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895ABCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895AD0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895AE0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895AF0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B20u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B38u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B8Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895BA4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895BE0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895BE8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895BFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C08u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C10u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C20u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C28u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C64u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C88u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C90u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895CC8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895CE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895CECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895CF8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D0Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D24u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D2Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D38u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D50u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D70u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D7Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D90u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D9Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895DB8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895DC8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895DD0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895DFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E20u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E28u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E70u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E7Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E88u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E90u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895EBCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895ED0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895EE0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895EE8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895EF0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F08u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F14u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F9Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895FA8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895FB0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895FC0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895FD0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895FDCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895FE0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895FFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896008u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896014u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889602Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896034u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889603Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896044u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889605Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889606Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896074u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896084u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889608Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088960A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088960ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088960C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088960D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088960DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088960F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896100u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896110u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896134u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896154u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896160u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889618Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896194u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889619Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088961ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088961B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088961C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088961D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088961DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088961F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896200u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896210u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896218u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896228u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896234u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889626Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896278u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896284u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889628Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896294u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896300u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896308u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889631Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896328u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889633Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896344u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896354u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889635Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896364u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896374u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889637Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896384u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896394u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896404u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896410u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896418u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889642Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896434u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889644Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896454u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896468u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896470u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896480u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088964ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088964BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088964D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088964F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896504u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896524u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896538u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889656Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896574u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889657Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889658Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896594u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889660Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896614u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896624u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889662Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896640u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896648u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896658u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896660u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889666Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896674u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896684u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889668Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889669Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896704u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889671Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896728u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896738u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896748u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896750u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896760u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896770u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896778u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896788u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896790u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889679Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088967A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088967ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088967BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088967CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088967DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088967E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088967F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896800u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896808u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896818u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896820u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896834u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896844u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896850u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896860u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896878u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896880u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896890u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088968A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088968B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088968C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088968D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088968E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088968ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088968FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889690Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896914u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896928u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896934u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896940u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896950u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896958u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889696Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896984u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896990u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088969A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088969B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088969C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088969D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088969D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088969F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A00u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A08u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A20u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A2Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A34u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A4Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A68u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A74u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A90u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A98u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896AA8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896AB4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896ABCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896AD4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896ADCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896AE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B00u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B10u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B20u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B38u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B58u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B70u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B80u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896B94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896BA4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896BB0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896BC0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896BCCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896C54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896C60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896CA0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896CACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896CB4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896CBCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896CD4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896CE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896CF0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D00u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D0Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D44u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D5Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896DA0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896DA8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896DB8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896DC8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896DD0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896DD8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896DF4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E00u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E04u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E20u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E2Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E38u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E50u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E58u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E68u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E74u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E80u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896EBCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896EC8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896EF0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F24u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F68u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F70u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F90u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896F9Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896FA0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896FA8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896FB4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896FC0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896FCCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896FD0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896FD8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897000u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897020u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897030u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889703Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897058u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897064u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897070u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897078u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897084u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897090u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088970A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088970B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088970C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088970D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088970D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088970E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088970F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897108u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897114u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897124u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889712Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897138u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889714Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897160u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897178u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897190u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897198u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088971A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088971C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088971C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088971DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088971E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088971F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088971FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897208u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897214u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889721Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897224u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889723Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897244u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897250u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889725Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897268u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889727Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897294u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889729Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088972D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088972E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088972F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088972F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897304u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897318u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889732Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897338u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897348u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889735Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897368u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897370u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897388u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897394u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889739Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088973A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088973B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088973BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088973CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088973D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088973E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088973ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088973F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088973FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897404u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889740Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897418u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897434u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897444u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897450u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897460u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897468u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897474u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897484u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889749Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088974A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088974B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088974C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088974D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088974E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088974E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088974F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088974FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889750Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889751Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889752Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897544u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897550u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897558u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897564u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889756Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897574u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889757Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897584u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889759Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088975A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088975C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088975D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088975D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088975E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088975ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088975F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897600u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897608u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897620u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889762Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897634u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897640u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897648u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897654u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889765Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897668u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897674u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889767Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897688u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897690u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889769Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088976ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088976B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088976C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088976CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088976DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088976E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088976FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897708u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897710u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897718u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897724u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897734u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897740u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889774Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897754u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897764u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889777Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897788u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897790u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889779Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897808u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897814u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889781Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897828u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897830u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889783Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897850u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889785Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897870u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889787Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897888u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889789Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088978A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088978BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088978C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088978DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088978E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088978F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088978FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897910u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889791Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897924u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897930u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897938u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897944u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889794Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897958u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897960u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889796Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897974u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897980u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897988u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897990u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889799Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088979B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088979C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088979C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088979E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088979ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088979F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A00u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A08u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A28u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A50u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A5Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A90u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A9Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897AA4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897AB0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897ABCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897AC8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B0Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B20u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B2Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B38u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B44u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B50u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B68u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B90u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B98u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BA4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BB0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BBCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BD4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C14u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C20u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C28u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C40u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C58u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C74u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C7Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C9Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CB0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CBCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CCCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CE0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CE8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CF0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CF8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D08u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D10u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D1Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D2Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D38u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D70u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D88u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D9Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897DA8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897DB8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897DC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897DD4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897DE0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897DE8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897DF8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E08u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E14u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E34u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E4Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E64u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E88u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E9Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EA8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EB0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EB8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897ECCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897ED4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EDCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EF8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F00u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F08u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F34u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F5Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F64u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F74u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F7Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F90u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FA4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FBCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FC8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FD0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FD8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FDCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FFCu, &recomp_unit_0036, "recomp_unit_0036");
}
} // namespace psprecomp
