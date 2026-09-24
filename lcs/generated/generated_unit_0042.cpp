#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0042[4092] = {
    1, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 4, 5, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 10, 0, 11, 0,
    0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0,
    19, 0, 20, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 25, 0, 0, 0, 26, 0, 0,
    27, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 34, 0, 0,
    0, 35, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0,
    0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 51, 0, 0, 52, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 60, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 66, 0, 0, 67, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 70, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 75,
    0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 82, 0, 83, 0,
    0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0,
    91, 0, 92, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 0,
    99, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 106, 0, 0,
    0, 107, 0, 0, 108, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0,
    0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 123, 0, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 132, 0, 0, 133, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 138, 0, 0, 139, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 142, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 147,
    0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 155, 0,
    0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 160, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0,
    163, 0, 164, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 169, 0, 0, 0, 170, 0, 0,
    171, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 0,
    0, 179, 0, 0, 180, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0,
    0, 187, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 203, 0, 204, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 210, 0, 0, 211, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 214, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 219,
    0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 226, 0, 227, 0,
    0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 232, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0,
    235, 0, 236, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 241, 0, 0, 0, 242, 0, 0,
    243, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 250, 0, 0,
    0, 251, 0, 0, 252, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0,
    0, 259, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    266, 0, 267, 0, 0, 268, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 275, 0, 276, 0, 0, 277, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 282, 0, 0, 283, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 286, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 291,
    0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 295, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 298, 0, 299, 0,
    0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 304, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0,
    307, 0, 308, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 313, 0, 0, 0, 314, 0, 0,
    315, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 322, 0, 0,
    0, 323, 0, 0, 324, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0,
    0, 331, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    338, 0, 339, 0, 0, 340, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 348, 0, 0, 349, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 354, 0, 0, 355, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 358, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 363,
    0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 366, 0, 0, 367, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 370, 0, 371, 0,
    0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 376, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0,
    379, 0, 380, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 385, 0, 0, 0, 386, 0, 0,
    387, 0, 0, 0, 388, 0, 389, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 393, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0,
    0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0,
    0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0,
    409, 0, 0, 410, 0, 0, 0, 0, 411, 0, 412, 0, 0, 413, 0, 0, 0, 0, 414, 0, 415, 0, 0, 416, 0, 417, 0, 0, 418, 0, 0, 0,
    0, 419, 0, 420, 0, 0, 421, 0, 422, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 426, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 427, 0, 428, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433,
    0, 0, 434, 0, 0, 0, 435, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0,
    0, 440, 0, 0, 441, 0, 0, 442, 0, 443, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 445, 0, 0, 446, 0, 0, 447, 0, 0, 448, 0, 0, 449, 0, 450, 451, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0,
    454, 0, 455, 0, 456, 0, 457, 0, 0, 458, 0, 0, 0, 459, 0, 460, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 0, 0, 464,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 467, 0, 468, 0, 469, 470, 0, 471, 472, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 478, 479, 0, 480, 0, 0, 481, 0, 482, 483, 0, 0, 0, 484, 0, 0,
    0, 485, 0, 486, 0, 487, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 0, 494, 0, 495, 0, 496,
    0, 497, 0, 0, 498, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0,
    0, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 505, 0, 0, 506, 0, 0, 0, 0, 0, 0, 507,
    508, 509, 0, 510, 0, 0, 511, 0, 512, 513, 0, 0, 0, 514, 0, 0, 0, 515, 0, 516, 0, 517, 0, 0, 518, 0, 519, 0, 520, 0, 521, 0,
    0, 0, 0, 522, 0, 523, 0, 524, 0, 525, 0, 0, 526, 0, 0, 0, 0, 0, 0, 527, 528, 529, 0, 530, 0, 0, 531, 0, 532, 533, 0, 0,
    0, 534, 0, 0, 0, 535, 0, 536, 0, 537, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 0, 541,
    0, 0, 0, 0, 542, 0, 543, 0, 0, 544, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 547, 548, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 549, 0, 0, 0, 550, 0, 551, 0, 0, 0, 552, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    558, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 562,
    0, 0, 563, 0, 0, 564, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 569, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0,
    0, 572, 0, 0, 0, 573, 574, 575, 0, 0, 0, 576, 0, 0, 577, 0, 578, 0, 579, 0, 0, 580, 0, 0, 0, 581, 0, 582, 0, 0, 0, 583,
    0, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 0, 587, 0, 0, 588, 0, 0, 589, 0, 590, 591, 0, 0, 0, 0, 0, 592,
    0, 0, 0, 593, 0, 0, 0, 594, 595, 596, 0, 0, 0, 597, 0, 598, 0, 599, 0, 600, 0, 601, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0,
    606, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 610, 0, 611, 0, 612, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 617, 0, 0, 618, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 620, 0,
    0, 0, 621, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 623, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 625, 0, 0, 626, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 628, 629, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631,
    0, 0, 632, 0, 0, 0, 0, 633, 0, 0, 634, 0, 0, 635, 0, 636, 637, 0, 0, 0, 638, 0, 0, 639, 0, 0, 0, 640, 0, 0, 0, 0,
    0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 642, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 646, 0, 647, 648, 0, 0, 649, 0, 0, 650, 0, 651, 0, 652, 0, 653, 0,
    0, 654, 0, 655, 0, 656, 0, 657, 0, 0, 658, 0, 659, 0, 660, 0, 661, 0, 0, 662, 0, 663, 0, 664, 0, 665, 0, 0, 666, 0, 667, 0,
    668, 0, 669, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0,
    681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 684, 0, 685, 0, 686,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 690, 0, 691, 0, 692, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 695,
    0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 698, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 702, 0, 0, 0, 703, 0, 0,
    0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 705, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707,
    0, 708, 0, 709, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 712, 0, 0, 0, 0, 0, 713, 0, 0, 0,
    0, 0, 0, 0, 0, 714, 0, 0, 0, 715, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 719, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 723, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 725, 726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 728, 0, 729, 0, 730, 0, 731, 0, 0, 0, 0, 732,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 734, 0, 735, 0, 0, 736, 0, 0, 737, 0, 738, 0, 0, 739, 0, 0, 0, 0, 740,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 742, 0, 743, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 746,
    0, 747, 748, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0, 751, 752, 0, 0, 0, 753, 0, 0, 0, 754, 0, 0, 755, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 756, 757, 0, 0, 0, 0, 0, 0, 0, 0, 758, 759, 0, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0,
    0, 761, 0, 0, 762, 0, 763, 0, 0, 0, 0, 764, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0,
    767, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 770, 0, 0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 773, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 775, 0, 0, 776, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0,
    0, 0, 779, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 781, 782, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 784, 785, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 786, 787, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 790, 0, 791, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0,
    0, 0, 0, 0, 793, 794, 0, 0, 0, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 0, 800, 0, 0, 0, 0, 0, 801, 0, 0, 0,
    0, 0, 802, 0, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 806, 0, 0, 0, 0, 0,
    807, 0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 811, 0, 0, 0, 0, 0, 812, 0,
    0, 813, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 816, 0, 0, 0, 0, 0, 817,
};
void recomp_unit_0042_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088AC000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0042[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088AC000;
    case 2u: goto L_088AC014;
    case 3u: goto L_088AC020;
    case 4u: goto L_088AC02C;
    case 5u: goto L_088AC030;
    case 6u: goto L_088AC038;
    case 7u: goto L_088AC044;
    case 8u: goto L_088AC054;
    case 9u: goto L_088AC060;
    case 10u: goto L_088AC070;
    case 11u: goto L_088AC078;
    case 12u: goto L_088AC08C;
    case 13u: goto L_088AC098;
    case 14u: goto L_088AC0C0;
    case 15u: goto L_088AC0C8;
    case 16u: goto L_088AC0D4;
    case 17u: goto L_088AC0E4;
    case 18u: goto L_088AC0F0;
    case 19u: goto L_088AC100;
    case 20u: goto L_088AC108;
    case 21u: goto L_088AC11C;
    case 22u: goto L_088AC128;
    case 23u: goto L_088AC150;
    case 24u: goto L_088AC158;
    case 25u: goto L_088AC164;
    case 26u: goto L_088AC174;
    case 27u: goto L_088AC180;
    case 28u: goto L_088AC190;
    case 29u: goto L_088AC198;
    case 30u: goto L_088AC1AC;
    case 31u: goto L_088AC1B8;
    case 32u: goto L_088AC1E0;
    case 33u: goto L_088AC1E8;
    case 34u: goto L_088AC1F4;
    case 35u: goto L_088AC204;
    case 36u: goto L_088AC210;
    case 37u: goto L_088AC220;
    case 38u: goto L_088AC228;
    case 39u: goto L_088AC23C;
    case 40u: goto L_088AC248;
    case 41u: goto L_088AC270;
    case 42u: goto L_088AC278;
    case 43u: goto L_088AC284;
    case 44u: goto L_088AC294;
    case 45u: goto L_088AC2A0;
    case 46u: goto L_088AC2B0;
    case 47u: goto L_088AC2B8;
    case 48u: goto L_088AC2CC;
    case 49u: goto L_088AC2D8;
    case 50u: goto L_088AC300;
    case 51u: goto L_088AC308;
    case 52u: goto L_088AC314;
    case 53u: goto L_088AC324;
    case 54u: goto L_088AC330;
    case 55u: goto L_088AC340;
    case 56u: goto L_088AC348;
    case 57u: goto L_088AC35C;
    case 58u: goto L_088AC368;
    case 59u: goto L_088AC390;
    case 60u: goto L_088AC398;
    case 61u: goto L_088AC3A4;
    case 62u: goto L_088AC3B4;
    case 63u: goto L_088AC3C0;
    case 64u: goto L_088AC3D0;
    case 65u: goto L_088AC3D8;
    case 66u: goto L_088AC3EC;
    case 67u: goto L_088AC3F8;
    case 68u: goto L_088AC420;
    case 69u: goto L_088AC428;
    case 70u: goto L_088AC434;
    case 71u: goto L_088AC444;
    case 72u: goto L_088AC450;
    case 73u: goto L_088AC460;
    case 74u: goto L_088AC468;
    case 75u: goto L_088AC47C;
    case 76u: goto L_088AC488;
    case 77u: goto L_088AC4B0;
    case 78u: goto L_088AC4B8;
    case 79u: goto L_088AC4C4;
    case 80u: goto L_088AC4D4;
    case 81u: goto L_088AC4E0;
    case 82u: goto L_088AC4F0;
    case 83u: goto L_088AC4F8;
    case 84u: goto L_088AC50C;
    case 85u: goto L_088AC518;
    case 86u: goto L_088AC540;
    case 87u: goto L_088AC548;
    case 88u: goto L_088AC554;
    case 89u: goto L_088AC564;
    case 90u: goto L_088AC570;
    case 91u: goto L_088AC580;
    case 92u: goto L_088AC588;
    case 93u: goto L_088AC59C;
    case 94u: goto L_088AC5A8;
    case 95u: goto L_088AC5D0;
    case 96u: goto L_088AC5D8;
    case 97u: goto L_088AC5E4;
    case 98u: goto L_088AC5F4;
    case 99u: goto L_088AC600;
    case 100u: goto L_088AC610;
    case 101u: goto L_088AC618;
    case 102u: goto L_088AC62C;
    case 103u: goto L_088AC638;
    case 104u: goto L_088AC660;
    case 105u: goto L_088AC668;
    case 106u: goto L_088AC674;
    case 107u: goto L_088AC684;
    case 108u: goto L_088AC690;
    case 109u: goto L_088AC6A0;
    case 110u: goto L_088AC6A8;
    case 111u: goto L_088AC6BC;
    case 112u: goto L_088AC6C8;
    case 113u: goto L_088AC6F0;
    case 114u: goto L_088AC6F8;
    case 115u: goto L_088AC704;
    case 116u: goto L_088AC714;
    case 117u: goto L_088AC720;
    case 118u: goto L_088AC730;
    case 119u: goto L_088AC738;
    case 120u: goto L_088AC74C;
    case 121u: goto L_088AC758;
    case 122u: goto L_088AC780;
    case 123u: goto L_088AC788;
    case 124u: goto L_088AC794;
    case 125u: goto L_088AC7A4;
    case 126u: goto L_088AC7B0;
    case 127u: goto L_088AC7C0;
    case 128u: goto L_088AC7C8;
    case 129u: goto L_088AC7DC;
    case 130u: goto L_088AC7E8;
    case 131u: goto L_088AC810;
    case 132u: goto L_088AC818;
    case 133u: goto L_088AC824;
    case 134u: goto L_088AC834;
    case 135u: goto L_088AC840;
    case 136u: goto L_088AC850;
    case 137u: goto L_088AC858;
    case 138u: goto L_088AC86C;
    case 139u: goto L_088AC878;
    case 140u: goto L_088AC8A0;
    case 141u: goto L_088AC8A8;
    case 142u: goto L_088AC8B4;
    case 143u: goto L_088AC8C4;
    case 144u: goto L_088AC8D0;
    case 145u: goto L_088AC8E0;
    case 146u: goto L_088AC8E8;
    case 147u: goto L_088AC8FC;
    case 148u: goto L_088AC908;
    case 149u: goto L_088AC930;
    case 150u: goto L_088AC938;
    case 151u: goto L_088AC944;
    case 152u: goto L_088AC954;
    case 153u: goto L_088AC960;
    case 154u: goto L_088AC970;
    case 155u: goto L_088AC978;
    case 156u: goto L_088AC98C;
    case 157u: goto L_088AC998;
    case 158u: goto L_088AC9C0;
    case 159u: goto L_088AC9C8;
    case 160u: goto L_088AC9D4;
    case 161u: goto L_088AC9E4;
    case 162u: goto L_088AC9F0;
    case 163u: goto L_088ACA00;
    case 164u: goto L_088ACA08;
    case 165u: goto L_088ACA1C;
    case 166u: goto L_088ACA28;
    case 167u: goto L_088ACA50;
    case 168u: goto L_088ACA58;
    case 169u: goto L_088ACA64;
    case 170u: goto L_088ACA74;
    case 171u: goto L_088ACA80;
    case 172u: goto L_088ACA90;
    case 173u: goto L_088ACA98;
    case 174u: goto L_088ACAAC;
    case 175u: goto L_088ACAB8;
    case 176u: goto L_088ACAE0;
    case 177u: goto L_088ACAE8;
    case 178u: goto L_088ACAF4;
    case 179u: goto L_088ACB04;
    case 180u: goto L_088ACB10;
    case 181u: goto L_088ACB20;
    case 182u: goto L_088ACB28;
    case 183u: goto L_088ACB3C;
    case 184u: goto L_088ACB48;
    case 185u: goto L_088ACB70;
    case 186u: goto L_088ACB78;
    case 187u: goto L_088ACB84;
    case 188u: goto L_088ACB94;
    case 189u: goto L_088ACBA0;
    case 190u: goto L_088ACBB0;
    case 191u: goto L_088ACBB8;
    case 192u: goto L_088ACBCC;
    case 193u: goto L_088ACBD8;
    case 194u: goto L_088ACC00;
    case 195u: goto L_088ACC08;
    case 196u: goto L_088ACC14;
    case 197u: goto L_088ACC24;
    case 198u: goto L_088ACC30;
    case 199u: goto L_088ACC40;
    case 200u: goto L_088ACC48;
    case 201u: goto L_088ACC5C;
    case 202u: goto L_088ACC68;
    case 203u: goto L_088ACC90;
    case 204u: goto L_088ACC98;
    case 205u: goto L_088ACCA4;
    case 206u: goto L_088ACCB4;
    case 207u: goto L_088ACCC0;
    case 208u: goto L_088ACCD0;
    case 209u: goto L_088ACCD8;
    case 210u: goto L_088ACCEC;
    case 211u: goto L_088ACCF8;
    case 212u: goto L_088ACD20;
    case 213u: goto L_088ACD28;
    case 214u: goto L_088ACD34;
    case 215u: goto L_088ACD44;
    case 216u: goto L_088ACD50;
    case 217u: goto L_088ACD60;
    case 218u: goto L_088ACD68;
    case 219u: goto L_088ACD7C;
    case 220u: goto L_088ACD88;
    case 221u: goto L_088ACDB0;
    case 222u: goto L_088ACDB8;
    case 223u: goto L_088ACDC4;
    case 224u: goto L_088ACDD4;
    case 225u: goto L_088ACDE0;
    case 226u: goto L_088ACDF0;
    case 227u: goto L_088ACDF8;
    case 228u: goto L_088ACE0C;
    case 229u: goto L_088ACE18;
    case 230u: goto L_088ACE40;
    case 231u: goto L_088ACE48;
    case 232u: goto L_088ACE54;
    case 233u: goto L_088ACE64;
    case 234u: goto L_088ACE70;
    case 235u: goto L_088ACE80;
    case 236u: goto L_088ACE88;
    case 237u: goto L_088ACE9C;
    case 238u: goto L_088ACEA8;
    case 239u: goto L_088ACED0;
    case 240u: goto L_088ACED8;
    case 241u: goto L_088ACEE4;
    case 242u: goto L_088ACEF4;
    case 243u: goto L_088ACF00;
    case 244u: goto L_088ACF10;
    case 245u: goto L_088ACF18;
    case 246u: goto L_088ACF2C;
    case 247u: goto L_088ACF38;
    case 248u: goto L_088ACF60;
    case 249u: goto L_088ACF68;
    case 250u: goto L_088ACF74;
    case 251u: goto L_088ACF84;
    case 252u: goto L_088ACF90;
    case 253u: goto L_088ACFA0;
    case 254u: goto L_088ACFA8;
    case 255u: goto L_088ACFBC;
    case 256u: goto L_088ACFC8;
    case 257u: goto L_088ACFF0;
    case 258u: goto L_088ACFF8;
    case 259u: goto L_088AD004;
    case 260u: goto L_088AD014;
    case 261u: goto L_088AD020;
    case 262u: goto L_088AD030;
    case 263u: goto L_088AD038;
    case 264u: goto L_088AD04C;
    case 265u: goto L_088AD058;
    case 266u: goto L_088AD080;
    case 267u: goto L_088AD088;
    case 268u: goto L_088AD094;
    case 269u: goto L_088AD0A4;
    case 270u: goto L_088AD0B0;
    case 271u: goto L_088AD0C0;
    case 272u: goto L_088AD0C8;
    case 273u: goto L_088AD0DC;
    case 274u: goto L_088AD0E8;
    case 275u: goto L_088AD110;
    case 276u: goto L_088AD118;
    case 277u: goto L_088AD124;
    case 278u: goto L_088AD134;
    case 279u: goto L_088AD140;
    case 280u: goto L_088AD150;
    case 281u: goto L_088AD158;
    case 282u: goto L_088AD16C;
    case 283u: goto L_088AD178;
    case 284u: goto L_088AD1A0;
    case 285u: goto L_088AD1A8;
    case 286u: goto L_088AD1B4;
    case 287u: goto L_088AD1C4;
    case 288u: goto L_088AD1D0;
    case 289u: goto L_088AD1E0;
    case 290u: goto L_088AD1E8;
    case 291u: goto L_088AD1FC;
    case 292u: goto L_088AD208;
    case 293u: goto L_088AD230;
    case 294u: goto L_088AD238;
    case 295u: goto L_088AD244;
    case 296u: goto L_088AD254;
    case 297u: goto L_088AD260;
    case 298u: goto L_088AD270;
    case 299u: goto L_088AD278;
    case 300u: goto L_088AD28C;
    case 301u: goto L_088AD298;
    case 302u: goto L_088AD2C0;
    case 303u: goto L_088AD2C8;
    case 304u: goto L_088AD2D4;
    case 305u: goto L_088AD2E4;
    case 306u: goto L_088AD2F0;
    case 307u: goto L_088AD300;
    case 308u: goto L_088AD308;
    case 309u: goto L_088AD31C;
    case 310u: goto L_088AD328;
    case 311u: goto L_088AD350;
    case 312u: goto L_088AD358;
    case 313u: goto L_088AD364;
    case 314u: goto L_088AD374;
    case 315u: goto L_088AD380;
    case 316u: goto L_088AD390;
    case 317u: goto L_088AD398;
    case 318u: goto L_088AD3AC;
    case 319u: goto L_088AD3B8;
    case 320u: goto L_088AD3E0;
    case 321u: goto L_088AD3E8;
    case 322u: goto L_088AD3F4;
    case 323u: goto L_088AD404;
    case 324u: goto L_088AD410;
    case 325u: goto L_088AD420;
    case 326u: goto L_088AD428;
    case 327u: goto L_088AD43C;
    case 328u: goto L_088AD448;
    case 329u: goto L_088AD470;
    case 330u: goto L_088AD478;
    case 331u: goto L_088AD484;
    case 332u: goto L_088AD494;
    case 333u: goto L_088AD4A0;
    case 334u: goto L_088AD4B0;
    case 335u: goto L_088AD4B8;
    case 336u: goto L_088AD4CC;
    case 337u: goto L_088AD4D8;
    case 338u: goto L_088AD500;
    case 339u: goto L_088AD508;
    case 340u: goto L_088AD514;
    case 341u: goto L_088AD524;
    case 342u: goto L_088AD530;
    case 343u: goto L_088AD540;
    case 344u: goto L_088AD548;
    case 345u: goto L_088AD55C;
    case 346u: goto L_088AD568;
    case 347u: goto L_088AD590;
    case 348u: goto L_088AD598;
    case 349u: goto L_088AD5A4;
    case 350u: goto L_088AD5B4;
    case 351u: goto L_088AD5C0;
    case 352u: goto L_088AD5D0;
    case 353u: goto L_088AD5D8;
    case 354u: goto L_088AD5EC;
    case 355u: goto L_088AD5F8;
    case 356u: goto L_088AD620;
    case 357u: goto L_088AD628;
    case 358u: goto L_088AD634;
    case 359u: goto L_088AD644;
    case 360u: goto L_088AD650;
    case 361u: goto L_088AD660;
    case 362u: goto L_088AD668;
    case 363u: goto L_088AD67C;
    case 364u: goto L_088AD688;
    case 365u: goto L_088AD6B0;
    case 366u: goto L_088AD6B8;
    case 367u: goto L_088AD6C4;
    case 368u: goto L_088AD6D4;
    case 369u: goto L_088AD6E0;
    case 370u: goto L_088AD6F0;
    case 371u: goto L_088AD6F8;
    case 372u: goto L_088AD70C;
    case 373u: goto L_088AD718;
    case 374u: goto L_088AD740;
    case 375u: goto L_088AD748;
    case 376u: goto L_088AD754;
    case 377u: goto L_088AD764;
    case 378u: goto L_088AD770;
    case 379u: goto L_088AD780;
    case 380u: goto L_088AD788;
    case 381u: goto L_088AD79C;
    case 382u: goto L_088AD7A8;
    case 383u: goto L_088AD7D0;
    case 384u: goto L_088AD7D8;
    case 385u: goto L_088AD7E4;
    case 386u: goto L_088AD7F4;
    case 387u: goto L_088AD800;
    case 388u: goto L_088AD810;
    case 389u: goto L_088AD818;
    case 390u: goto L_088AD820;
    case 391u: goto L_088AD844;
    case 392u: goto L_088AD84C;
    case 393u: goto L_088AD854;
    case 394u: goto L_088AD85C;
    case 395u: goto L_088AD86C;
    case 396u: goto L_088AD890;
    case 397u: goto L_088AD8B8;
    case 398u: goto L_088AD8C0;
    case 399u: goto L_088AD8F8;
    case 400u: goto L_088AD914;
    case 401u: goto L_088AD920;
    case 402u: goto L_088AD944;
    case 403u: goto L_088AD980;
    case 404u: goto L_088AD99C;
    case 405u: goto L_088AD9A8;
    case 406u: goto L_088AD9B0;
    case 407u: goto L_088AD9B8;
    case 408u: goto L_088AD9F0;
    case 409u: goto L_088ADA00;
    case 410u: goto L_088ADA0C;
    case 411u: goto L_088ADA20;
    case 412u: goto L_088ADA28;
    case 413u: goto L_088ADA34;
    case 414u: goto L_088ADA48;
    case 415u: goto L_088ADA50;
    case 416u: goto L_088ADA5C;
    case 417u: goto L_088ADA64;
    case 418u: goto L_088ADA70;
    case 419u: goto L_088ADA84;
    case 420u: goto L_088ADA8C;
    case 421u: goto L_088ADA98;
    case 422u: goto L_088ADAA0;
    case 423u: goto L_088ADAB4;
    case 424u: goto L_088ADAC0;
    case 425u: goto L_088ADAD8;
    case 426u: goto L_088ADAE0;
    case 427u: goto L_088ADB0C;
    case 428u: goto L_088ADB14;
    case 429u: goto L_088ADB24;
    case 430u: goto L_088ADB30;
    case 431u: goto L_088ADB44;
    case 432u: goto L_088ADB58;
    case 433u: goto L_088ADB7C;
    case 434u: goto L_088ADB88;
    case 435u: goto L_088ADB98;
    case 436u: goto L_088ADB9C;
    case 437u: goto L_088ADBB0;
    case 438u: goto L_088ADBDC;
    case 439u: goto L_088ADBF0;
    case 440u: goto L_088ADC04;
    case 441u: goto L_088ADC10;
    case 442u: goto L_088ADC1C;
    case 443u: goto L_088ADC24;
    case 444u: goto L_088ADC28;
    case 445u: goto L_088ADC88;
    case 446u: goto L_088ADC94;
    case 447u: goto L_088ADCA0;
    case 448u: goto L_088ADCAC;
    case 449u: goto L_088ADCB8;
    case 450u: goto L_088ADCC0;
    case 451u: goto L_088ADCC4;
    case 452u: goto L_088ADCCC;
    case 453u: goto L_088ADCDC;
    case 454u: goto L_088ADD00;
    case 455u: goto L_088ADD08;
    case 456u: goto L_088ADD10;
    case 457u: goto L_088ADD18;
    case 458u: goto L_088ADD24;
    case 459u: goto L_088ADD34;
    case 460u: goto L_088ADD3C;
    case 461u: goto L_088ADD48;
    case 462u: goto L_088ADD60;
    case 463u: goto L_088ADD68;
    case 464u: goto L_088ADD7C;
    case 465u: goto L_088ADDA4;
    case 466u: goto L_088ADDB4;
    case 467u: goto L_088ADDC0;
    case 468u: goto L_088ADDC8;
    case 469u: goto L_088ADDD0;
    case 470u: goto L_088ADDD4;
    case 471u: goto L_088ADDDC;
    case 472u: goto L_088ADDE0;
    case 473u: goto L_088ADE0C;
    case 474u: goto L_088ADE30;
    case 475u: goto L_088ADE68;
    case 476u: goto L_088ADEA0;
    case 477u: goto L_088ADEBC;
    case 478u: goto L_088ADEC0;
    case 479u: goto L_088ADEC4;
    case 480u: goto L_088ADECC;
    case 481u: goto L_088ADED8;
    case 482u: goto L_088ADEE0;
    case 483u: goto L_088ADEE4;
    case 484u: goto L_088ADEF4;
    case 485u: goto L_088ADF04;
    case 486u: goto L_088ADF0C;
    case 487u: goto L_088ADF14;
    case 488u: goto L_088ADF20;
    case 489u: goto L_088ADF3C;
    case 490u: goto L_088ADF48;
    case 491u: goto L_088ADF80;
    case 492u: goto L_088ADFC4;
    case 493u: goto L_088ADFD8;
    case 494u: goto L_088ADFEC;
    case 495u: goto L_088ADFF4;
    case 496u: goto L_088ADFFC;
    case 497u: goto L_088AE004;
    case 498u: goto L_088AE010;
    case 499u: goto L_088AE014;
    case 500u: goto L_088AE060;
    case 501u: goto L_088AE070;
    case 502u: goto L_088AE094;
    case 503u: goto L_088AE09C;
    case 504u: goto L_088AE0CC;
    case 505u: goto L_088AE0D4;
    case 506u: goto L_088AE0E0;
    case 507u: goto L_088AE0FC;
    case 508u: goto L_088AE100;
    case 509u: goto L_088AE104;
    case 510u: goto L_088AE10C;
    case 511u: goto L_088AE118;
    case 512u: goto L_088AE120;
    case 513u: goto L_088AE124;
    case 514u: goto L_088AE134;
    case 515u: goto L_088AE144;
    case 516u: goto L_088AE14C;
    case 517u: goto L_088AE154;
    case 518u: goto L_088AE160;
    case 519u: goto L_088AE168;
    case 520u: goto L_088AE170;
    case 521u: goto L_088AE178;
    case 522u: goto L_088AE18C;
    case 523u: goto L_088AE194;
    case 524u: goto L_088AE19C;
    case 525u: goto L_088AE1A4;
    case 526u: goto L_088AE1B0;
    case 527u: goto L_088AE1CC;
    case 528u: goto L_088AE1D0;
    case 529u: goto L_088AE1D4;
    case 530u: goto L_088AE1DC;
    case 531u: goto L_088AE1E8;
    case 532u: goto L_088AE1F0;
    case 533u: goto L_088AE1F4;
    case 534u: goto L_088AE204;
    case 535u: goto L_088AE214;
    case 536u: goto L_088AE21C;
    case 537u: goto L_088AE224;
    case 538u: goto L_088AE22C;
    case 539u: goto L_088AE254;
    case 540u: goto L_088AE268;
    case 541u: goto L_088AE27C;
    case 542u: goto L_088AE290;
    case 543u: goto L_088AE298;
    case 544u: goto L_088AE2A4;
    case 545u: goto L_088AE2AC;
    case 546u: goto L_088AE2D4;
    case 547u: goto L_088AE2E8;
    case 548u: goto L_088AE2EC;
    case 549u: goto L_088AE314;
    case 550u: goto L_088AE324;
    case 551u: goto L_088AE32C;
    case 552u: goto L_088AE33C;
    case 553u: goto L_088AE344;
    case 554u: goto L_088AE398;
    case 555u: goto L_088AE3A8;
    case 556u: goto L_088AE3C0;
    case 557u: goto L_088AE3D4;
    case 558u: goto L_088AE400;
    case 559u: goto L_088AE408;
    case 560u: goto L_088AE434;
    case 561u: goto L_088AE470;
    case 562u: goto L_088AE47C;
    case 563u: goto L_088AE488;
    case 564u: goto L_088AE494;
    case 565u: goto L_088AE49C;
    case 566u: goto L_088AE4DC;
    case 567u: goto L_088AE524;
    case 568u: goto L_088AE530;
    case 569u: goto L_088AE538;
    case 570u: goto L_088AE540;
    case 571u: goto L_088AE574;
    case 572u: goto L_088AE584;
    case 573u: goto L_088AE594;
    case 574u: goto L_088AE598;
    case 575u: goto L_088AE59C;
    case 576u: goto L_088AE5AC;
    case 577u: goto L_088AE5B8;
    case 578u: goto L_088AE5C0;
    case 579u: goto L_088AE5C8;
    case 580u: goto L_088AE5D4;
    case 581u: goto L_088AE5E4;
    case 582u: goto L_088AE5EC;
    case 583u: goto L_088AE5FC;
    case 584u: goto L_088AE610;
    case 585u: goto L_088AE620;
    case 586u: goto L_088AE62C;
    case 587u: goto L_088AE640;
    case 588u: goto L_088AE64C;
    case 589u: goto L_088AE658;
    case 590u: goto L_088AE660;
    case 591u: goto L_088AE664;
    case 592u: goto L_088AE67C;
    case 593u: goto L_088AE68C;
    case 594u: goto L_088AE69C;
    case 595u: goto L_088AE6A0;
    case 596u: goto L_088AE6A4;
    case 597u: goto L_088AE6B4;
    case 598u: goto L_088AE6BC;
    case 599u: goto L_088AE6C4;
    case 600u: goto L_088AE6CC;
    case 601u: goto L_088AE6D4;
    case 602u: goto L_088AE6DC;
    case 603u: goto L_088AE730;
    case 604u: goto L_088AE738;
    case 605u: goto L_088AE778;
    case 606u: goto L_088AE780;
    case 607u: goto L_088AE78C;
    case 608u: goto L_088AE79C;
    case 609u: goto L_088AE7B0;
    case 610u: goto L_088AE7B8;
    case 611u: goto L_088AE7C0;
    case 612u: goto L_088AE7C8;
    case 613u: goto L_088AE7D4;
    case 614u: goto L_088AE824;
    case 615u: goto L_088AE830;
    case 616u: goto L_088AE850;
    case 617u: goto L_088AE864;
    case 618u: goto L_088AE870;
    case 619u: goto L_088AE8EC;
    case 620u: goto L_088AE8F8;
    case 621u: goto L_088AE908;
    case 622u: goto L_088AE910;
    case 623u: goto L_088AE934;
    case 624u: goto L_088AE938;
    case 625u: goto L_088AE984;
    case 626u: goto L_088AE990;
    case 627u: goto L_088AE9AC;
    case 628u: goto L_088AE9C0;
    case 629u: goto L_088AE9C4;
    case 630u: goto L_088AE9CC;
    case 631u: goto L_088AE9FC;
    case 632u: goto L_088AEA08;
    case 633u: goto L_088AEA1C;
    case 634u: goto L_088AEA28;
    case 635u: goto L_088AEA34;
    case 636u: goto L_088AEA3C;
    case 637u: goto L_088AEA40;
    case 638u: goto L_088AEA50;
    case 639u: goto L_088AEA5C;
    case 640u: goto L_088AEA6C;
    case 641u: goto L_088AEA84;
    case 642u: goto L_088AEAA8;
    case 643u: goto L_088AEAAC;
    case 644u: goto L_088AEADC;
    case 645u: goto L_088AEB1C;
    case 646u: goto L_088AEB3C;
    case 647u: goto L_088AEB44;
    case 648u: goto L_088AEB48;
    case 649u: goto L_088AEB54;
    case 650u: goto L_088AEB60;
    case 651u: goto L_088AEB68;
    case 652u: goto L_088AEB70;
    case 653u: goto L_088AEB78;
    case 654u: goto L_088AEB84;
    case 655u: goto L_088AEB8C;
    case 656u: goto L_088AEB94;
    case 657u: goto L_088AEB9C;
    case 658u: goto L_088AEBA8;
    case 659u: goto L_088AEBB0;
    case 660u: goto L_088AEBB8;
    case 661u: goto L_088AEBC0;
    case 662u: goto L_088AEBCC;
    case 663u: goto L_088AEBD4;
    case 664u: goto L_088AEBDC;
    case 665u: goto L_088AEBE4;
    case 666u: goto L_088AEBF0;
    case 667u: goto L_088AEBF8;
    case 668u: goto L_088AEC00;
    case 669u: goto L_088AEC08;
    case 670u: goto L_088AEC10;
    case 671u: goto L_088AEC50;
    case 672u: goto L_088AEC80;
    case 673u: goto L_088AECB8;
    case 674u: goto L_088AECE8;
    case 675u: goto L_088AED10;
    case 676u: goto L_088AED3C;
    case 677u: goto L_088AED5C;
    case 678u: goto L_088AED88;
    case 679u: goto L_088AEDB0;
    case 680u: goto L_088AEDE0;
    case 681u: goto L_088AEE00;
    case 682u: goto L_088AEE2C;
    case 683u: goto L_088AEE4C;
    case 684u: goto L_088AEE6C;
    case 685u: goto L_088AEE74;
    case 686u: goto L_088AEE7C;
    case 687u: goto L_088AEEB0;
    case 688u: goto L_088AEEC0;
    case 689u: goto L_088AEED4;
    case 690u: goto L_088AEF1C;
    case 691u: goto L_088AEF24;
    case 692u: goto L_088AEF2C;
    case 693u: goto L_088AEF34;
    case 694u: goto L_088AEF6C;
    case 695u: goto L_088AEF7C;
    case 696u: goto L_088AEF94;
    case 697u: goto L_088AEFB8;
    case 698u: goto L_088AEFC8;
    case 699u: goto L_088AEFD8;
    case 700u: goto L_088AF018;
    case 701u: goto L_088AF054;
    case 702u: goto L_088AF064;
    case 703u: goto L_088AF074;
    case 704u: goto L_088AF098;
    case 705u: goto L_088AF0A8;
    case 706u: goto L_088AF0B8;
    case 707u: goto L_088AF0FC;
    case 708u: goto L_088AF104;
    case 709u: goto L_088AF10C;
    case 710u: goto L_088AF114;
    case 711u: goto L_088AF148;
    case 712u: goto L_088AF158;
    case 713u: goto L_088AF170;
    case 714u: goto L_088AF194;
    case 715u: goto L_088AF1A4;
    case 716u: goto L_088AF1B4;
    case 717u: goto L_088AF204;
    case 718u: goto L_088AF234;
    case 719u: goto L_088AF244;
    case 720u: goto L_088AF258;
    case 721u: goto L_088AF290;
    case 722u: goto L_088AF2C0;
    case 723u: goto L_088AF2C8;
    case 724u: goto L_088AF2E4;
    case 725u: goto L_088AF310;
    case 726u: goto L_088AF314;
    case 727u: goto L_088AF344;
    case 728u: goto L_088AF350;
    case 729u: goto L_088AF358;
    case 730u: goto L_088AF360;
    case 731u: goto L_088AF368;
    case 732u: goto L_088AF37C;
    case 733u: goto L_088AF3A8;
    case 734u: goto L_088AF3B4;
    case 735u: goto L_088AF3BC;
    case 736u: goto L_088AF3C8;
    case 737u: goto L_088AF3D4;
    case 738u: goto L_088AF3DC;
    case 739u: goto L_088AF3E8;
    case 740u: goto L_088AF3FC;
    case 741u: goto L_088AF428;
    case 742u: goto L_088AF434;
    case 743u: goto L_088AF43C;
    case 744u: goto L_088AF450;
    case 745u: goto L_088AF468;
    case 746u: goto L_088AF47C;
    case 747u: goto L_088AF484;
    case 748u: goto L_088AF488;
    case 749u: goto L_088AF4A4;
    case 750u: goto L_088AF4B4;
    case 751u: goto L_088AF4BC;
    case 752u: goto L_088AF4C0;
    case 753u: goto L_088AF4D0;
    case 754u: goto L_088AF4E0;
    case 755u: goto L_088AF4EC;
    case 756u: goto L_088AF514;
    case 757u: goto L_088AF518;
    case 758u: goto L_088AF53C;
    case 759u: goto L_088AF540;
    case 760u: goto L_088AF568;
    case 761u: goto L_088AF584;
    case 762u: goto L_088AF590;
    case 763u: goto L_088AF598;
    case 764u: goto L_088AF5AC;
    case 765u: goto L_088AF5C0;
    case 766u: goto L_088AF664;
    case 767u: goto L_088AF680;
    case 768u: goto L_088AF6B8;
    case 769u: goto L_088AF6C8;
    case 770u: goto L_088AF708;
    case 771u: goto L_088AF718;
    case 772u: goto L_088AF740;
    case 773u: goto L_088AF748;
    case 774u: goto L_088AF754;
    case 775u: goto L_088AF790;
    case 776u: goto L_088AF79C;
    case 777u: goto L_088AF7A4;
    case 778u: goto L_088AF7E4;
    case 779u: goto L_088AF808;
    case 780u: goto L_088AF814;
    case 781u: goto L_088AF840;
    case 782u: goto L_088AF844;
    case 783u: goto L_088AF868;
    case 784u: goto L_088AF870;
    case 785u: goto L_088AF874;
    case 786u: goto L_088AF89C;
    case 787u: goto L_088AF8A0;
    case 788u: goto L_088AF8C0;
    case 789u: goto L_088AF930;
    case 790u: goto L_088AF94C;
    case 791u: goto L_088AF954;
    case 792u: goto L_088AF970;
    case 793u: goto L_088AF990;
    case 794u: goto L_088AF994;
    case 795u: goto L_088AF9BC;
    case 796u: goto L_088AF9DC;
    case 797u: goto L_088AFE10;
    case 798u: goto L_088AFE28;
    case 799u: goto L_088AFE40;
    case 800u: goto L_088AFE58;
    case 801u: goto L_088AFE70;
    case 802u: goto L_088AFE88;
    case 803u: goto L_088AFEA0;
    case 804u: goto L_088AFEB8;
    case 805u: goto L_088AFED0;
    case 806u: goto L_088AFEE8;
    case 807u: goto L_088AFF00;
    case 808u: goto L_088AFF18;
    case 809u: goto L_088AFF30;
    case 810u: goto L_088AFF48;
    case 811u: goto L_088AFF60;
    case 812u: goto L_088AFF78;
    case 813u: goto L_088AFF84;
    case 814u: goto L_088AFFA4;
    case 815u: goto L_088AFFBC;
    case 816u: goto L_088AFFD4;
    case 817u: goto L_088AFFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088AC000:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[31] = (0x088AC014u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7237))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AC014u) goto L_088AC014;
    return;
