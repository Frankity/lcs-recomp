#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0109[4095] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 6, 7, 0, 0, 8, 0, 0, 0, 9, 0, 0, 10, 0, 0,
    0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    0, 0, 16, 0, 0, 0, 17, 0, 18, 0, 19, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0,
    0, 24, 0, 25, 0, 26, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 33, 34, 0,
    35, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 41, 0, 42, 0, 43, 0, 0, 0, 0, 44,
    0, 0, 45, 0, 0, 46, 47, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 0, 55,
    0, 0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 65, 0, 66,
    0, 0, 0, 67, 0, 68, 0, 0, 0, 69, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 75, 76, 0, 77, 0, 0,
    0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 82, 0, 83, 0, 84, 0, 0, 0, 85, 0, 86, 87, 0, 0, 0, 88,
    0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 97, 0, 98, 0,
    99, 0, 100, 0, 0, 101, 0, 102, 103, 0, 104, 0, 0, 105, 0, 106, 107, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111,
    0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0,
    0, 0, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 0, 0, 124, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0,
    0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0,
    133, 0, 134, 0, 135, 136, 0, 137, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 143,
    0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 148, 0, 149, 0, 0, 150, 0, 151, 0, 0, 0, 0, 152,
    0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 159, 0, 160, 0, 0, 161, 0, 162,
    0, 163, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 0, 172, 0, 173, 0, 0, 0,
    0, 174, 0, 175, 0, 0, 0, 176, 0, 177, 0, 178, 0, 0, 179, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183,
    0, 0, 0, 0, 184, 0, 0, 185, 0, 186, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190,
    0, 0, 191, 0, 192, 0, 0, 193, 0, 194, 0, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 200, 0, 201, 0,
    202, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0,
    212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 221, 222, 0, 223, 224, 0, 0, 225, 0, 0, 0, 0,
    0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229,
    0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0,
    0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 244, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249,
    0, 0, 250, 0, 0, 251, 0, 0, 252, 253, 0, 254, 0, 0, 255, 256, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 260, 0, 0, 261,
    0, 0, 262, 0, 0, 263, 264, 0, 265, 0, 0, 266, 267, 0, 268, 0, 0, 269, 270, 0, 271, 0, 0, 272, 273, 0, 274, 0, 0, 275, 276, 0,
    277, 0, 0, 278, 279, 0, 280, 0, 0, 281, 282, 0, 283, 0, 0, 284, 285, 0, 286, 0, 0, 287, 288, 0, 289, 0, 0, 290, 291, 0, 292, 0,
    0, 293, 294, 0, 295, 0, 0, 296, 297, 0, 298, 0, 0, 299, 300, 0, 301, 0, 302, 303, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0,
    312, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319,
    0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0,
    0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 330, 0, 331, 0, 0, 0, 332, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 338, 0, 0, 0, 339, 0, 340, 0, 341, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0,
    0, 346, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 351, 0, 352, 353, 0, 0, 0, 0, 0,
    354, 0, 0, 355, 0, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 360, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0,
    363, 0, 0, 0, 364, 0, 365, 0, 366, 367, 0, 0, 368, 0, 0, 0, 369, 0, 0, 370, 0, 371, 372, 0, 0, 373, 0, 0, 374, 0, 375, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377,
    0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 385, 0, 386, 0, 387,
    0, 0, 0, 0, 388, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 0,
    393, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 400,
    0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0, 0, 404, 0, 405,
    406, 0, 407, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0,
    0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 418, 0, 419, 0, 0, 0, 0, 0, 420, 0, 421, 422, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0,
    427, 0, 0, 0, 428, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 0, 436, 0, 437, 438, 0, 439, 0, 440, 0, 0, 0,
    0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0,
    0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 452,
    0, 453, 0, 0, 0, 454, 0, 0, 0, 455, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    458, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 0, 0, 0,
    0, 0, 0, 464, 0, 465, 0, 466, 0, 467, 0, 468, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 475, 476, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 481,
    0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 484, 0, 0, 485, 0, 0, 486, 0, 0, 487, 0, 0, 488, 0, 489, 0, 0, 0, 490, 0, 491, 0,
    0, 492, 0, 0, 493, 0, 0, 494, 0, 0, 495, 0, 0, 496, 0, 497, 0, 0, 0, 498, 0, 499, 0, 0, 500, 0, 501, 0, 502, 0, 503, 0,
    504, 0, 0, 505, 0, 0, 506, 0, 0, 0, 507, 0, 0, 508, 0, 0, 509, 0, 0, 510, 0, 0, 0, 511, 0, 0, 512, 0, 0, 513, 0, 0,
    514, 0, 0, 515, 0, 0, 516, 0, 517, 0, 0, 0, 518, 0, 519, 0, 0, 0, 520, 0, 521, 0, 0, 0, 522, 0, 523, 0, 0, 524, 0, 525,
    0, 526, 0, 527, 0, 0, 528, 0, 0, 529, 0, 0, 530, 0, 531, 0, 0, 532, 0, 0, 533, 0, 0, 534, 0, 535, 0, 0, 536, 0, 0, 537,
    0, 0, 538, 0, 539, 0, 0, 540, 0, 0, 541, 0, 0, 542, 0, 543, 0, 0, 544, 0, 0, 545, 0, 0, 0, 0, 546, 0, 547, 0, 548, 0,
    0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0, 552, 0, 553, 0,
    554, 0, 555, 0, 556, 0, 557, 0, 558, 0, 0, 559, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 563, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 565, 0, 0, 0, 0, 0, 566, 0, 567, 0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 571, 0, 572, 0, 573, 0, 574, 0, 575, 0, 576, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 577, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 583, 0, 584, 0, 585, 0, 0, 586, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 589, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 592,
    0, 593, 0, 0, 0, 594, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 598,
    0, 0, 0, 599, 0, 600, 0, 601, 0, 0, 602, 0, 603, 0, 0, 604, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 606, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 609, 0, 610, 611, 0, 612, 0, 0, 0, 0,
    0, 0, 0, 613, 0, 614, 615, 0, 0, 616, 0, 0, 0, 617, 0, 618, 0, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0, 621, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 624, 625, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 628,
    629, 0, 630, 0, 0, 0, 631, 0, 632, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 635, 0, 0, 636,
    0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 639, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0,
    641, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0,
    646, 0, 0, 647, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 651, 0, 0, 0, 0,
    652, 0, 0, 653, 0, 0, 0, 654, 655, 0, 656, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 658, 0, 0, 659, 0, 0, 0, 660, 0, 0,
    0, 661, 0, 662, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 666, 0, 0, 667, 0, 0, 0, 0, 668, 0, 0, 669, 0, 0, 0, 670, 0, 671, 0, 672, 0, 0, 0, 0, 0, 673, 0, 674, 0, 0,
    0, 0, 675, 0, 676, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 680, 0, 0, 0,
    0, 0, 681, 0, 0, 0, 0, 682, 0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 685, 0, 686, 0, 0, 687, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 691, 0, 692, 0, 0, 0, 0, 0,
    693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 696, 0, 0, 697, 0, 0,
    0, 0, 0, 0, 698, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 701, 0, 0, 0, 0, 0, 0, 702, 0, 0, 703, 0, 0, 0,
    0, 0, 0, 704, 0, 0, 705, 0, 0, 0, 706, 0, 0, 0, 0, 707, 0, 0, 0, 708, 0, 0, 0, 0, 709, 0, 0, 0, 710, 0, 0, 0,
    0, 711, 0, 0, 0, 712, 0, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 0, 715, 0, 0, 0, 716, 0, 0, 0, 0, 717, 0, 0, 0,
    718, 0, 0, 0, 0, 719, 0, 0, 0, 720, 0, 0, 0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 0, 0,
    725, 0, 0, 0, 726, 0, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 0, 729, 0, 0, 0, 730, 0, 0, 0, 0, 731, 0, 0, 0, 732,
    0, 0, 0, 0, 733, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 0, 736, 0, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0, 0, 739,
    0, 0, 0, 740, 0, 0, 0, 0, 741, 0, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 0, 744, 0, 0, 0, 0, 745, 0, 0, 0, 746, 0,
    0, 0, 0, 747, 0, 0, 0, 748, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0, 0, 0, 0, 751, 0, 0, 0, 752, 0, 0, 0, 0, 753, 0,
    0, 0, 754, 0, 0, 0, 0, 755, 0, 0, 0, 756, 0, 0, 0, 0, 757, 0, 0, 0, 758, 0, 0, 0, 0, 759, 0, 0, 0, 760, 0, 0,
    0, 0, 761, 0, 0, 0, 762, 0, 0, 0, 0, 763, 0, 0, 0, 764, 0, 0, 0, 0, 765, 0, 0, 0, 766, 0, 0, 0, 0, 767, 0, 0,
    0, 768, 0, 0, 0, 0, 769, 0, 0, 0, 770, 0, 0, 0, 0, 771, 0, 0, 0, 772, 0, 0, 0, 0, 773, 0, 0, 0, 774, 0, 0, 0,
    0, 775, 0, 0, 0, 776, 0, 0, 0, 0, 777, 0, 0, 0, 778, 0, 0, 0, 0, 779, 0, 0, 0, 780, 0, 0, 0, 0, 781, 0, 782, 0,
    783, 0, 784, 0, 785, 0, 786, 0, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 789, 0, 0, 0, 790, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 792, 0, 793, 0, 794, 0, 795, 0, 0, 0, 0, 0,
    796, 0, 797, 0, 798, 0, 799, 0, 0, 800, 0, 801, 0, 0, 0, 0, 0, 802, 0, 803, 0, 0, 0, 804, 0, 0, 805, 0, 0, 0, 0, 806,
    0, 807, 0, 808, 0, 0, 809, 0, 0, 810, 0, 0, 0, 0, 0, 811, 0, 812, 0, 0, 0, 0, 0, 813, 0, 814, 0, 0, 815, 0, 0, 816,
    0, 0, 0, 0, 0, 817, 0, 818, 0, 819, 0, 820, 0, 821, 0, 822, 0, 0, 0, 0, 0, 823, 0, 824, 0, 0, 825, 0, 826, 0, 0, 0,
    0, 0, 827, 0, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 830, 0, 0, 0, 0, 0, 831, 0, 832, 0, 833, 0,
    0, 0, 0, 834, 0, 0, 835, 0, 836, 0, 0, 0, 0, 0, 837, 0, 838, 0, 0, 0, 0, 0, 0, 0, 0, 839, 0, 840, 0, 0, 0, 0,
    841, 0, 0, 842, 0, 843, 0, 0, 0, 0, 0, 844, 0, 0, 845, 0, 846, 0, 0, 0, 0, 0, 847, 0, 0, 0, 0, 848, 0, 0, 0, 849,
    0, 850, 0, 851, 0, 0, 0, 0, 0, 852, 0, 853, 0, 0, 854, 0, 0, 855, 0, 0, 0, 0, 0, 856, 0, 857, 0, 0, 0, 0, 0, 858,
    0, 0, 859, 0, 0, 860, 0, 0, 861, 862, 0, 863, 0, 0, 864, 865, 0, 866, 0, 0, 867, 868, 0, 869, 0, 0, 0, 0, 0, 870, 0, 0,
    0, 0, 0, 0, 0, 0, 871, 0, 872, 0, 0, 0, 0, 0, 873, 0, 0, 874, 0, 875, 0, 0, 0, 0, 876, 0, 877, 0, 0, 0, 0, 0,
    878, 0, 0, 879, 0, 0, 880, 0, 0, 881, 0, 882, 0, 883, 0, 884, 0, 885, 0, 886, 0, 887, 0, 888, 0, 889, 890, 0, 0, 0, 0, 0,
    891, 0, 892, 0, 0, 0, 893, 0, 894, 0, 0, 0, 0, 0, 895, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 896, 0,
    897, 0, 0, 898, 899, 0, 900, 901, 0, 0, 902, 0, 0, 903, 0, 0, 0, 0, 0, 0, 904, 0, 0, 0, 905, 906, 0, 0, 907, 0, 0, 0,
    908, 0, 0, 0, 0, 0, 909, 0, 910, 0, 911, 0, 0, 0, 912, 0, 0, 0, 0, 0, 0, 913, 0, 0, 0, 914, 0, 0, 0, 915, 0, 0,
    0, 916, 0, 0, 0, 917, 0, 0, 918, 0, 0, 0, 919, 0, 920, 0, 0, 0, 0, 0, 0, 0, 0, 921, 0, 0, 0, 922, 0, 0, 923, 0,
    0, 0, 924, 0, 0, 0, 0, 925, 0, 0, 926, 0, 0, 927, 0, 928, 0, 0, 0, 0, 0, 0, 929, 0, 930, 0, 0, 0, 931, 0, 0, 932,
    0, 933, 0, 0, 0, 0, 934, 0, 0, 0, 935, 0, 0, 936, 0, 0, 0, 937, 0, 0, 0, 0, 938, 0, 0, 939, 0, 0, 940, 0, 0, 0,
    941, 0, 942, 0, 0, 943, 0, 944, 0, 0, 945, 0, 946, 0, 0, 0, 0, 0, 947, 0, 0, 0, 0, 0, 0, 0, 0, 948, 0, 0, 949, 0,
    0, 950, 0, 0, 0, 0, 0, 951, 0, 952, 0, 0, 953, 0, 954, 0, 955, 0, 0, 0, 956, 0, 957, 0, 958, 959, 0, 960, 0, 961, 0, 962,
    963, 0, 964, 0, 965, 0, 966, 967, 0, 0, 0, 0, 968, 0, 0, 969, 0, 0, 970, 0, 0, 0, 0, 0, 971, 0, 0, 972, 0, 0, 973,
};
void recomp_unit_0109_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089B8000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0109[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089B8000;
    case 2u: goto L_089B8008;
    case 3u: goto L_089B8018;
    case 4u: goto L_089B8028;
    case 5u: goto L_089B8034;
    case 6u: goto L_089B8048;
    case 7u: goto L_089B804C;
    case 8u: goto L_089B8058;
    case 9u: goto L_089B8068;
    case 10u: goto L_089B8074;
    case 11u: goto L_089B8084;
    case 12u: goto L_089B80A8;
    case 13u: goto L_089B80B8;
    case 14u: goto L_089B80D8;
    case 15u: goto L_089B80E8;
    case 16u: goto L_089B8108;
    case 17u: goto L_089B8118;
    case 18u: goto L_089B8120;
    case 19u: goto L_089B8128;
    case 20u: goto L_089B8134;
    case 21u: goto L_089B8144;
    case 22u: goto L_089B816C;
    case 23u: goto L_089B8178;
    case 24u: goto L_089B8184;
    case 25u: goto L_089B818C;
    case 26u: goto L_089B8194;
    case 27u: goto L_089B81A4;
    case 28u: goto L_089B81AC;
    case 29u: goto L_089B81C4;
    case 30u: goto L_089B81D0;
    case 31u: goto L_089B81DC;
    case 32u: goto L_089B81E8;
    case 33u: goto L_089B81F4;
    case 34u: goto L_089B81F8;
    case 35u: goto L_089B8200;
    case 36u: goto L_089B8214;
    case 37u: goto L_089B8224;
    case 38u: goto L_089B8234;
    case 39u: goto L_089B8244;
    case 40u: goto L_089B8254;
    case 41u: goto L_089B8258;
    case 42u: goto L_089B8260;
    case 43u: goto L_089B8268;
    case 44u: goto L_089B827C;
    case 45u: goto L_089B8288;
    case 46u: goto L_089B8294;
    case 47u: goto L_089B8298;
    case 48u: goto L_089B82A4;
    case 49u: goto L_089B82B0;
    case 50u: goto L_089B82BC;
    case 51u: goto L_089B82CC;
    case 52u: goto L_089B82D4;
    case 53u: goto L_089B82E0;
    case 54u: goto L_089B82EC;
    case 55u: goto L_089B82FC;
    case 56u: goto L_089B830C;
    case 57u: goto L_089B8314;
    case 58u: goto L_089B8324;
    case 59u: goto L_089B8330;
    case 60u: goto L_089B8338;
    case 61u: goto L_089B8348;
    case 62u: goto L_089B8354;
    case 63u: goto L_089B835C;
    case 64u: goto L_089B836C;
    case 65u: goto L_089B8374;
    case 66u: goto L_089B837C;
    case 67u: goto L_089B838C;
    case 68u: goto L_089B8394;
    case 69u: goto L_089B83A4;
    case 70u: goto L_089B83AC;
    case 71u: goto L_089B83B8;
    case 72u: goto L_089B83C4;
    case 73u: goto L_089B83D0;
    case 74u: goto L_089B83DC;
    case 75u: goto L_089B83E8;
    case 76u: goto L_089B83EC;
    case 77u: goto L_089B83F4;
    case 78u: goto L_089B840C;
    case 79u: goto L_089B841C;
    case 80u: goto L_089B842C;
    case 81u: goto L_089B843C;
    case 82u: goto L_089B8440;
    case 83u: goto L_089B8448;
    case 84u: goto L_089B8450;
    case 85u: goto L_089B8460;
    case 86u: goto L_089B8468;
    case 87u: goto L_089B846C;
    case 88u: goto L_089B847C;
    case 89u: goto L_089B848C;
    case 90u: goto L_089B8498;
    case 91u: goto L_089B84A8;
    case 92u: goto L_089B84B0;
    case 93u: goto L_089B84C0;
    case 94u: goto L_089B84D0;
    case 95u: goto L_089B84D8;
    case 96u: goto L_089B84E8;
    case 97u: goto L_089B84F0;
    case 98u: goto L_089B84F8;
    case 99u: goto L_089B8500;
    case 100u: goto L_089B8508;
    case 101u: goto L_089B8514;
    case 102u: goto L_089B851C;
    case 103u: goto L_089B8520;
    case 104u: goto L_089B8528;
    case 105u: goto L_089B8534;
    case 106u: goto L_089B853C;
    case 107u: goto L_089B8540;
    case 108u: goto L_089B8548;
    case 109u: goto L_089B8550;
    case 110u: goto L_089B8570;
    case 111u: goto L_089B857C;
    case 112u: goto L_089B858C;
    case 113u: goto L_089B85A0;
    case 114u: goto L_089B85B8;
    case 115u: goto L_089B85C0;
    case 116u: goto L_089B85CC;
    case 117u: goto L_089B85E8;
    case 118u: goto L_089B85F8;
    case 119u: goto L_089B860C;
    case 120u: goto L_089B8614;
    case 121u: goto L_089B861C;
    case 122u: goto L_089B8624;
    case 123u: goto L_089B862C;
    case 124u: goto L_089B863C;
    case 125u: goto L_089B8644;
    case 126u: goto L_089B8654;
    case 127u: goto L_089B8660;
    case 128u: goto L_089B8678;
    case 129u: goto L_089B8684;
    case 130u: goto L_089B8690;
    case 131u: goto L_089B86C0;
    case 132u: goto L_089B86F4;
    case 133u: goto L_089B8700;
    case 134u: goto L_089B8708;
    case 135u: goto L_089B8710;
    case 136u: goto L_089B8714;
    case 137u: goto L_089B871C;
    case 138u: goto L_089B872C;
    case 139u: goto L_089B8738;
    case 140u: goto L_089B8750;
    case 141u: goto L_089B875C;
    case 142u: goto L_089B8768;
    case 143u: goto L_089B877C;
    case 144u: goto L_089B8788;
    case 145u: goto L_089B8798;
    case 146u: goto L_089B87B4;
    case 147u: goto L_089B87BC;
    case 148u: goto L_089B87CC;
    case 149u: goto L_089B87D4;
    case 150u: goto L_089B87E0;
    case 151u: goto L_089B87E8;
    case 152u: goto L_089B87FC;
    case 153u: goto L_089B880C;
    case 154u: goto L_089B881C;
    case 155u: goto L_089B8834;
    case 156u: goto L_089B8840;
    case 157u: goto L_089B884C;
    case 158u: goto L_089B8858;
    case 159u: goto L_089B8860;
    case 160u: goto L_089B8868;
    case 161u: goto L_089B8874;
    case 162u: goto L_089B887C;
    case 163u: goto L_089B8884;
    case 164u: goto L_089B888C;
    case 165u: goto L_089B8898;
    case 166u: goto L_089B88A4;
    case 167u: goto L_089B88B0;
    case 168u: goto L_089B88B8;
    case 169u: goto L_089B88C0;
    case 170u: goto L_089B88D4;
    case 171u: goto L_089B88DC;
    case 172u: goto L_089B88E8;
    case 173u: goto L_089B88F0;
    case 174u: goto L_089B8904;
    case 175u: goto L_089B890C;
    case 176u: goto L_089B891C;
    case 177u: goto L_089B8924;
    case 178u: goto L_089B892C;
    case 179u: goto L_089B8938;
    case 180u: goto L_089B8940;
    case 181u: goto L_089B8954;
    case 182u: goto L_089B8964;
    case 183u: goto L_089B897C;
    case 184u: goto L_089B8990;
    case 185u: goto L_089B899C;
    case 186u: goto L_089B89A4;
    case 187u: goto L_089B89B0;
    case 188u: goto L_089B89C0;
    case 189u: goto L_089B89D4;
    case 190u: goto L_089B89FC;
    case 191u: goto L_089B8A08;
    case 192u: goto L_089B8A10;
    case 193u: goto L_089B8A1C;
    case 194u: goto L_089B8A24;
    case 195u: goto L_089B8A30;
    case 196u: goto L_089B8A38;
    case 197u: goto L_089B8A40;
    case 198u: goto L_089B8A54;
    case 199u: goto L_089B8A5C;
    case 200u: goto L_089B8A70;
    case 201u: goto L_089B8A78;
    case 202u: goto L_089B8A80;
    case 203u: goto L_089B8A98;
    case 204u: goto L_089B8AA0;
    case 205u: goto L_089B8AB4;
    case 206u: goto L_089B8AD4;
    case 207u: goto L_089B8B4C;
    case 208u: goto L_089B8B5C;
    case 209u: goto L_089B8B68;
    case 210u: goto L_089B8B9C;
    case 211u: goto L_089B8BF8;
    case 212u: goto L_089B8C00;
    case 213u: goto L_089B8C1C;
    case 214u: goto L_089B8C34;
    case 215u: goto L_089B8C44;
    case 216u: goto L_089B8C64;
    case 217u: goto L_089B8C80;
    case 218u: goto L_089B8C94;
    case 219u: goto L_089B8CB8;
    case 220u: goto L_089B8CC8;
    case 221u: goto L_089B8CD0;
    case 222u: goto L_089B8CD4;
    case 223u: goto L_089B8CDC;
    case 224u: goto L_089B8CE0;
    case 225u: goto L_089B8CEC;
    case 226u: goto L_089B8D04;
    case 227u: goto L_089B8D10;
    case 228u: goto L_089B8D94;
    case 229u: goto L_089B8DFC;
    case 230u: goto L_089B8E1C;
    case 231u: goto L_089B8E94;
    case 232u: goto L_089B8ECC;
    case 233u: goto L_089B8ED4;
    case 234u: goto L_089B8F24;
    case 235u: goto L_089B8F54;
    case 236u: goto L_089B8F60;
    case 237u: goto L_089B8F78;
    case 238u: goto L_089B8F90;
    case 239u: goto L_089B8FA0;
    case 240u: goto L_089B8FB4;
    case 241u: goto L_089B8FC0;
    case 242u: goto L_089B9028;
    case 243u: goto L_089B9034;
    case 244u: goto L_089B9038;
    case 245u: goto L_089B9050;
    case 246u: goto L_089B905C;
    case 247u: goto L_089B90A4;
    case 248u: goto L_089B90EC;
    case 249u: goto L_089B90FC;
    case 250u: goto L_089B9108;
    case 251u: goto L_089B9114;
    case 252u: goto L_089B9120;
    case 253u: goto L_089B9124;
    case 254u: goto L_089B912C;
    case 255u: goto L_089B9138;
    case 256u: goto L_089B913C;
    case 257u: goto L_089B9144;
    case 258u: goto L_089B915C;
    case 259u: goto L_089B9168;
    case 260u: goto L_089B9170;
    case 261u: goto L_089B917C;
    case 262u: goto L_089B9188;
    case 263u: goto L_089B9194;
    case 264u: goto L_089B9198;
    case 265u: goto L_089B91A0;
    case 266u: goto L_089B91AC;
    case 267u: goto L_089B91B0;
    case 268u: goto L_089B91B8;
    case 269u: goto L_089B91C4;
    case 270u: goto L_089B91C8;
    case 271u: goto L_089B91D0;
    case 272u: goto L_089B91DC;
    case 273u: goto L_089B91E0;
    case 274u: goto L_089B91E8;
    case 275u: goto L_089B91F4;
    case 276u: goto L_089B91F8;
    case 277u: goto L_089B9200;
    case 278u: goto L_089B920C;
    case 279u: goto L_089B9210;
    case 280u: goto L_089B9218;
    case 281u: goto L_089B9224;
    case 282u: goto L_089B9228;
    case 283u: goto L_089B9230;
    case 284u: goto L_089B923C;
    case 285u: goto L_089B9240;
    case 286u: goto L_089B9248;
    case 287u: goto L_089B9254;
    case 288u: goto L_089B9258;
    case 289u: goto L_089B9260;
    case 290u: goto L_089B926C;
    case 291u: goto L_089B9270;
    case 292u: goto L_089B9278;
    case 293u: goto L_089B9284;
    case 294u: goto L_089B9288;
    case 295u: goto L_089B9290;
    case 296u: goto L_089B929C;
    case 297u: goto L_089B92A0;
    case 298u: goto L_089B92A8;
    case 299u: goto L_089B92B4;
    case 300u: goto L_089B92B8;
    case 301u: goto L_089B92C0;
    case 302u: goto L_089B92C8;
    case 303u: goto L_089B92CC;
    case 304u: goto L_089B92D4;
    case 305u: goto L_089B92E0;
    case 306u: goto L_089B92F8;
    case 307u: goto L_089B9324;
    case 308u: goto L_089B9338;
    case 309u: goto L_089B9344;
    case 310u: goto L_089B9368;
    case 311u: goto L_089B9378;
    case 312u: goto L_089B9380;
    case 313u: goto L_089B9394;
    case 314u: goto L_089B93A4;
    case 315u: goto L_089B93B4;
    case 316u: goto L_089B93C0;
    case 317u: goto L_089B93D4;
    case 318u: goto L_089B93EC;
    case 319u: goto L_089B93FC;
    case 320u: goto L_089B940C;
    case 321u: goto L_089B9420;
    case 322u: goto L_089B9430;
    case 323u: goto L_089B9438;
    case 324u: goto L_089B9448;
    case 325u: goto L_089B9458;
    case 326u: goto L_089B9474;
    case 327u: goto L_089B9484;
    case 328u: goto L_089B9498;
    case 329u: goto L_089B94A8;
    case 330u: goto L_089B94B0;
    case 331u: goto L_089B94B8;
    case 332u: goto L_089B94C8;
    case 333u: goto L_089B94D0;
    case 334u: goto L_089B94E0;
    case 335u: goto L_089B9540;
    case 336u: goto L_089B9554;
    case 337u: goto L_089B9564;
    case 338u: goto L_089B958C;
    case 339u: goto L_089B959C;
    case 340u: goto L_089B95A4;
    case 341u: goto L_089B95AC;
    case 342u: goto L_089B95B0;
    case 343u: goto L_089B95C8;
    case 344u: goto L_089B95DC;
    case 345u: goto L_089B95F8;
    case 346u: goto L_089B9604;
    case 347u: goto L_089B960C;
    case 348u: goto L_089B961C;
    case 349u: goto L_089B9644;
    case 350u: goto L_089B9654;
    case 351u: goto L_089B965C;
    case 352u: goto L_089B9664;
    case 353u: goto L_089B9668;
    case 354u: goto L_089B9680;
    case 355u: goto L_089B968C;
    case 356u: goto L_089B9698;
    case 357u: goto L_089B96A0;
    case 358u: goto L_089B96BC;
    case 359u: goto L_089B96CC;
    case 360u: goto L_089B96D4;
    case 361u: goto L_089B96DC;
    case 362u: goto L_089B96E4;
    case 363u: goto L_089B9700;
    case 364u: goto L_089B9710;
    case 365u: goto L_089B9718;
    case 366u: goto L_089B9720;
    case 367u: goto L_089B9724;
    case 368u: goto L_089B9730;
    case 369u: goto L_089B9740;
    case 370u: goto L_089B974C;
    case 371u: goto L_089B9754;
    case 372u: goto L_089B9758;
    case 373u: goto L_089B9764;
    case 374u: goto L_089B9770;
    case 375u: goto L_089B9778;
    case 376u: goto L_089B97A8;
    case 377u: goto L_089B97FC;
    case 378u: goto L_089B9814;
    case 379u: goto L_089B981C;
    case 380u: goto L_089B9880;
    case 381u: goto L_089B98C4;
    case 382u: goto L_089B990C;
    case 383u: goto L_089B9950;
    case 384u: goto L_089B9958;
    case 385u: goto L_089B996C;
    case 386u: goto L_089B9974;
    case 387u: goto L_089B997C;
    case 388u: goto L_089B9990;
    case 389u: goto L_089B9998;
    case 390u: goto L_089B99D0;
    case 391u: goto L_089B99D8;
    case 392u: goto L_089B99E0;
    case 393u: goto L_089B9A00;
    case 394u: goto L_089B9A14;
    case 395u: goto L_089B9A20;
    case 396u: goto L_089B9A30;
    case 397u: goto L_089B9A3C;
    case 398u: goto L_089B9A58;
    case 399u: goto L_089B9A68;
    case 400u: goto L_089B9A7C;
    case 401u: goto L_089B9A94;
    case 402u: goto L_089B9AD4;
    case 403u: goto L_089B9ADC;
    case 404u: goto L_089B9AF4;
    case 405u: goto L_089B9AFC;
    case 406u: goto L_089B9B00;
    case 407u: goto L_089B9B08;
    case 408u: goto L_089B9B10;
    case 409u: goto L_089B9B30;
    case 410u: goto L_089B9B44;
    case 411u: goto L_089B9B50;
    case 412u: goto L_089B9B60;
    case 413u: goto L_089B9B6C;
    case 414u: goto L_089B9B88;
    case 415u: goto L_089B9B98;
    case 416u: goto L_089B9BAC;
    case 417u: goto L_089B9BC4;
    case 418u: goto L_089B9C04;
    case 419u: goto L_089B9C0C;
    case 420u: goto L_089B9C24;
    case 421u: goto L_089B9C2C;
    case 422u: goto L_089B9C30;
    case 423u: goto L_089B9C38;
    case 424u: goto L_089B9C40;
    case 425u: goto L_089B9C60;
    case 426u: goto L_089B9C74;
    case 427u: goto L_089B9C80;
    case 428u: goto L_089B9C90;
    case 429u: goto L_089B9C9C;
    case 430u: goto L_089B9CB8;
    case 431u: goto L_089B9CC8;
    case 432u: goto L_089B9CDC;
    case 433u: goto L_089B9CF4;
    case 434u: goto L_089B9D34;
    case 435u: goto L_089B9D3C;
    case 436u: goto L_089B9D54;
    case 437u: goto L_089B9D5C;
    case 438u: goto L_089B9D60;
    case 439u: goto L_089B9D68;
    case 440u: goto L_089B9D70;
    case 441u: goto L_089B9D90;
    case 442u: goto L_089B9DA4;
    case 443u: goto L_089B9DB0;
    case 444u: goto L_089B9DC0;
    case 445u: goto L_089B9DCC;
    case 446u: goto L_089B9DE8;
    case 447u: goto L_089B9DF8;
    case 448u: goto L_089B9E0C;
    case 449u: goto L_089B9E1C;
    case 450u: goto L_089B9E5C;
    case 451u: goto L_089B9E64;
    case 452u: goto L_089B9E7C;
    case 453u: goto L_089B9E84;
    case 454u: goto L_089B9E94;
    case 455u: goto L_089B9EA4;
    case 456u: goto L_089B9EAC;
    case 457u: goto L_089B9ED8;
    case 458u: goto L_089B9F00;
    case 459u: goto L_089B9F10;
    case 460u: goto L_089B9F24;
    case 461u: goto L_089B9F34;
    case 462u: goto L_089B9F60;
    case 463u: goto L_089B9F68;
    case 464u: goto L_089B9F8C;
    case 465u: goto L_089B9F94;
    case 466u: goto L_089B9F9C;
    case 467u: goto L_089B9FA4;
    case 468u: goto L_089B9FAC;
    case 469u: goto L_089B9FCC;
    case 470u: goto L_089B9FE0;
    case 471u: goto L_089BA030;
    case 472u: goto L_089BA038;
    case 473u: goto L_089BA040;
    case 474u: goto L_089BA064;
    case 475u: goto L_089BA070;
    case 476u: goto L_089BA074;
    case 477u: goto L_089BA0AC;
    case 478u: goto L_089BA0D0;
    case 479u: goto L_089BA0D8;
    case 480u: goto L_089BA0F0;
    case 481u: goto L_089BA0FC;
    case 482u: goto L_089BA104;
    case 483u: goto L_089BA11C;
    case 484u: goto L_089BA128;
    case 485u: goto L_089BA134;
    case 486u: goto L_089BA140;
    case 487u: goto L_089BA14C;
    case 488u: goto L_089BA158;
    case 489u: goto L_089BA160;
    case 490u: goto L_089BA170;
    case 491u: goto L_089BA178;
    case 492u: goto L_089BA184;
    case 493u: goto L_089BA190;
    case 494u: goto L_089BA19C;
    case 495u: goto L_089BA1A8;
    case 496u: goto L_089BA1B4;
    case 497u: goto L_089BA1BC;
    case 498u: goto L_089BA1CC;
    case 499u: goto L_089BA1D4;
    case 500u: goto L_089BA1E0;
    case 501u: goto L_089BA1E8;
    case 502u: goto L_089BA1F0;
    case 503u: goto L_089BA1F8;
    case 504u: goto L_089BA200;
    case 505u: goto L_089BA20C;
    case 506u: goto L_089BA218;
    case 507u: goto L_089BA228;
    case 508u: goto L_089BA234;
    case 509u: goto L_089BA240;
    case 510u: goto L_089BA24C;
    case 511u: goto L_089BA25C;
    case 512u: goto L_089BA268;
    case 513u: goto L_089BA274;
    case 514u: goto L_089BA280;
    case 515u: goto L_089BA28C;
    case 516u: goto L_089BA298;
    case 517u: goto L_089BA2A0;
    case 518u: goto L_089BA2B0;
    case 519u: goto L_089BA2B8;
    case 520u: goto L_089BA2C8;
    case 521u: goto L_089BA2D0;
    case 522u: goto L_089BA2E0;
    case 523u: goto L_089BA2E8;
    case 524u: goto L_089BA2F4;
    case 525u: goto L_089BA2FC;
    case 526u: goto L_089BA304;
    case 527u: goto L_089BA30C;
    case 528u: goto L_089BA318;
    case 529u: goto L_089BA324;
    case 530u: goto L_089BA330;
    case 531u: goto L_089BA338;
    case 532u: goto L_089BA344;
    case 533u: goto L_089BA350;
    case 534u: goto L_089BA35C;
    case 535u: goto L_089BA364;
    case 536u: goto L_089BA370;
    case 537u: goto L_089BA37C;
    case 538u: goto L_089BA388;
    case 539u: goto L_089BA390;
    case 540u: goto L_089BA39C;
    case 541u: goto L_089BA3A8;
    case 542u: goto L_089BA3B4;
    case 543u: goto L_089BA3BC;
    case 544u: goto L_089BA3C8;
    case 545u: goto L_089BA3D4;
    case 546u: goto L_089BA3E8;
    case 547u: goto L_089BA3F0;
    case 548u: goto L_089BA3F8;
    case 549u: goto L_089BA410;
    case 550u: goto L_089BA458;
    case 551u: goto L_089BA460;
    case 552u: goto L_089BA470;
    case 553u: goto L_089BA478;
    case 554u: goto L_089BA480;
    case 555u: goto L_089BA488;
    case 556u: goto L_089BA490;
    case 557u: goto L_089BA498;
    case 558u: goto L_089BA4A0;
    case 559u: goto L_089BA4AC;
    case 560u: goto L_089BA4B8;
    case 561u: goto L_089BA4D0;
    case 562u: goto L_089BA4EC;
    case 563u: goto L_089BA4F4;
    case 564u: goto L_089BA520;
    case 565u: goto L_089BA528;
    case 566u: goto L_089BA540;
    case 567u: goto L_089BA548;
    case 568u: goto L_089BA550;
    case 569u: goto L_089BA568;
    case 570u: goto L_089BA5AC;
    case 571u: goto L_089BA5BC;
    case 572u: goto L_089BA5C4;
    case 573u: goto L_089BA5CC;
    case 574u: goto L_089BA5D4;
    case 575u: goto L_089BA5DC;
    case 576u: goto L_089BA5E4;
    case 577u: goto L_089BA618;
    case 578u: goto L_089BA620;
    case 579u: goto L_089BA658;
    case 580u: goto L_089BA688;
    case 581u: goto L_089BA698;
    case 582u: goto L_089BA6A8;
    case 583u: goto L_089BA6B8;
    case 584u: goto L_089BA6C0;
    case 585u: goto L_089BA6C8;
    case 586u: goto L_089BA6D4;
    case 587u: goto L_089BA6DC;
    case 588u: goto L_089BA710;
    case 589u: goto L_089BA728;
    case 590u: goto L_089BA730;
    case 591u: goto L_089BA764;
    case 592u: goto L_089BA77C;
    case 593u: goto L_089BA784;
    case 594u: goto L_089BA794;
    case 595u: goto L_089BA7AC;
    case 596u: goto L_089BA7E0;
    case 597u: goto L_089BA7F0;
    case 598u: goto L_089BA7FC;
    case 599u: goto L_089BA80C;
    case 600u: goto L_089BA814;
    case 601u: goto L_089BA81C;
    case 602u: goto L_089BA828;
    case 603u: goto L_089BA830;
    case 604u: goto L_089BA83C;
    case 605u: goto L_089BA854;
    case 606u: goto L_089BA888;
    case 607u: goto L_089BA890;
    case 608u: goto L_089BA8B8;
    case 609u: goto L_089BA8D8;
    case 610u: goto L_089BA8E0;
    case 611u: goto L_089BA8E4;
    case 612u: goto L_089BA8EC;
    case 613u: goto L_089BA90C;
    case 614u: goto L_089BA914;
    case 615u: goto L_089BA918;
    case 616u: goto L_089BA924;
    case 617u: goto L_089BA934;
    case 618u: goto L_089BA93C;
    case 619u: goto L_089BA950;
    case 620u: goto L_089BA964;
    case 621u: goto L_089BA96C;
    case 622u: goto L_089BA998;
    case 623u: goto L_089BA9BC;
    case 624u: goto L_089BA9C4;
    case 625u: goto L_089BA9C8;
    case 626u: goto L_089BA9D0;
    case 627u: goto L_089BA9F4;
    case 628u: goto L_089BA9FC;
    case 629u: goto L_089BAA00;
    case 630u: goto L_089BAA08;
    case 631u: goto L_089BAA18;
    case 632u: goto L_089BAA20;
    case 633u: goto L_089BAA30;
    case 634u: goto L_089BAA68;
    case 635u: goto L_089BAA70;
    case 636u: goto L_089BAA7C;
    case 637u: goto L_089BAA94;
    case 638u: goto L_089BAAC8;
    case 639u: goto L_089BAAD0;
    case 640u: goto L_089BAAE8;
    case 641u: goto L_089BAB00;
    case 642u: goto L_089BAB1C;
    case 643u: goto L_089BAB34;
    case 644u: goto L_089BAB4C;
    case 645u: goto L_089BAB68;
    case 646u: goto L_089BAB80;
    case 647u: goto L_089BAB8C;
    case 648u: goto L_089BABA0;
    case 649u: goto L_089BABBC;
    case 650u: goto L_089BABE0;
    case 651u: goto L_089BABEC;
    case 652u: goto L_089BAC00;
    case 653u: goto L_089BAC0C;
    case 654u: goto L_089BAC1C;
    case 655u: goto L_089BAC20;
    case 656u: goto L_089BAC28;
    case 657u: goto L_089BAC40;
    case 658u: goto L_089BAC58;
    case 659u: goto L_089BAC64;
    case 660u: goto L_089BAC74;
    case 661u: goto L_089BAC84;
    case 662u: goto L_089BAC8C;
    case 663u: goto L_089BACAC;
    case 664u: goto L_089BACC4;
    case 665u: goto L_089BACE0;
    case 666u: goto L_089BAD08;
    case 667u: goto L_089BAD14;
    case 668u: goto L_089BAD28;
    case 669u: goto L_089BAD34;
    case 670u: goto L_089BAD44;
    case 671u: goto L_089BAD4C;
    case 672u: goto L_089BAD54;
    case 673u: goto L_089BAD6C;
    case 674u: goto L_089BAD74;
    case 675u: goto L_089BAD88;
    case 676u: goto L_089BAD90;
    case 677u: goto L_089BADA8;
    case 678u: goto L_089BADC4;
    case 679u: goto L_089BADE4;
    case 680u: goto L_089BADF0;
    case 681u: goto L_089BAE08;
    case 682u: goto L_089BAE1C;
    case 683u: goto L_089BAE24;
    case 684u: goto L_089BAE34;
    case 685u: goto L_089BAE50;
    case 686u: goto L_089BAE58;
    case 687u: goto L_089BAE64;
    case 688u: goto L_089BAE98;
    case 689u: goto L_089BAEB4;
    case 690u: goto L_089BAECC;
    case 691u: goto L_089BAEE0;
    case 692u: goto L_089BAEE8;
    case 693u: goto L_089BAF00;
    case 694u: goto L_089BAF34;
    case 695u: goto L_089BAF4C;
    case 696u: goto L_089BAF68;
    case 697u: goto L_089BAF74;
    case 698u: goto L_089BAF90;
    case 699u: goto L_089BAF9C;
    case 700u: goto L_089BAFBC;
    case 701u: goto L_089BAFC8;
    case 702u: goto L_089BAFE4;
    case 703u: goto L_089BAFF0;
    case 704u: goto L_089BB00C;
    case 705u: goto L_089BB018;
    case 706u: goto L_089BB028;
    case 707u: goto L_089BB03C;
    case 708u: goto L_089BB04C;
    case 709u: goto L_089BB060;
    case 710u: goto L_089BB070;
    case 711u: goto L_089BB084;
    case 712u: goto L_089BB094;
    case 713u: goto L_089BB0A8;
    case 714u: goto L_089BB0B8;
    case 715u: goto L_089BB0CC;
    case 716u: goto L_089BB0DC;
    case 717u: goto L_089BB0F0;
    case 718u: goto L_089BB100;
    case 719u: goto L_089BB114;
    case 720u: goto L_089BB124;
    case 721u: goto L_089BB138;
    case 722u: goto L_089BB148;
    case 723u: goto L_089BB15C;
    case 724u: goto L_089BB16C;
    case 725u: goto L_089BB180;
    case 726u: goto L_089BB190;
    case 727u: goto L_089BB1A4;
    case 728u: goto L_089BB1B4;
    case 729u: goto L_089BB1C8;
    case 730u: goto L_089BB1D8;
    case 731u: goto L_089BB1EC;
    case 732u: goto L_089BB1FC;
    case 733u: goto L_089BB210;
    case 734u: goto L_089BB220;
    case 735u: goto L_089BB234;
    case 736u: goto L_089BB244;
    case 737u: goto L_089BB258;
    case 738u: goto L_089BB268;
    case 739u: goto L_089BB27C;
    case 740u: goto L_089BB28C;
    case 741u: goto L_089BB2A0;
    case 742u: goto L_089BB2B0;
    case 743u: goto L_089BB2C4;
    case 744u: goto L_089BB2D4;
    case 745u: goto L_089BB2E8;
    case 746u: goto L_089BB2F8;
    case 747u: goto L_089BB30C;
    case 748u: goto L_089BB31C;
    case 749u: goto L_089BB330;
    case 750u: goto L_089BB340;
    case 751u: goto L_089BB354;
    case 752u: goto L_089BB364;
    case 753u: goto L_089BB378;
    case 754u: goto L_089BB388;
    case 755u: goto L_089BB39C;
    case 756u: goto L_089BB3AC;
    case 757u: goto L_089BB3C0;
    case 758u: goto L_089BB3D0;
    case 759u: goto L_089BB3E4;
    case 760u: goto L_089BB3F4;
    case 761u: goto L_089BB408;
    case 762u: goto L_089BB418;
    case 763u: goto L_089BB42C;
    case 764u: goto L_089BB43C;
    case 765u: goto L_089BB450;
    case 766u: goto L_089BB460;
    case 767u: goto L_089BB474;
    case 768u: goto L_089BB484;
    case 769u: goto L_089BB498;
    case 770u: goto L_089BB4A8;
    case 771u: goto L_089BB4BC;
    case 772u: goto L_089BB4CC;
    case 773u: goto L_089BB4E0;
    case 774u: goto L_089BB4F0;
    case 775u: goto L_089BB504;
    case 776u: goto L_089BB514;
    case 777u: goto L_089BB528;
    case 778u: goto L_089BB538;
    case 779u: goto L_089BB54C;
    case 780u: goto L_089BB55C;
    case 781u: goto L_089BB570;
    case 782u: goto L_089BB578;
    case 783u: goto L_089BB580;
    case 784u: goto L_089BB588;
    case 785u: goto L_089BB590;
    case 786u: goto L_089BB598;
    case 787u: goto L_089BB5A4;
    case 788u: goto L_089BB5D4;
    case 789u: goto L_089BB614;
    case 790u: goto L_089BB624;
    case 791u: goto L_089BB638;
    case 792u: goto L_089BB650;
    case 793u: goto L_089BB658;
    case 794u: goto L_089BB660;
    case 795u: goto L_089BB668;
    case 796u: goto L_089BB680;
    case 797u: goto L_089BB688;
    case 798u: goto L_089BB690;
    case 799u: goto L_089BB698;
    case 800u: goto L_089BB6A4;
    case 801u: goto L_089BB6AC;
    case 802u: goto L_089BB6C4;
    case 803u: goto L_089BB6CC;
    case 804u: goto L_089BB6DC;
    case 805u: goto L_089BB6E8;
    case 806u: goto L_089BB6FC;
    case 807u: goto L_089BB704;
    case 808u: goto L_089BB70C;
    case 809u: goto L_089BB718;
    case 810u: goto L_089BB724;
    case 811u: goto L_089BB73C;
    case 812u: goto L_089BB744;
    case 813u: goto L_089BB75C;
    case 814u: goto L_089BB764;
    case 815u: goto L_089BB770;
    case 816u: goto L_089BB77C;
    case 817u: goto L_089BB794;
    case 818u: goto L_089BB79C;
    case 819u: goto L_089BB7A4;
    case 820u: goto L_089BB7AC;
    case 821u: goto L_089BB7B4;
    case 822u: goto L_089BB7BC;
    case 823u: goto L_089BB7D4;
    case 824u: goto L_089BB7DC;
    case 825u: goto L_089BB7E8;
    case 826u: goto L_089BB7F0;
    case 827u: goto L_089BB808;
    case 828u: goto L_089BB820;
    case 829u: goto L_089BB848;
    case 830u: goto L_089BB850;
    case 831u: goto L_089BB868;
    case 832u: goto L_089BB870;
    case 833u: goto L_089BB878;
    case 834u: goto L_089BB88C;
    case 835u: goto L_089BB898;
    case 836u: goto L_089BB8A0;
    case 837u: goto L_089BB8B8;
    case 838u: goto L_089BB8C0;
    case 839u: goto L_089BB8E4;
    case 840u: goto L_089BB8EC;
    case 841u: goto L_089BB900;
    case 842u: goto L_089BB90C;
    case 843u: goto L_089BB914;
    case 844u: goto L_089BB92C;
    case 845u: goto L_089BB938;
    case 846u: goto L_089BB940;
    case 847u: goto L_089BB958;
    case 848u: goto L_089BB96C;
    case 849u: goto L_089BB97C;
    case 850u: goto L_089BB984;
    case 851u: goto L_089BB98C;
    case 852u: goto L_089BB9A4;
    case 853u: goto L_089BB9AC;
    case 854u: goto L_089BB9B8;
    case 855u: goto L_089BB9C4;
    case 856u: goto L_089BB9DC;
    case 857u: goto L_089BB9E4;
    case 858u: goto L_089BB9FC;
    case 859u: goto L_089BBA08;
    case 860u: goto L_089BBA14;
    case 861u: goto L_089BBA20;
    case 862u: goto L_089BBA24;
    case 863u: goto L_089BBA2C;
    case 864u: goto L_089BBA38;
    case 865u: goto L_089BBA3C;
    case 866u: goto L_089BBA44;
    case 867u: goto L_089BBA50;
    case 868u: goto L_089BBA54;
    case 869u: goto L_089BBA5C;
    case 870u: goto L_089BBA74;
    case 871u: goto L_089BBA98;
    case 872u: goto L_089BBAA0;
    case 873u: goto L_089BBAB8;
    case 874u: goto L_089BBAC4;
    case 875u: goto L_089BBACC;
    case 876u: goto L_089BBAE0;
    case 877u: goto L_089BBAE8;
    case 878u: goto L_089BBB00;
    case 879u: goto L_089BBB0C;
    case 880u: goto L_089BBB18;
    case 881u: goto L_089BBB24;
    case 882u: goto L_089BBB2C;
    case 883u: goto L_089BBB34;
    case 884u: goto L_089BBB3C;
    case 885u: goto L_089BBB44;
    case 886u: goto L_089BBB4C;
    case 887u: goto L_089BBB54;
    case 888u: goto L_089BBB5C;
    case 889u: goto L_089BBB64;
    case 890u: goto L_089BBB68;
    case 891u: goto L_089BBB80;
    case 892u: goto L_089BBB88;
    case 893u: goto L_089BBB98;
    case 894u: goto L_089BBBA0;
    case 895u: goto L_089BBBB8;
    case 896u: goto L_089BBBF8;
    case 897u: goto L_089BBC00;
    case 898u: goto L_089BBC0C;
    case 899u: goto L_089BBC10;
    case 900u: goto L_089BBC18;
    case 901u: goto L_089BBC1C;
    case 902u: goto L_089BBC28;
    case 903u: goto L_089BBC34;
    case 904u: goto L_089BBC50;
    case 905u: goto L_089BBC60;
    case 906u: goto L_089BBC64;
    case 907u: goto L_089BBC70;
    case 908u: goto L_089BBC80;
    case 909u: goto L_089BBC98;
    case 910u: goto L_089BBCA0;
    case 911u: goto L_089BBCA8;
    case 912u: goto L_089BBCB8;
    case 913u: goto L_089BBCD4;
    case 914u: goto L_089BBCE4;
    case 915u: goto L_089BBCF4;
    case 916u: goto L_089BBD04;
    case 917u: goto L_089BBD14;
    case 918u: goto L_089BBD20;
    case 919u: goto L_089BBD30;
    case 920u: goto L_089BBD38;
    case 921u: goto L_089BBD5C;
    case 922u: goto L_089BBD6C;
    case 923u: goto L_089BBD78;
    case 924u: goto L_089BBD88;
    case 925u: goto L_089BBD9C;
    case 926u: goto L_089BBDA8;
    case 927u: goto L_089BBDB4;
    case 928u: goto L_089BBDBC;
    case 929u: goto L_089BBDD8;
    case 930u: goto L_089BBDE0;
    case 931u: goto L_089BBDF0;
    case 932u: goto L_089BBDFC;
    case 933u: goto L_089BBE04;
    case 934u: goto L_089BBE18;
    case 935u: goto L_089BBE28;
    case 936u: goto L_089BBE34;
    case 937u: goto L_089BBE44;
    case 938u: goto L_089BBE58;
    case 939u: goto L_089BBE64;
    case 940u: goto L_089BBE70;
    case 941u: goto L_089BBE80;
    case 942u: goto L_089BBE88;
    case 943u: goto L_089BBE94;
    case 944u: goto L_089BBE9C;
    case 945u: goto L_089BBEA8;
    case 946u: goto L_089BBEB0;
    case 947u: goto L_089BBEC8;
    case 948u: goto L_089BBEEC;
    case 949u: goto L_089BBEF8;
    case 950u: goto L_089BBF04;
    case 951u: goto L_089BBF1C;
    case 952u: goto L_089BBF24;
    case 953u: goto L_089BBF30;
    case 954u: goto L_089BBF38;
    case 955u: goto L_089BBF40;
    case 956u: goto L_089BBF50;
    case 957u: goto L_089BBF58;
    case 958u: goto L_089BBF60;
    case 959u: goto L_089BBF64;
    case 960u: goto L_089BBF6C;
    case 961u: goto L_089BBF74;
    case 962u: goto L_089BBF7C;
    case 963u: goto L_089BBF80;
    case 964u: goto L_089BBF88;
    case 965u: goto L_089BBF90;
    case 966u: goto L_089BBF98;
    case 967u: goto L_089BBF9C;
    case 968u: goto L_089BBFB0;
    case 969u: goto L_089BBFBC;
    case 970u: goto L_089BBFC8;
    case 971u: goto L_089BBFE0;
    case 972u: goto L_089BBFEC;
    case 973u: goto L_089BBFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089B8000:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089B8018;
      }
      goto L_089B8008;
    }
