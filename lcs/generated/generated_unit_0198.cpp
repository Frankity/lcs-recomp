#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0198[4019] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 0, 5, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 19, 0, 0, 0, 0, 20, 0, 21,
    0, 0, 22, 0, 0, 23, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 29, 0,
    0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0,
    0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 46,
    0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 50, 51, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 0, 0, 0, 57,
    0, 58, 59, 60, 0, 61, 62, 63, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0,
    0, 0, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 88, 0, 89, 90, 0, 0, 91, 0,
    0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 96, 0, 97, 0, 98, 0, 99, 0, 0, 100, 0, 101, 0, 102, 0, 0, 0,
    0, 0, 0, 103, 104, 0, 105, 0, 106, 0, 0, 107, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0,
    114, 0, 115, 0, 0, 116, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 125, 0, 126,
    0, 0, 0, 127, 0, 128, 0, 0, 129, 0, 130, 0, 0, 131, 0, 132, 0, 0, 133, 0, 134, 0, 135, 136, 0, 0, 137, 0, 0, 0, 138, 0,
    0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 144, 145, 0, 0, 146, 0, 147, 0, 0, 148, 0, 0, 149, 0, 150,
    0, 0, 151, 0, 0, 152, 0, 153, 0, 154, 0, 0, 155, 0, 156, 0, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 0, 162, 0, 163, 0,
    0, 0, 164, 0, 165, 0, 166, 167, 0, 168, 0, 0, 0, 169, 0, 170, 0, 0, 171, 0, 172, 0, 0, 173, 0, 174, 0, 0, 175, 0, 176, 0,
    177, 178, 0, 179, 0, 180, 0, 181, 0, 0, 182, 0, 183, 0, 184, 185, 0, 186, 0, 187, 0, 188, 0, 189, 0, 190, 191, 0, 192, 0, 0, 193,
    0, 194, 0, 195, 0, 196, 0, 0, 0, 197, 0, 198, 0, 0, 199, 0, 200, 0, 201, 202, 0, 203, 0, 204, 0, 0, 205, 0, 206, 0, 207, 0,
    0, 208, 0, 209, 0, 210, 0, 0, 211, 0, 212, 213, 214, 215, 0, 216, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 220, 0, 221, 222, 223, 0,
    0, 224, 0, 225, 0, 0, 226, 0, 0, 227, 228, 0, 229, 0, 0, 230, 0, 0, 231, 0, 232, 0, 233, 0, 234, 0, 0, 235, 0, 236, 0, 237,
    0, 238, 0, 239, 240, 0, 241, 0, 0, 0, 242, 0, 243, 244, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 248, 0, 249, 0, 250,
    0, 0, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 0, 256, 0, 257, 0, 0, 0, 258, 0, 259, 260, 0, 261, 0, 0, 0, 0, 0, 0,
    262, 0, 263, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 266, 0, 267, 0, 268, 0, 0, 269, 0, 270, 0, 271, 0, 272, 0, 0, 0, 273, 0,
    274, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 277, 0, 278, 0, 279, 0, 0, 0, 280, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 283,
    0, 284, 0, 285, 0, 286, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0,
    0, 293, 0, 294, 0, 0, 0, 295, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 299, 0, 0, 0, 300, 0, 0, 301, 0, 302, 0,
    0, 0, 303, 0, 0, 304, 0, 305, 0, 0, 306, 0, 0, 0, 307, 0, 308, 0, 0, 309, 0, 0, 310, 311, 0, 312, 0, 0, 313, 0, 0, 314,
    0, 315, 0, 316, 0, 317, 0, 0, 318, 0, 319, 0, 320, 0, 321, 0, 322, 323, 0, 324, 0, 0, 0, 325, 0, 326, 327, 0, 328, 0, 0, 0,
    0, 0, 0, 329, 0, 330, 0, 0, 331, 0, 332, 0, 333, 0, 0, 0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 0, 0, 339, 0, 340, 0, 0,
    0, 341, 0, 342, 343, 0, 344, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0,
    350, 0, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 357, 0, 0,
    358, 0, 359, 0, 0, 360, 0, 361, 0, 362, 0, 0, 363, 0, 364, 0, 365, 0, 366, 0, 0, 0, 367, 0, 368, 0, 0, 369, 0, 370, 0, 371,
    0, 0, 0, 372, 0, 373, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 377, 0, 378, 0, 0, 379, 0, 380, 0, 0, 0, 381, 0, 0,
    382, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 386, 0, 387, 0, 388, 0, 0, 389, 0, 390, 0, 391, 0, 392, 0, 0, 0, 0,
    393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 398, 0, 0, 399, 0, 0, 0, 0, 400, 0,
    0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0,
    0, 407, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 411, 412, 0, 413, 0, 0, 414, 0, 0, 415, 0, 0, 0,
    0, 0, 416, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 419, 420, 0, 421, 422, 423, 424, 0, 425, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 429, 430, 431, 0, 432,
    0, 433, 0, 434, 0, 435, 0, 436, 0, 437, 0, 438, 0, 439, 0, 440, 0, 441, 0, 442, 0, 443, 0, 444, 0, 445, 0, 446, 447, 0, 448, 0,
    449, 0, 450, 0, 451, 0, 452, 0, 453, 0, 454, 0, 455, 0, 456, 0, 457, 0, 458, 0, 459, 0, 460, 0, 461, 0, 462, 0, 0, 0, 0, 463,
    0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 472, 0,
    0, 473, 0, 0, 0, 474, 0, 475, 0, 476, 0, 477, 0, 478, 0, 0, 479, 0, 480, 0, 0, 0, 481, 0, 482, 0, 483, 0, 0, 484, 0, 0,
    485, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0,
    0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 494, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    498, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0,
    0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505,
    0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 508, 509, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0,
    0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 523, 0, 0,
    0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 527, 0, 528, 0, 0, 529, 0,
    0, 530, 0, 0, 0, 0, 531, 0, 0, 532, 0, 533, 0, 534, 0, 0, 0, 535, 0, 0, 0, 536, 0, 537, 0, 0, 0, 538, 0, 0, 539, 0,
    0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 547, 0, 0, 548, 549, 0, 0, 0,
    550, 0, 0, 551, 0, 0, 552, 553, 0, 0, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 557, 0,
    558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 560, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 563,
    0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 566, 0, 0, 567, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0, 0, 0, 570, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 578, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 580, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0,
    0, 0, 0, 583, 0, 584, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0,
    591, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 594, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 597, 598, 599, 0, 600, 0, 0, 0, 0, 601, 0, 602, 603, 0, 0,
    0, 0, 0, 0, 604, 0, 605, 0, 606, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0,
    610, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 614, 0, 0,
    615, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 617, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 620,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 622, 0, 623, 0, 624, 0, 625, 0, 626, 0,
    627, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0,
    633, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 636, 0, 637, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0,
    0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 647, 648, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 651, 0, 652, 0,
    0, 0, 0, 0, 0, 0, 653, 654, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 660, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0,
    0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 665, 0,
    0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 669, 0, 670, 0, 0, 0,
    0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 676, 0, 677, 0, 0, 678, 679, 680, 681, 682, 0, 683, 0, 0, 0, 0, 0, 0,
    684, 0, 0, 0, 685, 0, 686, 687, 0, 688, 689, 690, 0, 691, 0, 0, 0, 692, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 695,
    0, 696, 0, 697, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 700, 0, 0, 701, 0, 0, 0, 0, 0, 702, 0,
    0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 704, 705, 0, 0, 0, 706, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 710, 0, 0, 711, 0, 712, 0, 0, 713, 0, 0, 714, 0, 715, 716, 0, 717, 0, 0, 0, 718, 0, 0, 719, 0, 0, 720, 0,
    0, 721, 0, 0, 722, 0, 0, 723, 0, 0, 724, 0, 725, 0, 0, 726, 0, 0, 727, 0, 0, 728, 0, 0, 0, 729, 0, 730, 0, 0, 731, 0,
    732, 0, 0, 733, 734, 0, 0, 735, 0, 0, 0, 736, 0, 737, 738, 0, 0, 739, 0, 740, 0, 0, 0, 741, 0, 742, 0, 0, 743, 0, 744, 0,
    0, 0, 745, 746, 0, 747, 0, 0, 748, 0, 749, 0, 750, 751, 0, 752, 0, 0, 753, 0, 0, 0, 754, 0, 0, 0, 0, 755, 0, 0, 756, 0,
    0, 0, 757, 0, 758, 0, 0, 759, 0, 0, 760, 0, 761, 762, 0, 0, 0, 763, 0, 0, 0, 0, 764, 0, 765, 0, 766, 0, 767, 0, 0, 0,
    768, 0, 0, 0, 0, 0, 769, 0, 0, 0, 770, 0, 0, 0, 0, 771, 0, 0, 0, 0, 772, 0, 0, 0, 773, 0, 0, 0, 774, 775, 0, 0,
    0, 0, 776, 0, 0, 0, 777, 0, 0, 778, 779, 0, 780, 0, 781, 0, 0, 782, 0, 783, 0, 0, 784, 0, 785, 786, 0, 787, 0, 0, 788, 0,
    789, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 792, 0, 793, 0, 0, 0, 794, 0, 0, 0, 795, 0, 796, 797,
    0, 0, 798, 0, 799, 800, 0, 0, 0, 0, 0, 0, 801, 0, 802, 0, 803, 0, 0, 804, 0, 0, 805, 0, 806, 0, 807, 808, 0, 0, 0, 809,
    0, 810, 0, 0, 811, 0, 0, 0, 0, 812, 813, 0, 0, 814, 0, 815, 0, 0, 816, 0, 0, 0, 0, 817, 0, 818, 0, 819, 0, 0, 0, 0,
    0, 820, 0, 0, 0, 0, 0, 821, 0, 0, 0, 822, 0, 0, 0, 823, 0, 0, 824, 0, 0, 825, 0, 0, 826, 0, 827, 0, 0, 828, 0, 0,
    0, 829, 0, 0, 0, 0, 0, 830, 0, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832, 833, 0, 0, 0, 0,
    0, 0, 0, 834, 0, 0, 0, 0, 0, 0, 835, 0, 0, 0, 0, 0, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0, 0, 0, 837, 0, 0, 0,
    0, 0, 0, 838, 0, 0, 0, 0, 0, 0, 0, 839, 0, 840, 0, 841, 0, 842, 0, 843, 844, 845, 0, 0, 0, 846, 0, 847, 0, 848, 0, 849,
    0, 850, 0, 851, 852, 853, 854, 855, 0, 856, 0, 857, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 858, 0, 0, 0, 0, 0,
    0, 0, 859, 0, 0, 860, 0, 0, 861, 0, 0, 862, 0, 863, 0, 0, 0, 0, 864,
};
void recomp_unit_0198_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B1C128u;
        entry_id = (entry_delta < 16076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0198[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B1C128;
    case 2u: goto L_08B1C144;
    case 3u: goto L_08B1C14C;
    case 4u: goto L_08B1C158;
    case 5u: goto L_08B1C164;
    case 6u: goto L_08B1C16C;
    case 7u: goto L_08B1C178;
    case 8u: goto L_08B1C1B4;
    case 9u: goto L_08B1C1E0;
    case 10u: goto L_08B1C1E8;
    case 11u: goto L_08B1C1F0;
    case 12u: goto L_08B1C200;
    case 13u: goto L_08B1C230;
    case 14u: goto L_08B1C23C;
    case 15u: goto L_08B1C248;
    case 16u: goto L_08B1C25C;
    case 17u: goto L_08B1C274;
    case 18u: goto L_08B1C27C;
    case 19u: goto L_08B1C288;
    case 20u: goto L_08B1C29C;
    case 21u: goto L_08B1C2A4;
    case 22u: goto L_08B1C2B0;
    case 23u: goto L_08B1C2BC;
    case 24u: goto L_08B1C2CC;
    case 25u: goto L_08B1C2D8;
    case 26u: goto L_08B1C2F4;
    case 27u: goto L_08B1C300;
    case 28u: goto L_08B1C31C;
    case 29u: goto L_08B1C320;
    case 30u: goto L_08B1C33C;
    case 31u: goto L_08B1C348;
    case 32u: goto L_08B1C35C;
    case 33u: goto L_08B1C364;
    case 34u: goto L_08B1C388;
    case 35u: goto L_08B1C3A0;
    case 36u: goto L_08B1C3AC;
    case 37u: goto L_08B1C3C4;
    case 38u: goto L_08B1C3D0;
    case 39u: goto L_08B1C3F8;
    case 40u: goto L_08B1C420;
    case 41u: goto L_08B1C448;
    case 42u: goto L_08B1C464;
    case 43u: goto L_08B1C46C;
    case 44u: goto L_08B1C488;
    case 45u: goto L_08B1C494;
    case 46u: goto L_08B1C4A4;
    case 47u: goto L_08B1C4AC;
    case 48u: goto L_08B1C4C8;
    case 49u: goto L_08B1C4DC;
    case 50u: goto L_08B1C4E8;
    case 51u: goto L_08B1C4EC;
    case 52u: goto L_08B1C4F0;
    case 53u: goto L_08B1C4F8;
    case 54u: goto L_08B1C500;
    case 55u: goto L_08B1C508;
    case 56u: goto L_08B1C510;
    case 57u: goto L_08B1C524;
    case 58u: goto L_08B1C52C;
    case 59u: goto L_08B1C530;
    case 60u: goto L_08B1C534;
    case 61u: goto L_08B1C53C;
    case 62u: goto L_08B1C540;
    case 63u: goto L_08B1C544;
    case 64u: goto L_08B1C548;
    case 65u: goto L_08B1C570;
    case 66u: goto L_08B1C598;
    case 67u: goto L_08B1C5C0;
    case 68u: goto L_08B1C5E4;
    case 69u: goto L_08B1C614;
    case 70u: goto L_08B1C638;
    case 71u: goto L_08B1C640;
    case 72u: goto L_08B1C654;
    case 73u: goto L_08B1C668;
    case 74u: goto L_08B1C678;
    case 75u: goto L_08B1C68C;
    case 76u: goto L_08B1C69C;
    case 77u: goto L_08B1C6A8;
    case 78u: goto L_08B1C6E4;
    case 79u: goto L_08B1C6F0;
    case 80u: goto L_08B1C710;
    case 81u: goto L_08B1C734;
    case 82u: goto L_08B1C73C;
    case 83u: goto L_08B1C74C;
    case 84u: goto L_08B1C758;
    case 85u: goto L_08B1C768;
    case 86u: goto L_08B1C774;
    case 87u: goto L_08B1C780;
    case 88u: goto L_08B1C788;
    case 89u: goto L_08B1C790;
    case 90u: goto L_08B1C794;
    case 91u: goto L_08B1C7A0;
    case 92u: goto L_08B1C7AC;
    case 93u: goto L_08B1C7C0;
    case 94u: goto L_08B1C7D0;
    case 95u: goto L_08B1C7D8;
    case 96u: goto L_08B1C7E4;
    case 97u: goto L_08B1C7EC;
    case 98u: goto L_08B1C7F4;
    case 99u: goto L_08B1C7FC;
    case 100u: goto L_08B1C808;
    case 101u: goto L_08B1C810;
    case 102u: goto L_08B1C818;
    case 103u: goto L_08B1C834;
    case 104u: goto L_08B1C838;
    case 105u: goto L_08B1C840;
    case 106u: goto L_08B1C848;
    case 107u: goto L_08B1C854;
    case 108u: goto L_08B1C85C;
    case 109u: goto L_08B1C86C;
    case 110u: goto L_08B1C878;
    case 111u: goto L_08B1C884;
    case 112u: goto L_08B1C890;
    case 113u: goto L_08B1C89C;
    case 114u: goto L_08B1C8A8;
    case 115u: goto L_08B1C8B0;
    case 116u: goto L_08B1C8BC;
    case 117u: goto L_08B1C8C4;
    case 118u: goto L_08B1C8D0;
    case 119u: goto L_08B1C8DC;
    case 120u: goto L_08B1C8E8;
    case 121u: goto L_08B1C8F0;
    case 122u: goto L_08B1C8FC;
    case 123u: goto L_08B1C908;
    case 124u: goto L_08B1C914;
    case 125u: goto L_08B1C91C;
    case 126u: goto L_08B1C924;
    case 127u: goto L_08B1C934;
    case 128u: goto L_08B1C93C;
    case 129u: goto L_08B1C948;
    case 130u: goto L_08B1C950;
    case 131u: goto L_08B1C95C;
    case 132u: goto L_08B1C964;
    case 133u: goto L_08B1C970;
    case 134u: goto L_08B1C978;
    case 135u: goto L_08B1C980;
    case 136u: goto L_08B1C984;
    case 137u: goto L_08B1C990;
    case 138u: goto L_08B1C9A0;
    case 139u: goto L_08B1C9AC;
    case 140u: goto L_08B1C9BC;
    case 141u: goto L_08B1C9C8;
    case 142u: goto L_08B1C9D4;
    case 143u: goto L_08B1C9E0;
    case 144u: goto L_08B1C9EC;
    case 145u: goto L_08B1C9F0;
    case 146u: goto L_08B1C9FC;
    case 147u: goto L_08B1CA04;
    case 148u: goto L_08B1CA10;
    case 149u: goto L_08B1CA1C;
    case 150u: goto L_08B1CA24;
    case 151u: goto L_08B1CA30;
    case 152u: goto L_08B1CA3C;
    case 153u: goto L_08B1CA44;
    case 154u: goto L_08B1CA4C;
    case 155u: goto L_08B1CA58;
    case 156u: goto L_08B1CA60;
    case 157u: goto L_08B1CA6C;
    case 158u: goto L_08B1CA74;
    case 159u: goto L_08B1CA7C;
    case 160u: goto L_08B1CA84;
    case 161u: goto L_08B1CA8C;
    case 162u: goto L_08B1CA98;
    case 163u: goto L_08B1CAA0;
    case 164u: goto L_08B1CAB0;
    case 165u: goto L_08B1CAB8;
    case 166u: goto L_08B1CAC0;
    case 167u: goto L_08B1CAC4;
    case 168u: goto L_08B1CACC;
    case 169u: goto L_08B1CADC;
    case 170u: goto L_08B1CAE4;
    case 171u: goto L_08B1CAF0;
    case 172u: goto L_08B1CAF8;
    case 173u: goto L_08B1CB04;
    case 174u: goto L_08B1CB0C;
    case 175u: goto L_08B1CB18;
    case 176u: goto L_08B1CB20;
    case 177u: goto L_08B1CB28;
    case 178u: goto L_08B1CB2C;
    case 179u: goto L_08B1CB34;
    case 180u: goto L_08B1CB3C;
    case 181u: goto L_08B1CB44;
    case 182u: goto L_08B1CB50;
    case 183u: goto L_08B1CB58;
    case 184u: goto L_08B1CB60;
    case 185u: goto L_08B1CB64;
    case 186u: goto L_08B1CB6C;
    case 187u: goto L_08B1CB74;
    case 188u: goto L_08B1CB7C;
    case 189u: goto L_08B1CB84;
    case 190u: goto L_08B1CB8C;
    case 191u: goto L_08B1CB90;
    case 192u: goto L_08B1CB98;
    case 193u: goto L_08B1CBA4;
    case 194u: goto L_08B1CBAC;
    case 195u: goto L_08B1CBB4;
    case 196u: goto L_08B1CBBC;
    case 197u: goto L_08B1CBCC;
    case 198u: goto L_08B1CBD4;
    case 199u: goto L_08B1CBE0;
    case 200u: goto L_08B1CBE8;
    case 201u: goto L_08B1CBF0;
    case 202u: goto L_08B1CBF4;
    case 203u: goto L_08B1CBFC;
    case 204u: goto L_08B1CC04;
    case 205u: goto L_08B1CC10;
    case 206u: goto L_08B1CC18;
    case 207u: goto L_08B1CC20;
    case 208u: goto L_08B1CC2C;
    case 209u: goto L_08B1CC34;
    case 210u: goto L_08B1CC3C;
    case 211u: goto L_08B1CC48;
    case 212u: goto L_08B1CC50;
    case 213u: goto L_08B1CC54;
    case 214u: goto L_08B1CC58;
    case 215u: goto L_08B1CC5C;
    case 216u: goto L_08B1CC64;
    case 217u: goto L_08B1CC6C;
    case 218u: goto L_08B1CC7C;
    case 219u: goto L_08B1CC88;
    case 220u: goto L_08B1CC90;
    case 221u: goto L_08B1CC98;
    case 222u: goto L_08B1CC9C;
    case 223u: goto L_08B1CCA0;
    case 224u: goto L_08B1CCAC;
    case 225u: goto L_08B1CCB4;
    case 226u: goto L_08B1CCC0;
    case 227u: goto L_08B1CCCC;
    case 228u: goto L_08B1CCD0;
    case 229u: goto L_08B1CCD8;
    case 230u: goto L_08B1CCE4;
    case 231u: goto L_08B1CCF0;
    case 232u: goto L_08B1CCF8;
    case 233u: goto L_08B1CD00;
    case 234u: goto L_08B1CD08;
    case 235u: goto L_08B1CD14;
    case 236u: goto L_08B1CD1C;
    case 237u: goto L_08B1CD24;
    case 238u: goto L_08B1CD2C;
    case 239u: goto L_08B1CD34;
    case 240u: goto L_08B1CD38;
    case 241u: goto L_08B1CD40;
    case 242u: goto L_08B1CD50;
    case 243u: goto L_08B1CD58;
    case 244u: goto L_08B1CD5C;
    case 245u: goto L_08B1CD64;
    case 246u: goto L_08B1CD80;
    case 247u: goto L_08B1CD88;
    case 248u: goto L_08B1CD94;
    case 249u: goto L_08B1CD9C;
    case 250u: goto L_08B1CDA4;
    case 251u: goto L_08B1CDB4;
    case 252u: goto L_08B1CDBC;
    case 253u: goto L_08B1CDC4;
    case 254u: goto L_08B1CDCC;
    case 255u: goto L_08B1CDD4;
    case 256u: goto L_08B1CDE0;
    case 257u: goto L_08B1CDE8;
    case 258u: goto L_08B1CDF8;
    case 259u: goto L_08B1CE00;
    case 260u: goto L_08B1CE04;
    case 261u: goto L_08B1CE0C;
    case 262u: goto L_08B1CE28;
    case 263u: goto L_08B1CE30;
    case 264u: goto L_08B1CE48;
    case 265u: goto L_08B1CE50;
    case 266u: goto L_08B1CE5C;
    case 267u: goto L_08B1CE64;
    case 268u: goto L_08B1CE6C;
    case 269u: goto L_08B1CE78;
    case 270u: goto L_08B1CE80;
    case 271u: goto L_08B1CE88;
    case 272u: goto L_08B1CE90;
    case 273u: goto L_08B1CEA0;
    case 274u: goto L_08B1CEA8;
    case 275u: goto L_08B1CEC4;
    case 276u: goto L_08B1CECC;
    case 277u: goto L_08B1CED8;
    case 278u: goto L_08B1CEE0;
    case 279u: goto L_08B1CEE8;
    case 280u: goto L_08B1CEF8;
    case 281u: goto L_08B1CF00;
    case 282u: goto L_08B1CF08;
    case 283u: goto L_08B1CF24;
    case 284u: goto L_08B1CF2C;
    case 285u: goto L_08B1CF34;
    case 286u: goto L_08B1CF3C;
    case 287u: goto L_08B1CF48;
    case 288u: goto L_08B1CF50;
    case 289u: goto L_08B1CF6C;
    case 290u: goto L_08B1CF74;
    case 291u: goto L_08B1CF8C;
    case 292u: goto L_08B1CF94;
    case 293u: goto L_08B1CFAC;
    case 294u: goto L_08B1CFB4;
    case 295u: goto L_08B1CFC4;
    case 296u: goto L_08B1CFD0;
    case 297u: goto L_08B1CFD8;
    case 298u: goto L_08B1CFF4;
    case 299u: goto L_08B1CFFC;
    case 300u: goto L_08B1D00C;
    case 301u: goto L_08B1D018;
    case 302u: goto L_08B1D020;
    case 303u: goto L_08B1D030;
    case 304u: goto L_08B1D03C;
    case 305u: goto L_08B1D044;
    case 306u: goto L_08B1D050;
    case 307u: goto L_08B1D060;
    case 308u: goto L_08B1D068;
    case 309u: goto L_08B1D074;
    case 310u: goto L_08B1D080;
    case 311u: goto L_08B1D084;
    case 312u: goto L_08B1D08C;
    case 313u: goto L_08B1D098;
    case 314u: goto L_08B1D0A4;
    case 315u: goto L_08B1D0AC;
    case 316u: goto L_08B1D0B4;
    case 317u: goto L_08B1D0BC;
    case 318u: goto L_08B1D0C8;
    case 319u: goto L_08B1D0D0;
    case 320u: goto L_08B1D0D8;
    case 321u: goto L_08B1D0E0;
    case 322u: goto L_08B1D0E8;
    case 323u: goto L_08B1D0EC;
    case 324u: goto L_08B1D0F4;
    case 325u: goto L_08B1D104;
    case 326u: goto L_08B1D10C;
    case 327u: goto L_08B1D110;
    case 328u: goto L_08B1D118;
    case 329u: goto L_08B1D134;
    case 330u: goto L_08B1D13C;
    case 331u: goto L_08B1D148;
    case 332u: goto L_08B1D150;
    case 333u: goto L_08B1D158;
    case 334u: goto L_08B1D168;
    case 335u: goto L_08B1D170;
    case 336u: goto L_08B1D178;
    case 337u: goto L_08B1D180;
    case 338u: goto L_08B1D188;
    case 339u: goto L_08B1D194;
    case 340u: goto L_08B1D19C;
    case 341u: goto L_08B1D1AC;
    case 342u: goto L_08B1D1B4;
    case 343u: goto L_08B1D1B8;
    case 344u: goto L_08B1D1C0;
    case 345u: goto L_08B1D1D8;
    case 346u: goto L_08B1D1E0;
    case 347u: goto L_08B1D1FC;
    case 348u: goto L_08B1D204;
    case 349u: goto L_08B1D220;
    case 350u: goto L_08B1D228;
    case 351u: goto L_08B1D244;
    case 352u: goto L_08B1D24C;
    case 353u: goto L_08B1D264;
    case 354u: goto L_08B1D26C;
    case 355u: goto L_08B1D284;
    case 356u: goto L_08B1D28C;
    case 357u: goto L_08B1D29C;
    case 358u: goto L_08B1D2A8;
    case 359u: goto L_08B1D2B0;
    case 360u: goto L_08B1D2BC;
    case 361u: goto L_08B1D2C4;
    case 362u: goto L_08B1D2CC;
    case 363u: goto L_08B1D2D8;
    case 364u: goto L_08B1D2E0;
    case 365u: goto L_08B1D2E8;
    case 366u: goto L_08B1D2F0;
    case 367u: goto L_08B1D300;
    case 368u: goto L_08B1D308;
    case 369u: goto L_08B1D314;
    case 370u: goto L_08B1D31C;
    case 371u: goto L_08B1D324;
    case 372u: goto L_08B1D334;
    case 373u: goto L_08B1D33C;
    case 374u: goto L_08B1D344;
    case 375u: goto L_08B1D360;
    case 376u: goto L_08B1D368;
    case 377u: goto L_08B1D370;
    case 378u: goto L_08B1D378;
    case 379u: goto L_08B1D384;
    case 380u: goto L_08B1D38C;
    case 381u: goto L_08B1D39C;
    case 382u: goto L_08B1D3A8;
    case 383u: goto L_08B1D3B0;
    case 384u: goto L_08B1D3CC;
    case 385u: goto L_08B1D3D4;
    case 386u: goto L_08B1D3E0;
    case 387u: goto L_08B1D3E8;
    case 388u: goto L_08B1D3F0;
    case 389u: goto L_08B1D3FC;
    case 390u: goto L_08B1D404;
    case 391u: goto L_08B1D40C;
    case 392u: goto L_08B1D414;
    case 393u: goto L_08B1D428;
    case 394u: goto L_08B1D43C;
    case 395u: goto L_08B1D450;
    case 396u: goto L_08B1D464;
    case 397u: goto L_08B1D478;
    case 398u: goto L_08B1D480;
    case 399u: goto L_08B1D48C;
    case 400u: goto L_08B1D4A0;
    case 401u: goto L_08B1D4B4;
    case 402u: goto L_08B1D4C8;
    case 403u: goto L_08B1D4DC;
    case 404u: goto L_08B1D4F0;
    case 405u: goto L_08B1D504;
    case 406u: goto L_08B1D518;
    case 407u: goto L_08B1D52C;
    case 408u: goto L_08B1D540;
    case 409u: goto L_08B1D54C;
    case 410u: goto L_08B1D5EC;
    case 411u: goto L_08B1D5F4;
    case 412u: goto L_08B1D5F8;
    case 413u: goto L_08B1D600;
    case 414u: goto L_08B1D60C;
    case 415u: goto L_08B1D618;
    case 416u: goto L_08B1D630;
    case 417u: goto L_08B1D638;
    case 418u: goto L_08B1D640;
    case 419u: goto L_08B1D6B0;
    case 420u: goto L_08B1D6B4;
    case 421u: goto L_08B1D6BC;
    case 422u: goto L_08B1D6C0;
    case 423u: goto L_08B1D6C4;
    case 424u: goto L_08B1D6C8;
    case 425u: goto L_08B1D6D0;
    case 426u: goto L_08B1D6DC;
    case 427u: goto L_08B1D6F0;
    case 428u: goto L_08B1D70C;
    case 429u: goto L_08B1D714;
    case 430u: goto L_08B1D718;
    case 431u: goto L_08B1D71C;
    case 432u: goto L_08B1D724;
    case 433u: goto L_08B1D72C;
    case 434u: goto L_08B1D734;
    case 435u: goto L_08B1D73C;
    case 436u: goto L_08B1D744;
    case 437u: goto L_08B1D74C;
    case 438u: goto L_08B1D754;
    case 439u: goto L_08B1D75C;
    case 440u: goto L_08B1D764;
    case 441u: goto L_08B1D76C;
    case 442u: goto L_08B1D774;
    case 443u: goto L_08B1D77C;
    case 444u: goto L_08B1D784;
    case 445u: goto L_08B1D78C;
    case 446u: goto L_08B1D794;
    case 447u: goto L_08B1D798;
    case 448u: goto L_08B1D7A0;
    case 449u: goto L_08B1D7A8;
    case 450u: goto L_08B1D7B0;
    case 451u: goto L_08B1D7B8;
    case 452u: goto L_08B1D7C0;
    case 453u: goto L_08B1D7C8;
    case 454u: goto L_08B1D7D0;
    case 455u: goto L_08B1D7D8;
    case 456u: goto L_08B1D7E0;
    case 457u: goto L_08B1D7E8;
    case 458u: goto L_08B1D7F0;
    case 459u: goto L_08B1D7F8;
    case 460u: goto L_08B1D800;
    case 461u: goto L_08B1D808;
    case 462u: goto L_08B1D810;
    case 463u: goto L_08B1D824;
    case 464u: goto L_08B1D82C;
    case 465u: goto L_08B1D834;
    case 466u: goto L_08B1D868;
    case 467u: goto L_08B1D884;
    case 468u: goto L_08B1D8B4;
    case 469u: goto L_08B1D8F0;
    case 470u: goto L_08B1D900;
    case 471u: goto L_08B1D918;
    case 472u: goto L_08B1D920;
    case 473u: goto L_08B1D92C;
    case 474u: goto L_08B1D93C;
    case 475u: goto L_08B1D944;
    case 476u: goto L_08B1D94C;
    case 477u: goto L_08B1D954;
    case 478u: goto L_08B1D95C;
    case 479u: goto L_08B1D968;
    case 480u: goto L_08B1D970;
    case 481u: goto L_08B1D980;
    case 482u: goto L_08B1D988;
    case 483u: goto L_08B1D990;
    case 484u: goto L_08B1D99C;
    case 485u: goto L_08B1D9A8;
    case 486u: goto L_08B1D9B0;
    case 487u: goto L_08B1D9E4;
    case 488u: goto L_08B1D9EC;
    case 489u: goto L_08B1D9FC;
    case 490u: goto L_08B1DA20;
    case 491u: goto L_08B1DA3C;
    case 492u: goto L_08B1DA54;
    case 493u: goto L_08B1DA84;
    case 494u: goto L_08B1DA9C;
    case 495u: goto L_08B1DACC;
    case 496u: goto L_08B1DAD8;
    case 497u: goto L_08B1DAFC;
    case 498u: goto L_08B1DB28;
    case 499u: goto L_08B1DB48;
    case 500u: goto L_08B1DB70;
    case 501u: goto L_08B1DB84;
    case 502u: goto L_08B1DBA0;
    case 503u: goto L_08B1DBBC;
    case 504u: goto L_08B1DBD8;
    case 505u: goto L_08B1DC24;
    case 506u: goto L_08B1DC30;
    case 507u: goto L_08B1DC5C;
    case 508u: goto L_08B1DC74;
    case 509u: goto L_08B1DC78;
    case 510u: goto L_08B1DC84;
    case 511u: goto L_08B1DCBC;
    case 512u: goto L_08B1DCC8;
    case 513u: goto L_08B1DCE0;
    case 514u: goto L_08B1DCF0;
    case 515u: goto L_08B1DD20;
    case 516u: goto L_08B1DD6C;
    case 517u: goto L_08B1DD74;
    case 518u: goto L_08B1DD98;
    case 519u: goto L_08B1DDB4;
    case 520u: goto L_08B1DDD4;
    case 521u: goto L_08B1DDE8;
    case 522u: goto L_08B1DE04;
    case 523u: goto L_08B1DE1C;
    case 524u: goto L_08B1DE34;
    case 525u: goto L_08B1DE74;
    case 526u: goto L_08B1DE7C;
    case 527u: goto L_08B1DE8C;
    case 528u: goto L_08B1DE94;
    case 529u: goto L_08B1DEA0;
    case 530u: goto L_08B1DEAC;
    case 531u: goto L_08B1DEC0;
    case 532u: goto L_08B1DECC;
    case 533u: goto L_08B1DED4;
    case 534u: goto L_08B1DEDC;
    case 535u: goto L_08B1DEEC;
    case 536u: goto L_08B1DEFC;
    case 537u: goto L_08B1DF04;
    case 538u: goto L_08B1DF14;
    case 539u: goto L_08B1DF20;
    case 540u: goto L_08B1DF38;
    case 541u: goto L_08B1DF50;
    case 542u: goto L_08B1DF68;
    case 543u: goto L_08B1DF88;
    case 544u: goto L_08B1DFC8;
    case 545u: goto L_08B1DFD8;
    case 546u: goto L_08B1E004;
    case 547u: goto L_08B1E008;
    case 548u: goto L_08B1E014;
    case 549u: goto L_08B1E018;
    case 550u: goto L_08B1E028;
    case 551u: goto L_08B1E034;
    case 552u: goto L_08B1E040;
    case 553u: goto L_08B1E044;
    case 554u: goto L_08B1E05C;
    case 555u: goto L_08B1E06C;
    case 556u: goto L_08B1E084;
    case 557u: goto L_08B1E0A0;
    case 558u: goto L_08B1E0A8;
    case 559u: goto L_08B1E0D4;
    case 560u: goto L_08B1E0DC;
    case 561u: goto L_08B1E0F8;
    case 562u: goto L_08B1E10C;
    case 563u: goto L_08B1E124;
    case 564u: goto L_08B1E134;
    case 565u: goto L_08B1E154;
    case 566u: goto L_08B1E160;
    case 567u: goto L_08B1E16C;
    case 568u: goto L_08B1E17C;
    case 569u: goto L_08B1E188;
    case 570u: goto L_08B1E1A0;
    case 571u: goto L_08B1E214;
    case 572u: goto L_08B1E374;
    case 573u: goto L_08B1E394;
    case 574u: goto L_08B1E418;
    case 575u: goto L_08B1E4E0;
    case 576u: goto L_08B1E4EC;
    case 577u: goto L_08B1E504;
    case 578u: goto L_08B1E50C;
    case 579u: goto L_08B1E538;
    case 580u: goto L_08B1E554;
    case 581u: goto L_08B1E55C;
    case 582u: goto L_08B1E598;
    case 583u: goto L_08B1E5B4;
    case 584u: goto L_08B1E5BC;
    case 585u: goto L_08B1E5D8;
    case 586u: goto L_08B1E604;
    case 587u: goto L_08B1E644;
    case 588u: goto L_08B1E65C;
    case 589u: goto L_08B1E67C;
    case 590u: goto L_08B1E698;
    case 591u: goto L_08B1E6A8;
    case 592u: goto L_08B1E6CC;
    case 593u: goto L_08B1E6FC;
    case 594u: goto L_08B1E734;
    case 595u: goto L_08B1E738;
    case 596u: goto L_08B1E764;
    case 597u: goto L_08B1E76C;
    case 598u: goto L_08B1E770;
    case 599u: goto L_08B1E774;
    case 600u: goto L_08B1E77C;
    case 601u: goto L_08B1E790;
    case 602u: goto L_08B1E798;
    case 603u: goto L_08B1E79C;
    case 604u: goto L_08B1E7B8;
    case 605u: goto L_08B1E7C0;
    case 606u: goto L_08B1E7C8;
    case 607u: goto L_08B1E7D0;
    case 608u: goto L_08B1E7E0;
    case 609u: goto L_08B1E820;
    case 610u: goto L_08B1E828;
    case 611u: goto L_08B1E830;
    case 612u: goto L_08B1E860;
    case 613u: goto L_08B1E880;
    case 614u: goto L_08B1E89C;
    case 615u: goto L_08B1E8A8;
    case 616u: goto L_08B1E8B0;
    case 617u: goto L_08B1E930;
    case 618u: goto L_08B1E938;
    case 619u: goto L_08B1E99C;
    case 620u: goto L_08B1E9A4;
    case 621u: goto L_08B1E9F8;
    case 622u: goto L_08B1EA00;
    case 623u: goto L_08B1EA08;
    case 624u: goto L_08B1EA10;
    case 625u: goto L_08B1EA18;
    case 626u: goto L_08B1EA20;
    case 627u: goto L_08B1EA28;
    case 628u: goto L_08B1EA40;
    case 629u: goto L_08B1EA6C;
    case 630u: goto L_08B1EAB8;
    case 631u: goto L_08B1EB44;
    case 632u: goto L_08B1EBA0;
    case 633u: goto L_08B1EBA8;
    case 634u: goto L_08B1EBB8;
    case 635u: goto L_08B1EBD8;
    case 636u: goto L_08B1EBF0;
    case 637u: goto L_08B1EBF8;
    case 638u: goto L_08B1EC04;
    case 639u: goto L_08B1EC94;
    case 640u: goto L_08B1ECB4;
    case 641u: goto L_08B1ECE0;
    case 642u: goto L_08B1EDE4;
    case 643u: goto L_08B1EDFC;
    case 644u: goto L_08B1EFB4;
    case 645u: goto L_08B1EFE0;
    case 646u: goto L_08B1F060;
    case 647u: goto L_08B1F0B0;
    case 648u: goto L_08B1F0B4;
    case 649u: goto L_08B1F0D4;
    case 650u: goto L_08B1F110;
    case 651u: goto L_08B1F118;
    case 652u: goto L_08B1F120;
    case 653u: goto L_08B1F140;
    case 654u: goto L_08B1F144;
    case 655u: goto L_08B1F14C;
    case 656u: goto L_08B1F174;
    case 657u: goto L_08B1F184;
    case 658u: goto L_08B1F270;
    case 659u: goto L_08B1F28C;
    case 660u: goto L_08B1F2C8;
    case 661u: goto L_08B1F2CC;
    case 662u: goto L_08B1F320;
    case 663u: goto L_08B1F334;
    case 664u: goto L_08B1F400;
    case 665u: goto L_08B1F420;
    case 666u: goto L_08B1F434;
    case 667u: goto L_08B1F460;
    case 668u: goto L_08B1F480;
    case 669u: goto L_08B1F490;
    case 670u: goto L_08B1F498;
    case 671u: goto L_08B1F4AC;
    case 672u: goto L_08B1F4E8;
    case 673u: goto L_08B1F4EC;
    case 674u: goto L_08B1F524;
    case 675u: goto L_08B1F55C;
    case 676u: goto L_08B1F560;
    case 677u: goto L_08B1F568;
    case 678u: goto L_08B1F574;
    case 679u: goto L_08B1F578;
    case 680u: goto L_08B1F57C;
    case 681u: goto L_08B1F580;
    case 682u: goto L_08B1F584;
    case 683u: goto L_08B1F58C;
    case 684u: goto L_08B1F5A8;
    case 685u: goto L_08B1F5B8;
    case 686u: goto L_08B1F5C0;
    case 687u: goto L_08B1F5C4;
    case 688u: goto L_08B1F5CC;
    case 689u: goto L_08B1F5D0;
    case 690u: goto L_08B1F5D4;
    case 691u: goto L_08B1F5DC;
    case 692u: goto L_08B1F5EC;
    case 693u: goto L_08B1F5F4;
    case 694u: goto L_08B1F620;
    case 695u: goto L_08B1F624;
    case 696u: goto L_08B1F62C;
    case 697u: goto L_08B1F634;
    case 698u: goto L_08B1F63C;
    case 699u: goto L_08B1F660;
    case 700u: goto L_08B1F67C;
    case 701u: goto L_08B1F688;
    case 702u: goto L_08B1F6A0;
    case 703u: goto L_08B1F6C4;
    case 704u: goto L_08B1F6E4;
    case 705u: goto L_08B1F6E8;
    case 706u: goto L_08B1F6F8;
    case 707u: goto L_08B1F700;
    case 708u: goto L_08B1F734;
    case 709u: goto L_08B1F778;
    case 710u: goto L_08B1F838;
    case 711u: goto L_08B1F844;
    case 712u: goto L_08B1F84C;
    case 713u: goto L_08B1F858;
    case 714u: goto L_08B1F864;
    case 715u: goto L_08B1F86C;
    case 716u: goto L_08B1F870;
    case 717u: goto L_08B1F878;
    case 718u: goto L_08B1F888;
    case 719u: goto L_08B1F894;
    case 720u: goto L_08B1F8A0;
    case 721u: goto L_08B1F8AC;
    case 722u: goto L_08B1F8B8;
    case 723u: goto L_08B1F8C4;
    case 724u: goto L_08B1F8D0;
    case 725u: goto L_08B1F8D8;
    case 726u: goto L_08B1F8E4;
    case 727u: goto L_08B1F8F0;
    case 728u: goto L_08B1F8FC;
    case 729u: goto L_08B1F90C;
    case 730u: goto L_08B1F914;
    case 731u: goto L_08B1F920;
    case 732u: goto L_08B1F928;
    case 733u: goto L_08B1F934;
    case 734u: goto L_08B1F938;
    case 735u: goto L_08B1F944;
    case 736u: goto L_08B1F954;
    case 737u: goto L_08B1F95C;
    case 738u: goto L_08B1F960;
    case 739u: goto L_08B1F96C;
    case 740u: goto L_08B1F974;
    case 741u: goto L_08B1F984;
    case 742u: goto L_08B1F98C;
    case 743u: goto L_08B1F998;
    case 744u: goto L_08B1F9A0;
    case 745u: goto L_08B1F9B0;
    case 746u: goto L_08B1F9B4;
    case 747u: goto L_08B1F9BC;
    case 748u: goto L_08B1F9C8;
    case 749u: goto L_08B1F9D0;
    case 750u: goto L_08B1F9D8;
    case 751u: goto L_08B1F9DC;
    case 752u: goto L_08B1F9E4;
    case 753u: goto L_08B1F9F0;
    case 754u: goto L_08B1FA00;
    case 755u: goto L_08B1FA14;
    case 756u: goto L_08B1FA20;
    case 757u: goto L_08B1FA30;
    case 758u: goto L_08B1FA38;
    case 759u: goto L_08B1FA44;
    case 760u: goto L_08B1FA50;
    case 761u: goto L_08B1FA58;
    case 762u: goto L_08B1FA5C;
    case 763u: goto L_08B1FA6C;
    case 764u: goto L_08B1FA80;
    case 765u: goto L_08B1FA88;
    case 766u: goto L_08B1FA90;
    case 767u: goto L_08B1FA98;
    case 768u: goto L_08B1FAA8;
    case 769u: goto L_08B1FAC0;
    case 770u: goto L_08B1FAD0;
    case 771u: goto L_08B1FAE4;
    case 772u: goto L_08B1FAF8;
    case 773u: goto L_08B1FB08;
    case 774u: goto L_08B1FB18;
    case 775u: goto L_08B1FB1C;
    case 776u: goto L_08B1FB30;
    case 777u: goto L_08B1FB40;
    case 778u: goto L_08B1FB4C;
    case 779u: goto L_08B1FB50;
    case 780u: goto L_08B1FB58;
    case 781u: goto L_08B1FB60;
    case 782u: goto L_08B1FB6C;
    case 783u: goto L_08B1FB74;
    case 784u: goto L_08B1FB80;
    case 785u: goto L_08B1FB88;
    case 786u: goto L_08B1FB8C;
    case 787u: goto L_08B1FB94;
    case 788u: goto L_08B1FBA0;
    case 789u: goto L_08B1FBA8;
    case 790u: goto L_08B1FBBC;
    case 791u: goto L_08B1FBD8;
    case 792u: goto L_08B1FBF0;
    case 793u: goto L_08B1FBF8;
    case 794u: goto L_08B1FC08;
    case 795u: goto L_08B1FC18;
    case 796u: goto L_08B1FC20;
    case 797u: goto L_08B1FC24;
    case 798u: goto L_08B1FC30;
    case 799u: goto L_08B1FC38;
    case 800u: goto L_08B1FC3C;
    case 801u: goto L_08B1FC58;
    case 802u: goto L_08B1FC60;
    case 803u: goto L_08B1FC68;
    case 804u: goto L_08B1FC74;
    case 805u: goto L_08B1FC80;
    case 806u: goto L_08B1FC88;
    case 807u: goto L_08B1FC90;
    case 808u: goto L_08B1FC94;
    case 809u: goto L_08B1FCA4;
    case 810u: goto L_08B1FCAC;
    case 811u: goto L_08B1FCB8;
    case 812u: goto L_08B1FCCC;
    case 813u: goto L_08B1FCD0;
    case 814u: goto L_08B1FCDC;
    case 815u: goto L_08B1FCE4;
    case 816u: goto L_08B1FCF0;
    case 817u: goto L_08B1FD04;
    case 818u: goto L_08B1FD0C;
    case 819u: goto L_08B1FD14;
    case 820u: goto L_08B1FD2C;
    case 821u: goto L_08B1FD44;
    case 822u: goto L_08B1FD54;
    case 823u: goto L_08B1FD64;
    case 824u: goto L_08B1FD70;
    case 825u: goto L_08B1FD7C;
    case 826u: goto L_08B1FD88;
    case 827u: goto L_08B1FD90;
    case 828u: goto L_08B1FD9C;
    case 829u: goto L_08B1FDAC;
    case 830u: goto L_08B1FDC4;
    case 831u: goto L_08B1FDD0;
    case 832u: goto L_08B1FE10;
    case 833u: goto L_08B1FE14;
    case 834u: goto L_08B1FE34;
    case 835u: goto L_08B1FE50;
    case 836u: goto L_08B1FE78;
    case 837u: goto L_08B1FE98;
    case 838u: goto L_08B1FEB4;
    case 839u: goto L_08B1FED4;
    case 840u: goto L_08B1FEDC;
    case 841u: goto L_08B1FEE4;
    case 842u: goto L_08B1FEEC;
    case 843u: goto L_08B1FEF4;
    case 844u: goto L_08B1FEF8;
    case 845u: goto L_08B1FEFC;
    case 846u: goto L_08B1FF0C;
    case 847u: goto L_08B1FF14;
    case 848u: goto L_08B1FF1C;
    case 849u: goto L_08B1FF24;
    case 850u: goto L_08B1FF2C;
    case 851u: goto L_08B1FF34;
    case 852u: goto L_08B1FF38;
    case 853u: goto L_08B1FF3C;
    case 854u: goto L_08B1FF40;
    case 855u: goto L_08B1FF44;
    case 856u: goto L_08B1FF4C;
    case 857u: goto L_08B1FF54;
    case 858u: goto L_08B1FF90;
    case 859u: goto L_08B1FFB0;
    case 860u: goto L_08B1FFBC;
    case 861u: goto L_08B1FFC8;
    case 862u: goto L_08B1FFD4;
    case 863u: goto L_08B1FFDC;
    case 864u: goto L_08B1FFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B1C128:
    rt.unsupported(0x08B1C128u, 0x74636576u, "unknown not lowered yet"); return;
L_08B1C144:
    ctx.execute_vfpu_compare3(99u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B1C148u, 0x00007275u, "special? not lowered yet"); return;
L_08B1C14C:
    rt.unsupported(0x08B1C14Cu, 0x74736944u, "unknown not lowered yet"); return;
L_08B1C158:
    rt.unsupported(0x08B1C158u, 0x74736944u, "unknown not lowered yet"); return;
L_08B1C164:
    if (ctx.gpr[19] != ctx.gpr[4]) {
    ctx.execute_vfpu_compare3(101u, 99u, 116u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 189u, 0x08B3526Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1C16C;
L_08B1C16C:
    rt.unsupported(0x08B1C16Cu, 0x00007372u, "special? not lowered yet"); return;
L_08B1C178:
    rt.unsupported(0x08B1C178u, 0x746E4963u, "unknown not lowered yet"); return;
L_08B1C1B4:
    rt.unsupported(0x08B1C1B4u, 0x746E4963u, "unknown not lowered yet"); return;
L_08B1C1E0:
    rt.unsupported(0x08B1C1E0u, 0x000A2928u, "special? not lowered yet"); return;
L_08B1C1E8:
    if (ctx.gpr[25] == 0u) {
    rt.unsupported(0x08B1C1ECu, 0x70697263u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 271u, 0x08B2D30Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1C1F0;
L_08B1C1F0:
    rt.unsupported(0x08B1C1F0u, 0x45207374u, "cop1? not lowered yet"); return;
L_08B1C200:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[1] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    goto L_08B1C230;
L_08B1C230:
    rt.unsupported(0x08B1C230u, 0x20202020u, "unknown not lowered yet"); return;
L_08B1C23C:
    rt.unsupported(0x08B1C23Cu, 0x4D20474Eu, "unknown not lowered yet"); return;
L_08B1C248:
    rt.unsupported(0x08B1C248u, 0x41434F4Cu, "unknown not lowered yet"); return;
L_08B1C25C:
    rt.unsupported(0x08B1C25Cu, 0x20202020u, "unknown not lowered yet"); return;
L_08B1C274:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1C278u, 0x204E4F49u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 224u, 0x08B2CFB4u>(ctx, &aot_mem); return;
    }
    goto L_08B1C27C;
L_08B1C27C:
    rt.unsupported(0x08B1C27Cu, 0x4C494146u, "unknown not lowered yet"); return;
L_08B1C288:
    rt.unsupported(0x08B1C288u, 0x20202020u, "unknown not lowered yet"); return;
L_08B1C29C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1C2A0u, 0x204E4F49u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 226u, 0x08B2CFDCu>(ctx, &aot_mem); return;
    }
    goto L_08B1C2A4;
L_08B1C2A4:
    rt.unsupported(0x08B1C2A4u, 0x4C494146u, "unknown not lowered yet"); return;
L_08B1C2B0:
    ctx.execute_vfpu_vscl_ct<116u, 104u, 114u, 1u>();
    rt.unsupported(0x08B1C2B4u, 0x616D6461u, "vfpu0 not lowered yet"); return;
L_08B1C2BC:
    rt.unsupported(0x08B1C2BCu, 0x70757473u, "unknown not lowered yet"); return;
L_08B1C2CC:
    rt.unsupported(0x08B1C2CCu, 0x63736964u, "vfpu0 not lowered yet"); return;
L_08B1C2D8:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B1C2DCu, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1C2E0u, 0x4D2F5249u, "unknown not lowered yet"); return;
L_08B1C2F4:
    rt.unsupported(0x08B1C2F4u, 0x63736964u, "vfpu0 not lowered yet"); return;
L_08B1C300:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B1C304u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1C308u, 0x4D2F5249u, "unknown not lowered yet"); return;
L_08B1C31C:
    // nop
    goto L_08B1C320;
L_08B1C320:
    rt.unsupported(0x08B1C320u, 0x4745504Du, "cop1? not lowered yet"); return;
L_08B1C33C:
    rt.unsupported(0x08B1C33Cu, 0x4C494146u, "unknown not lowered yet"); return;
L_08B1C348:
    rt.unsupported(0x08B1C348u, 0x42617265u, "unknown not lowered yet"); return;
L_08B1C35C:
    if (ctx.gpr[18] == ctx.gpr[5]) {
    ctx.gpr[9] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 289u, 0x08B2D46Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1C364;
L_08B1C364:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    rt.unsupported(0x08B1C368u, 0x74276E64u, "unknown not lowered yet"); return;
L_08B1C388:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    rt.unsupported(0x08B1C38Cu, 0x74276E64u, "unknown not lowered yet"); return;
L_08B1C3A0:
    rt.unsupported(0x08B1C3A0u, 0x706D6F63u, "unknown not lowered yet"); return;
L_08B1C3AC:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    rt.unsupported(0x08B1C3B0u, 0x74276E64u, "unknown not lowered yet"); return;
L_08B1C3C4:
    ctx.execute_vfpu_vminmax(32u, 99u, 111u, 1u, false);
    ctx.execute_vfpu_vscl_ct<112u, 111u, 110u, 1u>();
    rt.unsupported(0x08B1C3CCu, 0x000A746Eu, "special? not lowered yet"); return;
L_08B1C3D0:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    rt.unsupported(0x08B1C3D4u, 0x74276E64u, "unknown not lowered yet"); return;
L_08B1C3F8:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    rt.unsupported(0x08B1C3FCu, 0x74276E64u, "unknown not lowered yet"); return;
L_08B1C420:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    rt.unsupported(0x08B1C424u, 0x74276E64u, "unknown not lowered yet"); return;
L_08B1C448:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    rt.unsupported(0x08B1C44Cu, 0x74276E64u, "unknown not lowered yet"); return;
L_08B1C464:
    ctx.execute_vfpu_vscl_ct<112u, 111u, 110u, 1u>();
    rt.unsupported(0x08B1C468u, 0x000A746Eu, "special? not lowered yet"); return;
L_08B1C46C:
    ctx.execute_vfpu_vscl_ct<100u, 101u, 108u, 1u>();
    rt.unsupported(0x08B1C470u, 0x20646574u, "unknown not lowered yet"); return;
L_08B1C488:
    rt.unsupported(0x08B1C488u, 0x43534944u, "unknown not lowered yet"); return;
L_08B1C494:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B1C498u, 0x44525355u, "unsupported CFC1 control register"); return;
    if (ctx.gpr[1] != ctx.gpr[15]) {
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[1])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 89u, 0x08B30DC4u>(ctx, &aot_mem); return;
    }
    goto L_08B1C4A4;
L_08B1C4A4:
    rt.unsupported(0x08B1C4A4u, 0x4B48432Eu, "cop2/vfpu not lowered yet"); return;
L_08B1C4AC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1C4B0u, 0x61206465u, "vfpu0 not lowered yet"); return;
L_08B1C4C8:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    ctx.execute_vfpu_compare3(114u, 32u, 108u, 1u, 6u);
    rt.unsupported(0x08B1C4D0u, 0x6E696461u, "vfpu3 not lowered yet"); return;
