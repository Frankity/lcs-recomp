#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0108[4095] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 14, 0,
    15, 0, 0, 0, 0, 16, 0, 0, 17, 0, 18, 0, 0, 19, 0, 0, 20, 0, 21, 0, 22, 0, 0, 23, 0, 0, 24, 25, 0, 0, 0, 0,
    0, 0, 26, 0, 27, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32,
    0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0,
    0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46,
    0, 0, 47, 0, 0, 0, 48, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0,
    0, 56, 0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0,
    65, 0, 66, 0, 0, 0, 67, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 73, 0, 0, 74, 0,
    0, 75, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84,
    0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0,
    91, 0, 0, 0, 92, 0, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0,
    0, 100, 0, 101, 0, 0, 102, 0, 103, 0, 104, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 109, 0, 0, 0, 110,
    0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118,
    0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 126, 0, 127, 0, 0, 128,
    0, 129, 0, 130, 0, 0, 0, 0, 131, 132, 0, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 0, 0, 140, 0, 141, 0,
    142, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 0, 148, 0, 149, 0, 0, 150, 0, 0, 0, 0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 0,
    0, 155, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 0, 161, 0, 162, 0, 0, 0, 163, 0, 164, 0, 165, 0, 0, 0,
    166, 0, 167, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 182,
    0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 186, 0, 0, 187, 0, 188, 0, 0, 0, 189, 0, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0,
    195, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 199, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 205, 0, 206,
    0, 207, 0, 208, 0, 209, 0, 210, 0, 0, 211, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 217,
    0, 218, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0, 225, 0, 226, 0, 227, 0, 228, 0, 0, 229, 0, 230, 0, 0, 0, 231, 0,
    0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 239,
    0, 240, 0, 241, 0, 242, 0, 243, 0, 244, 0, 245, 0, 246, 0, 247, 0, 0, 248, 0, 249, 0, 250, 0, 0, 0, 0, 0, 251, 0, 252, 0,
    0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0, 258, 0, 259, 0, 260, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265, 0, 266, 0, 267, 0, 268,
    0, 269, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 279, 0, 280, 0, 281, 0, 0, 0, 282, 0, 0,
    283, 0, 284, 0, 285, 0, 0, 286, 0, 0, 287, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0,
    292, 0, 293, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 300, 0,
    0, 301, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 313, 0, 0, 314, 0, 0, 315,
    316, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 319, 0, 0, 320, 0, 321, 0, 322, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0,
    0, 325, 0, 0, 326, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 333, 0, 334, 0,
    0, 335, 0, 336, 0, 337, 0, 338, 0, 339, 0, 0, 340, 0, 341, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0,
    0, 0, 0, 347, 0, 348, 0, 349, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 353, 0, 354, 0, 0, 355, 0, 356, 0,
    0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 366, 0, 367, 0,
    368, 0, 0, 0, 369, 0, 370, 0, 0, 0, 371, 0, 372, 0, 373, 0, 374, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0,
    0, 378, 0, 0, 0, 379, 0, 380, 0, 0, 381, 0, 0, 0, 382, 0, 383, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0,
    387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 390, 0, 391, 0, 0, 0, 392, 0, 393, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0,
    0, 397, 0, 0, 0, 398, 0, 399, 0, 400, 0, 0, 0, 401, 0, 402, 0, 403, 0, 0, 404, 0, 0, 405, 0, 0, 406, 0, 407, 0, 408, 0,
    0, 0, 0, 0, 0, 0, 409, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412,
    0, 413, 0, 0, 414, 0, 415, 0, 416, 0, 417, 0, 418, 0, 419, 0, 420, 0, 0, 421, 0, 0, 0, 422, 0, 0, 423, 0, 424, 0, 425, 0,
    0, 426, 0, 427, 0, 428, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 433, 0,
    434, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0,
    0, 439, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 444, 0, 445, 0, 446, 0, 447, 448, 0, 0, 0,
    449, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 452, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0,
    0, 456, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 461, 0, 0, 462, 0, 463, 0, 0, 0,
    464, 0, 465, 0, 0, 0, 466, 0, 467, 0, 468, 0, 0, 0, 0, 0, 469, 0, 470, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0,
    473, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 476, 477, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 480, 481, 0, 482, 483, 0, 0, 484, 0,
    0, 0, 485, 486, 0, 487, 0, 0, 488, 0, 489, 0, 0, 0, 490, 0, 491, 0, 0, 0, 492, 0, 0, 493, 0, 0, 0, 494, 495, 0, 0, 496,
    0, 0, 497, 498, 0, 0, 499, 0, 0, 500, 501, 0, 0, 502, 0, 0, 503, 504, 0, 0, 505, 0, 0, 506, 0, 0, 507, 0, 0, 0, 508, 0,
    0, 509, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 512, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 515, 516, 0, 517, 0, 0, 0, 0,
    518, 0, 519, 0, 520, 0, 0, 0, 521, 0, 522, 0, 0, 523, 0, 524, 0, 0, 0, 525, 0, 526, 0, 0, 0, 527, 0, 0, 528, 0, 0, 0,
    0, 529, 0, 530, 0, 531, 0, 0, 0, 532, 0, 533, 0, 0, 534, 0, 535, 0, 0, 0, 536, 0, 537, 0, 538, 0, 539, 0, 540, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 542, 0, 543, 0, 0, 0, 0, 0, 0, 544, 0, 545, 0, 0, 0, 0, 0, 0, 546, 0, 547, 0, 548, 0, 549, 550, 0, 0, 0, 551, 0,
    0, 552, 0, 0, 0, 0, 553, 554, 0, 0, 555, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 558, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 562,
    0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 566, 0, 0, 567, 0, 0,
    568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0,
    0, 0, 0, 0, 573, 0, 0, 574, 0, 0, 575, 0, 0, 0, 0, 576, 0, 577, 0, 0, 578, 0, 0, 579, 0, 0, 0, 0, 580, 0, 581, 0,
    0, 582, 0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0,
    0, 587, 0, 0, 0, 0, 0, 588, 0, 0, 589, 0, 0, 590, 0, 0, 0, 0, 591, 0, 592, 0, 0, 593, 0, 0, 594, 0, 0, 0, 0, 595,
    0, 0, 0, 596, 0, 597, 0, 0, 598, 0, 0, 599, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 602, 0, 0,
    0, 603, 0, 604, 0, 0, 605, 0, 0, 606, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 0, 0, 0, 610,
    0, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 615, 0, 0,
    0, 0, 0, 616, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0,
    0, 0, 0, 0, 0, 0, 633, 0, 0, 634, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 636, 0, 0, 637, 0, 0, 0, 0, 0, 0,
    638, 0, 639, 0, 0, 0, 640, 0, 0, 0, 641, 0, 0, 0, 642, 0, 0, 0, 643, 0, 0, 0, 644, 0, 645, 0, 0, 0, 0, 646, 0, 647,
    0, 648, 0, 0, 649, 0, 650, 651, 0, 0, 652, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 654, 0, 0, 655, 0, 656, 0, 657, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0,
    0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 662, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 665, 0, 0, 0, 666, 0, 0,
    0, 667, 0, 0, 0, 0, 668, 0, 669, 0, 670, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 672, 0, 673, 0, 674, 0, 0, 675, 676, 0, 0, 0, 0, 0, 0, 0, 677, 0, 678, 0, 0, 0, 0, 0, 0, 0, 679, 0, 680, 0, 681,
    0, 0, 682, 0, 683, 0, 0, 0, 0, 684, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 687, 0, 0, 0, 688, 0, 689, 0, 690, 0,
    691, 0, 692, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 695, 0, 0, 0, 0, 696,
    0, 0, 0, 697, 0, 698, 699, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 704, 0, 0, 705, 0, 0, 0,
    706, 0, 0, 707, 0, 708, 0, 709, 0, 710, 0, 0, 0, 711, 0, 0, 0, 712, 0, 713, 0, 714, 0, 0, 0, 715, 0, 0, 716, 0, 717, 718,
    0, 0, 719, 0, 0, 720, 0, 721, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0,
    725, 0, 0, 726, 0, 727, 0, 0, 728, 0, 729, 0, 730, 0, 0, 0, 731, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 734,
    0, 735, 0, 736, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0, 739, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 746, 0, 0, 747, 748, 0, 0, 0,
    749, 0, 0, 0, 750, 0, 751, 0, 0, 0, 752, 0, 0, 753, 0, 0, 0, 754, 0, 0, 0, 0, 0, 755, 0, 756, 0, 757, 0, 0, 0, 758,
    0, 0, 759, 0, 760, 0, 761, 0, 0, 0, 762, 763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 764, 0, 0, 0, 0, 0, 765, 0, 0, 0, 766, 0, 0, 0, 0, 767, 0, 0, 768, 0, 0, 769, 0, 770, 0, 0, 771, 0, 0, 772,
    773, 0, 774, 0, 0, 0, 775, 0, 776, 0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 779,
    0, 0, 780, 0, 781, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 784, 0, 0, 0, 785, 0, 786, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 788, 789, 0, 0, 790, 0, 0, 0, 791, 0, 0, 0, 792, 0, 793, 0, 0,
    0, 794, 0, 0, 0, 795, 0, 0, 796, 0, 797, 0, 798, 0, 799, 0, 800, 0, 0, 0, 801, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 805, 0, 0, 806, 0, 807, 0, 0,
    808, 0, 0, 0, 809, 0, 0, 0, 810, 0, 811, 0, 812, 0, 813, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 0, 0, 815, 0, 816,
    0, 0, 0, 817, 0, 0, 0, 818, 0, 0, 819, 0, 0, 820, 0, 0, 821, 822, 0, 823, 824, 825, 0, 826, 0, 0, 827, 0, 828, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 830, 0, 0, 0, 831, 0, 0, 832, 0, 833, 0, 0, 0, 834, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 835, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 837, 0,
    0, 0, 0, 0, 0, 0, 838, 0, 0, 839, 0, 0, 0, 0, 840, 0, 0, 841, 0, 842, 0, 843, 0, 844, 0, 845, 0, 846, 0, 847, 0, 848,
    0, 0, 849, 0, 850, 0, 851, 0, 852, 0, 853, 0, 854, 0, 855, 0, 856, 857, 0, 0, 0, 0, 0, 0, 0, 858, 0, 859, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 860, 0, 0, 861, 0, 0, 0, 862, 0, 863, 0, 864, 0, 0, 865, 0, 0, 0, 866, 0, 0, 0, 0, 867, 0, 0,
    0, 0, 0, 0, 0, 868, 0, 869, 0, 0, 0, 0, 870, 0, 0, 0, 0, 871, 0, 872, 0, 0, 0, 0, 873, 0, 0, 874, 0, 0, 0, 0,
    875, 0, 876, 0, 877, 0, 878, 0, 879, 0, 0, 0, 0, 0, 0, 880, 0, 0, 881, 0, 0, 0, 0, 0, 882, 0, 883, 0, 0, 0, 0, 884,
    0, 885, 0, 886, 0, 0, 887, 0, 0, 0, 0, 888, 0, 889, 0, 0, 0, 0, 0, 0, 0, 890, 0, 0, 0, 0, 891, 0, 0, 0, 0, 892,
    0, 0, 893, 894, 0, 0, 895, 0, 896, 0, 0, 0, 897, 0, 898, 0, 0, 899, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 900, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 901, 0, 902, 0, 0, 903, 0, 904, 0, 905, 0, 0,
    0, 906, 0, 0, 0, 907, 0, 0, 0, 0, 908, 0, 0, 0, 909, 0, 0, 0, 910, 0, 911, 0, 912, 0, 0, 913, 0, 914, 0, 915, 0, 0,
    0, 916, 0, 917, 0, 0, 0, 0, 0, 0, 918, 0, 919, 0, 0, 0, 920, 0, 0, 921, 0, 922, 0, 923, 0, 0, 924, 925, 0, 926, 0, 927,
    0, 928, 0, 0, 0, 0, 929, 0, 0, 0, 0, 0, 0, 0, 930, 0, 0, 0, 931, 0, 0, 0, 0, 932, 0, 0, 933, 0, 0, 934, 0, 935,
    0, 0, 0, 0, 936, 0, 0, 0, 937, 0, 0, 0, 938, 0, 0, 0, 0, 0, 0, 0, 0, 939, 0, 940, 0, 941, 0, 0, 942, 0, 943, 0,
    944, 0, 0, 945, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 946, 0, 0, 947, 0, 0, 0, 948, 0, 0, 0,
    949, 0, 0, 950, 0, 0, 951, 0, 952, 0, 953, 0, 0, 954, 0, 955, 0, 0, 956, 0, 957, 0, 958, 0, 959, 0, 0, 0, 0, 0, 960, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 961, 0, 0, 0, 0, 962, 0, 0, 963, 0, 0, 0, 964, 0, 0, 965, 0,
    0, 966, 0, 0, 967, 0, 0, 968, 0, 0, 969, 970, 0, 971, 0, 0, 972, 0, 973, 0, 974, 0, 0, 0, 975, 0, 0, 0, 976, 0, 0, 0,
    0, 0, 0, 0, 977, 0, 978, 0, 979, 0, 980, 0, 0, 0, 981, 0, 0, 982, 0, 0, 0, 0, 983, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 984, 0, 0, 0, 985, 0, 986, 0, 987, 0, 0, 988, 0, 0, 0, 0, 989, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 990, 0, 0, 0, 0, 991, 0, 0, 992, 0, 0, 0, 0, 993, 0, 994, 0, 0, 995, 0, 0, 0, 0, 996, 0, 0, 0, 0, 997,
};
void recomp_unit_0108_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089B4000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0108[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089B4000;
    case 2u: goto L_089B400C;
    case 3u: goto L_089B4018;
    case 4u: goto L_089B403C;
    case 5u: goto L_089B4050;
    case 6u: goto L_089B4058;
    case 7u: goto L_089B407C;
    case 8u: goto L_089B4084;
    case 9u: goto L_089B40A8;
    case 10u: goto L_089B40B0;
    case 11u: goto L_089B40B8;
    case 12u: goto L_089B40DC;
    case 13u: goto L_089B40F4;
    case 14u: goto L_089B40F8;
    case 15u: goto L_089B4100;
    case 16u: goto L_089B4114;
    case 17u: goto L_089B4120;
    case 18u: goto L_089B4128;
    case 19u: goto L_089B4134;
    case 20u: goto L_089B4140;
    case 21u: goto L_089B4148;
    case 22u: goto L_089B4150;
    case 23u: goto L_089B415C;
    case 24u: goto L_089B4168;
    case 25u: goto L_089B416C;
    case 26u: goto L_089B4188;
    case 27u: goto L_089B4190;
    case 28u: goto L_089B419C;
    case 29u: goto L_089B41AC;
    case 30u: goto L_089B41C8;
    case 31u: goto L_089B41D4;
    case 32u: goto L_089B41FC;
    case 33u: goto L_089B4208;
    case 34u: goto L_089B4210;
    case 35u: goto L_089B422C;
    case 36u: goto L_089B423C;
    case 37u: goto L_089B4248;
    case 38u: goto L_089B4260;
    case 39u: goto L_089B426C;
    case 40u: goto L_089B4288;
    case 41u: goto L_089B4298;
    case 42u: goto L_089B42AC;
    case 43u: goto L_089B42C0;
    case 44u: goto L_089B42D4;
    case 45u: goto L_089B42F4;
    case 46u: goto L_089B42FC;
    case 47u: goto L_089B4308;
    case 48u: goto L_089B4318;
    case 49u: goto L_089B4320;
    case 50u: goto L_089B4330;
    case 51u: goto L_089B4338;
    case 52u: goto L_089B4344;
    case 53u: goto L_089B4354;
    case 54u: goto L_089B4364;
    case 55u: goto L_089B4370;
    case 56u: goto L_089B4384;
    case 57u: goto L_089B438C;
    case 58u: goto L_089B4394;
    case 59u: goto L_089B43A0;
    case 60u: goto L_089B43B0;
    case 61u: goto L_089B43C8;
    case 62u: goto L_089B43D4;
    case 63u: goto L_089B43DC;
    case 64u: goto L_089B43F4;
    case 65u: goto L_089B4400;
    case 66u: goto L_089B4408;
    case 67u: goto L_089B4418;
    case 68u: goto L_089B441C;
    case 69u: goto L_089B4424;
    case 70u: goto L_089B4444;
    case 71u: goto L_089B4454;
    case 72u: goto L_089B4464;
    case 73u: goto L_089B446C;
    case 74u: goto L_089B4478;
    case 75u: goto L_089B4484;
    case 76u: goto L_089B4494;
    case 77u: goto L_089B449C;
    case 78u: goto L_089B44B0;
    case 79u: goto L_089B44B8;
    case 80u: goto L_089B44C0;
    case 81u: goto L_089B44C8;
    case 82u: goto L_089B44D4;
    case 83u: goto L_089B44EC;
    case 84u: goto L_089B44FC;
    case 85u: goto L_089B4518;
    case 86u: goto L_089B452C;
    case 87u: goto L_089B4534;
    case 88u: goto L_089B453C;
    case 89u: goto L_089B4558;
    case 90u: goto L_089B4574;
    case 91u: goto L_089B4580;
    case 92u: goto L_089B4590;
    case 93u: goto L_089B459C;
    case 94u: goto L_089B45A4;
    case 95u: goto L_089B45AC;
    case 96u: goto L_089B45B4;
    case 97u: goto L_089B45BC;
    case 98u: goto L_089B45D4;
    case 99u: goto L_089B45EC;
    case 100u: goto L_089B4604;
    case 101u: goto L_089B460C;
    case 102u: goto L_089B4618;
    case 103u: goto L_089B4620;
    case 104u: goto L_089B4628;
    case 105u: goto L_089B462C;
    case 106u: goto L_089B4640;
    case 107u: goto L_089B4658;
    case 108u: goto L_089B4660;
    case 109u: goto L_089B466C;
    case 110u: goto L_089B467C;
    case 111u: goto L_089B4688;
    case 112u: goto L_089B4694;
    case 113u: goto L_089B46A0;
    case 114u: goto L_089B46AC;
    case 115u: goto L_089B46B8;
    case 116u: goto L_089B46C0;
    case 117u: goto L_089B46DC;
    case 118u: goto L_089B46FC;
    case 119u: goto L_089B4708;
    case 120u: goto L_089B4720;
    case 121u: goto L_089B472C;
    case 122u: goto L_089B4734;
    case 123u: goto L_089B473C;
    case 124u: goto L_089B474C;
    case 125u: goto L_089B4760;
    case 126u: goto L_089B4768;
    case 127u: goto L_089B4770;
    case 128u: goto L_089B477C;
    case 129u: goto L_089B4784;
    case 130u: goto L_089B478C;
    case 131u: goto L_089B47A0;
    case 132u: goto L_089B47A4;
    case 133u: goto L_089B47B0;
    case 134u: goto L_089B47B8;
    case 135u: goto L_089B47C0;
    case 136u: goto L_089B47C8;
    case 137u: goto L_089B47D0;
    case 138u: goto L_089B47D8;
    case 139u: goto L_089B47E0;
    case 140u: goto L_089B47F0;
    case 141u: goto L_089B47F8;
    case 142u: goto L_089B4800;
    case 143u: goto L_089B4808;
    case 144u: goto L_089B4810;
    case 145u: goto L_089B4818;
    case 146u: goto L_089B4820;
    case 147u: goto L_089B4828;
    case 148u: goto L_089B4830;
    case 149u: goto L_089B4838;
    case 150u: goto L_089B4844;
    case 151u: goto L_089B4858;
    case 152u: goto L_089B4860;
    case 153u: goto L_089B4868;
    case 154u: goto L_089B4870;
    case 155u: goto L_089B4884;
    case 156u: goto L_089B488C;
    case 157u: goto L_089B4898;
    case 158u: goto L_089B48A8;
    case 159u: goto L_089B48B0;
    case 160u: goto L_089B48B8;
    case 161u: goto L_089B48C8;
    case 162u: goto L_089B48D0;
    case 163u: goto L_089B48E0;
    case 164u: goto L_089B48E8;
    case 165u: goto L_089B48F0;
    case 166u: goto L_089B4900;
    case 167u: goto L_089B4908;
    case 168u: goto L_089B4918;
    case 169u: goto L_089B4920;
    case 170u: goto L_089B4934;
    case 171u: goto L_089B4944;
    case 172u: goto L_089B4954;
    case 173u: goto L_089B495C;
    case 174u: goto L_089B4974;
    case 175u: goto L_089B4980;
    case 176u: goto L_089B499C;
    case 177u: goto L_089B49A8;
    case 178u: goto L_089B49B0;
    case 179u: goto L_089B49C4;
    case 180u: goto L_089B49DC;
    case 181u: goto L_089B49F0;
    case 182u: goto L_089B49FC;
    case 183u: goto L_089B4A04;
    case 184u: goto L_089B4A14;
    case 185u: goto L_089B4A20;
    case 186u: goto L_089B4A28;
    case 187u: goto L_089B4A34;
    case 188u: goto L_089B4A3C;
    case 189u: goto L_089B4A4C;
    case 190u: goto L_089B4A58;
    case 191u: goto L_089B4A60;
    case 192u: goto L_089B4A68;
    case 193u: goto L_089B4A70;
    case 194u: goto L_089B4A78;
    case 195u: goto L_089B4A80;
    case 196u: goto L_089B4A88;
    case 197u: goto L_089B4A94;
    case 198u: goto L_089B4AA4;
    case 199u: goto L_089B4AAC;
    case 200u: goto L_089B4AB4;
    case 201u: goto L_089B4ABC;
    case 202u: goto L_089B4AD8;
    case 203u: goto L_089B4AE0;
    case 204u: goto L_089B4AE8;
    case 205u: goto L_089B4AF4;
    case 206u: goto L_089B4AFC;
    case 207u: goto L_089B4B04;
    case 208u: goto L_089B4B0C;
    case 209u: goto L_089B4B14;
    case 210u: goto L_089B4B1C;
    case 211u: goto L_089B4B28;
    case 212u: goto L_089B4B30;
    case 213u: goto L_089B4B40;
    case 214u: goto L_089B4B50;
    case 215u: goto L_089B4B64;
    case 216u: goto L_089B4B6C;
    case 217u: goto L_089B4B7C;
    case 218u: goto L_089B4B84;
    case 219u: goto L_089B4B8C;
    case 220u: goto L_089B4B94;
    case 221u: goto L_089B4B9C;
    case 222u: goto L_089B4BA4;
    case 223u: goto L_089B4BAC;
    case 224u: goto L_089B4BB4;
    case 225u: goto L_089B4BBC;
    case 226u: goto L_089B4BC4;
    case 227u: goto L_089B4BCC;
    case 228u: goto L_089B4BD4;
    case 229u: goto L_089B4BE0;
    case 230u: goto L_089B4BE8;
    case 231u: goto L_089B4BF8;
    case 232u: goto L_089B4C08;
    case 233u: goto L_089B4C14;
    case 234u: goto L_089B4C38;
    case 235u: goto L_089B4C40;
    case 236u: goto L_089B4C48;
    case 237u: goto L_089B4C64;
    case 238u: goto L_089B4C6C;
    case 239u: goto L_089B4C7C;
    case 240u: goto L_089B4C84;
    case 241u: goto L_089B4C8C;
    case 242u: goto L_089B4C94;
    case 243u: goto L_089B4C9C;
    case 244u: goto L_089B4CA4;
    case 245u: goto L_089B4CAC;
    case 246u: goto L_089B4CB4;
    case 247u: goto L_089B4CBC;
    case 248u: goto L_089B4CC8;
    case 249u: goto L_089B4CD0;
    case 250u: goto L_089B4CD8;
    case 251u: goto L_089B4CF0;
    case 252u: goto L_089B4CF8;
    case 253u: goto L_089B4D04;
    case 254u: goto L_089B4D0C;
    case 255u: goto L_089B4D14;
    case 256u: goto L_089B4D1C;
    case 257u: goto L_089B4D24;
    case 258u: goto L_089B4D2C;
    case 259u: goto L_089B4D34;
    case 260u: goto L_089B4D3C;
    case 261u: goto L_089B4D44;
    case 262u: goto L_089B4D4C;
    case 263u: goto L_089B4D54;
    case 264u: goto L_089B4D5C;
    case 265u: goto L_089B4D64;
    case 266u: goto L_089B4D6C;
    case 267u: goto L_089B4D74;
    case 268u: goto L_089B4D7C;
    case 269u: goto L_089B4D84;
    case 270u: goto L_089B4D8C;
    case 271u: goto L_089B4D94;
    case 272u: goto L_089B4D9C;
    case 273u: goto L_089B4DA4;
    case 274u: goto L_089B4DAC;
    case 275u: goto L_089B4DB4;
    case 276u: goto L_089B4DBC;
    case 277u: goto L_089B4DC4;
    case 278u: goto L_089B4DCC;
    case 279u: goto L_089B4DD4;
    case 280u: goto L_089B4DDC;
    case 281u: goto L_089B4DE4;
    case 282u: goto L_089B4DF4;
    case 283u: goto L_089B4E00;
    case 284u: goto L_089B4E08;
    case 285u: goto L_089B4E10;
    case 286u: goto L_089B4E1C;
    case 287u: goto L_089B4E28;
    case 288u: goto L_089B4E38;
    case 289u: goto L_089B4E44;
    case 290u: goto L_089B4E68;
    case 291u: goto L_089B4E70;
    case 292u: goto L_089B4E80;
    case 293u: goto L_089B4E88;
    case 294u: goto L_089B4E90;
    case 295u: goto L_089B4EA0;
    case 296u: goto L_089B4EB4;
    case 297u: goto L_089B4ECC;
    case 298u: goto L_089B4EE0;
    case 299u: goto L_089B4EEC;
    case 300u: goto L_089B4EF8;
    case 301u: goto L_089B4F04;
    case 302u: goto L_089B4F18;
    case 303u: goto L_089B4F20;
    case 304u: goto L_089B4F30;
    case 305u: goto L_089B4F40;
    case 306u: goto L_089B4F48;
    case 307u: goto L_089B4F64;
    case 308u: goto L_089B4F6C;
    case 309u: goto L_089B4FA0;
    case 310u: goto L_089B4FD0;
    case 311u: goto L_089B501C;
    case 312u: goto L_089B505C;
    case 313u: goto L_089B5064;
    case 314u: goto L_089B5070;
    case 315u: goto L_089B507C;
    case 316u: goto L_089B5080;
    case 317u: goto L_089B5094;
    case 318u: goto L_089B50A0;
    case 319u: goto L_089B50B0;
    case 320u: goto L_089B50BC;
    case 321u: goto L_089B50C4;
    case 322u: goto L_089B50CC;
    case 323u: goto L_089B50D4;
    case 324u: goto L_089B50E8;
    case 325u: goto L_089B5104;
    case 326u: goto L_089B5110;
    case 327u: goto L_089B5118;
    case 328u: goto L_089B5128;
    case 329u: goto L_089B5138;
    case 330u: goto L_089B5144;
    case 331u: goto L_089B5154;
    case 332u: goto L_089B5164;
    case 333u: goto L_089B5170;
    case 334u: goto L_089B5178;
    case 335u: goto L_089B5184;
    case 336u: goto L_089B518C;
    case 337u: goto L_089B5194;
    case 338u: goto L_089B519C;
    case 339u: goto L_089B51A4;
    case 340u: goto L_089B51B0;
    case 341u: goto L_089B51B8;
    case 342u: goto L_089B51C4;
    case 343u: goto L_089B51D0;
    case 344u: goto L_089B51E8;
    case 345u: goto L_089B5228;
    case 346u: goto L_089B526C;
    case 347u: goto L_089B528C;
    case 348u: goto L_089B5294;
    case 349u: goto L_089B529C;
    case 350u: goto L_089B52A4;
    case 351u: goto L_089B52BC;
    case 352u: goto L_089B52CC;
    case 353u: goto L_089B52DC;
    case 354u: goto L_089B52E4;
    case 355u: goto L_089B52F0;
    case 356u: goto L_089B52F8;
    case 357u: goto L_089B5308;
    case 358u: goto L_089B531C;
    case 359u: goto L_089B532C;
    case 360u: goto L_089B5334;
    case 361u: goto L_089B5348;
    case 362u: goto L_089B5350;
    case 363u: goto L_089B5358;
    case 364u: goto L_089B5360;
    case 365u: goto L_089B5368;
    case 366u: goto L_089B5370;
    case 367u: goto L_089B5378;
    case 368u: goto L_089B5380;
    case 369u: goto L_089B5390;
    case 370u: goto L_089B5398;
    case 371u: goto L_089B53A8;
    case 372u: goto L_089B53B0;
    case 373u: goto L_089B53B8;
    case 374u: goto L_089B53C0;
    case 375u: goto L_089B53CC;
    case 376u: goto L_089B53DC;
    case 377u: goto L_089B53F4;
    case 378u: goto L_089B5404;
    case 379u: goto L_089B5414;
    case 380u: goto L_089B541C;
    case 381u: goto L_089B5428;
    case 382u: goto L_089B5438;
    case 383u: goto L_089B5440;
    case 384u: goto L_089B5448;
    case 385u: goto L_089B5460;
    case 386u: goto L_089B5470;
    case 387u: goto L_089B5480;
    case 388u: goto L_089B5498;
    case 389u: goto L_089B54A8;
    case 390u: goto L_089B54B4;
    case 391u: goto L_089B54BC;
    case 392u: goto L_089B54CC;
    case 393u: goto L_089B54D4;
    case 394u: goto L_089B54DC;
    case 395u: goto L_089B54EC;
    case 396u: goto L_089B54F8;
    case 397u: goto L_089B5504;
    case 398u: goto L_089B5514;
    case 399u: goto L_089B551C;
    case 400u: goto L_089B5524;
    case 401u: goto L_089B5534;
    case 402u: goto L_089B553C;
    case 403u: goto L_089B5544;
    case 404u: goto L_089B5550;
    case 405u: goto L_089B555C;
    case 406u: goto L_089B5568;
    case 407u: goto L_089B5570;
    case 408u: goto L_089B5578;
    case 409u: goto L_089B5598;
    case 410u: goto L_089B559C;
    case 411u: goto L_089B55AC;
    case 412u: goto L_089B55FC;
    case 413u: goto L_089B5604;
    case 414u: goto L_089B5610;
    case 415u: goto L_089B5618;
    case 416u: goto L_089B5620;
    case 417u: goto L_089B5628;
    case 418u: goto L_089B5630;
    case 419u: goto L_089B5638;
    case 420u: goto L_089B5640;
    case 421u: goto L_089B564C;
    case 422u: goto L_089B565C;
    case 423u: goto L_089B5668;
    case 424u: goto L_089B5670;
    case 425u: goto L_089B5678;
    case 426u: goto L_089B5684;
    case 427u: goto L_089B568C;
    case 428u: goto L_089B5694;
    case 429u: goto L_089B56A0;
    case 430u: goto L_089B56B0;
    case 431u: goto L_089B56D4;
    case 432u: goto L_089B56EC;
    case 433u: goto L_089B56F8;
    case 434u: goto L_089B5700;
    case 435u: goto L_089B5710;
    case 436u: goto L_089B571C;
    case 437u: goto L_089B5734;
    case 438u: goto L_089B5774;
    case 439u: goto L_089B5784;
    case 440u: goto L_089B578C;
    case 441u: goto L_089B57A0;
    case 442u: goto L_089B57B4;
    case 443u: goto L_089B57CC;
    case 444u: goto L_089B57D4;
    case 445u: goto L_089B57DC;
    case 446u: goto L_089B57E4;
    case 447u: goto L_089B57EC;
    case 448u: goto L_089B57F0;
    case 449u: goto L_089B5800;
    case 450u: goto L_089B5810;
    case 451u: goto L_089B5824;
    case 452u: goto L_089B582C;
    case 453u: goto L_089B5834;
    case 454u: goto L_089B583C;
    case 455u: goto L_089B5860;
    case 456u: goto L_089B5884;
    case 457u: goto L_089B5894;
    case 458u: goto L_089B58A8;
    case 459u: goto L_089B58C8;
    case 460u: goto L_089B58D4;
    case 461u: goto L_089B58DC;
    case 462u: goto L_089B58E8;
    case 463u: goto L_089B58F0;
    case 464u: goto L_089B5900;
    case 465u: goto L_089B5908;
    case 466u: goto L_089B5918;
    case 467u: goto L_089B5920;
    case 468u: goto L_089B5928;
    case 469u: goto L_089B5940;
    case 470u: goto L_089B5948;
    case 471u: goto L_089B5950;
    case 472u: goto L_089B5968;
    case 473u: goto L_089B5980;
    case 474u: goto L_089B5990;
    case 475u: goto L_089B599C;
    case 476u: goto L_089B59AC;
    case 477u: goto L_089B59B0;
    case 478u: goto L_089B59BC;
    case 479u: goto L_089B59CC;
    case 480u: goto L_089B59DC;
    case 481u: goto L_089B59E0;
    case 482u: goto L_089B59E8;
    case 483u: goto L_089B59EC;
    case 484u: goto L_089B59F8;
    case 485u: goto L_089B5A08;
    case 486u: goto L_089B5A0C;
    case 487u: goto L_089B5A14;
    case 488u: goto L_089B5A20;
    case 489u: goto L_089B5A28;
    case 490u: goto L_089B5A38;
    case 491u: goto L_089B5A40;
    case 492u: goto L_089B5A50;
    case 493u: goto L_089B5A5C;
    case 494u: goto L_089B5A6C;
    case 495u: goto L_089B5A70;
    case 496u: goto L_089B5A7C;
    case 497u: goto L_089B5A88;
    case 498u: goto L_089B5A8C;
    case 499u: goto L_089B5A98;
    case 500u: goto L_089B5AA4;
    case 501u: goto L_089B5AA8;
    case 502u: goto L_089B5AB4;
    case 503u: goto L_089B5AC0;
    case 504u: goto L_089B5AC4;
    case 505u: goto L_089B5AD0;
    case 506u: goto L_089B5ADC;
    case 507u: goto L_089B5AE8;
    case 508u: goto L_089B5AF8;
    case 509u: goto L_089B5B04;
    case 510u: goto L_089B5B18;
    case 511u: goto L_089B5B28;
    case 512u: goto L_089B5B30;
    case 513u: goto L_089B5B40;
    case 514u: goto L_089B5B50;
    case 515u: goto L_089B5B60;
    case 516u: goto L_089B5B64;
    case 517u: goto L_089B5B6C;
    case 518u: goto L_089B5B80;
    case 519u: goto L_089B5B88;
    case 520u: goto L_089B5B90;
    case 521u: goto L_089B5BA0;
    case 522u: goto L_089B5BA8;
    case 523u: goto L_089B5BB4;
    case 524u: goto L_089B5BBC;
    case 525u: goto L_089B5BCC;
    case 526u: goto L_089B5BD4;
    case 527u: goto L_089B5BE4;
    case 528u: goto L_089B5BF0;
    case 529u: goto L_089B5C04;
    case 530u: goto L_089B5C0C;
    case 531u: goto L_089B5C14;
    case 532u: goto L_089B5C24;
    case 533u: goto L_089B5C2C;
    case 534u: goto L_089B5C38;
    case 535u: goto L_089B5C40;
    case 536u: goto L_089B5C50;
    case 537u: goto L_089B5C58;
    case 538u: goto L_089B5C60;
    case 539u: goto L_089B5C68;
    case 540u: goto L_089B5C70;
    case 541u: goto L_089B5C98;
    case 542u: goto L_089B5D04;
    case 543u: goto L_089B5D0C;
    case 544u: goto L_089B5D28;
    case 545u: goto L_089B5D30;
    case 546u: goto L_089B5D4C;
    case 547u: goto L_089B5D54;
    case 548u: goto L_089B5D5C;
    case 549u: goto L_089B5D64;
    case 550u: goto L_089B5D68;
    case 551u: goto L_089B5D78;
    case 552u: goto L_089B5D84;
    case 553u: goto L_089B5D98;
    case 554u: goto L_089B5D9C;
    case 555u: goto L_089B5DA8;
    case 556u: goto L_089B5DB0;
    case 557u: goto L_089B5DEC;
    case 558u: goto L_089B5E1C;
    case 559u: goto L_089B5E24;
    case 560u: goto L_089B5E48;
    case 561u: goto L_089B5E60;
    case 562u: goto L_089B5E7C;
    case 563u: goto L_089B5EA0;
    case 564u: goto L_089B5EC4;
    case 565u: goto L_089B5EDC;
    case 566u: goto L_089B5EE8;
    case 567u: goto L_089B5EF4;
    case 568u: goto L_089B5F00;
    case 569u: goto L_089B5F18;
    case 570u: goto L_089B5F30;
    case 571u: goto L_089B5F54;
    case 572u: goto L_089B5F78;
    case 573u: goto L_089B5F90;
    case 574u: goto L_089B5F9C;
    case 575u: goto L_089B5FA8;
    case 576u: goto L_089B5FBC;
    case 577u: goto L_089B5FC4;
    case 578u: goto L_089B5FD0;
    case 579u: goto L_089B5FDC;
    case 580u: goto L_089B5FF0;
    case 581u: goto L_089B5FF8;
    case 582u: goto L_089B6004;
    case 583u: goto L_089B6010;
    case 584u: goto L_089B6024;
    case 585u: goto L_089B603C;
    case 586u: goto L_089B6060;
    case 587u: goto L_089B6084;
    case 588u: goto L_089B609C;
    case 589u: goto L_089B60A8;
    case 590u: goto L_089B60B4;
    case 591u: goto L_089B60C8;
    case 592u: goto L_089B60D0;
    case 593u: goto L_089B60DC;
    case 594u: goto L_089B60E8;
    case 595u: goto L_089B60FC;
    case 596u: goto L_089B610C;
    case 597u: goto L_089B6114;
    case 598u: goto L_089B6120;
    case 599u: goto L_089B612C;
    case 600u: goto L_089B6138;
    case 601u: goto L_089B6160;
    case 602u: goto L_089B6174;
    case 603u: goto L_089B6184;
    case 604u: goto L_089B618C;
    case 605u: goto L_089B6198;
    case 606u: goto L_089B61A4;
    case 607u: goto L_089B61B0;
    case 608u: goto L_089B61D4;
    case 609u: goto L_089B61E8;
    case 610u: goto L_089B61FC;
    case 611u: goto L_089B620C;
    case 612u: goto L_089B6220;
    case 613u: goto L_089B6248;
    case 614u: goto L_089B6268;
    case 615u: goto L_089B6274;
    case 616u: goto L_089B628C;
    case 617u: goto L_089B62A0;
    case 618u: goto L_089B62B8;
    case 619u: goto L_089B62F4;
    case 620u: goto L_089B6368;
    case 621u: goto L_089B63D0;
    case 622u: goto L_089B6448;
    case 623u: goto L_089B64C0;
    case 624u: goto L_089B64E0;
    case 625u: goto L_089B64F0;
    case 626u: goto L_089B6518;
    case 627u: goto L_089B652C;
    case 628u: goto L_089B6550;
    case 629u: goto L_089B6570;
    case 630u: goto L_089B65C4;
    case 631u: goto L_089B65CC;
    case 632u: goto L_089B65F4;
    case 633u: goto L_089B6618;
    case 634u: goto L_089B6624;
    case 635u: goto L_089B6640;
    case 636u: goto L_089B6658;
    case 637u: goto L_089B6664;
    case 638u: goto L_089B6680;
    case 639u: goto L_089B6688;
    case 640u: goto L_089B6698;
    case 641u: goto L_089B66A8;
    case 642u: goto L_089B66B8;
    case 643u: goto L_089B66C8;
    case 644u: goto L_089B66D8;
    case 645u: goto L_089B66E0;
    case 646u: goto L_089B66F4;
    case 647u: goto L_089B66FC;
    case 648u: goto L_089B6704;
    case 649u: goto L_089B6710;
    case 650u: goto L_089B6718;
    case 651u: goto L_089B671C;
    case 652u: goto L_089B6728;
    case 653u: goto L_089B6738;
    case 654u: goto L_089B6754;
    case 655u: goto L_089B6760;
    case 656u: goto L_089B6768;
    case 657u: goto L_089B6770;
    case 658u: goto L_089B67F0;
    case 659u: goto L_089B6810;
    case 660u: goto L_089B683C;
    case 661u: goto L_089B6868;
    case 662u: goto L_089B6878;
    case 663u: goto L_089B68B0;
    case 664u: goto L_089B68D8;
    case 665u: goto L_089B68E4;
    case 666u: goto L_089B68F4;
    case 667u: goto L_089B6904;
    case 668u: goto L_089B6918;
    case 669u: goto L_089B6920;
    case 670u: goto L_089B6928;
    case 671u: goto L_089B693C;
    case 672u: goto L_089B6984;
    case 673u: goto L_089B698C;
    case 674u: goto L_089B6994;
    case 675u: goto L_089B69A0;
    case 676u: goto L_089B69A4;
    case 677u: goto L_089B69C4;
    case 678u: goto L_089B69CC;
    case 679u: goto L_089B69EC;
    case 680u: goto L_089B69F4;
    case 681u: goto L_089B69FC;
    case 682u: goto L_089B6A08;
    case 683u: goto L_089B6A10;
    case 684u: goto L_089B6A24;
    case 685u: goto L_089B6A30;
    case 686u: goto L_089B6AC8;
    case 687u: goto L_089B6AD8;
    case 688u: goto L_089B6AE8;
    case 689u: goto L_089B6AF0;
    case 690u: goto L_089B6AF8;
    case 691u: goto L_089B6B00;
    case 692u: goto L_089B6B08;
    case 693u: goto L_089B6B14;
    case 694u: goto L_089B6BDC;
    case 695u: goto L_089B6BE8;
    case 696u: goto L_089B6BFC;
    case 697u: goto L_089B6C0C;
    case 698u: goto L_089B6C14;
    case 699u: goto L_089B6C18;
    case 700u: goto L_089B6C2C;
    case 701u: goto L_089B6C4C;
    case 702u: goto L_089B6C98;
    case 703u: goto L_089B6CD0;
    case 704u: goto L_089B6CE4;
    case 705u: goto L_089B6CF0;
    case 706u: goto L_089B6D00;
    case 707u: goto L_089B6D0C;
    case 708u: goto L_089B6D14;
    case 709u: goto L_089B6D1C;
    case 710u: goto L_089B6D24;
    case 711u: goto L_089B6D34;
    case 712u: goto L_089B6D44;
    case 713u: goto L_089B6D4C;
    case 714u: goto L_089B6D54;
    case 715u: goto L_089B6D64;
    case 716u: goto L_089B6D70;
    case 717u: goto L_089B6D78;
    case 718u: goto L_089B6D7C;
    case 719u: goto L_089B6D88;
    case 720u: goto L_089B6D94;
    case 721u: goto L_089B6D9C;
    case 722u: goto L_089B6DBC;
    case 723u: goto L_089B6E54;
    case 724u: goto L_089B6E68;
    case 725u: goto L_089B6E80;
    case 726u: goto L_089B6E8C;
    case 727u: goto L_089B6E94;
    case 728u: goto L_089B6EA0;
    case 729u: goto L_089B6EA8;
    case 730u: goto L_089B6EB0;
    case 731u: goto L_089B6EC0;
    case 732u: goto L_089B6ED0;
    case 733u: goto L_089B6EF0;
    case 734u: goto L_089B6EFC;
    case 735u: goto L_089B6F04;
    case 736u: goto L_089B6F0C;
    case 737u: goto L_089B6F1C;
    case 738u: goto L_089B6F2C;
    case 739u: goto L_089B6F3C;
    case 740u: goto L_089B6F50;
    case 741u: goto L_089B6FC8;
    case 742u: goto L_089B6FD0;
    case 743u: goto L_089B7020;
    case 744u: goto L_089B7028;
    case 745u: goto L_089B7058;
    case 746u: goto L_089B7060;
    case 747u: goto L_089B706C;
    case 748u: goto L_089B7070;
    case 749u: goto L_089B7080;
    case 750u: goto L_089B7090;
    case 751u: goto L_089B7098;
    case 752u: goto L_089B70A8;
    case 753u: goto L_089B70B4;
    case 754u: goto L_089B70C4;
    case 755u: goto L_089B70DC;
    case 756u: goto L_089B70E4;
    case 757u: goto L_089B70EC;
    case 758u: goto L_089B70FC;
    case 759u: goto L_089B7108;
    case 760u: goto L_089B7110;
    case 761u: goto L_089B7118;
    case 762u: goto L_089B7128;
    case 763u: goto L_089B712C;
    case 764u: goto L_089B7188;
    case 765u: goto L_089B71A0;
    case 766u: goto L_089B71B0;
    case 767u: goto L_089B71C4;
    case 768u: goto L_089B71D0;
    case 769u: goto L_089B71DC;
    case 770u: goto L_089B71E4;
    case 771u: goto L_089B71F0;
    case 772u: goto L_089B71FC;
    case 773u: goto L_089B7200;
    case 774u: goto L_089B7208;
    case 775u: goto L_089B7218;
    case 776u: goto L_089B7220;
    case 777u: goto L_089B7238;
    case 778u: goto L_089B725C;
    case 779u: goto L_089B727C;
    case 780u: goto L_089B7288;
    case 781u: goto L_089B7290;
    case 782u: goto L_089B72A4;
    case 783u: goto L_089B72CC;
    case 784u: goto L_089B72D4;
    case 785u: goto L_089B72E4;
    case 786u: goto L_089B72EC;
    case 787u: goto L_089B7334;
    case 788u: goto L_089B733C;
    case 789u: goto L_089B7340;
    case 790u: goto L_089B734C;
    case 791u: goto L_089B735C;
    case 792u: goto L_089B736C;
    case 793u: goto L_089B7374;
    case 794u: goto L_089B7384;
    case 795u: goto L_089B7394;
    case 796u: goto L_089B73A0;
    case 797u: goto L_089B73A8;
    case 798u: goto L_089B73B0;
    case 799u: goto L_089B73B8;
    case 800u: goto L_089B73C0;
    case 801u: goto L_089B73D0;
    case 802u: goto L_089B73D8;
    case 803u: goto L_089B7424;
    case 804u: goto L_089B7444;
    case 805u: goto L_089B7460;
    case 806u: goto L_089B746C;
    case 807u: goto L_089B7474;
    case 808u: goto L_089B7480;
    case 809u: goto L_089B7490;
    case 810u: goto L_089B74A0;
    case 811u: goto L_089B74A8;
    case 812u: goto L_089B74B0;
    case 813u: goto L_089B74B8;
    case 814u: goto L_089B74D0;
    case 815u: goto L_089B74F4;
    case 816u: goto L_089B74FC;
    case 817u: goto L_089B750C;
    case 818u: goto L_089B751C;
    case 819u: goto L_089B7528;
    case 820u: goto L_089B7534;
    case 821u: goto L_089B7540;
    case 822u: goto L_089B7544;
    case 823u: goto L_089B754C;
    case 824u: goto L_089B7550;
    case 825u: goto L_089B7554;
    case 826u: goto L_089B755C;
    case 827u: goto L_089B7568;
    case 828u: goto L_089B7570;
    case 829u: goto L_089B759C;
    case 830u: goto L_089B75AC;
    case 831u: goto L_089B75BC;
    case 832u: goto L_089B75C8;
    case 833u: goto L_089B75D0;
    case 834u: goto L_089B75E0;
    case 835u: goto L_089B7618;
    case 836u: goto L_089B7648;
    case 837u: goto L_089B7678;
    case 838u: goto L_089B7698;
    case 839u: goto L_089B76A4;
    case 840u: goto L_089B76B8;
    case 841u: goto L_089B76C4;
    case 842u: goto L_089B76CC;
    case 843u: goto L_089B76D4;
    case 844u: goto L_089B76DC;
    case 845u: goto L_089B76E4;
    case 846u: goto L_089B76EC;
    case 847u: goto L_089B76F4;
    case 848u: goto L_089B76FC;
    case 849u: goto L_089B7708;
    case 850u: goto L_089B7710;
    case 851u: goto L_089B7718;
    case 852u: goto L_089B7720;
    case 853u: goto L_089B7728;
    case 854u: goto L_089B7730;
    case 855u: goto L_089B7738;
    case 856u: goto L_089B7740;
    case 857u: goto L_089B7744;
    case 858u: goto L_089B7764;
    case 859u: goto L_089B776C;
    case 860u: goto L_089B7798;
    case 861u: goto L_089B77A4;
    case 862u: goto L_089B77B4;
    case 863u: goto L_089B77BC;
    case 864u: goto L_089B77C4;
    case 865u: goto L_089B77D0;
    case 866u: goto L_089B77E0;
    case 867u: goto L_089B77F4;
    case 868u: goto L_089B7814;
    case 869u: goto L_089B781C;
    case 870u: goto L_089B7830;
    case 871u: goto L_089B7844;
    case 872u: goto L_089B784C;
    case 873u: goto L_089B7860;
    case 874u: goto L_089B786C;
    case 875u: goto L_089B7880;
    case 876u: goto L_089B7888;
    case 877u: goto L_089B7890;
    case 878u: goto L_089B7898;
    case 879u: goto L_089B78A0;
    case 880u: goto L_089B78BC;
    case 881u: goto L_089B78C8;
    case 882u: goto L_089B78E0;
    case 883u: goto L_089B78E8;
    case 884u: goto L_089B78FC;
    case 885u: goto L_089B7904;
    case 886u: goto L_089B790C;
    case 887u: goto L_089B7918;
    case 888u: goto L_089B792C;
    case 889u: goto L_089B7934;
    case 890u: goto L_089B7954;
    case 891u: goto L_089B7968;
    case 892u: goto L_089B797C;
    case 893u: goto L_089B7988;
    case 894u: goto L_089B798C;
    case 895u: goto L_089B7998;
    case 896u: goto L_089B79A0;
    case 897u: goto L_089B79B0;
    case 898u: goto L_089B79B8;
    case 899u: goto L_089B79C4;
    case 900u: goto L_089B7A14;
    case 901u: goto L_089B7A50;
    case 902u: goto L_089B7A58;
    case 903u: goto L_089B7A64;
    case 904u: goto L_089B7A6C;
    case 905u: goto L_089B7A74;
    case 906u: goto L_089B7A84;
    case 907u: goto L_089B7A94;
    case 908u: goto L_089B7AA8;
    case 909u: goto L_089B7AB8;
    case 910u: goto L_089B7AC8;
    case 911u: goto L_089B7AD0;
    case 912u: goto L_089B7AD8;
    case 913u: goto L_089B7AE4;
    case 914u: goto L_089B7AEC;
    case 915u: goto L_089B7AF4;
    case 916u: goto L_089B7B04;
    case 917u: goto L_089B7B0C;
    case 918u: goto L_089B7B28;
    case 919u: goto L_089B7B30;
    case 920u: goto L_089B7B40;
    case 921u: goto L_089B7B4C;
    case 922u: goto L_089B7B54;
    case 923u: goto L_089B7B5C;
    case 924u: goto L_089B7B68;
    case 925u: goto L_089B7B6C;
    case 926u: goto L_089B7B74;
    case 927u: goto L_089B7B7C;
    case 928u: goto L_089B7B84;
    case 929u: goto L_089B7B98;
    case 930u: goto L_089B7BB8;
    case 931u: goto L_089B7BC8;
    case 932u: goto L_089B7BDC;
    case 933u: goto L_089B7BE8;
    case 934u: goto L_089B7BF4;
    case 935u: goto L_089B7BFC;
    case 936u: goto L_089B7C10;
    case 937u: goto L_089B7C20;
    case 938u: goto L_089B7C30;
    case 939u: goto L_089B7C54;
    case 940u: goto L_089B7C5C;
    case 941u: goto L_089B7C64;
    case 942u: goto L_089B7C70;
    case 943u: goto L_089B7C78;
    case 944u: goto L_089B7C80;
    case 945u: goto L_089B7C8C;
    case 946u: goto L_089B7CD4;
    case 947u: goto L_089B7CE0;
    case 948u: goto L_089B7CF0;
    case 949u: goto L_089B7D00;
    case 950u: goto L_089B7D0C;
    case 951u: goto L_089B7D18;
    case 952u: goto L_089B7D20;
    case 953u: goto L_089B7D28;
    case 954u: goto L_089B7D34;
    case 955u: goto L_089B7D3C;
    case 956u: goto L_089B7D48;
    case 957u: goto L_089B7D50;
    case 958u: goto L_089B7D58;
    case 959u: goto L_089B7D60;
    case 960u: goto L_089B7D78;
    case 961u: goto L_089B7DBC;
    case 962u: goto L_089B7DD0;
    case 963u: goto L_089B7DDC;
    case 964u: goto L_089B7DEC;
    case 965u: goto L_089B7DF8;
    case 966u: goto L_089B7E04;
    case 967u: goto L_089B7E10;
    case 968u: goto L_089B7E1C;
    case 969u: goto L_089B7E28;
    case 970u: goto L_089B7E2C;
    case 971u: goto L_089B7E34;
    case 972u: goto L_089B7E40;
    case 973u: goto L_089B7E48;
    case 974u: goto L_089B7E50;
    case 975u: goto L_089B7E60;
    case 976u: goto L_089B7E70;
    case 977u: goto L_089B7E90;
    case 978u: goto L_089B7E98;
    case 979u: goto L_089B7EA0;
    case 980u: goto L_089B7EA8;
    case 981u: goto L_089B7EB8;
    case 982u: goto L_089B7EC4;
    case 983u: goto L_089B7ED8;
    case 984u: goto L_089B7F10;
    case 985u: goto L_089B7F20;
    case 986u: goto L_089B7F28;
    case 987u: goto L_089B7F30;
    case 988u: goto L_089B7F3C;
    case 989u: goto L_089B7F50;
    case 990u: goto L_089B7F88;
    case 991u: goto L_089B7F9C;
    case 992u: goto L_089B7FA8;
    case 993u: goto L_089B7FBC;
    case 994u: goto L_089B7FC4;
    case 995u: goto L_089B7FD0;
    case 996u: goto L_089B7FE4;
    case 997u: goto L_089B7FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089B4000:
    ctx.gpr[4] = (17402u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089B400C;
L_089B400C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089B4018u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4018u) goto L_089B4018;
    return;
L_089B4018:
    ctx.gpr[4] = (16261u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17402u << 16u);
      if (branch_taken) {
          goto L_089B4050;
      }
      goto L_089B403C;
    }