L_089B8008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B8034;
      }
      goto L_089B8018;
    }
L_089B8018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x089B8028u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x089B8028u) goto L_089B8028;
    return;
L_089B8028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1772), ctx.gpr[4]);
    goto L_089B8034;
L_089B8034:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(544)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 994u, 0x089B7FC4u>(ctx, &aot_mem); return;
      }
      goto L_089B8048;
    }
L_089B8048:
    ctx.gpr[19] = (0u | 11u);
    goto L_089B804C;
L_089B804C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089B8068;
      }
      goto L_089B8058;
    }
L_089B8058:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B8268;
      }
      goto L_089B8068;
    }
L_089B8068:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B8074u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 195u, 0x088A1328u>(ctx, &aot_mem) && ctx.pc == 0x089B8074u) goto L_089B8074;
    return;
L_089B8074:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089B80A8;
      }
      goto L_089B8084;
    }
L_089B8084:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17456)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17444)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17456), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-17444), ctx.gpr[4]);
    goto L_089B80A8;
L_089B80A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B80D8;
      }
      goto L_089B80B8;
    }
L_089B80B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17436)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17436), ctx.gpr[5]);
    goto L_089B80D8;
L_089B80D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8108;
      }
      goto L_089B80E8;
    }
L_089B80E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17432)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17432), ctx.gpr[5]);
    goto L_089B8108;