L_08B1C4DC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<99u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    // nop
    goto L_08B1C4E8;
L_08B1C4E8:
    rt.unsupported(0x08B1C4E8u, 0x616C7073u, "vfpu0 not lowered yet"); return;
L_08B1C4EC:
    rt.unsupported(0x08B1C4ECu, 0x00316873u, "special? not lowered yet"); return;
L_08B1C4F0:
    rt.unsupported(0x08B1C4F0u, 0x616C7073u, "vfpu0 not lowered yet"); return;
L_08B1C4F8:
    rt.unsupported(0x08B1C4F8u, 0x616C7073u, "vfpu0 not lowered yet"); return;
L_08B1C500:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1C504u, 0x00306373u, "special? not lowered yet"); return;
L_08B1C508:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B1C50Cu, 0x43532048u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 56u, 0x08B30658u>(ctx, &aot_mem); return;
    }
    goto L_08B1C510;
L_08B1C510:
    rt.unsupported(0x08B1C510u, 0x4E454552u, "unknown not lowered yet"); return;
L_08B1C524:
    rt.unsupported(0x08B1C524u, 0x44414F4Cu, "unsupported CFC1 control register"); return;
    jump_target = ctx.gpr[2];
    ctx.gpr[9] = (0x08B1C530u);
    rt.unsupported(0x08B1C52Cu, 0x4F545541u, "unknown not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B1C530u) goto L_08B1C530;
    return;
L_08B1C52C:
    rt.unsupported(0x08B1C52Cu, 0x4F545541u, "unknown not lowered yet"); return;
L_08B1C530:
    rt.unsupported(0x08B1C530u, 0x0000444Cu, "syscall not lowered yet"); return;
L_08B1C534:
    rt.unsupported(0x08B1C534u, 0x4146444Cu, "unknown not lowered yet"); return;
L_08B1C53C:
    rt.unsupported(0x08B1C53Cu, 0x4157444Cu, "unknown not lowered yet"); return;
L_08B1C540:
    jump_target = 0u;
    ctx.gpr[10] = (0x08B1C548u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B1C548u) goto L_08B1C548;
    return;
L_08B1C544:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    goto L_08B1C548;
L_08B1C548:
    rt.unsupported(0x08B1C548u, 0x49676E69u, "cop2/vfpu not lowered yet"); return;
L_08B1C570:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1C574u, 0x49676E69u, "cop2/vfpu not lowered yet"); return;
L_08B1C598:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1C59Cu, 0x49676E69u, "cop2/vfpu not lowered yet"); return;
L_08B1C5C0:
    rt.unsupported(0x08B1C5C0u, 0x20746F6Eu, "unknown not lowered yet"); return;