L_089B403C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B40A8;
      }
      goto L_089B4050;
    }
L_089B4050:
    ctx.gpr[31] = (0x089B4058u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4058u) goto L_089B4058;
    return;
L_089B4058:
    ctx.gpr[4] = (16261u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B40B0;
      }
      goto L_089B407C;
    }
L_089B407C:
    ctx.gpr[31] = (0x089B4084u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4084u) goto L_089B4084;
    return;
L_089B4084:
    ctx.gpr[4] = (16261u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B40B0;
      }
      goto L_089B40A8;
    }
L_089B40A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089B40F8;
      }
      goto L_089B40B0;
    }
L_089B40B0:
    ctx.gpr[31] = (0x089B40B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x089B40B8u) goto L_089B40B8;
    return;
L_089B40B8:
    ctx.gpr[4] = (16261u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17401u << 16u);
      if (branch_taken) {
          goto L_089B40F8;
      }
      goto L_089B40DC;
    }
L_089B40DC:
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B40F8;
      }
      goto L_089B40F4;
    }
L_089B40F4:
    ctx.gpr[17] = (0u | 2u);
    goto L_089B40F8;
L_089B40F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089B419C;
      }
      goto L_089B4100;
    }
L_089B4100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B419C;
      }
      goto L_089B4114;
    }