L_088AC014:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_088AC030;
      }
      goto L_088AC020;
    }
L_088AC020:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088AC02Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 534u, 0x08AFE3B8u>(ctx, &aot_mem) && ctx.pc == 0x088AC02Cu) goto L_088AC02C;
    return;
L_088AC02C:
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
    goto L_088AC030;
L_088AC030:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC044;
      }
      goto L_088AC038;
    }
L_088AC038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC044;
L_088AC044:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC054u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AC054u) goto L_088AC054;
    return;
L_088AC054:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC078;
      }
      goto L_088AC060;
    }
L_088AC060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC078;
      }
      goto L_088AC070;
    }
L_088AC070:
    ctx.gpr[31] = (0x088AC078u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AC078u) goto L_088AC078;
    return;
L_088AC078:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC08Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7216))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AC08Cu) goto L_088AC08C;
    return;
L_088AC08C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC0C0;
      }
      goto L_088AC098;
    }
L_088AC098:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2189u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27132));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC0C0;
L_088AC0C0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC0D4;
      }
      goto L_088AC0C8;
    }
L_088AC0C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC0D4;
L_088AC0D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC0E4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AC0E4u) goto L_088AC0E4;
    return;
L_088AC0E4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC108;
      }
      goto L_088AC0F0;
    }
L_088AC0F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC108;
      }
      goto L_088AC100;
    }