L_08B1C5E4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1C5E8u, 0x49676E69u, "cop2/vfpu not lowered yet"); return;
L_08B1C614:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1C618u, 0x49676E69u, "cop2/vfpu not lowered yet"); return;
L_08B1C638:
    rt.unsupported(0x08B1C638u, 0x434D454Du, "unknown not lowered yet"); return;
L_08B1C640:
    ctx.execute_vfpu_compare3(73u, 110u, 116u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<32u, 84u, 104u, 1u>();
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 50u, 0x08848484u>(ctx, &aot_mem); return;
L_08B1C654:
    rt.unsupported(0x08B1C654u, 0x72617473u, "unknown not lowered yet"); return;
L_08B1C668:
    rt.unsupported(0x08B1C668u, 0x41544144u, "unknown not lowered yet"); return;
L_08B1C678:
    ctx.execute_vfpu_vscl_ct<103u, 97u, 109u, 1u>();
    rt.unsupported(0x08B1C67Cu, 0x696E6920u, "unknown not lowered yet"); return;
L_08B1C68C:
    rt.unsupported(0x08B1C68Cu, 0x72617453u, "unknown not lowered yet"); return;
L_08B1C69C:
    rt.unsupported(0x08B1C69Cu, 0x616C7053u, "vfpu0 not lowered yet"); return;
L_08B1C6A8:
    rt.unsupported(0x08B1C6A8u, 0x000A3F70u, "special? not lowered yet"); return;
L_08B1C6E4:
    ctx.gpr[14] = (0u | ctx.gpr[10]);
    rt.unsupported(0x08B1C6E8u, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B1C6F0:
    rt.unsupported(0x08B1C6F0u, 0x4F525245u, "unknown not lowered yet"); return;
L_08B1C710:
    rt.unsupported(0x08B1C710u, 0x69797274u, "unknown not lowered yet"); return;
L_08B1C734:
    rt.unsupported(0x08B1C734u, 0x63736964u, "vfpu0 not lowered yet"); return;
L_08B1C73C:
    rt.unsupported(0x08B1C73Cu, 0x462E2E2Eu, "cop1? not lowered yet"); return;
L_08B1C74C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<46u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<46u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<46u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1C750u, 0x20656E6Fu, "unknown not lowered yet"); return;
L_08B1C758:
    rt.unsupported(0x08B1C758u, 0x76697264u, "unknown not lowered yet"); return;
L_08B1C768:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<9u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1C76Cu, 0x69206169u, "unknown not lowered yet"); return;
L_08B1C774:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<9u, 1u>(vfpu_d); }
    ctx.execute_vfpu_compare3(105u, 97u, 32u, 1u, 6u);
    rt.unsupported(0x08B1C77Cu, 0x000A7475u, "special? not lowered yet"); return;
L_08B1C780:
    rt.unsupported(0x08B1C780u, 0x61657209u, "vfpu0 not lowered yet"); return;
L_08B1C788:
    if (ctx.gpr[2] != ctx.gpr[15]) {
    rt.unsupported(0x08B1C78Cu, 0x61657220u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 816u, 0x08B2FFB0u>(ctx, &aot_mem); return;
    }
    goto L_08B1C790;
L_08B1C790:
    ctx.gpr[15] = (0u & ctx.gpr[10]);
    goto L_08B1C794;
L_08B1C794:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<9u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1C798u, 0x63206169u, "vfpu0 not lowered yet"); return;
L_08B1C7A0:
    rt.unsupported(0x08B1C7A0u, 0x61657209u, "vfpu0 not lowered yet"); return;
L_08B1C7AC:
    rt.unsupported(0x08B1C7ACu, 0x6964654Du, "unknown not lowered yet"); return;
L_08B1C7C0:
    rt.unsupported(0x08B1C7C0u, 0x6964654Du, "unknown not lowered yet"); return;
L_08B1C7D0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<116u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    if (0u == 0u) (void)(0u);
    goto L_08B1C7D8;
L_08B1C7D8:
    rt.unsupported(0x08B1C7D8u, 0x43534944u, "unknown not lowered yet"); return;
L_08B1C7E4:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    // nop
    goto L_08B1C7EC;
L_08B1C7EC:
    rt.unsupported(0x08B1C7ECu, 0x434D454Du, "unknown not lowered yet"); return;
L_08B1C7F4:
    rt.unsupported(0x08B1C7F4u, 0x434D454Du, "unknown not lowered yet"); return;
L_08B1C7FC:
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(29477));
    rt.unsupported(0x08B1C800u, 0x73252073u, "unknown not lowered yet"); return;
L_08B1C808:
    rt.unsupported(0x08B1C808u, 0x434D454Du, "unknown not lowered yet"); return;
L_08B1C810:
    rt.unsupported(0x08B1C810u, 0x434D454Du, "unknown not lowered yet"); return;
L_08B1C818:
    rt.unsupported(0x08B1C818u, 0x7373654Du, "unknown not lowered yet"); return;
L_08B1C834:
    rt.unsupported(0x08B1C834u, 0x494E415Cu, "cop2/vfpu not lowered yet"); return;