L_089B8108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B8134;
      }
      goto L_089B8118;
    }
L_089B8118:
    ctx.gpr[31] = (0x089B8120u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 101u, 0x088A07B0u>(ctx, &aot_mem) && ctx.pc == 0x089B8120u) goto L_089B8120;
    return;
L_089B8120:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8134;
      }
      goto L_089B8128;
    }
L_089B8128:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B8134u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 95u, 0x088A0754u>(ctx, &aot_mem) && ctx.pc == 0x089B8134u) goto L_089B8134;
    return;
L_089B8134:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B816C;
      }
      goto L_089B8144;
    }
L_089B8144:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 18u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089B816Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x089B816Cu) goto L_089B816C;
    return;
L_089B816C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089B81C4;
      }
      goto L_089B8178;
    }
L_089B8178:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089B81C4;
      }
      goto L_089B8184;
    }
L_089B8184:
    ctx.gpr[31] = (0x089B818Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089B818Cu) goto L_089B818C;
    return;
L_089B818C:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B81C4;
      }
      goto L_089B8194;
    }
L_089B8194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B81C4;
      }
      goto L_089B81A4;
    }
L_089B81A4:
    ctx.gpr[31] = (0x089B81ACu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 219u, 0x089ED5CCu>(ctx, &aot_mem) && ctx.pc == 0x089B81ACu) goto L_089B81AC;
    return;
L_089B81AC:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 25u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089B81C4;
L_089B81C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089B8200;
      }
      goto L_089B81D0;
    }
L_089B81D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B81F8;
      }
      goto L_089B81DC;
    }
L_089B81DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(912), 0u);
        goto L_089B81F8;
    }
    goto L_089B81E8;
L_089B81E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089B81F4u);
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089B81F4u) goto L_089B81F4;
    return;
L_089B81F4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(912), 0u);
    goto L_089B81F8;
L_089B81F8:
    ctx.gpr[31] = (0x089B8200u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089B8200u) goto L_089B8200;
    return;
L_089B8200:
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089B846C;
      }
      goto L_089B8214;
    }
L_089B8214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B8254;
      }
      goto L_089B8224;
    }
L_089B8224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B8254;
      }
      goto L_089B8234;
    }
L_089B8234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B8254;
      }
      goto L_089B8244;
    }
L_089B8244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B8258;
      }
      goto L_089B8254;
    }
L_089B8254:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(596), 0u);
    goto L_089B8258;
L_089B8258:
    ctx.gpr[31] = (0x089B8260u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x089B8260u) goto L_089B8260;
    return;
L_089B8260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B846C;
      }
      goto L_089B8268;
    }
L_089B8268:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089B8298;
      }
      goto L_089B827C;
    }
L_089B827C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8298;
      }
      goto L_089B8288;
    }
L_089B8288:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089B8298;
      }
      goto L_089B8294;
    }
L_089B8294:
    ctx.gpr[16] = (0u | 1u);
    goto L_089B8298;
L_089B8298:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B82EC;
      }
      goto L_089B82A4;
    }
L_089B82A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089B82EC;
      }
      goto L_089B82B0;
    }
L_089B82B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B82D4;
      }
      goto L_089B82BC;
    }
L_089B82BC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B82CCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 655u, 0x0889F294u>(ctx, &aot_mem) && ctx.pc == 0x089B82CCu) goto L_089B82CC;
    return;
L_089B82CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B82E0;
      }
      goto L_089B82D4;
    }
L_089B82D4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B82E0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 644u, 0x0889F144u>(ctx, &aot_mem) && ctx.pc == 0x089B82E0u) goto L_089B82E0;
    return;
L_089B82E0:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089B83B8;
      }
      goto L_089B82EC;
    }
L_089B82EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B8314;
      }
      goto L_089B82FC;
    }
L_089B82FC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B830Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 655u, 0x0889F294u>(ctx, &aot_mem) && ctx.pc == 0x089B830Cu) goto L_089B830C;
    return;
L_089B830C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B83B8;
      }
      goto L_089B8314;
    }
L_089B8314:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8338;
      }
      goto L_089B8324;
    }
L_089B8324:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B8330u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 644u, 0x0889F144u>(ctx, &aot_mem) && ctx.pc == 0x089B8330u) goto L_089B8330;
    return;