L_088AC100:
    ctx.gpr[31] = (0x088AC108u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AC108u) goto L_088AC108;
    return;
L_088AC108:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC11Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7396))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AC11Cu) goto L_088AC11C;
    return;
L_088AC11C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC150;
      }
      goto L_088AC128;
    }
L_088AC128:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15484));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC150;
L_088AC150:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC164;
      }
      goto L_088AC158;
    }
L_088AC158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC164;
L_088AC164:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC174u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AC174u) goto L_088AC174;
    return;
L_088AC174:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC198;
      }
      goto L_088AC180;
    }
L_088AC180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC198;
      }
      goto L_088AC190;
    }
L_088AC190:
    ctx.gpr[31] = (0x088AC198u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AC198u) goto L_088AC198;
    return;
L_088AC198:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC1ACu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7391))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AC1ACu) goto L_088AC1AC;
    return;
L_088AC1AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC1E0;
      }
      goto L_088AC1B8;
    }
L_088AC1B8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1440));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC1E0;
L_088AC1E0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC1F4;
      }
      goto L_088AC1E8;
    }
L_088AC1E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC1F4;
L_088AC1F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC204u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AC204u) goto L_088AC204;
    return;
L_088AC204:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC228;
      }
      goto L_088AC210;
    }
L_088AC210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC228;
      }
      goto L_088AC220;
    }
L_088AC220:
    ctx.gpr[31] = (0x088AC228u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AC228u) goto L_088AC228;
    return;
L_088AC228:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC23Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7397))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AC23Cu) goto L_088AC23C;
    return;
L_088AC23C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC270;
      }
      goto L_088AC248;
    }
L_088AC248:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-312));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC270;
L_088AC270:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC284;
      }
      goto L_088AC278;
    }
L_088AC278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC284;
L_088AC284:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC294u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AC294u) goto L_088AC294;
    return;
L_088AC294:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC2B8;
      }
      goto L_088AC2A0;
    }
L_088AC2A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC2B8;
      }
      goto L_088AC2B0;
    }
L_088AC2B0:
    ctx.gpr[31] = (0x088AC2B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AC2B8u) goto L_088AC2B8;
    return;
L_088AC2B8:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC2CCu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7393))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AC2CCu) goto L_088AC2CC;
    return;
L_088AC2CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC300;
      }
      goto L_088AC2D8;
    }
L_088AC2D8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(860));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC300;
L_088AC300:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC314;
      }
      goto L_088AC308;
    }
L_088AC308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC314;
L_088AC314:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC324u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AC324u) goto L_088AC324;
    return;
L_088AC324:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC348;
      }
      goto L_088AC330;
    }
L_088AC330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC348;
      }
      goto L_088AC340;
    }
L_088AC340:
    ctx.gpr[31] = (0x088AC348u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AC348u) goto L_088AC348;
    return;
L_088AC348:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC35Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7394))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AC35Cu) goto L_088AC35C;
    return;
L_088AC35C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC390;
      }
      goto L_088AC368;
    }
L_088AC368:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(84));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC390;
L_088AC390:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC3A4;
      }
      goto L_088AC398;
    }
L_088AC398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC3A4;
L_088AC3A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC3B4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AC3B4u) goto L_088AC3B4;
    return;
L_088AC3B4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC3D8;
      }
      goto L_088AC3C0;
    }
L_088AC3C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC3D8;
      }
      goto L_088AC3D0;
    }
L_088AC3D0:
    ctx.gpr[31] = (0x088AC3D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AC3D8u) goto L_088AC3D8;
    return;
L_088AC3D8:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC3ECu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-8007))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AC3ECu) goto L_088AC3EC;
    return;
L_088AC3EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC420;
      }
      goto L_088AC3F8;
    }
L_088AC3F8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2179u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17632));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC420;
L_088AC420:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC434;
      }
      goto L_088AC428;
    }
L_088AC428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC434;
L_088AC434:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC444u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AC444u) goto L_088AC444;
    return;
L_088AC444:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC468;
      }
      goto L_088AC450;
    }
L_088AC450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC468;
      }
      goto L_088AC460;
    }
L_088AC460:
    ctx.gpr[31] = (0x088AC468u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AC468u) goto L_088AC468;
    return;
L_088AC468:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC47Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7215))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AC47Cu) goto L_088AC47C;
    return;
L_088AC47C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC4B0;
      }
      goto L_088AC488;
    }
L_088AC488:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2188u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(332));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC4B0;
L_088AC4B0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC4C4;
      }
      goto L_088AC4B8;
    }
L_088AC4B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC4C4;
L_088AC4C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC4D4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AC4D4u) goto L_088AC4D4;
    return;
L_088AC4D4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC4F8;
      }
      goto L_088AC4E0;
    }
L_088AC4E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC4F8;
      }
      goto L_088AC4F0;
    }
L_088AC4F0:
    ctx.gpr[31] = (0x088AC4F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AC4F8u) goto L_088AC4F8;
    return;
L_088AC4F8:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC50Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7406))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AC50Cu) goto L_088AC50C;
    return;
L_088AC50C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC540;
      }
      goto L_088AC518;
    }
L_088AC518:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(572));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC540;
L_088AC540:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC554;
      }
      goto L_088AC548;
    }
L_088AC548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC554;
L_088AC554:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC564u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AC564u) goto L_088AC564;
    return;
L_088AC564:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC588;
      }
      goto L_088AC570;
    }
L_088AC570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC588;
      }
      goto L_088AC580;
    }
L_088AC580:
    ctx.gpr[31] = (0x088AC588u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AC588u) goto L_088AC588;
    return;
L_088AC588:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC59Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7390))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AC59Cu) goto L_088AC59C;
    return;
L_088AC59C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC5D0;
      }
      goto L_088AC5A8;
    }
L_088AC5A8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2176));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC5D0;
L_088AC5D0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC5E4;
      }
      goto L_088AC5D8;
    }
L_088AC5D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC5E4;
L_088AC5E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC5F4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AC5F4u) goto L_088AC5F4;
    return;
L_088AC5F4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC618;
      }
      goto L_088AC600;
    }
L_088AC600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC618;
      }
      goto L_088AC610;
    }
L_088AC610:
    ctx.gpr[31] = (0x088AC618u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AC618u) goto L_088AC618;
    return;
L_088AC618:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC62Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7395))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AC62Cu) goto L_088AC62C;
    return;
L_088AC62C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC660;
      }
      goto L_088AC638;
    }
L_088AC638:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2764));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC660;
L_088AC660:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC674;
      }
      goto L_088AC668;
    }
L_088AC668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC674;
L_088AC674:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC684u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AC684u) goto L_088AC684;
    return;
L_088AC684:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC6A8;
      }
      goto L_088AC690;
    }
L_088AC690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC6A8;
      }
      goto L_088AC6A0;
    }
L_088AC6A0:
    ctx.gpr[31] = (0x088AC6A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AC6A8u) goto L_088AC6A8;
    return;
L_088AC6A8:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC6BCu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7400))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AC6BCu) goto L_088AC6BC;
    return;
L_088AC6BC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC6F0;
      }
      goto L_088AC6C8;
    }
L_088AC6C8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17384));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC6F0;
L_088AC6F0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC704;
      }
      goto L_088AC6F8;
    }
L_088AC6F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC704;
L_088AC704:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC714u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AC714u) goto L_088AC714;
    return;
L_088AC714:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC738;
      }
      goto L_088AC720;
    }
L_088AC720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC738;
      }
      goto L_088AC730;
    }
L_088AC730:
    ctx.gpr[31] = (0x088AC738u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AC738u) goto L_088AC738;
    return;
L_088AC738:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC74Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7232))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AC74Cu) goto L_088AC74C;
    return;
L_088AC74C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC780;
      }
      goto L_088AC758;
    }
L_088AC758:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19612));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC780;
L_088AC780:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC794;
      }
      goto L_088AC788;
    }
L_088AC788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC794;
L_088AC794:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC7A4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AC7A4u) goto L_088AC7A4;
    return;
L_088AC7A4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC7C8;
      }
      goto L_088AC7B0;
    }
L_088AC7B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC7C8;
      }
      goto L_088AC7C0;
    }