L_08B1C838:
    if (ctx.gpr[10] != ctx.gpr[3]) {
    rt.unsupported(0x08B1C83Cu, 0x492E5354u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 382u, 0x08B33970u>(ctx, &aot_mem); return;
    }
    goto L_08B1C840;
L_08B1C840:
    ctx.gpr[27] = (ctx.gpr[9] & 18253u);
    // nop
    goto L_08B1C848;
L_08B1C848:
    rt.unsupported(0x08B1C848u, 0x494E415Cu, "cop2/vfpu not lowered yet"); return;
L_08B1C854:
    ctx.gpr[27] = (ctx.gpr[9] & 21065u);
    // nop
    goto L_08B1C85C;
L_08B1C85C:
    rt.unsupported(0x08B1C85Cu, 0x494E415Cu, "cop2/vfpu not lowered yet"); return;
L_08B1C86C:
    rt.unsupported(0x08B1C86Cu, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1C874u, 0x4E4F5246u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 762u, 0x08B2F988u>(ctx, &aot_mem); return;
    }
    goto L_08B1C878;
L_08B1C878:
    ctx.gpr[14] = (ctx.gpr[10] & 17748u);
    rt.unsupported(0x08B1C87Cu, 0x4458542Eu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1C880u, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1C884:
    rt.unsupported(0x08B1C884u, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1C88Cu, 0x4E4F5246u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 763u, 0x08B2F9A0u>(ctx, &aot_mem); return;
    }
    goto L_08B1C890;
L_08B1C890:
    ctx.gpr[14] = (ctx.gpr[18] & 17748u);
    rt.unsupported(0x08B1C894u, 0x4458542Eu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1C898u, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1C89C:
    rt.unsupported(0x08B1C89Cu, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1C8A4u, 0x544E4F46u, "control flow in delay slot"); return;
L_08B1C8A8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.gpr[7] = (ctx.gpr[17] << (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 3u, 0x08B281F8u>(ctx, &aot_mem); return;
    }
    goto L_08B1C8B0;
L_08B1C8B0:
    rt.unsupported(0x08B1C8B0u, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(21832) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 765u, 0x08B2F9CCu>(ctx, &aot_mem); return;
    }
    goto L_08B1C8BC;
L_08B1C8BC:
    ctx.gpr[4] = (ctx.gpr[26] ^ 22612u);
    rt.unsupported(0x08B1C8C0u, 0x00000031u, "special? not lowered yet"); return;
L_08B1C8C4:
    rt.unsupported(0x08B1C8C4u, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1C8CCu, 0x54524150u, "control flow in delay slot"); return;
L_08B1C8D0:
    rt.unsupported(0x08B1C8D0u, 0x454C4349u, "cop1? not lowered yet"); return;
L_08B1C8DC:
    rt.unsupported(0x08B1C8DCu, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1C8E4u, 0x4353494Du, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 770u, 0x08B2F9F8u>(ctx, &aot_mem); return;
    }
    goto L_08B1C8E8;
L_08B1C8E8:
    rt.unsupported(0x08B1C8E8u, 0x4458542Eu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1C8ECu, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1C8F0:
    rt.unsupported(0x08B1C8F0u, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1C8F8u, 0x454E4547u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 772u, 0x08B2FA0Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1C8FC;
L_08B1C8FC:
    ctx.gpr[3] = (ctx.gpr[18] < static_cast<std::uint32_t>(18770) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[26] ^ 22612u);
    rt.unsupported(0x08B1C904u, 0x00000031u, "special? not lowered yet"); return;
L_08B1C908:
    rt.unsupported(0x08B1C908u, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    ctx.gpr[1] = (ctx.gpr[26] & 21575u);
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 773u, 0x08B2FA24u>(ctx, &aot_mem); return;
    }
    goto L_08B1C914;
L_08B1C914:
    if (ctx.gpr[18] == ctx.gpr[9]) {
    rt.unsupported(0x08B1C918u, 0x0000313Bu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 345u, 0x08B2D9D0u>(ctx, &aot_mem); return;
    }
    goto L_08B1C91C;
L_08B1C91C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    rt.unsupported(0x08B1C920u, 0x4D415C54u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 236u, 0x08B31A90u>(ctx, &aot_mem); return;
    }
    goto L_08B1C924;
L_08B1C924:
    rt.unsupported(0x08B1C924u, 0x43495245u, "unknown not lowered yet"); return;
L_08B1C934:
    rt.unsupported(0x08B1C938u, 0x52465C54u, "control flow in delay slot"); return;
L_08B1C93C:
    rt.unsupported(0x08B1C93Cu, 0x48434E45u, "cop2/vfpu not lowered yet"); return;
L_08B1C948:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    rt.unsupported(0x08B1C94Cu, 0x45475C54u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 238u, 0x08B31ABCu>(ctx, &aot_mem); return;
    }
    goto L_08B1C950;
L_08B1C950:
    rt.unsupported(0x08B1C950u, 0x4E414D52u, "unknown not lowered yet"); return;
L_08B1C95C:
    rt.unsupported(0x08B1C960u, 0x54495C54u, "control flow in delay slot"); return;
L_08B1C964:
    rt.unsupported(0x08B1C964u, 0x41494C41u, "unknown not lowered yet"); return;
L_08B1C970:
    rt.unsupported(0x08B1C974u, 0x50535C54u, "control flow in delay slot"); return;
L_08B1C978:
    rt.unsupported(0x08B1C97Cu, 0x58472E48u, "control flow in delay slot"); return;
L_08B1C980:
    rt.unsupported(0x08B1C980u, 0x00313B54u, "special? not lowered yet"); return;
L_08B1C984:
    rt.unsupported(0x08B1C984u, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1C98Cu, 0x4C4C4F43u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 776u, 0x08B2FAA0u>(ctx, &aot_mem); return;
    }
    goto L_08B1C990;
L_08B1C990:
    rt.unsupported(0x08B1C990u, 0x4E45475Cu, "unknown not lowered yet"); return;
L_08B1C9A0:
    rt.unsupported(0x08B1C9A0u, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1C9A8u, 0x4C4C4F43u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 779u, 0x08B2FABCu>(ctx, &aot_mem); return;
    }
    goto L_08B1C9AC;
L_08B1C9AC:
    rt.unsupported(0x08B1C9ACu, 0x4845565Cu, "cop2/vfpu not lowered yet"); return;
L_08B1C9BC:
    rt.unsupported(0x08B1C9BCu, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1C9C4u, 0x4C4C4F43u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 780u, 0x08B2FAD8u>(ctx, &aot_mem); return;
    }
    goto L_08B1C9C8;
L_08B1C9C8:
    rt.unsupported(0x08B1C9C8u, 0x4445505Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1C9CCu, 0x4F432E53u, "unknown not lowered yet"); return;
L_08B1C9D4:
    rt.unsupported(0x08B1C9D4u, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1C9DCu, 0x4C4C4F43u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 781u, 0x08B2FAF0u>(ctx, &aot_mem); return;
    }
    goto L_08B1C9E0;
L_08B1C9E0:
    rt.unsupported(0x08B1C9E0u, 0x4145575Cu, "unknown not lowered yet"); return;
L_08B1C9EC:
    rt.unsupported(0x08B1C9ECu, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1C9F0:
    rt.unsupported(0x08B1C9F0u, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1C9F8u, 0x454E4547u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 782u, 0x08B2FB0Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1C9FC;
L_08B1C9FC:
    rt.unsupported(0x08B1CA00u, 0x5F524941u, "control flow in delay slot"); return;
L_08B1CA04:
    ctx.gpr[15] = (ctx.gpr[18] < static_cast<std::uint32_t>(19542) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[26] ^ 17988u);
    rt.unsupported(0x08B1CA0Cu, 0x00000031u, "special? not lowered yet"); return;
L_08B1CA10:
    rt.unsupported(0x08B1CA10u, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1CA18u, 0x454E4547u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 783u, 0x08B2FB2Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1CA1C;
L_08B1CA1C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1CA20u, 0x45454857u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 699u, 0x08B2EF68u>(ctx, &aot_mem); return;
    }
    goto L_08B1CA24;
L_08B1CA24:
    rt.unsupported(0x08B1CA24u, 0x442E534Cu, "cop1? not lowered yet"); return;
L_08B1CA30:
    rt.unsupported(0x08B1CA30u, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1CA38u, 0x454E4547u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 784u, 0x08B2FB4Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1CA3C;
L_08B1CA3C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1CA40u, 0x4F525241u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 701u, 0x08B2EF88u>(ctx, &aot_mem); return;
    }
    goto L_08B1CA44;
L_08B1CA44:
    rt.unsupported(0x08B1CA44u, 0x46442E57u, "cop1? not lowered yet"); return;
L_08B1CA4C:
    rt.unsupported(0x08B1CA4Cu, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1CA54u, 0x454E4547u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 785u, 0x08B2FB68u>(ctx, &aot_mem); return;
    }
    goto L_08B1CA58;
L_08B1CA58:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1CA5Cu, 0x454E4F5Au, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 704u, 0x08B2EFA4u>(ctx, &aot_mem); return;
    }
    goto L_08B1CA60;
L_08B1CA60:
    rt.unsupported(0x08B1CA60u, 0x424C5943u, "unknown not lowered yet"); return;
L_08B1CA6C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CA70u, 0x41485C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 378u, 0x08B2DBE0u>(ctx, &aot_mem); return;
    }
    goto L_08B1CA74;
L_08B1CA74:
    rt.unsupported(0x08B1CA74u, 0x494C444Eu, "cop2/vfpu not lowered yet"); return;
L_08B1CA7C:
    ctx.gpr[27] = (ctx.gpr[9] & 18246u);
    // nop
    goto L_08B1CA84;
L_08B1CA84:
    rt.unsupported(0x08B1CA88u, 0x55535C41u, "control flow in delay slot"); return;
L_08B1CA8C:
    rt.unsupported(0x08B1CA8Cu, 0x43414652u, "unknown not lowered yet"); return;
L_08B1CA98:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CA9Cu, 0x45505C41u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 382u, 0x08B2DC0Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1CAA0;
L_08B1CAA0:
    rt.unsupported(0x08B1CAA0u, 0x41545344u, "unknown not lowered yet"); return;
L_08B1CAB0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CAB4u, 0x49545C41u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 384u, 0x08B2DC24u>(ctx, &aot_mem); return;
    }
    goto L_08B1CAB8;
L_08B1CAB8:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    rt.unsupported(0x08B1CABCu, 0x41442E43u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 503u, 0x08B2DFF0u>(ctx, &aot_mem); return;
    }
    goto L_08B1CAC0;
L_08B1CAC0:
    rt.unsupported(0x08B1CAC0u, 0x00313B54u, "special? not lowered yet"); return;
L_08B1CAC4:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CAC8u, 0x41505C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 386u, 0x08B2DC38u>(ctx, &aot_mem); return;
    }
    goto L_08B1CACC;
L_08B1CACC:
    rt.unsupported(0x08B1CACCu, 0x43495452u, "unknown not lowered yet"); return;
L_08B1CADC:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CAE0u, 0x45445C41u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 389u, 0x08B2DC50u>(ctx, &aot_mem); return;
    }
    goto L_08B1CAE4;
L_08B1CAE4:
    rt.unsupported(0x08B1CAE4u, 0x4C554146u, "unknown not lowered yet"); return;
L_08B1CAF0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CAF4u, 0x45445C41u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 392u, 0x08B2DC64u>(ctx, &aot_mem); return;
    }
    goto L_08B1CAF8;
L_08B1CAF8:
    rt.unsupported(0x08B1CAF8u, 0x4C554146u, "unknown not lowered yet"); return;
L_08B1CB04:
    rt.unsupported(0x08B1CB08u, 0x54475C41u, "control flow in delay slot"); return;
L_08B1CB0C:
    rt.unsupported(0x08B1CB0Cu, 0x43565F41u, "unknown not lowered yet"); return;
L_08B1CB18:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CB1Cu, 0x424F5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 398u, 0x08B2DC8Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1CB20;
L_08B1CB20:
    rt.unsupported(0x08B1CB24u, 0x5441442Eu, "control flow in delay slot"); return;
L_08B1CB28:
    rt.unsupported(0x08B1CB28u, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1CB2C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CB30u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 401u, 0x08B2DCA0u>(ctx, &aot_mem); return;
    }
    goto L_08B1CB34;
L_08B1CB34:
    rt.unsupported(0x08B1CB34u, 0x4F5A2E50u, "unknown not lowered yet"); return;
L_08B1CB3C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CB40u, 0x414E5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 403u, 0x08B2DCB0u>(ctx, &aot_mem); return;
    }
    goto L_08B1CB44;
L_08B1CB44:
    ctx.gpr[7] = (ctx.gpr[18] < static_cast<std::uint32_t>(18774) ? 1u : 0u);
    ctx.gpr[14] = (ctx.gpr[26] ^ 20314u);
    rt.unsupported(0x08B1CB4Cu, 0x00000031u, "special? not lowered yet"); return;
L_08B1CB50:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CB54u, 0x4E495C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 406u, 0x08B2DCC4u>(ctx, &aot_mem); return;
    }
    goto L_08B1CB58;
L_08B1CB58:
    if (static_cast<std::int32_t>(ctx.gpr[17]) <= 0) {
    ctx.gpr[27] = (ctx.gpr[9] & 20047u);
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 65u, 0x08B30874u>(ctx, &aot_mem); return;
    }
    goto L_08B1CB60;
L_08B1CB60:
    // nop
    goto L_08B1CB64;
L_08B1CB64:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CB68u, 0x41575C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 409u, 0x08B2DCD8u>(ctx, &aot_mem); return;
    }
    goto L_08B1CB6C;
L_08B1CB6C:
    if (ctx.gpr[2] == ctx.gpr[18]) {
    rt.unsupported(0x08B1CB70u, 0x442E4F52u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 512u, 0x08B2E0C0u>(ctx, &aot_mem); return;
    }
    goto L_08B1CB74;
L_08B1CB74:
    ctx.gpr[27] = (ctx.gpr[9] & 21569u);
    // nop
    goto L_08B1CB7C;
L_08B1CB7C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CB80u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 412u, 0x08B2DCF0u>(ctx, &aot_mem); return;
    }
    goto L_08B1CB84;
L_08B1CB84:
    if (ctx.gpr[25] == ctx.gpr[14]) {
    ctx.gpr[27] = (ctx.gpr[9] & 19779u);
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 39u, 0x08B304ACu>(ctx, &aot_mem); return;
    }
    goto L_08B1CB8C;
L_08B1CB8C:
    // nop
    goto L_08B1CB90;
L_08B1CB90:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CB94u, 0x41435C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 416u, 0x08B2DD04u>(ctx, &aot_mem); return;
    }
    goto L_08B1CB98;
L_08B1CB98:
    rt.unsupported(0x08B1CB98u, 0x4C4F4352u, "unknown not lowered yet"); return;
L_08B1CBA4:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CBA8u, 0x45505C41u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 419u, 0x08B2DD18u>(ctx, &aot_mem); return;
    }
    goto L_08B1CBAC;
L_08B1CBAC:
    rt.unsupported(0x08B1CBACu, 0x41442E44u, "unknown not lowered yet"); return;
L_08B1CBB4:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CBB8u, 0x49465C41u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 421u, 0x08B2DD28u>(ctx, &aot_mem); return;
    }
    goto L_08B1CBBC;
L_08B1CBBC:
    rt.unsupported(0x08B1CBBCu, 0x49465453u, "cop2/vfpu not lowered yet"); return;
L_08B1CBCC:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CBD0u, 0x45575C41u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 424u, 0x08B2DD40u>(ctx, &aot_mem); return;
    }
    goto L_08B1CBD4;
L_08B1CBD4:
    rt.unsupported(0x08B1CBD4u, 0x4E4F5041u, "unknown not lowered yet"); return;
L_08B1CBE0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CBE4u, 0x45505C41u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 427u, 0x08B2DD54u>(ctx, &aot_mem); return;
    }
    goto L_08B1CBE8;
L_08B1CBE8:
    rt.unsupported(0x08B1CBECu, 0x5441442Eu, "control flow in delay slot"); return;
L_08B1CBF0:
    rt.unsupported(0x08B1CBF0u, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1CBF4:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CBF8u, 0x41505C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 430u, 0x08B2DD68u>(ctx, &aot_mem); return;
    }
    goto L_08B1CBFC;
L_08B1CBFC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1CC00u, 0x47494C46u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 665u, 0x08B2ED50u>(ctx, &aot_mem); return;
    }
    goto L_08B1CC04;
L_08B1CC04:
    rt.unsupported(0x08B1CC04u, 0x442E5448u, "cop1? not lowered yet"); return;
L_08B1CC10:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CC14u, 0x41505C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 434u, 0x08B2DD84u>(ctx, &aot_mem); return;
    }
    goto L_08B1CC18;
L_08B1CC18:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1CC1Cu, 0x47494C46u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 667u, 0x08B2ED6Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1CC20;
L_08B1CC20:
    ctx.gpr[18] = (ctx.gpr[17] < static_cast<std::uint32_t>(21576) ? 1u : 0u);
    ctx.gpr[20] = (ctx.gpr[26] ^ 16708u);
    rt.unsupported(0x08B1CC28u, 0x00000031u, "special? not lowered yet"); return;
L_08B1CC2C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CC30u, 0x41505C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 438u, 0x08B2DDA0u>(ctx, &aot_mem); return;
    }
    goto L_08B1CC34;
L_08B1CC34:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1CC38u, 0x47494C46u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 669u, 0x08B2ED88u>(ctx, &aot_mem); return;
    }
    goto L_08B1CC3C;
L_08B1CC3C:
    ctx.gpr[19] = (ctx.gpr[17] < static_cast<std::uint32_t>(21576) ? 1u : 0u);
    ctx.gpr[20] = (ctx.gpr[26] ^ 16708u);
    rt.unsupported(0x08B1CC44u, 0x00000031u, "special? not lowered yet"); return;
L_08B1CC48:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CC4Cu, 0x41505C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 440u, 0x08B2DDBCu>(ctx, &aot_mem); return;
    }
    goto L_08B1CC50;
L_08B1CC50:
    rt.unsupported(0x08B1CC54u, 0x54415053u, "control flow in delay slot"); return;
L_08B1CC54:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CC58u, 0x442E3048u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 88u, 0x08B30DA4u>(ctx, &aot_mem); return;
    }
    goto L_08B1CC5C;
L_08B1CC58:
    rt.unsupported(0x08B1CC58u, 0x442E3048u, "cop1? not lowered yet"); return;
L_08B1CC5C:
    ctx.gpr[27] = (ctx.gpr[9] & 21569u);
    // nop
    goto L_08B1CC64;
L_08B1CC64:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CC68u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 443u, 0x08B2DDD8u>(ctx, &aot_mem); return;
    }
    goto L_08B1CC6C;
L_08B1CC6C:
    rt.unsupported(0x08B1CC6Cu, 0x4C5C5350u, "unknown not lowered yet"); return;
L_08B1CC7C:
    rt.unsupported(0x08B1CC7Cu, 0x4148454Cu, "unknown not lowered yet"); return;
L_08B1CC88:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CC8Cu, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 446u, 0x08B2DDFCu>(ctx, &aot_mem); return;
    }
    goto L_08B1CC90;
L_08B1CC90:
    rt.unsupported(0x08B1CC90u, 0x445C5350u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1CC98u, 0x5C4E574Fu, "control flow in delay slot"); return;
L_08B1CC98:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1CC9Cu, 0x4E574F44u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 309u, 0x08B329D8u>(ctx, &aot_mem); return;
    }
    goto L_08B1CCA0;
L_08B1CC9C:
    rt.unsupported(0x08B1CC9Cu, 0x4E574F44u, "unknown not lowered yet"); return;
L_08B1CCA0:
    rt.unsupported(0x08B1CCA0u, 0x4E574F54u, "unknown not lowered yet"); return;
L_08B1CCAC:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CCB0u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 451u, 0x08B2DE20u>(ctx, &aot_mem); return;
    }
    goto L_08B1CCB4;
L_08B1CCB4:
    rt.unsupported(0x08B1CCB4u, 0x445C5350u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1CCBCu, 0x5C53574Fu, "control flow in delay slot"); return;
L_08B1CCC0:
    rt.unsupported(0x08B1CCC0u, 0x4E574F44u, "unknown not lowered yet"); return;
L_08B1CCCC:
    rt.unsupported(0x08B1CCCCu, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1CCD0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CCD4u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 456u, 0x08B2DE44u>(ctx, &aot_mem); return;
    }
    goto L_08B1CCD8;
L_08B1CCD8:
    rt.unsupported(0x08B1CCD8u, 0x445C5350u, "unsupported CFC1 control register"); return;
    if (ctx.gpr[26] == ctx.gpr[11]) {
    rt.unsupported(0x08B1CCE0u, 0x434F445Cu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 347u, 0x08B2DA1Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1CCE4;
L_08B1CCE4:
    rt.unsupported(0x08B1CCE4u, 0x492E534Bu, "cop2/vfpu not lowered yet"); return;
L_08B1CCF0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CCF4u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 461u, 0x08B2DE64u>(ctx, &aot_mem); return;
    }
    goto L_08B1CCF8;
L_08B1CCF8:
    if (ctx.gpr[26] != ctx.gpr[28]) {
    rt.unsupported(0x08B1CCFCu, 0x49485341u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 232u, 0x08B31A3Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1CD00;
L_08B1CD00:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1CD04u, 0x48534157u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 264u, 0x08B31E3Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1CD08;
L_08B1CD08:
    rt.unsupported(0x08B1CD08u, 0x4E544E49u, "unknown not lowered yet"); return;
L_08B1CD14:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CD18u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 466u, 0x08B2DE88u>(ctx, &aot_mem); return;
    }
    goto L_08B1CD1C;
L_08B1CD1C:
    if (ctx.gpr[26] != ctx.gpr[28]) {
    rt.unsupported(0x08B1CD20u, 0x49485341u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 235u, 0x08B31A60u>(ctx, &aot_mem); return;
    }
    goto L_08B1CD24;
L_08B1CD24:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1CD28u, 0x48534157u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 266u, 0x08B31E60u>(ctx, &aot_mem); return;
    }
    goto L_08B1CD2C;
L_08B1CD2C:
    if (ctx.gpr[26] == ctx.gpr[20]) {
    rt.unsupported(0x08B1CD30u, 0x4544492Eu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 55u, 0x08B30654u>(ctx, &aot_mem); return;
    }
    goto L_08B1CD34;
L_08B1CD34:
    rt.unsupported(0x08B1CD34u, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1CD38:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CD3Cu, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 472u, 0x08B2DEACu>(ctx, &aot_mem); return;
    }
    goto L_08B1CD40;
L_08B1CD40:
    rt.unsupported(0x08B1CD40u, 0x4F5C5350u, "unknown not lowered yet"); return;
L_08B1CD50:
    if (ctx.gpr[18] != ctx.gpr[18]) {
    rt.unsupported(0x08B1CD54u, 0x4544492Eu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 467u, 0x08B2DE8Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1CD58;
L_08B1CD58:
    rt.unsupported(0x08B1CD58u, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1CD5C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CD60u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 477u, 0x08B2DED0u>(ctx, &aot_mem); return;
    }
    goto L_08B1CD64;
L_08B1CD64:
    rt.unsupported(0x08B1CD64u, 0x4F5C5350u, "unknown not lowered yet"); return;
L_08B1CD80:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CD84u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 482u, 0x08B2DEF4u>(ctx, &aot_mem); return;
    }
    goto L_08B1CD88;
L_08B1CD88:
    rt.unsupported(0x08B1CD88u, 0x475C5350u, "cop1? not lowered yet"); return;
L_08B1CD94:
    rt.unsupported(0x08B1CD94u, 0x4544492Eu, "cop1? not lowered yet"); return;
L_08B1CD9C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CDA0u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 487u, 0x08B2DF10u>(ctx, &aot_mem); return;
    }
    goto L_08B1CDA4;
L_08B1CDA4:
    rt.unsupported(0x08B1CDA4u, 0x425C5350u, "unknown not lowered yet"); return;
L_08B1CDB4:
    rt.unsupported(0x08B1CDB4u, 0x4544492Eu, "cop1? not lowered yet"); return;
L_08B1CDBC:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CDC0u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 491u, 0x08B2DF30u>(ctx, &aot_mem); return;
    }
    goto L_08B1CDC4;
L_08B1CDC4:
    if (ctx.gpr[26] == ctx.gpr[28]) {
    rt.unsupported(0x08B1CDC8u, 0x49524154u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 242u, 0x08B31B08u>(ctx, &aot_mem); return;
    }
    goto L_08B1CDCC;
L_08B1CDCC:
    if (ctx.gpr[26] == ctx.gpr[28]) {
    rt.unsupported(0x08B1CDD0u, 0x49524154u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 808u, 0x08B2FF1Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1CDD4;
L_08B1CDD4:
    rt.unsupported(0x08B1CDD4u, 0x492E4C53u, "cop2/vfpu not lowered yet"); return;
L_08B1CDE0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CDE4u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 494u, 0x08B2DF54u>(ctx, &aot_mem); return;
    }
    goto L_08B1CDE8;
L_08B1CDE8:
    rt.unsupported(0x08B1CDE8u, 0x4E5C5350u, "unknown not lowered yet"); return;
L_08B1CDF8:
    if (ctx.gpr[2] != ctx.gpr[2]) {
    rt.unsupported(0x08B1CDFCu, 0x4544492Eu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 695u, 0x08B2EF08u>(ctx, &aot_mem); return;
    }
    goto L_08B1CE00;
L_08B1CE00:
    rt.unsupported(0x08B1CE00u, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1CE04:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CE08u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 499u, 0x08B2DF78u>(ctx, &aot_mem); return;
    }
    goto L_08B1CE0C;
L_08B1CE0C:
    rt.unsupported(0x08B1CE0Cu, 0x4E5C5350u, "unknown not lowered yet"); return;
L_08B1CE28:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CE2Cu, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 500u, 0x08B2DF9Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1CE30;
L_08B1CE30:
    rt.unsupported(0x08B1CE30u, 0x4E5C5350u, "unknown not lowered yet"); return;
L_08B1CE48:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CE4Cu, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 501u, 0x08B2DFBCu>(ctx, &aot_mem); return;
    }
    goto L_08B1CE50;
L_08B1CE50:
    rt.unsupported(0x08B1CE50u, 0x425C5350u, "unknown not lowered yet"); return;
L_08B1CE5C:
    rt.unsupported(0x08B1CE5Cu, 0x4544492Eu, "cop1? not lowered yet"); return;
L_08B1CE64:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CE68u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 502u, 0x08B2DFD8u>(ctx, &aot_mem); return;
    }
    goto L_08B1CE6C;
L_08B1CE6C:
    rt.unsupported(0x08B1CE6Cu, 0x4D5C5350u, "unknown not lowered yet"); return;
L_08B1CE78:
    rt.unsupported(0x08B1CE78u, 0x4544492Eu, "cop1? not lowered yet"); return;
L_08B1CE80:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CE84u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 504u, 0x08B2DFF4u>(ctx, &aot_mem); return;
    }
    goto L_08B1CE88;
L_08B1CE88:
    rt.unsupported(0x08B1CE8Cu, 0x54484341u, "control flow in delay slot"); return;
L_08B1CE90:
    rt.unsupported(0x08B1CE90u, 0x4341595Cu, "unknown not lowered yet"); return;
L_08B1CEA0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CEA4u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 505u, 0x08B2E014u>(ctx, &aot_mem); return;
    }
    goto L_08B1CEA8;
L_08B1CEA8:
    rt.unsupported(0x08B1CEA8u, 0x435C5350u, "unknown not lowered yet"); return;
L_08B1CEC4:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CEC8u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 506u, 0x08B2E038u>(ctx, &aot_mem); return;
    }
    goto L_08B1CECC;
L_08B1CECC:
    rt.unsupported(0x08B1CECCu, 0x435C5350u, "unknown not lowered yet"); return;
L_08B1CED8:
    rt.unsupported(0x08B1CED8u, 0x4544492Eu, "cop1? not lowered yet"); return;
L_08B1CEE0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CEE4u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 508u, 0x08B2E054u>(ctx, &aot_mem); return;
    }
    goto L_08B1CEE8;
L_08B1CEE8:
    rt.unsupported(0x08B1CEE8u, 0x485C5350u, "cop2/vfpu not lowered yet"); return;
L_08B1CEF8:
    ctx.gpr[27] = (ctx.gpr[9] & 17732u);
    // nop
    goto L_08B1CF00;
L_08B1CF00:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CF04u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 509u, 0x08B2E074u>(ctx, &aot_mem); return;
    }
    goto L_08B1CF08;
L_08B1CF08:
    rt.unsupported(0x08B1CF08u, 0x4C5C5350u, "unknown not lowered yet"); return;
L_08B1CF24:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CF28u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 510u, 0x08B2E098u>(ctx, &aot_mem); return;
    }
    goto L_08B1CF2C;
L_08B1CF2C:
    rt.unsupported(0x08B1CF30u, 0x50495254u, "control flow in delay slot"); return;
L_08B1CF34:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1CF38u, 0x49525453u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 3u, 0x08B30044u>(ctx, &aot_mem); return;
    }
    goto L_08B1CF3C;
L_08B1CF3C:
    rt.unsupported(0x08B1CF3Cu, 0x424C4350u, "unknown not lowered yet"); return;
L_08B1CF48:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CF4Cu, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 511u, 0x08B2E0BCu>(ctx, &aot_mem); return;
    }
    goto L_08B1CF50;