L_089B4114:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B4148;
      }
      goto L_089B4120;
    }
L_089B4120:
    ctx.gpr[31] = (0x089B4128u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 431u, 0x08AF9F18u>(ctx, &aot_mem) && ctx.pc == 0x089B4128u) goto L_089B4128;
    return;
L_089B4128:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x089B4134u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 396u, 0x08AF9C28u>(ctx, &aot_mem) && ctx.pc == 0x089B4134u) goto L_089B4134;
    return;
L_089B4134:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B4140u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 219u, 0x0899D804u>(ctx, &aot_mem) && ctx.pc == 0x089B4140u) goto L_089B4140;
    return;
L_089B4140:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (16261u << 16u);
      if (branch_taken) {
          goto L_089B416C;
      }
      goto L_089B4148;
    }
L_089B4148:
    ctx.gpr[31] = (0x089B4150u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 431u, 0x08AF9F18u>(ctx, &aot_mem) && ctx.pc == 0x089B4150u) goto L_089B4150;
    return;
L_089B4150:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(864));
    ctx.gpr[31] = (0x089B415Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 396u, 0x08AF9C28u>(ctx, &aot_mem) && ctx.pc == 0x089B415Cu) goto L_089B415C;
    return;
L_089B415C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B4168u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 219u, 0x0899D804u>(ctx, &aot_mem) && ctx.pc == 0x089B4168u) goto L_089B4168;
    return;
L_089B4168:
    ctx.gpr[4] = (16261u << 16u);
    goto L_089B416C;
L_089B416C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B4188u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x089B4188u) goto L_089B4188;
    return;
L_089B4188:
    ctx.gpr[31] = (0x089B4190u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 213u, 0x089A0F58u>(ctx, &aot_mem) && ctx.pc == 0x089B4190u) goto L_089B4190;
    return;
L_089B4190:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B419Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 478u, 0x08AFA268u>(ctx, &aot_mem) && ctx.pc == 0x089B419Cu) goto L_089B419C;
    return;
L_089B419C:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B41D4;
      }
      goto L_089B41AC;
    }
L_089B41AC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    ctx.gpr[6] = (49024u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089B41C8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 116u, 0x0899CF04u>(ctx, &aot_mem) && ctx.pc == 0x089B41C8u) goto L_089B41C8;
    return;
L_089B41C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B41D4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 218u, 0x0899D7F4u>(ctx, &aot_mem) && ctx.pc == 0x089B41D4u) goto L_089B41D4;
    return;
L_089B41D4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089B41FCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 116u, 0x0899CF04u>(ctx, &aot_mem) && ctx.pc == 0x089B41FCu) goto L_089B41FC;
    return;
L_089B41FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B4208u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 440u, 0x08AF9F60u>(ctx, &aot_mem) && ctx.pc == 0x089B4208u) goto L_089B4208;
    return;
L_089B4208:
    ctx.gpr[31] = (0x089B4210u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4210u) goto L_089B4210;
    return;
L_089B4210:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.gpr[6] = (16000u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089B422Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 116u, 0x0899CF04u>(ctx, &aot_mem) && ctx.pc == 0x089B422Cu) goto L_089B422C;
    return;
L_089B422C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B423Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 114u, 0x0899CED4u>(ctx, &aot_mem) && ctx.pc == 0x089B423Cu) goto L_089B423C;
    return;
L_089B423C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B4248u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 398u, 0x08AF9C50u>(ctx, &aot_mem) && ctx.pc == 0x089B4248u) goto L_089B4248;
    return;
L_089B4248:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089B4260u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 281u, 0x0899DC5Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4260u) goto L_089B4260;
    return;
L_089B4260:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089B426Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089B426Cu) goto L_089B426C;
    return;
L_089B426C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B4288u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 220u, 0x0899D818u>(ctx, &aot_mem) && ctx.pc == 0x089B4288u) goto L_089B4288;
    return;
L_089B4288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B42C0;
      }
      goto L_089B4298;
    }
L_089B4298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B42C0;
      }
      goto L_089B42AC;
    }
L_089B42AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[6] = (0u | 27u);
    ctx.gpr[31] = (0x089B42C0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 106u, 0x089A07E8u>(ctx, &aot_mem) && ctx.pc == 0x089B42C0u) goto L_089B42C0;
    return;
L_089B42C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B4400;
      }
      goto L_089B42D4;
    }
L_089B42D4:
    ctx.gpr[4] = (16076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(312)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B4400;
      }
      goto L_089B42F4;
    }
L_089B42F4:
    ctx.gpr[31] = (0x089B42FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 468u, 0x08AFA1ECu>(ctx, &aot_mem) && ctx.pc == 0x089B42FCu) goto L_089B42FC;
    return;
L_089B42FC:
    ctx.gpr[4] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B4344;
      }
      goto L_089B4308;
    }
L_089B4308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(2001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4320;
      }
      goto L_089B4318;
    }
L_089B4318:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), 0u);
      if (branch_taken) {
          goto L_089B4344;
      }
      goto L_089B4320;
    }
L_089B4320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4344;
      }
      goto L_089B4330;
    }
L_089B4330:
    ctx.gpr[31] = (0x089B4338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 407u, 0x08AF9CE4u>(ctx, &aot_mem) && ctx.pc == 0x089B4338u) goto L_089B4338;
    return;
L_089B4338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    goto L_089B4344;
L_089B4344:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    ctx.gpr[31] = (0x089B4354u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 218u, 0x0899D7F4u>(ctx, &aot_mem) && ctx.pc == 0x089B4354u) goto L_089B4354;
    return;
L_089B4354:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B4364u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 379u, 0x08AF9A74u>(ctx, &aot_mem) && ctx.pc == 0x089B4364u) goto L_089B4364;
    return;
L_089B4364:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089B4370u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 379u, 0x08AF9A74u>(ctx, &aot_mem) && ctx.pc == 0x089B4370u) goto L_089B4370;
    return;
L_089B4370:
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B4400;
      }
      goto L_089B4384;
    }
L_089B4384:
    ctx.gpr[31] = (0x089B438Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 216u, 0x0899D7B4u>(ctx, &aot_mem) && ctx.pc == 0x089B438Cu) goto L_089B438C;
    return;
L_089B438C:
    ctx.gpr[31] = (0x089B4394u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 468u, 0x08AFA1ECu>(ctx, &aot_mem) && ctx.pc == 0x089B4394u) goto L_089B4394;
    return;
L_089B4394:
    ctx.gpr[4] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B43DC;
      }
      goto L_089B43A0;
    }
L_089B43A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(300) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B43DC;
      }
      goto L_089B43B0;
    }
L_089B43B0:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    ctx.gpr[6] = (49280u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089B43C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 116u, 0x0899CF04u>(ctx, &aot_mem) && ctx.pc == 0x089B43C8u) goto L_089B43C8;
    return;
L_089B43C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B43D4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 440u, 0x08AF9F60u>(ctx, &aot_mem) && ctx.pc == 0x089B43D4u) goto L_089B43D4;
    return;
L_089B43D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4400;
      }
      goto L_089B43DC;
    }
L_089B43DC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089B43F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 116u, 0x0899CF04u>(ctx, &aot_mem) && ctx.pc == 0x089B43F4u) goto L_089B43F4;
    return;
L_089B43F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B4400u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 440u, 0x08AF9F60u>(ctx, &aot_mem) && ctx.pc == 0x089B4400u) goto L_089B4400;
    return;
L_089B4400:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B441C;
      }
      goto L_089B4408;
    }
L_089B4408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B441C;
      }
      goto L_089B4418;
    }
L_089B4418:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), 0u);
    goto L_089B441C;
L_089B441C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4484;
      }
      goto L_089B4424;
    }
L_089B4424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4484;
      }
      goto L_089B4444;
    }
L_089B4444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(501) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4464;
      }
      goto L_089B4454;
    }
L_089B4454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B446C;
      }
      goto L_089B4464;
    }
L_089B4464:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), 0u);
      if (branch_taken) {
          goto L_089B4484;
      }
      goto L_089B446C;
    }
L_089B446C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4484;
      }
      goto L_089B4478;
    }
L_089B4478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    goto L_089B4484;
L_089B4484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B449C;
      }
      goto L_089B4494;
    }
L_089B4494:
    ctx.gpr[31] = (0x089B449Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 665u, 0x088876ACu>(ctx, &aot_mem) && ctx.pc == 0x089B449Cu) goto L_089B449C;
    return;
L_089B449C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B452C;
      }
      goto L_089B44B0;
    }
L_089B44B0:
    ctx.gpr[31] = (0x089B44B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089B44B8u) goto L_089B44B8;
    return;
L_089B44B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B44EC;
      }
      goto L_089B44C0;
    }
L_089B44C0:
    ctx.gpr[31] = (0x089B44C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 463u, 0x089A2034u>(ctx, &aot_mem) && ctx.pc == 0x089B44C8u) goto L_089B44C8;
    return;
L_089B44C8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    ctx.gpr[31] = (0x089B44D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x089B44D4u) goto L_089B44D4;
    return;
L_089B44D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B452C;
      }
      goto L_089B44EC;
    }
L_089B44EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B452C;
      }
      goto L_089B44FC;
    }
L_089B44FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B4518u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x089B4518u) goto L_089B4518;
    return;
L_089B4518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089B452C;
L_089B452C:
    ctx.gpr[31] = (0x089B4534u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 479u, 0x08AFA288u>(ctx, &aot_mem) && ctx.pc == 0x089B4534u) goto L_089B4534;
    return;
L_089B4534:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B459C;
      }
      goto L_089B453C;
    }
L_089B453C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B459C;
      }
      goto L_089B4558;
    }
L_089B4558:
    ctx.gpr[4] = (16243u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(928));
    ctx.gpr[31] = (0x089B4574u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x089B4574u) goto L_089B4574;
    return;
L_089B4574:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089B4580u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 394u, 0x08AF9BECu>(ctx, &aot_mem) && ctx.pc == 0x089B4580u) goto L_089B4580;
    return;
L_089B4580:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089B4590u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 117u, 0x0899CF20u>(ctx, &aot_mem) && ctx.pc == 0x089B4590u) goto L_089B4590;
    return;
L_089B4590:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B459Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 218u, 0x0899D7F4u>(ctx, &aot_mem) && ctx.pc == 0x089B459Cu) goto L_089B459C;
    return;
L_089B459C:
    ctx.gpr[31] = (0x089B45A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B45A4u) goto L_089B45A4;
    return;
L_089B45A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4734;
      }
      goto L_089B45AC;
    }
L_089B45AC:
    ctx.gpr[31] = (0x089B45B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 479u, 0x08AFA288u>(ctx, &aot_mem) && ctx.pc == 0x089B45B4u) goto L_089B45B4;
    return;
L_089B45B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4734;
      }
      goto L_089B45BC;
    }
L_089B45BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B4734;
      }
      goto L_089B45D4;
    }
L_089B45D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B4734;
      }
      goto L_089B45EC;
    }
L_089B45EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B4734;
      }
      goto L_089B4604;
    }
L_089B4604:
    ctx.gpr[31] = (0x089B460Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 818u, 0x08AFB8C0u>(ctx, &aot_mem) && ctx.pc == 0x089B460Cu) goto L_089B460C;
    return;
L_089B460C:
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(752)));
        goto L_089B462C;
    }
    goto L_089B4618;