L_088AC7C0:
    ctx.gpr[31] = (0x088AC7C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AC7C8u) goto L_088AC7C8;
    return;
L_088AC7C8:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC7DCu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7231))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AC7DCu) goto L_088AC7DC;
    return;
L_088AC7DC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC810;
      }
      goto L_088AC7E8;
    }
L_088AC7E8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19488));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC810;
L_088AC810:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC824;
      }
      goto L_088AC818;
    }
L_088AC818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC824;
L_088AC824:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC834u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AC834u) goto L_088AC834;
    return;
L_088AC834:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC858;
      }
      goto L_088AC840;
    }
L_088AC840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC858;
      }
      goto L_088AC850;
    }
L_088AC850:
    ctx.gpr[31] = (0x088AC858u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AC858u) goto L_088AC858;
    return;
L_088AC858:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC86Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7248))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AC86Cu) goto L_088AC86C;
    return;
L_088AC86C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC8A0;
      }
      goto L_088AC878;
    }
L_088AC878:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19096));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC8A0;
L_088AC8A0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC8B4;
      }
      goto L_088AC8A8;
    }
L_088AC8A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC8B4;
L_088AC8B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC8C4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AC8C4u) goto L_088AC8C4;
    return;
L_088AC8C4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC8E8;
      }
      goto L_088AC8D0;
    }
L_088AC8D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC8E8;
      }
      goto L_088AC8E0;
    }
L_088AC8E0:
    ctx.gpr[31] = (0x088AC8E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AC8E8u) goto L_088AC8E8;
    return;
L_088AC8E8:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC8FCu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7214))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AC8FCu) goto L_088AC8FC;
    return;
L_088AC8FC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC930;
      }
      goto L_088AC908;
    }
L_088AC908:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22740));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC930;
L_088AC930:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC944;
      }
      goto L_088AC938;
    }
L_088AC938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC944;
L_088AC944:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC954u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AC954u) goto L_088AC954;
    return;
L_088AC954:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC978;
      }
      goto L_088AC960;
    }
L_088AC960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AC978;
      }
      goto L_088AC970;
    }
L_088AC970:
    ctx.gpr[31] = (0x088AC978u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AC978u) goto L_088AC978;
    return;
L_088AC978:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AC98Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7213))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AC98Cu) goto L_088AC98C;
    return;
L_088AC98C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AC9C0;
      }
      goto L_088AC998;
    }
L_088AC998:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23028));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AC9C0;
L_088AC9C0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AC9D4;
      }
      goto L_088AC9C8;
    }
L_088AC9C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AC9D4;
L_088AC9D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AC9E4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AC9E4u) goto L_088AC9E4;
    return;
L_088AC9E4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACA08;
      }
      goto L_088AC9F0;
    }
L_088AC9F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ACA08;
      }
      goto L_088ACA00;
    }
L_088ACA00:
    ctx.gpr[31] = (0x088ACA08u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088ACA08u) goto L_088ACA08;
    return;
L_088ACA08:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088ACA1Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7212))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088ACA1Cu) goto L_088ACA1C;
    return;
L_088ACA1C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088ACA50;
      }
      goto L_088ACA28;
    }
L_088ACA28:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21732));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088ACA50;
L_088ACA50:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088ACA64;
      }
      goto L_088ACA58;
    }
L_088ACA58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088ACA64;
L_088ACA64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088ACA74u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088ACA74u) goto L_088ACA74;
    return;
L_088ACA74:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACA98;
      }
      goto L_088ACA80;
    }
L_088ACA80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ACA98;
      }
      goto L_088ACA90;
    }
L_088ACA90:
    ctx.gpr[31] = (0x088ACA98u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088ACA98u) goto L_088ACA98;
    return;
L_088ACA98:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088ACAACu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7211))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088ACAACu) goto L_088ACAAC;
    return;
L_088ACAAC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088ACAE0;
      }
      goto L_088ACAB8;
    }
L_088ACAB8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2212u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27048));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088ACAE0;
L_088ACAE0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088ACAF4;
      }
      goto L_088ACAE8;
    }
L_088ACAE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088ACAF4;
L_088ACAF4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088ACB04u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088ACB04u) goto L_088ACB04;
    return;
L_088ACB04:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACB28;
      }
      goto L_088ACB10;
    }
L_088ACB10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ACB28;
      }
      goto L_088ACB20;
    }
L_088ACB20:
    ctx.gpr[31] = (0x088ACB28u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088ACB28u) goto L_088ACB28;
    return;
L_088ACB28:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088ACB3Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7408))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088ACB3Cu) goto L_088ACB3C;
    return;
L_088ACB3C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088ACB70;
      }
      goto L_088ACB48;
    }
L_088ACB48:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4492));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088ACB70;
L_088ACB70:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088ACB84;
      }
      goto L_088ACB78;
    }
L_088ACB78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088ACB84;
L_088ACB84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088ACB94u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088ACB94u) goto L_088ACB94;
    return;
L_088ACB94:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACBB8;
      }
      goto L_088ACBA0;
    }
L_088ACBA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ACBB8;
      }
      goto L_088ACBB0;
    }
L_088ACBB0:
    ctx.gpr[31] = (0x088ACBB8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088ACBB8u) goto L_088ACBB8;
    return;
L_088ACBB8:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088ACBCCu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-8080))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088ACBCCu) goto L_088ACBCC;
    return;
L_088ACBCC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088ACC00;
      }
      goto L_088ACBD8;
    }
L_088ACBD8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1772));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088ACC00;
L_088ACC00:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088ACC14;
      }
      goto L_088ACC08;
    }
L_088ACC08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088ACC14;
L_088ACC14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088ACC24u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088ACC24u) goto L_088ACC24;
    return;
L_088ACC24:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACC48;
      }
      goto L_088ACC30;
    }
L_088ACC30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ACC48;
      }
      goto L_088ACC40;
    }
L_088ACC40:
    ctx.gpr[31] = (0x088ACC48u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088ACC48u) goto L_088ACC48;
    return;
L_088ACC48:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088ACC5Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7210))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088ACC5Cu) goto L_088ACC5C;
    return;
L_088ACC5C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088ACC90;
      }
      goto L_088ACC68;
    }
L_088ACC68:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088ACC90;
L_088ACC90:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088ACCA4;
      }
      goto L_088ACC98;
    }
L_088ACC98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088ACCA4;
L_088ACCA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088ACCB4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088ACCB4u) goto L_088ACCB4;
    return;
L_088ACCB4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACCD8;
      }
      goto L_088ACCC0;
    }
L_088ACCC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ACCD8;
      }
      goto L_088ACCD0;
    }
L_088ACCD0:
    ctx.gpr[31] = (0x088ACCD8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088ACCD8u) goto L_088ACCD8;
    return;
L_088ACCD8:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088ACCECu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7209))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088ACCECu) goto L_088ACCEC;
    return;
L_088ACCEC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088ACD20;
      }
      goto L_088ACCF8;
    }
L_088ACCF8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-968));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088ACD20;
L_088ACD20:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088ACD34;
      }
      goto L_088ACD28;
    }
L_088ACD28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088ACD34;
L_088ACD34:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088ACD44u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088ACD44u) goto L_088ACD44;
    return;
L_088ACD44:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACD68;
      }
      goto L_088ACD50;
    }
L_088ACD50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ACD68;
      }
      goto L_088ACD60;
    }
L_088ACD60:
    ctx.gpr[31] = (0x088ACD68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088ACD68u) goto L_088ACD68;
    return;
L_088ACD68:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088ACD7Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7208))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088ACD7Cu) goto L_088ACD7C;
    return;
L_088ACD7C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088ACDB0;
      }
      goto L_088ACD88;
    }
L_088ACD88:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12932));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088ACDB0;
L_088ACDB0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088ACDC4;
      }
      goto L_088ACDB8;
    }
L_088ACDB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088ACDC4;
L_088ACDC4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088ACDD4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088ACDD4u) goto L_088ACDD4;
    return;
L_088ACDD4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACDF8;
      }
      goto L_088ACDE0;
    }
L_088ACDE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ACDF8;
      }
      goto L_088ACDF0;
    }
L_088ACDF0:
    ctx.gpr[31] = (0x088ACDF8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088ACDF8u) goto L_088ACDF8;
    return;
L_088ACDF8:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088ACE0Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7207))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088ACE0Cu) goto L_088ACE0C;
    return;
L_088ACE0C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088ACE40;
      }
      goto L_088ACE18;
    }
L_088ACE18:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12880));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088ACE40;
L_088ACE40:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088ACE54;
      }
      goto L_088ACE48;
    }
L_088ACE48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088ACE54;
L_088ACE54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088ACE64u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088ACE64u) goto L_088ACE64;
    return;
L_088ACE64:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACE88;
      }
      goto L_088ACE70;
    }
L_088ACE70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ACE88;
      }
      goto L_088ACE80;
    }
L_088ACE80:
    ctx.gpr[31] = (0x088ACE88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088ACE88u) goto L_088ACE88;
    return;
L_088ACE88:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088ACE9Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7206))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088ACE9Cu) goto L_088ACE9C;
    return;
L_088ACE9C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088ACED0;
      }
      goto L_088ACEA8;
    }
L_088ACEA8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2189u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17920));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088ACED0;
L_088ACED0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088ACEE4;
      }
      goto L_088ACED8;
    }
L_088ACED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088ACEE4;
L_088ACEE4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088ACEF4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088ACEF4u) goto L_088ACEF4;
    return;
L_088ACEF4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACF18;
      }
      goto L_088ACF00;
    }
L_088ACF00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ACF18;
      }
      goto L_088ACF10;
    }
L_088ACF10:
    ctx.gpr[31] = (0x088ACF18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088ACF18u) goto L_088ACF18;
    return;
L_088ACF18:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088ACF2Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7236))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088ACF2Cu) goto L_088ACF2C;
    return;
L_088ACF2C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088ACF60;
      }
      goto L_088ACF38;
    }
L_088ACF38:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18924));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088ACF60;
L_088ACF60:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088ACF74;
      }
      goto L_088ACF68;
    }
L_088ACF68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088ACF74;
L_088ACF74:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088ACF84u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088ACF84u) goto L_088ACF84;
    return;
L_088ACF84:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACFA8;
      }
      goto L_088ACF90;
    }
L_088ACF90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ACFA8;
      }
      goto L_088ACFA0;
    }
L_088ACFA0:
    ctx.gpr[31] = (0x088ACFA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088ACFA8u) goto L_088ACFA8;
    return;
L_088ACFA8:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088ACFBCu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7245))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088ACFBCu) goto L_088ACFBC;
    return;
L_088ACFBC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088ACFF0;
      }
      goto L_088ACFC8;
    }
L_088ACFC8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18840));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088ACFF0;
L_088ACFF0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD004;
      }
      goto L_088ACFF8;
    }
L_088ACFF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD004;
L_088AD004:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD014u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AD014u) goto L_088AD014;
    return;
L_088AD014:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD038;
      }
      goto L_088AD020;
    }
L_088AD020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD038;
      }
      goto L_088AD030;
    }
L_088AD030:
    ctx.gpr[31] = (0x088AD038u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AD038u) goto L_088AD038;
    return;
L_088AD038:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD04Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7244))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AD04Cu) goto L_088AD04C;
    return;
L_088AD04C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD080;
      }
      goto L_088AD058;
    }
L_088AD058:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18776));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD080;
L_088AD080:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD094;
      }
      goto L_088AD088;
    }
L_088AD088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD094;
L_088AD094:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD0A4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AD0A4u) goto L_088AD0A4;
    return;
L_088AD0A4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD0C8;
      }
      goto L_088AD0B0;
    }
L_088AD0B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD0C8;
      }
      goto L_088AD0C0;
    }
L_088AD0C0:
    ctx.gpr[31] = (0x088AD0C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AD0C8u) goto L_088AD0C8;
    return;
L_088AD0C8:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD0DCu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7243))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AD0DCu) goto L_088AD0DC;
    return;
L_088AD0DC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD110;
      }
      goto L_088AD0E8;
    }
L_088AD0E8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18656));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD110;
L_088AD110:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD124;
      }
      goto L_088AD118;
    }
L_088AD118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD124;
L_088AD124:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD134u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AD134u) goto L_088AD134;
    return;
L_088AD134:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD158;
      }
      goto L_088AD140;
    }
L_088AD140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD158;
      }
      goto L_088AD150;
    }
L_088AD150:
    ctx.gpr[31] = (0x088AD158u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AD158u) goto L_088AD158;
    return;
L_088AD158:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD16Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7242))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AD16Cu) goto L_088AD16C;
    return;
L_088AD16C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD1A0;
      }
      goto L_088AD178;
    }
L_088AD178:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18404));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD1A0;
L_088AD1A0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD1B4;
      }
      goto L_088AD1A8;
    }
L_088AD1A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD1B4;
L_088AD1B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD1C4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AD1C4u) goto L_088AD1C4;
    return;
L_088AD1C4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD1E8;
      }
      goto L_088AD1D0;
    }
L_088AD1D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD1E8;
      }
      goto L_088AD1E0;
    }
L_088AD1E0:
    ctx.gpr[31] = (0x088AD1E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AD1E8u) goto L_088AD1E8;
    return;
L_088AD1E8:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD1FCu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7241))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AD1FCu) goto L_088AD1FC;
    return;
L_088AD1FC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD230;
      }
      goto L_088AD208;
    }
L_088AD208:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18244));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD230;
L_088AD230:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD244;
      }
      goto L_088AD238;
    }
L_088AD238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD244;
L_088AD244:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD254u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AD254u) goto L_088AD254;
    return;
L_088AD254:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD278;
      }
      goto L_088AD260;
    }
L_088AD260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD278;
      }
      goto L_088AD270;
    }
L_088AD270:
    ctx.gpr[31] = (0x088AD278u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AD278u) goto L_088AD278;
    return;
L_088AD278:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD28Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7240))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AD28Cu) goto L_088AD28C;
    return;
L_088AD28C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD2C0;
      }
      goto L_088AD298;
    }
L_088AD298:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18104));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD2C0;
L_088AD2C0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD2D4;
      }
      goto L_088AD2C8;
    }
L_088AD2C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD2D4;
L_088AD2D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD2E4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AD2E4u) goto L_088AD2E4;
    return;
L_088AD2E4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD308;
      }
      goto L_088AD2F0;
    }
L_088AD2F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD308;
      }
      goto L_088AD300;
    }
L_088AD300:
    ctx.gpr[31] = (0x088AD308u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AD308u) goto L_088AD308;
    return;
L_088AD308:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD31Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7239))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AD31Cu) goto L_088AD31C;
    return;
L_088AD31C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD350;
      }
      goto L_088AD328;
    }
L_088AD328:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17672));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD350;
L_088AD350:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD364;
      }
      goto L_088AD358;
    }
L_088AD358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD364;
L_088AD364:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD374u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AD374u) goto L_088AD374;
    return;
L_088AD374:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD398;
      }
      goto L_088AD380;
    }
L_088AD380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD398;
      }
      goto L_088AD390;
    }
L_088AD390:
    ctx.gpr[31] = (0x088AD398u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AD398u) goto L_088AD398;
    return;
L_088AD398:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD3ACu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7238))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AD3ACu) goto L_088AD3AC;
    return;
L_088AD3AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD3E0;
      }
      goto L_088AD3B8;
    }
L_088AD3B8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17512));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD3E0;
L_088AD3E0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD3F4;
      }
      goto L_088AD3E8;
    }
L_088AD3E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD3F4;
L_088AD3F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD404u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AD404u) goto L_088AD404;
    return;
L_088AD404:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD428;
      }
      goto L_088AD410;
    }
L_088AD410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD428;
      }
      goto L_088AD420;
    }
L_088AD420:
    ctx.gpr[31] = (0x088AD428u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AD428u) goto L_088AD428;
    return;
L_088AD428:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD43Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7205))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AD43Cu) goto L_088AD43C;
    return;
L_088AD43C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD470;
      }
      goto L_088AD448;
    }
L_088AD448:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-516));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD470;
L_088AD470:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD484;
      }
      goto L_088AD478;
    }
L_088AD478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD484;
L_088AD484:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD494u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AD494u) goto L_088AD494;
    return;
L_088AD494:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD4B8;
      }
      goto L_088AD4A0;
    }
L_088AD4A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD4B8;
      }
      goto L_088AD4B0;
    }
L_088AD4B0:
    ctx.gpr[31] = (0x088AD4B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AD4B8u) goto L_088AD4B8;
    return;
L_088AD4B8:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD4CCu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7204))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AD4CCu) goto L_088AD4CC;
    return;
L_088AD4CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD500;
      }
      goto L_088AD4D8;
    }
L_088AD4D8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2200u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9504));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD500;
L_088AD500:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD514;
      }
      goto L_088AD508;
    }
L_088AD508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD514;
L_088AD514:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD524u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AD524u) goto L_088AD524;
    return;