L_08B1CF50:
    rt.unsupported(0x08B1CF50u, 0x415C5350u, "unknown not lowered yet"); return;
L_08B1CF6C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CF70u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 513u, 0x08B2E0E0u>(ctx, &aot_mem); return;
    }
    goto L_08B1CF74;
L_08B1CF74:
    rt.unsupported(0x08B1CF74u, 0x485C5350u, "cop2/vfpu not lowered yet"); return;
L_08B1CF8C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CF90u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 514u, 0x08B2E100u>(ctx, &aot_mem); return;
    }
    goto L_08B1CF94;
L_08B1CF94:
    rt.unsupported(0x08B1CF94u, 0x485C5350u, "cop2/vfpu not lowered yet"); return;
L_08B1CFAC:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CFB0u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 515u, 0x08B2E120u>(ctx, &aot_mem); return;
    }
    goto L_08B1CFB4;
L_08B1CFB4:
    rt.unsupported(0x08B1CFB4u, 0x435C5350u, "unknown not lowered yet"); return;
L_08B1CFC4:
    rt.unsupported(0x08B1CFC4u, 0x48545245u, "cop2/vfpu not lowered yet"); return;
L_08B1CFD0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CFD4u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 516u, 0x08B2E144u>(ctx, &aot_mem); return;
    }
    goto L_08B1CFD8;
L_08B1CFD8:
    rt.unsupported(0x08B1CFD8u, 0x4D5C5350u, "unknown not lowered yet"); return;
L_08B1CFF4:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CFF8u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 517u, 0x08B2E168u>(ctx, &aot_mem); return;
    }
    goto L_08B1CFFC;
L_08B1CFFC:
    rt.unsupported(0x08B1CFFCu, 0x495C5350u, "cop2/vfpu not lowered yet"); return;
L_08B1D00C:
    rt.unsupported(0x08B1D00Cu, 0x4653444Eu, "cop1? not lowered yet"); return;
L_08B1D018:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D01Cu, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 519u, 0x08B2E18Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1D020;
L_08B1D020:
    rt.unsupported(0x08B1D020u, 0x4C5C5350u, "unknown not lowered yet"); return;
L_08B1D030:
    rt.unsupported(0x08B1D030u, 0x4148454Cu, "unknown not lowered yet"); return;
L_08B1D03C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D040u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 521u, 0x08B2E1B0u>(ctx, &aot_mem); return;
    }
    goto L_08B1D044;
L_08B1D044:
    rt.unsupported(0x08B1D044u, 0x445C5350u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D04Cu, 0x5C4E574Fu, "control flow in delay slot"); return;
L_08B1D050:
    rt.unsupported(0x08B1D050u, 0x4E574F44u, "unknown not lowered yet"); return;
L_08B1D060:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D064u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 522u, 0x08B2E1D4u>(ctx, &aot_mem); return;
    }
    goto L_08B1D068;
L_08B1D068:
    rt.unsupported(0x08B1D068u, 0x445C5350u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D070u, 0x5C53574Fu, "control flow in delay slot"); return;
L_08B1D074:
    rt.unsupported(0x08B1D074u, 0x4E574F44u, "unknown not lowered yet"); return;
L_08B1D080:
    rt.unsupported(0x08B1D080u, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1D084:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D088u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 523u, 0x08B2E1F8u>(ctx, &aot_mem); return;
    }
    goto L_08B1D08C;
L_08B1D08C:
    rt.unsupported(0x08B1D08Cu, 0x445C5350u, "unsupported CFC1 control register"); return;
    if (ctx.gpr[26] == ctx.gpr[11]) {
    rt.unsupported(0x08B1D094u, 0x434F445Cu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 442u, 0x08B2DDD0u>(ctx, &aot_mem); return;
    }
    goto L_08B1D098;
L_08B1D098:
    rt.unsupported(0x08B1D098u, 0x492E534Bu, "cop2/vfpu not lowered yet"); return;
L_08B1D0A4:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D0A8u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 524u, 0x08B2E218u>(ctx, &aot_mem); return;
    }
    goto L_08B1D0AC;
L_08B1D0AC:
    if (ctx.gpr[26] != ctx.gpr[28]) {
    rt.unsupported(0x08B1D0B0u, 0x49485341u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 262u, 0x08B31DF0u>(ctx, &aot_mem); return;
    }
    goto L_08B1D0B4;
L_08B1D0B4:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1D0B8u, 0x48534157u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 282u, 0x08B321F0u>(ctx, &aot_mem); return;
    }
    goto L_08B1D0BC;
L_08B1D0BC:
    rt.unsupported(0x08B1D0BCu, 0x4E544E49u, "unknown not lowered yet"); return;
L_08B1D0C8:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D0CCu, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 525u, 0x08B2E23Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1D0D0;
L_08B1D0D0:
    if (ctx.gpr[26] != ctx.gpr[28]) {
    rt.unsupported(0x08B1D0D4u, 0x49485341u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 263u, 0x08B31E14u>(ctx, &aot_mem); return;
    }
    goto L_08B1D0D8;
L_08B1D0D8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1D0DCu, 0x48534157u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 284u, 0x08B32214u>(ctx, &aot_mem); return;
    }
    goto L_08B1D0E0;
L_08B1D0E0:
    if (ctx.gpr[26] == ctx.gpr[20]) {
    rt.unsupported(0x08B1D0E4u, 0x4C50492Eu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 71u, 0x08B30A08u>(ctx, &aot_mem); return;
    }
    goto L_08B1D0E8;
L_08B1D0E8:
    rt.unsupported(0x08B1D0E8u, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1D0EC:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D0F0u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 527u, 0x08B2E260u>(ctx, &aot_mem); return;
    }
    goto L_08B1D0F4;
L_08B1D0F4:
    rt.unsupported(0x08B1D0F4u, 0x4F5C5350u, "unknown not lowered yet"); return;
L_08B1D104:
    if (ctx.gpr[18] != ctx.gpr[18]) {
    rt.unsupported(0x08B1D108u, 0x4C50492Eu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 526u, 0x08B2E240u>(ctx, &aot_mem); return;
    }
    goto L_08B1D10C;
L_08B1D10C:
    rt.unsupported(0x08B1D10Cu, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1D110:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D114u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 528u, 0x08B2E284u>(ctx, &aot_mem); return;
    }
    goto L_08B1D118;
L_08B1D118:
    rt.unsupported(0x08B1D118u, 0x4F5C5350u, "unknown not lowered yet"); return;
L_08B1D134:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D138u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 529u, 0x08B2E2A8u>(ctx, &aot_mem); return;
    }
    goto L_08B1D13C;
L_08B1D13C:
    rt.unsupported(0x08B1D13Cu, 0x475C5350u, "cop1? not lowered yet"); return;
L_08B1D148:
    rt.unsupported(0x08B1D148u, 0x4C50492Eu, "unknown not lowered yet"); return;
L_08B1D150:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D154u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 530u, 0x08B2E2C4u>(ctx, &aot_mem); return;
    }
    goto L_08B1D158;
L_08B1D158:
    rt.unsupported(0x08B1D158u, 0x425C5350u, "unknown not lowered yet"); return;
L_08B1D168:
    rt.unsupported(0x08B1D168u, 0x4C50492Eu, "unknown not lowered yet"); return;
L_08B1D170:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D174u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 531u, 0x08B2E2E4u>(ctx, &aot_mem); return;
    }
    goto L_08B1D178;
L_08B1D178:
    if (ctx.gpr[26] == ctx.gpr[28]) {
    rt.unsupported(0x08B1D17Cu, 0x49524154u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 267u, 0x08B31EBCu>(ctx, &aot_mem); return;
    }
    goto L_08B1D180;
L_08B1D180:
    if (ctx.gpr[26] == ctx.gpr[28]) {
    rt.unsupported(0x08B1D184u, 0x49524154u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 19u, 0x08B302D0u>(ctx, &aot_mem); return;
    }
    goto L_08B1D188;
L_08B1D188:
    rt.unsupported(0x08B1D188u, 0x492E4C53u, "cop2/vfpu not lowered yet"); return;
L_08B1D194:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D198u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 533u, 0x08B2E308u>(ctx, &aot_mem); return;
    }
    goto L_08B1D19C;
L_08B1D19C:
    rt.unsupported(0x08B1D19Cu, 0x4E5C5350u, "unknown not lowered yet"); return;
L_08B1D1AC:
    if (ctx.gpr[2] != ctx.gpr[2]) {
    rt.unsupported(0x08B1D1B0u, 0x4C50492Eu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 730u, 0x08B2F2BCu>(ctx, &aot_mem); return;
    }
    goto L_08B1D1B4;
L_08B1D1B4:
    rt.unsupported(0x08B1D1B4u, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1D1B8:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D1BCu, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 534u, 0x08B2E32Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1D1C0;
L_08B1D1C0:
    rt.unsupported(0x08B1D1C0u, 0x4E5C5350u, "unknown not lowered yet"); return;
L_08B1D1D8:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D1DCu, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 535u, 0x08B2E34Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1D1E0;
L_08B1D1E0:
    rt.unsupported(0x08B1D1E0u, 0x4E5C5350u, "unknown not lowered yet"); return;
L_08B1D1FC:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D200u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 536u, 0x08B2E370u>(ctx, &aot_mem); return;
    }
    goto L_08B1D204;
L_08B1D204:
    rt.unsupported(0x08B1D204u, 0x435C5350u, "unknown not lowered yet"); return;
L_08B1D220:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D224u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 537u, 0x08B2E394u>(ctx, &aot_mem); return;
    }
    goto L_08B1D228;
L_08B1D228:
    rt.unsupported(0x08B1D228u, 0x415C5350u, "unknown not lowered yet"); return;
L_08B1D244:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D248u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 538u, 0x08B2E3B8u>(ctx, &aot_mem); return;
    }
    goto L_08B1D24C;
L_08B1D24C:
    rt.unsupported(0x08B1D24Cu, 0x485C5350u, "cop2/vfpu not lowered yet"); return;
L_08B1D264:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D268u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 539u, 0x08B2E3D8u>(ctx, &aot_mem); return;
    }
    goto L_08B1D26C;
L_08B1D26C:
    rt.unsupported(0x08B1D26Cu, 0x485C5350u, "cop2/vfpu not lowered yet"); return;
L_08B1D284:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D288u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 540u, 0x08B2E3F8u>(ctx, &aot_mem); return;
    }
    goto L_08B1D28C;
L_08B1D28C:
    rt.unsupported(0x08B1D28Cu, 0x495C5350u, "cop2/vfpu not lowered yet"); return;
L_08B1D29C:
    rt.unsupported(0x08B1D29Cu, 0x4653444Eu, "cop1? not lowered yet"); return;
L_08B1D2A8:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D2ACu, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 541u, 0x08B2E41Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1D2B0;
L_08B1D2B0:
    rt.unsupported(0x08B1D2B0u, 0x425C5350u, "unknown not lowered yet"); return;
L_08B1D2BC:
    rt.unsupported(0x08B1D2BCu, 0x4C50492Eu, "unknown not lowered yet"); return;
L_08B1D2C4:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D2C8u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 542u, 0x08B2E438u>(ctx, &aot_mem); return;
    }
    goto L_08B1D2CC;
L_08B1D2CC:
    rt.unsupported(0x08B1D2CCu, 0x4D5C5350u, "unknown not lowered yet"); return;
L_08B1D2D8:
    rt.unsupported(0x08B1D2D8u, 0x4C50492Eu, "unknown not lowered yet"); return;
L_08B1D2E0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D2E4u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 543u, 0x08B2E454u>(ctx, &aot_mem); return;
    }
    goto L_08B1D2E8;
L_08B1D2E8:
    rt.unsupported(0x08B1D2ECu, 0x54484341u, "control flow in delay slot"); return;
L_08B1D2F0:
    rt.unsupported(0x08B1D2F0u, 0x4341595Cu, "unknown not lowered yet"); return;
L_08B1D300:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D304u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 544u, 0x08B2E474u>(ctx, &aot_mem); return;
    }
    goto L_08B1D308;
L_08B1D308:
    rt.unsupported(0x08B1D308u, 0x435C5350u, "unknown not lowered yet"); return;
L_08B1D314:
    rt.unsupported(0x08B1D314u, 0x4C50492Eu, "unknown not lowered yet"); return;
L_08B1D31C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D320u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 545u, 0x08B2E490u>(ctx, &aot_mem); return;
    }
    goto L_08B1D324;
L_08B1D324:
    rt.unsupported(0x08B1D324u, 0x485C5350u, "cop2/vfpu not lowered yet"); return;
L_08B1D334:
    ctx.gpr[27] = (ctx.gpr[9] & 19536u);
    // nop
    goto L_08B1D33C;
L_08B1D33C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D340u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 547u, 0x08B2E4B0u>(ctx, &aot_mem); return;
    }
    goto L_08B1D344;
L_08B1D344:
    rt.unsupported(0x08B1D344u, 0x4C5C5350u, "unknown not lowered yet"); return;
L_08B1D360:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D364u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 550u, 0x08B2E4D4u>(ctx, &aot_mem); return;
    }
    goto L_08B1D368;
L_08B1D368:
    rt.unsupported(0x08B1D36Cu, 0x50495254u, "control flow in delay slot"); return;
L_08B1D370:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1D374u, 0x49525453u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 36u, 0x08B30480u>(ctx, &aot_mem); return;
    }
    goto L_08B1D378;
L_08B1D378:
    rt.unsupported(0x08B1D378u, 0x424C4350u, "unknown not lowered yet"); return;
L_08B1D384:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D388u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 553u, 0x08B2E4F8u>(ctx, &aot_mem); return;
    }
    goto L_08B1D38C;
L_08B1D38C:
    rt.unsupported(0x08B1D38Cu, 0x435C5350u, "unknown not lowered yet"); return;
L_08B1D39C:
    rt.unsupported(0x08B1D39Cu, 0x48545245u, "cop2/vfpu not lowered yet"); return;
L_08B1D3A8:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D3ACu, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 558u, 0x08B2E51Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1D3B0;
L_08B1D3B0:
    rt.unsupported(0x08B1D3B0u, 0x4D5C5350u, "unknown not lowered yet"); return;
L_08B1D3CC:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D3D0u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 563u, 0x08B2E540u>(ctx, &aot_mem); return;
    }
    goto L_08B1D3D4;
L_08B1D3D4:
    rt.unsupported(0x08B1D3D4u, 0x475C5350u, "cop1? not lowered yet"); return;
L_08B1D3E0:
    ctx.gpr[27] = (ctx.gpr[9] & 17732u);
    // nop
    goto L_08B1D3E8;
L_08B1D3E8:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D3ECu, 0x434F5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 567u, 0x08B2E55Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1D3F0;
L_08B1D3F0:
    ctx.gpr[21] = (ctx.gpr[18] < static_cast<std::uint32_t>(19523) ? 1u : 0u);
    ctx.gpr[12] = (ctx.gpr[26] ^ 20553u);
    rt.unsupported(0x08B1D3F8u, 0x00000031u, "special? not lowered yet"); return;
L_08B1D3FC:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D400u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 570u, 0x08B2E570u>(ctx, &aot_mem); return;
    }
    goto L_08B1D404;
L_08B1D404:
    rt.unsupported(0x08B1D408u, 0x53485441u, "control flow in delay slot"); return;
L_08B1D40C:
    rt.unsupported(0x08B1D40Cu, 0x4C50492Eu, "unknown not lowered yet"); return;
L_08B1D414:
    rt.unsupported(0x08B1D414u, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D418u, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D428:
    rt.unsupported(0x08B1D428u, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D42Cu, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D43C:
    rt.unsupported(0x08B1D43Cu, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D440u, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D450:
    rt.unsupported(0x08B1D450u, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D454u, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D464:
    rt.unsupported(0x08B1D464u, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D468u, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D478:
    rt.unsupported(0x08B1D478u, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D47Cu, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D480:
    ctx.gpr[3] = (ctx.gpr[10] | 21316u);
    rt.unsupported(0x08B1D484u, 0x4458542Eu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D488u, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1D48C:
    rt.unsupported(0x08B1D48Cu, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D490u, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D4A0:
    rt.unsupported(0x08B1D4A0u, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D4A4u, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D4B4:
    rt.unsupported(0x08B1D4B4u, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D4B8u, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D4C8:
    rt.unsupported(0x08B1D4C8u, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D4CCu, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D4DC:
    rt.unsupported(0x08B1D4DCu, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D4E0u, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D4F0:
    rt.unsupported(0x08B1D4F0u, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D4F4u, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D504:
    rt.unsupported(0x08B1D504u, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D508u, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D518:
    rt.unsupported(0x08B1D518u, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D51Cu, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D52C:
    rt.unsupported(0x08B1D52Cu, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D530u, 0x4C50535Cu, "unknown not lowered yet"); return;
L_08B1D540:
    rt.unsupported(0x08B1D540u, 0x44414F4Cu, "unsupported CFC1 control register"); return;
    jump_target = ctx.gpr[1];
    ctx.gpr[9] = (0x08B1D54Cu);
    ctx.gpr[14] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B1D54Cu) goto L_08B1D54C;
    return;
L_08B1D54C:
    rt.unsupported(0x08B1D54Cu, 0x00000073u, "special? not lowered yet"); return;
L_08B1D5EC:
    if (ctx.gpr[2] != ctx.gpr[12]) {
    rt.unsupported(0x08B1D5F0u, 0x41472049u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 313u, 0x08B32B24u>(ctx, &aot_mem); return;
    }
    goto L_08B1D5F4;
L_08B1D5F4:
    rt.unsupported(0x08B1D5F4u, 0x0000454Du, "special? not lowered yet"); return;
L_08B1D5F8:
    if (ctx.gpr[25] != 0u) {
    rt.unsupported(0x08B1D5FCu, 0x49544941u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1112u, 0x08B27EA4u>(ctx, &aot_mem); return;
    }
    goto L_08B1D600;
L_08B1D600:
    rt.unsupported(0x08B1D600u, 0x203A474Eu, "unknown not lowered yet"); return;
L_08B1D60C:
    rt.unsupported(0x08B1D60Cu, 0x63736964u, "vfpu0 not lowered yet"); return;
L_08B1D618:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B1D61Cu, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D620u, 0x412F5249u, "unknown not lowered yet"); return;
L_08B1D630:
    if (ctx.gpr[18] == ctx.gpr[3]) {
    ctx.gpr[25] = (ctx.gpr[18] | 23105u);
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 47u, 0x08B29348u>(ctx, &aot_mem); return;
    }
    goto L_08B1D638;
L_08B1D638:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D63Cu, 0x00000033u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 39u, 0x08B28F20u>(ctx, &aot_mem); return;
    }
    goto L_08B1D640;
L_08B1D640:
    rt.unsupported(0x08B1D640u, 0x43202A2Au, "unknown not lowered yet"); return;
L_08B1D6B0:
    ctx.gpr[12] = (ctx.gpr[3] + ctx.gpr[19]);
    goto L_08B1D6B4;
L_08B1D6B4:
    ctx.execute_vfpu_compare3(102u, 108u, 111u, 1u, 6u);
    rt.unsupported(0x08B1D6B8u, 0x00000072u, "special? not lowered yet"); return;
L_08B1D6BC:
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? ctx.gpr[3] : ctx.gpr[4]);
    goto L_08B1D6C0;
L_08B1D6C0:
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[3] : ctx.gpr[14]);
    goto L_08B1D6C4;
L_08B1D6C4:
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[24]) ? ctx.gpr[3] : ctx.gpr[24]);
    goto L_08B1D6C8;
L_08B1D6C8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1D6CCu, 0x00006D6Fu, "special? not lowered yet"); return;
L_08B1D6D0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<111u, 109u, 115u, 1u>();
    ctx.gpr[12] = (0u | 0u);
    goto L_08B1D6DC;
L_08B1D6DC:
    ctx.execute_vfpu_vscl_ct<105u, 110u, 116u, 1u>();
    ctx.execute_vfpu_vcmp_ct<118u, 97u, 1u, 2u>();
    rt.unsupported(0x08B1D6E4u, 0x20736920u, "unknown not lowered yet"); return;
L_08B1D6F0:
    rt.unsupported(0x08B1D6F0u, 0x6E6F7277u, "vfpu3 not lowered yet"); return;
L_08B1D70C:
    rt.unsupported(0x08B1D70Cu, 0x6874616Du, "unknown not lowered yet"); return;
L_08B1D714:
    rt.unsupported(0x08B1D714u, 0x00006970u, "special? not lowered yet"); return;
L_08B1D718:
    rt.unsupported(0x08B1D718u, 0x00726C70u, "special? not lowered yet"); return;
L_08B1D71C:
    ctx.gpr[18] = (ctx.gpr[19] & 27760u);
    // nop
    goto L_08B1D724;
L_08B1D724:
    ctx.gpr[18] = (ctx.gpr[27] & 27760u);
    // nop
    goto L_08B1D72C;
L_08B1D72C:
    ctx.gpr[18] = (ctx.gpr[3] | 27760u);
    // nop
    goto L_08B1D734;
L_08B1D734:
    ctx.gpr[18] = (ctx.gpr[11] | 27760u);
    // nop
    goto L_08B1D73C;
L_08B1D73C:
    ctx.gpr[18] = (ctx.gpr[19] | 27760u);
    // nop
    goto L_08B1D744;
L_08B1D744:
    ctx.gpr[18] = (ctx.gpr[27] | 27760u);
    // nop
    goto L_08B1D74C;
L_08B1D74C:
    ctx.gpr[18] = (ctx.gpr[3] ^ 27760u);
    // nop
    goto L_08B1D754;
L_08B1D754:
    ctx.gpr[18] = (ctx.gpr[11] ^ 27760u);
    // nop
    goto L_08B1D75C;
L_08B1D75C:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B1D760u, 0x00000030u, "special? not lowered yet"); return;
L_08B1D764:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B1D768u, 0x00000031u, "special? not lowered yet"); return;
L_08B1D76C:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B1D770u, 0x00000032u, "special? not lowered yet"); return;
L_08B1D774:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B1D778u, 0x00000033u, "special? not lowered yet"); return;
L_08B1D77C:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B1D780u, 0x00000034u, "special? not lowered yet"); return;
L_08B1D784:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B1D788u, 0x00000035u, "special? not lowered yet"); return;
L_08B1D78C:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B1D790u, 0x00000036u, "special? not lowered yet"); return;
L_08B1D794:
    // nop
    goto L_08B1D798;
L_08B1D798:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D79Cu, 0x00000072u, "special? not lowered yet"); return;
L_08B1D7A0:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D7A4u, 0x00003272u, "special? not lowered yet"); return;
L_08B1D7A8:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D7ACu, 0x00003372u, "special? not lowered yet"); return;
L_08B1D7B0:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D7B4u, 0x00003472u, "special? not lowered yet"); return;
L_08B1D7B8:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D7BCu, 0x00003572u, "special? not lowered yet"); return;
L_08B1D7C0:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D7C4u, 0x00003672u, "special? not lowered yet"); return;
L_08B1D7C8:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D7CCu, 0x00003772u, "special? not lowered yet"); return;
L_08B1D7D0:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D7D4u, 0x00003872u, "special? not lowered yet"); return;
L_08B1D7D8:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D7DCu, 0x00003972u, "special? not lowered yet"); return;
L_08B1D7E0:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D7E4u, 0x00303172u, "special? not lowered yet"); return;
L_08B1D7E8:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D7ECu, 0x00313172u, "special? not lowered yet"); return;
L_08B1D7F0:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D7F4u, 0x00323172u, "special? not lowered yet"); return;
L_08B1D7F8:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D7FCu, 0x00333172u, "special? not lowered yet"); return;
L_08B1D800:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D804u, 0x00343172u, "special? not lowered yet"); return;
L_08B1D808:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D80Cu, 0x00353172u, "special? not lowered yet"); return;
L_08B1D810:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D814u, 0x00363172u, "special? not lowered yet"); return;
L_08B1D824:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 141u, 0x08B3114Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1D82C;
L_08B1D82C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 196u, 0x08B3153Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1D834;
L_08B1D834:
    rt.unsupported(0x08B1D834u, 0x6E646944u, "vfpu3 not lowered yet"); return;