L_089B8330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B83B8;
      }
      goto L_089B8338;
    }
L_089B8338:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_089B8374;
      }
      goto L_089B8348;
    }
L_089B8348:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_089B83AC;
      }
      goto L_089B8354;
    }
L_089B8354:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8394;
      }
      goto L_089B835C;
    }
L_089B835C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B836Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 655u, 0x0889F294u>(ctx, &aot_mem) && ctx.pc == 0x089B836Cu) goto L_089B836C;
    return;
L_089B836C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B83B8;
      }
      goto L_089B8374;
    }
L_089B8374:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B83AC;
      }
      goto L_089B837C;
    }
L_089B837C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B838Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 655u, 0x0889F294u>(ctx, &aot_mem) && ctx.pc == 0x089B838Cu) goto L_089B838C;
    return;
L_089B838C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B83B8;
      }
      goto L_089B8394;
    }
L_089B8394:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B83A4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 655u, 0x0889F294u>(ctx, &aot_mem) && ctx.pc == 0x089B83A4u) goto L_089B83A4;
    return;
L_089B83A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B83B8;
      }
      goto L_089B83AC;
    }
L_089B83AC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B83B8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 644u, 0x0889F144u>(ctx, &aot_mem) && ctx.pc == 0x089B83B8u) goto L_089B83B8;
    return;
L_089B83B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089B83F4;
      }
      goto L_089B83C4;
    }
L_089B83C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B83EC;
      }
      goto L_089B83D0;
    }
L_089B83D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(912), 0u);
        goto L_089B83EC;
    }
    goto L_089B83DC;
L_089B83DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089B83E8u);
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089B83E8u) goto L_089B83E8;
    return;
L_089B83E8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(912), 0u);
    goto L_089B83EC;
L_089B83EC:
    ctx.gpr[31] = (0x089B83F4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089B83F4u) goto L_089B83F4;
    return;
L_089B83F4:
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B843C;
      }
      goto L_089B840C;
    }
L_089B840C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B843C;
      }
      goto L_089B841C;
    }
L_089B841C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B843C;
      }
      goto L_089B842C;
    }
L_089B842C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B8440;
      }
      goto L_089B843C;
    }
L_089B843C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(596), 0u);
    goto L_089B8440;
L_089B8440:
    ctx.gpr[31] = (0x089B8448u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x089B8448u) goto L_089B8448;
    return;
L_089B8448:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8460;
      }
      goto L_089B8450;
    }
L_089B8450:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x089B8460u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x089B8460u) goto L_089B8460;
    return;
L_089B8460:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B846C;
      }
      goto L_089B8468;
    }
L_089B8468:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_089B846C;
L_089B846C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B84D8;
      }
      goto L_089B847C;
    }
L_089B847C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B84A8;
      }
      goto L_089B848C;
    }
L_089B848C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089B84A8;
      }
      goto L_089B8498;
    }
L_089B8498:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B84B0;
      }
      goto L_089B84A8;
    }
L_089B84A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_089B8550;
      }
      goto L_089B84B0;
    }
L_089B84B0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B84D0;
      }
      goto L_089B84C0;
    }
L_089B84C0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B8550;
      }
      goto L_089B84D0;
    }
L_089B84D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_089B8550;
      }
      goto L_089B84D8;
    }
L_089B84D8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_089B8528;
      }
      goto L_089B84E8;
    }
L_089B84E8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_089B8508;
      }
      goto L_089B84F0;
    }
L_089B84F0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B8548;
      }
      goto L_089B84F8;
    }
L_089B84F8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089B8550;
      }
      goto L_089B8500;
    }
L_089B8500:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_089B8550;
      }
      goto L_089B8508;
    }
L_089B8508:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(544)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089B851C;
      }
      goto L_089B8514;
    }
L_089B8514:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089B8520;
      }
      goto L_089B851C;
    }
L_089B851C:
    ctx.gpr[4] = (0u | 3u);
    goto L_089B8520;
L_089B8520:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8550;
      }
      goto L_089B8528;
    }
L_089B8528:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(544)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089B853C;
      }
      goto L_089B8534;
    }
L_089B8534:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089B8540;
      }
      goto L_089B853C;
    }
L_089B853C:
    ctx.gpr[4] = (0u | 3u);
    goto L_089B8540;
L_089B8540:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8550;
      }
      goto L_089B8548;
    }
L_089B8548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 8u);
      if (branch_taken) {
          goto L_089B8550;
      }
      goto L_089B8550;
    }
L_089B8550:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(542)));
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(598))))));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(542), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B858C;
      }
      goto L_089B8570;
    }
L_089B8570:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(542)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B858C;
      }
      goto L_089B857C;
    }
L_089B857C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[31] = (0x089B858Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 123u, 0x0880C8C0u>(ctx, &aot_mem) && ctx.pc == 0x089B858Cu) goto L_089B858C;
    return;
L_089B858C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(46) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B85C0;
      }
      goto L_089B85A0;
    }
L_089B85A0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17120)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B85B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B85CC;
      }
      goto L_089B85C0;
    }
L_089B85C0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B85CCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x089B85CCu) goto L_089B85CC;
    return;
L_089B85CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[20]);
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[31] = (0x089B85E8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 728u, 0x08887A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089B85E8u) goto L_089B85E8;
    return;
L_089B85E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B860C;
      }
      goto L_089B85F8;
    }
L_089B85F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089B860C;
L_089B860C:
    ctx.gpr[31] = (0x089B8614u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B8614u) goto L_089B8614;
    return;
L_089B8614:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8684;
      }
      goto L_089B861C;
    }
L_089B861C:
    ctx.gpr[31] = (0x089B8624u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 204u, 0x089ED4E4u>(ctx, &aot_mem) && ctx.pc == 0x089B8624u) goto L_089B8624;
    return;
L_089B8624:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B8684;
      }
      goto L_089B862C;
    }
L_089B862C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(596)));
    ctx.gpr[16] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089B8684;
      }
      goto L_089B863C;
    }
L_089B863C:
    ctx.gpr[31] = (0x089B8644u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 187u, 0x089ED3D0u>(ctx, &aot_mem) && ctx.pc == 0x089B8644u) goto L_089B8644;
    return;
L_089B8644:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B8678;
      }
      goto L_089B8654;
    }
L_089B8654:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089B8678;
      }
      goto L_089B8660;
    }
L_089B8660:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B8678u);
    ctx.gpr[8] = (0u | 1500u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 556u, 0x08A927F0u>(ctx, &aot_mem) && ctx.pc == 0x089B8678u) goto L_089B8678;
    return;
L_089B8678:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089B8684;
L_089B8684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089B8690;
L_089B8690:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B86C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x089B86F4u);
    ctx.gpr[5] = (0u | 68u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B86F4u) goto L_089B86F4;
    return;
L_089B86F4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B8700u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 273u, 0x089A5340u>(ctx, &aot_mem) && ctx.pc == 0x089B8700u) goto L_089B8700;
    return;
L_089B8700:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8710;
      }
      goto L_089B8708;
    }
L_089B8708:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089B8714;
      }
      goto L_089B8710;
    }
L_089B8710:
    ctx.gpr[19] = (0u | 0u);
    goto L_089B8714;
L_089B8714:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B87BC;
      }
      goto L_089B871C;
    }
L_089B871C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 193u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B87BC;
      }
      goto L_089B872C;
    }
L_089B872C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B87BC;
      }
      goto L_089B8738;
    }
L_089B8738:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[7] = (17096u << 16u);
    ctx.gpr[6] = (0u | 15u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_089B875C;
      }
      goto L_089B8750;
    }
L_089B8750:
    ctx.gpr[6] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089B877C;
      }
      goto L_089B875C;
    }
L_089B875C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B8768u);
    ctx.gpr[6] = (0u | 120u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089B8768u) goto L_089B8768;
    return;
L_089B8768:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-6));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(543)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B8798;
      }
      goto L_089B877C;
    }
L_089B877C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B8788u);
    ctx.gpr[6] = (0u | 121u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089B8788u) goto L_089B8788;
    return;
L_089B8788:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-11));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(543)));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    goto L_089B8798;
L_089B8798:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(543), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 45u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B87B4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 95u, 0x08A408F0u>(ctx, &aot_mem) && ctx.pc == 0x089B87B4u) goto L_089B87B4;
    return;
L_089B87B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8AB4;
      }
      goto L_089B87BC;
    }
L_089B87BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B87E0;
      }
      goto L_089B87CC;
    }
L_089B87CC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(848), 0u);
      if (branch_taken) {
          goto L_089B87E0;
      }
      goto L_089B87D4;
    }
L_089B87D4:
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B87E0;
L_089B87E0:
    ctx.gpr[31] = (0x089B87E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 554u, 0x089A258Cu>(ctx, &aot_mem) && ctx.pc == 0x089B87E8u) goto L_089B87E8;
    return;
L_089B87E8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(748), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1328), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1260)));
      if (branch_taken) {
          goto L_089B8868;
      }
      goto L_089B87FC;
    }
L_089B87FC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[7] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089B8868;
      }
      goto L_089B880C;
    }
L_089B880C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B88B8;
      }
      goto L_089B881C;
    }
L_089B881C:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-16936)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8834:
    ctx.gpr[18] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 2u);
      if (branch_taken) {
          goto L_089B88B8;
      }
      goto L_089B8840;
    }
L_089B8840:
    ctx.gpr[18] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 4u);
      if (branch_taken) {
          goto L_089B88B8;
      }
      goto L_089B884C;
    }
L_089B884C:
    ctx.gpr[18] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 3u);
      if (branch_taken) {
          goto L_089B88B8;
      }
      goto L_089B8858;
    }
L_089B8858:
    ctx.gpr[18] = (0u | 10u);
    ctx.gpr[20] = (0u | 5u);
    goto L_089B8860;
L_089B8860:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B88B8;
      }
      goto L_089B8868;
    }
L_089B8868:
    ctx.gpr[6] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 15u);
      if (branch_taken) {
          goto L_089B88A4;
      }
      goto L_089B8874;
    }
L_089B8874:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 12u);
      if (branch_taken) {
          goto L_089B8898;
      }
      goto L_089B887C;
    }
L_089B887C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 11u);
      if (branch_taken) {
          goto L_089B88B0;
      }
      goto L_089B8884;
    }
L_089B8884:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089B88B8;
      }
      goto L_089B888C;
    }
L_089B888C:
    ctx.gpr[18] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 3u);
      if (branch_taken) {
          goto L_089B88B8;
      }
      goto L_089B8898;
    }
L_089B8898:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 2u);
      if (branch_taken) {
          goto L_089B88B8;
      }
      goto L_089B88A4;
    }
L_089B88A4:
    ctx.gpr[18] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 4u);
      if (branch_taken) {
          goto L_089B88B8;
      }
      goto L_089B88B0;
    }
L_089B88B0:
    ctx.gpr[18] = (0u | 8u);
    ctx.gpr[20] = (0u | 5u);
    goto L_089B88B8;
L_089B88B8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B88D4;
      }
      goto L_089B88C0;
    }
L_089B88C0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(543)));
    ctx.gpr[6] = (~(ctx.gpr[18] | 0u));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(543), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    goto L_089B88D4;
L_089B88D4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8990;
      }
      goto L_089B88DC;
    }
L_089B88DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089B8940;
      }
      goto L_089B88E8;
    }
L_089B88E8:
    ctx.gpr[31] = (0x089B88F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 735u, 0x0889F878u>(ctx, &aot_mem) && ctx.pc == 0x089B88F0u) goto L_089B88F0;
    return;
L_089B88F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(660)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B890C;
      }
      goto L_089B8904;
    }
L_089B8904:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(660), ctx.gpr[5]);
    goto L_089B890C;
L_089B890C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B8990;
      }
      goto L_089B891C;
    }
L_089B891C:
    ctx.gpr[31] = (0x089B8924u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 101u, 0x088A07B0u>(ctx, &aot_mem) && ctx.pc == 0x089B8924u) goto L_089B8924;
    return;
L_089B8924:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8990;
      }
      goto L_089B892C;
    }
L_089B892C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x089B8938u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 95u, 0x088A0754u>(ctx, &aot_mem) && ctx.pc == 0x089B8938u) goto L_089B8938;
    return;
L_089B8938:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8990;
      }
      goto L_089B8940;
    }
L_089B8940:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(544)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089B8990;
      }
      goto L_089B8954;
    }
L_089B8954:
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089B897C;
      }
      goto L_089B8964;
    }
L_089B8964:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(508), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(540), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    goto L_089B897C;
L_089B897C:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(544)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B8954;
      }
      goto L_089B8990;
    }
L_089B8990:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x089B899Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089B899Cu) goto L_089B899C;
    return;
L_089B899C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B89B0;
      }
      goto L_089B89A4;
    }
L_089B89A4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x089B89B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 516u, 0x08A5ED8Cu>(ctx, &aot_mem) && ctx.pc == 0x089B89B0u) goto L_089B89B0;
    return;
L_089B89B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 38u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B8A38;
      }
      goto L_089B89C0;
    }
L_089B89C0:
    ctx.gpr[5] = (2185u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B89D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3228));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 50u, 0x088B447Cu>(ctx, &aot_mem) && ctx.pc == 0x089B89D4u) goto L_089B89D4;
    return;
L_089B89D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16128u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089B8A24;
      }
      goto L_089B89FC;
    }
L_089B89FC:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_089B8A10;
      }
      goto L_089B8A08;
    }
L_089B8A08:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B8A24;
      }
      goto L_089B8A10;
    }
L_089B8A10:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B8A1Cu);
    ctx.gpr[5] = (0u | 39u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 156u, 0x089B0884u>(ctx, &aot_mem) && ctx.pc == 0x089B8A1Cu) goto L_089B8A1C;
    return;
L_089B8A1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8A30;
      }
      goto L_089B8A24;
    }
L_089B8A24:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B8A30u);
    ctx.gpr[5] = (0u | 37u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 156u, 0x089B0884u>(ctx, &aot_mem) && ctx.pc == 0x089B8A30u) goto L_089B8A30;
    return;
L_089B8A30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8AB4;
      }
      goto L_089B8A38;
    }
L_089B8A38:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8A5C;
      }
      goto L_089B8A40;
    }
L_089B8A40:
    ctx.gpr[5] = (2185u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B8A54u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-932));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 50u, 0x088B447Cu>(ctx, &aot_mem) && ctx.pc == 0x089B8A54u) goto L_089B8A54;
    return;
L_089B8A54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8A98;
      }
      goto L_089B8A5C;
    }
L_089B8A5C:
    ctx.gpr[5] = (2185u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B8A70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3228));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 50u, 0x088B447Cu>(ctx, &aot_mem) && ctx.pc == 0x089B8A70u) goto L_089B8A70;
    return;
L_089B8A70:
    ctx.gpr[31] = (0x089B8A78u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 379u, 0x0899E35Cu>(ctx, &aot_mem) && ctx.pc == 0x089B8A78u) goto L_089B8A78;
    return;
L_089B8A78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8A98;
      }
      goto L_089B8A80;
    }
L_089B8A80:
    ctx.gpr[7] = (17530u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B8A98u);
    ctx.gpr[6] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089B8A98u) goto L_089B8A98;
    return;
L_089B8A98:
    ctx.gpr[31] = (0x089B8AA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 717u, 0x0899FA70u>(ctx, &aot_mem) && ctx.pc == 0x089B8AA0u) goto L_089B8AA0;
    return;
L_089B8AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(856), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_089B8AB4;
L_089B8AB4:
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
L_089B8AD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-528));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[23]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[30] = (2229u << 16u);
      if (branch_taken) {
          goto L_089B8B68;
      }
      goto L_089B8B4C;
    }
L_089B8B4C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[31] = (0x089B8B5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x089B8B5Cu) goto L_089B8B5C;
    return;
L_089B8B5C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089B8B68;
L_089B8B68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[31] = (0x089B8B9Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 349u, 0x0899E234u>(ctx, &aot_mem) && ctx.pc == 0x089B8B9Cu) goto L_089B8B9C;
    return;
L_089B8B9C:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (15267u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (16448u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17723u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_089B8C00;
      }
      goto L_089B8BF8;
    }
L_089B8BF8:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089B8C00;
L_089B8C00:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[23]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[20]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089B8C1Cu);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17928));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x089B8C1Cu) goto L_089B8C1C;
    return;
L_089B8C1C:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[22]);
    ctx.gpr[31] = (0x089B8C34u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x089B8C34u) goto L_089B8C34;
    return;
L_089B8C34:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089B8C44u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x089B8C44u) goto L_089B8C44;
    return;
L_089B8C44:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089B8C64u);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 112u, 0x0899CE80u>(ctx, &aot_mem) && ctx.pc == 0x089B8C64u) goto L_089B8C64;
    return;
L_089B8C64:
    ctx.gpr[8] = (ctx.gpr[16] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 39u);
    ctx.gpr[31] = (0x089B8C80u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 580u, 0x088DEE94u>(ctx, &aot_mem) && ctx.pc == 0x089B8C80u) goto L_089B8C80;
    return;
L_089B8C80:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(25));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B8C94u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 106u, 0x089A07E8u>(ctx, &aot_mem) && ctx.pc == 0x089B8C94u) goto L_089B8C94;
    return;
L_089B8C94:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[24])) && ctx.fpr[20] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
      if (branch_taken) {
          goto L_089B8CD0;
      }
      goto L_089B8CB8;
    }
L_089B8CB8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[24])) && ctx.fpr[12] == ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089B8CD4;
    }
    goto L_089B8CC8;
L_089B8CC8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_089B8CE0;
      }
      goto L_089B8CD0;
    }
L_089B8CD0:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B8CD4;
L_089B8CD4:
    ctx.gpr[31] = (0x089B8CDCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089B8CDCu) goto L_089B8CDC;
    return;
L_089B8CDC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B8CE0;
L_089B8CE0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B8CECu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A288A8u>(ctx, &aot_mem) && ctx.pc == 0x089B8CECu) goto L_089B8CEC;
    return;
L_089B8CEC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1412), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(250));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1776), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B8D10;
      }
      goto L_089B8D04;
    }
L_089B8D04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[31] = (0x089B8D10u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1412));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089B8D10u) goto L_089B8D10;
    return;
L_089B8D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (48716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B8DFC;
      }
      goto L_089B8D94;
    }
L_089B8D94:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8F24;
      }
      goto L_089B8DFC;
    }
L_089B8DFC:
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B8ED4;
      }
      goto L_089B8E1C;
    }
L_089B8E1C:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B8ECC;
      }
      goto L_089B8E94;
    }
L_089B8E94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16000u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    goto L_089B8ECC;
L_089B8ECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8F24;
      }
      goto L_089B8ED4;
    }
L_089B8ED4:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_089B8F24;
L_089B8F24:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[20] = ctx.fpr[14] / ctx.fpr[12];
    ctx.gpr[31] = (0x089B8F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089B8F54u) goto L_089B8F54;
    return;
L_089B8F54:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[31] = (0x089B8F60u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 528u, 0x08AF68D0u>(ctx, &aot_mem) && ctx.pc == 0x089B8F60u) goto L_089B8F60;
    return;
L_089B8F60:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28892)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28896)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089B8F78u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x089B8F78u) goto L_089B8F78;
    return;
L_089B8F78:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28884)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28888)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089B8F90u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61FCu>(ctx, &aot_mem) && ctx.pc == 0x089B8F90u) goto L_089B8F90;
    return;
L_089B8F90:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B8FA0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x089B8FA0u) goto L_089B8FA0;
    return;
L_089B8FA0:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089B8FB4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x089B8FB4u) goto L_089B8FB4;
    return;
L_089B8FB4:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089B8FC0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x089B8FC0u) goto L_089B8FC0;
    return;