L_089B4618:
    ctx.gpr[31] = (0x089B4620u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 818u, 0x08AFB8C0u>(ctx, &aot_mem) && ctx.pc == 0x089B4620u) goto L_089B4620;
    return;
L_089B4620:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4734;
      }
      goto L_089B4628;
    }
L_089B4628:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(752)));
    goto L_089B462C;
L_089B462C:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B4734;
      }
      goto L_089B4640;
    }
L_089B4640:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(756)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B4734;
      }
      goto L_089B4658;
    }
L_089B4658:
    ctx.gpr[31] = (0x089B4660u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 468u, 0x08AFA1ECu>(ctx, &aot_mem) && ctx.pc == 0x089B4660u) goto L_089B4660;
    return;
L_089B4660:
    ctx.gpr[4] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B4734;
      }
      goto L_089B466C;
    }
L_089B466C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4734;
      }
      goto L_089B467C;
    }
L_089B467C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4734;
      }
      goto L_089B4688;
    }
L_089B4688:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B4694u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 423u, 0x08AF9E14u>(ctx, &aot_mem) && ctx.pc == 0x089B4694u) goto L_089B4694;
    return;
L_089B4694:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B46A0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 426u, 0x08AF9E6Cu>(ctx, &aot_mem) && ctx.pc == 0x089B46A0u) goto L_089B46A0;
    return;
L_089B46A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B46ACu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9EA4u>(ctx, &aot_mem) && ctx.pc == 0x089B46ACu) goto L_089B46AC;
    return;
L_089B46AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B46B8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 429u, 0x08AF9ECCu>(ctx, &aot_mem) && ctx.pc == 0x089B46B8u) goto L_089B46B8;
    return;
L_089B46B8:
    ctx.gpr[31] = (0x089B46C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 437u, 0x08AF9F48u>(ctx, &aot_mem) && ctx.pc == 0x089B46C0u) goto L_089B46C0;
    return;
L_089B46C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65520u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x089B46DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 225u, 0x0899D8DCu>(ctx, &aot_mem) && ctx.pc == 0x089B46DCu) goto L_089B46DC;
    return;
L_089B46DC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(160));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089B46FCu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 126u, 0x0899D0B0u>(ctx, &aot_mem) && ctx.pc == 0x089B46FCu) goto L_089B46FC;
    return;
L_089B46FC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B4708u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 218u, 0x0899D7F4u>(ctx, &aot_mem) && ctx.pc == 0x089B4708u) goto L_089B4708;
    return;
L_089B4708:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(144));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089B4720u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 126u, 0x0899D0B0u>(ctx, &aot_mem) && ctx.pc == 0x089B4720u) goto L_089B4720;
    return;
L_089B4720:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B472Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 218u, 0x0899D7F4u>(ctx, &aot_mem) && ctx.pc == 0x089B472Cu) goto L_089B472C;
    return;
L_089B472C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B473C;
      }
      goto L_089B4734;
    }
L_089B4734:
    ctx.gpr[31] = (0x089B473Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 230u, 0x08A0DCCCu>(ctx, &aot_mem) && ctx.pc == 0x089B473Cu) goto L_089B473C;
    return;
L_089B473C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B47D0;
      }
      goto L_089B474C;
    }
L_089B474C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B47D0;
      }
      goto L_089B4760;
    }
L_089B4760:
    ctx.gpr[31] = (0x089B4768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 479u, 0x08AFA288u>(ctx, &aot_mem) && ctx.pc == 0x089B4768u) goto L_089B4768;
    return;
L_089B4768:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
        goto L_089B47A4;
    }
    goto L_089B4770;
L_089B4770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B47C0;
      }
      goto L_089B477C;
    }
L_089B477C:
    ctx.gpr[31] = (0x089B4784u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B4784u) goto L_089B4784;
    return;
L_089B4784:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B47C0;
      }
      goto L_089B478C;
    }
L_089B478C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B47C0;
      }
      goto L_089B47A0;
    }
L_089B47A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    goto L_089B47A4;
L_089B47A4:
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B47C0;
      }
      goto L_089B47B0;
    }
L_089B47B0:
    ctx.gpr[31] = (0x089B47B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 357u, 0x08AF994Cu>(ctx, &aot_mem) && ctx.pc == 0x089B47B8u) goto L_089B47B8;
    return;
L_089B47B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B47C8;
      }
      goto L_089B47C0;
    }
L_089B47C0:
    ctx.gpr[31] = (0x089B47C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 432u, 0x089A1E6Cu>(ctx, &aot_mem) && ctx.pc == 0x089B47C8u) goto L_089B47C8;
    return;
L_089B47C8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1264), 0u);
      if (branch_taken) {
          goto L_089B51E8;
      }
      goto L_089B47D0;
    }
L_089B47D0:
    ctx.gpr[31] = (0x089B47D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 647u, 0x0899F5E0u>(ctx, &aot_mem) && ctx.pc == 0x089B47D8u) goto L_089B47D8;
    return;
L_089B47D8:
    ctx.gpr[31] = (0x089B47E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 511u, 0x089A6DF8u>(ctx, &aot_mem) && ctx.pc == 0x089B47E0u) goto L_089B47E0;
    return;
L_089B47E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B4800;
      }
      goto L_089B47F0;
    }
L_089B47F0:
    ctx.gpr[31] = (0x089B47F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 61u, 0x089AC41Cu>(ctx, &aot_mem) && ctx.pc == 0x089B47F8u) goto L_089B47F8;
    return;
L_089B47F8:
    ctx.gpr[31] = (0x089B4800u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 510u, 0x0899ED50u>(ctx, &aot_mem) && ctx.pc == 0x089B4800u) goto L_089B4800;
    return;
L_089B4800:
    ctx.gpr[31] = (0x089B4808u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 113u, 0x089AC978u>(ctx, &aot_mem) && ctx.pc == 0x089B4808u) goto L_089B4808;
    return;
L_089B4808:
    ctx.gpr[31] = (0x089B4810u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089B4810u) goto L_089B4810;
    return;
L_089B4810:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4884;
      }
      goto L_089B4818;
    }
L_089B4818:
    ctx.gpr[31] = (0x089B4820u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 479u, 0x08AFA288u>(ctx, &aot_mem) && ctx.pc == 0x089B4820u) goto L_089B4820;
    return;
L_089B4820:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4884;
      }
      goto L_089B4828;
    }
L_089B4828:
    ctx.gpr[31] = (0x089B4830u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 439u, 0x08AF9F58u>(ctx, &aot_mem) && ctx.pc == 0x089B4830u) goto L_089B4830;
    return;
L_089B4830:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4884;
      }
      goto L_089B4838;
    }
L_089B4838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4858;
      }
      goto L_089B4844;
    }
L_089B4844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B4884;
      }
      goto L_089B4858;
    }
L_089B4858:
    ctx.gpr[31] = (0x089B4860u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 173u, 0x089A0BDCu>(ctx, &aot_mem) && ctx.pc == 0x089B4860u) goto L_089B4860;
    return;
L_089B4860:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4884;
      }
      goto L_089B4868;
    }
L_089B4868:
    ctx.gpr[31] = (0x089B4870u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 183u, 0x089A0CF0u>(ctx, &aot_mem) && ctx.pc == 0x089B4870u) goto L_089B4870;
    return;
L_089B4870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (65472u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_089B4884;
L_089B4884:
    ctx.gpr[31] = (0x089B488Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1167u, 0x08893F0Cu>(ctx, &aot_mem) && ctx.pc == 0x089B488Cu) goto L_089B488C;
    return;
L_089B488C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(784));
    ctx.gpr[31] = (0x089B4898u);
    ctx.gpr[5] = (0u | 248u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 226u, 0x08B00EB4u>(ctx, &aot_mem) && ctx.pc == 0x089B4898u) goto L_089B4898;
    return;
L_089B4898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B48B8;
      }
      goto L_089B48A8;
    }
L_089B48A8:
    ctx.gpr[31] = (0x089B48B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 14u, 0x089A0134u>(ctx, &aot_mem) && ctx.pc == 0x089B48B0u) goto L_089B48B0;
    return;
L_089B48B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B48D0;
      }
      goto L_089B48B8;
    }
L_089B48B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B48D0;
      }
      goto L_089B48C8;
    }
L_089B48C8:
    ctx.gpr[31] = (0x089B48D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 37u, 0x089A02C4u>(ctx, &aot_mem) && ctx.pc == 0x089B48D0u) goto L_089B48D0;
    return;
L_089B48D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B48F0;
      }
      goto L_089B48E0;
    }
L_089B48E0:
    ctx.gpr[31] = (0x089B48E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 302u, 0x089ADB20u>(ctx, &aot_mem) && ctx.pc == 0x089B48E8u) goto L_089B48E8;
    return;
L_089B48E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4908;
      }
      goto L_089B48F0;
    }
L_089B48F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4908;
      }
      goto L_089B4900;
    }
L_089B4900:
    ctx.gpr[31] = (0x089B4908u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 75u, 0x089A056Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4908u) goto L_089B4908;
    return;
L_089B4908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4920;
      }
      goto L_089B4918;
    }
L_089B4918:
    ctx.gpr[31] = (0x089B4920u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 193u, 0x089A0DA0u>(ctx, &aot_mem) && ctx.pc == 0x089B4920u) goto L_089B4920;
    return;
L_089B4920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B499C;
      }
      goto L_089B4934;
    }
L_089B4934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B499C;
      }
      goto L_089B4944;
    }
L_089B4944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B499C;
      }
      goto L_089B4954;
    }
L_089B4954:
    ctx.gpr[31] = (0x089B495Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x089B495Cu) goto L_089B495C;
    return;
L_089B495C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28908)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28912)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089B4974u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 441u, 0x08AF6264u>(ctx, &aot_mem) && ctx.pc == 0x089B4974u) goto L_089B4974;
    return;
L_089B4974:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089B4980u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x089B4980u) goto L_089B4980;
    return;
L_089B4980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65520u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089B499C;
L_089B499C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B49B0;
      }
      goto L_089B49A8;
    }
L_089B49A8:
    ctx.gpr[31] = (0x089B49B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 788u, 0x089BB5D4u>(ctx, &aot_mem) && ctx.pc == 0x089B49B0u) goto L_089B49B0;
    return;
L_089B49B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B49C4;
    }
L_089B49C4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17504)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B49DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4A28;
      }
      goto L_089B49F0;
    }
L_089B49F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B49FCu);
    ctx.gpr[5] = (0u | 158u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B49FCu) goto L_089B49FC;
    return;
L_089B49FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4A58;
      }
      goto L_089B4A04;
    }
L_089B4A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B4A14u);
    ctx.gpr[6] = (0u | 158u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4A14u) goto L_089B4A14;
    return;
L_089B4A14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B4A20u);
    ctx.gpr[5] = (0u | 119u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089B4A20u) goto L_089B4A20;
    return;
L_089B4A20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4A58;
      }
      goto L_089B4A28;
    }
L_089B4A28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B4A34u);
    ctx.gpr[5] = (0u | 157u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B4A34u) goto L_089B4A34;
    return;
L_089B4A34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4A58;
      }
      goto L_089B4A3C;
    }
L_089B4A3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B4A4Cu);
    ctx.gpr[6] = (0u | 157u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4A4Cu) goto L_089B4A4C;
    return;
L_089B4A4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B4A58u);
    ctx.gpr[5] = (0u | 118u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089B4A58u) goto L_089B4A58;
    return;
L_089B4A58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4A60;
    }
L_089B4A60:
    ctx.gpr[31] = (0x089B4A68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 358u, 0x089ADE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4A68u) goto L_089B4A68;
    return;
L_089B4A68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4A70;
    }
L_089B4A70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4A78;
    }
L_089B4A78:
    ctx.gpr[31] = (0x089B4A80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 247u, 0x0888536Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4A80u) goto L_089B4A80;
    return;
L_089B4A80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4A88;
    }
L_089B4A88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4ABC;
      }
      goto L_089B4A94;
    }
L_089B4A94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089B4AE0;
      }
      goto L_089B4AA4;
    }
L_089B4AA4:
    ctx.gpr[31] = (0x089B4AACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 850u, 0x089A38ECu>(ctx, &aot_mem) && ctx.pc == 0x089B4AACu) goto L_089B4AAC;
    return;
L_089B4AAC:
    ctx.gpr[31] = (0x089B4AB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 870u, 0x089A3ABCu>(ctx, &aot_mem) && ctx.pc == 0x089B4AB4u) goto L_089B4AB4;
    return;
L_089B4AB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4AF4;
      }
      goto L_089B4ABC;
    }
L_089B4ABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089B4AD8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4AD8u) goto L_089B4AD8;
    return;
L_089B4AD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B51E8;
      }
      goto L_089B4AE0;
    }
L_089B4AE0:
    ctx.gpr[31] = (0x089B4AE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 604u, 0x088E2D08u>(ctx, &aot_mem) && ctx.pc == 0x089B4AE8u) goto L_089B4AE8;
    return;
L_089B4AE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4B0C;
      }
      goto L_089B4AF4;
    }
L_089B4AF4:
    ctx.gpr[31] = (0x089B4AFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B4AFCu) goto L_089B4AFC;
    return;
L_089B4AFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4B14;
      }
      goto L_089B4B04;
    }
L_089B4B04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4B7C;
      }
      goto L_089B4B0C;
    }
L_089B4B0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B51E8;
      }
      goto L_089B4B14;
    }
L_089B4B14:
    ctx.gpr[31] = (0x089B4B1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 458u, 0x08AFA16Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4B1Cu) goto L_089B4B1C;
    return;
L_089B4B1C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B4B7C;
      }
      goto L_089B4B28;
    }
L_089B4B28:
    ctx.gpr[31] = (0x089B4B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4B30u) goto L_089B4B30;
    return;
L_089B4B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B4B7C;
      }
      goto L_089B4B40;
    }
L_089B4B40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B4B64;
      }
      goto L_089B4B50;
    }
L_089B4B50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4B7C;
      }
      goto L_089B4B64;
    }
L_089B4B64:
    ctx.gpr[31] = (0x089B4B6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4B6Cu) goto L_089B4B6C;
    return;
L_089B4B6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[31] = (0x089B4B7Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x089B4B7Cu) goto L_089B4B7C;
    return;
L_089B4B7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4B84;
    }
L_089B4B84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4B8C;
    }
L_089B4B8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4B94;
    }
L_089B4B94:
    ctx.gpr[31] = (0x089B4B9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089B5228;
L_089B4B9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4BA4;
    }
L_089B4BA4:
    ctx.gpr[31] = (0x089B4BACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 228u, 0x08885278u>(ctx, &aot_mem) && ctx.pc == 0x089B4BACu) goto L_089B4BAC;
    return;
L_089B4BAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4BB4;
    }
L_089B4BB4:
    ctx.gpr[31] = (0x089B4BBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 194u, 0x08885034u>(ctx, &aot_mem) && ctx.pc == 0x089B4BBCu) goto L_089B4BBC;
    return;
L_089B4BBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4BC4;
    }
L_089B4BC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4BCC;
    }
L_089B4BCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4BD4;
    }
L_089B4BD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4C48;
      }
      goto L_089B4BE0;
    }
L_089B4BE0:
    ctx.gpr[31] = (0x089B4BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 346u, 0x08AF98C8u>(ctx, &aot_mem) && ctx.pc == 0x089B4BE8u) goto L_089B4BE8;
    return;
L_089B4BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4C64;
      }
      goto L_089B4BF8;
    }
L_089B4BF8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[31] = (0x089B4C08u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6304));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4C08u) goto L_089B4C08;
    return;
L_089B4C08:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(968));
    ctx.gpr[31] = (0x089B4C14u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 817u, 0x08AFB8A4u>(ctx, &aot_mem) && ctx.pc == 0x089B4C14u) goto L_089B4C14;
    return;
L_089B4C14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(968)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(972)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(960), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(964), ctx.gpr[6]);
    ctx.gpr[31] = (0x089B4C38u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 223u, 0x0899D864u>(ctx, &aot_mem) && ctx.pc == 0x089B4C38u) goto L_089B4C38;
    return;
L_089B4C38:
    ctx.gpr[31] = (0x089B4C40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 630u, 0x089AADBCu>(ctx, &aot_mem) && ctx.pc == 0x089B4C40u) goto L_089B4C40;
    return;
L_089B4C40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4C64;
      }
      goto L_089B4C48;
    }
L_089B4C48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[31] = (0x089B4C64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x089B4C64u) goto L_089B4C64;
    return;
L_089B4C64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4C6C;
    }
L_089B4C6C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1384));
    ctx.gpr[31] = (0x089B4C7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6304));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 223u, 0x0899D864u>(ctx, &aot_mem) && ctx.pc == 0x089B4C7Cu) goto L_089B4C7C;
    return;
L_089B4C7C:
    ctx.gpr[31] = (0x089B4C84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 630u, 0x089AADBCu>(ctx, &aot_mem) && ctx.pc == 0x089B4C84u) goto L_089B4C84;
    return;
L_089B4C84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4C8C;
    }
L_089B4C8C:
    ctx.gpr[31] = (0x089B4C94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 488u, 0x0899EC44u>(ctx, &aot_mem) && ctx.pc == 0x089B4C94u) goto L_089B4C94;
    return;
L_089B4C94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4C9C;
    }
L_089B4C9C:
    ctx.gpr[31] = (0x089B4CA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 695u, 0x088D7784u>(ctx, &aot_mem) && ctx.pc == 0x089B4CA4u) goto L_089B4CA4;
    return;
L_089B4CA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4CAC;
    }
L_089B4CAC:
    ctx.gpr[31] = (0x089B4CB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 882u, 0x088DBB8Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4CB4u) goto L_089B4CB4;
    return;
L_089B4CB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4CBC;
    }
L_089B4CBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4D04;
      }
      goto L_089B4CC8;
    }
L_089B4CC8:
    ctx.gpr[31] = (0x089B4CD0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 413u, 0x08AF9D7Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4CD0u) goto L_089B4CD0;
    return;
L_089B4CD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4D04;
      }
      goto L_089B4CD8;
    }
L_089B4CD8:
    ctx.gpr[5] = (16390u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 2706u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[31] = (0x089B4CF0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 594u, 0x088870A0u>(ctx, &aot_mem) && ctx.pc == 0x089B4CF0u) goto L_089B4CF0;
    return;
L_089B4CF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4D04;
      }
      goto L_089B4CF8;
    }
L_089B4CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[31] = (0x089B4D04u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 228u, 0x08898D60u>(ctx, &aot_mem) && ctx.pc == 0x089B4D04u) goto L_089B4D04;
    return;
L_089B4D04:
    ctx.gpr[31] = (0x089B4D0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 346u, 0x088D57D8u>(ctx, &aot_mem) && ctx.pc == 0x089B4D0Cu) goto L_089B4D0C;
    return;
L_089B4D0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4D14;
    }
L_089B4D14:
    ctx.gpr[31] = (0x089B4D1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 580u, 0x089A27E4u>(ctx, &aot_mem) && ctx.pc == 0x089B4D1Cu) goto L_089B4D1C;
    return;
L_089B4D1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4D24;
    }
L_089B4D24:
    ctx.gpr[31] = (0x089B4D2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 419u, 0x0899E554u>(ctx, &aot_mem) && ctx.pc == 0x089B4D2Cu) goto L_089B4D2C;
    return;
L_089B4D2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4D34;
    }
L_089B4D34:
    ctx.gpr[31] = (0x089B4D3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 804u, 0x0899FFF0u>(ctx, &aot_mem) && ctx.pc == 0x089B4D3Cu) goto L_089B4D3C;
    return;
L_089B4D3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4D44;
    }
L_089B4D44:
    ctx.gpr[31] = (0x089B4D4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 390u, 0x089A9D4Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4D4Cu) goto L_089B4D4C;
    return;
L_089B4D4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4D54;
    }
L_089B4D54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4D5C;
    }
L_089B4D5C:
    ctx.gpr[31] = (0x089B4D64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 625u, 0x0888AA64u>(ctx, &aot_mem) && ctx.pc == 0x089B4D64u) goto L_089B4D64;
    return;
L_089B4D64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B51E8;
      }
      goto L_089B4D6C;
    }
L_089B4D6C:
    ctx.gpr[31] = (0x089B4D74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 444u, 0x0899E708u>(ctx, &aot_mem) && ctx.pc == 0x089B4D74u) goto L_089B4D74;
    return;
L_089B4D74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4D7C;
    }
L_089B4D7C:
    ctx.gpr[31] = (0x089B4D84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 442u, 0x089AA044u>(ctx, &aot_mem) && ctx.pc == 0x089B4D84u) goto L_089B4D84;
    return;
L_089B4D84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4D8C;
    }
L_089B4D8C:
    ctx.gpr[31] = (0x089B4D94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 471u, 0x0899EB00u>(ctx, &aot_mem) && ctx.pc == 0x089B4D94u) goto L_089B4D94;
    return;
L_089B4D94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4D9C;
    }
L_089B4D9C:
    ctx.gpr[31] = (0x089B4DA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 25u, 0x089A4160u>(ctx, &aot_mem) && ctx.pc == 0x089B4DA4u) goto L_089B4DA4;
    return;
L_089B4DA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4DAC;
    }
L_089B4DAC:
    ctx.gpr[31] = (0x089B4DB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 451u, 0x088DA0F4u>(ctx, &aot_mem) && ctx.pc == 0x089B4DB4u) goto L_089B4DB4;
    return;
L_089B4DB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4DBC;
    }
L_089B4DBC:
    ctx.gpr[31] = (0x089B4DC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 516u, 0x089A236Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4DC4u) goto L_089B4DC4;
    return;
L_089B4DC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4DCC;
    }
L_089B4DCC:
    ctx.gpr[31] = (0x089B4DD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B4DD4u) goto L_089B4DD4;
    return;
L_089B4DD4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4DDC;
    }
L_089B4DDC:
    ctx.gpr[31] = (0x089B4DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 346u, 0x08AF98C8u>(ctx, &aot_mem) && ctx.pc == 0x089B4DE4u) goto L_089B4DE4;
    return;
L_089B4DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1396)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E10;
      }
      goto L_089B4DF4;
    }
L_089B4DF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4E00;
    }
L_089B4E00:
    ctx.gpr[31] = (0x089B4E08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 545u, 0x0884E1D0u>(ctx, &aot_mem) && ctx.pc == 0x089B4E08u) goto L_089B4E08;
    return;