L_08B1D868:
    rt.unsupported(0x08B1D868u, 0x45444F4Du, "cop1? not lowered yet"); return;
L_08B1D884:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    rt.unsupported(0x08B1D888u, 0x6E696D61u, "vfpu3 not lowered yet"); return;
L_08B1D8B4:
    rt.unsupported(0x08B1D8B4u, 0x4F525245u, "unknown not lowered yet"); return;
L_08B1D8F0:
    rt.unsupported(0x08B1D8F0u, 0x6E6E6143u, "vfpu3 not lowered yet"); return;
L_08B1D900:
    rt.unsupported(0x08B1D900u, 0x4F4C4E55u, "unknown not lowered yet"); return;
L_08B1D918:
    rt.unsupported(0x08B1D918u, 0x72617453u, "unknown not lowered yet"); return;
L_08B1D920:
    rt.unsupported(0x08B1D920u, 0x73206461u, "unknown not lowered yet"); return;
L_08B1D92C:
    rt.unsupported(0x08B1D92Cu, 0x20646E45u, "unknown not lowered yet"); return;
L_08B1D93C:
    if (ctx.gpr[2] != ctx.gpr[20]) {
    rt.unsupported(0x08B1D940u, 0x20474E49u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 688u, 0x08B2EE8Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1D944;
L_08B1D944:
    if (ctx.gpr[26] == ctx.gpr[19]) {
    rt.unsupported(0x08B1D948u, 0x204E4F49u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 805u, 0x08B2FE7Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1D94C;
L_08B1D94C:
    if (ctx.gpr[26] == ctx.gpr[5]) {
    rt.unsupported(0x08B1D950u, 0x2054274Eu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 207u, 0x08B31660u>(ctx, &aot_mem); return;
    }
    goto L_08B1D954;
L_08B1D954:
    if (ctx.gpr[10] != ctx.gpr[17]) {
    rt.unsupported(0x08B1D958u, 0x20455249u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 689u, 0x08B2EEA0u>(ctx, &aot_mem); return;
    }
    goto L_08B1D95C;
L_08B1D95C:
    rt.unsupported(0x08B1D95Cu, 0x45444F4Du, "cop1? not lowered yet"); return;
L_08B1D968:
    if (ctx.gpr[2] != ctx.gpr[20]) {
    rt.unsupported(0x08B1D96Cu, 0x20474E49u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 691u, 0x08B2EEB8u>(ctx, &aot_mem); return;
    }
    goto L_08B1D970;
L_08B1D970:
    rt.unsupported(0x08B1D970u, 0x49424D41u, "cop2/vfpu not lowered yet"); return;
L_08B1D980:
    if (ctx.gpr[26] == ctx.gpr[5]) {
    rt.unsupported(0x08B1D984u, 0x2054274Eu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 209u, 0x08B31694u>(ctx, &aot_mem); return;
    }
    goto L_08B1D988;
L_08B1D988:
    if (ctx.gpr[10] != ctx.gpr[17]) {
    rt.unsupported(0x08B1D98Cu, 0x20455249u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 692u, 0x08B2EED4u>(ctx, &aot_mem); return;
    }
    goto L_08B1D990;
L_08B1D990:
    rt.unsupported(0x08B1D990u, 0x45444F4Du, "cop1? not lowered yet"); return;
L_08B1D99C:
    ctx.execute_vfpu_compare3(99u, 115u, 116u, 1u, 6u);
    rt.unsupported(0x08B1D9A0u, 0x615F696Eu, "vfpu0 not lowered yet"); return;
L_08B1D9A8:
    ctx.execute_vfpu_vscl_ct<103u, 101u, 110u, 1u>();
    rt.unsupported(0x08B1D9ACu, 0x00636972u, "special? not lowered yet"); return;
L_08B1D9B0:
    rt.unsupported(0x08B1D9B0u, 0x4F4D454Du, "unknown not lowered yet"); return;
L_08B1D9E4:
    // nop
    ctx.pc = 0x09153924u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B1D9EC:
    rt.unsupported(0x08B1D9ECu, 0x41544F54u, "unknown not lowered yet"); return;
L_08B1D9FC:
    rt.unsupported(0x08B1D9FCu, 0x4E454D47u, "unknown not lowered yet"); return;
L_08B1DA20:
    ctx.execute_vfpu_vscl_ct<103u, 111u, 110u, 1u>();
    rt.unsupported(0x08B1DA24u, 0x746E6920u, "unknown not lowered yet"); return;
L_08B1DA3C:
    rt.unsupported(0x08B1DA3Cu, 0x69626D41u, "unknown not lowered yet"); return;
L_08B1DA54:
    rt.unsupported(0x08B1DA54u, 0x6E726157u, "vfpu3 not lowered yet"); return;
L_08B1DA84:
    rt.unsupported(0x08B1DA84u, 0x69626D41u, "unknown not lowered yet"); return;
L_08B1DA9C:
    rt.unsupported(0x08B1DA9Cu, 0x6E726157u, "vfpu3 not lowered yet"); return;
L_08B1DACC:
    rt.unsupported(0x08B1DACCu, 0x4F4D4D49u, "unknown not lowered yet"); return;
L_08B1DAD8:
    ctx.execute_vfpu_vscl_ct<109u, 111u, 100u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<44u, 32u, 114u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<115u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<102u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1DAE8u, 0x6973202Cu, "unknown not lowered yet"); return;
L_08B1DAFC:
    ctx.execute_vfpu_vcmp_ct<101u, 120u, 1u, 4u>();
    rt.unsupported(0x08B1DB00u, 0x20747369u, "unknown not lowered yet"); return;
L_08B1DB28:
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 3u>();
    ctx.gpr[19] = (ctx.gpr[3] < static_cast<std::uint32_t>(9504) ? 1u : 0u);
    rt.unsupported(0x08B1DB30u, 0x7A697320u, "unknown not lowered yet"); return;
L_08B1DB48:
    ctx.execute_vfpu_vminmax(97u, 110u, 105u, 1u, false);
    ctx.gpr[19] = (ctx.gpr[3] < static_cast<std::uint32_t>(9504) ? 1u : 0u);
    ctx.execute_vfpu_vhdp(32u, 114u, 101u, 1u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1DB58u, 0x6973202Cu, "unknown not lowered yet"); return;
L_08B1DB70:
    ctx.execute_vfpu_compare3(105u, 109u, 109u, 1u, 6u);
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 6u>();
    rt.unsupported(0x08B1DB78u, 0x69252065u, "unknown not lowered yet"); return;
L_08B1DB84:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<77u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[19] = (ctx.gpr[19] ^ 27749u);
    rt.unsupported(0x08B1DB94u, 0x20202020u, "unknown not lowered yet"); return;
L_08B1DBA0:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1DBA8u, 0x78655420u, "unknown not lowered yet"); return;
L_08B1DBBC:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1DBC4u, 0x696E4120u, "unknown not lowered yet"); return;
L_08B1DBD8:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<67u, 111u, 1u, 0u>();
    rt.unsupported(0x08B1DBE4u, 0x6973696Cu, "unknown not lowered yet"); return;
L_08B1DC24:
    rt.unsupported(0x08B1DC24u, 0x474D492Eu, "cop1? not lowered yet"); return;
L_08B1DC30:
    rt.unsupported(0x08B1DC30u, 0x4E524157u, "unknown not lowered yet"); return;
L_08B1DC5C:
    rt.unsupported(0x08B1DC5Cu, 0x4E492054u, "unknown not lowered yet"); return;
L_08B1DC74:
    if (0u == 0u) (void)(0u);
    goto L_08B1DC78;
L_08B1DC78:
    rt.unsupported(0x08B1DC78u, 0x20444142u, "unknown not lowered yet"); return;
L_08B1DC84:
    rt.unsupported(0x08B1DC84u, 0x4E554843u, "unknown not lowered yet"); return;
L_08B1DCBC:
    rt.unsupported(0x08B1DCBCu, 0x20444142u, "unknown not lowered yet"); return;
L_08B1DCC8:
    rt.unsupported(0x08B1DCC8u, 0x4E554843u, "unknown not lowered yet"); return;
L_08B1DCE0:
    rt.unsupported(0x08B1DCE0u, 0x20444142u, "unknown not lowered yet"); return;
L_08B1DCF0:
    rt.unsupported(0x08B1DCF0u, 0x20454C49u, "unknown not lowered yet"); return;
L_08B1DD20:
    rt.unsupported(0x08B1DD20u, 0x20444142u, "unknown not lowered yet"); return;
L_08B1DD6C:
    rt.unsupported(0x08B1DD70u, 0x5F545345u, "control flow in delay slot"); return;
L_08B1DD74:
    rt.unsupported(0x08B1DD74u, 0x45444F4Du, "cop1? not lowered yet"); return;
L_08B1DD98:
    rt.unsupported(0x08B1DD98u, 0x45525453u, "cop1? not lowered yet"); return;
L_08B1DDB4:
    rt.unsupported(0x08B1DDB4u, 0x4C494146u, "unknown not lowered yet"); return;
L_08B1DDD4:
    rt.unsupported(0x08B1DDD4u, 0x4F4C4552u, "unknown not lowered yet"); return;
L_08B1DDE8:
    rt.unsupported(0x08B1DDE8u, 0x4F4C4552u, "unknown not lowered yet"); return;
L_08B1DE04:
    rt.unsupported(0x08B1DE04u, 0x4F4C4552u, "unknown not lowered yet"); return;
L_08B1DE1C:
    rt.unsupported(0x08B1DE1Cu, 0x4F4C4552u, "unknown not lowered yet"); return;
L_08B1DE34:
    rt.unsupported(0x08B1DE34u, 0x4B435546u, "cop2/vfpu not lowered yet"); return;
L_08B1DE74:
    // nop
    ctx.gpr[14] = (0u | ctx.gpr[10]);
    goto L_08B1DE7C;
L_08B1DE7C:
    rt.unsupported(0x08B1DE7Cu, 0x20444550u, "unknown not lowered yet"); return;
L_08B1DE8C:
    if (ctx.gpr[1] == 0u) {
    rt.unsupported(0x08B1DE90u, 0x20534445u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 247u, 0x08B31BC8u>(ctx, &aot_mem); return;
    }
    goto L_08B1DE94;
L_08B1DE94:
    rt.unsupported(0x08B1DE94u, 0x44204F54u, "cop1? not lowered yet"); return;
L_08B1DEA0:
    rt.unsupported(0x08B1DEA0u, 0x49595254u, "cop2/vfpu not lowered yet"); return;
L_08B1DEAC:
    rt.unsupported(0x08B1DEACu, 0x45564F4Du, "cop1? not lowered yet"); return;
L_08B1DEC0:
    rt.unsupported(0x08B1DEC0u, 0x43435553u, "unknown not lowered yet"); return;
L_08B1DECC:
    rt.unsupported(0x08B1DECCu, 0x4C494146u, "unknown not lowered yet"); return;
L_08B1DED4:
    if (ctx.gpr[18] == ctx.gpr[5]) {
    rt.unsupported(0x08B1DED8u, 0x434E4547u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 177u, 0x08B313ECu>(ctx, &aot_mem); return;
    }
    goto L_08B1DEDC;
L_08B1DEDC:
    rt.unsupported(0x08B1DEDCu, 0x45562059u, "cop1? not lowered yet"); return;
L_08B1DEEC:
    rt.unsupported(0x08B1DEECu, 0x43412047u, "unknown not lowered yet"); return;
L_08B1DEFC:
    if (ctx.gpr[17] != 0u) {
    rt.unsupported(0x08B1DF00u, 0x43494845u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 249u, 0x08B31C38u>(ctx, &aot_mem); return;
    }
    goto L_08B1DF04;
L_08B1DF04:
    rt.unsupported(0x08B1DF04u, 0x2053454Cu, "unknown not lowered yet"); return;
L_08B1DF14:
    rt.unsupported(0x08B1DF14u, 0x49595254u, "cop2/vfpu not lowered yet"); return;
L_08B1DF20:
    rt.unsupported(0x08B1DF20u, 0x45564F4Du, "cop1? not lowered yet"); return;
L_08B1DF38:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B1DF3Cu, 0x74206465u, "unknown not lowered yet"); return;
L_08B1DF50:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B1DF54u, 0x74206465u, "unknown not lowered yet"); return;
L_08B1DF68:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1DF6Cu, 0x20676E69u, "unknown not lowered yet"); return;
L_08B1DF88:
    rt.unsupported(0x08B1DF88u, 0x20444142u, "unknown not lowered yet"); return;
L_08B1DFC8:
    ctx.gpr[19] = (ctx.gpr[27] + static_cast<std::uint32_t>(9568));
    rt.unsupported(0x08B1DFCCu, 0x70786520u, "unknown not lowered yet"); return;
L_08B1DFD8:
    ctx.gpr[19] = (ctx.gpr[27] + static_cast<std::uint32_t>(9568));
    rt.unsupported(0x08B1DFDCu, 0x70786520u, "unknown not lowered yet"); return;
L_08B1E004:
    ctx.execute_vfpu_vminmax(60u, 110u, 97u, 1u, false);
    goto L_08B1E008;
L_08B1E008:
    ctx.execute_vfpu_vscl_ct<101u, 62u, 32u, 1u>();
    rt.unsupported(0x08B1E00Cu, 0x63657078u, "vfpu0 not lowered yet"); return;
L_08B1E014:
    // nop
    goto L_08B1E018;
L_08B1E018:
    rt.unsupported(0x08B1E018u, 0x61636F6Cu, "vfpu0 not lowered yet"); return;
L_08B1E028:
    rt.unsupported(0x08B1E028u, 0x61767075u, "vfpu0 not lowered yet"); return;
L_08B1E034:
    rt.unsupported(0x08B1E034u, 0x61726170u, "vfpu0 not lowered yet"); return;
L_08B1E040:
    ctx.gpr[14] = (ctx.gpr[3] + ctx.gpr[7]);
    goto L_08B1E044;
L_08B1E044:
    rt.unsupported(0x08B1E044u, 0x736E6F63u, "unknown not lowered yet"); return;
L_08B1E05C:
    ctx.execute_vfpu_vhdp(60u, 101u, 111u, 1u);
    rt.unsupported(0x08B1E060u, 0x7865203Eu, "unknown not lowered yet"); return;
L_08B1E06C:
    ctx.execute_vfpu_vminmax(105u, 116u, 101u, 1u, false);
    rt.unsupported(0x08B1E070u, 0x6E692073u, "vfpu3 not lowered yet"); return;
L_08B1E084:
    ctx.execute_vfpu_vminmax(60u, 110u, 97u, 1u, false);
    ctx.execute_vfpu_compare3(101u, 62u, 32u, 1u, 6u);
    (void)(ctx.gpr[19] < static_cast<std::uint32_t>(8306) ? 1u : 0u);
    rt.unsupported(0x08B1E090u, 0x20272E2Eu, "unknown not lowered yet"); return;
L_08B1E0A0:
    ctx.execute_vfpu_vhdp(115u, 101u, 108u, 1u);
    // nop
    goto L_08B1E0A8;
L_08B1E0A8:
    rt.unsupported(0x08B1E0A8u, 0x69626D61u, "unknown not lowered yet"); return;
L_08B1E0D4:
    ctx.gpr[20] = (static_cast<std::int32_t>(ctx.gpr[11]) < 28261 ? 1u : 0u);
    // nop
    goto L_08B1E0DC;
L_08B1E0DC:
    rt.unsupported(0x08B1E0DCu, 0x636E7566u, "vfpu0 not lowered yet"); return;
L_08B1E0F8:
    rt.unsupported(0x08B1E0F8u, 0x78656E75u, "unknown not lowered yet"); return;
L_08B1E10C:
    rt.unsupported(0x08B1E10Cu, 0x206F6F74u, "unknown not lowered yet"); return;
L_08B1E124:
    rt.unsupported(0x08B1E124u, 0x746E7973u, "unknown not lowered yet"); return;
L_08B1E134:
    rt.unsupported(0x08B1E134u, 0x69687760u, "unknown not lowered yet"); return;
L_08B1E154:
    rt.unsupported(0x08B1E154u, 0x726F6628u, "unknown not lowered yet"); return;
L_08B1E160:
    rt.unsupported(0x08B1E160u, 0x726F6628u, "unknown not lowered yet"); return;
L_08B1E16C:
    rt.unsupported(0x08B1E16Cu, 0x726F6628u, "unknown not lowered yet"); return;
L_08B1E17C:
    rt.unsupported(0x08B1E17Cu, 0x726F6628u, "unknown not lowered yet"); return;
L_08B1E188:
    rt.unsupported(0x08B1E188u, 0x20273D60u, "unknown not lowered yet"); return;
L_08B1E1A0:
    ctx.execute_vfpu_vcmp_ct<111u, 32u, 1u, 14u>();
    rt.unsupported(0x08B1E1A4u, 0x20706F6Fu, "unknown not lowered yet"); return;
L_08B1E214:
    rt.unsupported(0x08B1E218u, 0x089D051Cu, "control flow in delay slot"); return;
L_08B1E374:
    rt.unsupported(0x08B1E378u, 0x089D0810u, "control flow in delay slot"); return;
L_08B1E394:
    rt.unsupported(0x08B1E398u, 0x089D0810u, "control flow in delay slot"); return;
L_08B1E418:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B1E41Cu, 0x4E203A72u, "unknown not lowered yet"); return;
L_08B1E4E0:
    ctx.gpr[13] = (ctx.gpr[9] < static_cast<std::uint32_t>(11611) ? 1u : 0u);
    if (ctx.gpr[18] == ctx.gpr[18]) {
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(21071));
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 761u, 0x08B2F968u>(ctx, &aot_mem); return;
    }
    goto L_08B1E4EC;
L_08B1E4EC:
    rt.unsupported(0x08B1E4ECu, 0x4F4C2058u, "unknown not lowered yet"); return;
L_08B1E504:
    // nop
    ctx.pc = 0x0974B4B4u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B1E50C:
    ctx.gpr[13] = (ctx.gpr[9] < static_cast<std::uint32_t>(11611) ? 1u : 0u);
    rt.unsupported(0x08B1E510u, 0x434F4C20u, "unknown not lowered yet"); return;
L_08B1E538:
    ctx.gpr[13] = (ctx.gpr[9] < static_cast<std::uint32_t>(11611) ? 1u : 0u);
    rt.unsupported(0x08B1E53Cu, 0x4C4E5520u, "unknown not lowered yet"); return;
L_08B1E554:
    // nop
    ctx.pc = 0x0974B4B4u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B1E55C:
    rt.unsupported(0x08B1E55Cu, 0x4B656373u, "cop2/vfpu not lowered yet"); return;
L_08B1E598:
    rt.unsupported(0x08B1E598u, 0x69797254u, "unknown not lowered yet"); return;
L_08B1E5B4:
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(25964));
    rt.unsupported(0x08B1E5B8u, 0x00000A78u, "special? not lowered yet"); return;
L_08B1E5BC:
    rt.unsupported(0x08B1E5BCu, 0x20756F59u, "unknown not lowered yet"); return;
L_08B1E5D8:
    rt.unsupported(0x08B1E5D8u, 0x69797254u, "unknown not lowered yet"); return;
L_08B1E604:
    rt.unsupported(0x08B1E604u, 0x69797254u, "unknown not lowered yet"); return;
L_08B1E644:
    rt.unsupported(0x08B1E644u, 0x69797254u, "unknown not lowered yet"); return;
L_08B1E65C:
    rt.unsupported(0x08B1E65Cu, 0x74207475u, "unknown not lowered yet"); return;
L_08B1E67C:
    rt.unsupported(0x08B1E67Cu, 0x69797254u, "unknown not lowered yet"); return;
L_08B1E698:
    rt.unsupported(0x08B1E698u, 0x676E6976u, "vfpu1 not lowered yet"); return;
L_08B1E6A8:
    rt.unsupported(0x08B1E6A8u, 0x69797254u, "unknown not lowered yet"); return;
L_08B1E6CC:
    rt.unsupported(0x08B1E6CCu, 0x69797254u, "unknown not lowered yet"); return;
L_08B1E6FC:
    rt.unsupported(0x08B1E6FCu, 0x69797254u, "unknown not lowered yet"); return;
L_08B1E734:
    rt.unsupported(0x08B1E734u, 0x696B7341u, "unknown not lowered yet"); return;
L_08B1E738:
    ctx.execute_vfpu_vhdp(110u, 103u, 32u, 1u);
    rt.unsupported(0x08B1E73Cu, 0x7420726Fu, "unknown not lowered yet"); return;
L_08B1E764:
    rt.unsupported(0x08B1E764u, 0x44414544u, "unsupported CFC1 control register"); return;
    // nop
    goto L_08B1E76C;
L_08B1E76C:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B1E770u, 0x00004445u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 403u, 0x08B33C78u>(ctx, &aot_mem); return;
    }
    goto L_08B1E774;
L_08B1E770:
    rt.unsupported(0x08B1E770u, 0x00004445u, "special? not lowered yet"); return;
L_08B1E774:
    rt.unsupported(0x08B1E774u, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B1E77C:
    rt.unsupported(0x08B1E77Cu, 0x74696157u, "unknown not lowered yet"); return;
L_08B1E790:
    rt.unsupported(0x08B1E790u, 0x72656673u, "unknown not lowered yet"); return;
L_08B1E798:
    // nop
    goto L_08B1E79C;
L_08B1E79C:
    rt.unsupported(0x08B1E79Cu, 0x74696157u, "unknown not lowered yet"); return;
L_08B1E7B8:
    rt.unsupported(0x08B1E7B8u, 0x2064656Du, "unknown not lowered yet"); return;
L_08B1E7C0:
    rt.unsupported(0x08B1E7C0u, 0x202E2E2Eu, "unknown not lowered yet"); return;
L_08B1E7C8:
    rt.unsupported(0x08B1E7C8u, 0x72656673u, "unknown not lowered yet"); return;
L_08B1E7D0:
    rt.unsupported(0x08B1E7D0u, 0x68207265u, "unknown not lowered yet"); return;
L_08B1E7E0:
    rt.unsupported(0x08B1E7E0u, 0x746E6157u, "unknown not lowered yet"); return;
L_08B1E820:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1E824u, 0x454E4F5Au, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 792u, 0x08B2FD70u>(ctx, &aot_mem); return;
    }
    goto L_08B1E828;
L_08B1E828:
    if (ctx.gpr[18] == ctx.gpr[1]) {
    rt.unsupported(0x08B1E82Cu, 0x464E495Fu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 738u, 0x08B2F5A8u>(ctx, &aot_mem); return;
    }
    goto L_08B1E830;
L_08B1E830:
    rt.unsupported(0x08B1E830u, 0x202D204Fu, "unknown not lowered yet"); return;
L_08B1E860:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    rt.unsupported(0x08B1E864u, 0x74276E64u, "unknown not lowered yet"); return;
L_08B1E880:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    rt.unsupported(0x08B1E884u, 0x74276E64u, "unknown not lowered yet"); return;
L_08B1E89C:
    rt.unsupported(0x08B1E89Cu, 0x4F4D4552u, "unknown not lowered yet"); return;
L_08B1E8A8:
    if (ctx.gpr[25] == 0u) {
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<111u, 1u>(vfpu_d); }
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 69u, 0x08B29D2Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1E8B0;
L_08B1E8B0:
    ctx.execute_vfpu_vscl_ct<32u, 100u, 111u, 1u>();
    rt.unsupported(0x08B1E8B4u, 0x74276E73u, "unknown not lowered yet"); return;
L_08B1E930:
    rt.unsupported(0x08B1E934u, 0x089DED30u, "control flow in delay slot"); return;
L_08B1E938:
    rt.unsupported(0x08B1E93Cu, 0x089DCB6Cu, "control flow in delay slot"); return;
L_08B1E99C:
    rt.unsupported(0x08B1E9A0u, 0x089DD6D4u, "control flow in delay slot"); return;
L_08B1E9A4:
    rt.unsupported(0x08B1E9A8u, 0x089DD74Cu, "control flow in delay slot"); return;
L_08B1E9F8:
    rt.unsupported(0x08B1E9FCu, 0x089DED30u, "control flow in delay slot"); return;
L_08B1EA00:
    rt.unsupported(0x08B1EA04u, 0x089DE2C4u, "control flow in delay slot"); return;
L_08B1EA08:
    rt.unsupported(0x08B1EA0Cu, 0x089DE2CCu, "control flow in delay slot"); return;
L_08B1EA10:
    rt.unsupported(0x08B1EA14u, 0x089DE49Cu, "control flow in delay slot"); return;
L_08B1EA18:
    rt.unsupported(0x08B1EA1Cu, 0x089DE604u, "control flow in delay slot"); return;
L_08B1EA20:
    rt.unsupported(0x08B1EA24u, 0x089DE71Cu, "control flow in delay slot"); return;
L_08B1EA28:
    rt.unsupported(0x08B1EA2Cu, 0x089DE89Cu, "control flow in delay slot"); return;
L_08B1EA40:
    rt.unsupported(0x08B1EA44u, 0x089DEDF4u, "control flow in delay slot"); return;
L_08B1EA6C:
    rt.unsupported(0x08B1EA70u, 0x089DF10Cu, "control flow in delay slot"); return;
L_08B1EAB8:
    rt.unsupported(0x08B1EABCu, 0x089DF154u, "control flow in delay slot"); return;
L_08B1EB44:
    rt.unsupported(0x08B1EB48u, 0x089E0534u, "control flow in delay slot"); return;
L_08B1EBA0:
    rt.unsupported(0x08B1EBA4u, 0x089E0F70u, "control flow in delay slot"); return;
L_08B1EBA8:
    rt.unsupported(0x08B1EBACu, 0x089E1008u, "control flow in delay slot"); return;
L_08B1EBB8:
    rt.unsupported(0x08B1EBBCu, 0x089E11ECu, "control flow in delay slot"); return;
L_08B1EBD8:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    rt.unsupported(0x08B1EBDCu, 0x74276E64u, "unknown not lowered yet"); return;
L_08B1EBF0:
    rt.unsupported(0x08B1EBF0u, 0x7325202Du, "unknown not lowered yet"); return;
L_08B1EBF8:
    rt.unsupported(0x08B1EBF8u, 0x41455243u, "unknown not lowered yet"); return;
L_08B1EC04:
    rt.unsupported(0x08B1EC04u, 0x41435F4Du, "unknown not lowered yet"); return;
L_08B1EC94:
    rt.unsupported(0x08B1EC98u, 0x089E6060u, "control flow in delay slot"); return;
L_08B1ECB4:
    rt.unsupported(0x08B1ECB8u, 0x089E30D8u, "control flow in delay slot"); return;
L_08B1ECE0:
    rt.unsupported(0x08B1ECE4u, 0x089E3488u, "control flow in delay slot"); return;
L_08B1EDE4:
    rt.unsupported(0x08B1EDE8u, 0x089E8860u, "control flow in delay slot"); return;
L_08B1EDFC:
    rt.unsupported(0x08B1EE00u, 0x089E64F4u, "control flow in delay slot"); return;
L_08B1EFB4:
    rt.unsupported(0x08B1EFB8u, 0x089E7854u, "control flow in delay slot"); return;
L_08B1EFE0:
    rt.unsupported(0x08B1EFE4u, 0x089E7864u, "control flow in delay slot"); return;
L_08B1F060:
    rt.unsupported(0x08B1F064u, 0x089E7854u, "control flow in delay slot"); return;
L_08B1F0B0:
    rt.unsupported(0x08B1F0B0u, 0x006E6176u, "special? not lowered yet"); return;
L_08B1F0B4:
    rt.unsupported(0x08B1F0B4u, 0x69636976u, "unknown not lowered yet"); return;
L_08B1F0D4:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    rt.unsupported(0x08B1F0D8u, 0x74276E64u, "unknown not lowered yet"); return;
L_08B1F110:
    rt.unsupported(0x08B1F110u, 0x74756F66u, "unknown not lowered yet"); return;
L_08B1F118:
    if (ctx.gpr[1] != 0u) {
    rt.unsupported(0x08B1F11Cu, 0x45475241u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 326u, 0x08B32E54u>(ctx, &aot_mem); return;
    }
    goto L_08B1F120;
L_08B1F120:
    rt.unsupported(0x08B1F120u, 0x45562054u, "cop1? not lowered yet"); return;
L_08B1F140:
    ctx.lo = 0u;
    goto L_08B1F144;
L_08B1F144:
    if (ctx.gpr[1] != 0u) {
    rt.unsupported(0x08B1F148u, 0x45475241u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 327u, 0x08B32E80u>(ctx, &aot_mem); return;
    }
    goto L_08B1F14C;
L_08B1F14C:
    rt.unsupported(0x08B1F14Cu, 0x45562054u, "cop1? not lowered yet"); return;
L_08B1F174:
    rt.unsupported(0x08B1F174u, 0x41455243u, "unknown not lowered yet"); return;
L_08B1F184:
    rt.unsupported(0x08B1F184u, 0x45562059u, "cop1? not lowered yet"); return;
L_08B1F270:
    rt.unsupported(0x08B1F270u, 0x6E6F6369u, "vfpu3 not lowered yet"); return;
L_08B1F28C:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    rt.unsupported(0x08B1F290u, 0x72696420u, "unknown not lowered yet"); return;
L_08B1F2C8:
    rt.unsupported(0x08B1F2C8u, 0x74726170u, "unknown not lowered yet"); return;
L_08B1F2CC:
    ctx.execute_vfpu_vscl_ct<105u, 99u, 108u, 1u>();
    // nop
    rt.unsupported(0x08B1F2D4u, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B1F320:
    rt.unsupported(0x08B1F320u, 0x20746F6Eu, "unknown not lowered yet"); return;
L_08B1F334:
    // nop
    { const bool signed_ok = ctx.execute_signed_add(4u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B1F338u, 0x00002020u); return; } }
    // nop
    rt.unsupported(0x08B1F344u, 0x089FE2C0u, "control flow in delay slot"); return;
L_08B1F400:
    rt.unsupported(0x08B1F400u, 0x78656E75u, "unknown not lowered yet"); return;
L_08B1F420:
    rt.unsupported(0x08B1F420u, 0x20646162u, "unknown not lowered yet"); return;
L_08B1F434:
    rt.unsupported(0x08B1F434u, 0x20646162u, "unknown not lowered yet"); return;
L_08B1F460:
    rt.unsupported(0x08B1F460u, 0x20646162u, "unknown not lowered yet"); return;
L_08B1F480:
    rt.unsupported(0x08B1F480u, 0x20646162u, "unknown not lowered yet"); return;
L_08B1F490:
    rt.unsupported(0x08B1F490u, 0x61754C1Bu, "vfpu0 not lowered yet"); return;
L_08B1F498:
    rt.unsupported(0x08B1F498u, 0x20646162u, "unknown not lowered yet"); return;
L_08B1F4AC:
    rt.unsupported(0x08B1F4ACu, 0x74726976u, "unknown not lowered yet"); return;
L_08B1F4E8:
    // nop
    goto L_08B1F4EC;
L_08B1F4EC:
    rt.unsupported(0x08B1F4ECu, 0x74207325u, "unknown not lowered yet"); return;
L_08B1F524:
    rt.unsupported(0x08B1F524u, 0x74207325u, "unknown not lowered yet"); return;
L_08B1F55C:
    rt.unsupported(0x08B1F55Cu, 0x00746E69u, "special? not lowered yet"); return;
L_08B1F560:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 122u, 1u>();
    rt.unsupported(0x08B1F564u, 0x0000745Fu, "special? not lowered yet"); return;
L_08B1F568:
    rt.unsupported(0x08B1F568u, 0x74736E49u, "unknown not lowered yet"); return;
L_08B1F574:
    rt.memory().memory_barrier();
    goto L_08B1F578;
L_08B1F578:
    rt.unsupported(0x08B1F578u, 0x00000041u, "special? not lowered yet"); return;
L_08B1F57C:
    (void)(0u >> 1u);
    goto L_08B1F580;
L_08B1F580:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 1u));
    goto L_08B1F584;
L_08B1F584:
    rt.unsupported(0x08B1F584u, 0x626D756Eu, "vfpu0 not lowered yet"); return;
L_08B1F58C:
    rt.unsupported(0x08B1F58Cu, 0x6E6B6E75u, "vfpu3 not lowered yet"); return;
L_08B1F5A8:
    rt.unsupported(0x08B1F5A8u, 0x616E6962u, "vfpu0 not lowered yet"); return;
L_08B1F5B8:
    if (static_cast<std::int32_t>(ctx.gpr[10]) > 0) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 324u, 0x08B362B0u>(ctx, &aot_mem); return;
    }
    goto L_08B1F5C0;
L_08B1F5C0:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 1u));
    goto L_08B1F5C4;