L_088AD524:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD548;
      }
      goto L_088AD530;
    }
L_088AD530:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD548;
      }
      goto L_088AD540;
    }
L_088AD540:
    ctx.gpr[31] = (0x088AD548u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AD548u) goto L_088AD548;
    return;
L_088AD548:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD55Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7203))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AD55Cu) goto L_088AD55C;
    return;
L_088AD55C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD590;
      }
      goto L_088AD568;
    }
L_088AD568:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23656));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD590;
L_088AD590:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD5A4;
      }
      goto L_088AD598;
    }
L_088AD598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD5A4;
L_088AD5A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD5B4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AD5B4u) goto L_088AD5B4;
    return;
L_088AD5B4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD5D8;
      }
      goto L_088AD5C0;
    }
L_088AD5C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD5D8;
      }
      goto L_088AD5D0;
    }
L_088AD5D0:
    ctx.gpr[31] = (0x088AD5D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AD5D8u) goto L_088AD5D8;
    return;
L_088AD5D8:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD5ECu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7202))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AD5ECu) goto L_088AD5EC;
    return;
L_088AD5EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD620;
      }
      goto L_088AD5F8;
    }
L_088AD5F8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23756));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD620;
L_088AD620:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD634;
      }
      goto L_088AD628;
    }
L_088AD628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD634;
L_088AD634:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD644u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AD644u) goto L_088AD644;
    return;
L_088AD644:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD668;
      }
      goto L_088AD650;
    }
L_088AD650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD668;
      }
      goto L_088AD660;
    }
L_088AD660:
    ctx.gpr[31] = (0x088AD668u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AD668u) goto L_088AD668;
    return;
L_088AD668:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD67Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7201))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AD67Cu) goto L_088AD67C;
    return;
L_088AD67C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD6B0;
      }
      goto L_088AD688;
    }
L_088AD688:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12136));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD6B0;
L_088AD6B0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD6C4;
      }
      goto L_088AD6B8;
    }
L_088AD6B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD6C4;
L_088AD6C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD6D4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AD6D4u) goto L_088AD6D4;
    return;
L_088AD6D4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD6F8;
      }
      goto L_088AD6E0;
    }
L_088AD6E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD6F8;
      }
      goto L_088AD6F0;
    }
L_088AD6F0:
    ctx.gpr[31] = (0x088AD6F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AD6F8u) goto L_088AD6F8;
    return;
L_088AD6F8:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD70Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7247))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AD70Cu) goto L_088AD70C;
    return;
L_088AD70C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD740;
      }
      goto L_088AD718;
    }
L_088AD718:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19356));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD740;
L_088AD740:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD754;
      }
      goto L_088AD748;
    }
L_088AD748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD754;
L_088AD754:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD764u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AD764u) goto L_088AD764;
    return;
L_088AD764:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD788;
      }
      goto L_088AD770;
    }
L_088AD770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD788;
      }
      goto L_088AD780;
    }
L_088AD780:
    ctx.gpr[31] = (0x088AD788u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AD788u) goto L_088AD788;
    return;
L_088AD788:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x088AD79Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7246))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AD79Cu) goto L_088AD79C;
    return;
L_088AD79C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AD7D0;
      }
      goto L_088AD7A8;
    }
L_088AD7A8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19288));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088AD7D0;
L_088AD7D0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AD7E4;
      }
      goto L_088AD7D8;
    }
L_088AD7D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AD7E4;
L_088AD7E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AD7F4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x088AD7F4u) goto L_088AD7F4;
    return;
L_088AD7F4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD818;
      }
      goto L_088AD800;
    }
L_088AD800:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088AD818;
      }
      goto L_088AD810;
    }
L_088AD810:
    ctx.gpr[31] = (0x088AD818u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088AD818u) goto L_088AD818;
    return;
L_088AD818:
    ctx.gpr[31] = (0x088AD820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 647u, 0x08877F78u>(ctx, &aot_mem) && ctx.pc == 0x088AD820u) goto L_088AD820;
    return;
L_088AD820:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16401), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16402), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16406), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[31] = (0x088AD844u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 469u, 0x089EE874u>(ctx, &aot_mem) && ctx.pc == 0x088AD844u) goto L_088AD844;
    return;
L_088AD844:
    ctx.gpr[31] = (0x088AD84Cu);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 468u, 0x089EE868u>(ctx, &aot_mem) && ctx.pc == 0x088AD84Cu) goto L_088AD84C;
    return;
L_088AD84C:
    ctx.gpr[31] = (0x088AD854u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(172));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 156u, 0x08AB8B04u>(ctx, &aot_mem) && ctx.pc == 0x088AD854u) goto L_088AD854;
    return;
L_088AD854:
    ctx.gpr[31] = (0x088AD85Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(204));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 472u, 0x089D1D40u>(ctx, &aot_mem) && ctx.pc == 0x088AD85Cu) goto L_088AD85C;
    return;
L_088AD85C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x088AD86Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 75u, 0x089C052Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD86Cu) goto L_088AD86C;
    return;
L_088AD86C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088AD890u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 94u, 0x088A84F4u>(ctx, &aot_mem) && ctx.pc == 0x088AD890u) goto L_088AD890;
    return;
L_088AD890:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088AD8B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 621u, 0x088AABC4u>(ctx, &aot_mem) && ctx.pc == 0x088AD8B8u) goto L_088AD8B8;
    return;
L_088AD8B8:
    ctx.gpr[31] = (0x088AD8C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 574u, 0x088AA940u>(ctx, &aot_mem) && ctx.pc == 0x088AD8C0u) goto L_088AD8C0;
    return;
L_088AD8C0:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-8068), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (0u | 100u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(268), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(269), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29520), 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[31] = (0x088AD8F8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 287u, 0x08A7D89Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD8F8u) goto L_088AD8F8;
    return;
L_088AD8F8:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088AD920;
      }
      goto L_088AD914;
    }
L_088AD914:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AD920u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x088AD920u) goto L_088AD920;
    return;
L_088AD920:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AD944:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AD980u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5048));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088AD980u) goto L_088AD980;
    return;
L_088AD980:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7200), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[31] = (0x088AD99Cu);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 139u, 0x08974A10u>(ctx, &aot_mem) && ctx.pc == 0x088AD99Cu) goto L_088AD99C;
    return;
L_088AD99C:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[31] = (0x088AD9A8u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-30636), static_cast<std::uint8_t>(ctx.gpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 5u, 0x08938108u>(ctx, &aot_mem) && ctx.pc == 0x088AD9A8u) goto L_088AD9A8;
    return;
L_088AD9A8:
    ctx.gpr[31] = (0x088AD9B0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(172));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 248u, 0x08AB9268u>(ctx, &aot_mem) && ctx.pc == 0x088AD9B0u) goto L_088AD9B0;
    return;
L_088AD9B0:
    ctx.gpr[31] = (0x088AD9B8u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(204));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 509u, 0x089D1FB8u>(ctx, &aot_mem) && ctx.pc == 0x088AD9B8u) goto L_088AD9B8;
    return;
L_088AD9B8:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-30636), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(244)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[30] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[23] = (2230u << 16u);
      if (branch_taken) {
          goto L_088ADA20;
      }
      goto L_088AD9F0;
    }
L_088AD9F0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ADA0C;
      }
      goto L_088ADA00;
    }
L_088ADA00:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(244)));
    goto L_088ADA0C;
L_088ADA0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD9F0;
      }
      goto L_088ADA20;
    }
L_088ADA20:
    ctx.gpr[31] = (0x088ADA28u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 558u, 0x088AA888u>(ctx, &aot_mem) && ctx.pc == 0x088ADA28u) goto L_088ADA28;
    return;
L_088ADA28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7228)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ADA64;
      }
      goto L_088ADA34;
    }
L_088ADA34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088ADA5C;
      }
      goto L_088ADA48;
    }
L_088ADA48:
    ctx.gpr[31] = (0x088ADA50u);
    // nop
    ctx.pc = 0x08B0BDECu;
    return;
L_088ADA50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7228)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
      if (branch_taken) {
          goto L_088ADA64;
      }
      goto L_088ADA5C;
    }
L_088ADA5C:
    ctx.gpr[31] = (0x088ADA64u);
    // nop
    ctx.pc = 0x08B0BDF4u;
    return;
L_088ADA64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ADAA0;
      }
      goto L_088ADA70;
    }
L_088ADA70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088ADA98;
      }
      goto L_088ADA84;
    }
L_088ADA84:
    ctx.gpr[31] = (0x088ADA8Cu);
    // nop
    ctx.pc = 0x08B0BDECu;
    return;
L_088ADA8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7224)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
      if (branch_taken) {
          goto L_088ADAA0;
      }
      goto L_088ADA98;
    }
L_088ADA98:
    ctx.gpr[31] = (0x088ADAA0u);
    // nop
    ctx.pc = 0x08B0BDF4u;
    return;
L_088ADAA0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-7224), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-7228), 0u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[31] = (0x088ADAB4u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 24u, 0x089C0178u>(ctx, &aot_mem) && ctx.pc == 0x088ADAB4u) goto L_088ADAB4;
    return;
L_088ADAB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ADB9C;
      }
      goto L_088ADAC0;
    }
L_088ADAC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ADB9C;
      }
      goto L_088ADAD8;
    }
L_088ADAD8:
    ctx.gpr[31] = (0x088ADAE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 234u, 0x0886D92Cu>(ctx, &aot_mem) && ctx.pc == 0x088ADAE0u) goto L_088ADAE0;
    return;
L_088ADAE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (2225u << 16u);
      if (branch_taken) {
          goto L_088ADB7C;
      }
      goto L_088ADB0C;
    }
L_088ADB0C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5076));
    goto L_088ADB14;
L_088ADB14:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
        goto L_088ADB58;
    }
    goto L_088ADB24;
L_088ADB24:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088ADB30u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088ADB30u) goto L_088ADB30;
    return;
L_088ADB30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088ADB44u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 704u, 0x088AB150u>(ctx, &aot_mem) && ctx.pc == 0x088ADB44u) goto L_088ADB44;
    return;
L_088ADB44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    goto L_088ADB58;
L_088ADB58:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088ADB14;
      }
      goto L_088ADB7C;
    }
L_088ADB7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x088ADB88u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0886D288u>(ctx, &aot_mem) && ctx.pc == 0x088ADB88u) goto L_088ADB88;
    return;
L_088ADB88:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x088ADB98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26464));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x088ADB98u) goto L_088ADB98;
    return;
L_088ADB98:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), 0u);
    goto L_088ADB9C;
L_088ADB9C:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088ADBB0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 313u, 0x089E1BB8u>(ctx, &aot_mem) && ctx.pc == 0x088ADBB0u) goto L_088ADBB0;
    return;
L_088ADBB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(156), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
      if (branch_taken) {
          goto L_088ADBF0;
      }
      goto L_088ADBDC;
    }
L_088ADBDC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ADC04;
      }
      goto L_088ADBF0;
    }
L_088ADBF0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x088ADC04u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 695u, 0x08AFF018u>(ctx, &aot_mem) && ctx.pc == 0x088ADC04u) goto L_088ADC04;
    return;
L_088ADC04:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x088ADC10u);
    ctx.gpr[4] = (0u | 112u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088ADC10u) goto L_088ADC10;
    return;
L_088ADC10:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088ADC28;
      }
      goto L_088ADC1C;
    }
L_088ADC1C:
    ctx.gpr[31] = (0x088ADC24u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 699u, 0x088AB08Cu>(ctx, &aot_mem) && ctx.pc == 0x088ADC24u) goto L_088ADC24;
    return;
L_088ADC24:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_088ADC28;
L_088ADC28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[21]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(156), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(132), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(228), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 131u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x088ADC88u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 35u, 0x089682E0u>(ctx, &aot_mem) && ctx.pc == 0x088ADC88u) goto L_088ADC88;
    return;
L_088ADC88:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x088ADC94u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-8008), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 303u, 0x08879C88u>(ctx, &aot_mem) && ctx.pc == 0x088ADC94u) goto L_088ADC94;
    return;
L_088ADC94:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088ADCCC;
      }
      goto L_088ADCA0;
    }
L_088ADCA0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x088ADCACu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088ADCACu) goto L_088ADCAC;
    return;
L_088ADCAC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ADCC4;
      }
      goto L_088ADCB8;
    }
L_088ADCB8:
    ctx.gpr[31] = (0x088ADCC0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x088ADCC0u) goto L_088ADCC0;
    return;
L_088ADCC0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_088ADCC4;
L_088ADCC4:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088ADCCC;
L_088ADCCC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088ADCDCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5096));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x088ADCDCu) goto L_088ADCDC;
    return;
L_088ADCDC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x088ADD00u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 495u, 0x0887B020u>(ctx, &aot_mem) && ctx.pc == 0x088ADD00u) goto L_088ADD00;
    return;
L_088ADD00:
    ctx.gpr[31] = (0x088ADD08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 294u, 0x0883D760u>(ctx, &aot_mem) && ctx.pc == 0x088ADD08u) goto L_088ADD08;
    return;
L_088ADD08:
    ctx.gpr[31] = (0x088ADD10u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 621u, 0x088AABC4u>(ctx, &aot_mem) && ctx.pc == 0x088ADD10u) goto L_088ADD10;
    return;
L_088ADD10:
    ctx.gpr[31] = (0x088ADD18u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 570u, 0x088AA90Cu>(ctx, &aot_mem) && ctx.pc == 0x088ADD18u) goto L_088ADD18;
    return;
L_088ADD18:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088ADD24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 155u, 0x08AA4C78u>(ctx, &aot_mem) && ctx.pc == 0x088ADD24u) goto L_088ADD24;
    return;
L_088ADD24:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[31] = (0x088ADD34u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 521u, 0x089C63A4u>(ctx, &aot_mem) && ctx.pc == 0x088ADD34u) goto L_088ADD34;
    return;
L_088ADD34:
    ctx.gpr[31] = (0x088ADD3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 533u, 0x089C648Cu>(ctx, &aot_mem) && ctx.pc == 0x088ADD3Cu) goto L_088ADD3C;
    return;
L_088ADD3C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088ADD48u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088ADD48u) goto L_088ADD48;
    return;
L_088ADD48:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(260), ctx.gpr[21]);
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29620), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x088ADD60u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-8068), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 176u, 0x0893CE54u>(ctx, &aot_mem) && ctx.pc == 0x088ADD60u) goto L_088ADD60;
    return;
L_088ADD60:
    ctx.gpr[31] = (0x088ADD68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 155u, 0x08914C90u>(ctx, &aot_mem) && ctx.pc == 0x088ADD68u) goto L_088ADD68;
    return;
L_088ADD68:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088ADD7Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 390u, 0x088EE848u>(ctx, &aot_mem) && ctx.pc == 0x088ADD7Cu) goto L_088ADD7C;
    return;
L_088ADD7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ADE30;
      }
      goto L_088ADDA4;
    }
L_088ADDA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088ADDE0;
      }
      goto L_088ADDB4;
    }
L_088ADDB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ADDD4;
      }
      goto L_088ADDC0;
    }
L_088ADDC0:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_088ADDD4;
    }
    goto L_088ADDC8;
L_088ADDC8:
    ctx.gpr[31] = (0x088ADDD0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x088ADDD0u) goto L_088ADDD0;
    return;
L_088ADDD0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_088ADDD4;
L_088ADDD4:
    ctx.gpr[31] = (0x088ADDDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x088ADDDCu) goto L_088ADDDC;
    return;
L_088ADDDC:
    ctx.gpr[4] = (0u | 1u);
    goto L_088ADDE0;
L_088ADDE0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088ADE0Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x088ADE0Cu) goto L_088ADE0C;
    return;
L_088ADE0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(848), 0u);
    goto L_088ADE30;
L_088ADE30:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25839), static_cast<std::uint8_t>(0u));
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
L_088ADE68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088ADEC0;
      }
      goto L_088ADEA0;
    }
L_088ADEA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088ADEC4;
      }
      goto L_088ADEBC;
    }
L_088ADEBC:
    ctx.gpr[4] = (0u | 1u);
    goto L_088ADEC0;
L_088ADEC0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088ADEC4;
L_088ADEC4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_088ADFFC;
      }
      goto L_088ADECC;
    }
L_088ADECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
        goto L_088ADEE4;
    }
    goto L_088ADED8;
L_088ADED8:
    ctx.gpr[31] = (0x088ADEE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x088ADEE0u) goto L_088ADEE0;
    return;
L_088ADEE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    goto L_088ADEE4;
L_088ADEE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088ADF04;
      }
      goto L_088ADEF4;
    }
L_088ADEF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088ADF0C;
      }
      goto L_088ADF04;
    }
L_088ADF04:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088ADF0C;
L_088ADF0C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ADFFC;
      }
      goto L_088ADF14;
    }
L_088ADF14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ADFFC;
      }
      goto L_088ADF20;
    }