L_089B8FC0:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (16320u << 16u);
      if (branch_taken) {
          goto L_089B9038;
      }
      goto L_089B9028;
    }
L_089B9028:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B9050;
      }
      goto L_089B9034;
    }
L_089B9034:
    ctx.gpr[4] = (16320u << 16u);
    goto L_089B9038;
L_089B9038:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B905C;
      }
      goto L_089B9050;
    }
L_089B9050:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B905C;
L_089B905C:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B90A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (8u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[17] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089B92F8;
      }
      goto L_089B90EC;
    }
L_089B90EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089B9170;
      }
      goto L_089B90FC;
    }
L_089B90FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B9108u);
    ctx.gpr[5] = (0u | 190u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B9108u) goto L_089B9108;
    return;
L_089B9108:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9124;
      }
      goto L_089B9114;
    }
L_089B9114:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B9120u);
    ctx.gpr[5] = (0u | 191u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B9120u) goto L_089B9120;
    return;
L_089B9120:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B9124;
L_089B9124:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B913C;
      }
      goto L_089B912C;
    }
L_089B912C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B9138u);
    ctx.gpr[5] = (0u | 192u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B9138u) goto L_089B9138;
    return;
L_089B9138:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B913C;
L_089B913C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B915C;
      }
      goto L_089B9144;
    }
L_089B9144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B92CC;
      }
      goto L_089B915C;
    }
L_089B915C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B9168u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 204u, 0x0888D084u>(ctx, &aot_mem) && ctx.pc == 0x089B9168u) goto L_089B9168;
    return;
L_089B9168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9778;
      }
      goto L_089B9170;
    }
L_089B9170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B917Cu);
    ctx.gpr[5] = (0u | 75u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B917Cu) goto L_089B917C;
    return;
L_089B917C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9198;
      }
      goto L_089B9188;
    }
L_089B9188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B9194u);
    ctx.gpr[5] = (0u | 76u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B9194u) goto L_089B9194;
    return;
L_089B9194:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B9198;
L_089B9198:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B91B0;
      }
      goto L_089B91A0;
    }
L_089B91A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B91ACu);
    ctx.gpr[5] = (0u | 77u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B91ACu) goto L_089B91AC;
    return;
L_089B91AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B91B0;
L_089B91B0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B91C8;
      }
      goto L_089B91B8;
    }
L_089B91B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B91C4u);
    ctx.gpr[5] = (0u | 93u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B91C4u) goto L_089B91C4;
    return;
L_089B91C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B91C8;
L_089B91C8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B91E0;
      }
      goto L_089B91D0;
    }
L_089B91D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B91DCu);
    ctx.gpr[5] = (0u | 78u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B91DCu) goto L_089B91DC;
    return;
L_089B91DC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B91E0;
L_089B91E0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B91F8;
      }
      goto L_089B91E8;
    }
L_089B91E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B91F4u);
    ctx.gpr[5] = (0u | 95u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B91F4u) goto L_089B91F4;
    return;
L_089B91F4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B91F8;
L_089B91F8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9210;
      }
      goto L_089B9200;
    }
L_089B9200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B920Cu);
    ctx.gpr[5] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B920Cu) goto L_089B920C;
    return;
L_089B920C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B9210;
L_089B9210:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9228;
      }
      goto L_089B9218;
    }
L_089B9218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B9224u);
    ctx.gpr[5] = (0u | 172u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B9224u) goto L_089B9224;
    return;
L_089B9224:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B9228;
L_089B9228:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9240;
      }
      goto L_089B9230;
    }
L_089B9230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B923Cu);
    ctx.gpr[5] = (0u | 176u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B923Cu) goto L_089B923C;
    return;
L_089B923C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B9240;
L_089B9240:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9258;
      }
      goto L_089B9248;
    }
L_089B9248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B9254u);
    ctx.gpr[5] = (0u | 171u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B9254u) goto L_089B9254;
    return;
L_089B9254:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B9258;
L_089B9258:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9270;
      }
      goto L_089B9260;
    }
L_089B9260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B926Cu);
    ctx.gpr[5] = (0u | 175u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B926Cu) goto L_089B926C;
    return;
L_089B926C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B9270;
L_089B9270:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9288;
      }
      goto L_089B9278;
    }
L_089B9278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B9284u);
    ctx.gpr[5] = (0u | 180u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B9284u) goto L_089B9284;
    return;
L_089B9284:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B9288;
L_089B9288:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B92A0;
      }
      goto L_089B9290;
    }
L_089B9290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B929Cu);
    ctx.gpr[5] = (0u | 181u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B929Cu) goto L_089B929C;
    return;
L_089B929C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B92A0;
L_089B92A0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B92B8;
      }
      goto L_089B92A8;
    }
L_089B92A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B92B4u);
    ctx.gpr[5] = (0u | 81u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089B92B4u) goto L_089B92B4;
    return;
L_089B92B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B92B8;
L_089B92B8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B92C8;
      }
      goto L_089B92C0;
    }
L_089B92C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089B92CC;
      }
      goto L_089B92C8;
    }
L_089B92C8:
    ctx.gpr[18] = (0u | 1u);
    goto L_089B92CC;
L_089B92CC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B92F8;
      }
      goto L_089B92D4;
    }
L_089B92D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B92E0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 204u, 0x0888D084u>(ctx, &aot_mem) && ctx.pc == 0x089B92E0u) goto L_089B92E0;
    return;
L_089B92E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B9778;
      }
      goto L_089B92F8;
    }
L_089B92F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089B9338;
      }
      goto L_089B9324;
    }
L_089B9324:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089B9338;
L_089B9338:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x089B9344u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 489u, 0x08A05EE4u>(ctx, &aot_mem) && ctx.pc == 0x089B9344u) goto L_089B9344;
    return;
L_089B9344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B93EC;
      }
      goto L_089B9368;
    }
L_089B9368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[21]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
        goto L_089B9380;
    }
    goto L_089B9378;
L_089B9378:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_089B9380;
      }
      goto L_089B9380;
    }
L_089B9380:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B9394u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 404u, 0x0899E458u>(ctx, &aot_mem) && ctx.pc == 0x089B9394u) goto L_089B9394;
    return;
L_089B9394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089B93C0;
      }
      goto L_089B93A4;
    }
L_089B93A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089B93C0;
      }
      goto L_089B93B4;
    }
L_089B93B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B93C0;
L_089B93C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B94B8;
      }
      goto L_089B93D4;
    }
L_089B93D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B94B8;
      }
      goto L_089B93EC;
    }
L_089B93EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B9448;
      }
      goto L_089B93FC;
    }
L_089B93FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089B9420;
      }
      goto L_089B940C;
    }
L_089B940C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B94B8;
      }
      goto L_089B9420;
    }
L_089B9420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
        goto L_089B9438;
    }
    goto L_089B9430;
L_089B9430:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_089B9438;
      }
      goto L_089B9438;
    }
L_089B9438:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B94B8;
      }
      goto L_089B9448;
    }
L_089B9448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B9474;
      }
      goto L_089B9458;
    }
L_089B9458:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B94B8;
      }
      goto L_089B9474;
    }
L_089B9474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B9498;
      }
      goto L_089B9484;
    }
L_089B9484:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B94B8;
      }
      goto L_089B9498;
    }
L_089B9498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
        goto L_089B94B0;
    }
    goto L_089B94A8;
L_089B94A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_089B94B0;
      }
      goto L_089B94B0;
    }
L_089B94B0:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089B94B8;
L_089B94B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089B94E0;
      }
      goto L_089B94C8;
    }
L_089B94C8:
    ctx.gpr[31] = (0x089B94D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 503u, 0x08A36FB4u>(ctx, &aot_mem) && ctx.pc == 0x089B94D0u) goto L_089B94D0;
    return;
L_089B94D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089B94E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(896));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x089B94E0u) goto L_089B94E0;
    return;
L_089B94E0:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089B9540u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 517u, 0x08A06634u>(ctx, &aot_mem) && ctx.pc == 0x089B9540u) goto L_089B9540;
    return;
L_089B9540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B96E4;
      }
      goto L_089B9554;
    }
L_089B9554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B960C;
      }
      goto L_089B9564;
    }
L_089B9564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (16329u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[5] | 4059u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B95A4;
      }
      goto L_089B958C;
    }
L_089B958C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B95A4;
      }
      goto L_089B959C;
    }
L_089B959C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[20] - ctx.fpr[22];
      if (branch_taken) {
          goto L_089B95B0;
      }
      goto L_089B95A4;
    }
L_089B95A4:
    ctx.gpr[31] = (0x089B95ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089B95ACu) goto L_089B95AC;
    return;
L_089B95AC:
    ctx.fpr[22] = ctx.fpr[0] - ctx.fpr[22];
    goto L_089B95B0;
L_089B95B0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089B95C8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A066A0u>(ctx, &aot_mem) && ctx.pc == 0x089B95C8u) goto L_089B95C8;
    return;
L_089B95C8:
    ctx.gpr[5] = (49097u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B95DCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A063D8u>(ctx, &aot_mem) && ctx.pc == 0x089B95DCu) goto L_089B95DC;
    return;
L_089B95DC:
    ctx.gpr[5] = (16153u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B95F8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x089B95F8u) goto L_089B95F8;
    return;
L_089B95F8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089B9604u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 530u, 0x08A06A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089B9604u) goto L_089B9604;
    return;
L_089B9604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9724;
      }
      goto L_089B960C;
    }
L_089B960C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B96A0;
      }
      goto L_089B961C;
    }
L_089B961C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (16329u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[5] | 4059u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B965C;
      }
      goto L_089B9644;
    }
L_089B9644:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B965C;
      }
      goto L_089B9654;
    }
L_089B9654:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[22];
      if (branch_taken) {
          goto L_089B9668;
      }
      goto L_089B965C;
    }
L_089B965C:
    ctx.gpr[31] = (0x089B9664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089B9664u) goto L_089B9664;
    return;
L_089B9664:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[22];
    goto L_089B9668;
L_089B9668:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B9680u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A066A0u>(ctx, &aot_mem) && ctx.pc == 0x089B9680u) goto L_089B9680;
    return;
L_089B9680:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B968Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A063D8u>(ctx, &aot_mem) && ctx.pc == 0x089B968Cu) goto L_089B968C;
    return;
L_089B968C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089B9698u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 530u, 0x08A06A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089B9698u) goto L_089B9698;
    return;
L_089B9698:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9724;
      }
      goto L_089B96A0;
    }
L_089B96A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089B96CC;
      }
      goto L_089B96BC;
    }
L_089B96BC:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B96DC;
      }
      goto L_089B96CC;
    }
L_089B96CC:
    ctx.gpr[31] = (0x089B96D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089B96D4u) goto L_089B96D4;
    return;
L_089B96D4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089B96DC;
      }
      goto L_089B96DC;
    }
L_089B96DC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089B9724;
      }
      goto L_089B96E4;
    }
L_089B96E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089B9710;
      }
      goto L_089B9700;
    }
L_089B9700:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B9720;
      }
      goto L_089B9710;
    }
L_089B9710:
    ctx.gpr[31] = (0x089B9718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089B9718u) goto L_089B9718;
    return;
L_089B9718:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089B9720;
      }
      goto L_089B9720;
    }
L_089B9720:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089B9724;
L_089B9724:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B9730u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x089B9730u) goto L_089B9730;
    return;
L_089B9730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_089B9758;
    }
    goto L_089B9740;
L_089B9740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_089B9758;
    }
    goto L_089B974C;
L_089B974C:
    ctx.gpr[31] = (0x089B9754u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089B9754u) goto L_089B9754;
    return;
L_089B9754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_089B9758;
L_089B9758:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9778;
      }
      goto L_089B9764;
    }
L_089B9764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9778;
      }
      goto L_089B9770;
    }
L_089B9770:
    ctx.gpr[31] = (0x089B9778u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089B9778u) goto L_089B9778;
    return;
L_089B9778:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B97A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-432));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA070;
      }
      goto L_089B97FC;
    }
L_089B97FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA070;
      }
      goto L_089B9814;
    }
L_089B9814:
    ctx.gpr[31] = (0x089B981Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089B981Cu) goto L_089B981C;
    return;
L_089B981C:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (16968u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(364), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[4]);
        goto L_089B9880;
    }
    goto L_089B9880;
L_089B9880:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (16968u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_089B98C4;
    }
    goto L_089B98C4;
L_089B98C4:
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (16968u << 16u);
    ctx.gpr[6] = (0u | 100u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[5]);
        goto L_089B990C;
    }
    goto L_089B990C;
L_089B990C:
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (16968u << 16u);
    ctx.gpr[6] = (0u | 100u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_089B9950;
    }
    goto L_089B9950;
L_089B9950:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[4]);
    goto L_089B9958;
L_089B9958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9EA4;
      }
      goto L_089B996C;
    }
L_089B996C:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9EA4;
      }
      goto L_089B9974;
    }
L_089B9974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[4]);
    goto L_089B997C;
L_089B997C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9E94;
      }
      goto L_089B9990;
    }
L_089B9990:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9E94;
      }
      goto L_089B9998;
    }
L_089B9998:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[30] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[30] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20)));
    goto L_089B99D0;
L_089B99D0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9AFC;
      }
      goto L_089B99D8;
    }
L_089B99D8:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9AFC;
      }
      goto L_089B99E0;
    }
L_089B99E0:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9A14;
      }
      goto L_089B9A00;
    }
L_089B9A00:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089B9A14;
L_089B9A14:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9AF4;
      }
      goto L_089B9A20;
    }
L_089B9A20:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9AF4;
      }
      goto L_089B9A30;
    }
L_089B9A30:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9A58;
      }
      goto L_089B9A3C;
    }
L_089B9A3C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7372)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B9A58;
      }
      goto L_089B9A58;
    }
L_089B9A58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B9ADC;
      }
      goto L_089B9A68;
    }
L_089B9A68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(37)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9ADC;
      }
      goto L_089B9A7C;
    }
L_089B9A7C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(380), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B9A94u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 113u, 0x0899CEACu>(ctx, &aot_mem) && ctx.pc == 0x089B9A94u) goto L_089B9A94;
    return;
L_089B9A94:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
      if (branch_taken) {
          goto L_089B9ADC;
      }
      goto L_089B9AD4;
    }
L_089B9AD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_089B9AF4;
      }
      goto L_089B9ADC;
    }
L_089B9ADC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9A30;
      }
      goto L_089B9AF4;
    }
L_089B9AF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B99D0;
      }
      goto L_089B9AFC;
    }
L_089B9AFC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(12)));
    goto L_089B9B00;
L_089B9B00:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9C2C;
      }
      goto L_089B9B08;
    }
L_089B9B08:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9C2C;
      }
      goto L_089B9B10;
    }
L_089B9B10:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9B44;
      }
      goto L_089B9B30;
    }
L_089B9B30:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089B9B44;
L_089B9B44:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9C24;
      }
      goto L_089B9B50;
    }
L_089B9B50:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9C24;
      }
      goto L_089B9B60;
    }
L_089B9B60:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9B88;
      }
      goto L_089B9B6C;
    }
L_089B9B6C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7372)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B9B88;
      }
      goto L_089B9B88;
    }
L_089B9B88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B9C0C;
      }
      goto L_089B9B98;
    }
L_089B9B98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(37)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9C0C;
      }
      goto L_089B9BAC;
    }
L_089B9BAC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(380), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B9BC4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 113u, 0x0899CEACu>(ctx, &aot_mem) && ctx.pc == 0x089B9BC4u) goto L_089B9BC4;
    return;
L_089B9BC4:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
      if (branch_taken) {
          goto L_089B9C0C;
      }
      goto L_089B9C04;
    }
L_089B9C04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_089B9C24;
      }
      goto L_089B9C0C;
    }
L_089B9C0C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9B60;
      }
      goto L_089B9C24;
    }
L_089B9C24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9B00;
      }
      goto L_089B9C2C;
    }
L_089B9C2C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    goto L_089B9C30;
L_089B9C30:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9D5C;
      }
      goto L_089B9C38;
    }
L_089B9C38:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9D5C;
      }
      goto L_089B9C40;
    }
L_089B9C40:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9C74;
      }
      goto L_089B9C60;
    }
L_089B9C60:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089B9C74;
L_089B9C74:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9D54;
      }
      goto L_089B9C80;
    }
L_089B9C80:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9D54;
      }
      goto L_089B9C90;
    }
L_089B9C90:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9CB8;
      }
      goto L_089B9C9C;
    }
L_089B9C9C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7372)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B9CB8;
      }
      goto L_089B9CB8;
    }
L_089B9CB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B9D3C;
      }
      goto L_089B9CC8;
    }
L_089B9CC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(37)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9D3C;
      }
      goto L_089B9CDC;
    }
L_089B9CDC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(380), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B9CF4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 113u, 0x0899CEACu>(ctx, &aot_mem) && ctx.pc == 0x089B9CF4u) goto L_089B9CF4;
    return;
L_089B9CF4:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
      if (branch_taken) {
          goto L_089B9D3C;
      }
      goto L_089B9D34;
    }
L_089B9D34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_089B9D54;
      }
      goto L_089B9D3C;
    }
L_089B9D3C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9C90;
      }
      goto L_089B9D54;
    }
L_089B9D54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9C30;
      }
      goto L_089B9D5C;
    }
L_089B9D5C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    goto L_089B9D60;
L_089B9D60:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9E84;
      }
      goto L_089B9D68;
    }
L_089B9D68:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9E84;
      }
      goto L_089B9D70;
    }
L_089B9D70:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9DA4;
      }
      goto L_089B9D90;
    }
L_089B9D90:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089B9DA4;
L_089B9DA4:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9E7C;
      }
      goto L_089B9DB0;
    }
L_089B9DB0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9E7C;
      }
      goto L_089B9DC0;
    }
L_089B9DC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9DE8;
      }
      goto L_089B9DCC;
    }
L_089B9DCC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7372)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B9DE8;
      }
      goto L_089B9DE8;
    }
L_089B9DE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B9E64;
      }
      goto L_089B9DF8;
    }
L_089B9DF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(37)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_089B9E64;
      }
      goto L_089B9E0C;
    }
L_089B9E0C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B9E1Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 113u, 0x0899CEACu>(ctx, &aot_mem) && ctx.pc == 0x089B9E1Cu) goto L_089B9E1C;
    return;
L_089B9E1C:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B9E64;
      }
      goto L_089B9E5C;
    }
L_089B9E5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_089B9E7C;
      }
      goto L_089B9E64;
    }
L_089B9E64:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9DC0;
      }
      goto L_089B9E7C;
    }
L_089B9E7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9D60;
      }
      goto L_089B9E84;
    }
L_089B9E84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B997C;
      }
      goto L_089B9E94;
    }
L_089B9E94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B9958;
      }
      goto L_089B9EA4;
    }
L_089B9EA4:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA070;
      }
      goto L_089B9EAC;
    }
L_089B9EAC:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B9ED8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 113u, 0x0899CEACu>(ctx, &aot_mem) && ctx.pc == 0x089B9ED8u) goto L_089B9ED8;
    return;
L_089B9ED8:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x089B9F00u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089B9F00u) goto L_089B9F00;
    return;
L_089B9F00:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86)));
    ctx.gpr[31] = (0x089B9F10u);
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089B9F10u) goto L_089B9F10;
    return;
L_089B9F10:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA040;
      }
      goto L_089B9F24;
    }
L_089B9F24:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B9F34u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 113u, 0x0899CEACu>(ctx, &aot_mem) && ctx.pc == 0x089B9F34u) goto L_089B9F34;
    return;
L_089B9F34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089B9F94;
      }
      goto L_089B9F60;
    }
L_089B9F60:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BA038;
      }
      goto L_089B9F68;
    }