L_089B4E08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4E10;
    }
L_089B4E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E90;
      }
      goto L_089B4E1C;
    }
L_089B4E1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E70;
      }
      goto L_089B4E28;
    }
L_089B4E28:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[31] = (0x089B4E38u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6304));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4E38u) goto L_089B4E38;
    return;
L_089B4E38:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(984));
    ctx.gpr[31] = (0x089B4E44u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 817u, 0x08AFB8A4u>(ctx, &aot_mem) && ctx.pc == 0x089B4E44u) goto L_089B4E44;
    return;
L_089B4E44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(984)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(988)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(976), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(980), ctx.gpr[6]);
    ctx.gpr[31] = (0x089B4E68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 223u, 0x0899D864u>(ctx, &aot_mem) && ctx.pc == 0x089B4E68u) goto L_089B4E68;
    return;
L_089B4E68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E80;
      }
      goto L_089B4E70;
    }
L_089B4E70:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1384));
    ctx.gpr[31] = (0x089B4E80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6304));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 223u, 0x0899D864u>(ctx, &aot_mem) && ctx.pc == 0x089B4E80u) goto L_089B4E80;
    return;
L_089B4E80:
    ctx.gpr[31] = (0x089B4E88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 630u, 0x089AADBCu>(ctx, &aot_mem) && ctx.pc == 0x089B4E88u) goto L_089B4E88;
    return;
L_089B4E88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4E90;
    }
L_089B4E90:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B4EA0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x089B4EA0u) goto L_089B4EA0;
    return;
L_089B4EA0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089B4EB4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 549u, 0x089BA410u>(ctx, &aot_mem) && ctx.pc == 0x089B4EB4u) goto L_089B4EB4;
    return;
L_089B4EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089B4ECCu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4ECCu) goto L_089B4ECC;
    return;
L_089B4ECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EEC;
      }
      goto L_089B4EE0;
    }
L_089B4EE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1755)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B505C;
      }
      goto L_089B4EEC;
    }
L_089B4EEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1755)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4F04;
      }
      goto L_089B4EF8;
    }
L_089B4EF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1755)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1755), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089B4F04;
L_089B4F04:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
      if (branch_taken) {
          goto L_089B505C;
      }
      goto L_089B4F18;
    }
L_089B4F18:
    ctx.gpr[31] = (0x089B4F20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4F20u) goto L_089B4F20;
    return;
L_089B4F20:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B4F30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4F30u) goto L_089B4F30;
    return;
L_089B4F30:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B4F40u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 115u, 0x0899CEECu>(ctx, &aot_mem) && ctx.pc == 0x089B4F40u) goto L_089B4F40;
    return;
L_089B4F40:
    ctx.gpr[31] = (0x089B4F48u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 217u, 0x0899D7DCu>(ctx, &aot_mem) && ctx.pc == 0x089B4F48u) goto L_089B4F48;
    return;
L_089B4F48:
    ctx.gpr[4] = (17692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B505C;
      }
      goto L_089B4F64;
    }
L_089B4F64:
    ctx.gpr[31] = (0x089B4F6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 353u, 0x08AF991Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4F6Cu) goto L_089B4F6C;
    return;
L_089B4F6C:
    ctx.gpr[4] = (ctx.gpr[2] & 127u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15044u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (15897u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089B4FA0u);
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 353u, 0x08AF991Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4FA0u) goto L_089B4FA0;
    return;
L_089B4FA0:
    ctx.gpr[4] = (ctx.gpr[2] & 127u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-64));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (15333u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 24642u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x089B4FD0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1008), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 353u, 0x08AF991Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4FD0u) goto L_089B4FD0;
    return;
L_089B4FD0:
    ctx.gpr[4] = (ctx.gpr[2] & 127u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-64));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.gpr[4] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[28] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27688)));
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089B501Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1012), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 353u, 0x08AF991Cu>(ctx, &aot_mem) && ctx.pc == 0x089B501Cu) goto L_089B501C;
    return;
L_089B501C:
    ctx.gpr[11] = (ctx.gpr[2] & 4095u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(2000));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (0u | 255u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089B505Cu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 147u, 0x089292F8u>(ctx, &aot_mem) && ctx.pc == 0x089B505Cu) goto L_089B505C;
    return;
L_089B505C:
    ctx.gpr[31] = (0x089B5064u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 474u, 0x088B6B30u>(ctx, &aot_mem) && ctx.pc == 0x089B5064u) goto L_089B5064;
    return;
L_089B5064:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5080;
      }
      goto L_089B5070;
    }
L_089B5070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5080;
      }
      goto L_089B507C;
    }
L_089B507C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(0u));
    goto L_089B5080;
L_089B5080:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5104;
      }
      goto L_089B5094;
    }
L_089B5094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5104;
      }
      goto L_089B50A0;
    }
L_089B50A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5104;
      }
      goto L_089B50B0;
    }
L_089B50B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x089B50BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B50BCu) goto L_089B50BC;
    return;
L_089B50BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5104;
      }
      goto L_089B50C4;
    }
L_089B50C4:
    ctx.gpr[31] = (0x089B50CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 846u, 0x0889FE44u>(ctx, &aot_mem) && ctx.pc == 0x089B50CCu) goto L_089B50CC;
    return;
L_089B50CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5104;
      }
      goto L_089B50D4;
    }
L_089B50D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5104;
      }
      goto L_089B50E8;
    }
L_089B50E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5104u);
    ctx.gpr[5] = (0u | 120u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089B5104u) goto L_089B5104;
    return;
L_089B5104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1984)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089B5144;
      }
      goto L_089B5110;
    }
L_089B5110:
    ctx.gpr[31] = (0x089B5118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 346u, 0x08AF98C8u>(ctx, &aot_mem) && ctx.pc == 0x089B5118u) goto L_089B5118;
    return;
L_089B5118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1988)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5144;
      }
      goto L_089B5128;
    }
L_089B5128:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5138u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089B5138u) goto L_089B5138;
    return;
L_089B5138:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1984), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1988), 0u);
    goto L_089B5144;
L_089B5144:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29143)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5184;
      }
      goto L_089B5154;
    }
L_089B5154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5184;
      }
      goto L_089B5164;
    }
L_089B5164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5184;
      }
      goto L_089B5170;
    }
L_089B5170:
    ctx.gpr[31] = (0x089B5178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5178u) goto L_089B5178;
    return;
L_089B5178:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5184u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 67u, 0x089A43B4u>(ctx, &aot_mem) && ctx.pc == 0x089B5184u) goto L_089B5184;
    return;
L_089B5184:
    ctx.gpr[31] = (0x089B518Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B518Cu) goto L_089B518C;
    return;
L_089B518C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B51E8;
      }
      goto L_089B5194;
    }
L_089B5194:
    ctx.gpr[31] = (0x089B519Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 823u, 0x08AFB920u>(ctx, &aot_mem) && ctx.pc == 0x089B519Cu) goto L_089B519C;
    return;
L_089B519C:
    ctx.gpr[31] = (0x089B51A4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 822u, 0x08AFB918u>(ctx, &aot_mem) && ctx.pc == 0x089B51A4u) goto L_089B51A4;
    return;
L_089B51A4:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B51E8;
      }
      goto L_089B51B0;
    }
L_089B51B0:
    ctx.gpr[31] = (0x089B51B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 468u, 0x08AFA1ECu>(ctx, &aot_mem) && ctx.pc == 0x089B51B8u) goto L_089B51B8;
    return;
L_089B51B8:
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B51E8;
      }
      goto L_089B51C4;
    }
L_089B51C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B51E8;
      }
      goto L_089B51D0;
    }
L_089B51D0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 52u);
    ctx.gpr[31] = (0x089B51E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x089B51E8u) goto L_089B51E8;
    return;
L_089B51E8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1416)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1420)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1424)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1428)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1432)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1436)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1444)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1448)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1452)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1456)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1460)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1464)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1468)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1472));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5228:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(604)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089B5294;
      }
      goto L_089B526C;
    }
L_089B526C:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B52A4;
      }
      goto L_089B528C;
    }
L_089B528C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B53F4;
      }
      goto L_089B5294;
    }
L_089B5294:
    ctx.gpr[31] = (0x089B529Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089B529Cu) goto L_089B529C;
    return;
L_089B529C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C70;
      }
      goto L_089B52A4;
    }
L_089B52A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1796)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B52E4;
      }
      goto L_089B52BC;
    }
L_089B52BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 165u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B52F8;
      }
      goto L_089B52CC;
    }
L_089B52CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B52DCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 74u, 0x0888C54Cu>(ctx, &aot_mem) && ctx.pc == 0x089B52DCu) goto L_089B52DC;
    return;
L_089B52DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5334;
      }
      goto L_089B52E4;
    }
L_089B52E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B52F0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089B52F0u) goto L_089B52F0;
    return;
L_089B52F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C70;
      }
      goto L_089B52F8;
    }
L_089B52F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5380;
      }
      goto L_089B5308;
    }
L_089B5308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 112u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5368;
      }
      goto L_089B531C;
    }
L_089B531C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B532Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 271u, 0x08885544u>(ctx, &aot_mem) && ctx.pc == 0x089B532Cu) goto L_089B532C;
    return;
L_089B532C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5350;
      }
      goto L_089B5334;
    }
L_089B5334:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_089B5524;
    }
    goto L_089B5348;
L_089B5348:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089B559C;
      }
      goto L_089B5350;
    }
L_089B5350:
    ctx.gpr[31] = (0x089B5358u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x089B5358u) goto L_089B5358;
    return;
L_089B5358:
    ctx.gpr[31] = (0x089B5360u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089B5360u) goto L_089B5360;
    return;
L_089B5360:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C70;
      }
      goto L_089B5368;
    }
L_089B5368:
    ctx.gpr[31] = (0x089B5370u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x089B5370u) goto L_089B5370;
    return;
L_089B5370:
    ctx.gpr[31] = (0x089B5378u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089B5378u) goto L_089B5378;
    return;
L_089B5378:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C70;
      }
      goto L_089B5380;
    }
L_089B5380:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B5390u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 144u, 0x0888CAE0u>(ctx, &aot_mem) && ctx.pc == 0x089B5390u) goto L_089B5390;
    return;
L_089B5390:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B53DC;
      }
      goto L_089B5398;
    }
L_089B5398:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(540)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B53C0;
      }
      goto L_089B53A8;
    }
L_089B53A8:
    ctx.gpr[31] = (0x089B53B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x089B53B0u) goto L_089B53B0;
    return;
L_089B53B0:
    ctx.gpr[31] = (0x089B53B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089B53B8u) goto L_089B53B8;
    return;
L_089B53B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B53CC;
      }
      goto L_089B53C0;
    }
L_089B53C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B53CCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089B53CCu) goto L_089B53CC;
    return;
L_089B53CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B5C70;
      }
      goto L_089B53DC;
    }
L_089B53DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B5334;
      }
      goto L_089B53F4;
    }
L_089B53F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B541C;
      }
      goto L_089B5404;
    }
L_089B5404:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B5414u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 74u, 0x0888C54Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5414u) goto L_089B5414;
    return;
L_089B5414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5334;
      }
      goto L_089B541C;
    }
L_089B541C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B54BC;
      }
      goto L_089B5428;
    }
L_089B5428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B54BC;
      }
      goto L_089B5438;
    }
L_089B5438:
    ctx.gpr[31] = (0x089B5440u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 716u, 0x088879B0u>(ctx, &aot_mem) && ctx.pc == 0x089B5440u) goto L_089B5440;
    return;
L_089B5440:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5470;
      }
      goto L_089B5448;
    }
L_089B5448:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B5460u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 472u, 0x0888E3F0u>(ctx, &aot_mem) && ctx.pc == 0x089B5460u) goto L_089B5460;
    return;
L_089B5460:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5334;
      }
      goto L_089B5470;
    }
L_089B5470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B54A8;
      }
      goto L_089B5480;
    }
L_089B5480:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 11u);
    ctx.gpr[31] = (0x089B5498u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 472u, 0x0888E3F0u>(ctx, &aot_mem) && ctx.pc == 0x089B5498u) goto L_089B5498;
    return;
L_089B5498:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5334;
      }
      goto L_089B54A8;
    }
L_089B54A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B54B4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089B54B4u) goto L_089B54B4;
    return;
L_089B54B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5334;
      }
      goto L_089B54BC;
    }
L_089B54BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B54CCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 74u, 0x0888C54Cu>(ctx, &aot_mem) && ctx.pc == 0x089B54CCu) goto L_089B54CC;
    return;
L_089B54CC:
    ctx.gpr[31] = (0x089B54D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B54D4u) goto L_089B54D4;
    return;
L_089B54D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5334;
      }
      goto L_089B54DC;
    }
L_089B54DC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5334;
      }
      goto L_089B54EC;
    }
L_089B54EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5334;
      }
      goto L_089B54F8;
    }
L_089B54F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(601))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089B5334;
      }
      goto L_089B5504;
    }
L_089B5504:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5334;
      }
      goto L_089B5514;
    }
L_089B5514:
    ctx.gpr[31] = (0x089B551Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 474u, 0x088868F4u>(ctx, &aot_mem) && ctx.pc == 0x089B551Cu) goto L_089B551C;
    return;
L_089B551C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C70;
      }
      goto L_089B5524;
    }
L_089B5524:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089B559C;
      }
      goto L_089B5534;
    }
L_089B5534:
    ctx.gpr[31] = (0x089B553Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B553Cu) goto L_089B553C;
    return;
L_089B553C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089B5550;
      }
      goto L_089B5544;
    }
L_089B5544:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B5618;
      }
      goto L_089B5550;
    }
L_089B5550:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B5618;
      }
      goto L_089B555C;
    }
L_089B555C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089B5618;
      }
      goto L_089B5568;
    }
L_089B5568:
    ctx.gpr[31] = (0x089B5570u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 859u, 0x0889FEC0u>(ctx, &aot_mem) && ctx.pc == 0x089B5570u) goto L_089B5570;
    return;
L_089B5570:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5618;
      }
      goto L_089B5578;
    }
L_089B5578:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5604;
      }
      goto L_089B5598;
    }
L_089B5598:
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    goto L_089B559C;
L_089B559C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B55ACu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 128u, 0x089BC858u>(ctx, &aot_mem) && ctx.pc == 0x089B55ACu) goto L_089B55AC;
    return;
L_089B55AC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
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
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B56EC;
      }
      goto L_089B55FC;
    }
L_089B55FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
      if (branch_taken) {
          goto L_089B5694;
      }
      goto L_089B5604;
    }
L_089B5604:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x089B5610u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 241u, 0x089BD1A0u>(ctx, &aot_mem) && ctx.pc == 0x089B5610u) goto L_089B5610;
    return;
L_089B5610:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C70;
      }
      goto L_089B5618;
    }
L_089B5618:
    ctx.gpr[31] = (0x089B5620u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089B5620u) goto L_089B5620;
    return;
L_089B5620:
    ctx.gpr[31] = (0x089B5628u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B5628u) goto L_089B5628;
    return;
L_089B5628:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089B5640;
      }
      goto L_089B5630;
    }
L_089B5630:
    ctx.gpr[31] = (0x089B5638u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 474u, 0x088868F4u>(ctx, &aot_mem) && ctx.pc == 0x089B5638u) goto L_089B5638;
    return;
L_089B5638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B565C;
      }
      goto L_089B5640;
    }
L_089B5640:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B565C;
      }
      goto L_089B564C;
    }
L_089B564C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1796), ctx.gpr[4]);
    goto L_089B565C;
L_089B565C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5668u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089B5668u) goto L_089B5668;
    return;
L_089B5668:
    ctx.gpr[31] = (0x089B5670u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B5670u) goto L_089B5670;
    return;
L_089B5670:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5684;
      }
      goto L_089B5678;
    }
L_089B5678:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089B5684u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 331u, 0x088EE3ACu>(ctx, &aot_mem) && ctx.pc == 0x089B5684u) goto L_089B5684;
    return;
L_089B5684:
    ctx.gpr[31] = (0x089B568Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 210u, 0x089ED530u>(ctx, &aot_mem) && ctx.pc == 0x089B568Cu) goto L_089B568C;
    return;
L_089B568C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C70;
      }
      goto L_089B5694;
    }
L_089B5694:
    ctx.gpr[5] = (16512u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089B5700;
      }
      goto L_089B56A0;
    }
L_089B56A0:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B5700;
      }
      goto L_089B56B0;
    }
L_089B56B0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B56EC;
      }
      goto L_089B56D4;
    }
L_089B56D4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B5700;
      }
      goto L_089B56EC;
    }
L_089B56EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B56F8u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089B56F8u) goto L_089B56F8;
    return;
L_089B56F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B571C;
      }
      goto L_089B5700;
    }
L_089B5700:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B571C;
      }
      goto L_089B5710;
    }
L_089B5710:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B571Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089B571Cu) goto L_089B571C;
    return;
L_089B571C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B578C;
      }
      goto L_089B5734;
    }
L_089B5734:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B5784;
      }
      goto L_089B5774;
    }
L_089B5774:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089B5784;
L_089B5784:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B57A0;
      }
      goto L_089B578C;
    }
L_089B578C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089B57A0;
L_089B57A0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B57EC;
      }
      goto L_089B57B4;
    }
L_089B57B4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17248)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B57CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089B57F0;
      }
      goto L_089B57D4;
    }
L_089B57D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089B57F0;
      }
      goto L_089B57DC;
    }
L_089B57DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_089B57F0;
      }
      goto L_089B57E4;
    }
L_089B57E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 8u);
      if (branch_taken) {
          goto L_089B57F0;
      }
      goto L_089B57EC;
    }
L_089B57EC:
    ctx.gpr[4] = (0u | 0u);
    goto L_089B57F0;
L_089B57F0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5810;
      }
      goto L_089B5800;
    }
L_089B5800:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B5824;
      }
      goto L_089B5810;
    }
L_089B5810:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089B5824;
L_089B5824:
    ctx.gpr[31] = (0x089B582Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 510u, 0x089AA50Cu>(ctx, &aot_mem) && ctx.pc == 0x089B582Cu) goto L_089B582C;
    return;
L_089B582C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C70;
      }
      goto L_089B5834;
    }
L_089B5834:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (16332u << 16u);
      if (branch_taken) {
          goto L_089B5C70;
      }
      goto L_089B583C;
    }
L_089B583C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16179u << 16u);
      if (branch_taken) {
          goto L_089B5C70;
      }
      goto L_089B5860;
    }
L_089B5860:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B5C70;
      }
      goto L_089B5884;
    }
L_089B5884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B58F0;
      }
      goto L_089B5894;
    }
L_089B5894:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B58DC;
      }
      goto L_089B58A8;
    }
L_089B58A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5908;
      }
      goto L_089B58C8;
    }
L_089B58C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B58D4u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 889u, 0x089A3C48u>(ctx, &aot_mem) && ctx.pc == 0x089B58D4u) goto L_089B58D4;
    return;
L_089B58D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C70;
      }
      goto L_089B58DC;
    }
L_089B58DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B58E8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089B58E8u) goto L_089B58E8;
    return;
L_089B58E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C70;
      }
      goto L_089B58F0;
    }
L_089B58F0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5900u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 204u, 0x08885108u>(ctx, &aot_mem) && ctx.pc == 0x089B5900u) goto L_089B5900;
    return;
L_089B5900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C70;
      }
      goto L_089B5908;
    }
L_089B5908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5928;
      }
      goto L_089B5918;
    }
L_089B5918:
    ctx.gpr[31] = (0x089B5920u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 13u, 0x089A40D4u>(ctx, &aot_mem) && ctx.pc == 0x089B5920u) goto L_089B5920;
    return;
L_089B5920:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C70;
      }
      goto L_089B5928;
    }
L_089B5928:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(541)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C68;
      }
      goto L_089B5940;
    }
L_089B5940:
    ctx.gpr[31] = (0x089B5948u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 2u, 0x088A0004u>(ctx, &aot_mem) && ctx.pc == 0x089B5948u) goto L_089B5948;
    return;
L_089B5948:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C68;
      }
      goto L_089B5950;
    }
L_089B5950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C70;
      }
      goto L_089B5968;
    }
L_089B5968:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17208)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5A40;
      }
      goto L_089B5990;
    }
L_089B5990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
        goto L_089B59B0;
    }
    goto L_089B599C;
L_089B599C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5A28;
      }
      goto L_089B59AC;
    }
L_089B59AC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    goto L_089B59B0;
L_089B59B0:
    ctx.gpr[5] = (0u | 15u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
        goto L_089B59E0;
    }
    goto L_089B59BC;
L_089B59BC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 11u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
        goto L_089B59E0;
    }
    goto L_089B59CC;
L_089B59CC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 19u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
        goto L_089B59EC;
    }
    goto L_089B59DC;
L_089B59DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    goto L_089B59E0;
L_089B59E0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5A14;
      }
      goto L_089B59E8;
    }
L_089B59E8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    goto L_089B59EC;
L_089B59EC:
    ctx.gpr[5] = (0u | 16u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
        goto L_089B5A0C;
    }
    goto L_089B59F8;
L_089B59F8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5A28;
      }
      goto L_089B5A08;
    }
L_089B5A08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    goto L_089B5A0C;
L_089B5A0C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5A28;
      }
      goto L_089B5A14;
    }
L_089B5A14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5A20u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 127u, 0x08888CB8u>(ctx, &aot_mem) && ctx.pc == 0x089B5A20u) goto L_089B5A20;
    return;
L_089B5A20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5B28;
      }
      goto L_089B5A28;
    }
L_089B5A28:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5A38u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 863u, 0x0888BAA8u>(ctx, &aot_mem) && ctx.pc == 0x089B5A38u) goto L_089B5A38;
    return;
L_089B5A38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5B28;
      }
      goto L_089B5A40;
    }
L_089B5A40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5B18;
      }
      goto L_089B5A50;
    }
L_089B5A50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
        goto L_089B5A70;
    }
    goto L_089B5A5C;
L_089B5A5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5B18;
      }
      goto L_089B5A6C;
    }
L_089B5A6C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    goto L_089B5A70;
L_089B5A70:
    ctx.gpr[18] = (0u | 15u);
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
        goto L_089B5A8C;
    }
    goto L_089B5A7C;
L_089B5A7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5ADC;
      }
      goto L_089B5A88;
    }
L_089B5A88:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    goto L_089B5A8C;
L_089B5A8C:
    ctx.gpr[5] = (0u | 11u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
        goto L_089B5AA8;
    }
    goto L_089B5A98;