L_088ADF20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ADFFC;
      }
      goto L_088ADF3C;
    }
L_088ADF3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(225)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ADFFC;
      }
      goto L_088ADF48;
    }
L_088ADF48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(72))))));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ADFF4;
      }
      goto L_088ADF80;
    }
L_088ADF80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(220)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), ctx.gpr[6]);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x088ADFC4u);
    ctx.gpr[19] = (ctx.gpr[6] + static_cast<std::uint32_t>(5104));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 7u, 0x088A8058u>(ctx, &aot_mem) && ctx.pc == 0x088ADFC4u) goto L_088ADFC4;
    return;
L_088ADFC4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088ADFD8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088ABC88u>(ctx, &aot_mem) && ctx.pc == 0x088ADFD8u) goto L_088ADFD8;
    return;
L_088ADFD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088AE004;
      }
      goto L_088ADFEC;
    }
L_088ADFEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088AE014;
      }
      goto L_088ADFF4;
    }
L_088ADFF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE408;
      }
      goto L_088ADFFC;
    }
L_088ADFFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE408;
      }
      goto L_088AE004;
    }
L_088AE004:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088AE010u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE010u) goto L_088AE010;
    return;
L_088AE010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    goto L_088AE014;
L_088AE014:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE0CC;
      }
      goto L_088AE060;
    }
L_088AE060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE094;
      }
      goto L_088AE070;
    }
L_088AE070:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088AE094u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AE094u) goto L_088AE094;
    return;
L_088AE094:
    ctx.gpr[31] = (0x088AE09Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 888u, 0x08AFBD8Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE09Cu) goto L_088AE09C;
    return;
L_088AE09C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AE060;
      }
      goto L_088AE0CC;
    }
L_088AE0CC:
    ctx.gpr[31] = (0x088AE0D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088AF290;
L_088AE0D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088AE100;
      }
      goto L_088AE0E0;
    }
L_088AE0E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088AE104;
      }
      goto L_088AE0FC;
    }
L_088AE0FC:
    ctx.gpr[4] = (0u | 1u);
    goto L_088AE100;
L_088AE100:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088AE104;
L_088AE104:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE194;
      }
      goto L_088AE10C;
    }
L_088AE10C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
        goto L_088AE124;
    }
    goto L_088AE118;
L_088AE118:
    ctx.gpr[31] = (0x088AE120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE120u) goto L_088AE120;
    return;
L_088AE120:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    goto L_088AE124;
L_088AE124:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088AE144;
      }
      goto L_088AE134;
    }
L_088AE134:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088AE14C;
      }
      goto L_088AE144;
    }
L_088AE144:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088AE14C;
L_088AE14C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AE194;
      }
      goto L_088AE154;
    }
L_088AE154:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(225)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE194;
      }
      goto L_088AE160;
    }
L_088AE160:
    ctx.gpr[31] = (0x088AE168u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(172));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 233u, 0x08AB91ACu>(ctx, &aot_mem) && ctx.pc == 0x088AE168u) goto L_088AE168;
    return;
L_088AE168:
    ctx.gpr[31] = (0x088AE170u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(204));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 514u, 0x089D2020u>(ctx, &aot_mem) && ctx.pc == 0x088AE170u) goto L_088AE170;
    return;
L_088AE170:
    ctx.gpr[31] = (0x088AE178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 822u, 0x08997CA4u>(ctx, &aot_mem) && ctx.pc == 0x088AE178u) goto L_088AE178;
    return;
L_088AE178:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    ctx.gpr[18] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5736));
      if (branch_taken) {
          goto L_088AE19C;
      }
      goto L_088AE18C;
    }
L_088AE18C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE1A4;
      }
      goto L_088AE194;
    }
L_088AE194:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE408;
      }
      goto L_088AE19C;
    }
L_088AE19C:
    ctx.gpr[31] = (0x088AE1A4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088AD944;
L_088AE1A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088AE1D0;
      }
      goto L_088AE1B0;
    }
L_088AE1B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088AE1D4;
      }
      goto L_088AE1CC;
    }
L_088AE1CC:
    ctx.gpr[4] = (0u | 1u);
    goto L_088AE1D0;
L_088AE1D0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088AE1D4;
L_088AE1D4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE224;
      }
      goto L_088AE1DC;
    }
L_088AE1DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
        goto L_088AE1F4;
    }
    goto L_088AE1E8;
L_088AE1E8:
    ctx.gpr[31] = (0x088AE1F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE1F0u) goto L_088AE1F0;
    return;
L_088AE1F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    goto L_088AE1F4;
L_088AE1F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088AE214;
      }
      goto L_088AE204;
    }
L_088AE204:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088AE21C;
      }
      goto L_088AE214;
    }
L_088AE214:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088AE21C;
L_088AE21C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
        goto L_088AE22C;
    }
    goto L_088AE224;
L_088AE224:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE408;
      }
      goto L_088AE22C;
    }
L_088AE22C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (17658u << 16u);
      if (branch_taken) {
          goto L_088AE314;
      }
      goto L_088AE254;
    }
L_088AE254:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[4] = (17786u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088AE268;
L_088AE268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
        goto L_088AE2EC;
    }
    goto L_088AE27C;
L_088AE27C:
    ctx.gpr[19] = (0u | 32768u);
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AE290u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A7DE0u>(ctx, &aot_mem) && ctx.pc == 0x088AE290u) goto L_088AE290;
    return;
L_088AE290:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE2D4;
      }
      goto L_088AE298;
    }
L_088AE298:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AE2A4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A7DE0u>(ctx, &aot_mem) && ctx.pc == 0x088AE2A4u) goto L_088AE2A4;
    return;
L_088AE2A4:
    ctx.gpr[31] = (0x088AE2ACu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 123u, 0x08A34C08u>(ctx, &aot_mem) && ctx.pc == 0x088AE2ACu) goto L_088AE2AC;
    return;
L_088AE2AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088AE2D4;
L_088AE2D4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088AE2E8u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 29u, 0x089C01E0u>(ctx, &aot_mem) && ctx.pc == 0x088AE2E8u) goto L_088AE2E8;
    return;
L_088AE2E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    goto L_088AE2EC;
L_088AE2EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088AE268;
      }
      goto L_088AE314;
    }
L_088AE314:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AE324u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A7DE0u>(ctx, &aot_mem) && ctx.pc == 0x088AE324u) goto L_088AE324;
    return;
L_088AE324:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE398;
      }
      goto L_088AE32C;
    }
L_088AE32C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x088AE33Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A7DE0u>(ctx, &aot_mem) && ctx.pc == 0x088AE33Cu) goto L_088AE33C;
    return;
L_088AE33C:
    ctx.gpr[31] = (0x088AE344u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 123u, 0x08A34C08u>(ctx, &aot_mem) && ctx.pc == 0x088AE344u) goto L_088AE344;
    return;
L_088AE344:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (17658u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (17786u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x088AE398u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 51u, 0x089C032Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE398u) goto L_088AE398;
    return;
L_088AE398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AE400;
      }
      goto L_088AE3A8;
    }
L_088AE3A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE400;
      }
      goto L_088AE3C0;
    }
L_088AE3C0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088AE400;
      }
      goto L_088AE3D4;
    }
L_088AE3D4:
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7235)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AE400u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x088AE400u) goto L_088AE400;
    return;
L_088AE400:
    ctx.gpr[31] = (0x088AE408u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 643u, 0x0886FCF8u>(ctx, &aot_mem) && ctx.pc == 0x088AE408u) goto L_088AE408;
    return;
L_088AE408:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AE434:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AE470u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5132));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088AE470u) goto L_088AE470;
    return;
L_088AE470:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AE49C;
      }
      goto L_088AE47C;
    }
L_088AE47C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088AE488u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5156));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088AE488u) goto L_088AE488;
    return;
L_088AE488:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x088AE494u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    goto L_088AD944;
L_088AE494:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088AEAAC;
      }
      goto L_088AE49C;
    }
L_088AE49C:
    ctx.gpr[4] = (0u | 216u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7343)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (18766u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17999));
    ctx.gpr[22] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[22]));
    ctx.gpr[7] = (2224u << 16u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[22]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[31] = (0x088AE4DCu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-12756));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x088AE4DCu) goto L_088AE4DC;
    return;
L_088AE4DC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5200));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21288));
    ctx.gpr[5] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5440));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5240));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[4]);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[20] = (2230u << 16u);
    goto L_088AE524;
L_088AE524:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20928)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(120));
      if (branch_taken) {
          goto L_088AE540;
      }
      goto L_088AE530;
    }
L_088AE530:
    ctx.gpr[31] = (0x088AE538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 533u, 0x08AFA59Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE538u) goto L_088AE538;
    return;
L_088AE538:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20928)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(120));
    goto L_088AE540;
L_088AE540:
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(226), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(227), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(228), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(229), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088AE598;
      }
      goto L_088AE574;
    }
L_088AE574:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_088AE59C;
    }
    goto L_088AE584;
L_088AE584:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088AE59C;
      }
      goto L_088AE594;
    }
L_088AE594:
    ctx.gpr[4] = (0u | 1u);
    goto L_088AE598;
L_088AE598:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088AE59C;
L_088AE59C:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE780;
      }
      goto L_088AE5AC;
    }
L_088AE5AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20932)));
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[17]);
        goto L_088AE5C8;
    }
    goto L_088AE5B8;
L_088AE5B8:
    ctx.gpr[31] = (0x088AE5C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE5C0u) goto L_088AE5C0;
    return;
L_088AE5C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20932)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[17]);
    goto L_088AE5C8;
L_088AE5C8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.gpr[31] = (0x088AE5D4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 235u, 0x08A08F14u>(ctx, &aot_mem) && ctx.pc == 0x088AE5D4u) goto L_088AE5D4;
    return;
L_088AE5D4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AE5E4u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.pc = 0x08B0B7FCu;
    return;
L_088AE5E4:
    ctx.gpr[31] = (0x088AE5ECu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088AE5ECu) goto L_088AE5EC;
    return;
L_088AE5EC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088AE5FCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x088AE5FCu) goto L_088AE5FC;
    return;
L_088AE5FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088AE610u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088AE610u) goto L_088AE610;
    return;
L_088AE610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
      if (branch_taken) {
          goto L_088AE62C;
      }
      goto L_088AE620;
    }
L_088AE620:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088AE62Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE62Cu) goto L_088AE62C;
    return;
L_088AE62C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088AE64C;
      }
      goto L_088AE640;
    }
L_088AE640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[31] = (0x088AE64Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE64Cu) goto L_088AE64C;
    return;
L_088AE64C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20928)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088AE664;
      }
      goto L_088AE658;
    }
L_088AE658:
    ctx.gpr[31] = (0x088AE660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 533u, 0x08AFA59Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE660u) goto L_088AE660;
    return;
L_088AE660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20928)));
    goto L_088AE664;
L_088AE664:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(120));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20932)));
      if (branch_taken) {
          goto L_088AE6A0;
      }
      goto L_088AE67C;
    }
L_088AE67C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
        goto L_088AE6A4;
    }
    goto L_088AE68C;
L_088AE68C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_088AE6A4;
      }
      goto L_088AE69C;
    }
L_088AE69C:
    ctx.gpr[7] = (0u | 1u);
    goto L_088AE6A0;
L_088AE6A0:
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
    goto L_088AE6A4;
L_088AE6A4:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE6BC;
      }
      goto L_088AE6B4;
    }
L_088AE6B4:
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_088AE6BC;
L_088AE6BC:
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
        goto L_088AE6D4;
    }
    goto L_088AE6C4;
L_088AE6C4:
    ctx.gpr[31] = (0x088AE6CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE6CCu) goto L_088AE6CC;
    return;
L_088AE6CC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    goto L_088AE6D4;
L_088AE6D4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_088AE738;
      }
      goto L_088AE6DC;
    }
L_088AE6DC:
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(248), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(249), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(250), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(251), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(252), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(253), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(248), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(250), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[8] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(252), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(254), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AE730u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 373u, 0x0886E378u>(ctx, &aot_mem) && ctx.pc == 0x088AE730u) goto L_088AE730;
    return;
L_088AE730:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE778;
      }
      goto L_088AE738;
    }
L_088AE738:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(34));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[1]));
    rt.memory().aot_store_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(43), 0u);
    goto L_088AE778;
L_088AE778:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
      if (branch_taken) {
          goto L_088AE78C;
      }
      goto L_088AE780;
    }
L_088AE780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[31] = (0x088AE78Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088AE78Cu) goto L_088AE78C;
    return;
L_088AE78C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_088AE524;
      }
      goto L_088AE79C;
    }
L_088AE79C:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[22]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[22]));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20932)));
    if (ctx.gpr[22] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
        goto L_088AE7C0;
    }
    goto L_088AE7B0;
L_088AE7B0:
    ctx.gpr[31] = (0x088AE7B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE7B8u) goto L_088AE7B8;
    return;
L_088AE7B8:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    goto L_088AE7C0;
L_088AE7C0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088AE938;
      }
      goto L_088AE7C8;
    }
L_088AE7C8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x088AE7D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 585u, 0x0886F8A8u>(ctx, &aot_mem) && ctx.pc == 0x088AE7D4u) goto L_088AE7D4;
    return;
L_088AE7D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[16]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_088AE824;
    }
    goto L_088AE824;
L_088AE824:
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), 0u);
      if (branch_taken) {
          goto L_088AE850;
      }
      goto L_088AE830;
    }
L_088AE830:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(288), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(289), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088AE870;
      }
      goto L_088AE850;
    }
L_088AE850:
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(284));
    ctx.gpr[31] = (0x088AE864u);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 695u, 0x08AFF018u>(ctx, &aot_mem) && ctx.pc == 0x088AE864u) goto L_088AE864;
    return;
L_088AE864:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088AE870;
L_088AE870:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE934;
      }
      goto L_088AE8EC;
    }
L_088AE8EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE908;
      }
      goto L_088AE8F8;
    }
L_088AE8F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    goto L_088AE908;
L_088AE908:
    ctx.gpr[31] = (0x088AE910u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 888u, 0x08AFBD8Cu>(ctx, &aot_mem) && ctx.pc == 0x088AE910u) goto L_088AE910;
    return;
L_088AE910:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AE8EC;
      }
      goto L_088AE934;
    }
L_088AE934:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    goto L_088AE938;
L_088AE938:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[4] >> 30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
        goto L_088AE984;
    }
    goto L_088AE984;
L_088AE984:
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), 0u);
      if (branch_taken) {
          goto L_088AE9AC;
      }
      goto L_088AE990;
    }
L_088AE990:
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(296), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(297), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088AE9C4;
      }
      goto L_088AE9AC;
    }
L_088AE9AC:
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(144));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.gpr[31] = (0x088AE9C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 695u, 0x08AFF018u>(ctx, &aot_mem) && ctx.pc == 0x088AE9C0u) goto L_088AE9C0;
    return;
L_088AE9C0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    goto L_088AE9C4;
L_088AE9C4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_088AE9CC;
L_088AE9CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[7] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_088AE9FC;
    }
    goto L_088AE9FC;
L_088AE9FC:
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AEA5C;
      }
      goto L_088AEA08;
    }
L_088AEA08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AEA50;
      }
      goto L_088AEA1C;
    }
L_088AEA1C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x088AEA28u);
    ctx.gpr[4] = (0u | 112u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088AEA28u) goto L_088AEA28;
    return;
L_088AEA28:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088AEA40;
      }
      goto L_088AEA34;
    }
L_088AEA34:
    ctx.gpr[31] = (0x088AEA3Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 699u, 0x088AB08Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEA3Cu) goto L_088AEA3C;
    return;
L_088AEA3C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_088AEA40;
L_088AEA40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    goto L_088AEA50;
L_088AEA50:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088AE9CC;
      }
      goto L_088AEA5C;
    }
L_088AEA5C:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x088AEA6Cu);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 75u, 0x089C052Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEA6Cu) goto L_088AEA6C;
    return;
L_088AEA6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(5280));
    ctx.gpr[31] = (0x088AEA84u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088AEA84u) goto L_088AEA84;
    return;
L_088AEA84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-7235)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088AEAA8u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 248u, 0x0886DA3Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEAA8u) goto L_088AEAA8;
    return;
L_088AEAA8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_088AEAAC;
L_088AEAAC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AEADC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AEB1Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 349u, 0x08965674u>(ctx, &aot_mem) && ctx.pc == 0x088AEB1Cu) goto L_088AEB1C;
    return;
L_088AEB1C:
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[5] = (16800u << 16u);
    ctx.gpr[19] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (2228u << 16u);
      if (branch_taken) {
          goto L_088AEB48;
      }
      goto L_088AEB3C;
    }
L_088AEB3C:
    ctx.gpr[31] = (0x088AEB44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x088AEB44u) goto L_088AEB44;
    return;
L_088AEB44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20436)));
    goto L_088AEB48;