L_089B9F68:
    ctx.gpr[8] = (15820u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[31] = (0x089B9F8Cu);
    ctx.gpr[7] = (0u | 15000u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 202u, 0x088D4F88u>(ctx, &aot_mem) && ctx.pc == 0x089B9F8Cu) goto L_089B9F8C;
    return;
L_089B9F8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA038;
      }
      goto L_089B9F94;
    }
L_089B9F94:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089B9FAC;
      }
      goto L_089B9F9C;
    }
L_089B9F9C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA038;
      }
      goto L_089B9FA4;
    }
L_089B9FA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA038;
      }
      goto L_089B9FAC;
    }
L_089B9FAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(37)));
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(8500));
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[31] = (0x089B9FCCu);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089B9FCCu) goto L_089B9FCC;
    return;
L_089B9FCC:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(-8000));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B9FE0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089B9FE0u) goto L_089B9FE0;
    return;
L_089B9FE0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28876)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28880)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[31] = (0x089BA030u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 202u, 0x088D4F88u>(ctx, &aot_mem) && ctx.pc == 0x089BA030u) goto L_089BA030;
    return;
L_089BA030:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA038;
      }
      goto L_089BA038;
    }
L_089BA038:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089BA074;
      }
      goto L_089BA040;
    }
L_089BA040:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1784), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089BA064u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 79u, 0x089A05ACu>(ctx, &aot_mem) && ctx.pc == 0x089BA064u) goto L_089BA064;
    return;
L_089BA064:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089BA070u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x089BA070u) goto L_089BA070;
    return;
L_089BA070:
    ctx.gpr[2] = (0u | 0u);
    goto L_089BA074;
L_089BA074:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BA0AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 48 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 19 ? 1u : 0u);
      if (branch_taken) {
          goto L_089BA0F0;
      }
      goto L_089BA0D0;
    }
L_089BA0D0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19));
      if (branch_taken) {
          goto L_089BA3F8;
      }
      goto L_089BA0D8;
    }
L_089BA0D8:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-16896)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BA0F0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 86 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA3BC;
      }
      goto L_089BA0FC;
    }
L_089BA0FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA3F8;
      }
      goto L_089BA104;
    }
L_089BA104:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA2B0;
      }
      goto L_089BA11C;
    }
L_089BA11C:
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA178;
      }
      goto L_089BA128;
    }
L_089BA128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA134u);
    ctx.gpr[5] = (0u | 167u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089BA134u) goto L_089BA134;
    return;
L_089BA134:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA14C;
      }
      goto L_089BA140;
    }
L_089BA140:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089BA14C;
L_089BA14C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA2B0;
      }
      goto L_089BA158;
    }
L_089BA158:
    ctx.gpr[31] = (0x089BA160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x089BA160u) goto L_089BA160;
    return;
L_089BA160:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089BA170u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2AA08u>(ctx, &aot_mem) && ctx.pc == 0x089BA170u) goto L_089BA170;
    return;
L_089BA170:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA2B0;
      }
      goto L_089BA178;
    }
L_089BA178:
    ctx.gpr[5] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA1D4;
      }
      goto L_089BA184;
    }
L_089BA184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA190u);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089BA190u) goto L_089BA190;
    return;
L_089BA190:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA1A8;
      }
      goto L_089BA19C;
    }
L_089BA19C:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089BA1A8;
L_089BA1A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA2B0;
      }
      goto L_089BA1B4;
    }
L_089BA1B4:
    ctx.gpr[31] = (0x089BA1BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x089BA1BCu) goto L_089BA1BC;
    return;
L_089BA1BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089BA1CCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2AA08u>(ctx, &aot_mem) && ctx.pc == 0x089BA1CCu) goto L_089BA1CC;
    return;
L_089BA1CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA2B0;
      }
      goto L_089BA1D4;
    }
L_089BA1D4:
    ctx.gpr[5] = (0u | 21u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (0u | 22u);
      if (branch_taken) {
          goto L_089BA1F8;
      }
      goto L_089BA1E0;
    }
L_089BA1E0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 24u);
      if (branch_taken) {
          goto L_089BA1F8;
      }
      goto L_089BA1E8;
    }
L_089BA1E8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 23u);
      if (branch_taken) {
          goto L_089BA1F8;
      }
      goto L_089BA1F0;
    }
L_089BA1F0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089BA2B0;
      }
      goto L_089BA1F8;
    }
L_089BA1F8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA228;
      }
      goto L_089BA200;
    }
L_089BA200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA20Cu);
    ctx.gpr[5] = (0u | 163u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089BA20Cu) goto L_089BA20C;
    return;
L_089BA20C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA28C;
      }
      goto L_089BA218;
    }
L_089BA218:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BA28C;
      }
      goto L_089BA228;
    }
L_089BA228:
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA25C;
      }
      goto L_089BA234;
    }
L_089BA234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA240u);
    ctx.gpr[5] = (0u | 165u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089BA240u) goto L_089BA240;
    return;
L_089BA240:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA28C;
      }
      goto L_089BA24C;
    }
L_089BA24C:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BA28C;
      }
      goto L_089BA25C;
    }
L_089BA25C:
    ctx.gpr[5] = (0u | 23u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA28C;
      }
      goto L_089BA268;
    }
L_089BA268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA274u);
    ctx.gpr[5] = (0u | 164u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089BA274u) goto L_089BA274;
    return;
L_089BA274:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA28C;
      }
      goto L_089BA280;
    }
L_089BA280:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089BA28C;
L_089BA28C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA2B0;
      }
      goto L_089BA298;
    }
L_089BA298:
    ctx.gpr[31] = (0x089BA2A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x089BA2A0u) goto L_089BA2A0;
    return;
L_089BA2A0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089BA2B0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2AA08u>(ctx, &aot_mem) && ctx.pc == 0x089BA2B0u) goto L_089BA2B0;
    return;
L_089BA2B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA3F8;
      }
      goto L_089BA2B8;
    }
L_089BA2B8:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA2C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17892));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 173u, 0x0899D490u>(ctx, &aot_mem) && ctx.pc == 0x089BA2C8u) goto L_089BA2C8;
    return;
L_089BA2C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA3F8;
      }
      goto L_089BA2D0;
    }
L_089BA2D0:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA2E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17884));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 173u, 0x0899D490u>(ctx, &aot_mem) && ctx.pc == 0x089BA2E0u) goto L_089BA2E0;
    return;
L_089BA2E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA3F8;
      }
      goto L_089BA2E8;
    }
L_089BA2E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA2F4u);
    ctx.gpr[5] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089BA2F4u) goto L_089BA2F4;
    return;
L_089BA2F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA304;
      }
      goto L_089BA2FC;
    }
L_089BA2FC:
    ctx.gpr[31] = (0x089BA304u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 358u, 0x089ADE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BA304u) goto L_089BA304;
    return;
L_089BA304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA3F8;
      }
      goto L_089BA30C;
    }
L_089BA30C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA318u);
    ctx.gpr[5] = (0u | 57u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089BA318u) goto L_089BA318;
    return;
L_089BA318:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA330;
      }
      goto L_089BA324;
    }
L_089BA324:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089BA330;
L_089BA330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA3F8;
      }
      goto L_089BA338;
    }
L_089BA338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA344u);
    ctx.gpr[5] = (0u | 157u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089BA344u) goto L_089BA344;
    return;
L_089BA344:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA35C;
      }
      goto L_089BA350;
    }
L_089BA350:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089BA35C;
L_089BA35C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA3F8;
      }
      goto L_089BA364;
    }
L_089BA364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA370u);
    ctx.gpr[5] = (0u | 206u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089BA370u) goto L_089BA370;
    return;
L_089BA370:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA388;
      }
      goto L_089BA37C;
    }
L_089BA37C:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089BA388;
L_089BA388:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA3F8;
      }
      goto L_089BA390;
    }
L_089BA390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA39Cu);
    ctx.gpr[5] = (0u | 240u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089BA39Cu) goto L_089BA39C;
    return;
L_089BA39C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA3B4;
      }
      goto L_089BA3A8;
    }
L_089BA3A8:
    ctx.gpr[5] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089BA3B4;
L_089BA3B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA3F8;
      }
      goto L_089BA3BC;
    }
L_089BA3BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BA3C8u);
    ctx.gpr[5] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 337u, 0x08865864u>(ctx, &aot_mem) && ctx.pc == 0x089BA3C8u) goto L_089BA3C8;
    return;
L_089BA3C8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA3F0;
      }
      goto L_089BA3D4;
    }
L_089BA3D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17876));
    ctx.gpr[31] = (0x089BA3E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 112u, 0x0899CE80u>(ctx, &aot_mem) && ctx.pc == 0x089BA3E8u) goto L_089BA3E8;
    return;
L_089BA3E8:
    ctx.gpr[31] = (0x089BA3F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 879u, 0x088B3FBCu>(ctx, &aot_mem) && ctx.pc == 0x089BA3F0u) goto L_089BA3F0;
    return;
L_089BA3F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA3F8;
      }
      goto L_089BA3F8;
    }
L_089BA3F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(864), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BA410:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x089BA458u);
    ctx.gpr[21] = (0u | 169u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089BA458u) goto L_089BA458;
    return;
L_089BA458:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA478;
      }
      goto L_089BA460;
    }
L_089BA460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA480;
      }
      goto L_089BA470;
    }
L_089BA470:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA488;
      }
      goto L_089BA478;
    }
L_089BA478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB5A4;
      }
      goto L_089BA480;
    }
L_089BA480:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA498;
      }
      goto L_089BA488;
    }
L_089BA488:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089BA4A0;
      }
      goto L_089BA490;
    }
L_089BA490:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA4AC;
      }
      goto L_089BA498;
    }
L_089BA498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB5A4;
      }
      goto L_089BA4A0;
    }
L_089BA4A0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089BA4ACu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 776u, 0x089A32E4u>(ctx, &aot_mem) && ctx.pc == 0x089BA4ACu) goto L_089BA4AC;
    return;
L_089BA4AC:
    ctx.gpr[4] = (ctx.gpr[22] < static_cast<std::uint32_t>(85) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB570;
      }
      goto L_089BA4B8;
    }
L_089BA4B8:
    ctx.gpr[22] = (ctx.gpr[22] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[22]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-16776)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BA4D0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[5]);
    ctx.gpr[31] = (0x089BA4ECu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089BA4ECu) goto L_089BA4EC;
    return;
L_089BA4EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BA4F4;
    }
L_089BA4F4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089BA520u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BA520u) goto L_089BA520;
    return;
L_089BA520:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BA528;
    }
L_089BA528:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089BA540u);
    ctx.gpr[6] = (0u | 149u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BA540u) goto L_089BA540;
    return;
L_089BA540:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_089BA5AC;
      }
      goto L_089BA548;
    }
L_089BA548:
    ctx.gpr[31] = (0x089BA550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089BA550u) goto L_089BA550;
    return;
L_089BA550:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29120)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089BA568u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089BA568u) goto L_089BA568;
    return;
L_089BA568:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29012)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29016)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BA5BC;
      }
      goto L_089BA5AC;
    }
L_089BA5AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    goto L_089BA5BC;
L_089BA5BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BA5C4;
    }
L_089BA5C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BA5CC;
    }
L_089BA5CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BA5D4;
    }
L_089BA5D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BA5DC;
    }
L_089BA5DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BA5E4;
    }
L_089BA5E4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089BA618u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BA618u) goto L_089BA618;
    return;
L_089BA618:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BA620;
    }
L_089BA620:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089BA658u);
    ctx.gpr[6] = (0u | 38u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BA658u) goto L_089BA658;
    return;
L_089BA658:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BA688u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13028));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 50u, 0x088B447Cu>(ctx, &aot_mem) && ctx.pc == 0x089BA688u) goto L_089BA688;
    return;
L_089BA688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA6D4;
      }
      goto L_089BA698;
    }
L_089BA698:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA6D4;
      }
      goto L_089BA6A8;
    }
L_089BA6A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA6D4;
      }
      goto L_089BA6B8;
    }
L_089BA6B8:
    ctx.gpr[31] = (0x089BA6C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 474u, 0x088868F4u>(ctx, &aot_mem) && ctx.pc == 0x089BA6C0u) goto L_089BA6C0;
    return;
L_089BA6C0:
    ctx.gpr[31] = (0x089BA6C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089BA6C8u) goto L_089BA6C8;
    return;
L_089BA6C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1796), ctx.gpr[4]);
    goto L_089BA6D4;
L_089BA6D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BA6DC;
    }
L_089BA6DC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089BA710u);
    ctx.gpr[6] = (0u | 150u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BA710u) goto L_089BA710;
    return;
L_089BA710:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BA728u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13028));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x089BA728u) goto L_089BA728;
    return;
L_089BA728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BA730;
    }
L_089BA730:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089BA764u);
    ctx.gpr[6] = (0u | 38u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BA764u) goto L_089BA764;
    return;
L_089BA764:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BA77Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13028));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x089BA77Cu) goto L_089BA77C;
    return;
L_089BA77C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BA784;
    }
L_089BA784:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BA794u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089BA794u) goto L_089BA794;
    return;
L_089BA794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BA7ACu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA7ACu) goto L_089BA7AC;
    return;
L_089BA7AC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[21] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089BA7E0u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BA7E0u) goto L_089BA7E0;
    return;
L_089BA7E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA828;
      }
      goto L_089BA7F0;
    }
L_089BA7F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089BA828;
      }
      goto L_089BA7FC;
    }
L_089BA7FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA828;
      }
      goto L_089BA80C;
    }
L_089BA80C:
    ctx.gpr[31] = (0x089BA814u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 474u, 0x088868F4u>(ctx, &aot_mem) && ctx.pc == 0x089BA814u) goto L_089BA814;
    return;
L_089BA814:
    ctx.gpr[31] = (0x089BA81Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089BA81Cu) goto L_089BA81C;
    return;
L_089BA81C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1796), ctx.gpr[4]);
    goto L_089BA828;
L_089BA828:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BA830;
    }
L_089BA830:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BA83Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089BA83Cu) goto L_089BA83C;
    return;
L_089BA83C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BA854u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA854u) goto L_089BA854;
    return;
L_089BA854:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089BA888u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BA888u) goto L_089BA888;
    return;
L_089BA888:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BA890;
    }
L_089BA890:
    ctx.gpr[6] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[20] = (2202u << 16u);
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[21] = (0u | 158u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(13028));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_089BA8D8;
      }
      goto L_089BA8B8;
    }
L_089BA8B8:
    ctx.gpr[6] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[20] = (2202u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(13028));
    ctx.gpr[6] = (2230u << 16u);
    goto L_089BA8D8;
L_089BA8D8:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA8E4;
      }
      goto L_089BA8E0;
    }
L_089BA8E0:
    ctx.gpr[21] = (0u | 157u);
    goto L_089BA8E4;
L_089BA8E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA90C;
      }
      goto L_089BA8EC;
    }
L_089BA8EC:
    ctx.gpr[6] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[20] = (2202u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(13028));
    ctx.gpr[6] = (2230u << 16u);
    goto L_089BA90C;
L_089BA90C:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA918;
      }
      goto L_089BA914;
    }
L_089BA914:
    ctx.gpr[21] = (0u | 158u);
    goto L_089BA918;
L_089BA918:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8148)));
      if (branch_taken) {
          goto L_089BA934;
      }
      goto L_089BA924;
    }
L_089BA924:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089BA93C;
      }
      goto L_089BA934;
    }
L_089BA934:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[5]);
    goto L_089BA93C;
L_089BA93C:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089BA950u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BA950u) goto L_089BA950;
    return;
L_089BA950:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089BA964u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 50u, 0x088B447Cu>(ctx, &aot_mem) && ctx.pc == 0x089BA964u) goto L_089BA964;
    return;
L_089BA964:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BA96C;
    }
L_089BA96C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[22] = (2202u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[21] = (0u | 153u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8148)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(13028));
      if (branch_taken) {
          goto L_089BA9BC;
      }
      goto L_089BA998;
    }
L_089BA998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[22] = (2202u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(13028));
    goto L_089BA9BC;
L_089BA9BC:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BA9C8;
      }
      goto L_089BA9C4;
    }
L_089BA9C4:
    ctx.gpr[21] = (0u | 12u);
    goto L_089BA9C8;
L_089BA9C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA9F4;
      }
      goto L_089BA9D0;
    }
L_089BA9D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[22] = (2202u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(13028));
    goto L_089BA9F4;
L_089BA9F4:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BAA00;
      }
      goto L_089BA9FC;
    }
L_089BA9FC:
    ctx.gpr[21] = (0u | 11u);
    goto L_089BAA00;
L_089BAA00:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BAA18;
      }
      goto L_089BAA08;
    }
L_089BAA08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089BAA20;
      }
      goto L_089BAA18;
    }
L_089BAA18:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[5]);
    goto L_089BAA20;
L_089BAA20:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089BAA30u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BAA30u) goto L_089BAA30;
    return;
L_089BAA30:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x089BAA68u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 50u, 0x088B447Cu>(ctx, &aot_mem) && ctx.pc == 0x089BAA68u) goto L_089BAA68;
    return;
L_089BAA68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BAA70;
    }
L_089BAA70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BAA7Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089BAA7Cu) goto L_089BAA7C;
    return;
L_089BAA7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BAA94u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BAA94u) goto L_089BAA94;
    return;
L_089BAA94:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089BAAC8u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BAAC8u) goto L_089BAAC8;
    return;
L_089BAAC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BAAD0;
    }
L_089BAAD0:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089BAAE8u);
    ctx.gpr[6] = (0u | 163u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BAAE8u) goto L_089BAAE8;
    return;
L_089BAAE8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BAB00u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13028));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x089BAB00u) goto L_089BAB00;
    return;
L_089BAB00:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31072));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BAB1C;
    }
L_089BAB1C:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089BAB34u);
    ctx.gpr[6] = (0u | 164u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BAB34u) goto L_089BAB34;
    return;
L_089BAB34:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BAB4Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13028));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x089BAB4Cu) goto L_089BAB4C;
    return;
L_089BAB4C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31072));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BAB68;
    }
L_089BAB68:
    ctx.gpr[7] = (17152u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089BAB80u);
    ctx.gpr[6] = (0u | 165u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BAB80u) goto L_089BAB80;
    return;
L_089BAB80:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_089BABA0;
      }
      goto L_089BAB8C;
    }
L_089BAB8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BAC20;
      }
      goto L_089BABA0;
    }
L_089BABA0:
    ctx.gpr[4] = (18115u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20480u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18154u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 24576u);
    ctx.gpr[31] = (0x089BABBCu);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089BABBCu) goto L_089BABBC;
    return;
L_089BABBC:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_089BABEC;
      }
      goto L_089BABE0;
    }
L_089BABE0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    goto L_089BABEC;
L_089BABEC:
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
        goto L_089BAC0C;
    }
    goto L_089BAC00;
L_089BAC00:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BAC1C;
      }
      goto L_089BAC0C;
    }
L_089BAC0C:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089BAC1C;
L_089BAC1C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    goto L_089BAC20;
L_089BAC20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BAC28;
    }
L_089BAC28:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089BAC40u);
    ctx.gpr[6] = (0u | 167u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BAC40u) goto L_089BAC40;
    return;
L_089BAC40:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BAC58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13028));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x089BAC58u) goto L_089BAC58;
    return;
L_089BAC58:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
      if (branch_taken) {
          goto L_089BAC74;
      }
      goto L_089BAC64;
    }
L_089BAC64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BAC84;
      }
      goto L_089BAC74;
    }
L_089BAC74:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31072));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    goto L_089BAC84;
L_089BAC84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BAC8C;
    }
L_089BAC8C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (0u | 26u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089BACACu);
    ctx.gpr[6] = (0u | 206u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BACACu) goto L_089BACAC;
    return;