L_089B5A98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5ADC;
      }
      goto L_089B5AA4;
    }
L_089B5AA4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    goto L_089B5AA8;
L_089B5AA8:
    ctx.gpr[5] = (0u | 16u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
        goto L_089B5AC4;
    }
    goto L_089B5AB4;
L_089B5AB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5ADC;
      }
      goto L_089B5AC0;
    }
L_089B5AC0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    goto L_089B5AC4;
L_089B5AC4:
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5B18;
      }
      goto L_089B5AD0;
    }
L_089B5AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5B18;
      }
      goto L_089B5ADC;
    }
L_089B5ADC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5AE8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 127u, 0x08888CB8u>(ctx, &aot_mem) && ctx.pc == 0x089B5AE8u) goto L_089B5AE8;
    return;
L_089B5AE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5B28;
      }
      goto L_089B5AF8;
    }
L_089B5AF8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089B5B28;
      }
      goto L_089B5B04;
    }
L_089B5B04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[5] | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(408), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089B5B28;
      }
      goto L_089B5B18;
    }
L_089B5B18:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5B28u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 863u, 0x0888BAA8u>(ctx, &aot_mem) && ctx.pc == 0x089B5B28u) goto L_089B5B28;
    return;
L_089B5B28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C70;
      }
      goto L_089B5B30;
    }
L_089B5B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5BD4;
      }
      goto L_089B5B40;
    }
L_089B5B40:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
        goto L_089B5B64;
    }
    goto L_089B5B50;
L_089B5B50:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5BBC;
      }
      goto L_089B5B60;
    }
L_089B5B60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    goto L_089B5B64;
L_089B5B64:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5BBC;
      }
      goto L_089B5B6C;
    }
L_089B5B6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5BA8;
      }
      goto L_089B5B80;
    }
L_089B5B80:
    ctx.gpr[31] = (0x089B5B88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B5B88u) goto L_089B5B88;
    return;
L_089B5B88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C50;
      }
      goto L_089B5B90;
    }
L_089B5B90:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5BA0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 863u, 0x0888BAA8u>(ctx, &aot_mem) && ctx.pc == 0x089B5BA0u) goto L_089B5BA0;
    return;
L_089B5BA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C50;
      }
      goto L_089B5BA8;
    }
L_089B5BA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5BB4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 127u, 0x08888CB8u>(ctx, &aot_mem) && ctx.pc == 0x089B5BB4u) goto L_089B5BB4;
    return;
L_089B5BB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C50;
      }
      goto L_089B5BBC;
    }
L_089B5BBC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5BCCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 863u, 0x0888BAA8u>(ctx, &aot_mem) && ctx.pc == 0x089B5BCCu) goto L_089B5BCC;
    return;
L_089B5BCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C50;
      }
      goto L_089B5BD4;
    }
L_089B5BD4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5C40;
      }
      goto L_089B5BE4;
    }
L_089B5BE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C40;
      }
      goto L_089B5BF0;
    }
L_089B5BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C2C;
      }
      goto L_089B5C04;
    }
L_089B5C04:
    ctx.gpr[31] = (0x089B5C0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B5C0Cu) goto L_089B5C0C;
    return;
L_089B5C0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C50;
      }
      goto L_089B5C14;
    }
L_089B5C14:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5C24u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 863u, 0x0888BAA8u>(ctx, &aot_mem) && ctx.pc == 0x089B5C24u) goto L_089B5C24;
    return;
L_089B5C24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C50;
      }
      goto L_089B5C2C;
    }
L_089B5C2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5C38u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 127u, 0x08888CB8u>(ctx, &aot_mem) && ctx.pc == 0x089B5C38u) goto L_089B5C38;
    return;
L_089B5C38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C50;
      }
      goto L_089B5C40;
    }
L_089B5C40:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5C50u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 863u, 0x0888BAA8u>(ctx, &aot_mem) && ctx.pc == 0x089B5C50u) goto L_089B5C50;
    return;
L_089B5C50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C70;
      }
      goto L_089B5C58;
    }
L_089B5C58:
    ctx.gpr[31] = (0x089B5C60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x089B5C60u) goto L_089B5C60;
    return;
L_089B5C60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C70;
      }
      goto L_089B5C68;
    }
L_089B5C68:
    ctx.gpr[31] = (0x089B5C70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089B5C70u) goto L_089B5C70;
    return;
L_089B5C70:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5C98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-592));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(576)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(256)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(384)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[31]);
    ctx.gpr[31] = (0x089B5D04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 174u, 0x08929750u>(ctx, &aot_mem) && ctx.pc == 0x089B5D04u) goto L_089B5D04;
    return;
L_089B5D04:
    ctx.gpr[31] = (0x089B5D0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 762u, 0x08A2F8E8u>(ctx, &aot_mem) && ctx.pc == 0x089B5D0Cu) goto L_089B5D0C;
    return;
L_089B5D0C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B5D28u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B5D28u) goto L_089B5D28;
    return;
L_089B5D28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5D68;
      }
      goto L_089B5D30;
    }
L_089B5D30:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x089B5D4Cu);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 379u, 0x0886236Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5D4Cu) goto L_089B5D4C;
    return;
L_089B5D4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5D68;
      }
      goto L_089B5D54;
    }
L_089B5D54:
    ctx.gpr[31] = (0x089B5D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 440u, 0x08ACAA00u>(ctx, &aot_mem) && ctx.pc == 0x089B5D5Cu) goto L_089B5D5C;
    return;
L_089B5D5C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5D68;
      }
      goto L_089B5D64;
    }
L_089B5D64:
    ctx.gpr[17] = (0u | 1u);
    goto L_089B5D68;
L_089B5D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5D9C;
      }
      goto L_089B5D78;
    }
L_089B5D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5D9C;
      }
      goto L_089B5D84;
    }
L_089B5D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B5D9C;
      }
      goto L_089B5D98;
    }
L_089B5D98:
    ctx.gpr[18] = (0u | 1u);
    goto L_089B5D9C;
L_089B5D9C:
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B60FC;
      }
      goto L_089B5DA8;
    }
L_089B5DA8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089B5E1C;
      }
      goto L_089B5DB0;
    }
L_089B5DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16076u << 16u);
      if (branch_taken) {
          goto L_089B5E1C;
      }
      goto L_089B5DEC;
    }
L_089B5DEC:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (16153u << 16u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 202u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x089B5E1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5E1Cu) goto L_089B5E1C;
    return;
L_089B5E1C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[17] = (2229u << 16u);
      if (branch_taken) {
          goto L_089B5E60;
      }
      goto L_089B5E24;
    }
L_089B5E24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (2229u << 16u);
      if (branch_taken) {
          goto L_089B5E60;
      }
      goto L_089B5E48;
    }
L_089B5E48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.gpr[17] = (2229u << 16u);
    goto L_089B5E60;
L_089B5E60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-29168)));
    ctx.gpr[4] = (16256u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[31] = (0x089B5E7Cu);
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089B5E7Cu) goto L_089B5E7C;
    return;
L_089B5E7C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-29168)));
    ctx.fpr[14] = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[28] = ctx.fpr[22] - ctx.fpr[13];
    ctx.fpr[30] = ctx.fpr[13] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[31] = (0x089B5EA0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089B5EA0u) goto L_089B5EA0;
    return;
L_089B5EA0:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[28];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-29168)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[15];
    ctx.fpr[26] = ctx.fpr[15] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.gpr[31] = (0x089B5EC4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089B5EC4u) goto L_089B5EC4;
    return;
L_089B5EC4:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[24];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[31] = (0x089B5EDCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 259u, 0x08A4D17Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5EDCu) goto L_089B5EDC;
    return;
L_089B5EDC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B5EE8u);
    ctx.gpr[4] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 210u, 0x08930FF4u>(ctx, &aot_mem) && ctx.pc == 0x089B5EE8u) goto L_089B5EE8;
    return;
L_089B5EE8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B5EF4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 179u, 0x0890D00Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5EF4u) goto L_089B5EF4;
    return;
L_089B5EF4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B5F00u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 178u, 0x0890D004u>(ctx, &aot_mem) && ctx.pc == 0x089B5F00u) goto L_089B5F00;
    return;
L_089B5F00:
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B5F18u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 285u, 0x08A1D944u>(ctx, &aot_mem) && ctx.pc == 0x089B5F18u) goto L_089B5F18;
    return;
L_089B5F18:
    ctx.gpr[19] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-29164)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[31] = (0x089B5F30u);
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089B5F30u) goto L_089B5F30;
    return;
L_089B5F30:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-29164)));
    ctx.fpr[14] = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[28] = ctx.fpr[22] - ctx.fpr[13];
    ctx.fpr[30] = ctx.fpr[13] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[31] = (0x089B5F54u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089B5F54u) goto L_089B5F54;
    return;
L_089B5F54:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[28];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-29164)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[15];
    ctx.fpr[26] = ctx.fpr[15] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.gpr[31] = (0x089B5F78u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089B5F78u) goto L_089B5F78;
    return;
L_089B5F78:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[24];
    ctx.gpr[4] = (0u | 15u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[31] = (0x089B5F90u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 210u, 0x08930FF4u>(ctx, &aot_mem) && ctx.pc == 0x089B5F90u) goto L_089B5F90;
    return;
L_089B5F90:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B5F9Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 179u, 0x0890D00Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5F9Cu) goto L_089B5F9C;
    return;
L_089B5F9C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B5FA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 178u, 0x0890D004u>(ctx, &aot_mem) && ctx.pc == 0x089B5FA8u) goto L_089B5FA8;
    return;
L_089B5FA8:
    ctx.gpr[4] = (ctx.gpr[19] << 6u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B5FBCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 285u, 0x08A1D944u>(ctx, &aot_mem) && ctx.pc == 0x089B5FBCu) goto L_089B5FBC;
    return;
L_089B5FBC:
    ctx.gpr[31] = (0x089B5FC4u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 210u, 0x08930FF4u>(ctx, &aot_mem) && ctx.pc == 0x089B5FC4u) goto L_089B5FC4;
    return;
L_089B5FC4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B5FD0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 179u, 0x0890D00Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5FD0u) goto L_089B5FD0;
    return;
L_089B5FD0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B5FDCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 178u, 0x0890D004u>(ctx, &aot_mem) && ctx.pc == 0x089B5FDCu) goto L_089B5FDC;
    return;
L_089B5FDC:
    ctx.gpr[4] = (ctx.gpr[19] << 6u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B5FF0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 285u, 0x08A1D944u>(ctx, &aot_mem) && ctx.pc == 0x089B5FF0u) goto L_089B5FF0;
    return;
L_089B5FF0:
    ctx.gpr[31] = (0x089B5FF8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 210u, 0x08930FF4u>(ctx, &aot_mem) && ctx.pc == 0x089B5FF8u) goto L_089B5FF8;
    return;
L_089B5FF8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B6004u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 179u, 0x0890D00Cu>(ctx, &aot_mem) && ctx.pc == 0x089B6004u) goto L_089B6004;
    return;
L_089B6004:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B6010u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 178u, 0x0890D004u>(ctx, &aot_mem) && ctx.pc == 0x089B6010u) goto L_089B6010;
    return;
L_089B6010:
    ctx.gpr[4] = (ctx.gpr[19] << 6u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B6024u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 285u, 0x08A1D944u>(ctx, &aot_mem) && ctx.pc == 0x089B6024u) goto L_089B6024;
    return;
L_089B6024:
    ctx.gpr[19] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-29160)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[31] = (0x089B603Cu);
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089B603Cu) goto L_089B603C;
    return;
L_089B603C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-29160)));
    ctx.fpr[14] = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[28] = ctx.fpr[22] - ctx.fpr[13];
    ctx.fpr[30] = ctx.fpr[13] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[31] = (0x089B6060u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089B6060u) goto L_089B6060;
    return;
L_089B6060:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[28];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-29160)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.fpr[22] = ctx.fpr[15] + ctx.fpr[22];
    ctx.gpr[31] = (0x089B6084u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089B6084u) goto L_089B6084;
    return;
L_089B6084:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    ctx.gpr[4] = (0u | 3u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[31] = (0x089B609Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 210u, 0x08930FF4u>(ctx, &aot_mem) && ctx.pc == 0x089B609Cu) goto L_089B609C;
    return;
L_089B609C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B60A8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 179u, 0x0890D00Cu>(ctx, &aot_mem) && ctx.pc == 0x089B60A8u) goto L_089B60A8;
    return;
L_089B60A8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B60B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 178u, 0x0890D004u>(ctx, &aot_mem) && ctx.pc == 0x089B60B4u) goto L_089B60B4;
    return;
L_089B60B4:
    ctx.gpr[4] = (ctx.gpr[19] << 6u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B60C8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 285u, 0x08A1D944u>(ctx, &aot_mem) && ctx.pc == 0x089B60C8u) goto L_089B60C8;
    return;
L_089B60C8:
    ctx.gpr[31] = (0x089B60D0u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 210u, 0x08930FF4u>(ctx, &aot_mem) && ctx.pc == 0x089B60D0u) goto L_089B60D0;
    return;
L_089B60D0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B60DCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 179u, 0x0890D00Cu>(ctx, &aot_mem) && ctx.pc == 0x089B60DCu) goto L_089B60DC;
    return;
L_089B60DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B60E8u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 178u, 0x0890D004u>(ctx, &aot_mem) && ctx.pc == 0x089B60E8u) goto L_089B60E8;
    return;
L_089B60E8:
    ctx.gpr[4] = (ctx.gpr[17] << 6u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B60FCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 285u, 0x08A1D944u>(ctx, &aot_mem) && ctx.pc == 0x089B60FCu) goto L_089B60FC;
    return;
L_089B60FC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29141)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6160;
      }
      goto L_089B610C;
    }
L_089B610C:
    ctx.gpr[31] = (0x089B6114u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 259u, 0x08A4D17Cu>(ctx, &aot_mem) && ctx.pc == 0x089B6114u) goto L_089B6114;
    return;
L_089B6114:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B6120u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 210u, 0x08930FF4u>(ctx, &aot_mem) && ctx.pc == 0x089B6120u) goto L_089B6120;
    return;
L_089B6120:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B612Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 179u, 0x0890D00Cu>(ctx, &aot_mem) && ctx.pc == 0x089B612Cu) goto L_089B612C;
    return;
L_089B612C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B6138u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 178u, 0x0890D004u>(ctx, &aot_mem) && ctx.pc == 0x089B6138u) goto L_089B6138;
    return;
L_089B6138:
    ctx.gpr[5] = (16416u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] << 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089B6160u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 285u, 0x08A1D944u>(ctx, &aot_mem) && ctx.pc == 0x089B6160u) goto L_089B6160;
    return;
L_089B6160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B61D4;
      }
      goto L_089B6174;
    }
L_089B6174:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1826))))));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B61D4;
      }
      goto L_089B6184;
    }
L_089B6184:
    ctx.gpr[31] = (0x089B618Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 259u, 0x08A4D17Cu>(ctx, &aot_mem) && ctx.pc == 0x089B618Cu) goto L_089B618C;
    return;
L_089B618C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B6198u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 210u, 0x08930FF4u>(ctx, &aot_mem) && ctx.pc == 0x089B6198u) goto L_089B6198;
    return;
L_089B6198:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B61A4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 179u, 0x0890D00Cu>(ctx, &aot_mem) && ctx.pc == 0x089B61A4u) goto L_089B61A4;
    return;
L_089B61A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B61B0u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 178u, 0x0890D004u>(ctx, &aot_mem) && ctx.pc == 0x089B61B0u) goto L_089B61B0;
    return;
L_089B61B0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] << 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.gpr[31] = (0x089B61D4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 285u, 0x08A1D944u>(ctx, &aot_mem) && ctx.pc == 0x089B61D4u) goto L_089B61D4;
    return;
L_089B61D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B652C;
      }
      goto L_089B61E8;
    }
L_089B61E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B652C;
      }
      goto L_089B61FC;
    }
L_089B61FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1826))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089B652C;
      }
      goto L_089B620C;
    }
L_089B620C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B652C;
      }
      goto L_089B6220;
    }
L_089B6220:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B6248u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 259u, 0x08A4D17Cu>(ctx, &aot_mem) && ctx.pc == 0x089B6248u) goto L_089B6248;
    return;
L_089B6248:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1826))))));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(668)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B6268u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 179u, 0x0890D00Cu>(ctx, &aot_mem) && ctx.pc == 0x089B6268u) goto L_089B6268;
    return;
L_089B6268:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B6274u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 178u, 0x0890D004u>(ctx, &aot_mem) && ctx.pc == 0x089B6274u) goto L_089B6274;
    return;
L_089B6274:
    ctx.gpr[7] = (ctx.gpr[18] << 6u);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B628Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 645u, 0x088B7FA4u>(ctx, &aot_mem) && ctx.pc == 0x089B628Cu) goto L_089B628C;
    return;
L_089B628C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1826))))));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_089B64C0;
      }
      goto L_089B62A0;
    }
L_089B62A0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17152)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B62B8:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B64E0;
      }
      goto L_089B62F4;
    }
L_089B62F4:
    ctx.gpr[4] = (48419u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (15651u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B64E0;
      }
      goto L_089B6368;
    }
L_089B6368:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B64E0;
      }
      goto L_089B63D0;
    }
L_089B63D0:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (15651u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B64E0;
      }
      goto L_089B6448;
    }
L_089B6448:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (15651u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B64E0;
      }
      goto L_089B64C0;
    }
L_089B64C0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089B64E0;
L_089B64E0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B652C;
      }
      goto L_089B64F0;
    }
L_089B64F0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x089B6518u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x089B6518u) goto L_089B6518;
    return;
L_089B6518:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B64F0;
      }
      goto L_089B652C;
    }
L_089B652C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8088)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089B6878;
      }
      goto L_089B6550;
    }
L_089B6550:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B6878;
      }
      goto L_089B6570;
    }
L_089B6570:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089B65C4;
    }
    goto L_089B65C4;
L_089B65C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6878;
      }
      goto L_089B65CC;
    }
L_089B65CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x089B65F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 175u, 0x089D5818u>(ctx, &aot_mem) && ctx.pc == 0x089B65F4u) goto L_089B65F4;
    return;
L_089B65F4:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
        goto L_089B6624;
    }
    goto L_089B6618;
L_089B6618:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_089B6624;
      }
      goto L_089B6624;
    }
L_089B6624:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B6680;
      }
      goto L_089B6640;
    }
L_089B6640:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
        goto L_089B6664;
    }
    goto L_089B6658;
L_089B6658:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_089B6664;
      }
      goto L_089B6664;
    }
L_089B6664:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B6688;
      }
      goto L_089B6680;
    }
L_089B6680:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089B671C;
      }
      goto L_089B6688;
    }
L_089B6688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B66D8;
      }
      goto L_089B6698;
    }
L_089B6698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B66D8;
      }
      goto L_089B66A8;
    }
L_089B66A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B66D8;
      }
      goto L_089B66B8;
    }
L_089B66B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B66D8;
      }
      goto L_089B66C8;
    }
L_089B66C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B66E0;
      }
      goto L_089B66D8;
    }
L_089B66D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089B671C;
      }
      goto L_089B66E0;
    }
L_089B66E0:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089B66F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 428u, 0x088D5E30u>(ctx, &aot_mem) && ctx.pc == 0x089B66F4u) goto L_089B66F4;
    return;
L_089B66F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B6704;
      }
      goto L_089B66FC;
    }
L_089B66FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089B671C;
      }
      goto L_089B6704;
    }
L_089B6704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B6710u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B6710u) goto L_089B6710;
    return;
L_089B6710:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B671C;
      }
      goto L_089B6718;
    }
L_089B6718:
    ctx.gpr[18] = (0u | 0u);
    goto L_089B671C;
L_089B671C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48))))));
      if (branch_taken) {
          goto L_089B6878;
      }
      goto L_089B6728;
    }
L_089B6728:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6878;
      }
      goto L_089B6738;
    }
L_089B6738:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 6u);
      if (branch_taken) {
          goto L_089B6768;
      }
      goto L_089B6754;
    }
L_089B6754:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6770;
      }
      goto L_089B6760;
    }
L_089B6760:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6868;
      }
      goto L_089B6768;
    }
L_089B6768:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089B6760;
      }
      goto L_089B6770;
    }
L_089B6770:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089B67F0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089B67F0u) goto L_089B67F0;
    return;
L_089B67F0:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089B6810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089B6810u) goto L_089B6810;
    return;
L_089B6810:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089B683Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089B683Cu) goto L_089B683C;
    return;
L_089B683C:
    ctx.gpr[10] = (ctx.gpr[2] & 65535u);
    ctx.gpr[10] = (ctx.gpr[10] & 1u);
    ctx.gpr[4] = (0u | 38u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089B6868u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x089B6868u) goto L_089B6868;
    return;
L_089B6868:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B6738;
      }
      goto L_089B6878;
    }
L_089B6878:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B68B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089B69F4;
      }
      goto L_089B68D8;
    }
L_089B68D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B69F4;
      }
      goto L_089B68E4;
    }
L_089B68E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B69F4;
      }
      goto L_089B68F4;
    }
L_089B68F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B69F4;
      }
      goto L_089B6904;
    }
L_089B6904:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[17] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089B69F4;
      }
      goto L_089B6918;
    }
L_089B6918:
    ctx.gpr[31] = (0x089B6920u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B6920u) goto L_089B6920;
    return;
L_089B6920:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B69F4;
      }
      goto L_089B6928;
    }
L_089B6928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B698C;
      }
      goto L_089B693C;
    }
L_089B693C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(836)));
    ctx.gpr[6] = (0u | 1u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
        goto L_089B69A4;
    }
    goto L_089B6984;
L_089B6984:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_089B6994;
      }
      goto L_089B698C;
    }
L_089B698C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6D9C;
      }
      goto L_089B6994;
    }
L_089B6994:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(836)));
    if (ctx.gpr[5] != ctx.gpr[17]) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
        goto L_089B69CC;
    }
    goto L_089B69A0;
L_089B69A0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    goto L_089B69A4;
L_089B69A4:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B69F4;
      }
      goto L_089B69C4;
    }
L_089B69C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6D9C;
      }
      goto L_089B69CC;
    }
L_089B69CC:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B69F4;
      }
      goto L_089B69EC;
    }
L_089B69EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6D9C;
      }
      goto L_089B69F4;
    }