L_088AEB48:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088AEB54u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 46u, 0x08950380u>(ctx, &aot_mem) && ctx.pc == 0x088AEB54u) goto L_088AEB54;
    return;
L_088AEB54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20436)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_088AEB70;
      }
      goto L_088AEB60;
    }
L_088AEB60:
    ctx.gpr[31] = (0x088AEB68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x088AEB68u) goto L_088AEB68;
    return;
L_088AEB68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[5] = (0u | 2u);
    goto L_088AEB70;
L_088AEB70:
    ctx.gpr[31] = (0x088AEB78u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 46u, 0x08950380u>(ctx, &aot_mem) && ctx.pc == 0x088AEB78u) goto L_088AEB78;
    return;
L_088AEB78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20436)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088AEB94;
      }
      goto L_088AEB84;
    }
L_088AEB84:
    ctx.gpr[31] = (0x088AEB8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x088AEB8Cu) goto L_088AEB8C;
    return;
L_088AEB8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[5] = (0u | 3u);
    goto L_088AEB94;
L_088AEB94:
    ctx.gpr[31] = (0x088AEB9Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 46u, 0x08950380u>(ctx, &aot_mem) && ctx.pc == 0x088AEB9Cu) goto L_088AEB9C;
    return;
L_088AEB9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20436)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_088AEBB8;
      }
      goto L_088AEBA8;
    }
L_088AEBA8:
    ctx.gpr[31] = (0x088AEBB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x088AEBB0u) goto L_088AEBB0;
    return;
L_088AEBB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[5] = (0u | 4u);
    goto L_088AEBB8;
L_088AEBB8:
    ctx.gpr[31] = (0x088AEBC0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 46u, 0x08950380u>(ctx, &aot_mem) && ctx.pc == 0x088AEBC0u) goto L_088AEBC0;
    return;
L_088AEBC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20436)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_088AEBDC;
      }
      goto L_088AEBCC;
    }
L_088AEBCC:
    ctx.gpr[31] = (0x088AEBD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x088AEBD4u) goto L_088AEBD4;
    return;
L_088AEBD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[5] = (0u | 5u);
    goto L_088AEBDC;
L_088AEBDC:
    ctx.gpr[31] = (0x088AEBE4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 46u, 0x08950380u>(ctx, &aot_mem) && ctx.pc == 0x088AEBE4u) goto L_088AEBE4;
    return;
L_088AEBE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20436)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_088AEC00;
      }
      goto L_088AEBF0;
    }
L_088AEBF0:
    ctx.gpr[31] = (0x088AEBF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x088AEBF8u) goto L_088AEBF8;
    return;
L_088AEBF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[5] = (0u | 15u);
    goto L_088AEC00;
L_088AEC00:
    ctx.gpr[31] = (0x088AEC08u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 46u, 0x08950380u>(ctx, &aot_mem) && ctx.pc == 0x088AEC08u) goto L_088AEC08;
    return;
L_088AEC08:
    ctx.gpr[31] = (0x088AEC10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 313u, 0x089E1BB8u>(ctx, &aot_mem) && ctx.pc == 0x088AEC10u) goto L_088AEC10;
    return;
L_088AEC10:
    ctx.gpr[6] = (17448u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[6] = (50280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[6] = (17122u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(502)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088AEC50u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 249u, 0x089E170Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEC50u) goto L_088AEC50;
    return;
L_088AEC50:
    ctx.gpr[6] = (17463u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    ctx.gpr[6] = (16920u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(506)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088AEC80u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 249u, 0x089E170Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEC80u) goto L_088AEC80;
    return;
L_088AEC80:
    ctx.gpr[6] = (17449u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16948u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(510)));
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x088AECB8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 249u, 0x089E170Cu>(ctx, &aot_mem) && ctx.pc == 0x088AECB8u) goto L_088AECB8;
    return;
L_088AECB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (16936u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (16968u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(514)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x088AECE8u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 249u, 0x089E170Cu>(ctx, &aot_mem) && ctx.pc == 0x088AECE8u) goto L_088AECE8;
    return;
L_088AECE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (16940u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(518)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x088AED10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 249u, 0x089E170Cu>(ctx, &aot_mem) && ctx.pc == 0x088AED10u) goto L_088AED10;
    return;
L_088AED10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (16944u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(522)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088AED3Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 249u, 0x089E170Cu>(ctx, &aot_mem) && ctx.pc == 0x088AED3Cu) goto L_088AED3C;
    return;
L_088AED3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(528)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(526)));
    ctx.gpr[31] = (0x088AED5Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 249u, 0x089E170Cu>(ctx, &aot_mem) && ctx.pc == 0x088AED5Cu) goto L_088AED5C;
    return;
L_088AED5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (17419u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(532)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(530)));
    ctx.gpr[31] = (0x088AED88u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 249u, 0x089E170Cu>(ctx, &aot_mem) && ctx.pc == 0x088AED88u) goto L_088AED88;
    return;
L_088AED88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (17401u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(536)));
    ctx.gpr[6] = (16880u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(534)));
    ctx.gpr[31] = (0x088AEDB0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 249u, 0x089E170Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEDB0u) goto L_088AEDB0;
    return;
L_088AEDB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (17418u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 49152u);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(538)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x088AEDE0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 249u, 0x089E170Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEDE0u) goto L_088AEDE0;
    return;
L_088AEDE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(544)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(542)));
    ctx.gpr[31] = (0x088AEE00u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 249u, 0x089E170Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEE00u) goto L_088AEE00;
    return;
L_088AEE00:
    ctx.gpr[5] = (17419u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(548)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088AEE2Cu);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(546)));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 249u, 0x089E170Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEE2Cu) goto L_088AEE2C;
    return;
L_088AEE2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(552)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(550)));
    ctx.gpr[31] = (0x088AEE4Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 249u, 0x089E170Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEE4Cu) goto L_088AEE4C;
    return;
L_088AEE4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(556)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(554)));
    ctx.gpr[31] = (0x088AEE6Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 249u, 0x089E170Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEE6Cu) goto L_088AEE6C;
    return;
L_088AEE6C:
    ctx.gpr[31] = (0x088AEE74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 90u, 0x088A84D4u>(ctx, &aot_mem) && ctx.pc == 0x088AEE74u) goto L_088AEE74;
    return;
L_088AEE74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AEF24;
      }
      goto L_088AEE7C;
    }
L_088AEE7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    ctx.gpr[4] = (17527u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 15778u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (50155u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 58262u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16550u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088AEEB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 672u, 0x088AAE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEEB0u) goto L_088AEEB0;
    return;
L_088AEEB0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AEEC0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 689u, 0x088AAFD0u>(ctx, &aot_mem) && ctx.pc == 0x088AEEC0u) goto L_088AEEC0;
    return;
L_088AEEC0:
    ctx.gpr[6] = (17076u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088AEED4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 692u, 0x088AB010u>(ctx, &aot_mem) && ctx.pc == 0x088AEED4u) goto L_088AEED4;
    return;
L_088AEED4:
    ctx.gpr[6] = (50183u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 29491u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (49870u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (49999u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[6] = (49957u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (49504u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16704u << 16u);
    ctx.gpr[31] = (0x088AEF1Cu);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 613u, 0x08976C8Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEF1Cu) goto L_088AEF1C;
    return;
L_088AEF1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF258;
      }
      goto L_088AEF24;
    }
L_088AEF24:
    ctx.gpr[31] = (0x088AEF2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 90u, 0x088A84D4u>(ctx, &aot_mem) && ctx.pc == 0x088AEF2Cu) goto L_088AEF2C;
    return;
L_088AEF2C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    ctx.gpr[6] = (50375u << 16u);
      if (branch_taken) {
          goto L_088AF104;
      }
      goto L_088AEF34;
    }
L_088AEF34:
    ctx.gpr[6] = (ctx.gpr[6] | 17252u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[6] = (16757u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[6] | 39322u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    ctx.gpr[6] = (17202u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[6] | 2687u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AEF6Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 672u, 0x088AAE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEF6Cu) goto L_088AEF6C;
    return;
L_088AEF6C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AEF7Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 689u, 0x088AAFD0u>(ctx, &aot_mem) && ctx.pc == 0x088AEF7Cu) goto L_088AEF7C;
    return;
L_088AEF7C:
    ctx.gpr[6] = (17204u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088AEF94u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 692u, 0x088AB010u>(ctx, &aot_mem) && ctx.pc == 0x088AEF94u) goto L_088AEF94;
    return;
L_088AEF94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (17211u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[6] | 2687u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088AEFB8u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 672u, 0x088AAE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088AEFB8u) goto L_088AEFB8;
    return;
L_088AEFB8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AEFC8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 689u, 0x088AAFD0u>(ctx, &aot_mem) && ctx.pc == 0x088AEFC8u) goto L_088AEFC8;
    return;
L_088AEFC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x088AEFD8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 692u, 0x088AB010u>(ctx, &aot_mem) && ctx.pc == 0x088AEFD8u) goto L_088AEFD8;
    return;
L_088AEFD8:
    ctx.gpr[6] = (17199u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (50379u << 16u);
    ctx.gpr[6] = (17210u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 49152u);
    ctx.gpr[6] = (50372u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[18] = (2228u << 16u);
    ctx.gpr[6] = (49608u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26868)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088AF018u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 613u, 0x08976C8Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF018u) goto L_088AF018;
    return;
L_088AF018:
    ctx.gpr[6] = (49882u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 13894u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[6] = (16681u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[6] | 39322u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    ctx.gpr[6] = (17248u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[6] | 2687u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AF054u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 672u, 0x088AAE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF054u) goto L_088AF054;
    return;
L_088AF054:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AF064u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 689u, 0x088AAFD0u>(ctx, &aot_mem) && ctx.pc == 0x088AF064u) goto L_088AF064;
    return;
L_088AF064:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x088AF074u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 692u, 0x088AB010u>(ctx, &aot_mem) && ctx.pc == 0x088AF074u) goto L_088AF074;
    return;
L_088AF074:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (17257u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[6] | 2687u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088AF098u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 672u, 0x088AAE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF098u) goto L_088AF098;
    return;
L_088AF098:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AF0A8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 689u, 0x088AAFD0u>(ctx, &aot_mem) && ctx.pc == 0x088AF0A8u) goto L_088AF0A8;
    return;
L_088AF0A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x088AF0B8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 692u, 0x088AB010u>(ctx, &aot_mem) && ctx.pc == 0x088AF0B8u) goto L_088AF0B8;
    return;
L_088AF0B8:
    ctx.gpr[6] = (17415u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 29491u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (49870u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17231u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[6] = (49957u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (49504u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16704u << 16u);
    ctx.gpr[31] = (0x088AF0FCu);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 613u, 0x08976C8Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF0FCu) goto L_088AF0FC;
    return;
L_088AF0FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF258;
      }
      goto L_088AF104;
    }
L_088AF104:
    ctx.gpr[31] = (0x088AF10Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 90u, 0x088A84D4u>(ctx, &aot_mem) && ctx.pc == 0x088AF10Cu) goto L_088AF10C;
    return;
L_088AF10C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088AF258;
      }
      goto L_088AF114;
    }
L_088AF114:
    ctx.gpr[6] = (16644u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[6] = (50216u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    ctx.gpr[6] = (50238u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AF148u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 672u, 0x088AAE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF148u) goto L_088AF148;
    return;
L_088AF148:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AF158u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 689u, 0x088AAFD0u>(ctx, &aot_mem) && ctx.pc == 0x088AF158u) goto L_088AF158;
    return;
L_088AF158:
    ctx.gpr[6] = (17076u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088AF170u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 692u, 0x088AB010u>(ctx, &aot_mem) && ctx.pc == 0x088AF170u) goto L_088AF170;
    return;
L_088AF170:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (50240u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[6] | 14746u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088AF194u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 672u, 0x088AAE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF194u) goto L_088AF194;
    return;
L_088AF194:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AF1A4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 689u, 0x088AAFD0u>(ctx, &aot_mem) && ctx.pc == 0x088AF1A4u) goto L_088AF1A4;
    return;
L_088AF1A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x088AF1B4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 692u, 0x088AB010u>(ctx, &aot_mem) && ctx.pc == 0x088AF1B4u) goto L_088AF1B4;
    return;
L_088AF1B4:
    ctx.gpr[5] = (50241u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 62259u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (49552u << 16u);
    ctx.gpr[5] = (50203u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (50254u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 49152u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (16840u << 16u);
    ctx.gpr[5] = (50235u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 34406u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[31] = (0x088AF204u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 613u, 0x08976C8Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF204u) goto L_088AF204;
    return;
L_088AF204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[6] = (49560u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(498)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (50086u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17080u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64225u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088AF234u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 672u, 0x088AAE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF234u) goto L_088AF234;
    return;
L_088AF234:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AF244u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 689u, 0x088AAFD0u>(ctx, &aot_mem) && ctx.pc == 0x088AF244u) goto L_088AF244;
    return;
L_088AF244:
    ctx.gpr[6] = (17249u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088AF258u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 692u, 0x088AB010u>(ctx, &aot_mem) && ctx.pc == 0x088AF258u) goto L_088AF258;
    return;
L_088AF258:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF290:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7252), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(225)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088AF2C8;
      }
      goto L_088AF2C0;
    }
L_088AF2C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF9BC;
      }
      goto L_088AF2C8;
    }
L_088AF2C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x088AF2E4u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 75u, 0x089C052Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF2E4u) goto L_088AF2E4;
    return;
L_088AF2E4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
        goto L_088AF540;
    }
    goto L_088AF310;
L_088AF310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_088AF314;
L_088AF314:
    ctx.gpr[5] = (ctx.gpr[18] << 5u);
    ctx.gpr[6] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10000) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
        goto L_088AF518;
    }
    goto L_088AF344;
L_088AF344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x088AF350u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 267u, 0x0886DBB8u>(ctx, &aot_mem) && ctx.pc == 0x088AF350u) goto L_088AF350;
    return;
L_088AF350:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088AF3A8;
      }
      goto L_088AF358;
    }
L_088AF358:
    ctx.gpr[31] = (0x088AF360u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 418u, 0x08A5A2F0u>(ctx, &aot_mem) && ctx.pc == 0x088AF360u) goto L_088AF360;
    return;
L_088AF360:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AF3A8;
      }
      goto L_088AF368;
    }
L_088AF368:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(66), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088AF37Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 409u, 0x08A5A244u>(ctx, &aot_mem) && ctx.pc == 0x088AF37Cu) goto L_088AF37C;
    return;
L_088AF37C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(66))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(68))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 421 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
        goto L_088AF518;
    }
    goto L_088AF3A8;
L_088AF3A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x088AF3B4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 267u, 0x0886DBB8u>(ctx, &aot_mem) && ctx.pc == 0x088AF3B4u) goto L_088AF3B4;
    return;
L_088AF3B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AF3C8;
      }
      goto L_088AF3BC;
    }
L_088AF3BC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088AF3C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5304));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088AF3C8u) goto L_088AF3C8;
    return;
L_088AF3C8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088AF3D4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 418u, 0x08A5A2F0u>(ctx, &aot_mem) && ctx.pc == 0x088AF3D4u) goto L_088AF3D4;
    return;
L_088AF3D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF3E8;
      }
      goto L_088AF3DC;
    }
L_088AF3DC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088AF3E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5344));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088AF3E8u) goto L_088AF3E8;
    return;
L_088AF3E8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(70), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088AF3FCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 409u, 0x08A5A244u>(ctx, &aot_mem) && ctx.pc == 0x088AF3FCu) goto L_088AF3FC;
    return;
L_088AF3FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(116))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(70))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(72))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 421 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AF434;
      }
      goto L_088AF428;
    }
L_088AF428:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088AF434u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5380));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088AF434u) goto L_088AF434;
    return;
L_088AF434:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AF4A4;
      }
      goto L_088AF43C;
    }
L_088AF43C:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088AF450u);
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(5432));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 409u, 0x08A5A244u>(ctx, &aot_mem) && ctx.pc == 0x088AF450u) goto L_088AF450;
    return;
L_088AF450:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(124))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088AF468u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(120))))));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088AF468u) goto L_088AF468;
    return;
L_088AF468:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AF488;
      }
      goto L_088AF47C;
    }
L_088AF47C:
    ctx.gpr[31] = (0x088AF484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF484u) goto L_088AF484;
    return;
L_088AF484:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088AF488;
L_088AF488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF9BC;
      }
      goto L_088AF4A4;
    }
L_088AF4A4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088AF4C0;
      }
      goto L_088AF4B4;
    }
L_088AF4B4:
    ctx.gpr[31] = (0x088AF4BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF4BCu) goto L_088AF4BC;
    return;
L_088AF4BC:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088AF4C0;
L_088AF4C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
        goto L_088AF518;
    }
    goto L_088AF4D0;
L_088AF4D0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AF4E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5504));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 445u, 0x088A6FECu>(ctx, &aot_mem) && ctx.pc == 0x088AF4E0u) goto L_088AF4E0;
    return;