L_089BACAC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BACC4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13124));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 50u, 0x088B447Cu>(ctx, &aot_mem) && ctx.pc == 0x089BACC4u) goto L_089BACC4;
    return;
L_089BACC4:
    ctx.gpr[4] = (18243u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20480u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18371u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20480u);
    ctx.gpr[31] = (0x089BACE0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089BACE0u) goto L_089BACE0;
    return;
L_089BACE0:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[13];
      if (branch_taken) {
          goto L_089BAD14;
      }
      goto L_089BAD08;
    }
L_089BAD08:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    goto L_089BAD14;
L_089BAD14:
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_089BAD34;
    }
    goto L_089BAD28;
L_089BAD28:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BAD44;
      }
      goto L_089BAD34;
    }
L_089BAD34:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089BAD44;
L_089BAD44:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BAD4C;
    }
L_089BAD4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BAD54;
    }
L_089BAD54:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 30u);
    ctx.gpr[31] = (0x089BAD6Cu);
    ctx.gpr[6] = (0u | 206u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BAD6Cu) goto L_089BAD6C;
    return;
L_089BAD6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BAD74;
    }
L_089BAD74:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 25u);
    ctx.gpr[31] = (0x089BAD88u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 106u, 0x089A07E8u>(ctx, &aot_mem) && ctx.pc == 0x089BAD88u) goto L_089BAD88;
    return;
L_089BAD88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BAD90;
    }
L_089BAD90:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089BADA8u);
    ctx.gpr[6] = (0u | 57u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BADA8u) goto L_089BADA8;
    return;
L_089BADA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BADC4;
    }
L_089BADC4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x089BADE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x089BADE4u) goto L_089BADE4;
    return;
L_089BADE4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BAEE0;
      }
      goto L_089BADF0;
    }
L_089BADF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[5] & 8192u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_089BAE1C;
      }
      goto L_089BAE08;
    }
L_089BAE08:
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    goto L_089BAE1C;
L_089BAE1C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BAEE0;
      }
      goto L_089BAE24;
    }
L_089BAE24:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[20] = (0u | 202u);
      if (branch_taken) {
          goto L_089BAE50;
      }
      goto L_089BAE34;
    }
L_089BAE34:
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (0u | 205u);
        goto L_089BAE50;
    }
    goto L_089BAE50;
L_089BAE50:
    ctx.gpr[31] = (0x089BAE58u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089BAE58u) goto L_089BAE58;
    return;
L_089BAE58:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089BAEE0;
      }
      goto L_089BAE64;
    }
L_089BAE64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (0u | 202u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.gpr[7] = (ctx.gpr[6] & 8192u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[18] = (2202u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(13028));
      if (branch_taken) {
          goto L_089BAEB4;
      }
      goto L_089BAE98;
    }
L_089BAE98:
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 205u);
        goto L_089BAEB4;
    }
    goto L_089BAEB4;
L_089BAEB4:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089BAECCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BAECCu) goto L_089BAECC;
    return;
L_089BAECC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089BAEE0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 50u, 0x088B447Cu>(ctx, &aot_mem) && ctx.pc == 0x089BAEE0u) goto L_089BAEE0;
    return;
L_089BAEE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BAEE8;
    }
L_089BAEE8:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089BAF00u);
    ctx.gpr[6] = (0u | 157u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BAF00u) goto L_089BAF00;
    return;
L_089BAF00:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BAF34u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13028));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 50u, 0x088B447Cu>(ctx, &aot_mem) && ctx.pc == 0x089BAF34u) goto L_089BAF34;
    return;
L_089BAF34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BAF4C;
    }
L_089BAF4C:
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 60u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089BAF68u);
    ctx.gpr[6] = (0u | 229u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BAF68u) goto L_089BAF68;
    return;
L_089BAF68:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BAF74;
    }
L_089BAF74:
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 60u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089BAF90u);
    ctx.gpr[6] = (0u | 230u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BAF90u) goto L_089BAF90;
    return;
L_089BAF90:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BAF9C;
    }
L_089BAF9C:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(-39));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(232));
    ctx.gpr[31] = (0x089BAFBCu);
    ctx.gpr[5] = (0u | 61u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BAFBCu) goto L_089BAFBC;
    return;
L_089BAFBC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BAFC8;
    }
L_089BAFC8:
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 62u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089BAFE4u);
    ctx.gpr[6] = (0u | 239u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BAFE4u) goto L_089BAFE4;
    return;
L_089BAFE4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BAFF0;
    }
L_089BAFF0:
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 63u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089BB00Cu);
    ctx.gpr[6] = (0u | 240u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BB00Cu) goto L_089BB00C;
    return;
L_089BB00C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB018;
    }
L_089BB018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[31] = (0x089BB028u);
    ctx.gpr[6] = (0u | 241u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB028u) goto L_089BB028;
    return;
L_089BB028:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB03C;
    }
L_089BB03C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[31] = (0x089BB04Cu);
    ctx.gpr[6] = (0u | 242u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB04Cu) goto L_089BB04C;
    return;
L_089BB04C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB060;
    }
L_089BB060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 65u);
    ctx.gpr[31] = (0x089BB070u);
    ctx.gpr[6] = (0u | 243u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB070u) goto L_089BB070;
    return;
L_089BB070:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB084;
    }
L_089BB084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 66u);
    ctx.gpr[31] = (0x089BB094u);
    ctx.gpr[6] = (0u | 244u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB094u) goto L_089BB094;
    return;
L_089BB094:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB0A8;
    }
L_089BB0A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 66u);
    ctx.gpr[31] = (0x089BB0B8u);
    ctx.gpr[6] = (0u | 245u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB0B8u) goto L_089BB0B8;
    return;
L_089BB0B8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB0CC;
    }
L_089BB0CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 67u);
    ctx.gpr[31] = (0x089BB0DCu);
    ctx.gpr[6] = (0u | 246u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB0DCu) goto L_089BB0DC;
    return;
L_089BB0DC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB0F0;
    }
L_089BB0F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 68u);
    ctx.gpr[31] = (0x089BB100u);
    ctx.gpr[6] = (0u | 248u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB100u) goto L_089BB100;
    return;
L_089BB100:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB114;
    }
L_089BB114:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 69u);
    ctx.gpr[31] = (0x089BB124u);
    ctx.gpr[6] = (0u | 249u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB124u) goto L_089BB124;
    return;
L_089BB124:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB138;
    }
L_089BB138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 69u);
    ctx.gpr[31] = (0x089BB148u);
    ctx.gpr[6] = (0u | 250u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB148u) goto L_089BB148;
    return;
L_089BB148:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB15C;
    }
L_089BB15C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 69u);
    ctx.gpr[31] = (0x089BB16Cu);
    ctx.gpr[6] = (0u | 251u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB16Cu) goto L_089BB16C;
    return;
L_089BB16C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB180;
    }
L_089BB180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 69u);
    ctx.gpr[31] = (0x089BB190u);
    ctx.gpr[6] = (0u | 252u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB190u) goto L_089BB190;
    return;
L_089BB190:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB1A4;
    }
L_089BB1A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 70u);
    ctx.gpr[31] = (0x089BB1B4u);
    ctx.gpr[6] = (0u | 253u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB1B4u) goto L_089BB1B4;
    return;
L_089BB1B4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB1C8;
    }
L_089BB1C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 70u);
    ctx.gpr[31] = (0x089BB1D8u);
    ctx.gpr[6] = (0u | 254u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB1D8u) goto L_089BB1D8;
    return;
L_089BB1D8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB1EC;
    }
L_089BB1EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 70u);
    ctx.gpr[31] = (0x089BB1FCu);
    ctx.gpr[6] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB1FCu) goto L_089BB1FC;
    return;
L_089BB1FC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB210;
    }
L_089BB210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 71u);
    ctx.gpr[31] = (0x089BB220u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB220u) goto L_089BB220;
    return;
L_089BB220:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB234;
    }
L_089BB234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 72u);
    ctx.gpr[31] = (0x089BB244u);
    ctx.gpr[6] = (0u | 257u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB244u) goto L_089BB244;
    return;
L_089BB244:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB258;
    }
L_089BB258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 72u);
    ctx.gpr[31] = (0x089BB268u);
    ctx.gpr[6] = (0u | 258u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB268u) goto L_089BB268;
    return;
L_089BB268:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB27C;
    }
L_089BB27C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 73u);
    ctx.gpr[31] = (0x089BB28Cu);
    ctx.gpr[6] = (0u | 259u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB28Cu) goto L_089BB28C;
    return;
L_089BB28C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB2A0;
    }
L_089BB2A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 73u);
    ctx.gpr[31] = (0x089BB2B0u);
    ctx.gpr[6] = (0u | 260u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB2B0u) goto L_089BB2B0;
    return;
L_089BB2B0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB2C4;
    }
L_089BB2C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 74u);
    ctx.gpr[31] = (0x089BB2D4u);
    ctx.gpr[6] = (0u | 262u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB2D4u) goto L_089BB2D4;
    return;
L_089BB2D4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB2E8;
    }
L_089BB2E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 74u);
    ctx.gpr[31] = (0x089BB2F8u);
    ctx.gpr[6] = (0u | 263u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB2F8u) goto L_089BB2F8;
    return;
L_089BB2F8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB30C;
    }
L_089BB30C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 75u);
    ctx.gpr[31] = (0x089BB31Cu);
    ctx.gpr[6] = (0u | 264u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB31Cu) goto L_089BB31C;
    return;
L_089BB31C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB330;
    }
L_089BB330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 75u);
    ctx.gpr[31] = (0x089BB340u);
    ctx.gpr[6] = (0u | 265u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB340u) goto L_089BB340;
    return;
L_089BB340:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB354;
    }
L_089BB354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 76u);
    ctx.gpr[31] = (0x089BB364u);
    ctx.gpr[6] = (0u | 266u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB364u) goto L_089BB364;
    return;
L_089BB364:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB378;
    }
L_089BB378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 77u);
    ctx.gpr[31] = (0x089BB388u);
    ctx.gpr[6] = (0u | 267u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB388u) goto L_089BB388;
    return;
L_089BB388:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB39C;
    }
L_089BB39C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 78u);
    ctx.gpr[31] = (0x089BB3ACu);
    ctx.gpr[6] = (0u | 268u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB3ACu) goto L_089BB3AC;
    return;
L_089BB3AC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB3C0;
    }
L_089BB3C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 78u);
    ctx.gpr[31] = (0x089BB3D0u);
    ctx.gpr[6] = (0u | 269u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB3D0u) goto L_089BB3D0;
    return;
L_089BB3D0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB3E4;
    }
L_089BB3E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 79u);
    ctx.gpr[31] = (0x089BB3F4u);
    ctx.gpr[6] = (0u | 270u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB3F4u) goto L_089BB3F4;
    return;
L_089BB3F4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB408;
    }
L_089BB408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 79u);
    ctx.gpr[31] = (0x089BB418u);
    ctx.gpr[6] = (0u | 271u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB418u) goto L_089BB418;
    return;
L_089BB418:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB42C;
    }
L_089BB42C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 79u);
    ctx.gpr[31] = (0x089BB43Cu);
    ctx.gpr[6] = (0u | 272u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB43Cu) goto L_089BB43C;
    return;
L_089BB43C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB450;
    }
L_089BB450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[31] = (0x089BB460u);
    ctx.gpr[6] = (0u | 273u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB460u) goto L_089BB460;
    return;
L_089BB460:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB474;
    }
L_089BB474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 81u);
    ctx.gpr[31] = (0x089BB484u);
    ctx.gpr[6] = (0u | 274u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB484u) goto L_089BB484;
    return;
L_089BB484:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB498;
    }
L_089BB498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 81u);
    ctx.gpr[31] = (0x089BB4A8u);
    ctx.gpr[6] = (0u | 275u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB4A8u) goto L_089BB4A8;
    return;
L_089BB4A8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB4BC;
    }
L_089BB4BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 81u);
    ctx.gpr[31] = (0x089BB4CCu);
    ctx.gpr[6] = (0u | 276u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB4CCu) goto L_089BB4CC;
    return;
L_089BB4CC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB4E0;
    }
L_089BB4E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 82u);
    ctx.gpr[31] = (0x089BB4F0u);
    ctx.gpr[6] = (0u | 277u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB4F0u) goto L_089BB4F0;
    return;
L_089BB4F0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB504;
    }
L_089BB504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 67u);
    ctx.gpr[31] = (0x089BB514u);
    ctx.gpr[6] = (0u | 247u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB514u) goto L_089BB514;
    return;
L_089BB514:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB528;
    }
L_089BB528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 73u);
    ctx.gpr[31] = (0x089BB538u);
    ctx.gpr[6] = (0u | 261u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB538u) goto L_089BB538;
    return;
L_089BB538:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB54C;
    }
L_089BB54C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 83u);
    ctx.gpr[31] = (0x089BB55Cu);
    ctx.gpr[6] = (0u | 278u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB55Cu) goto L_089BB55C;
    return;
L_089BB55C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB588;
      }
      goto L_089BB570;
    }
L_089BB570:
    ctx.gpr[31] = (0x089BB578u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089BA0AC;
L_089BB578:
    ctx.gpr[31] = (0x089BB580u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 887u, 0x089A3C28u>(ctx, &aot_mem) && ctx.pc == 0x089BB580u) goto L_089BB580;
    return;
L_089BB580:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB5A4;
      }
      goto L_089BB588;
    }
L_089BB588:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(864), ctx.gpr[17]);
      if (branch_taken) {
          goto L_089BB5A4;
      }
      goto L_089BB590;
    }
L_089BB590:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB5A4;
      }
      goto L_089BB598;
    }
L_089BB598:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089BB5A4;
L_089BB5A4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB5D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[18]);
    ctx.gpr[17] = (0u | 169u);
    ctx.gpr[18] = (0u | 54u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089BB650;
      }
      goto L_089BB614;
    }
L_089BB614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BB650;
      }
      goto L_089BB624;
    }
L_089BB624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(35) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 125u, 0x089BC814u>(ctx, &aot_mem); return;
      }
      goto L_089BB638;
    }
L_089BB638:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-16432)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB650:
    ctx.gpr[31] = (0x089BB658u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089BA0AC;
L_089BB658:
    ctx.gpr[31] = (0x089BB660u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 887u, 0x089A3C28u>(ctx, &aot_mem) && ctx.pc == 0x089BB660u) goto L_089BB660;
    return;
L_089BB660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 127u, 0x089BC828u>(ctx, &aot_mem); return;
      }
      goto L_089BB668;
    }
L_089BB668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB6A4;
      }
      goto L_089BB680;
    }
L_089BB680:
    ctx.gpr[31] = (0x089BB688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 388u, 0x08865B30u>(ctx, &aot_mem) && ctx.pc == 0x089BB688u) goto L_089BB688;
    return;
L_089BB688:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BB6A4;
      }
      goto L_089BB690;
    }
L_089BB690:
    ctx.gpr[31] = (0x089BB698u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089BA0AC;
L_089BB698:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BB6A4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089BB6A4u) goto L_089BB6A4;
    return;
L_089BB6A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 125u, 0x089BC814u>(ctx, &aot_mem); return;
      }
      goto L_089BB6AC;
    }
L_089BB6AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB73C;
      }
      goto L_089BB6C4;
    }
L_089BB6C4:
    ctx.gpr[31] = (0x089BB6CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089BB6CCu) goto L_089BB6CC;
    return;
L_089BB6CC:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BB704;
      }
      goto L_089BB6DC;
    }
L_089BB6DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB704;
      }
      goto L_089BB6E8;
    }
L_089BB6E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089BB6FCu);
    ctx.gpr[7] = (0u | 0u);
    goto L_089BA410;
L_089BB6FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB70C;
      }
      goto L_089BB704;
    }
L_089BB704:
    ctx.gpr[31] = (0x089BB70Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089BA0AC;
L_089BB70C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BB718u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089BB718u) goto L_089BB718;
    return;
L_089BB718:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB73C;
      }
      goto L_089BB724;
    }
L_089BB724:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089BB73C;
L_089BB73C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 125u, 0x089BC814u>(ctx, &aot_mem); return;
      }
      goto L_089BB744;
    }
L_089BB744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB794;
      }
      goto L_089BB75C;
    }
L_089BB75C:
    ctx.gpr[31] = (0x089BB764u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089BA0AC;
L_089BB764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BB770u);
    ctx.gpr[5] = (0u | 149u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089BB770u) goto L_089BB770;
    return;
L_089BB770:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB794;
      }
      goto L_089BB77C;
    }
L_089BB77C:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089BB794;
L_089BB794:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 125u, 0x089BC814u>(ctx, &aot_mem); return;
      }
      goto L_089BB79C;
    }
L_089BB79C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 125u, 0x089BC814u>(ctx, &aot_mem); return;
      }
      goto L_089BB7A4;
    }
L_089BB7A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 125u, 0x089BC814u>(ctx, &aot_mem); return;
      }
      goto L_089BB7AC;
    }
L_089BB7AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 125u, 0x089BC814u>(ctx, &aot_mem); return;
      }
      goto L_089BB7B4;
    }
L_089BB7B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 125u, 0x089BC814u>(ctx, &aot_mem); return;
      }
      goto L_089BB7BC;
    }
L_089BB7BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB7F0;
      }
      goto L_089BB7D4;
    }
L_089BB7D4:
    ctx.gpr[31] = (0x089BB7DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089BA0AC;
L_089BB7DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BB7E8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089BB7E8u) goto L_089BB7E8;
    return;
L_089BB7E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB848;
      }
      goto L_089BB7F0;
    }
L_089BB7F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(2500) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB848;
      }
      goto L_089BB808;
    }
L_089BB808:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(2001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BB848;
      }
      goto L_089BB820;
    }
L_089BB820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089BB848u);
    ctx.gpr[6] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BB848u) goto L_089BB848;
    return;
L_089BB848:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 125u, 0x089BC814u>(ctx, &aot_mem); return;
      }
      goto L_089BB850;
    }
L_089BB850:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB878;
      }
      goto L_089BB868;
    }
L_089BB868:
    ctx.gpr[31] = (0x089BB870u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089BA0AC;
L_089BB870:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB898;
      }
      goto L_089BB878;
    }
L_089BB878:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1408)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB898;
      }
      goto L_089BB88C;
    }
L_089BB88C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1408), ctx.gpr[4]);
    goto L_089BB898;
L_089BB898:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 125u, 0x089BC814u>(ctx, &aot_mem); return;
      }
      goto L_089BB8A0;
    }
L_089BB8A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB8EC;
      }
      goto L_089BB8B8;
    }
L_089BB8B8:
    ctx.gpr[31] = (0x089BB8C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089BA0AC;
L_089BB8C0:
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 30u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BB8EC;
      }
      goto L_089BB8E4;
    }
L_089BB8E4:
    ctx.gpr[31] = (0x089BB8ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 220u, 0x088D50D0u>(ctx, &aot_mem) && ctx.pc == 0x089BB8ECu) goto L_089BB8EC;
    return;
L_089BB8EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1408)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB90C;
      }
      goto L_089BB900;
    }
L_089BB900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1408), ctx.gpr[4]);
    goto L_089BB90C;
L_089BB90C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 125u, 0x089BC814u>(ctx, &aot_mem); return;
      }
      goto L_089BB914;
    }
L_089BB914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB984;
      }
      goto L_089BB92C;
    }
L_089BB92C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BB938u);
    ctx.gpr[5] = (0u | 38u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089BB938u) goto L_089BB938;
    return;
L_089BB938:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB97C;
      }
      goto L_089BB940;
    }
L_089BB940:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089BB958u);
    ctx.gpr[6] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BB958u) goto L_089BB958;
    return;
L_089BB958:
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BB96Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13028));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x089BB96Cu) goto L_089BB96C;
    return;