L_08B1F5C4:
    rt.unsupported(0x08B1F5C4u, 0x6E69616Du, "vfpu3 not lowered yet"); return;
L_08B1F5CC:
    rt.unsupported(0x08B1F5CCu, 0x0061754Cu, "syscall not lowered yet"); return;
L_08B1F5D0:
    // nop
    goto L_08B1F5D4;
L_08B1F5D4:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 4u>();
    // nop
    goto L_08B1F5DC;
L_08B1F5DC:
    rt.unsupported(0x08B1F5DCu, 0x6174283Du, "vfpu0 not lowered yet"); return;
L_08B1F5EC:
    rt.unsupported(0x08B1F5ECu, 0x626F6C67u, "vfpu0 not lowered yet"); return;
L_08B1F5F4:
    rt.unsupported(0x08B1F5F4u, 0x756C6176u, "unknown not lowered yet"); return;
L_08B1F620:
    rt.unsupported(0x08B1F620u, 0x0000003Fu, "special? not lowered yet"); return;
L_08B1F624:
    rt.unsupported(0x08B1F624u, 0x61636F6Cu, "vfpu0 not lowered yet"); return;
L_08B1F62C:
    ctx.execute_vfpu_vcmp_ct<105u, 101u, 1u, 6u>();
    (void)(0u & 0u);
    goto L_08B1F634;
L_08B1F634:
    rt.unsupported(0x08B1F634u, 0x6874656Du, "unknown not lowered yet"); return;
L_08B1F63C:
    ctx.execute_vfpu_vscl_ct<97u, 116u, 116u, 1u>();
    rt.unsupported(0x08B1F640u, 0x2074706Du, "unknown not lowered yet"); return;
L_08B1F660:
    ctx.execute_vfpu_vscl_ct<97u, 116u, 116u, 1u>();
    rt.unsupported(0x08B1F664u, 0x2074706Du, "unknown not lowered yet"); return;
L_08B1F67C:
    rt.unsupported(0x08B1F67Cu, 0x636E6F63u, "vfpu0 not lowered yet"); return;
L_08B1F688:
    ctx.execute_vfpu_vhdp(112u, 101u, 114u, 1u);
    rt.unsupported(0x08B1F68Cu, 0x206D726Fu, "unknown not lowered yet"); return;
L_08B1F6A0:
    ctx.execute_vfpu_vscl_ct<97u, 116u, 116u, 1u>();
    rt.unsupported(0x08B1F6A4u, 0x2074706Du, "unknown not lowered yet"); return;
L_08B1F6C4:
    ctx.execute_vfpu_vscl_ct<97u, 116u, 116u, 1u>();
    rt.unsupported(0x08B1F6C8u, 0x2074706Du, "unknown not lowered yet"); return;
L_08B1F6E4:
    ctx.gpr[26] = (ctx.gpr[9] + static_cast<std::uint32_t>(29477));
    goto L_08B1F6E8;
L_08B1F6E8:
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(14948));
    rt.unsupported(0x08B1F6ECu, 0x00000073u, "special? not lowered yet"); return;
L_08B1F6F8:
    rt.unsupported(0x08B1F6FCu, 0x08A0107Cu, "control flow in delay slot"); return;
L_08B1F700:
    rt.unsupported(0x08B1F704u, 0x08A0107Cu, "control flow in delay slot"); return;
L_08B1F734:
    rt.unsupported(0x08B1F738u, 0x08A0107Cu, "control flow in delay slot"); return;
L_08B1F778:
    // nop
    ctx.pc = 0x02804000u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B1F838:
    ctx.execute_vfpu_compare3(95u, 95u, 116u, 1u, 6u);
    rt.unsupported(0x08B1F83Cu, 0x69727473u, "unknown not lowered yet"); return;
L_08B1F844:
    ctx.execute_vfpu_vscl_ct<78u, 97u, 109u, 1u>();
    // nop
    goto L_08B1F84C;
L_08B1F84C:
    rt.unsupported(0x08B1F84Cu, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1F858:
    ctx.execute_vfpu_vminmax(84u, 101u, 97u, 1u, false);
    ctx.execute_vfpu_vscl_ct<78u, 97u, 109u, 1u>();
    // nop
    goto L_08B1F864;
L_08B1F864:
    ctx.execute_vfpu_vminmax(84u, 101u, 97u, 1u, false);
    jump_target = 0u;
    ctx.gpr[12] = (0x08B1F870u);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 5u));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B1F870u) goto L_08B1F870;
    return;
L_08B1F86C:
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 5u));
    goto L_08B1F870;
L_08B1F870:
    ctx.execute_vfpu_compare3(67u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B1F874u, 0x00007275u, "special? not lowered yet"); return;
L_08B1F878:
    ctx.execute_vfpu_compare3(67u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B1F87Cu, 0x69577275u, "unknown not lowered yet"); return;
L_08B1F888:
    ctx.execute_vfpu_vminmax(84u, 101u, 97u, 1u, false);
    ctx.execute_vfpu_compare3(67u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B1F890u, 0x00007275u, "special? not lowered yet"); return;