L_088AF4E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AF4ECu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 339u, 0x088A973Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF4ECu) goto L_088AF4EC;
    return;
L_088AF4EC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7247)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(34));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AF514u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x088AF514u) goto L_088AF514;
    return;
L_088AF514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    goto L_088AF518;
L_088AF518:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
        goto L_088AF314;
    }
    goto L_088AF53C;
L_088AF53C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    goto L_088AF540;
L_088AF540:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF9BC;
      }
      goto L_088AF568;
    }
L_088AF568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_088AF990;
      }
      goto L_088AF584;
    }
L_088AF584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x088AF590u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 267u, 0x0886DBB8u>(ctx, &aot_mem) && ctx.pc == 0x088AF590u) goto L_088AF590;
    return;
L_088AF590:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
        goto L_088AF994;
    }
    goto L_088AF598;
L_088AF598:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[20] != ctx.gpr[4]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(220)));
        goto L_088AF5C0;
    }
    goto L_088AF5AC;
L_088AF5AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088AF754;
      }
      goto L_088AF5C0;
    }
L_088AF5C0:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(96));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(98));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 45788u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(38))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(84))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(38))))));
        goto L_088AF680;
    }
    goto L_088AF664;
L_088AF664:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(38))))));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(86))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(38))))));
    goto L_088AF680;
L_088AF680:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(90), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(90))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(94), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(94))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
        goto L_088AF6C8;
    }
    goto L_088AF6B8;
L_088AF6B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    goto L_088AF6C8;
L_088AF6C8:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(100), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(100))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
        goto L_088AF718;
    }
    goto L_088AF708;
L_088AF708:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    goto L_088AF718;
L_088AF718:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(102), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(102))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF748;
      }
      goto L_088AF740;
    }
L_088AF740:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088AF748;
L_088AF748:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(96));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088AF754;
L_088AF754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088AF990;
      }
      goto L_088AF790;
    }
L_088AF790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x088AF79Cu);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 888u, 0x08AFBD8Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF79Cu) goto L_088AF79C;
    return;
L_088AF79C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088AF970;
      }
      goto L_088AF7A4;
    }
L_088AF7A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(106), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(106))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_088AF970;
      }
      goto L_088AF7E4;
    }
L_088AF7E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AF954;
      }
      goto L_088AF808;
    }
L_088AF808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF954;
      }
      goto L_088AF814;
    }
L_088AF814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (0u | 28u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
        goto L_088AF8A0;
    }
    goto L_088AF840;
L_088AF840:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    goto L_088AF844;
L_088AF844:
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
        goto L_088AF874;
    }
    goto L_088AF868;
L_088AF868:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088AF8A0;
      }
      goto L_088AF870;
    }
L_088AF870:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    goto L_088AF874;
L_088AF874:
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
        goto L_088AF844;
    }
    goto L_088AF89C;
L_088AF89C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    goto L_088AF8A0;
L_088AF8A0:
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088AF954;
      }
      goto L_088AF8C0;
    }
L_088AF8C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 45788u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(58))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(60))))));
    ctx.gpr[31] = (0x088AF930u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 64u, 0x08AC472Cu>(ctx, &aot_mem) && ctx.pc == 0x088AF930u) goto L_088AF930;
    return;
L_088AF930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088AF94Cu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AF94Cu) goto L_088AF94C;
    return;
L_088AF94C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF970;
      }
      goto L_088AF954;
    }
L_088AF954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088AF970u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AF970u) goto L_088AF970;
    return;
L_088AF970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AF790;
      }
      goto L_088AF990;
    }
L_088AF990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    goto L_088AF994;
L_088AF994:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AF568;
      }
      goto L_088AF9BC;
    }
L_088AF9BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AF9DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[11] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(-7248), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-7248)));
    ctx.gpr[11] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (2232u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (ctx.gpr[2] + static_cast<std::uint32_t>(6008));
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[2] = (2225u << 16u);
    ctx.gpr[3] = (2230u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(5584));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-7247), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-7247)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[12] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[2] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (2225u << 16u);
    aot_mem.aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(-7246), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[11]);
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(5596));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(-7246)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[2] = (2225u << 16u);
    ctx.gpr[3] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[11]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(5608));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-7245), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-7245)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (2225u << 16u);
    ctx.gpr[2] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(5628));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-7244), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-7244)));
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[9] = (2225u << 16u);
    ctx.gpr[2] = (2230u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(5644));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-7243), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-7243)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[9] = (2225u << 16u);
    ctx.gpr[2] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(5660));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-7242), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[3] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-7242)));
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[10] = (2225u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(5680));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-7241), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-7241)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (2225u << 16u);
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[11]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(5712));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-7240), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-7240)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (2225u << 16u);
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[11]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(5732));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-7239), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-7239)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[8] = (2225u << 16u);
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(5744));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-7238), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-7238)));
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[9] = (2225u << 16u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(-7237), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(5760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-7237)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (2225u << 16u);
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(5776));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-7236), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-7236)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[9] = (2225u << 16u);
    ctx.gpr[10] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(5788));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(-7235), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-7235)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[8] = (2225u << 16u);
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(5804));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-7234), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-7234)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16108)));
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[15] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[7] = (16014u << 16u);
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 14571u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16112), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[8] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(16120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16120)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[7] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16124), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[7] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[11]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(5816));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(-7233), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-7233)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16104)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[8] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(5828));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-7232), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-7232)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (2225u << 16u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[11]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(5836));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(-7231), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-7231)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[11]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5848));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(16164));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16132)));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16144)));
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16140)));
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 210u);
    ctx.gpr[8] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16156), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 77u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AFE10u);
    ctx.gpr[6] = (0u | 155u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088AFE10u) goto L_088AFE10;
    return;
L_088AFE10:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 174u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088AFE28u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088AFE28u) goto L_088AFE28;
    return;
L_088AFE28:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088AFE40u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088AFE40u) goto L_088AFE40;
    return;
L_088AFE40:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x088AFE58u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088AFE58u) goto L_088AFE58;
    return;
L_088AFE58:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088AFE70u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088AFE70u) goto L_088AFE70;
    return;
L_088AFE70:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x088AFE88u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088AFE88u) goto L_088AFE88;
    return;
L_088AFE88:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (0u | 119u);
    ctx.gpr[6] = (0u | 119u);
    ctx.gpr[7] = (0u | 119u);
    ctx.gpr[31] = (0x088AFEA0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088AFEA0u) goto L_088AFEA0;
    return;
L_088AFEA0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x088AFEB8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088AFEB8u) goto L_088AFEB8;
    return;
L_088AFEB8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 15u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x088AFED0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088AFED0u) goto L_088AFED0;
    return;
L_088AFED0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 240u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088AFEE8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088AFEE8u) goto L_088AFEE8;
    return;
L_088AFEE8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 240u);
    ctx.gpr[31] = (0x088AFF00u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088AFF00u) goto L_088AFF00;
    return;
L_088AFF00:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088AFF18u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088AFF18u) goto L_088AFF18;
    return;
L_088AFF18:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 15u);
    ctx.gpr[31] = (0x088AFF30u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088AFF30u) goto L_088AFF30;
    return;
L_088AFF30:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (0u | 240u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x088AFF48u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088AFF48u) goto L_088AFF48;
    return;
L_088AFF48:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 15u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x088AFF60u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088AFF60u) goto L_088AFF60;
    return;
L_088AFF60:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x088AFF78u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088AFF78u) goto L_088AFF78;
    return;
L_088AFF78:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088AFF84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16276));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x088AFF84u) goto L_088AFF84;
    return;
L_088AFF84:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(16228));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 174u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088AFFA4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088AFFA4u) goto L_088AFFA4;
    return;
L_088AFFA4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 77u);
    ctx.gpr[6] = (0u | 155u);
    ctx.gpr[7] = (0u | 210u);
    ctx.gpr[31] = (0x088AFFBCu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088AFFBCu) goto L_088AFFBC;
    return;
L_088AFFBC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (0u | 75u);
    ctx.gpr[6] = (0u | 151u);
    ctx.gpr[7] = (0u | 75u);
    ctx.gpr[31] = (0x088AFFD4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088AFFD4u) goto L_088AFFD4;
    return;
L_088AFFD4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (0u | 217u);
    ctx.gpr[6] = (0u | 174u);
    ctx.gpr[7] = (0u | 87u);
    ctx.gpr[31] = (0x088AFFECu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088AFFECu) goto L_088AFFEC;
    return;
L_088AFFEC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 252u);
    ctx.gpr[6] = (0u | 116u);
    ctx.gpr[7] = (0u | 186u);
    ctx.gpr[31] = (0x088B0004u);
    ctx.gpr[8] = (0u | 255u);
    (void)rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0042(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0042_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_42(Runtime &runtime) {
    runtime.register_generated_unit(42u, 0x088AC000u, 16384u, &recomp_unit_0042, &recomp_unit_0042_entry);
    runtime.register_function(0x088AC000u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC014u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC020u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC02Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC030u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC038u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC044u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC054u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC060u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC070u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC078u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC08Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC098u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC0C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC0C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC0D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC0E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC0F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC100u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC108u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC11Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC128u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC150u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC158u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC164u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC174u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC180u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC190u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC198u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC1ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC1B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC1E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC1E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC1F4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC204u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC210u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC220u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC228u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC23Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC248u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC270u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC278u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC284u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC294u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC2A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC2B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC2B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC2CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC2D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC300u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC308u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC314u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC324u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC330u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC340u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC348u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC35Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC368u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC390u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC398u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC3A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC3B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC3C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC3D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC3D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC3ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC3F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC420u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC428u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC434u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC444u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC450u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC460u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC468u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC47Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC488u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC4B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC4B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC4C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC4D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC4E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC4F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC4F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC50Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC518u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC540u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC548u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC554u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC564u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC570u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC580u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC588u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC59Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC5A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC5D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC5D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC5E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC5F4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC600u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC610u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC618u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC62Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC638u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC660u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC668u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC674u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC684u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC690u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC6A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC6A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC6BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC6C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC6F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC6F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC704u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC714u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC720u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC730u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC738u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC74Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC758u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC780u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC788u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC794u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC7A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC7B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC7C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC7C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC7DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC7E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC810u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC818u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC824u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC834u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC840u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC850u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC858u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC86Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC878u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC8A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC8A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC8B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC8C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC8D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC8E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC8E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC8FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC908u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC930u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC938u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC944u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC954u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC960u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC970u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC978u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC98Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC998u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC9C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC9C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC9D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC9E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC9F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA08u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA1Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA28u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA50u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA58u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA64u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA74u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA80u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA90u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA98u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACAACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACAB8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACAE0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACAE8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACAF4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB04u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB10u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB20u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB28u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB3Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB48u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB70u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB78u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB84u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB94u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACBA0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACBB0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACBB8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACBCCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACBD8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC08u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC14u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC24u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC30u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC40u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC48u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC5Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC68u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC90u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC98u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACCA4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACCB4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACCC0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACCD0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACCD8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACCECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACCF8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD20u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD28u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD34u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD44u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD50u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD60u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD68u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD7Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD88u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACDB0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACDB8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACDC4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACDD4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACDE0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACDF0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACDF8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE0Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE18u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE40u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE48u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE54u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE64u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE70u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE80u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE88u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE9Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACEA8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACED0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACED8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACEE4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACEF4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF10u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF18u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF2Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF38u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF60u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF68u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF74u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF84u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF90u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACFA0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACFA8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACFBCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACFC8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACFF0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACFF8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD004u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD014u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD020u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD030u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD038u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD04Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD058u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD080u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD088u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD094u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD0A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD0B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD0C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD0C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD0DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD0E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD110u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD118u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD124u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD134u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD140u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD150u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD158u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD16Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD178u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD1A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD1A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD1B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD1C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD1D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD1E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD1E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD1FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD208u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD230u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD238u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD244u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD254u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD260u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD270u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD278u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD28Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD298u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD2C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD2C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD2D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD2E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD2F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD300u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD308u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD31Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD328u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD350u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD358u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD364u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD374u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD380u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD390u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD398u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3F4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD404u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD410u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD420u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD428u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD43Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD448u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD470u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD478u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD484u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD494u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD500u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD508u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD514u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD524u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD530u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD540u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD548u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD55Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD568u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD590u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD598u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD620u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD628u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD634u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD644u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD650u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD660u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD668u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD67Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD688u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD70Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD718u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD740u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD748u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD754u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD764u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD770u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD780u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD788u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD79Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD7A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD7D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD7D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD7E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD7F4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD800u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD810u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD818u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD820u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD844u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD84Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD854u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD85Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD86Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD890u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD8B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD8C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD8F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD914u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD920u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD944u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD980u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD99Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD9A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD9B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD9B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD9F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA0Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA20u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA28u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA34u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA48u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA50u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA5Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA64u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA70u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA84u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA8Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADA98u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADAA0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADAB4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADAC0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADAD8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADAE0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB0Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB14u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB24u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB30u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB44u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB58u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB7Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB88u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB98u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB9Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADBB0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADBDCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADBF0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADC04u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADC10u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADC1Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADC24u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADC28u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADC88u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADC94u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADCA0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADCACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADCB8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADCC0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADCC4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADCCCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADCDCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD08u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD10u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD18u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD24u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD34u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD3Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD48u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD60u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD68u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD7Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADDA4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADDB4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADDC0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADDC8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADDD0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADDD4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADDDCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADDE0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADE0Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADE30u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADE68u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADEA0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADEBCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADEC0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADEC4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADECCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADED8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADEE0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADEE4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADEF4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADF04u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADF0Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADF14u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADF20u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADF3Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADF48u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADF80u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADFC4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADFD8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADFECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADFF4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADFFCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE004u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE010u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE014u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE060u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE070u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE094u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE09Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE100u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE104u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE10Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE118u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE120u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE124u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE134u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE144u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE14Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE154u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE160u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE168u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE170u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE178u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE18Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE194u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE19Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1F4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE204u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE214u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE21Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE224u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE22Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE254u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE268u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE27Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE290u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE298u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE2A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE2ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE2D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE2E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE2ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE314u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE324u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE32Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE33Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE344u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE398u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE3A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE3C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE3D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE400u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE408u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE434u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE470u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE47Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE488u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE494u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE49Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE4DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE524u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE530u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE538u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE540u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE574u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE584u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE594u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE598u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE59Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE5ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE5B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE5C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE5C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE5D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE5E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE5ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE5FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE610u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE620u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE62Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE640u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE64Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE658u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE660u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE664u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE67Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE68Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE69Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE6A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE6A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE6B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE6BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE6C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE6CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE6D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE6DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE730u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE738u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE778u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE780u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE78Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE79Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE7B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE7B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE7C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE7C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE7D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE824u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE830u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE850u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE864u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE870u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE8ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE8F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE908u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE910u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE934u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE938u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE984u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE990u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE9ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE9C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE9C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE9CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE9FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA08u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA1Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA28u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA34u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA3Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA40u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA50u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA5Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA6Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA84u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEAA8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEAACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEADCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB1Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB3Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB44u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB48u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB54u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB60u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB68u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB70u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB78u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB84u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB8Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB94u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEB9Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBA8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBB0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBB8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBC0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBCCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBD4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBDCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBE4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBF0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEBF8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEC00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEC08u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEC10u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEC50u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEC80u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AECB8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AECE8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AED10u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AED3Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AED5Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AED88u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEDB0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEDE0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEE00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEE2Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEE4Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEE6Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEE74u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEE7Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEEB0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEEC0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEED4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF1Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF24u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF2Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF34u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF6Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF7Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF94u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEFB8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEFC8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEFD8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF018u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF054u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF064u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF074u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF098u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF0A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF0B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF0FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF104u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF10Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF114u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF148u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF158u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF170u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF194u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF1A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF1B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF204u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF234u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF244u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF258u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF290u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF2C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF2C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF2E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF310u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF314u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF344u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF350u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF358u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF360u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF368u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF37Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF3A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF3B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF3BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF3C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF3D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF3DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF3E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF3FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF428u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF434u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF43Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF450u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF468u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF47Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF484u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF488u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF4A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF4B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF4BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF4C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF4D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF4E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF4ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF514u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF518u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF53Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF540u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF568u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF584u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF590u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF598u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF5ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF5C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF664u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF680u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF6B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF6C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF708u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF718u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF740u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF748u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF754u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF790u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF79Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF7A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF7E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF808u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF814u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF840u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF844u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF868u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF870u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF874u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF89Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF8A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF8C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF930u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF94Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF954u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF970u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF990u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF994u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF9BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF9DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFE10u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFE28u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFE40u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFE58u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFE70u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFE88u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFEA0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFEB8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFED0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFEE8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFF00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFF18u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFF30u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFF48u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFF60u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFF78u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFF84u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFFA4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFFBCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFFD4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFFECu, &recomp_unit_0042, "recomp_unit_0042");
}
} // namespace psprecomp