L_089BB96C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BB984;
      }
      goto L_089BB97C;
    }
L_089BB97C:
    ctx.gpr[31] = (0x089BB984u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089BA0AC;
L_089BB984:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 125u, 0x089BC814u>(ctx, &aot_mem); return;
      }
      goto L_089BB98C;
    }
L_089BB98C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB9DC;
      }
      goto L_089BB9A4;
    }
L_089BB9A4:
    ctx.gpr[31] = (0x089BB9ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089BA0AC;
L_089BB9AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BB9B8u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089BB9B8u) goto L_089BB9B8;
    return;
L_089BB9B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB9DC;
      }
      goto L_089BB9C4;
    }
L_089BB9C4:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089BB9DC;
L_089BB9DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 125u, 0x089BC814u>(ctx, &aot_mem); return;
      }
      goto L_089BB9E4;
    }
L_089BB9E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBBF8;
      }
      goto L_089BB9FC;
    }
L_089BB9FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BBA08u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089BBA08u) goto L_089BBA08;
    return;
L_089BBA08:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (0u | 150u);
      if (branch_taken) {
          goto L_089BBA24;
      }
      goto L_089BBA14;
    }
L_089BBA14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BBA20u);
    ctx.gpr[5] = (0u | 150u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089BBA20u) goto L_089BBA20;
    return;
L_089BBA20:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089BBA24;
L_089BBA24:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BBA3C;
      }
      goto L_089BBA2C;
    }
L_089BBA2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BBA38u);
    ctx.gpr[5] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089BBA38u) goto L_089BBA38;
    return;
L_089BBA38:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089BBA3C;
L_089BBA3C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BBA54;
      }
      goto L_089BBA44;
    }
L_089BBA44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BBA50u);
    ctx.gpr[5] = (0u | 149u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089BBA50u) goto L_089BBA50;
    return;
L_089BBA50:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089BBA54;
L_089BBA54:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBAC4;
      }
      goto L_089BBA5C;
    }
L_089BBA5C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BBAA0;
      }
      goto L_089BBA74;
    }
L_089BBA74:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x089BBA98u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BBA98u) goto L_089BBA98;
    return;
L_089BBA98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBAB8;
      }
      goto L_089BBAA0;
    }
L_089BBAA0:
    ctx.gpr[4] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089BBAB8;
L_089BBAB8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089BBAE8;
      }
      goto L_089BBAC4;
    }
L_089BBAC4:
    ctx.gpr[31] = (0x089BBACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089BBACCu) goto L_089BBACC;
    return;
L_089BBACC:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BBB24;
      }
      goto L_089BBAE0;
    }
L_089BBAE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089BBB3C;
      }
      goto L_089BBAE8;
    }
L_089BBAE8:
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089BBB00u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089BBB00u) goto L_089BBB00;
    return;
L_089BBB00:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089BBB0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089BA0AC;
L_089BBB0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BBB18u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089BBB18u) goto L_089BBB18;
    return;
L_089BBB18:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(856), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1824), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 127u, 0x089BC828u>(ctx, &aot_mem); return;
      }
      goto L_089BBB24;
    }
L_089BBB24:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BBB68;
      }
      goto L_089BBB2C;
    }
L_089BBB2C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_089BBB54;
      }
      goto L_089BBB34;
    }
L_089BBB34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 149u);
      if (branch_taken) {
          goto L_089BBB68;
      }
      goto L_089BBB3C;
    }
L_089BBB3C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089BBB5C;
      }
      goto L_089BBB44;
    }
L_089BBB44:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BBB64;
      }
      goto L_089BBB4C;
    }
L_089BBB4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBB68;
      }
      goto L_089BBB54;
    }
L_089BBB54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 9u);
      if (branch_taken) {
          goto L_089BBB68;
      }
      goto L_089BBB5C;
    }
L_089BBB5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 148u);
      if (branch_taken) {
          goto L_089BBB68;
      }
      goto L_089BBB64;
    }
L_089BBB64:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_089BBB68;
L_089BBB68:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089BBB80u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089BBB80u) goto L_089BBB80;
    return;
L_089BBB80:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089BBB98;
      }
      goto L_089BBB88;
    }
L_089BBB88:
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BBB98u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13028));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x089BBB98u) goto L_089BBB98;
    return;
L_089BBB98:
    ctx.gpr[31] = (0x089BBBA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089BBBA0u) goto L_089BBBA0;
    return;
L_089BBBA0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28868)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28872)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089BBBB8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089BBBB8u) goto L_089BBBB8;
    return;
L_089BBBB8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28864)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    goto L_089BBBF8;
L_089BBBF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 125u, 0x089BC814u>(ctx, &aot_mem); return;
      }
      goto L_089BBC00;
    }
L_089BBC00:
    ctx.gpr[4] = (0u | 169u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 157u);
      if (branch_taken) {
          goto L_089BBC10;
      }
      goto L_089BBC0C;
    }
L_089BBC0C:
    ctx.gpr[4] = (0u | 169u);
    goto L_089BBC10;
L_089BBC10:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089BBC1C;
      }
      goto L_089BBC18;
    }
L_089BBC18:
    ctx.gpr[17] = (0u | 158u);
    goto L_089BBC1C;
L_089BBC1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BBC28u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089BBC28u) goto L_089BBC28;
    return;
L_089BBC28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089BBC60;
      }
      goto L_089BBC34;
    }
L_089BBC34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
        goto L_089BBC64;
    }
    goto L_089BBC50;
L_089BBC50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBCA0;
      }
      goto L_089BBC60;
    }
L_089BBC60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    goto L_089BBC64;
L_089BBC64:
    ctx.gpr[6] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089BBCA0;
      }
      goto L_089BBC70;
    }
L_089BBC70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089BBCA0;
      }
      goto L_089BBC80;
    }
L_089BBC80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BBCA0;
      }
      goto L_089BBC98;
    }
L_089BBC98:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BBF24;
      }
      goto L_089BBCA0;
    }
L_089BBCA0:
    ctx.gpr[31] = (0x089BBCA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089BA0AC;
L_089BBCA8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBEEC;
      }
      goto L_089BBCB8;
    }
L_089BBCB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BBEEC;
      }
      goto L_089BBCD4;
    }
L_089BBCD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[18] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089BBEEC;
      }
      goto L_089BBCE4;
    }
L_089BBCE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BBEEC;
      }
      goto L_089BBCF4;
    }
L_089BBCF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
      if (branch_taken) {
          goto L_089BBD38;
      }
      goto L_089BBD04;
    }
L_089BBD04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBEEC;
      }
      goto L_089BBD14;
    }
L_089BBD14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BBD20u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 686u, 0x088877F4u>(ctx, &aot_mem) && ctx.pc == 0x089BBD20u) goto L_089BBD20;
    return;
L_089BBD20:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 10000u);
    ctx.gpr[31] = (0x089BBD30u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 659u, 0x08887620u>(ctx, &aot_mem) && ctx.pc == 0x089BBD30u) goto L_089BBD30;
    return;
L_089BBD30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBEEC;
      }
      goto L_089BBD38;
    }
L_089BBD38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBDBC;
      }
      goto L_089BBD5C;
    }
L_089BBD5C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BBD6Cu);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x089BBD6Cu) goto L_089BBD6C;
    return;
L_089BBD6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089BBD88;
      }
      goto L_089BBD78;
    }
L_089BBD78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BBD9C;
      }
      goto L_089BBD88;
    }
L_089BBD88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    goto L_089BBD9C;
L_089BBD9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BBDA8u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089BBDA8u) goto L_089BBDA8;
    return;
L_089BBDA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BBDB4u);
    ctx.gpr[5] = (0u | 143u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089BBDB4u) goto L_089BBDB4;
    return;
L_089BBDB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBEEC;
      }
      goto L_089BBDBC;
    }
L_089BBDBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089BBDD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850DACu>(ctx, &aot_mem) && ctx.pc == 0x089BBDD8u) goto L_089BBDD8;
    return;
L_089BBDD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BBE04;
      }
      goto L_089BBDE0;
    }
L_089BBDE0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BBDF0u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x089BBDF0u) goto L_089BBDF0;
    return;
L_089BBDF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BBDFCu);
    ctx.gpr[5] = (0u | 20000u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 533u, 0x08886B9Cu>(ctx, &aot_mem) && ctx.pc == 0x089BBDFCu) goto L_089BBDFC;
    return;
L_089BBDFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBEEC;
      }
      goto L_089BBE04;
    }
L_089BBE04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBE9C;
      }
      goto L_089BBE18;
    }
L_089BBE18:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BBE28u);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x089BBE28u) goto L_089BBE28;
    return;
L_089BBE28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_089BBE44;
      }
      goto L_089BBE34;
    }
L_089BBE34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089BBE58;
      }
      goto L_089BBE44;
    }
L_089BBE44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (8192u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    goto L_089BBE58;
L_089BBE58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089BBE70;
      }
      goto L_089BBE64;
    }
L_089BBE64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BBE70u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089BBE70u) goto L_089BBE70;
    return;
L_089BBE70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BBEEC;
      }
      goto L_089BBE80;
    }
L_089BBE80:
    ctx.gpr[31] = (0x089BBE88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1167u, 0x08893F0Cu>(ctx, &aot_mem) && ctx.pc == 0x089BBE88u) goto L_089BBE88;
    return;
L_089BBE88:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BBE94u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089BBE94u) goto L_089BBE94;
    return;
L_089BBE94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBEEC;
      }
      goto L_089BBE9C;
    }
L_089BBE9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BBEA8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x089BBEA8u) goto L_089BBEA8;
    return;
L_089BBEA8:
    ctx.gpr[31] = (0x089BBEB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089BBEB0u) goto L_089BBEB0;
    return;
L_089BBEB0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28988)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28992)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089BBEC8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089BBEC8u) goto L_089BBEC8;
    return;
L_089BBEC8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x089BBEECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x089BBEECu) goto L_089BBEEC;
    return;
L_089BBEEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BBEF8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089BBEF8u) goto L_089BBEF8;
    return;
L_089BBEF8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBF1C;
      }
      goto L_089BBF04;
    }
L_089BBF04:
    ctx.gpr[4] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089BBF1C;
L_089BBF1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 125u, 0x089BC814u>(ctx, &aot_mem); return;
      }
      goto L_089BBF24;
    }
L_089BBF24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBF38;
      }
      goto L_089BBF30;
    }
L_089BBF30:
    ctx.gpr[31] = (0x089BBF38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 2u, 0x089A000Cu>(ctx, &aot_mem) && ctx.pc == 0x089BBF38u) goto L_089BBF38;
    return;
L_089BBF38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 125u, 0x089BC814u>(ctx, &aot_mem); return;
      }
      goto L_089BBF40;
    }
L_089BBF40:
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[17] = (0u | 158u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089BBF58;
      }
      goto L_089BBF50;
    }
L_089BBF50:
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[4] = (2230u << 16u);
    goto L_089BBF58;
L_089BBF58:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BBF64;
      }
      goto L_089BBF60;
    }
L_089BBF60:
    ctx.gpr[17] = (0u | 153u);
    goto L_089BBF64;
L_089BBF64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBF74;
      }
      goto L_089BBF6C;
    }
L_089BBF6C:
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[4] = (2230u << 16u);
    goto L_089BBF74;
L_089BBF74:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BBF80;
      }
      goto L_089BBF7C;
    }
L_089BBF7C:
    ctx.gpr[17] = (0u | 12u);
    goto L_089BBF80;
L_089BBF80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBF90;
      }
      goto L_089BBF88;
    }
L_089BBF88:
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[4] = (2230u << 16u);
    goto L_089BBF90;
L_089BBF90:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BBF9C;
      }
      goto L_089BBF98;
    }
L_089BBF98:
    ctx.gpr[17] = (0u | 11u);
    goto L_089BBF9C;
L_089BBF9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 5u, 0x089BC02Cu>(ctx, &aot_mem); return;
      }
      goto L_089BBFB0;
    }
L_089BBFB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BBFBCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089BBFBCu) goto L_089BBFBC;
    return;
L_089BBFBC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBFE0;
      }
      goto L_089BBFC8;
    }
L_089BBFC8:
    ctx.gpr[4] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089BBFE0;
L_089BBFE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 3u, 0x089BC01Cu>(ctx, &aot_mem); return;
      }
      goto L_089BBFEC;
    }
L_089BBFEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 3u, 0x089BC01Cu>(ctx, &aot_mem); return;
      }
      goto L_089BBFF8;
    }
L_089BBFF8:
    ctx.gpr[31] = (0x089BC000u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0109(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0109_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_109(Runtime &runtime) {
    runtime.register_generated_unit(109u, 0x089B8000u, 16384u, &recomp_unit_0109, &recomp_unit_0109_entry);
    runtime.register_function(0x089B8000u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8008u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8018u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8028u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8034u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8048u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B804Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8058u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8068u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8074u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8084u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B80A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B80B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B80D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B80E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8108u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8118u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8120u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8128u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8134u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8144u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B816Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8178u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8184u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B818Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8194u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8200u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8214u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8224u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8234u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8244u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8254u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8258u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8260u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8268u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B827Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8288u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8294u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8298u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B830Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8314u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8324u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8330u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8338u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8348u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8354u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B835Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B836Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8374u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B837Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B838Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8394u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B840Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B841Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B842Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B843Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8440u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8448u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8450u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8460u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8468u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B846Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B847Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B848Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8498u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8500u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8508u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8514u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B851Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8520u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8528u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8534u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B853Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8540u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8548u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8550u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8570u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B857Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B858Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B85A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B85B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B85C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B85CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B85E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B85F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B860Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8614u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B861Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8624u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B862Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B863Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8644u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8654u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8660u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8678u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8684u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8690u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B86C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B86F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8700u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8708u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8710u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8714u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B871Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B872Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8738u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8750u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B875Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8768u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B877Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8788u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8798u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B880Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B881Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8834u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8840u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B884Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8858u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8860u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8868u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8874u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B887Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8884u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B888Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8898u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8904u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B890Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B891Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8924u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B892Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8938u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8940u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8954u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8964u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B897Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8990u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B899Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A08u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A10u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A24u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A30u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A38u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A40u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A5Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A70u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A78u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8AA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8AB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8AD4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8B4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8B5Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8B68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8B9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8BF8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C44u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8CB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8CC8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8CD0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8CD4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8CDCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8CE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8CECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8D04u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8D10u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8D94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8DFCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8E1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8E94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8ECCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8ED4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F24u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F60u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F78u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F90u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8FA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8FB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8FC0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9028u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9034u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9038u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9050u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B905Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B90A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B90ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B90FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9108u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9114u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9120u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9124u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B912Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9138u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B913Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9144u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B915Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9168u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9170u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B917Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9188u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9194u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9198u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9200u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B920Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9210u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9218u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9224u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9228u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9230u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B923Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9240u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9248u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9254u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9258u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9260u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B926Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9270u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9278u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9284u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9288u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9290u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B929Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9324u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9338u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9344u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9368u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9378u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9380u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9394u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B93A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B93B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B93C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B93D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B93ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B93FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B940Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9420u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9430u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9438u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9448u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9458u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9474u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9484u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9498u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9540u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9554u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9564u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B958Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B959Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B95A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B95ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B95B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B95C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B95DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B95F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9604u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B960Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B961Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9644u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9654u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B965Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9664u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9668u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9680u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B968Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9698u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9700u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9710u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9718u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9720u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9724u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9730u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9740u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B974Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9754u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9758u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9764u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9770u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9778u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B97A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B97FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9814u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B981Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9880u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B98C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B990Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9950u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9958u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B996Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9974u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B997Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9990u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9998u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A20u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A30u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A3Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AD4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9ADCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AF4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AFCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B08u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B10u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B30u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B44u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B50u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B60u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B6Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9BACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9BC4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C04u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C0Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C24u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C30u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C38u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C40u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C60u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C74u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C90u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CC8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CDCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CF4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D3Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D5Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D60u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D70u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D90u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9DA4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9DB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9DC0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9DCCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9DE8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9DF8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E0Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E5Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E84u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9EA4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9EACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9ED8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F10u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F24u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F60u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F8Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FA4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FCCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA030u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA038u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA040u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA064u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA070u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA074u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA104u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA11Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA128u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA134u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA140u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA14Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA158u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA160u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA170u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA178u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA184u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA190u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA19Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA1A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA1B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA1BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA1CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA1D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA1E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA1E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA1F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA1F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA200u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA20Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA218u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA228u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA234u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA240u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA24Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA25Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA268u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA274u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA280u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA28Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA298u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA2A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA2B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA2B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA2C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA2D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA2E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA2E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA2F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA2FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA304u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA30Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA318u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA324u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA330u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA338u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA344u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA350u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA35Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA364u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA370u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA37Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA388u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA390u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA39Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA410u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA458u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA460u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA470u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA478u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA480u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA488u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA490u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA498u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA4A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA4ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA4B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA4D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA4ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA4F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA520u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA528u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA540u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA548u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA550u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA568u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA5ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA5BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA5C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA5CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA5D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA5DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA5E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA618u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA620u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA658u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA688u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA698u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA6A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA6B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA6C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA6C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA6D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA6DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA710u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA728u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA730u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA764u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA77Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA784u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA794u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA7ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA7E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA7F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA7FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA80Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA814u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA81Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA828u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA830u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA83Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA854u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA888u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA890u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA8B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA8D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA8E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA8E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA8ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA90Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA914u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA918u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA924u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA934u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA93Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA950u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA964u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA96Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA998u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA08u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA18u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA20u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA30u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA70u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAAC8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAAD0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAAE8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB8Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BABA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BABBCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BABE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BABECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC0Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC20u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC28u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC40u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC74u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC84u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC8Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BACACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BACC4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BACE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD08u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD28u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD44u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD6Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD74u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD90u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BADA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BADC4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BADE4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BADF0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAE08u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAE1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAE24u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAE34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAE50u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAE58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAE64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAE98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAEB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAECCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAEE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAEE8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF74u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF90u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAFBCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAFC8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAFE4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAFF0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB00Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB018u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB028u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB03Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB04Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB060u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB070u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB084u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB094u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB0A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB0B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB0CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB0DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB0F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB100u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB114u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB124u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB138u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB148u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB15Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB16Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB180u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB190u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB210u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB220u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB234u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB244u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB258u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB268u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB27Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB28Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB30Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB31Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB330u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB340u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB354u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB364u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB378u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB388u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB39Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB3ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB3C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB3D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB3E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB3F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB408u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB418u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB42Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB43Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB450u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB460u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB474u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB484u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB498u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB4A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB4BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB4CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB4E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB4F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB504u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB514u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB528u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB538u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB54Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB55Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB570u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB578u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB580u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB588u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB590u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB598u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB5A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB5D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB614u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB624u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB638u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB650u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB658u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB660u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB668u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB680u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB688u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB690u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB698u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB6A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB6ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB6C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB6CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB6DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB6E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB6FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB704u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB70Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB718u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB724u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB73Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB744u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB75Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB764u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB770u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB77Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB794u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB79Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB808u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB820u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB848u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB850u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB868u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB870u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB878u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB88Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB898u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB8A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB8B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB8C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB8E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB8ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB900u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB90Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB914u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB92Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB938u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB940u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB958u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB96Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB97Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB984u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB98Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB9A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB9ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB9B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB9C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB9DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB9E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB9FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA08u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA20u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA24u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA38u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA3Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA44u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA50u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA5Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA74u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBAA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBAB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBAC4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBACCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBAE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBAE8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB0Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB18u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB24u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB3Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB44u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB5Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBBA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBBB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBBF8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC0Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC10u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC18u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC28u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC50u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC60u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC70u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBCA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBCA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBCB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBCD4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBCE4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBCF4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD04u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD20u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD30u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD38u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD5Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD6Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD78u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDBCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDD8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDF0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDFCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE04u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE18u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE28u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE44u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE70u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBEA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBEB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBEC8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBEECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBEF8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF04u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF24u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF30u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF38u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF40u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF50u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF60u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF6Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF74u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF90u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFBCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFC8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFF8u, &recomp_unit_0109, "recomp_unit_0109");
}
} // namespace psprecomp