L_089B69F4:
    ctx.gpr[31] = (0x089B69FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 819u, 0x08A2FB88u>(ctx, &aot_mem) && ctx.pc == 0x089B69FCu) goto L_089B69FC;
    return;
L_089B69FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(740)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6D9C;
      }
      goto L_089B6A08;
    }
L_089B6A08:
    ctx.gpr[31] = (0x089B6A10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 259u, 0x08A4D17Cu>(ctx, &aot_mem) && ctx.pc == 0x089B6A10u) goto L_089B6A10;
    return;
L_089B6A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(692)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x089B6A24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 179u, 0x0890D00Cu>(ctx, &aot_mem) && ctx.pc == 0x089B6A24u) goto L_089B6A24;
    return;
L_089B6A24:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B6A30u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 178u, 0x0890D004u>(ctx, &aot_mem) && ctx.pc == 0x089B6A30u) goto L_089B6A30;
    return;
L_089B6A30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(740)));
    ctx.gpr[18] = (ctx.gpr[17] << 6u);
    ctx.gpr[18] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    ctx.gpr[31] = (0x089B6AC8u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x08A5D100u>(ctx, &aot_mem) && ctx.pc == 0x089B6AC8u) goto L_089B6AC8;
    return;
L_089B6AC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(740)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6AF0;
      }
      goto L_089B6AD8;
    }
L_089B6AD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(740)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089B6AE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B6AE8u) goto L_089B6AE8;
    return;
L_089B6AE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6AF8;
      }
      goto L_089B6AF0;
    }
L_089B6AF0:
    ctx.gpr[31] = (0x089B6AF8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(740)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 206u, 0x08AC9208u>(ctx, &aot_mem) && ctx.pc == 0x089B6AF8u) goto L_089B6AF8;
    return;
L_089B6AF8:
    ctx.gpr[31] = (0x089B6B00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B6B00u) goto L_089B6B00;
    return;
L_089B6B00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6D9C;
      }
      goto L_089B6B08;
    }
L_089B6B08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6D9C;
      }
      goto L_089B6B14;
    }
L_089B6B14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3196)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3200)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3204)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3204), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089B6BE8;
      }
      goto L_089B6BDC;
    }
L_089B6BDC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3204)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B6BE8;
L_089B6BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B6C14;
      }
      goto L_089B6BFC;
    }
L_089B6BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
        goto L_089B6C18;
    }
    goto L_089B6C0C;
L_089B6C0C:
    ctx.gpr[31] = (0x089B6C14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089B6C14u) goto L_089B6C14;
    return;
L_089B6C14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    goto L_089B6C18;
L_089B6C18:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    ctx.gpr[31] = (0x089B6C2Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x089B6C2Cu) goto L_089B6C2C;
    return;
L_089B6C2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3204)));
    ctx.gpr[31] = (0x089B6C4Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 494u, 0x08A0606Cu>(ctx, &aot_mem) && ctx.pc == 0x089B6C4Cu) goto L_089B6C4C;
    return;
L_089B6C4C:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (48544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7040)));
    ctx.gpr[5] = (ctx.gpr[5] | 1798u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7040));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16132u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] | 55010u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (15512u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 8384u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B6C98u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 524u, 0x08A06780u>(ctx, &aot_mem) && ctx.pc == 0x089B6C98u) goto L_089B6C98;
    return;
L_089B6C98:
    ctx.gpr[4] = (16212u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14680u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (47747u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15975u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 27787u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x089B6CD0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x089B6CD0u) goto L_089B6CD0;
    return;
L_089B6CD0:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B6CE4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A06584u>(ctx, &aot_mem) && ctx.pc == 0x089B6CE4u) goto L_089B6CE4;
    return;
L_089B6CE4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B6CF0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x089B6CF0u) goto L_089B6CF0;
    return;
L_089B6CF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6D14;
      }
      goto L_089B6D00;
    }
L_089B6D00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6D14;
      }
      goto L_089B6D0C;
    }
L_089B6D0C:
    ctx.gpr[31] = (0x089B6D14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089B6D14u) goto L_089B6D14;
    return;
L_089B6D14:
    ctx.gpr[31] = (0x089B6D1Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x089B6D1Cu) goto L_089B6D1C;
    return;
L_089B6D1C:
    ctx.gpr[31] = (0x089B6D24u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x08A5D100u>(ctx, &aot_mem) && ctx.pc == 0x089B6D24u) goto L_089B6D24;
    return;
L_089B6D24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3196)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6D4C;
      }
      goto L_089B6D34;
    }
L_089B6D34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3196)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089B6D44u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B6D44u) goto L_089B6D44;
    return;
L_089B6D44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6D54;
      }
      goto L_089B6D4C;
    }
L_089B6D4C:
    ctx.gpr[31] = (0x089B6D54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3196)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 206u, 0x08AC9208u>(ctx, &aot_mem) && ctx.pc == 0x089B6D54u) goto L_089B6D54;
    return;
L_089B6D54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
        goto L_089B6D7C;
    }
    goto L_089B6D64;
L_089B6D64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
        goto L_089B6D7C;
    }
    goto L_089B6D70;
L_089B6D70:
    ctx.gpr[31] = (0x089B6D78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089B6D78u) goto L_089B6D78;
    return;
L_089B6D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    goto L_089B6D7C;
L_089B6D7C:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6D9C;
      }
      goto L_089B6D88;
    }
L_089B6D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6D9C;
      }
      goto L_089B6D94;
    }
L_089B6D94:
    ctx.gpr[31] = (0x089B6D9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089B6D9Cu) goto L_089B6D9C;
    return;
L_089B6D9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B6DBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-400));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[5] = (ctx.gpr[5] | 512u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[22]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[22] = (0u | 16u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (32u << 16u);
      if (branch_taken) {
          goto L_089B6E80;
      }
      goto L_089B6E54;
    }
L_089B6E54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B6E80;
      }
      goto L_089B6E68;
    }
L_089B6E68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089B6E80u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B6E80u) goto L_089B6E80;
    return;
L_089B6E80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089B6EC0;
      }
      goto L_089B6E8C;
    }
L_089B6E8C:
    ctx.gpr[31] = (0x089B6E94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x089B6E94u) goto L_089B6E94;
    return;
L_089B6E94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6F1C;
      }
      goto L_089B6EA0;
    }
L_089B6EA0:
    ctx.gpr[31] = (0x089B6EA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B6EA8u) goto L_089B6EA8;
    return;
L_089B6EA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B6F1C;
      }
      goto L_089B6EB0;
    }
L_089B6EB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B6F1C;
      }
      goto L_089B6EC0;
    }
L_089B6EC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 38u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B6F1C;
      }
      goto L_089B6ED0;
    }
L_089B6ED0:
    ctx.gpr[6] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089B6EF0u);
    ctx.gpr[5] = (0u | 37u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 156u, 0x089B0884u>(ctx, &aot_mem) && ctx.pc == 0x089B6EF0u) goto L_089B6EF0;
    return;
L_089B6EF0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6F1C;
      }
      goto L_089B6EFC;
    }
L_089B6EFC:
    ctx.gpr[31] = (0x089B6F04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B6F04u) goto L_089B6F04;
    return;
L_089B6F04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6F1C;
      }
      goto L_089B6F0C;
    }
L_089B6F0C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B6F1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 122u, 0x088A8660u>(ctx, &aot_mem) && ctx.pc == 0x089B6F1Cu) goto L_089B6F1C;
    return;
L_089B6F1C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7070;
      }
      goto L_089B6F2C;
    }
L_089B6F2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6F50;
      }
      goto L_089B6F3C;
    }
L_089B6F3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7070;
      }
      goto L_089B6F50;
    }
L_089B6F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[23] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-8004), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[30] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x089B6FC8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 72u, 0x088C8430u>(ctx, &aot_mem) && ctx.pc == 0x089B6FC8u) goto L_089B6FC8;
    return;
L_089B6FC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7060;
      }
      goto L_089B6FD0;
    }
L_089B6FD0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x089B7020u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 72u, 0x088C8430u>(ctx, &aot_mem) && ctx.pc == 0x089B7020u) goto L_089B7020;
    return;
L_089B7020:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7060;
      }
      goto L_089B7028;
    }
L_089B7028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089B7058u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7058u) goto L_089B7058;
    return;
L_089B7058:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B706C;
      }
      goto L_089B7060;
    }
L_089B7060:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-8004), 0u);
    ctx.gpr[31] = (0x089B706Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 623u, 0x0889B6A0u>(ctx, &aot_mem) && ctx.pc == 0x089B706Cu) goto L_089B706C;
    return;
L_089B706C:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-8004), 0u);
    goto L_089B7070;
L_089B7070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B74FC;
      }
      goto L_089B7080;
    }
L_089B7080:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B70E4;
      }
      goto L_089B7090;
    }
L_089B7090:
    ctx.gpr[31] = (0x089B7098u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x089B7098u) goto L_089B7098;
    return;
L_089B7098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2084)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B70EC;
      }
      goto L_089B70A8;
    }
L_089B70A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B70EC;
      }
      goto L_089B70B4;
    }
L_089B70B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089B70EC;
      }
      goto L_089B70C4;
    }
L_089B70C4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 111u);
    ctx.gpr[31] = (0x089B70DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x089B70DCu) goto L_089B70DC;
    return;
L_089B70DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B70EC;
      }
      goto L_089B70E4;
    }
L_089B70E4:
    ctx.gpr[31] = (0x089B70ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089B70ECu) goto L_089B70EC;
    return;
L_089B70EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7208;
      }
      goto L_089B70FC;
    }
L_089B70FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7208;
      }
      goto L_089B7108;
    }
L_089B7108:
    ctx.gpr[31] = (0x089B7110u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 845u, 0x089A38C0u>(ctx, &aot_mem) && ctx.pc == 0x089B7110u) goto L_089B7110;
    return;
L_089B7110:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_089B712C;
    }
    goto L_089B7118;
L_089B7118:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7208;
      }
      goto L_089B7128;
    }
L_089B7128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    goto L_089B712C;
L_089B712C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B7188u);
    ctx.gpr[6] = (0u | 12000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 361u, 0x089A1960u>(ctx, &aot_mem) && ctx.pc == 0x089B7188u) goto L_089B7188;
    return;
L_089B7188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x089B71A0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089B71A0u) goto L_089B71A0;
    return;
L_089B71A0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (0u | 5u);
      if (branch_taken) {
          goto L_089B71C4;
      }
      goto L_089B71B0;
    }
L_089B71B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 71 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B71E4;
      }
      goto L_089B71C4;
    }
L_089B71C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B71D0u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089B71D0u) goto L_089B71D0;
    return;
L_089B71D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B71DCu);
    ctx.gpr[5] = (0u | 120u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089B71DCu) goto L_089B71DC;
    return;
L_089B71DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089B7200;
      }
      goto L_089B71E4;
    }
L_089B71E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B71F0u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089B71F0u) goto L_089B71F0;
    return;
L_089B71F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B71FCu);
    ctx.gpr[5] = (0u | 143u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089B71FCu) goto L_089B71FC;
    return;
L_089B71FC:
    ctx.gpr[17] = (0u | 1u);
    goto L_089B7200;
L_089B7200:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), ctx.gpr[21]);
      if (branch_taken) {
          goto L_089B7554;
      }
      goto L_089B7208;
    }
L_089B7208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7290;
      }
      goto L_089B7218;
    }
L_089B7218:
    ctx.gpr[31] = (0x089B7220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089B7220u) goto L_089B7220;
    return;
L_089B7220:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28988)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28992)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B7238u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089B7238u) goto L_089B7238;
    return;
L_089B7238:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x089B725Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x089B725Cu) goto L_089B725C;
    return;
L_089B725C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7288;
      }
      goto L_089B727C;
    }
L_089B727C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B7288u);
    ctx.gpr[5] = (0u | 30000u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 533u, 0x08886B9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7288u) goto L_089B7288;
    return;
L_089B7288:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
      if (branch_taken) {
          goto L_089B7554;
      }
      goto L_089B7290;
    }
L_089B7290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7474;
      }
      goto L_089B72A4;
    }
L_089B72A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (65472u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[31] = (0x089B72CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 845u, 0x089A38C0u>(ctx, &aot_mem) && ctx.pc == 0x089B72CCu) goto L_089B72CC;
    return;
L_089B72CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7340;
      }
      goto L_089B72D4;
    }
L_089B72D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7340;
      }
      goto L_089B72E4;
    }
L_089B72E4:
    ctx.gpr[31] = (0x089B72ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089B72ECu) goto L_089B72EC;
    return;
L_089B72EC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[4] = (16480u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B7340;
      }
      goto L_089B7334;
    }
L_089B7334:
    ctx.gpr[31] = (0x089B733Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089B733Cu) goto L_089B733C;
    return;
L_089B733C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(600), ctx.gpr[2]);
    goto L_089B7340;
L_089B7340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7374;
      }
      goto L_089B734C;
    }
L_089B734C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7444;
      }
      goto L_089B735C;
    }
L_089B735C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B736Cu);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x089B736Cu) goto L_089B736C;
    return;
L_089B736C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7444;
      }
      goto L_089B7374;
    }
L_089B7374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
        goto L_089B73D8;
    }
    goto L_089B7384;
L_089B7384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (ctx.gpr[4] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
        goto L_089B73D8;
    }
    goto L_089B7394;
L_089B7394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x089B73A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B73A0u) goto L_089B73A0;
    return;
L_089B73A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B73B8;
      }
      goto L_089B73A8;
    }
L_089B73A8:
    ctx.gpr[31] = (0x089B73B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 33u, 0x08958280u>(ctx, &aot_mem) && ctx.pc == 0x089B73B0u) goto L_089B73B0;
    return;
L_089B73B0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
        goto L_089B73D8;
    }
    goto L_089B73B8;
L_089B73B8:
    ctx.gpr[31] = (0x089B73C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 474u, 0x088868F4u>(ctx, &aot_mem) && ctx.pc == 0x089B73C0u) goto L_089B73C0;
    return;
L_089B73C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B73D0u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x089B73D0u) goto L_089B73D0;
    return;
L_089B73D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7424;
      }
      goto L_089B73D8;
    }
L_089B73D8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B7424u);
    ctx.gpr[6] = (0u | 14000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 361u, 0x089A1960u>(ctx, &aot_mem) && ctx.pc == 0x089B7424u) goto L_089B7424;
    return;
L_089B7424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B7444u);
    ctx.gpr[5] = (0u | 143u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089B7444u) goto L_089B7444;
    return;
L_089B7444:
    ctx.gpr[4] = (0u | 1500u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[31] = (0x089B7460u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 549u, 0x089BA410u>(ctx, &aot_mem) && ctx.pc == 0x089B7460u) goto L_089B7460;
    return;
L_089B7460:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B746Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089B746Cu) goto L_089B746C;
    return;
L_089B746C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089B7554;
      }
      goto L_089B7474;
    }
L_089B7474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7554;
      }
      goto L_089B7480;
    }
L_089B7480:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7554;
      }
      goto L_089B7490;
    }
L_089B7490:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7554;
      }
      goto L_089B74A0;
    }
L_089B74A0:
    ctx.gpr[31] = (0x089B74A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B74A8u) goto L_089B74A8;
    return;
L_089B74A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7554;
      }
      goto L_089B74B0;
    }
L_089B74B0:
    ctx.gpr[31] = (0x089B74B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089B74B8u) goto L_089B74B8;
    return;
L_089B74B8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28988)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28992)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B74D0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089B74D0u) goto L_089B74D0;
    return;
L_089B74D0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x089B74F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x089B74F4u) goto L_089B74F4;
    return;
L_089B74F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7554;
      }
      goto L_089B74FC;
    }
L_089B74FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7554;
      }
      goto L_089B750C;
    }
L_089B750C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089B7550;
      }
      goto L_089B751C;
    }
L_089B751C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7544;
      }
      goto L_089B7528;
    }
L_089B7528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089B7544;
    }
    goto L_089B7534;
L_089B7534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089B7540u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089B7540u) goto L_089B7540;
    return;
L_089B7540:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089B7544;
L_089B7544:
    ctx.gpr[31] = (0x089B754Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089B754Cu) goto L_089B754C;
    return;
L_089B754C:
    ctx.gpr[4] = (0u | 1u);
    goto L_089B7550;
L_089B7550:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    goto L_089B7554;
L_089B7554:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7568;
      }
      goto L_089B755C;
    }
L_089B755C:
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B7568;
L_089B7568:
    ctx.gpr[31] = (0x089B7570u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 554u, 0x089A258Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7570u) goto L_089B7570;
    return;
L_089B7570:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B78FC;
      }
      goto L_089B759C;
    }
L_089B759C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089B7698;
      }
      goto L_089B75AC;
    }
L_089B75AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7698;
      }
      goto L_089B75BC;
    }
L_089B75BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x089B75C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B75C8u) goto L_089B75C8;
    return;
L_089B75C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7698;
      }
      goto L_089B75D0;
    }
L_089B75D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089B7698;
      }
      goto L_089B75E0;
    }
L_089B75E0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(216), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(220), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(228)));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
        goto L_089B7648;
    }
    goto L_089B7618;
L_089B7618:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[7] = (ctx.gpr[6] << 7u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(228)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(1916)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(1916), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    goto L_089B7648;
L_089B7648:
    ctx.gpr[7] = (ctx.gpr[6] << 7u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(228), 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-100));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 0 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (0u | 0u);
        goto L_089B7678;
    }
    goto L_089B7678;
L_089B7678:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[7] = (ctx.gpr[4] << 7u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[6]);
    goto L_089B7698;
L_089B7698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B76FC;
      }
      goto L_089B76A4;
    }
L_089B76A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B76FC;
      }
      goto L_089B76B8;
    }
L_089B76B8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_089B76EC;
      }
      goto L_089B76C4;
    }
L_089B76C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_089B76E4;
      }
      goto L_089B76CC;
    }
L_089B76CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_089B76F4;
      }
      goto L_089B76D4;
    }
L_089B76D4:
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
        goto L_089B7744;
    }
    goto L_089B76DC;
L_089B76DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 5u);
      if (branch_taken) {
          goto L_089B7740;
      }
      goto L_089B76E4;
    }
L_089B76E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 5u);
      if (branch_taken) {
          goto L_089B7740;
      }
      goto L_089B76EC;
    }
L_089B76EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 10u);
      if (branch_taken) {
          goto L_089B7740;
      }
      goto L_089B76F4;
    }
L_089B76F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 10u);
      if (branch_taken) {
          goto L_089B7740;
      }
      goto L_089B76FC;
    }
L_089B76FC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_089B7730;
      }
      goto L_089B7708;
    }
L_089B7708:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_089B7728;
      }
      goto L_089B7710;
    }
L_089B7710:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_089B7738;
      }
      goto L_089B7718;
    }
L_089B7718:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7740;
      }
      goto L_089B7720;
    }
L_089B7720:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 4u);
      if (branch_taken) {
          goto L_089B7740;
      }
      goto L_089B7728;
    }
L_089B7728:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_089B7740;
      }
      goto L_089B7730;
    }
L_089B7730:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 2u);
      if (branch_taken) {
          goto L_089B7740;
      }
      goto L_089B7738;
    }
L_089B7738:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 8u);
      if (branch_taken) {
          goto L_089B7740;
      }
      goto L_089B7740;
    }
L_089B7740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    goto L_089B7744;
L_089B7744:
    ctx.gpr[5] = (~(ctx.gpr[20] | 0u));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(543)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(543), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089B7860;
      }
      goto L_089B7764;
    }
L_089B7764:
    ctx.gpr[31] = (0x089B776Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 735u, 0x0889F878u>(ctx, &aot_mem) && ctx.pc == 0x089B776Cu) goto L_089B776C;
    return;
L_089B776C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(660)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089B77A4;
      }
      goto L_089B7798;
    }
L_089B7798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(660), ctx.gpr[5]);
    goto L_089B77A4;
L_089B77A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B77D0;
      }
      goto L_089B77B4;
    }
L_089B77B4:
    ctx.gpr[31] = (0x089B77BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 101u, 0x088A07B0u>(ctx, &aot_mem) && ctx.pc == 0x089B77BCu) goto L_089B77BC;
    return;
L_089B77BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B77D0;
      }
      goto L_089B77C4;
    }
L_089B77C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x089B77D0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 95u, 0x088A0754u>(ctx, &aot_mem) && ctx.pc == 0x089B77D0u) goto L_089B77D0;
    return;
L_089B77D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089B786C;
      }
      goto L_089B77E0;
    }
L_089B77E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[31] = (0x089B77F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x089B77F4u) goto L_089B77F4;
    return;
L_089B77F4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28900)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28904)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B7814u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 524u, 0x08AF6874u>(ctx, &aot_mem) && ctx.pc == 0x089B7814u) goto L_089B7814;
    return;
L_089B7814:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089B786C;
      }
      goto L_089B781C;
    }
L_089B781C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[31] = (0x089B7830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x089B7830u) goto L_089B7830;
    return;
L_089B7830:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B7844u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 524u, 0x08AF6874u>(ctx, &aot_mem) && ctx.pc == 0x089B7844u) goto L_089B7844;
    return;
L_089B7844:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089B786C;
      }
      goto L_089B784C;
    }
L_089B784C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089B786C;
      }
      goto L_089B7860;
    }
L_089B7860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x089B786Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 668u, 0x0889F3FCu>(ctx, &aot_mem) && ctx.pc == 0x089B786Cu) goto L_089B786C;
    return;
L_089B786C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B78C8;
      }
      goto L_089B7880;
    }
L_089B7880:
    ctx.gpr[31] = (0x089B7888u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 825u, 0x0889FD24u>(ctx, &aot_mem) && ctx.pc == 0x089B7888u) goto L_089B7888;
    return;
L_089B7888:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B78C8;
      }
      goto L_089B7890;
    }
L_089B7890:
    ctx.gpr[31] = (0x089B7898u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 829u, 0x0889FD68u>(ctx, &aot_mem) && ctx.pc == 0x089B7898u) goto L_089B7898;
    return;
L_089B7898:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B78C8;
      }
      goto L_089B78A0;
    }
L_089B78A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B78C8;
      }
      goto L_089B78BC;
    }
L_089B78BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B78C8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089B78C8u) goto L_089B78C8;
    return;
L_089B78C8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[31] = (0x089B78E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 107u, 0x0893C804u>(ctx, &aot_mem) && ctx.pc == 0x089B78E0u) goto L_089B78E0;
    return;