L_08B1F894:
    ctx.execute_vfpu_compare3(73u, 115u, 67u, 1u, 6u);
    rt.unsupported(0x08B1F898u, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08B1F8A0:
    rt.unsupported(0x08B1F8A0u, 0x69736F50u, "unknown not lowered yet"); return;
L_08B1F8AC:
    rt.unsupported(0x08B1F8ACu, 0x72617453u, "unknown not lowered yet"); return;
L_08B1F8B8:
    rt.unsupported(0x08B1F8B8u, 0x7466654Cu, "unknown not lowered yet"); return;
L_08B1F8C4:
    rt.unsupported(0x08B1F8C4u, 0x68676952u, "unknown not lowered yet"); return;
L_08B1F8D0:
    ctx.execute_vfpu_compare3(85u, 112u, 68u, 1u, 6u);
    rt.unsupported(0x08B1F8D4u, 0x00006E77u, "special? not lowered yet"); return;
L_08B1F8D8:
    rt.unsupported(0x08B1F8D8u, 0x6E776F44u, "vfpu3 not lowered yet"); return;
L_08B1F8E4:
    rt.unsupported(0x08B1F8E4u, 0x736F7243u, "unknown not lowered yet"); return;
L_08B1F8F0:
    rt.unsupported(0x08B1F8F0u, 0x63726943u, "vfpu0 not lowered yet"); return;
L_08B1F8FC:
    rt.unsupported(0x08B1F8FCu, 0x61697254u, "vfpu0 not lowered yet"); return;
L_08B1F90C:
    ctx.execute_vfpu_vscl_ct<76u, 97u, 116u, 1u>();
    rt.unsupported(0x08B1F910u, 0x0079636Eu, "special? not lowered yet"); return;
L_08B1F914:
    ctx.execute_vfpu_vcmp_ct<115u, 80u, 1u, 9u>();
    rt.unsupported(0x08B1F918u, 0x6E697961u, "vfpu3 not lowered yet"); return;
L_08B1F920:
    rt.unsupported(0x08B1F920u, 0x70736552u, "unknown not lowered yet"); return;
L_08B1F928:
    rt.unsupported(0x08B1F928u, 0x74696157u, "unknown not lowered yet"); return;
L_08B1F934:
    // nop
    goto L_08B1F938;
L_08B1F938:
    rt.unsupported(0x08B1F938u, 0x74696157u, "unknown not lowered yet"); return;
L_08B1F944:
    rt.unsupported(0x08B1F944u, 0x43646E41u, "unknown not lowered yet"); return;
L_08B1F954:
    if (ctx.gpr[3] == ctx.gpr[20]) {
    rt.unsupported(0x08B1F958u, 0x7469736Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 52u, 0x08B38EA4u>(ctx, &aot_mem); return;
    }
    goto L_08B1F95C;
L_08B1F95C:
    rt.unsupported(0x08B1F95Cu, 0x006E6F69u, "special? not lowered yet"); return;
L_08B1F960:
    ctx.gpr[20] = (ctx.vfpu_scalar_bits_ct<83u>());
    rt.unsupported(0x08B1F964u, 0x69646165u, "unknown not lowered yet"); return;
L_08B1F96C:
    if (ctx.gpr[19] == ctx.gpr[20]) {
    rt.unsupported(0x08B1F970u, 0x72616461u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 56u, 0x08B38EBCu>(ctx, &aot_mem); return;
    }
    goto L_08B1F974;
L_08B1F974:
    rt.unsupported(0x08B1F974u, 0x70696C42u, "unknown not lowered yet"); return;
L_08B1F984:
    if (ctx.gpr[19] == ctx.gpr[20]) {
    rt.unsupported(0x08B1F988u, 0x72616461u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 61u, 0x08B38ED4u>(ctx, &aot_mem); return;
    }
    goto L_08B1F98C;
L_08B1F98C:
    rt.unsupported(0x08B1F98Cu, 0x70696C42u, "unknown not lowered yet"); return;
L_08B1F998:
    if (ctx.gpr[19] == ctx.gpr[20]) {
    rt.unsupported(0x08B1F99Cu, 0x72616461u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 64u, 0x08B38EE8u>(ctx, &aot_mem); return;
    }
    goto L_08B1F9A0;
L_08B1F9A0:
    rt.unsupported(0x08B1F9A0u, 0x70696C42u, "unknown not lowered yet"); return;
L_08B1F9B0:
    // nop
    goto L_08B1F9B4;
L_08B1F9B4:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    ctx.gpr[13] = (ctx.gpr[3] + ctx.gpr[11]);
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 212u, 0x08B3B2DCu>(ctx, &aot_mem); return;
    }
    goto L_08B1F9BC;
L_08B1F9BC:
    ctx.gpr[20] = (ctx.vfpu_scalar_bits_ct<83u>());
    rt.unsupported(0x08B1F9C0u, 0x746C6165u, "unknown not lowered yet"); return;
L_08B1F9C8:
    ctx.execute_vfpu_vscl_ct<73u, 115u, 68u, 1u>();
    ctx.gpr[12] = (0u + 0u);
    goto L_08B1F9D0;
L_08B1F9D0:
    if (ctx.gpr[3] == ctx.gpr[12]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 204u, 0x08B3AAD8u>(ctx, &aot_mem); return;
    }
    goto L_08B1F9D8;
L_08B1F9D8:
    rt.unsupported(0x08B1F9D8u, 0x00007372u, "special? not lowered yet"); return;
L_08B1F9DC:
    if (ctx.gpr[3] == ctx.gpr[12]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 205u, 0x08B3AAE4u>(ctx, &aot_mem); return;
    }
    goto L_08B1F9E4;
L_08B1F9E4:
    rt.unsupported(0x08B1F9E4u, 0x78457372u, "unknown not lowered yet"); return;
L_08B1F9F0:
    rt.unsupported(0x08B1F9F0u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08B1FA00:
    rt.unsupported(0x08B1FA00u, 0x70726157u, "unknown not lowered yet"); return;
L_08B1FA14:
    rt.unsupported(0x08B1FA14u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FA20:
    rt.unsupported(0x08B1FA20u, 0x69746341u, "unknown not lowered yet"); return;
L_08B1FA30:
    rt.unsupported(0x08B1FA30u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FA38:
    rt.unsupported(0x08B1FA38u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FA44:
    rt.unsupported(0x08B1FA44u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FA50:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    ctx.execute_vfpu_compare3(67u, 111u, 108u, 1u, 6u);
    goto L_08B1FA58;
L_08B1FA58:
    rt.unsupported(0x08B1FA58u, 0x00007275u, "special? not lowered yet"); return;
L_08B1FA5C:
    rt.unsupported(0x08B1FA5Cu, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FA6C:
    rt.unsupported(0x08B1FA6Cu, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FA80:
    rt.unsupported(0x08B1FA80u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FA88:
    rt.unsupported(0x08B1FA88u, 0x69746973u, "unknown not lowered yet"); return;
L_08B1FA90:
    ctx.execute_vfpu_vcmp_ct<115u, 80u, 1u, 9u>();
    rt.unsupported(0x08B1FA94u, 0x72657961u, "unknown not lowered yet"); return;
L_08B1FA98:
    rt.unsupported(0x08B1FA98u, 0x73657250u, "unknown not lowered yet"); return;
L_08B1FAA8:
    ctx.execute_vfpu_vcmp_ct<115u, 80u, 1u, 9u>();
    rt.unsupported(0x08B1FAACu, 0x72657961u, "unknown not lowered yet"); return;
L_08B1FAC0:
    rt.unsupported(0x08B1FAC0u, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08B1FAD0:
    rt.unsupported(0x08B1FAD0u, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08B1FAE4:
    rt.unsupported(0x08B1FAE4u, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08B1FAF8:
    rt.unsupported(0x08B1FAF8u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FB08:
    rt.unsupported(0x08B1FB08u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FB18:
    // nop
    goto L_08B1FB1C;
L_08B1FB1C:
    rt.unsupported(0x08B1FB1Cu, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FB30:
    rt.unsupported(0x08B1FB30u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FB40:
    rt.unsupported(0x08B1FB40u, 0x61736944u, "vfpu0 not lowered yet"); return;
L_08B1FB4C:
    rt.unsupported(0x08B1FB4Cu, 0x00000072u, "special? not lowered yet"); return;
L_08B1FB50:
    rt.unsupported(0x08B1FB50u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FB58:
    rt.unsupported(0x08B1FB58u, 0x68746C61u, "unknown not lowered yet"); return;
L_08B1FB60:
    ctx.execute_vfpu_vminmax(84u, 101u, 97u, 1u, false);
    rt.unsupported(0x08B1FB64u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FB6C:
    if (ctx.gpr[3] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 78u, 0x08B390BCu>(ctx, &aot_mem); return;
    }
    goto L_08B1FB74;
L_08B1FB74:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<82u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<114u, 66u, 1u, 1u>();
    rt.unsupported(0x08B1FB7Cu, 0x68537069u, "unknown not lowered yet"); return;
L_08B1FB80:
    if (ctx.gpr[19] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<97u, 110u, 103u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 3u, 0x08B3C540u>(ctx, &aot_mem); return;
    }
    goto L_08B1FB88;
L_08B1FB88:
    // nop
    goto L_08B1FB8C;
L_08B1FB8C:
    if (ctx.gpr[3] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 79u, 0x08B390DCu>(ctx, &aot_mem); return;
    }
    goto L_08B1FB94;
L_08B1FB94:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<82u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1FB98u, 0x63497261u, "vfpu0 not lowered yet"); return;
L_08B1FBA0:
    if (ctx.gpr[3] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 81u, 0x08B390F0u>(ctx, &aot_mem); return;
    }
    goto L_08B1FBA8;
L_08B1FBA8:
    rt.unsupported(0x08B1FBA8u, 0x696C4272u, "unknown not lowered yet"); return;
L_08B1FBBC:
    rt.unsupported(0x08B1FBBCu, 0x4D746553u, "unknown not lowered yet"); return;
L_08B1FBD8:
    rt.unsupported(0x08B1FBD8u, 0x61706552u, "vfpu0 not lowered yet"); return;
L_08B1FBF0:
    if (ctx.gpr[3] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 83u, 0x08B39140u>(ctx, &aot_mem); return;
    }
    goto L_08B1FBF8;
L_08B1FBF8:
    ctx.execute_vfpu_vscl_ct<114u, 115u, 86u, 1u>();
    ctx.execute_vfpu_vcmp_ct<105u, 99u, 1u, 8u>();
    rt.unsupported(0x08B1FC00u, 0x466E4F65u, "cop1? not lowered yet"); return;
L_08B1FC08:
    rt.unsupported(0x08B1FC08u, 0x73727542u, "unknown not lowered yet"); return;
L_08B1FC18:
    if (ctx.gpr[19] != ctx.gpr[19]) {
    rt.unsupported(0x08B1FC1Cu, 0x63696865u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 4u, 0x08B3C5B0u>(ctx, &aot_mem); return;
    }
    goto L_08B1FC20;
L_08B1FC20:
    ctx.gpr[12] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B1FC24;
L_08B1FC24:
    ctx.execute_vfpu_compare3(73u, 115u, 76u, 1u, 6u);
    if (ctx.gpr[3] == ctx.gpr[12]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 5u, 0x08B381B8u>(ctx, &aot_mem); return;
    }
    goto L_08B1FC30;
L_08B1FC30:
    if (ctx.gpr[19] != ctx.gpr[14]) {
    rt.unsupported(0x08B1FC34u, 0x63696865u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 283u, 0x08B321FCu>(ctx, &aot_mem); return;
    }
    goto L_08B1FC38;
L_08B1FC38:
    ctx.gpr[12] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B1FC3C;
L_08B1FC3C:
    rt.unsupported(0x08B1FC3Cu, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08B1FC58:
    ctx.execute_vfpu_vscl_ct<71u, 105u, 118u, 1u>();
    rt.unsupported(0x08B1FC5Cu, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FC60:
    rt.unsupported(0x08B1FC60u, 0x61487265u, "vfpu0 not lowered yet"); return;
L_08B1FC68:
    ctx.execute_vfpu_compare3(110u, 103u, 80u, 1u, 6u);
    rt.unsupported(0x08B1FC6Cu, 0x75726577u, "unknown not lowered yet"); return;
L_08B1FC74:
    ctx.execute_vfpu_vscl_ct<71u, 105u, 118u, 1u>();
    rt.unsupported(0x08B1FC78u, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08B1FC80:
    rt.unsupported(0x08B1FC80u, 0x4E726579u, "unknown not lowered yet"); return;
L_08B1FC88:
    ctx.execute_vfpu_compare3(97u, 114u, 70u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<114u, 69u, 110u, 1u>();
    goto L_08B1FC90;
L_08B1FC90:
    ctx.gpr[15] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B1FC94;
L_08B1FC94:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    ctx.execute_vfpu_compare3(118u, 101u, 76u, 1u, 6u);
    if (ctx.gpr[3] == ctx.gpr[12]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 6u, 0x08B3822Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1FCA4;
L_08B1FCA4:
    if (ctx.gpr[19] == ctx.gpr[15]) {
    rt.unsupported(0x08B1FCA8u, 0x72616461u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 373u, 0x08B33670u>(ctx, &aot_mem); return;
    }
    goto L_08B1FCAC;
L_08B1FCAC:
    rt.unsupported(0x08B1FCACu, 0x45726F46u, "cop1? not lowered yet"); return;
L_08B1FCB8:
    rt.unsupported(0x08B1FCB8u, 0x4C746547u, "unknown not lowered yet"); return;
L_08B1FCCC:
    ctx.gpr[12] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B1FCD0;
L_08B1FCD0:
    rt.unsupported(0x08B1FCD0u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B1FCDC:
    rt.unsupported(0x08B1FCDCu, 0x6E696F50u, "vfpu3 not lowered yet"); return;
L_08B1FCE4:
    ctx.execute_vfpu_compare3(73u, 115u, 76u, 1u, 6u);
    if (ctx.gpr[3] == ctx.gpr[12]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 7u, 0x08B38278u>(ctx, &aot_mem); return;
    }
    goto L_08B1FCF0;
L_08B1FCF0:
    rt.unsupported(0x08B1FCF0u, 0x746E4572u, "unknown not lowered yet"); return;
L_08B1FD04:
    if (ctx.gpr[3] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 94u, 0x08B39254u>(ctx, &aot_mem); return;
    }
    goto L_08B1FD0C;
L_08B1FD0C:
    rt.unsupported(0x08B1FD0Cu, 0x61654872u, "vfpu0 not lowered yet"); return;
L_08B1FD14:
    rt.unsupported(0x08B1FD14u, 0x61656C43u, "vfpu0 not lowered yet"); return;
L_08B1FD2C:
    rt.unsupported(0x08B1FD2Cu, 0x72417349u, "unknown not lowered yet"); return;
L_08B1FD44:
    ctx.execute_vfpu_vcmp_ct<115u, 80u, 1u, 9u>();
    rt.unsupported(0x08B1FD48u, 0x72657961u, "unknown not lowered yet"); return;
L_08B1FD54:
    rt.unsupported(0x08B1FD54u, 0x67676F54u, "vfpu1 not lowered yet"); return;
L_08B1FD64:
    rt.unsupported(0x08B1FD64u, 0x6E6F4372u, "vfpu3 not lowered yet"); return;
L_08B1FD70:
    ctx.execute_vfpu_compare3(73u, 115u, 76u, 1u, 6u);
    if (ctx.gpr[3] == ctx.gpr[12]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 11u, 0x08B38304u>(ctx, &aot_mem); return;
    }
    goto L_08B1FD7C;
L_08B1FD7C:
    ctx.execute_vfpu_compare3(114u, 68u, 114u, 1u, 6u);
    rt.unsupported(0x08B1FD80u, 0x6E696E77u, "vfpu3 not lowered yet"); return;
L_08B1FD88:
    if (ctx.gpr[3] == ctx.gpr[16]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 9u, 0x08B382C0u>(ctx, &aot_mem); return;
    }
    goto L_08B1FD90;
L_08B1FD90:
    ctx.execute_vfpu_vcmp_ct<67u, 111u, 1u, 2u>();
    if (ctx.gpr[3] != ctx.gpr[18]) {
    rt.unsupported(0x08B1FD98u, 0x7261436Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 16u, 0x08B3D354u>(ctx, &aot_mem); return;
    }
    goto L_08B1FD9C;
L_08B1FD9C:
    ctx.execute_vfpu_compare3(67u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B1FDA0u, 0x00007275u, "special? not lowered yet"); return;
L_08B1FDAC:
    rt.unsupported(0x08B1FDACu, 0x2061754Cu, "unknown not lowered yet"); return;
L_08B1FDC4:
    rt.unsupported(0x08B1FDC4u, 0x74736F74u, "unknown not lowered yet"); return;
L_08B1FDD0:
    rt.unsupported(0x08B1FDD0u, 0x69797254u, "unknown not lowered yet"); return;
L_08B1FE10:
    // nop
    goto L_08B1FE14;
L_08B1FE14:
    rt.unsupported(0x08B1FE14u, 0x70726157u, "unknown not lowered yet"); return;
L_08B1FE34:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B1FE44u, 0x7244202Au, "unknown not lowered yet"); return;
L_08B1FE50:
    rt.unsupported(0x08B1FE50u, 0x70736552u, "unknown not lowered yet"); return;
L_08B1FE78:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1FE7Cu, 0x20676E69u, "unknown not lowered yet"); return;
L_08B1FE98:
    rt.unsupported(0x08B1FE98u, 0x6E696F44u, "vfpu3 not lowered yet"); return;
L_08B1FEB4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1FEB8u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B1FED4:
    // nop
    ctx.pc = 0x08B8B8B8u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B1FEDC:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    rt.unsupported(0x08B1FEE0u, 0x4F435245u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 343u, 0x08B33020u>(ctx, &aot_mem); return;
    }
    goto L_08B1FEE4;
L_08B1FEE4:
    rt.unsupported(0x08B1FEE4u, 0x4F52544Eu, "unknown not lowered yet"); return;
L_08B1FEEC:
    rt.unsupported(0x08B1FEF0u, 0x5449534Fu, "control flow in delay slot"); return;
L_08B1FEF4:
    jump_target = ctx.gpr[2];
    ctx.gpr[9] = (0x08B1FEFCu);
    rt.unsupported(0x08B1FEF8u, 0x48544553u, "cop2/vfpu not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B1FEFCu) goto L_08B1FEFC;
    return;
L_08B1FEF8:
    rt.unsupported(0x08B1FEF8u, 0x48544553u, "cop2/vfpu not lowered yet"); return;
L_08B1FEFC:
    rt.unsupported(0x08B1FEFCu, 0x49444145u, "cop2/vfpu not lowered yet"); return;
L_08B1FF0C:
    rt.unsupported(0x08B1FF10u, 0x08A0559Cu, "control flow in delay slot"); return;
L_08B1FF14:
    rt.unsupported(0x08B1FF18u, 0x08A055ACu, "control flow in delay slot"); return;
L_08B1FF1C:
    rt.unsupported(0x08B1FF20u, 0x08A055BCu, "control flow in delay slot"); return;
L_08B1FF24:
    if (0u == 0u) (void)(0u);
    ctx.pc = 0x02815710u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B1FF2C:
    rt.unsupported(0x08B1FF2Cu, 0x00000A2Eu, "special? not lowered yet"); return;
L_08B1FF34:
    // nop
    goto L_08B1FF38;
L_08B1FF38:
    rt.unsupported(0x08B1FF38u, 0x73646550u, "unknown not lowered yet"); return;
L_08B1FF3C:
    // nop
    goto L_08B1FF40;
L_08B1FF40:
    rt.unsupported(0x08B1FF40u, 0x69686556u, "unknown not lowered yet"); return;
L_08B1FF44:
    rt.unsupported(0x08B1FF44u, 0x73656C63u, "unknown not lowered yet"); return;
L_08B1FF4C:
    ctx.execute_vfpu_vscl_ct<79u, 98u, 106u, 1u>();
    ctx.gpr[14] = (ctx.gpr[3] - ctx.gpr[19]);
    goto L_08B1FF54;
L_08B1FF54:
    rt.unsupported(0x08B1FF54u, 0x69647541u, "unknown not lowered yet"); return;
L_08B1FF90:
    ctx.execute_vfpu_vcmp_ct<111u, 111u, 1u, 0u>();
    rt.unsupported(0x08B1FF94u, 0x61682073u, "vfpu0 not lowered yet"); return;
L_08B1FFB0:
    rt.unsupported(0x08B1FFB0u, 0x72617473u, "unknown not lowered yet"); return;
L_08B1FFBC:
    rt.unsupported(0x08B1FFBCu, 0x6B636F6Cu, "unknown not lowered yet"); return;
L_08B1FFC8:
    rt.unsupported(0x08B1FFC8u, 0x70736964u, "unknown not lowered yet"); return;
L_08B1FFD4:
    ctx.execute_vfpu_vminmax(95u, 115u, 101u, 1u, false);
    (void)(0u + 0u);
    goto L_08B1FFDC;
L_08B1FFDC:
    ctx.execute_vfpu_vminmax(102u, 114u, 97u, 1u, false);
    ctx.execute_vfpu_compare3(101u, 32u, 99u, 1u, 6u);
    rt.unsupported(0x08B1FFE4u, 0x20746E75u, "unknown not lowered yet"); return;
L_08B1FFF0:
    ctx.execute_vfpu_vminmax(102u, 114u, 97u, 1u, false);
    ctx.execute_vfpu_compare3(101u, 32u, 108u, 1u, 6u);
    rt.unsupported(0x08B1FFF8u, 0x20207373u, "unknown not lowered yet"); return;
}

void recomp_unit_0198(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0198_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_198(Runtime &runtime) {
    runtime.register_generated_unit(198u, 0x08B1C000u, 16384u, &recomp_unit_0198, &recomp_unit_0198_entry);
    runtime.register_function(0x08B1C128u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C144u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C14Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C158u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C164u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C16Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C178u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C1B4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C1E0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C1E8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C1F0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C200u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C230u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C23Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C248u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C25Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C274u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C27Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C288u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C29Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C2A4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C2B0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C2BCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C2CCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C2D8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C2F4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C300u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C31Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C320u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C33Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C348u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C35Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C364u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C388u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C3A0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C3ACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C3C4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C3D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C3F8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C420u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C448u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C464u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C46Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C488u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C494u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C4A4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C4ACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C4C8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C4DCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C4E8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C4ECu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C4F0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C4F8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C500u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C508u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C510u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C524u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C52Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C530u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C534u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C53Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C540u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C544u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C548u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C570u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C598u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C5C0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C5E4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C614u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C638u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C640u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C654u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C668u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C678u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C68Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C69Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C6A8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C6E4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C6F0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C710u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C734u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C73Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C74Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C758u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C768u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C774u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C780u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C788u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C790u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C794u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C7A0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C7ACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C7C0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C7D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C7D8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C7E4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C7ECu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C7F4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C7FCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C808u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C810u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C818u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C834u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C838u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C840u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C848u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C854u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C85Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C86Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C878u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C884u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C890u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C89Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C8A8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C8B0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C8BCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C8C4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C8D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C8DCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C8E8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C8F0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C8FCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C908u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C914u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C91Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C924u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C934u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C93Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C948u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C950u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C95Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C964u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C970u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C978u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C980u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C984u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C990u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C9A0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C9ACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C9BCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C9C8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C9D4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C9E0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C9ECu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C9F0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C9FCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA04u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA10u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA1Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA24u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA30u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA3Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA44u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA4Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA58u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA60u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA6Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA74u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA7Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA84u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA8Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA98u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CAA0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CAB0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CAB8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CAC0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CAC4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CACCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CADCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CAE4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CAF0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CAF8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB04u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB0Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB18u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB20u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB28u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB2Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB34u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB3Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB44u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB50u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB58u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB60u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB64u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB6Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB74u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB7Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB84u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB8Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB90u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB98u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CBA4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CBACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CBB4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CBBCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CBCCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CBD4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CBE0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CBE8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CBF0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CBF4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CBFCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC04u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC10u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC18u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC20u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC2Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC34u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC3Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC48u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC50u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC54u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC58u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC5Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC64u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC6Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC7Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC88u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC90u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC98u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC9Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CCA0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CCACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CCB4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CCC0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CCCCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CCD0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CCD8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CCE4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CCF0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CCF8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD00u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD08u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD14u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD1Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD24u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD2Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD34u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD38u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD40u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD50u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD58u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD5Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD64u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD80u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD88u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD94u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD9Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CDA4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CDB4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CDBCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CDC4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CDCCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CDD4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CDE0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CDE8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CDF8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE00u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE04u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE0Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE28u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE30u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE48u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE50u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE5Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE64u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE6Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE78u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE80u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE88u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE90u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CEA0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CEA8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CEC4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CECCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CED8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CEE0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CEE8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CEF8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CF00u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CF08u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CF24u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CF2Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CF34u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CF3Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CF48u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CF50u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CF6Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CF74u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CF8Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CF94u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CFACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CFB4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CFC4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CFD0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CFD8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CFF4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CFFCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D00Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D018u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D020u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D030u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D03Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D044u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D050u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D060u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D068u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D074u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D080u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D084u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D08Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D098u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D0A4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D0ACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D0B4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D0BCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D0C8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D0D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D0D8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D0E0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D0E8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D0ECu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D0F4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D104u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D10Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D110u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D118u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D134u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D13Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D148u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D150u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D158u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D168u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D170u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D178u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D180u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D188u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D194u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D19Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D1ACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D1B4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D1B8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D1C0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D1D8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D1E0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D1FCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D204u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D220u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D228u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D244u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D24Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D264u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D26Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D284u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D28Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D29Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D2A8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D2B0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D2BCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D2C4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D2CCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D2D8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D2E0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D2E8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D2F0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D300u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D308u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D314u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D31Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D324u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D334u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D33Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D344u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D360u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D368u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D370u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D378u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D384u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D38Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D39Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D3A8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D3B0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D3CCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D3D4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D3E0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D3E8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D3F0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D3FCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D404u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D40Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D414u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D428u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D43Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D450u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D464u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D478u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D480u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D48Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D4A0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D4B4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D4C8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D4DCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D4F0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D504u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D518u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D52Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D540u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D54Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D5ECu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D5F4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D5F8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D600u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D60Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D618u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D630u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D638u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D640u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D6B0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D6B4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D6BCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D6C0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D6C4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D6C8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D6D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D6DCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D6F0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D70Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D714u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D718u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D71Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D724u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D72Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D734u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D73Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D744u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D74Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D754u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D75Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D764u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D76Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D774u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D77Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D784u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D78Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D794u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D798u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D7A0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D7A8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D7B0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D7B8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D7C0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D7C8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D7D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D7D8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D7E0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D7E8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D7F0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D7F8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D800u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D808u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D810u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D824u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D82Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D834u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D868u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D884u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D8B4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D8F0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D900u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D918u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D920u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D92Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D93Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D944u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D94Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D954u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D95Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D968u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D970u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D980u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D988u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D990u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D99Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D9A8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D9B0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D9E4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D9ECu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D9FCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DA20u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DA3Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DA54u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DA84u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DA9Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DACCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DAD8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DAFCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DB28u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DB48u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DB70u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DB84u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DBA0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DBBCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DBD8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DC24u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DC30u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DC5Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DC74u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DC78u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DC84u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DCBCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DCC8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DCE0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DCF0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DD20u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DD6Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DD74u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DD98u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DDB4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DDD4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DDE8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DE04u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DE1Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DE34u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DE74u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DE7Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DE8Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DE94u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DEA0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DEACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DEC0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DECCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DED4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DEDCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DEECu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DEFCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DF04u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DF14u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DF20u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DF38u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DF50u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DF68u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DF88u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DFC8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DFD8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E004u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E008u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E014u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E018u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E028u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E034u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E040u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E044u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E05Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E06Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E084u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E0A0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E0A8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E0D4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E0DCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E0F8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E10Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E124u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E134u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E154u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E160u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E16Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E17Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E188u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E1A0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E214u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E374u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E394u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E418u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E4E0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E4ECu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E504u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E50Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E538u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E554u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E55Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E598u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E5B4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E5BCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E5D8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E604u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E644u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E65Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E67Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E698u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E6A8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E6CCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E6FCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E734u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E738u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E764u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E76Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E770u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E774u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E77Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E790u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E798u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E79Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E7B8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E7C0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E7C8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E7D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E7E0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E820u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E828u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E830u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E860u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E880u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E89Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E8A8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E8B0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E930u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E938u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E99Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E9A4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E9F8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EA00u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EA08u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EA10u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EA18u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EA20u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EA28u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EA40u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EA6Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EAB8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EB44u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EBA0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EBA8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EBB8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EBD8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EBF0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EBF8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EC04u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EC94u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1ECB4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1ECE0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EDE4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EDFCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EFB4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EFE0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F060u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F0B0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F0B4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F0D4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F110u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F118u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F120u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F140u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F144u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F14Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F174u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F184u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F270u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F28Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F2C8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F2CCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F320u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F334u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F400u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F420u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F434u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F460u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F480u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F490u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F498u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F4ACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F4E8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F4ECu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F524u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F55Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F560u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F568u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F574u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F578u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F57Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F580u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F584u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F58Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F5A8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F5B8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F5C0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F5C4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F5CCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F5D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F5D4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F5DCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F5ECu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F5F4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F620u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F624u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F62Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F634u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F63Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F660u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F67Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F688u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F6A0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F6C4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F6E4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F6E8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F6F8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F700u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F734u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F778u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F838u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F844u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F84Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F858u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F864u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F86Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F870u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F878u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F888u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F894u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F8A0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F8ACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F8B8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F8C4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F8D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F8D8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F8E4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F8F0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F8FCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F90Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F914u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F920u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F928u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F934u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F938u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F944u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F954u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F95Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F960u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F96Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F974u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F984u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F98Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F998u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F9A0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F9B0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F9B4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F9BCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F9C8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F9D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F9D8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F9DCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F9E4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F9F0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA00u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA14u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA20u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA30u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA38u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA44u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA50u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA58u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA5Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA6Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA80u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA88u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA90u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA98u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FAA8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FAC0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FAD0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FAE4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FAF8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB08u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB18u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB1Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB30u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB40u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB4Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB50u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB58u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB60u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB6Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB74u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB80u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB88u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB8Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB94u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FBA0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FBA8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FBBCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FBD8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FBF0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FBF8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC08u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC18u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC20u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC24u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC30u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC38u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC3Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC58u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC60u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC68u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC74u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC80u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC88u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC90u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC94u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FCA4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FCACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FCB8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FCCCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FCD0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FCDCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FCE4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FCF0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FD04u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FD0Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FD14u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FD2Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FD44u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FD54u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FD64u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FD70u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FD7Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FD88u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FD90u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FD9Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FDACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FDC4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FDD0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FE10u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FE14u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FE34u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FE50u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FE78u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FE98u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FEB4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FED4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FEDCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FEE4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FEECu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FEF4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FEF8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FEFCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FF0Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FF14u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FF1Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FF24u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FF2Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FF34u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FF38u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FF3Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FF40u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FF44u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FF4Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FF54u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FF90u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FFB0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FFBCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FFC8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FFD4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FFDCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FFF0u, &recomp_unit_0198, "recomp_unit_0198");
}
} // namespace psprecomp