L_089B78E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B78FC;
      }
      goto L_089B78E8;
    }
L_089B78E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089B78FC;
L_089B78FC:
    ctx.gpr[31] = (0x089B7904u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B7904u) goto L_089B7904;
    return;
L_089B7904:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B792C;
      }
      goto L_089B790C;
    }
L_089B790C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x089B7918u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 516u, 0x08A5ED8Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7918u) goto L_089B7918;
    return;
L_089B7918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-241));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(420), ctx.gpr[4]);
    goto L_089B792C;
L_089B792C:
    ctx.gpr[31] = (0x089B7934u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 717u, 0x0899FA70u>(ctx, &aot_mem) && ctx.pc == 0x089B7934u) goto L_089B7934;
    return;
L_089B7934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (65520u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B797C;
      }
      goto L_089B7954;
    }
L_089B7954:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1500u);
    ctx.gpr[6] = (0u | 27u);
    ctx.gpr[31] = (0x089B7968u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 106u, 0x089A07E8u>(ctx, &aot_mem) && ctx.pc == 0x089B7968u) goto L_089B7968;
    return;
L_089B7968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (65504u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089B797C;
L_089B797C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B798C;
      }
      goto L_089B7988;
    }
L_089B7988:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), 0u);
    goto L_089B798C;
L_089B798C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(856), 0u);
    ctx.gpr[31] = (0x089B7998u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B7998u) goto L_089B7998;
    return;
L_089B7998:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B79C4;
      }
      goto L_089B79A0;
    }
L_089B79A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B79C4;
      }
      goto L_089B79B0;
    }
L_089B79B0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B79C4;
      }
      goto L_089B79B8;
    }
L_089B79B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B79C4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089B79C4u) goto L_089B79C4;
    return;
L_089B79C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7A14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7A6C;
      }
      goto L_089B7A50;
    }
L_089B7A50:
    ctx.gpr[31] = (0x089B7A58u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 273u, 0x089A5340u>(ctx, &aot_mem) && ctx.pc == 0x089B7A58u) goto L_089B7A58;
    return;
L_089B7A58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
        goto L_089B7A74;
    }
    goto L_089B7A64;
L_089B7A64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7B84;
      }
      goto L_089B7A6C;
    }
L_089B7A6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 130u, 0x089B8690u>(ctx, &aot_mem); return;
      }
      goto L_089B7A74;
    }
L_089B7A74:
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7B84;
      }
      goto L_089B7A84;
    }
L_089B7A84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7B84;
      }
      goto L_089B7A94;
    }
L_089B7A94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7B84;
      }
      goto L_089B7AA8;
    }
L_089B7AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7AC8;
      }
      goto L_089B7AB8;
    }
L_089B7AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7B84;
      }
      goto L_089B7AC8;
    }
L_089B7AC8:
    ctx.gpr[31] = (0x089B7AD0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B7AD0u) goto L_089B7AD0;
    return;
L_089B7AD0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_089B7AF4;
      }
      goto L_089B7AD8;
    }
L_089B7AD8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089B7B74;
      }
      goto L_089B7AE4;
    }
L_089B7AE4:
    ctx.gpr[31] = (0x089B7AECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B7AECu) goto L_089B7AEC;
    return;
L_089B7AEC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7B74;
      }
      goto L_089B7AF4;
    }
L_089B7AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089B7B30;
      }
      goto L_089B7B04;
    }
L_089B7B04:
    ctx.gpr[31] = (0x089B7B0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 432u, 0x089A1E6Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7B0Cu) goto L_089B7B0C;
    return;
L_089B7B0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(152));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089B7B28u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7B28u) goto L_089B7B28;
    return;
L_089B7B28:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(504), 0u);
      if (branch_taken) {
          goto L_089B7B84;
      }
      goto L_089B7B30;
    }
L_089B7B30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089B7B40u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089B6DBC;
L_089B7B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7B5C;
      }
      goto L_089B7B4C;
    }
L_089B7B4C:
    ctx.gpr[31] = (0x089B7B54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 623u, 0x0889B6A0u>(ctx, &aot_mem) && ctx.pc == 0x089B7B54u) goto L_089B7B54;
    return;
L_089B7B54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7B6C;
      }
      goto L_089B7B5C;
    }
L_089B7B5C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), ctx.gpr[21]);
    ctx.gpr[31] = (0x089B7B68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 623u, 0x0889B6A0u>(ctx, &aot_mem) && ctx.pc == 0x089B7B68u) goto L_089B7B68;
    return;
L_089B7B68:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), 0u);
    goto L_089B7B6C;
L_089B7B6C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(504), 0u);
      if (branch_taken) {
          goto L_089B7B84;
      }
      goto L_089B7B74;
    }
L_089B7B74:
    ctx.gpr[31] = (0x089B7B7Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 621u, 0x0888F0A4u>(ctx, &aot_mem) && ctx.pc == 0x089B7B7Cu) goto L_089B7B7C;
    return;
L_089B7B7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 130u, 0x089B8690u>(ctx, &aot_mem); return;
      }
      goto L_089B7B84;
    }
L_089B7B84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7BB8;
      }
      goto L_089B7B98;
    }
L_089B7B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_089B7BB8;
L_089B7BB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7BF4;
      }
      goto L_089B7BC8;
    }
L_089B7BC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[31] = (0x089B7BDCu);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7BDCu) goto L_089B7BDC;
    return;
L_089B7BDC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7BF4;
      }
      goto L_089B7BE8;
    }
L_089B7BE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3216)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3216), ctx.gpr[5]);
    goto L_089B7BF4;
L_089B7BF4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7C5C;
      }
      goto L_089B7BFC;
    }
L_089B7BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7C5C;
      }
      goto L_089B7C10;
    }
L_089B7C10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7C5C;
      }
      goto L_089B7C20;
    }
L_089B7C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7C5C;
      }
      goto L_089B7C30;
    }
L_089B7C30:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[16] = (0u | 50u);
    ctx.gpr[22] = (0u | 18u);
    ctx.gpr[23] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[19] = (0u | 11u);
      if (branch_taken) {
          goto L_089B7C64;
      }
      goto L_089B7C54;
    }
L_089B7C54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7CD4;
      }
      goto L_089B7C5C;
    }
L_089B7C5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 130u, 0x089B8690u>(ctx, &aot_mem); return;
      }
      goto L_089B7C64;
    }
L_089B7C64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7CD4;
      }
      goto L_089B7C70;
    }
L_089B7C70:
    ctx.gpr[31] = (0x089B7C78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B7C78u) goto L_089B7C78;
    return;
L_089B7C78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7CD4;
      }
      goto L_089B7C80;
    }
L_089B7C80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_089B7CD4;
      }
      goto L_089B7C8C;
    }
L_089B7C8C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 7u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (0u | 1000u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(220), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(216), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(228), ctx.gpr[20]);
    goto L_089B7CD4;
L_089B7CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089B7CF0;
      }
      goto L_089B7CE0;
    }
L_089B7CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7D00;
      }
      goto L_089B7CF0;
    }
L_089B7CF0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089B7D00;
L_089B7D00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(541)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7D18;
      }
      goto L_089B7D0C;
    }
L_089B7D0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(541)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(541), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089B7D18;
L_089B7D18:
    ctx.gpr[31] = (0x089B7D20u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B7D20u) goto L_089B7D20;
    return;
L_089B7D20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7D3C;
      }
      goto L_089B7D28;
    }
L_089B7D28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2995)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7D3C;
      }
      goto L_089B7D34;
    }
L_089B7D34:
    ctx.gpr[31] = (0x089B7D3Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 281u, 0x0894531Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7D3Cu) goto L_089B7D3C;
    return;
L_089B7D3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089B7E50;
      }
      goto L_089B7D48;
    }
L_089B7D48:
    ctx.gpr[31] = (0x089B7D50u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B7D50u) goto L_089B7D50;
    return;
L_089B7D50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7DD0;
      }
      goto L_089B7D58;
    }
L_089B7D58:
    ctx.gpr[31] = (0x089B7D60u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 187u, 0x089ED3D0u>(ctx, &aot_mem) && ctx.pc == 0x089B7D60u) goto L_089B7D60;
    return;
L_089B7D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[6] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (2233u << 16u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
      if (branch_taken) {
          goto L_089B7DBC;
      }
      goto L_089B7D78;
    }
L_089B7D78:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (46887u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 50604u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[21] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089B7DBC;
L_089B7DBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[31] = (0x089B7DD0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 513u, 0x08A5ED6Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7DD0u) goto L_089B7DD0;
    return;
L_089B7DD0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B7DDCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 195u, 0x088A1328u>(ctx, &aot_mem) && ctx.pc == 0x089B7DDCu) goto L_089B7DDC;
    return;
L_089B7DDC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7DF8;
      }
      goto L_089B7DEC;
    }
L_089B7DEC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089B7DF8;
L_089B7DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089B7E34;
      }
      goto L_089B7E04;
    }
L_089B7E04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7E2C;
      }
      goto L_089B7E10;
    }
L_089B7E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(912), 0u);
        goto L_089B7E2C;
    }
    goto L_089B7E1C;
L_089B7E1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089B7E28u);
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089B7E28u) goto L_089B7E28;
    return;
L_089B7E28:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(912), 0u);
    goto L_089B7E2C;
L_089B7E2C:
    ctx.gpr[31] = (0x089B7E34u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089B7E34u) goto L_089B7E34;
    return;
L_089B7E34:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(844), ctx.gpr[16]);
    ctx.gpr[31] = (0x089B7E40u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 547u, 0x089A2528u>(ctx, &aot_mem) && ctx.pc == 0x089B7E40u) goto L_089B7E40;
    return;
L_089B7E40:
    ctx.gpr[31] = (0x089B7E48u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 698u, 0x0899F968u>(ctx, &aot_mem) && ctx.pc == 0x089B7E48u) goto L_089B7E48;
    return;
L_089B7E48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 130u, 0x089B8690u>(ctx, &aot_mem); return;
      }
      goto L_089B7E50;
    }
L_089B7E50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(748)));
    ctx.gpr[16] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (8u << 16u);
      if (branch_taken) {
          goto L_089B7E70;
      }
      goto L_089B7E60;
    }
L_089B7E60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B7E70;
L_089B7E70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(500)));
    ctx.gpr[5] = (0u | 65535u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7E98;
      }
      goto L_089B7E90;
    }
L_089B7E90:
    ctx.gpr[4] = (0u | 15000u);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(500), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089B7E98;
L_089B7E98:
    ctx.gpr[31] = (0x089B7EA0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B7EA0u) goto L_089B7EA0;
    return;
L_089B7EA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7F30;
      }
      goto L_089B7EA8;
    }
L_089B7EA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    ctx.gpr[4] = (2233u << 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[22];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
      if (branch_taken) {
          goto L_089B7EC4;
      }
      goto L_089B7EB8;
    }
L_089B7EB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089B7F20;
      }
      goto L_089B7EC4;
    }
L_089B7EC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089B7F10;
      }
      goto L_089B7ED8;
    }
L_089B7ED8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[21] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089B7F10;
L_089B7F10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_089B7F20;
L_089B7F20:
    ctx.gpr[31] = (0x089B7F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 513u, 0x08A5ED6Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7F28u) goto L_089B7F28;
    return;
L_089B7F28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7F9C;
      }
      goto L_089B7F30;
    }
L_089B7F30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089B7F9C;
      }
      goto L_089B7F3C;
    }
L_089B7F3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B7F88;
      }
      goto L_089B7F50;
    }
L_089B7F50:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089B7F88;
L_089B7F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_089B7F9C;
L_089B7F9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 7u, 0x089B804Cu>(ctx, &aot_mem); return;
      }
      goto L_089B7FA8;
    }
L_089B7FA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(544)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 6u, 0x089B8048u>(ctx, &aot_mem); return;
      }
      goto L_089B7FBC;
    }
L_089B7FBC:
    ctx.gpr[18] = (256u << 16u);
    ctx.gpr[19] = (2230u << 16u);
    goto L_089B7FC4;
L_089B7FC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 5u, 0x089B8034u>(ctx, &aot_mem); return;
      }
      goto L_089B7FD0;
    }
L_089B7FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 5u, 0x089B8034u>(ctx, &aot_mem); return;
      }
      goto L_089B7FE4;
    }
L_089B7FE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 5u, 0x089B8034u>(ctx, &aot_mem); return;
      }
      goto L_089B7FF8;
    }
L_089B7FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(628)));
    ctx.pc = 0x089B8000u; return;
}

void recomp_unit_0108(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0108_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_108(Runtime &runtime) {
    runtime.register_generated_unit(108u, 0x089B4000u, 16384u, &recomp_unit_0108, &recomp_unit_0108_entry);
    runtime.register_function(0x089B4000u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B400Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4018u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B403Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4050u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4058u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B407Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4084u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B40A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B40B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B40B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B40DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B40F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B40F8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4100u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4114u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4120u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4128u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4134u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4140u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4148u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4150u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B415Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4168u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B416Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4188u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4190u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B419Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B41ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B41C8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B41D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B41FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4208u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4210u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B422Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B423Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4248u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4260u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B426Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4288u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4298u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B42ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B42C0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B42D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B42F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B42FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4308u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4318u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4320u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4330u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4338u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4344u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4354u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4364u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4370u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4384u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B438Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4394u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B43A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B43B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B43C8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B43D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B43DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B43F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4400u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4408u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4418u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B441Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4424u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4444u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4454u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4464u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B446Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4478u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4484u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4494u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B449Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B44B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B44B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B44C0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B44C8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B44D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B44ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B44FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4518u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B452Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4534u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B453Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4558u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4574u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4580u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4590u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B459Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B45A4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B45ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B45B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B45BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B45D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B45ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4604u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B460Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4618u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4620u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4628u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B462Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4640u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4658u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4660u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B466Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B467Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4688u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4694u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B46A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B46ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B46B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B46C0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B46DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B46FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4708u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4720u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B472Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4734u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B473Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B474Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4760u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4768u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4770u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B477Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4784u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B478Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47A4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47C0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47C8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47F8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4800u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4808u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4810u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4818u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4820u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4828u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4830u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4838u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4844u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4858u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4860u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4868u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4870u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4884u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B488Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4898u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B48A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B48B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B48B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B48C8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B48D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B48E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B48E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B48F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4900u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4908u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4918u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4920u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4934u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4944u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4954u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B495Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4974u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4980u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B499Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B49A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B49B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B49C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B49DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B49F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B49FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A04u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A14u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A20u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A34u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A3Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A4Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A58u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A60u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A68u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A70u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A78u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A80u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A88u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A94u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4AA4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4AACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4AB4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4ABCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4AD8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4AE0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4AE8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4AF4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4AFCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B04u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B0Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B14u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B1Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B30u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B40u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B50u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B64u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B6Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B7Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B84u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B8Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B94u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4B9Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4BA4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4BACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4BB4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4BBCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4BC4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4BCCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4BD4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4BE0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4BE8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4BF8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C08u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C14u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C38u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C40u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C48u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C64u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C6Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C7Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C84u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C8Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C94u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C9Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4CA4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4CACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4CB4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4CBCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4CC8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4CD0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4CD8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4CF0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4CF8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D04u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D0Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D14u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D1Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D24u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D2Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D34u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D3Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D44u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D4Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D54u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D5Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D64u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D6Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D74u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D7Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D84u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D8Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D94u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D9Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4DA4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4DACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4DB4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4DBCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4DC4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4DCCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4DD4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4DDCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4DE4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4DF4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E00u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E08u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E10u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E1Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E38u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E44u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E68u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E70u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E80u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E88u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E90u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4EA0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4EB4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4ECCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4EE0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4EECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4EF8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4F04u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4F18u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4F20u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4F30u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4F40u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4F48u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4F64u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4F6Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4FA0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4FD0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B501Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B505Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5064u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5070u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B507Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5080u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5094u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B50A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B50B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B50BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B50C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B50CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B50D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B50E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5104u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5110u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5118u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5128u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5138u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5144u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5154u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5164u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5170u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5178u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5184u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B518Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5194u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B519Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B51A4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B51B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B51B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B51C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B51D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B51E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5228u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B526Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B528Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5294u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B529Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B52A4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B52BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B52CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B52DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B52E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B52F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B52F8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5308u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B531Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B532Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5334u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5348u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5350u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5358u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5360u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5368u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5370u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5378u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5380u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5390u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5398u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B53A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B53B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B53B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B53C0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B53CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B53DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B53F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5404u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5414u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B541Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5428u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5438u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5440u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5448u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5460u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5470u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5480u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5498u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B54A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B54B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B54BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B54CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B54D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B54DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B54ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B54F8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5504u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5514u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B551Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5524u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5534u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B553Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5544u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5550u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B555Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5568u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5570u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5578u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5598u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B559Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B55ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B55FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5604u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5610u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5618u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5620u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5628u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5630u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5638u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5640u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B564Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B565Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5668u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5670u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5678u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5684u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B568Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5694u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B56A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B56B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B56D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B56ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B56F8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5700u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5710u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B571Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5734u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5774u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5784u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B578Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B57A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B57B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B57CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B57D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B57DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B57E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B57ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B57F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5800u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5810u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5824u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B582Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5834u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B583Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5860u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5884u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5894u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B58A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B58C8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B58D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B58DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B58E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B58F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5900u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5908u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5918u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5920u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5928u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5940u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5948u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5950u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5968u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5980u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5990u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B599Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B59ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B59B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B59BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B59CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B59DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B59E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B59E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B59ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B59F8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A08u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A0Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A14u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A20u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A38u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A40u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A50u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A5Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A6Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A70u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A7Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A88u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A8Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A98u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5AA4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5AA8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5AB4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5AC0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5AC4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5AD0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5ADCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5AE8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5AF8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B04u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B18u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B30u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B40u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B50u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B60u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B64u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B6Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B80u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B88u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B90u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5BA0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5BA8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5BB4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5BBCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5BCCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5BD4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5BE4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5BF0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C04u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C0Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C14u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C24u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C2Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C38u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C40u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C50u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C58u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C60u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C68u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C70u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C98u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D04u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D0Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D30u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D4Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D54u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D5Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D64u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D68u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D78u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D84u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D98u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D9Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5DA8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5DB0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5DECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5E1Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5E24u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5E48u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5E60u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5E7Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5EA0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5EC4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5EDCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5EE8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5EF4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5F00u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5F18u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5F30u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5F54u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5F78u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5F90u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5F9Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5FA8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5FBCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5FC4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5FD0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5FDCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5FF0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5FF8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6004u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6010u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6024u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B603Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6060u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6084u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B609Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B60A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B60B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B60C8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B60D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B60DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B60E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B60FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B610Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6114u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6120u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B612Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6138u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6160u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6174u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6184u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B618Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6198u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B61A4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B61B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B61D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B61E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B61FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B620Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6220u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6248u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6268u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6274u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B628Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B62A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B62B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B62F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6368u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B63D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6448u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B64C0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B64E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B64F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6518u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B652Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6550u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6570u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B65C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B65CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B65F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6618u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6624u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6640u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6658u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6664u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6680u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6688u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6698u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B66A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B66B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B66C8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B66D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B66E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B66F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B66FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6704u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6710u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6718u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B671Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6728u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6738u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6754u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6760u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6768u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6770u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B67F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6810u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B683Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6868u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6878u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B68B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B68D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B68E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B68F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6904u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6918u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6920u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6928u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B693Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6984u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B698Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6994u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B69A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B69A4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B69C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B69CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B69ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B69F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B69FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6A08u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6A10u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6A24u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6A30u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6AC8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6AD8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6AE8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6AF0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6AF8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6B00u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6B08u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6B14u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6BDCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6BE8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6BFCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6C0Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6C14u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6C18u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6C2Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6C4Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6C98u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6CD0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6CE4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6CF0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6D00u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6D0Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6D14u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6D1Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6D24u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6D34u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6D44u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6D4Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6D54u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6D64u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6D70u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6D78u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6D7Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6D88u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6D94u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6D9Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6DBCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6E54u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6E68u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6E80u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6E8Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6E94u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6EA0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6EA8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6EB0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6EC0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6ED0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6EF0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6EFCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6F04u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6F0Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6F1Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6F2Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6F3Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6F50u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6FC8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6FD0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7020u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7028u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7058u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7060u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B706Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7070u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7080u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7090u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7098u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B70A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B70B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B70C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B70DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B70E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B70ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B70FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7108u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7110u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7118u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7128u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B712Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7188u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B71A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B71B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B71C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B71D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B71DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B71E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B71F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B71FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7200u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7208u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7218u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7220u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7238u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B725Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B727Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7288u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7290u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B72A4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B72CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B72D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B72E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B72ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7334u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B733Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7340u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B734Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B735Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B736Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7374u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7384u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7394u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B73A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B73A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B73B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B73B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B73C0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B73D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B73D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7424u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7444u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7460u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B746Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7474u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7480u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7490u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B74A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B74A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B74B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B74B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B74D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B74F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B74FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B750Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B751Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7528u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7534u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7540u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7544u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B754Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7550u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7554u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B755Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7568u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7570u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B759Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B75ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B75BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B75C8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B75D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B75E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7618u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7648u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7678u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7698u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B76A4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B76B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B76C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B76CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B76D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B76DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B76E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B76ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B76F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B76FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7708u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7710u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7718u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7720u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7728u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7730u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7738u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7740u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7744u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7764u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B776Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7798u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B77A4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B77B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B77BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B77C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B77D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B77E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B77F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7814u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B781Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7830u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7844u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B784Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7860u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B786Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7880u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7888u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7890u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7898u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B78A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B78BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B78C8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B78E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B78E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B78FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7904u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B790Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7918u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B792Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7934u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7954u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7968u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B797Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7988u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B798Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7998u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B79A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B79B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B79B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B79C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A14u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A50u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A58u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A64u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A6Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A74u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A84u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A94u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7AA8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7AB8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7AC8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7AD0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7AD8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7AE4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7AECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7AF4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B04u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B0Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B30u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B40u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B4Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B54u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B5Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B68u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B6Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B74u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B7Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B84u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B98u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7BB8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7BC8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7BDCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7BE8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7BF4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7BFCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C10u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C20u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C30u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C54u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C5Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C64u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C70u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C78u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C80u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C8Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7CD4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7CE0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7CF0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D00u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D0Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D18u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D20u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D34u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D3Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D48u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D50u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D58u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D60u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D78u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7DBCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7DD0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7DDCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7DECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7DF8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E04u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E10u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E1Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E2Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E34u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E40u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E48u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E50u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E60u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E70u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E90u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E98u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7EA0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7EA8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7EB8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7EC4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7ED8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F10u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F20u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F30u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F3Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F50u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F88u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F9Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7FA8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7FBCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7FC4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7FD0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7FE4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7FF8u, &recomp_unit_0108, "recomp_unit_0108");
}
} // namespace psprecomp
