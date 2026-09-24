#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0185[4091] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 8, 0, 9, 0, 0,
    10, 0, 0, 11, 0, 12, 0, 13, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0,
    0, 19, 0, 0, 20, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 27, 0, 0, 0,
    0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 32, 0, 33, 0, 34, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 48, 49, 0,
    0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 54, 0, 0, 55, 0, 0, 56, 0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 64, 0, 0, 65, 0, 0, 66, 0, 67, 0, 68, 0, 69, 0, 0, 0, 0, 70,
    0, 0, 0, 71, 0, 72, 0, 0, 73, 0, 0, 74, 0, 75, 0, 76, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 80, 0, 0, 81, 0, 0,
    82, 0, 83, 0, 84, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 88, 0, 0, 89, 0, 0, 90, 0, 91, 0, 92, 93, 0, 0, 0, 94, 0,
    0, 0, 95, 0, 96, 0, 0, 97, 0, 0, 98, 0, 99, 0, 100, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 104, 0, 0, 105, 0, 0, 106,
    0, 107, 0, 108, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 112, 0, 0, 113, 0, 0, 114, 0, 115, 0, 116, 0, 117, 0, 0, 0, 118, 0,
    0, 0, 119, 0, 120, 0, 0, 121, 0, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 0, 129, 0, 130, 0,
    0, 0, 0, 0, 0, 131, 132, 0, 133, 0, 0, 134, 0, 0, 0, 135, 0, 136, 0, 137, 0, 138, 0, 0, 0, 139, 140, 0, 141, 0, 0, 0,
    0, 0, 142, 0, 143, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 149, 0, 0,
    0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0,
    165, 0, 0, 0, 0, 0, 0, 166, 167, 0, 168, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 177, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0,
    187, 0, 0, 188, 0, 189, 0, 0, 0, 190, 0, 191, 0, 0, 0, 192, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0,
    0, 198, 0, 0, 0, 199, 0, 200, 0, 0, 201, 0, 0, 0, 202, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 206, 0, 0, 207, 0, 0, 0,
    208, 0, 209, 0, 0, 210, 0, 0, 0, 211, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 0, 0,
    0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 226, 0, 227, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 231, 0, 0, 232,
    0, 0, 233, 0, 0, 234, 0, 235, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    239, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0,
    247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 253, 0, 254, 0, 255, 256,
    0, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 260, 0, 261, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 266, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271,
    0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278,
    0, 0, 0, 0, 279, 0, 280, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 290,
    0, 291, 0, 292, 0, 0, 0, 293, 0, 294, 0, 295, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0,
    301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    309, 0, 310, 0, 311, 0, 0, 312, 0, 313, 0, 0, 314, 0, 315, 0, 0, 316, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 320,
    0, 0, 0, 0, 0, 321, 0, 322, 0, 323, 0, 0, 0, 0, 324, 0, 325, 0, 0, 326, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 332, 0, 333, 0, 334,
    0, 335, 0, 0, 0, 0, 336, 0, 0, 337, 0, 338, 0, 0, 339, 0, 340, 0, 341, 0, 342, 0, 343, 0, 0, 344, 0, 0, 345, 0, 346, 0,
    0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 353,
    0, 354, 0, 355, 0, 0, 0, 356, 0, 357, 0, 358, 0, 359, 0, 0, 360, 0, 361, 362, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0,
    0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 368, 0, 0, 369, 0, 370, 371, 0, 0, 372, 0,
    0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 376, 377, 0, 0, 0, 0, 378, 0, 379, 0,
    380, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0,
    0, 387, 0, 0, 0, 388, 0, 389, 0, 390, 0, 0, 0, 391, 0, 392, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    395, 0, 0, 396, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 407, 0, 408,
    0, 409, 0, 410, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 420, 421, 0, 0, 0, 422, 0, 423, 424, 0, 0, 0, 425, 0, 426, 0, 0, 0, 427, 0, 428,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 0, 0, 0, 0,
    0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0, 0, 437, 438, 0, 439, 0, 440, 0, 441, 0,
    0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 446, 0, 0, 0, 0,
    0, 0, 447, 0, 448, 0, 0, 0, 0, 0, 449, 0, 450, 0, 0, 451, 0, 0, 452, 0, 453, 0, 0, 0, 454, 0, 455, 0, 0, 456, 0, 457,
    0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 464, 0, 465, 0, 0, 0, 0, 466, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 470, 0, 471, 0,
    472, 0, 0, 473, 0, 0, 474, 0, 475, 476, 0, 0, 477, 0, 478, 0, 479, 480, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 484, 0,
    485, 0, 486, 0, 487, 0, 488, 0, 489, 0, 490, 0, 491, 0, 492, 0, 493, 0, 494, 0, 495, 0, 496, 0, 497, 0, 498, 0, 499, 0, 0, 0,
    0, 0, 0, 0, 500, 0, 501, 0, 502, 0, 0, 0, 0, 503, 0, 504, 0, 505, 0, 506, 0, 507, 0, 508, 0, 0, 0, 0, 0, 509, 0, 510,
    0, 511, 0, 512, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 517, 518, 519, 0,
    0, 0, 0, 0, 520, 0, 0, 0, 521, 0, 522, 0, 0, 0, 0, 0, 523, 524, 0, 525, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0,
    528, 529, 0, 0, 0, 0, 530, 0, 531, 0, 532, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 535, 536, 0, 537, 0, 0, 0, 538, 539,
    0, 0, 0, 0, 0, 540, 0, 541, 0, 542, 0, 543, 0, 544, 0, 545, 0, 546, 0, 547, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 549, 0,
    550, 551, 0, 552, 0, 0, 0, 553, 554, 0, 0, 0, 0, 0, 555, 0, 556, 0, 557, 0, 558, 0, 559, 0, 560, 0, 561, 0, 562, 0, 0, 0,
    563, 0, 0, 564, 0, 565, 566, 0, 567, 0, 568, 569, 0, 0, 0, 570, 0, 571, 0, 572, 0, 573, 0, 574, 0, 575, 0, 576, 0, 577, 0, 0,
    0, 578, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 580, 0, 581, 0, 582, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 585, 586, 0, 587, 0, 0, 0, 588, 0, 589, 0, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 592, 0,
    0, 593, 0, 0, 594, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 597, 598, 0, 0, 0, 599, 600, 0, 0, 601,
    0, 602, 0, 603, 0, 0, 604, 0, 0, 605, 0, 0, 606, 0, 607, 0, 608, 609, 0, 0, 610, 0, 611, 612, 0, 613, 0, 614, 0, 0, 615, 0,
    0, 616, 0, 0, 617, 0, 618, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 620, 0, 0, 621, 0, 622, 0, 0, 0, 0, 623, 0,
    0, 0, 0, 0, 624, 0, 0, 625, 0, 626, 0, 627, 628, 0, 0, 629, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 631, 0, 632, 0, 0, 0,
    0, 633, 0, 0, 634, 0, 635, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 638, 0, 0, 639, 0, 0, 640, 0, 641, 0, 642, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 645, 0, 646, 0, 0, 647, 0, 0, 0, 648, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 651, 0, 652,
    0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 657, 0, 0,
    0, 0, 658, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 660, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0,
    0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0,
    0, 668, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 671, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 673, 0, 674, 0, 0, 0, 0, 675, 0, 0, 676, 0, 0, 0, 0, 0, 0, 677, 0, 678, 0, 0, 0, 679, 680, 0, 681, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 685, 0, 0, 686, 0, 687, 0, 688, 689, 0, 0, 0, 690, 0, 691, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 692, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 697, 0, 0, 0, 0, 0, 698, 0, 699,
    0, 700, 0, 0, 0, 701, 0, 0, 0, 702, 0, 0, 703, 0, 0, 704, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 707,
    0, 708, 0, 0, 709, 0, 0, 0, 0, 710, 0, 711, 712, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 0, 715, 0, 0, 716, 0, 717, 718, 0,
    0, 0, 719, 0, 0, 0, 0, 0, 720, 721, 0, 0, 0, 0, 722, 0, 723, 0, 724, 0, 0, 0, 0, 725, 0, 726, 0, 0, 727, 0, 0, 728,
    0, 729, 730, 731, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 733, 0, 0, 734, 0, 0, 735, 0, 0, 0, 0, 736, 0, 737, 738, 0, 0, 739,
    0, 0, 0, 740, 0, 0, 0, 0, 741, 0, 0, 742, 0, 743, 744, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 746, 0, 747, 0, 748, 0, 749,
    750, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 756, 0, 0, 757, 0, 0, 758, 0, 759, 0, 760, 0, 761, 0, 0, 762, 0, 0, 0, 0, 0,
    0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 765, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 768, 0,
    769, 770, 0, 0, 0, 771, 0, 0, 0, 0, 772, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 774, 0, 0, 775, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 776, 0, 0, 0, 777, 0, 0, 778, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 780, 0, 781, 0, 782, 783, 0, 0, 784, 0, 0,
    785, 0, 786, 0, 0, 0, 0, 787, 0, 788, 0, 789, 0, 0, 790, 0, 0, 0, 0, 791, 0, 792, 0, 793, 0, 0, 0, 0, 0, 0, 0, 794,
    0, 0, 0, 0, 795, 0, 796, 0, 0, 797, 798, 0, 799, 0, 800, 0, 0, 0, 0, 0, 0, 801, 0, 802, 803, 0, 0, 804, 0, 0, 805, 0,
    0, 0, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 0, 807, 0, 808, 0, 0, 809, 0, 0, 810, 0, 0, 0, 0, 811, 0, 0, 0, 0, 812,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 814, 0, 815,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 817,
    0, 0, 0, 818, 0, 0, 0, 0, 0, 0, 0, 0, 819, 0, 820, 0, 0, 0, 821, 0, 0, 822, 0, 0, 0, 823, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 824, 0, 0, 0, 0, 0, 825, 0, 826, 0, 0, 0, 0, 0, 0, 0, 0, 0, 827, 0, 0, 0, 0, 0, 828, 0,
    0, 0, 0, 0, 0, 0, 0, 829, 0, 0, 830, 0, 0, 0, 831, 0, 0, 832, 0, 0, 0, 833, 0, 0, 0, 0, 834, 0, 0, 835, 0, 0,
    0, 0, 0, 0, 0, 0, 836, 0, 0, 837, 0, 0, 0, 838, 0, 839, 0, 840, 841, 0, 0, 0, 0, 0, 0, 842, 0, 843, 0, 844, 0, 845,
    0, 846, 0, 0, 0, 0, 0, 0, 0, 847, 0, 0, 0, 0, 0, 0, 848, 849, 850, 0, 0, 0, 851, 0, 0, 0, 852, 0, 0, 0, 853, 0,
    0, 0, 0, 0, 0, 854, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 855, 0, 0, 856, 0, 0, 857, 0, 0, 858, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 859, 860, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 861, 0, 0, 0, 0, 862, 0, 0,
    0, 0, 863, 864, 0, 865, 0, 0, 0, 0, 866, 0, 867, 0, 0, 0, 0, 0, 868, 0, 869, 0, 870, 0, 871, 0, 872, 0, 873, 0, 0, 874,
    0, 875, 0, 876, 0, 0, 877, 0, 0, 878, 0, 0, 879, 0, 0, 0, 0, 0, 880, 0, 881, 0, 882, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 883, 0, 0, 0, 0,
    884, 0, 0, 0, 885, 0, 0, 886, 0, 0, 0, 0, 887, 888, 0, 889, 0, 890, 0, 891, 892, 0, 0, 0, 0, 0, 893, 0, 0, 0, 0, 0,
    0, 0, 894, 0, 895, 0, 0, 896, 0, 0, 0, 897, 0, 0, 898, 0, 0, 0, 0, 0, 899, 900, 0, 0, 901, 0, 0, 902, 0, 903, 0, 904,
    905, 0, 0, 0, 906, 0, 0, 0, 0, 0, 0, 0, 0, 0, 907, 0, 908, 0, 0, 909, 0, 0, 910, 0, 0, 911, 0, 0, 912, 0, 0, 0,
    0, 0, 0, 913, 0, 0, 914, 915, 0, 0, 0, 0, 916, 0, 0, 0, 0, 0, 917, 0, 0, 918, 919, 0, 0, 0, 0, 920, 0, 0, 0, 0,
    0, 921, 0, 0, 0, 0, 0, 0, 922, 0, 0, 923, 0, 0, 924, 0, 0, 925, 0, 0, 0, 0, 926, 0, 0, 0, 927,
};
void recomp_unit_0185_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AE8000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0185[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AE8000;
    case 2u: goto L_08AE8080;
    case 3u: goto L_08AE808C;
    case 4u: goto L_08AE80A4;
    case 5u: goto L_08AE80B8;
    case 6u: goto L_08AE80D0;
    case 7u: goto L_08AE80E4;
    case 8u: goto L_08AE80EC;
    case 9u: goto L_08AE80F4;
    case 10u: goto L_08AE8100;
    case 11u: goto L_08AE810C;
    case 12u: goto L_08AE8114;
    case 13u: goto L_08AE811C;
    case 14u: goto L_08AE8134;
    case 15u: goto L_08AE813C;
    case 16u: goto L_08AE814C;
    case 17u: goto L_08AE8158;
    case 18u: goto L_08AE8174;
    case 19u: goto L_08AE8184;
    case 20u: goto L_08AE8190;
    case 21u: goto L_08AE819C;
    case 22u: goto L_08AE81A4;
    case 23u: goto L_08AE81C4;
    case 24u: goto L_08AE81CC;
    case 25u: goto L_08AE81DC;
    case 26u: goto L_08AE81E8;
    case 27u: goto L_08AE81F0;
    case 28u: goto L_08AE8204;
    case 29u: goto L_08AE82AC;
    case 30u: goto L_08AE82C0;
    case 31u: goto L_08AE82C8;
    case 32u: goto L_08AE82DC;
    case 33u: goto L_08AE82E4;
    case 34u: goto L_08AE82EC;
    case 35u: goto L_08AE8320;
    case 36u: goto L_08AE8344;
    case 37u: goto L_08AE835C;
    case 38u: goto L_08AE8378;
    case 39u: goto L_08AE8390;
    case 40u: goto L_08AE8398;
    case 41u: goto L_08AE83BC;
    case 42u: goto L_08AE83D4;
    case 43u: goto L_08AE83E4;
    case 44u: goto L_08AE83F4;
    case 45u: goto L_08AE8400;
    case 46u: goto L_08AE8564;
    case 47u: goto L_08AE856C;
    case 48u: goto L_08AE8574;
    case 49u: goto L_08AE8578;
    case 50u: goto L_08AE8584;
    case 51u: goto L_08AE858C;
    case 52u: goto L_08AE859C;
    case 53u: goto L_08AE85AC;
    case 54u: goto L_08AE85B4;
    case 55u: goto L_08AE85C0;
    case 56u: goto L_08AE85CC;
    case 57u: goto L_08AE85D4;
    case 58u: goto L_08AE85DC;
    case 59u: goto L_08AE85E8;
    case 60u: goto L_08AE85F8;
    case 61u: goto L_08AE8610;
    case 62u: goto L_08AE8620;
    case 63u: goto L_08AE8630;
    case 64u: goto L_08AE8638;
    case 65u: goto L_08AE8644;
    case 66u: goto L_08AE8650;
    case 67u: goto L_08AE8658;
    case 68u: goto L_08AE8660;
    case 69u: goto L_08AE8668;
    case 70u: goto L_08AE867C;
    case 71u: goto L_08AE868C;
    case 72u: goto L_08AE8694;
    case 73u: goto L_08AE86A0;
    case 74u: goto L_08AE86AC;
    case 75u: goto L_08AE86B4;
    case 76u: goto L_08AE86BC;
    case 77u: goto L_08AE86C0;
    case 78u: goto L_08AE86D0;
    case 79u: goto L_08AE86E0;
    case 80u: goto L_08AE86E8;
    case 81u: goto L_08AE86F4;
    case 82u: goto L_08AE8700;
    case 83u: goto L_08AE8708;
    case 84u: goto L_08AE8710;
    case 85u: goto L_08AE8714;
    case 86u: goto L_08AE8724;
    case 87u: goto L_08AE8734;
    case 88u: goto L_08AE873C;
    case 89u: goto L_08AE8748;
    case 90u: goto L_08AE8754;
    case 91u: goto L_08AE875C;
    case 92u: goto L_08AE8764;
    case 93u: goto L_08AE8768;
    case 94u: goto L_08AE8778;
    case 95u: goto L_08AE8788;
    case 96u: goto L_08AE8790;
    case 97u: goto L_08AE879C;
    case 98u: goto L_08AE87A8;
    case 99u: goto L_08AE87B0;
    case 100u: goto L_08AE87B8;
    case 101u: goto L_08AE87BC;
    case 102u: goto L_08AE87CC;
    case 103u: goto L_08AE87DC;
    case 104u: goto L_08AE87E4;
    case 105u: goto L_08AE87F0;
    case 106u: goto L_08AE87FC;
    case 107u: goto L_08AE8804;
    case 108u: goto L_08AE880C;
    case 109u: goto L_08AE8810;
    case 110u: goto L_08AE8820;
    case 111u: goto L_08AE8830;
    case 112u: goto L_08AE8838;
    case 113u: goto L_08AE8844;
    case 114u: goto L_08AE8850;
    case 115u: goto L_08AE8858;
    case 116u: goto L_08AE8860;
    case 117u: goto L_08AE8868;
    case 118u: goto L_08AE8878;
    case 119u: goto L_08AE8888;
    case 120u: goto L_08AE8890;
    case 121u: goto L_08AE889C;
    case 122u: goto L_08AE88A8;
    case 123u: goto L_08AE88B0;
    case 124u: goto L_08AE88B8;
    case 125u: goto L_08AE88C0;
    case 126u: goto L_08AE88C8;
    case 127u: goto L_08AE88D4;
    case 128u: goto L_08AE88E4;
    case 129u: goto L_08AE88F0;
    case 130u: goto L_08AE88F8;
    case 131u: goto L_08AE8914;
    case 132u: goto L_08AE8918;
    case 133u: goto L_08AE8920;
    case 134u: goto L_08AE892C;
    case 135u: goto L_08AE893C;
    case 136u: goto L_08AE8944;
    case 137u: goto L_08AE894C;
    case 138u: goto L_08AE8954;
    case 139u: goto L_08AE8964;
    case 140u: goto L_08AE8968;
    case 141u: goto L_08AE8970;
    case 142u: goto L_08AE8988;
    case 143u: goto L_08AE8990;
    case 144u: goto L_08AE89A0;
    case 145u: goto L_08AE89A8;
    case 146u: goto L_08AE89BC;
    case 147u: goto L_08AE89E0;
    case 148u: goto L_08AE89E8;
    case 149u: goto L_08AE89F4;
    case 150u: goto L_08AE8A04;
    case 151u: goto L_08AE8A10;
    case 152u: goto L_08AE8A20;
    case 153u: goto L_08AE8A2C;
    case 154u: goto L_08AE8A38;
    case 155u: goto L_08AE8A40;
    case 156u: goto L_08AE8A50;
    case 157u: goto L_08AE8A58;
    case 158u: goto L_08AE8A70;
    case 159u: goto L_08AE8A88;
    case 160u: goto L_08AE8A90;
    case 161u: goto L_08AE8AB4;
    case 162u: goto L_08AE8AD4;
    case 163u: goto L_08AE8AEC;
    case 164u: goto L_08AE8AF8;
    case 165u: goto L_08AE8B00;
    case 166u: goto L_08AE8B1C;
    case 167u: goto L_08AE8B20;
    case 168u: goto L_08AE8B28;
    case 169u: goto L_08AE8B34;
    case 170u: goto L_08AE8B48;
    case 171u: goto L_08AE8B58;
    case 172u: goto L_08AE8B64;
    case 173u: goto L_08AE8B70;
    case 174u: goto L_08AE8B8C;
    case 175u: goto L_08AE8BC0;
    case 176u: goto L_08AE8BCC;
    case 177u: goto L_08AE8BD4;
    case 178u: goto L_08AE8BDC;
    case 179u: goto L_08AE8BF4;
    case 180u: goto L_08AE8C34;
    case 181u: goto L_08AE8C54;
    case 182u: goto L_08AE8C9C;
    case 183u: goto L_08AE8CAC;
    case 184u: goto L_08AE8CCC;
    case 185u: goto L_08AE8CE0;
    case 186u: goto L_08AE8CF0;
    case 187u: goto L_08AE8D00;
    case 188u: goto L_08AE8D0C;
    case 189u: goto L_08AE8D14;
    case 190u: goto L_08AE8D24;
    case 191u: goto L_08AE8D2C;
    case 192u: goto L_08AE8D3C;
    case 193u: goto L_08AE8D44;
    case 194u: goto L_08AE8D54;
    case 195u: goto L_08AE8D64;
    case 196u: goto L_08AE8D70;
    case 197u: goto L_08AE8D78;
    case 198u: goto L_08AE8D84;
    case 199u: goto L_08AE8D94;
    case 200u: goto L_08AE8D9C;
    case 201u: goto L_08AE8DA8;
    case 202u: goto L_08AE8DB8;
    case 203u: goto L_08AE8DC0;
    case 204u: goto L_08AE8DCC;
    case 205u: goto L_08AE8DDC;
    case 206u: goto L_08AE8DE4;
    case 207u: goto L_08AE8DF0;
    case 208u: goto L_08AE8E00;
    case 209u: goto L_08AE8E08;
    case 210u: goto L_08AE8E14;
    case 211u: goto L_08AE8E24;
    case 212u: goto L_08AE8E2C;
    case 213u: goto L_08AE8E38;
    case 214u: goto L_08AE8E80;
    case 215u: goto L_08AE8EC4;
    case 216u: goto L_08AE8EDC;
    case 217u: goto L_08AE8EE4;
    case 218u: goto L_08AE8EEC;
    case 219u: goto L_08AE8F04;
    case 220u: goto L_08AE8F2C;
    case 221u: goto L_08AE8F40;
    case 222u: goto L_08AE8F54;
    case 223u: goto L_08AE8F88;
    case 224u: goto L_08AE8F98;
    case 225u: goto L_08AE8FAC;
    case 226u: goto L_08AE8FB4;
    case 227u: goto L_08AE8FBC;
    case 228u: goto L_08AE8FC4;
    case 229u: goto L_08AE8FDC;
    case 230u: goto L_08AE8FE8;
    case 231u: goto L_08AE8FF0;
    case 232u: goto L_08AE8FFC;
    case 233u: goto L_08AE9008;
    case 234u: goto L_08AE9014;
    case 235u: goto L_08AE901C;
    case 236u: goto L_08AE902C;
    case 237u: goto L_08AE9034;
    case 238u: goto L_08AE9048;
    case 239u: goto L_08AE9080;
    case 240u: goto L_08AE9084;
    case 241u: goto L_08AE90B4;
    case 242u: goto L_08AE90BC;
    case 243u: goto L_08AE90CC;
    case 244u: goto L_08AE90D4;
    case 245u: goto L_08AE90EC;
    case 246u: goto L_08AE90F4;
    case 247u: goto L_08AE9100;
    case 248u: goto L_08AE9148;
    case 249u: goto L_08AE9184;
    case 250u: goto L_08AE918C;
    case 251u: goto L_08AE91D0;
    case 252u: goto L_08AE91E0;
    case 253u: goto L_08AE91E8;
    case 254u: goto L_08AE91F0;
    case 255u: goto L_08AE91F8;
    case 256u: goto L_08AE91FC;
    case 257u: goto L_08AE920C;
    case 258u: goto L_08AE9218;
    case 259u: goto L_08AE9224;
    case 260u: goto L_08AE922C;
    case 261u: goto L_08AE9234;
    case 262u: goto L_08AE9238;
    case 263u: goto L_08AE924C;
    case 264u: goto L_08AE9260;
    case 265u: goto L_08AE9270;
    case 266u: goto L_08AE9278;
    case 267u: goto L_08AE92A0;
    case 268u: goto L_08AE92A8;
    case 269u: goto L_08AE92BC;
    case 270u: goto L_08AE92E4;
    case 271u: goto L_08AE92FC;
    case 272u: goto L_08AE9318;
    case 273u: goto L_08AE9324;
    case 274u: goto L_08AE9334;
    case 275u: goto L_08AE9344;
    case 276u: goto L_08AE934C;
    case 277u: goto L_08AE935C;
    case 278u: goto L_08AE937C;
    case 279u: goto L_08AE9390;
    case 280u: goto L_08AE9398;
    case 281u: goto L_08AE93A0;
    case 282u: goto L_08AE93B0;
    case 283u: goto L_08AE93F0;
    case 284u: goto L_08AE940C;
    case 285u: goto L_08AE9428;
    case 286u: goto L_08AE9434;
    case 287u: goto L_08AE9448;
    case 288u: goto L_08AE9458;
    case 289u: goto L_08AE946C;
    case 290u: goto L_08AE947C;
    case 291u: goto L_08AE9484;
    case 292u: goto L_08AE948C;
    case 293u: goto L_08AE949C;
    case 294u: goto L_08AE94A4;
    case 295u: goto L_08AE94AC;
    case 296u: goto L_08AE94B4;
    case 297u: goto L_08AE94C4;
    case 298u: goto L_08AE94D0;
    case 299u: goto L_08AE94E8;
    case 300u: goto L_08AE94F4;
    case 301u: goto L_08AE9500;
    case 302u: goto L_08AE9508;
    case 303u: goto L_08AE9510;
    case 304u: goto L_08AE9518;
    case 305u: goto L_08AE9520;
    case 306u: goto L_08AE9538;
    case 307u: goto L_08AE9550;
    case 308u: goto L_08AE9558;
    case 309u: goto L_08AE9580;
    case 310u: goto L_08AE9588;
    case 311u: goto L_08AE9590;
    case 312u: goto L_08AE959C;
    case 313u: goto L_08AE95A4;
    case 314u: goto L_08AE95B0;
    case 315u: goto L_08AE95B8;
    case 316u: goto L_08AE95C4;
    case 317u: goto L_08AE95CC;
    case 318u: goto L_08AE95E0;
    case 319u: goto L_08AE95F8;
    case 320u: goto L_08AE95FC;
    case 321u: goto L_08AE9614;
    case 322u: goto L_08AE961C;
    case 323u: goto L_08AE9624;
    case 324u: goto L_08AE9638;
    case 325u: goto L_08AE9640;
    case 326u: goto L_08AE964C;
    case 327u: goto L_08AE9654;
    case 328u: goto L_08AE965C;
    case 329u: goto L_08AE968C;
    case 330u: goto L_08AE96CC;
    case 331u: goto L_08AE96D8;
    case 332u: goto L_08AE96EC;
    case 333u: goto L_08AE96F4;
    case 334u: goto L_08AE96FC;
    case 335u: goto L_08AE9704;
    case 336u: goto L_08AE9718;
    case 337u: goto L_08AE9724;
    case 338u: goto L_08AE972C;
    case 339u: goto L_08AE9738;
    case 340u: goto L_08AE9740;
    case 341u: goto L_08AE9748;
    case 342u: goto L_08AE9750;
    case 343u: goto L_08AE9758;
    case 344u: goto L_08AE9764;
    case 345u: goto L_08AE9770;
    case 346u: goto L_08AE9778;
    case 347u: goto L_08AE9788;
    case 348u: goto L_08AE97A8;
    case 349u: goto L_08AE97B4;
    case 350u: goto L_08AE97C8;
    case 351u: goto L_08AE97D8;
    case 352u: goto L_08AE97EC;
    case 353u: goto L_08AE97FC;
    case 354u: goto L_08AE9804;
    case 355u: goto L_08AE980C;
    case 356u: goto L_08AE981C;
    case 357u: goto L_08AE9824;
    case 358u: goto L_08AE982C;
    case 359u: goto L_08AE9834;
    case 360u: goto L_08AE9840;
    case 361u: goto L_08AE9848;
    case 362u: goto L_08AE984C;
    case 363u: goto L_08AE9854;
    case 364u: goto L_08AE9878;
    case 365u: goto L_08AE9898;
    case 366u: goto L_08AE98B8;
    case 367u: goto L_08AE98C8;
    case 368u: goto L_08AE98D4;
    case 369u: goto L_08AE98E0;
    case 370u: goto L_08AE98E8;
    case 371u: goto L_08AE98EC;
    case 372u: goto L_08AE98F8;
    case 373u: goto L_08AE990C;
    case 374u: goto L_08AE9938;
    case 375u: goto L_08AE9944;
    case 376u: goto L_08AE9958;
    case 377u: goto L_08AE995C;
    case 378u: goto L_08AE9970;
    case 379u: goto L_08AE9978;
    case 380u: goto L_08AE9980;
    case 381u: goto L_08AE9994;
    case 382u: goto L_08AE99A4;
    case 383u: goto L_08AE99C0;
    case 384u: goto L_08AE99CC;
    case 385u: goto L_08AE99E0;
    case 386u: goto L_08AE99F0;
    case 387u: goto L_08AE9A04;
    case 388u: goto L_08AE9A14;
    case 389u: goto L_08AE9A1C;
    case 390u: goto L_08AE9A24;
    case 391u: goto L_08AE9A34;
    case 392u: goto L_08AE9A3C;
    case 393u: goto L_08AE9A44;
    case 394u: goto L_08AE9A4C;
    case 395u: goto L_08AE9A80;
    case 396u: goto L_08AE9A8C;
    case 397u: goto L_08AE9A94;
    case 398u: goto L_08AE9AA4;
    case 399u: goto L_08AE9AB4;
    case 400u: goto L_08AE9AD0;
    case 401u: goto L_08AE9ADC;
    case 402u: goto L_08AE9B0C;
    case 403u: goto L_08AE9B24;
    case 404u: goto L_08AE9B44;
    case 405u: goto L_08AE9B4C;
    case 406u: goto L_08AE9B68;
    case 407u: goto L_08AE9B74;
    case 408u: goto L_08AE9B7C;
    case 409u: goto L_08AE9B84;
    case 410u: goto L_08AE9B8C;
    case 411u: goto L_08AE9B94;
    case 412u: goto L_08AE9BBC;
    case 413u: goto L_08AE9BEC;
    case 414u: goto L_08AE9C90;
    case 415u: goto L_08AE9C9C;
    case 416u: goto L_08AE9CA8;
    case 417u: goto L_08AE9CBC;
    case 418u: goto L_08AE9D6C;
    case 419u: goto L_08AE9DA4;
    case 420u: goto L_08AE9DAC;
    case 421u: goto L_08AE9DB0;
    case 422u: goto L_08AE9DC0;
    case 423u: goto L_08AE9DC8;
    case 424u: goto L_08AE9DCC;
    case 425u: goto L_08AE9DDC;
    case 426u: goto L_08AE9DE4;
    case 427u: goto L_08AE9DF4;
    case 428u: goto L_08AE9DFC;
    case 429u: goto L_08AE9E9C;
    case 430u: goto L_08AE9EA4;
    case 431u: goto L_08AE9F58;
    case 432u: goto L_08AE9F64;
    case 433u: goto L_08AE9F88;
    case 434u: goto L_08AE9F94;
    case 435u: goto L_08AE9FC8;
    case 436u: goto L_08AE9FD0;
    case 437u: goto L_08AE9FDC;
    case 438u: goto L_08AE9FE0;
    case 439u: goto L_08AE9FE8;
    case 440u: goto L_08AE9FF0;
    case 441u: goto L_08AE9FF8;
    case 442u: goto L_08AEA008;
    case 443u: goto L_08AEA020;
    case 444u: goto L_08AEA058;
    case 445u: goto L_08AEA060;
    case 446u: goto L_08AEA06C;
    case 447u: goto L_08AEA088;
    case 448u: goto L_08AEA090;
    case 449u: goto L_08AEA0A8;
    case 450u: goto L_08AEA0B0;
    case 451u: goto L_08AEA0BC;
    case 452u: goto L_08AEA0C8;
    case 453u: goto L_08AEA0D0;
    case 454u: goto L_08AEA0E0;
    case 455u: goto L_08AEA0E8;
    case 456u: goto L_08AEA0F4;
    case 457u: goto L_08AEA0FC;
    case 458u: goto L_08AEA104;
    case 459u: goto L_08AEA12C;
    case 460u: goto L_08AEA154;
    case 461u: goto L_08AEA164;
    case 462u: goto L_08AEA1A8;
    case 463u: goto L_08AEA1BC;
    case 464u: goto L_08AEA288;
    case 465u: goto L_08AEA290;
    case 466u: goto L_08AEA2A4;
    case 467u: goto L_08AEA2B0;
    case 468u: goto L_08AEA2C0;
    case 469u: goto L_08AEA2E4;
    case 470u: goto L_08AEA2F0;
    case 471u: goto L_08AEA2F8;
    case 472u: goto L_08AEA300;
    case 473u: goto L_08AEA30C;
    case 474u: goto L_08AEA318;
    case 475u: goto L_08AEA320;
    case 476u: goto L_08AEA324;
    case 477u: goto L_08AEA330;
    case 478u: goto L_08AEA338;
    case 479u: goto L_08AEA340;
    case 480u: goto L_08AEA344;
    case 481u: goto L_08AEA348;
    case 482u: goto L_08AEA358;
    case 483u: goto L_08AEA370;
    case 484u: goto L_08AEA378;
    case 485u: goto L_08AEA380;
    case 486u: goto L_08AEA388;
    case 487u: goto L_08AEA390;
    case 488u: goto L_08AEA398;
    case 489u: goto L_08AEA3A0;
    case 490u: goto L_08AEA3A8;
    case 491u: goto L_08AEA3B0;
    case 492u: goto L_08AEA3B8;
    case 493u: goto L_08AEA3C0;
    case 494u: goto L_08AEA3C8;
    case 495u: goto L_08AEA3D0;
    case 496u: goto L_08AEA3D8;
    case 497u: goto L_08AEA3E0;
    case 498u: goto L_08AEA3E8;
    case 499u: goto L_08AEA3F0;
    case 500u: goto L_08AEA410;
    case 501u: goto L_08AEA418;
    case 502u: goto L_08AEA420;
    case 503u: goto L_08AEA434;
    case 504u: goto L_08AEA43C;
    case 505u: goto L_08AEA444;
    case 506u: goto L_08AEA44C;
    case 507u: goto L_08AEA454;
    case 508u: goto L_08AEA45C;
    case 509u: goto L_08AEA474;
    case 510u: goto L_08AEA47C;
    case 511u: goto L_08AEA484;
    case 512u: goto L_08AEA48C;
    case 513u: goto L_08AEA49C;
    case 514u: goto L_08AEA4B0;
    case 515u: goto L_08AEA4D4;
    case 516u: goto L_08AEA4E4;
    case 517u: goto L_08AEA4F0;
    case 518u: goto L_08AEA4F4;
    case 519u: goto L_08AEA4F8;
    case 520u: goto L_08AEA510;
    case 521u: goto L_08AEA520;
    case 522u: goto L_08AEA528;
    case 523u: goto L_08AEA540;
    case 524u: goto L_08AEA544;
    case 525u: goto L_08AEA54C;
    case 526u: goto L_08AEA564;
    case 527u: goto L_08AEA578;
    case 528u: goto L_08AEA580;
    case 529u: goto L_08AEA584;
    case 530u: goto L_08AEA598;
    case 531u: goto L_08AEA5A0;
    case 532u: goto L_08AEA5A8;
    case 533u: goto L_08AEA5C8;
    case 534u: goto L_08AEA5D4;
    case 535u: goto L_08AEA5DC;
    case 536u: goto L_08AEA5E0;
    case 537u: goto L_08AEA5E8;
    case 538u: goto L_08AEA5F8;
    case 539u: goto L_08AEA5FC;
    case 540u: goto L_08AEA614;
    case 541u: goto L_08AEA61C;
    case 542u: goto L_08AEA624;
    case 543u: goto L_08AEA62C;
    case 544u: goto L_08AEA634;
    case 545u: goto L_08AEA63C;
    case 546u: goto L_08AEA644;
    case 547u: goto L_08AEA64C;
    case 548u: goto L_08AEA66C;
    case 549u: goto L_08AEA678;
    case 550u: goto L_08AEA680;
    case 551u: goto L_08AEA684;
    case 552u: goto L_08AEA68C;
    case 553u: goto L_08AEA69C;
    case 554u: goto L_08AEA6A0;
    case 555u: goto L_08AEA6B8;
    case 556u: goto L_08AEA6C0;
    case 557u: goto L_08AEA6C8;
    case 558u: goto L_08AEA6D0;
    case 559u: goto L_08AEA6D8;
    case 560u: goto L_08AEA6E0;
    case 561u: goto L_08AEA6E8;
    case 562u: goto L_08AEA6F0;
    case 563u: goto L_08AEA700;
    case 564u: goto L_08AEA70C;
    case 565u: goto L_08AEA714;
    case 566u: goto L_08AEA718;
    case 567u: goto L_08AEA720;
    case 568u: goto L_08AEA728;
    case 569u: goto L_08AEA72C;
    case 570u: goto L_08AEA73C;
    case 571u: goto L_08AEA744;
    case 572u: goto L_08AEA74C;
    case 573u: goto L_08AEA754;
    case 574u: goto L_08AEA75C;
    case 575u: goto L_08AEA764;
    case 576u: goto L_08AEA76C;
    case 577u: goto L_08AEA774;
    case 578u: goto L_08AEA784;
    case 579u: goto L_08AEA7A0;
    case 580u: goto L_08AEA7B0;
    case 581u: goto L_08AEA7B8;
    case 582u: goto L_08AEA7C0;
    case 583u: goto L_08AEA7CC;
    case 584u: goto L_08AEA830;
    case 585u: goto L_08AEA890;
    case 586u: goto L_08AEA894;
    case 587u: goto L_08AEA89C;
    case 588u: goto L_08AEA8AC;
    case 589u: goto L_08AEA8B4;
    case 590u: goto L_08AEA8C8;
    case 591u: goto L_08AEA8D8;
    case 592u: goto L_08AEA8F8;
    case 593u: goto L_08AEA904;
    case 594u: goto L_08AEA910;
    case 595u: goto L_08AEA924;
    case 596u: goto L_08AEA94C;
    case 597u: goto L_08AEA958;
    case 598u: goto L_08AEA95C;
    case 599u: goto L_08AEA96C;
    case 600u: goto L_08AEA970;
    case 601u: goto L_08AEA97C;
    case 602u: goto L_08AEA984;
    case 603u: goto L_08AEA98C;
    case 604u: goto L_08AEA998;
    case 605u: goto L_08AEA9A4;
    case 606u: goto L_08AEA9B0;
    case 607u: goto L_08AEA9B8;
    case 608u: goto L_08AEA9C0;
    case 609u: goto L_08AEA9C4;
    case 610u: goto L_08AEA9D0;
    case 611u: goto L_08AEA9D8;
    case 612u: goto L_08AEA9DC;
    case 613u: goto L_08AEA9E4;
    case 614u: goto L_08AEA9EC;
    case 615u: goto L_08AEA9F8;
    case 616u: goto L_08AEAA04;
    case 617u: goto L_08AEAA10;
    case 618u: goto L_08AEAA18;
    case 619u: goto L_08AEAA34;
    case 620u: goto L_08AEAA50;
    case 621u: goto L_08AEAA5C;
    case 622u: goto L_08AEAA64;
    case 623u: goto L_08AEAA78;
    case 624u: goto L_08AEAA90;
    case 625u: goto L_08AEAA9C;
    case 626u: goto L_08AEAAA4;
    case 627u: goto L_08AEAAAC;
    case 628u: goto L_08AEAAB0;
    case 629u: goto L_08AEAABC;
    case 630u: goto L_08AEAAC8;
    case 631u: goto L_08AEAAE8;
    case 632u: goto L_08AEAAF0;
    case 633u: goto L_08AEAB04;
    case 634u: goto L_08AEAB10;
    case 635u: goto L_08AEAB18;
    case 636u: goto L_08AEAB34;
    case 637u: goto L_08AEAB5C;
    case 638u: goto L_08AEAB90;
    case 639u: goto L_08AEAB9C;
    case 640u: goto L_08AEABA8;
    case 641u: goto L_08AEABB0;
    case 642u: goto L_08AEABB8;
    case 643u: goto L_08AEABC0;
    case 644u: goto L_08AEABEC;
    case 645u: goto L_08AEAC14;
    case 646u: goto L_08AEAC1C;
    case 647u: goto L_08AEAC28;
    case 648u: goto L_08AEAC38;
    case 649u: goto L_08AEAC44;
    case 650u: goto L_08AEAC68;
    case 651u: goto L_08AEAC74;
    case 652u: goto L_08AEAC7C;
    case 653u: goto L_08AEACA0;
    case 654u: goto L_08AEACD0;
    case 655u: goto L_08AEAD28;
    case 656u: goto L_08AEAD60;
    case 657u: goto L_08AEAD74;
    case 658u: goto L_08AEAD88;
    case 659u: goto L_08AEADA4;
    case 660u: goto L_08AEADB8;
    case 661u: goto L_08AEADC4;
    case 662u: goto L_08AEADF8;
    case 663u: goto L_08AEAE04;
    case 664u: goto L_08AEAE1C;
    case 665u: goto L_08AEAE40;
    case 666u: goto L_08AEAE50;
    case 667u: goto L_08AEAE64;
    case 668u: goto L_08AEAE84;
    case 669u: goto L_08AEAE8C;
    case 670u: goto L_08AEAEC8;
    case 671u: goto L_08AEAED4;
    case 672u: goto L_08AEAEDC;
    case 673u: goto L_08AEAF08;
    case 674u: goto L_08AEAF10;
    case 675u: goto L_08AEAF24;
    case 676u: goto L_08AEAF30;
    case 677u: goto L_08AEAF4C;
    case 678u: goto L_08AEAF54;
    case 679u: goto L_08AEAF64;
    case 680u: goto L_08AEAF68;
    case 681u: goto L_08AEAF70;
    case 682u: goto L_08AEAFB4;
    case 683u: goto L_08AEAFE4;
    case 684u: goto L_08AEB01C;
    case 685u: goto L_08AEB02C;
    case 686u: goto L_08AEB038;
    case 687u: goto L_08AEB040;
    case 688u: goto L_08AEB048;
    case 689u: goto L_08AEB04C;
    case 690u: goto L_08AEB05C;
    case 691u: goto L_08AEB064;
    case 692u: goto L_08AEB094;
    case 693u: goto L_08AEB0A0;
    case 694u: goto L_08AEB0B0;
    case 695u: goto L_08AEB0C0;
    case 696u: goto L_08AEB0D0;
    case 697u: goto L_08AEB0DC;
    case 698u: goto L_08AEB0F4;
    case 699u: goto L_08AEB0FC;
    case 700u: goto L_08AEB104;
    case 701u: goto L_08AEB114;
    case 702u: goto L_08AEB124;
    case 703u: goto L_08AEB130;
    case 704u: goto L_08AEB13C;
    case 705u: goto L_08AEB14C;
    case 706u: goto L_08AEB16C;
    case 707u: goto L_08AEB17C;
    case 708u: goto L_08AEB184;
    case 709u: goto L_08AEB190;
    case 710u: goto L_08AEB1A4;
    case 711u: goto L_08AEB1AC;
    case 712u: goto L_08AEB1B0;
    case 713u: goto L_08AEB1BC;
    case 714u: goto L_08AEB1CC;
    case 715u: goto L_08AEB1E0;
    case 716u: goto L_08AEB1EC;
    case 717u: goto L_08AEB1F4;
    case 718u: goto L_08AEB1F8;
    case 719u: goto L_08AEB208;
    case 720u: goto L_08AEB220;
    case 721u: goto L_08AEB224;
    case 722u: goto L_08AEB238;
    case 723u: goto L_08AEB240;
    case 724u: goto L_08AEB248;
    case 725u: goto L_08AEB25C;
    case 726u: goto L_08AEB264;
    case 727u: goto L_08AEB270;
    case 728u: goto L_08AEB27C;
    case 729u: goto L_08AEB284;
    case 730u: goto L_08AEB288;
    case 731u: goto L_08AEB28C;
    case 732u: goto L_08AEB2AC;
    case 733u: goto L_08AEB2B8;
    case 734u: goto L_08AEB2C4;
    case 735u: goto L_08AEB2D0;
    case 736u: goto L_08AEB2E4;
    case 737u: goto L_08AEB2EC;
    case 738u: goto L_08AEB2F0;
    case 739u: goto L_08AEB2FC;
    case 740u: goto L_08AEB30C;
    case 741u: goto L_08AEB320;
    case 742u: goto L_08AEB32C;
    case 743u: goto L_08AEB334;
    case 744u: goto L_08AEB338;
    case 745u: goto L_08AEB348;
    case 746u: goto L_08AEB364;
    case 747u: goto L_08AEB36C;
    case 748u: goto L_08AEB374;
    case 749u: goto L_08AEB37C;
    case 750u: goto L_08AEB380;
    case 751u: goto L_08AEB394;
    case 752u: goto L_08AEB3C4;
    case 753u: goto L_08AEB3CC;
    case 754u: goto L_08AEB3FC;
    case 755u: goto L_08AEB428;
    case 756u: goto L_08AEB42C;
    case 757u: goto L_08AEB438;
    case 758u: goto L_08AEB444;
    case 759u: goto L_08AEB44C;
    case 760u: goto L_08AEB454;
    case 761u: goto L_08AEB45C;
    case 762u: goto L_08AEB468;
    case 763u: goto L_08AEB48C;
    case 764u: goto L_08AEB4B8;
    case 765u: goto L_08AEB4C4;
    case 766u: goto L_08AEB4CC;
    case 767u: goto L_08AEB4F0;
    case 768u: goto L_08AEB4F8;
    case 769u: goto L_08AEB500;
    case 770u: goto L_08AEB504;
    case 771u: goto L_08AEB514;
    case 772u: goto L_08AEB528;
    case 773u: goto L_08AEB53C;
    case 774u: goto L_08AEB558;
    case 775u: goto L_08AEB564;
    case 776u: goto L_08AEB58C;
    case 777u: goto L_08AEB59C;
    case 778u: goto L_08AEB5A8;
    case 779u: goto L_08AEB5C4;
    case 780u: goto L_08AEB5D4;
    case 781u: goto L_08AEB5DC;
    case 782u: goto L_08AEB5E4;
    case 783u: goto L_08AEB5E8;
    case 784u: goto L_08AEB5F4;
    case 785u: goto L_08AEB600;
    case 786u: goto L_08AEB608;
    case 787u: goto L_08AEB61C;
    case 788u: goto L_08AEB624;
    case 789u: goto L_08AEB62C;
    case 790u: goto L_08AEB638;
    case 791u: goto L_08AEB64C;
    case 792u: goto L_08AEB654;
    case 793u: goto L_08AEB65C;
    case 794u: goto L_08AEB67C;
    case 795u: goto L_08AEB690;
    case 796u: goto L_08AEB698;
    case 797u: goto L_08AEB6A4;
    case 798u: goto L_08AEB6A8;
    case 799u: goto L_08AEB6B0;
    case 800u: goto L_08AEB6B8;
    case 801u: goto L_08AEB6D4;
    case 802u: goto L_08AEB6DC;
    case 803u: goto L_08AEB6E0;
    case 804u: goto L_08AEB6EC;
    case 805u: goto L_08AEB6F8;
    case 806u: goto L_08AEB714;
    case 807u: goto L_08AEB734;
    case 808u: goto L_08AEB73C;
    case 809u: goto L_08AEB748;
    case 810u: goto L_08AEB754;
    case 811u: goto L_08AEB768;
    case 812u: goto L_08AEB77C;
    case 813u: goto L_08AEB7E0;
    case 814u: goto L_08AEB7F4;
    case 815u: goto L_08AEB7FC;
    case 816u: goto L_08AEB838;
    case 817u: goto L_08AEB87C;
    case 818u: goto L_08AEB88C;
    case 819u: goto L_08AEB8B0;
    case 820u: goto L_08AEB8B8;
    case 821u: goto L_08AEB8C8;
    case 822u: goto L_08AEB8D4;
    case 823u: goto L_08AEB8E4;
    case 824u: goto L_08AEB918;
    case 825u: goto L_08AEB930;
    case 826u: goto L_08AEB938;
    case 827u: goto L_08AEB960;
    case 828u: goto L_08AEB978;
    case 829u: goto L_08AEB99C;
    case 830u: goto L_08AEB9A8;
    case 831u: goto L_08AEB9B8;
    case 832u: goto L_08AEB9C4;
    case 833u: goto L_08AEB9D4;
    case 834u: goto L_08AEB9E8;
    case 835u: goto L_08AEB9F4;
    case 836u: goto L_08AEBA18;
    case 837u: goto L_08AEBA24;
    case 838u: goto L_08AEBA34;
    case 839u: goto L_08AEBA3C;
    case 840u: goto L_08AEBA44;
    case 841u: goto L_08AEBA48;
    case 842u: goto L_08AEBA64;
    case 843u: goto L_08AEBA6C;
    case 844u: goto L_08AEBA74;
    case 845u: goto L_08AEBA7C;
    case 846u: goto L_08AEBA84;
    case 847u: goto L_08AEBAA4;
    case 848u: goto L_08AEBAC0;
    case 849u: goto L_08AEBAC4;
    case 850u: goto L_08AEBAC8;
    case 851u: goto L_08AEBAD8;
    case 852u: goto L_08AEBAE8;
    case 853u: goto L_08AEBAF8;
    case 854u: goto L_08AEBB14;
    case 855u: goto L_08AEBB4C;
    case 856u: goto L_08AEBB58;
    case 857u: goto L_08AEBB64;
    case 858u: goto L_08AEBB70;
    case 859u: goto L_08AEBB98;
    case 860u: goto L_08AEBB9C;
    case 861u: goto L_08AEBBE0;
    case 862u: goto L_08AEBBF4;
    case 863u: goto L_08AEBC08;
    case 864u: goto L_08AEBC0C;
    case 865u: goto L_08AEBC14;
    case 866u: goto L_08AEBC28;
    case 867u: goto L_08AEBC30;
    case 868u: goto L_08AEBC48;
    case 869u: goto L_08AEBC50;
    case 870u: goto L_08AEBC58;
    case 871u: goto L_08AEBC60;
    case 872u: goto L_08AEBC68;
    case 873u: goto L_08AEBC70;
    case 874u: goto L_08AEBC7C;
    case 875u: goto L_08AEBC84;
    case 876u: goto L_08AEBC8C;
    case 877u: goto L_08AEBC98;
    case 878u: goto L_08AEBCA4;
    case 879u: goto L_08AEBCB0;
    case 880u: goto L_08AEBCC8;
    case 881u: goto L_08AEBCD0;
    case 882u: goto L_08AEBCD8;
    case 883u: goto L_08AEBD6C;
    case 884u: goto L_08AEBD80;
    case 885u: goto L_08AEBD90;
    case 886u: goto L_08AEBD9C;
    case 887u: goto L_08AEBDB0;
    case 888u: goto L_08AEBDB4;
    case 889u: goto L_08AEBDBC;
    case 890u: goto L_08AEBDC4;
    case 891u: goto L_08AEBDCC;
    case 892u: goto L_08AEBDD0;
    case 893u: goto L_08AEBDE8;
    case 894u: goto L_08AEBE08;
    case 895u: goto L_08AEBE10;
    case 896u: goto L_08AEBE1C;
    case 897u: goto L_08AEBE2C;
    case 898u: goto L_08AEBE38;
    case 899u: goto L_08AEBE50;
    case 900u: goto L_08AEBE54;
    case 901u: goto L_08AEBE60;
    case 902u: goto L_08AEBE6C;
    case 903u: goto L_08AEBE74;
    case 904u: goto L_08AEBE7C;
    case 905u: goto L_08AEBE80;
    case 906u: goto L_08AEBE90;
    case 907u: goto L_08AEBEB8;
    case 908u: goto L_08AEBEC0;
    case 909u: goto L_08AEBECC;
    case 910u: goto L_08AEBED8;
    case 911u: goto L_08AEBEE4;
    case 912u: goto L_08AEBEF0;
    case 913u: goto L_08AEBF0C;
    case 914u: goto L_08AEBF18;
    case 915u: goto L_08AEBF1C;
    case 916u: goto L_08AEBF30;
    case 917u: goto L_08AEBF48;
    case 918u: goto L_08AEBF54;
    case 919u: goto L_08AEBF58;
    case 920u: goto L_08AEBF6C;
    case 921u: goto L_08AEBF84;
    case 922u: goto L_08AEBFA0;
    case 923u: goto L_08AEBFAC;
    case 924u: goto L_08AEBFB8;
    case 925u: goto L_08AEBFC4;
    case 926u: goto L_08AEBFD8;
    case 927u: goto L_08AEBFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AE8000:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-5904));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18752));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1360), ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1524), ctx.gpr[23]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[23] = (2278u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1512), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6528));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(10864));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1452), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1472), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1476), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1480), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1484), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1488), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1492), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1496), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1504), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1508), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1516), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1520), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1528), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1532), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[19] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE8100;
      }
      goto L_08AE8080;
    }
L_08AE8080:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25176));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08AE808C;
L_08AE808C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] & 2u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
        goto L_08AE80B8;
    }
    goto L_08AE80A4;
L_08AE80A4:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[7] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 24u));
      if (branch_taken) {
          goto L_08AE80B8;
      }
      goto L_08AE80B8;
    }
L_08AE80B8:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] & 2u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
        goto L_08AE80E4;
    }
    goto L_08AE80D0;
L_08AE80D0:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[8] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 24u));
      if (branch_taken) {
          goto L_08AE80E4;
      }
      goto L_08AE80E4;
    }
L_08AE80E4:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE80F4;
      }
      goto L_08AE80EC;
    }
L_08AE80EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE8114;
      }
      goto L_08AE80F4;
    }
L_08AE80F4:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE808C;
      }
      goto L_08AE8100;
    }
L_08AE8100:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE8114;
      }
      goto L_08AE810C;
    }
L_08AE810C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE8114;
      }
      goto L_08AE8114;
    }
L_08AE8114:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1364), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AE8158;
      }
      goto L_08AE811C;
    }
L_08AE811C:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-8107));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1364), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE8134u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 151u, 0x08864AD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8134u) goto L_08AE8134;
    return;
L_08AE8134:
    ctx.gpr[31] = (0x08AE813Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 476u, 0x08AE6F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE813Cu) goto L_08AE813C;
    return;
L_08AE813C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE8158;
      }
      goto L_08AE814C;
    }
L_08AE814C:
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08AE8158u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 153u, 0x08864AF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE8158u) goto L_08AE8158;
    return;
L_08AE8158:
    ctx.gpr[30] = (2227u << 16u);
    ctx.gpr[16] = (0u | 120u);
    ctx.gpr[17] = (0u | 480u);
    ctx.gpr[18] = (0u | 2400u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-6520));
    ctx.gpr[22] = (2230u << 16u);
    ctx.gpr[21] = (2229u << 16u);
    goto L_08AE8174;
L_08AE8174:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE8190;
      }
      goto L_08AE8184;
    }
L_08AE8184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AE8190;
L_08AE8190:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08AE81A4;
      }
      goto L_08AE819C;
    }
L_08AE819C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE81F0;
      }
      goto L_08AE81A4;
    }
L_08AE81A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE81CC;
      }
      goto L_08AE81C4;
    }
L_08AE81C4:
    ctx.gpr[31] = (0x08AE81CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x08AE81CCu) goto L_08AE81CC;
    return;
L_08AE81CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE81E8;
      }
      goto L_08AE81DC;
    }
L_08AE81DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AE81E8;
L_08AE81E8:
    ctx.gpr[31] = (0x08AE81F0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 240u, 0x08A7D564u>(ctx, &aot_mem) && ctx.pc == 0x08AE81F0u) goto L_08AE81F0;
    return;
L_08AE81F0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 130 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08AE8174;
      }
      goto L_08AE8204;
    }
L_08AE8204:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11232)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-25288), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11236)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25284), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25808)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5888), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17460)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5884), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1360)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25312), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25308), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-25316), 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25292), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5892), 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25304), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25300), 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6840), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1452)));
    ctx.gpr[5] = (0u | 0u);
    goto L_08AE82AC;
L_08AE82AC:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AE82AC;
      }
      goto L_08AE82C0;
    }
L_08AE82C0:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08AE82C8;
L_08AE82C8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE82C8;
      }
      goto L_08AE82DC;
    }
L_08AE82DC:
    ctx.gpr[31] = (0x08AE82E4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 129u, 0x08A88900u>(ctx, &aot_mem) && ctx.pc == 0x08AE82E4u) goto L_08AE82E4;
    return;
L_08AE82E4:
    ctx.gpr[31] = (0x08AE82ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE82ECu) goto L_08AE82EC;
    return;
L_08AE82EC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08AE8320u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 407u, 0x08ACD9C4u>(ctx, &aot_mem) && ctx.pc == 0x08AE8320u) goto L_08AE8320;
    return;
L_08AE8320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2940)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2936), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AE8344u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8344u) goto L_08AE8344;
    return;
L_08AE8344:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 128u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08AE835Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 267u, 0x089D9220u>(ctx, &aot_mem) && ctx.pc == 0x08AE835Cu) goto L_08AE835C;
    return;
L_08AE835C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(9176));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE8378u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6516));
    goto L_08AEB77C;
L_08AE8378:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8040)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08AE8390u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 8u, 0x088B8108u>(ctx, &aot_mem) && ctx.pc == 0x08AE8390u) goto L_08AE8390;
    return;
L_08AE8390:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8564;
      }
      goto L_08AE8398;
    }
L_08AE8398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] << 11u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] << 11u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE83BCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 665u, 0x08AA31B4u>(ctx, &aot_mem) && ctx.pc == 0x08AE83BCu) goto L_08AE83BC;
    return;
L_08AE83BC:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AE83D4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6572));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 515u, 0x08872F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE83D4u) goto L_08AE83D4;
    return;
L_08AE83D4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08AE83E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 543u, 0x08873088u>(ctx, &aot_mem) && ctx.pc == 0x08AE83E4u) goto L_08AE83E4;
    return;
L_08AE83E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE83F4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 552u, 0x08873118u>(ctx, &aot_mem) && ctx.pc == 0x08AE83F4u) goto L_08AE83F4;
    return;
L_08AE83F4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE8400u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 532u, 0x0887300Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8400u) goto L_08AE8400;
    return;
L_08AE8400:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1348), ctx.gpr[16]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1344), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1332), ctx.gpr[5]);
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7664));
    ctx.gpr[5] = (2278u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9264));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1340), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1336), ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6508));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6504));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1448), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1444), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6496));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6488));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1440), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1436), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6480));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6468));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1432), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1428), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6460));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6452));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1424), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1420), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6444));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6432));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1416), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1356), ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6428));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6420));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1412), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1408), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6404));
    ctx.gpr[5] = (2278u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11064));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1404), ctx.gpr[4]);
    ctx.gpr[4] = (2278u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1400), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11576));
    ctx.gpr[5] = (2278u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11832));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1396), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1392), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[5] = (2278u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15352));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1388), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1384), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6380));
    ctx.gpr[5] = (2278u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1368), ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1376), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6368));
    ctx.gpr[5] = (2278u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14488));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1328), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1352), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1372), ctx.gpr[6]);
    ctx.gpr[21] = (2278u << 16u);
    ctx.gpr[30] = (2227u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1156));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1456), ctx.gpr[16]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(7608));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-6408));
      if (branch_taken) {
          goto L_08AE8574;
      }
      goto L_08AE8564;
    }
L_08AE8564:
    ctx.gpr[31] = (0x08AE856Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 638u, 0x08AE7D50u>(ctx, &aot_mem) && ctx.pc == 0x08AE856Cu) goto L_08AE856C;
    return;
L_08AE856C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9100;
      }
      goto L_08AE8574;
    }
L_08AE8574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1348)));
    goto L_08AE8578;
L_08AE8578:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AE8584u);
    ctx.gpr[6] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 496u, 0x08AE70A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE8584u) goto L_08AE8584;
    return;
L_08AE8584:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1348), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE8EE4;
      }
      goto L_08AE858C;
    }
L_08AE858C:
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1448)));
      if (branch_taken) {
          goto L_08AE85C0;
      }
      goto L_08AE859C;
    }
L_08AE859C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE85B4;
      }
      goto L_08AE85AC;
    }
L_08AE85AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE85D4;
      }
      goto L_08AE85B4;
    }
L_08AE85B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE859C;
      }
      goto L_08AE85C0;
    }
L_08AE85C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE85D4;
      }
      goto L_08AE85CC;
    }
L_08AE85CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE85D4;
      }
      goto L_08AE85D4;
    }
L_08AE85D4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE85E8;
      }
      goto L_08AE85DC;
    }
L_08AE85DC:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1332), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE8EDC;
      }
      goto L_08AE85E8;
    }
L_08AE85E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[6] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8EDC;
      }
      goto L_08AE85F8;
    }
L_08AE85F8:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-6304)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE8610:
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1444)));
      if (branch_taken) {
          goto L_08AE8644;
      }
      goto L_08AE8620;
    }
L_08AE8620:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE8638;
      }
      goto L_08AE8630;
    }
L_08AE8630:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE8658;
      }
      goto L_08AE8638;
    }
L_08AE8638:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE8620;
      }
      goto L_08AE8644;
    }
L_08AE8644:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE8658;
      }
      goto L_08AE8650;
    }
L_08AE8650:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE8658;
      }
      goto L_08AE8658;
    }
L_08AE8658:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8668;
      }
      goto L_08AE8660;
    }
L_08AE8660:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1332), ctx.gpr[4]);
    goto L_08AE8668;
L_08AE8668:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_08AE86A0;
      }
      goto L_08AE867C;
    }
L_08AE867C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE8694;
      }
      goto L_08AE868C;
    }
L_08AE868C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE86B4;
      }
      goto L_08AE8694;
    }
L_08AE8694:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE867C;
      }
      goto L_08AE86A0;
    }
L_08AE86A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE86B4;
      }
      goto L_08AE86AC;
    }
L_08AE86AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE86B4;
      }
      goto L_08AE86B4;
    }
L_08AE86B4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE86C0;
      }
      goto L_08AE86BC;
    }
L_08AE86BC:
    ctx.gpr[8] = (0u | 2u);
    goto L_08AE86C0;
L_08AE86C0:
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1436)));
      if (branch_taken) {
          goto L_08AE86F4;
      }
      goto L_08AE86D0;
    }
L_08AE86D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE86E8;
      }
      goto L_08AE86E0;
    }
L_08AE86E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE8708;
      }
      goto L_08AE86E8;
    }
L_08AE86E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE86D0;
      }
      goto L_08AE86F4;
    }
L_08AE86F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE8708;
      }
      goto L_08AE8700;
    }
L_08AE8700:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE8708;
      }
      goto L_08AE8708;
    }
L_08AE8708:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8714;
      }
      goto L_08AE8710;
    }
L_08AE8710:
    ctx.gpr[8] = (0u | 3u);
    goto L_08AE8714;
L_08AE8714:
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1432)));
      if (branch_taken) {
          goto L_08AE8748;
      }
      goto L_08AE8724;
    }
L_08AE8724:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE873C;
      }
      goto L_08AE8734;
    }
L_08AE8734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE875C;
      }
      goto L_08AE873C;
    }
L_08AE873C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE8724;
      }
      goto L_08AE8748;
    }
L_08AE8748:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE875C;
      }
      goto L_08AE8754;
    }
L_08AE8754:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE875C;
      }
      goto L_08AE875C;
    }
L_08AE875C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8768;
      }
      goto L_08AE8764;
    }
L_08AE8764:
    ctx.gpr[8] = (0u | 4u);
    goto L_08AE8768;
L_08AE8768:
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1428)));
      if (branch_taken) {
          goto L_08AE879C;
      }
      goto L_08AE8778;
    }
L_08AE8778:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE8790;
      }
      goto L_08AE8788;
    }
L_08AE8788:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE87B0;
      }
      goto L_08AE8790;
    }
L_08AE8790:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE8778;
      }
      goto L_08AE879C;
    }
L_08AE879C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE87B0;
      }
      goto L_08AE87A8;
    }
L_08AE87A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE87B0;
      }
      goto L_08AE87B0;
    }
L_08AE87B0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE87BC;
      }
      goto L_08AE87B8;
    }
L_08AE87B8:
    ctx.gpr[8] = (0u | 5u);
    goto L_08AE87BC;
L_08AE87BC:
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1424)));
      if (branch_taken) {
          goto L_08AE87F0;
      }
      goto L_08AE87CC;
    }
L_08AE87CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE87E4;
      }
      goto L_08AE87DC;
    }
L_08AE87DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE8804;
      }
      goto L_08AE87E4;
    }
L_08AE87E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE87CC;
      }
      goto L_08AE87F0;
    }
L_08AE87F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE8804;
      }
      goto L_08AE87FC;
    }
L_08AE87FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE8804;
      }
      goto L_08AE8804;
    }
L_08AE8804:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8810;
      }
      goto L_08AE880C;
    }
L_08AE880C:
    ctx.gpr[8] = (0u | 6u);
    goto L_08AE8810;
L_08AE8810:
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1420)));
      if (branch_taken) {
          goto L_08AE8844;
      }
      goto L_08AE8820;
    }
L_08AE8820:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE8838;
      }
      goto L_08AE8830;
    }
L_08AE8830:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE8858;
      }
      goto L_08AE8838;
    }
L_08AE8838:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE8820;
      }
      goto L_08AE8844;
    }
L_08AE8844:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE8858;
      }
      goto L_08AE8850;
    }
L_08AE8850:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE8858;
      }
      goto L_08AE8858;
    }
L_08AE8858:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1332), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AE8868;
      }
      goto L_08AE8860;
    }
L_08AE8860:
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1332), ctx.gpr[4]);
    goto L_08AE8868;
L_08AE8868:
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1416)));
      if (branch_taken) {
          goto L_08AE889C;
      }
      goto L_08AE8878;
    }
L_08AE8878:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE8890;
      }
      goto L_08AE8888;
    }
L_08AE8888:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE88B0;
      }
      goto L_08AE8890;
    }
L_08AE8890:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE8878;
      }
      goto L_08AE889C;
    }
L_08AE889C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE88B0;
      }
      goto L_08AE88A8;
    }
L_08AE88A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE88B0;
      }
      goto L_08AE88B0;
    }
L_08AE88B0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE88C0;
      }
      goto L_08AE88B8;
    }
L_08AE88B8:
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1332), ctx.gpr[4]);
    goto L_08AE88C0;
L_08AE88C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8EDC;
      }
      goto L_08AE88C8;
    }
L_08AE88C8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1344)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8918;
      }
      goto L_08AE88D4;
    }
L_08AE88D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1356)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1080));
    ctx.gpr[31] = (0x08AE88E4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AEB7FC;
L_08AE88E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE88F8;
      }
      goto L_08AE88F0;
    }
L_08AE88F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE8918;
      }
      goto L_08AE88F8;
    }
L_08AE88F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AE8914u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 283u, 0x08A7D868u>(ctx, &aot_mem) && ctx.pc == 0x08AE8914u) goto L_08AE8914;
    return;
L_08AE8914:
    ctx.gpr[6] = (0u | 1u);
    goto L_08AE8918;
L_08AE8918:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1344), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08AE8EDC;
      }
      goto L_08AE8920;
    }
L_08AE8920:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AE892C;
L_08AE892C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
        goto L_08AE8944;
    }
    goto L_08AE893C;
L_08AE893C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE8968;
      }
      goto L_08AE8944;
    }
L_08AE8944:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE8954;
      }
      goto L_08AE894C;
    }
L_08AE894C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE8968;
      }
      goto L_08AE8954;
    }
L_08AE8954:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[7] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE892C;
      }
      goto L_08AE8964;
    }
L_08AE8964:
    ctx.gpr[6] = (0u | 0u);
    goto L_08AE8968;
L_08AE8968:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1360)));
      if (branch_taken) {
          goto L_08AE89E0;
      }
      goto L_08AE8970;
    }
L_08AE8970:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1408)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(63));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1084));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    ctx.gpr[31] = (0x08AE8988u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(1092));
    goto L_08AEB7FC;
L_08AE8988:
    ctx.gpr[31] = (0x08AE8990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8990u) goto L_08AE8990;
    return;
L_08AE8990:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE89BC;
      }
      goto L_08AE89A0;
    }
L_08AE89A0:
    ctx.gpr[31] = (0x08AE89A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE89A8u) goto L_08AE89A8;
    return;
L_08AE89A8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE89E0;
      }
      goto L_08AE89BC;
    }
L_08AE89BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1092)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08AE89E0;
L_08AE89E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8EDC;
      }
      goto L_08AE89E8;
    }
L_08AE89E8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AE89F4u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 886u, 0x08AEF28Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE89F4u) goto L_08AE89F4;
    return;
L_08AE89F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1356)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.gpr[31] = (0x08AE8A04u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AEB7FC;
L_08AE8A04:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8A10u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 886u, 0x08AEF28Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8A10u) goto L_08AE8A10;
    return;
L_08AE8A10:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1124));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE8A20u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8A20u) goto L_08AE8A20;
    return;
L_08AE8A20:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8A2Cu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 886u, 0x08AEF28Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8A2Cu) goto L_08AE8A2C;
    return;
L_08AE8A2C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE8A38u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 516u, 0x08AEDE1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8A38u) goto L_08AE8A38;
    return;
L_08AE8A38:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE8AF8;
      }
      goto L_08AE8A40;
    }
L_08AE8A40:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1156), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE8A50u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8A50u) goto L_08AE8A50;
    return;
L_08AE8A50:
    ctx.gpr[31] = (0x08AE8A58u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 516u, 0x08AEDE1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8A58u) goto L_08AE8A58;
    return;
L_08AE8A58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-25316)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08AE8A70u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1124));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8A70u) goto L_08AE8A70;
    return;
L_08AE8A70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-25316)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08AE8A88u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8A88u) goto L_08AE8A88;
    return;
L_08AE8A88:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8AB4;
      }
      goto L_08AE8A90;
    }
L_08AE8A90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-25316)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AE8AD4;
      }
      goto L_08AE8AB4;
    }
L_08AE8AB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-25316)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AE8AD4;
L_08AE8AD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-25316)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-25316), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AE8AECu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 886u, 0x08AEF28Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8AECu) goto L_08AE8AEC;
    return;
L_08AE8AEC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8A40;
      }
      goto L_08AE8AF8;
    }
L_08AE8AF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8EDC;
      }
      goto L_08AE8B00;
    }
L_08AE8B00:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1196));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1404)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1188));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(1192));
    ctx.gpr[31] = (0x08AE8B1Cu);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    goto L_08AEB7FC;
L_08AE8B1C:
    ctx.gpr[16] = (0u | 0u);
    goto L_08AE8B20;
L_08AE8B20:
    ctx.gpr[31] = (0x08AE8B28u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8B28u) goto L_08AE8B28;
    return;
L_08AE8B28:
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8B70;
      }
      goto L_08AE8B34;
    }
L_08AE8B34:
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1196))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 97 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8B64;
      }
      goto L_08AE8B48;
    }
L_08AE8B48:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1196))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 123 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8B64;
      }
      goto L_08AE8B58;
    }
L_08AE8B58:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1196))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1196), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AE8B64;
L_08AE8B64:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_08AE8B20;
      }
      goto L_08AE8B70;
    }
L_08AE8B70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1400)));
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-25312)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[31] = (0x08AE8B8Cu);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8B8Cu) goto L_08AE8B8C;
    return;
L_08AE8B8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-25312)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1396)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1188)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1192)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25312), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE8EDC;
      }
      goto L_08AE8BC0;
    }
L_08AE8BC0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AE8BCCu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 886u, 0x08AEF28Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8BCCu) goto L_08AE8BCC;
    return;
L_08AE8BCC:
    ctx.gpr[31] = (0x08AE8BD4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 67u, 0x0882477Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8BD4u) goto L_08AE8BD4;
    return;
L_08AE8BD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8EDC;
      }
      goto L_08AE8BDC;
    }
L_08AE8BDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1388)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1204));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(1208));
    ctx.gpr[31] = (0x08AE8BF4u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(1212));
    goto L_08AEB7FC;
L_08AE8BF4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5892)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1204)));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1208)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1212)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5892), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE8EDC;
      }
      goto L_08AE8C34;
    }
L_08AE8C34:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1248));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(1252));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(1256));
    ctx.gpr[31] = (0x08AE8C54u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    goto L_08AEB7FC;
L_08AE8C54:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-25304)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1368)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1252)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1256)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1376)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08AE8C9Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8C9Cu) goto L_08AE8C9C;
    return;
L_08AE8C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-25304)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-25304), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE8EDC;
      }
      goto L_08AE8CAC;
    }
L_08AE8CAC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1468), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1464), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1260));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1460), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8CCCu);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8CCCu) goto L_08AE8CCC;
    return;
L_08AE8CCC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1292));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8CE0u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8CE0u) goto L_08AE8CE0;
    return;
L_08AE8CE0:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AE8CF0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 886u, 0x08AEF28Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8CF0u) goto L_08AE8CF0;
    return;
L_08AE8CF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE8D00u);
    ctx.gpr[6] = (0u | 31u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x08AE8D00u) goto L_08AE8D00;
    return;
L_08AE8D00:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8D0Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 886u, 0x08AEF28Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8D0Cu) goto L_08AE8D0C;
    return;
L_08AE8D0C:
    ctx.gpr[31] = (0x08AE8D14u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 240u, 0x08AECC38u>(ctx, &aot_mem) && ctx.pc == 0x08AE8D14u) goto L_08AE8D14;
    return;
L_08AE8D14:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8D24u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 886u, 0x08AEF28Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8D24u) goto L_08AE8D24;
    return;
L_08AE8D24:
    ctx.gpr[31] = (0x08AE8D2Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 240u, 0x08AECC38u>(ctx, &aot_mem) && ctx.pc == 0x08AE8D2Cu) goto L_08AE8D2C;
    return;
L_08AE8D2C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8D3Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 886u, 0x08AEF28Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8D3Cu) goto L_08AE8D3C;
    return;
L_08AE8D3C:
    ctx.gpr[31] = (0x08AE8D44u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 240u, 0x08AECC38u>(ctx, &aot_mem) && ctx.pc == 0x08AE8D44u) goto L_08AE8D44;
    return;
L_08AE8D44:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8D54u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 886u, 0x08AEF28Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8D54u) goto L_08AE8D54;
    return;
L_08AE8D54:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE8D64u);
    ctx.gpr[6] = (0u | 31u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x08AE8D64u) goto L_08AE8D64;
    return;
L_08AE8D64:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8D70u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 886u, 0x08AEF28Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8D70u) goto L_08AE8D70;
    return;
L_08AE8D70:
    ctx.gpr[31] = (0x08AE8D78u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 238u, 0x08AECC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8D78u) goto L_08AE8D78;
    return;
L_08AE8D78:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AE8D84u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8D84u) goto L_08AE8D84;
    return;
L_08AE8D84:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8D94u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 886u, 0x08AEF28Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8D94u) goto L_08AE8D94;
    return;
L_08AE8D94:
    ctx.gpr[31] = (0x08AE8D9Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 238u, 0x08AECC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8D9Cu) goto L_08AE8D9C;
    return;
L_08AE8D9C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AE8DA8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8DA8u) goto L_08AE8DA8;
    return;
L_08AE8DA8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8DB8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 886u, 0x08AEF28Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8DB8u) goto L_08AE8DB8;
    return;
L_08AE8DB8:
    ctx.gpr[31] = (0x08AE8DC0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 238u, 0x08AECC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8DC0u) goto L_08AE8DC0;
    return;
L_08AE8DC0:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AE8DCCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8DCCu) goto L_08AE8DCC;
    return;
L_08AE8DCC:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8DDCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 886u, 0x08AEF28Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8DDCu) goto L_08AE8DDC;
    return;
L_08AE8DDC:
    ctx.gpr[31] = (0x08AE8DE4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 238u, 0x08AECC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8DE4u) goto L_08AE8DE4;
    return;
L_08AE8DE4:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AE8DF0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8DF0u) goto L_08AE8DF0;
    return;
L_08AE8DF0:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8E00u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 886u, 0x08AEF28Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8E00u) goto L_08AE8E00;
    return;
L_08AE8E00:
    ctx.gpr[31] = (0x08AE8E08u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 238u, 0x08AECC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8E08u) goto L_08AE8E08;
    return;
L_08AE8E08:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AE8E14u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8E14u) goto L_08AE8E14;
    return;
L_08AE8E14:
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8E24u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 886u, 0x08AEF28Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8E24u) goto L_08AE8E24;
    return;
L_08AE8E24:
    ctx.gpr[31] = (0x08AE8E2Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 238u, 0x08AECC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8E2Cu) goto L_08AE8E2C;
    return;
L_08AE8E2C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AE8E38u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8E38u) goto L_08AE8E38;
    return;
L_08AE8E38:
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-25300)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(44), ctx.gpr[30]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1372)));
    ctx.gpr[31] = (0x08AE8E80u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8E80u) goto L_08AE8E80;
    return;
L_08AE8E80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-25300)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AE8EC4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1260));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8EC4u) goto L_08AE8EC4;
    return;
L_08AE8EC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-25300)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-25300), ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1460)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1464)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1468)));
    goto L_08AE8EDC;
L_08AE8EDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1348)));
      if (branch_taken) {
          goto L_08AE8578;
      }
      goto L_08AE8EE4;
    }
L_08AE8EE4:
    ctx.gpr[31] = (0x08AE8EECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1456)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 669u, 0x08AA31FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE8EECu) goto L_08AE8EEC;
    return;
L_08AE8EEC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8F88;
      }
      goto L_08AE8F04;
    }
L_08AE8F04:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22408));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20808));
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[30] = (0u | 2u);
    goto L_08AE8F2C;
L_08AE8F2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-25316)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[31] = (0x08AE8F40u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8F40u) goto L_08AE8F40;
    return;
L_08AE8F40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-25316)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[31] = (0x08AE8F54u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8F54u) goto L_08AE8F54;
    return;
L_08AE8F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-25316)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-25316), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AE8F2C;
      }
      goto L_08AE8F88;
    }
L_08AE8F88:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(688), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-25316)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (0u | 2u);
      if (branch_taken) {
          goto L_08AE8FB4;
      }
      goto L_08AE8F98;
    }
L_08AE8F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-25316)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1340)));
        goto L_08AE8FC4;
    }
    goto L_08AE8FAC;
L_08AE8FAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE90EC;
      }
      goto L_08AE8FB4;
    }
L_08AE8FB4:
    ctx.gpr[31] = (0x08AE8FBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 638u, 0x08AE7D50u>(ctx, &aot_mem) && ctx.pc == 0x08AE8FBCu) goto L_08AE8FBC;
    return;
L_08AE8FBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9100;
      }
      goto L_08AE8FC4;
    }
L_08AE8FC4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[22] = (2227u << 16u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1324));
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-6364));
    goto L_08AE8FDC;
L_08AE8FDC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE8FE8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED604u>(ctx, &aot_mem) && ctx.pc == 0x08AE8FE8u) goto L_08AE8FE8;
    return;
L_08AE8FE8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8FFC;
      }
      goto L_08AE8FF0;
    }
L_08AE8FF0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE90D4;
      }
      goto L_08AE8FFC;
    }
L_08AE8FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08AE90BC;
      }
      goto L_08AE9008;
    }
L_08AE9008:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE9014u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 90u, 0x08A28CB4u>(ctx, &aot_mem) && ctx.pc == 0x08AE9014u) goto L_08AE9014;
    return;
L_08AE9014:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9034;
      }
      goto L_08AE901C;
    }
L_08AE901C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1324)));
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[31] = (0x08AE902Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AE902Cu) goto L_08AE902C;
    return;
L_08AE902C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE90B4;
      }
      goto L_08AE9034;
    }
L_08AE9034:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(120));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE9048u);
    ctx.gpr[6] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 667u, 0x089C6D48u>(ctx, &aot_mem) && ctx.pc == 0x08AE9048u) goto L_08AE9048;
    return;
L_08AE9048:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(120));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE90B4;
      }
      goto L_08AE9080;
    }
L_08AE9080:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08AE9084;
L_08AE9084:
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(120));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08AE9084;
    }
    goto L_08AE90B4;
L_08AE90B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE90D4;
      }
      goto L_08AE90BC;
    }
L_08AE90BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE90D4;
      }
      goto L_08AE90CC;
    }
L_08AE90CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AE90D4;
L_08AE90D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-25316)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AE8FDC;
      }
      goto L_08AE90EC;
    }
L_08AE90EC:
    ctx.gpr[31] = (0x08AE90F4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x08AE90F4u) goto L_08AE90F4;
    return;
L_08AE90F4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(684), ctx.gpr[4]);
    goto L_08AE9100;
L_08AE9100:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1472)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1476)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1480)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1484)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1488)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1492)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1496)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1500)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1504)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1508)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1512)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1516)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1520)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1524)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1528)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1532)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1536));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE9148:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(684)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE91E8;
      }
      goto L_08AE9184;
    }
L_08AE9184:
    ctx.gpr[31] = (0x08AE918Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 754u, 0x0891B6F8u>(ctx, &aot_mem) && ctx.pc == 0x08AE918Cu) goto L_08AE918C;
    return;
L_08AE918C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5888)));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25808), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5884)));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17460), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25284)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[22] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[30] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE91F0;
      }
      goto L_08AE91D0;
    }
L_08AE91D0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25288)));
    ctx.gpr[31] = (0x08AE91E0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 283u, 0x08A7D868u>(ctx, &aot_mem) && ctx.pc == 0x08AE91E0u) goto L_08AE91E0;
    return;
L_08AE91E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-25304)));
      if (branch_taken) {
          goto L_08AE91FC;
      }
      goto L_08AE91E8;
    }
L_08AE91E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE965C;
      }
      goto L_08AE91F0;
    }
L_08AE91F0:
    ctx.gpr[31] = (0x08AE91F8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 287u, 0x08A7D89Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE91F8u) goto L_08AE91F8;
    return;
L_08AE91F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-25304)));
    goto L_08AE91FC;
L_08AE91FC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2278u << 16u);
      if (branch_taken) {
          goto L_08AE9260;
      }
      goto L_08AE920C;
    }
L_08AE920C:
    ctx.gpr[20] = (65528u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14288));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    goto L_08AE9218;
L_08AE9218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE924C;
      }
      goto L_08AE9224;
    }
L_08AE9224:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9238;
      }
      goto L_08AE922C;
    }
L_08AE922C:
    ctx.gpr[31] = (0x08AE9234u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08AE9234u) goto L_08AE9234;
    return;
L_08AE9234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08AE9238;
L_08AE9238:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_08AE924C;
L_08AE924C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-25304)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE9218;
      }
      goto L_08AE9260;
    }
L_08AE9260:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-25304), 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AE9270u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25300), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 271u, 0x0887990Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9270u) goto L_08AE9270;
    return;
L_08AE9270:
    ctx.gpr[31] = (0x08AE9278u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 129u, 0x08A88900u>(ctx, &aot_mem) && ctx.pc == 0x08AE9278u) goto L_08AE9278;
    return;
L_08AE9278:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(680), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(681), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-25296)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(682), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-25296), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE9334;
      }
      goto L_08AE92A0;
    }
L_08AE92A0:
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-18952));
    goto L_08AE92A8;
L_08AE92A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-25296)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08AE92BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x08AE92BCu) goto L_08AE92BC;
    return;
L_08AE92BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-25296)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AE92E4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE92E4u) goto L_08AE92E4;
    return;
L_08AE92E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-25296)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9324;
      }
      goto L_08AE92FC;
    }
L_08AE92FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08AE9318u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE9318u) goto L_08AE9318;
    return;
L_08AE9318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-25296)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    goto L_08AE9324;
L_08AE9324:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-25296), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE92A8;
      }
      goto L_08AE9334;
    }
L_08AE9334:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-25296), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(678)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE934C;
      }
      goto L_08AE9344;
    }
L_08AE9344:
    ctx.gpr[31] = (0x08AE934Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 431u, 0x08A8A9BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE934Cu) goto L_08AE934C;
    return;
L_08AE934C:
    ctx.gpr[4] = (2278u << 16u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(678), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AE935Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7584));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 483u, 0x0883A25Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE935Cu) goto L_08AE935C;
    return;
L_08AE935C:
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-19208), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25292), 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25531)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE93A0;
      }
      goto L_08AE937C;
    }
L_08AE937C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE9390u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 252u, 0x088EDCCCu>(ctx, &aot_mem) && ctx.pc == 0x08AE9390u) goto L_08AE9390;
    return;
L_08AE9390:
    ctx.gpr[31] = (0x08AE9398u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 282u, 0x088EDFE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE9398u) goto L_08AE9398;
    return;
L_08AE9398:
    ctx.gpr[31] = (0x08AE93A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 131u, 0x088ED110u>(ctx, &aot_mem) && ctx.pc == 0x08AE93A0u) goto L_08AE93A0;
    return;
L_08AE93A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(684), 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AE93B0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(679), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE93B0u) goto L_08AE93B0;
    return;
L_08AE93B0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE93F0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AE93F0u) goto L_08AE93F0;
    return;
L_08AE93F0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE940Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 267u, 0x089D9220u>(ctx, &aot_mem) && ctx.pc == 0x08AE940Cu) goto L_08AE940C;
    return;
L_08AE940C:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-5904));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6528));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AE949C;
      }
      goto L_08AE9428;
    }
L_08AE9428:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-25176));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08AE9434;
L_08AE9434:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] & 2u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9458;
      }
      goto L_08AE9448;
    }
L_08AE9448:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
      if (branch_taken) {
          goto L_08AE9458;
      }
      goto L_08AE9458;
    }
L_08AE9458:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] & 2u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE947C;
      }
      goto L_08AE946C;
    }
L_08AE946C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[6] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
      if (branch_taken) {
          goto L_08AE947C;
      }
      goto L_08AE947C;
    }
L_08AE947C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE948C;
      }
      goto L_08AE9484;
    }
L_08AE9484:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE94AC;
      }
      goto L_08AE948C;
    }
L_08AE948C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AE9434;
      }
      goto L_08AE949C;
    }
L_08AE949C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE94AC;
      }
      goto L_08AE94A4;
    }
L_08AE94A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE94AC;
      }
      goto L_08AE94AC;
    }
L_08AE94AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE94D0;
      }
      goto L_08AE94B4;
    }
L_08AE94B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[31] = (0x08AE94C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 157u, 0x08864B38u>(ctx, &aot_mem) && ctx.pc == 0x08AE94C4u) goto L_08AE94C4;
    return;
L_08AE94C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE94D0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 151u, 0x08864AD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE94D0u) goto L_08AE94D0;
    return;
L_08AE94D0:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-8068), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-8036), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AE94E8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AE94E8u) goto L_08AE94E8;
    return;
L_08AE94E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE94F4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 643u, 0x08A96BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE94F4u) goto L_08AE94F4;
    return;
L_08AE94F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(-25532)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE95FC;
      }
      goto L_08AE9500;
    }
L_08AE9500:
    ctx.gpr[31] = (0x08AE9508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 882u, 0x089C79A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE9508u) goto L_08AE9508;
    return;
L_08AE9508:
    ctx.gpr[31] = (0x08AE9510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 44u, 0x089C8370u>(ctx, &aot_mem) && ctx.pc == 0x08AE9510u) goto L_08AE9510;
    return;
L_08AE9510:
    ctx.gpr[31] = (0x08AE9518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 10u, 0x089C80CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE9518u) goto L_08AE9518;
    return;
L_08AE9518:
    ctx.gpr[31] = (0x08AE9520u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(-25532), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9520u) goto L_08AE9520;
    return;
L_08AE9520:
    ctx.gpr[23] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-6844)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE95F8;
      }
      goto L_08AE9538;
    }
L_08AE9538:
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6924));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-6884));
    ctx.gpr[22] = (2229u << 16u);
    goto L_08AE9550;
L_08AE9550:
    ctx.gpr[31] = (0x08AE9558u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9558u) goto L_08AE9558;
    return;
L_08AE9558:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE9580u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AE9580u) goto L_08AE9580;
    return;
L_08AE9580:
    ctx.gpr[31] = (0x08AE9588u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x08AE9588u) goto L_08AE9588;
    return;
L_08AE9588:
    ctx.gpr[31] = (0x08AE9590u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9590u) goto L_08AE9590;
    return;
L_08AE9590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08AE95B8;
      }
      goto L_08AE959C;
    }
L_08AE959C:
    ctx.gpr[31] = (0x08AE95A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE95A4u) goto L_08AE95A4;
    return;
L_08AE95A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08AE95B0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AE95B0u) goto L_08AE95B0;
    return;
L_08AE95B0:
    ctx.gpr[31] = (0x08AE95B8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x08AE95B8u) goto L_08AE95B8;
    return;
L_08AE95B8:
    ctx.gpr[4] = (ctx.gpr[18] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE95CC;
      }
      goto L_08AE95C4;
    }
L_08AE95C4:
    ctx.gpr[31] = (0x08AE95CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE95CCu) goto L_08AE95CC;
    return;
L_08AE95CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08AE95E0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE95E0u) goto L_08AE95E0;
    return;
L_08AE95E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-6844)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE9550;
      }
      goto L_08AE95F8;
    }
L_08AE95F8:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-6844), 0u);
    goto L_08AE95FC;
L_08AE95FC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25316)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2278u << 16u);
      if (branch_taken) {
          goto L_08AE9638;
      }
      goto L_08AE9614;
    }
L_08AE9614:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10864));
    ctx.gpr[18] = (2230u << 16u);
    goto L_08AE961C;
L_08AE961C:
    ctx.gpr[31] = (0x08AE9624u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 631u, 0x089C6AC4u>(ctx, &aot_mem) && ctx.pc == 0x08AE9624u) goto L_08AE9624;
    return;
L_08AE9624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-25316)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE961C;
      }
      goto L_08AE9638;
    }
L_08AE9638:
    ctx.gpr[31] = (0x08AE9640u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 631u, 0x089C6AC4u>(ctx, &aot_mem) && ctx.pc == 0x08AE9640u) goto L_08AE9640;
    return;
L_08AE9640:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AE964Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08AE964Cu) goto L_08AE964C;
    return;
L_08AE964C:
    ctx.gpr[31] = (0x08AE9654u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 108u, 0x089CC768u>(ctx, &aot_mem) && ctx.pc == 0x08AE9654u) goto L_08AE9654;
    return;
L_08AE9654:
    ctx.gpr[31] = (0x08AE965Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 756u, 0x0891B71Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE965Cu) goto L_08AE965C;
    return;
L_08AE965C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE968C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(684)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE972C;
      }
      goto L_08AE96CC;
    }
L_08AE96CC:
    ctx.gpr[17] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AE9718;
      }
      goto L_08AE96D8;
    }
L_08AE96D8:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-25320)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE9758;
      }
      goto L_08AE96EC;
    }
L_08AE96EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AE9848;
      }
      goto L_08AE96F4;
    }
L_08AE96F4:
    ctx.gpr[31] = (0x08AE96FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 560u, 0x08AE75B8u>(ctx, &aot_mem) && ctx.pc == 0x08AE96FCu) goto L_08AE96FC;
    return;
L_08AE96FC:
    ctx.gpr[31] = (0x08AE9704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 603u, 0x08AE79F0u>(ctx, &aot_mem) && ctx.pc == 0x08AE9704u) goto L_08AE9704;
    return;
L_08AE9704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-25320)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-25320), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(679)));
      if (branch_taken) {
          goto L_08AE984C;
      }
      goto L_08AE9718;
    }
L_08AE9718:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AE9724u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6332));
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 475u, 0x08AE6F60u>(ctx, &aot_mem) && ctx.pc == 0x08AE9724u) goto L_08AE9724;
    return;
L_08AE9724:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9BBC;
      }
      goto L_08AE972C;
    }
L_08AE972C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AE9738u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6356));
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 475u, 0x08AE6F60u>(ctx, &aot_mem) && ctx.pc == 0x08AE9738u) goto L_08AE9738;
    return;
L_08AE9738:
    ctx.gpr[31] = (0x08AE9740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 754u, 0x0891B6F8u>(ctx, &aot_mem) && ctx.pc == 0x08AE9740u) goto L_08AE9740;
    return;
L_08AE9740:
    ctx.gpr[31] = (0x08AE9748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 616u, 0x08AE7BA8u>(ctx, &aot_mem) && ctx.pc == 0x08AE9748u) goto L_08AE9748;
    return;
L_08AE9748:
    ctx.gpr[31] = (0x08AE9750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 756u, 0x0891B71Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9750u) goto L_08AE9750;
    return;
L_08AE9750:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9BBC;
      }
      goto L_08AE9758;
    }
L_08AE9758:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9778;
      }
      goto L_08AE9764;
    }
L_08AE9764:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9788;
      }
      goto L_08AE9770;
    }
L_08AE9770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9848;
      }
      goto L_08AE9778;
    }
L_08AE9778:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-25320), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(679)));
      if (branch_taken) {
          goto L_08AE984C;
      }
      goto L_08AE9788;
    }
L_08AE9788:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-25320), 0u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5904));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6528));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AE981C;
      }
      goto L_08AE97A8;
    }
L_08AE97A8:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-25176));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08AE97B4;
L_08AE97B4:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] & 2u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE97D8;
      }
      goto L_08AE97C8;
    }
L_08AE97C8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
      if (branch_taken) {
          goto L_08AE97D8;
      }
      goto L_08AE97D8;
    }
L_08AE97D8:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] & 2u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE97FC;
      }
      goto L_08AE97EC;
    }
L_08AE97EC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[6] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
      if (branch_taken) {
          goto L_08AE97FC;
      }
      goto L_08AE97FC;
    }
L_08AE97FC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE980C;
      }
      goto L_08AE9804;
    }
L_08AE9804:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE982C;
      }
      goto L_08AE980C;
    }
L_08AE980C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AE97B4;
      }
      goto L_08AE981C;
    }
L_08AE981C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE982C;
      }
      goto L_08AE9824;
    }
L_08AE9824:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE982C;
      }
      goto L_08AE982C;
    }
L_08AE982C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9840;
      }
      goto L_08AE9834;
    }
L_08AE9834:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AE9840u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 155u, 0x08864B18u>(ctx, &aot_mem) && ctx.pc == 0x08AE9840u) goto L_08AE9840;
    return;
L_08AE9840:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(679)));
      if (branch_taken) {
          goto L_08AE984C;
      }
      goto L_08AE9848;
    }
L_08AE9848:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(679)));
    goto L_08AE984C;
L_08AE984C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE9BBC;
      }
      goto L_08AE9854;
    }
L_08AE9854:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8120)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5896)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08AE9878u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5896), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 587u, 0x08AE78A0u>(ctx, &aot_mem) && ctx.pc == 0x08AE9878u) goto L_08AE9878;
    return;
L_08AE9878:
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-25308)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25312)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[23] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE9944;
      }
      goto L_08AE9898;
    }
L_08AE9898:
    ctx.gpr[6] = (2278u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11576));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9944;
      }
      goto L_08AE98B8;
    }
L_08AE98B8:
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
      if (branch_taken) {
          goto L_08AE98F8;
      }
      goto L_08AE98C8;
    }
L_08AE98C8:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08AE98D4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE98D4u) goto L_08AE98D4;
    return;
L_08AE98D4:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE98EC;
      }
      goto L_08AE98E0;
    }
L_08AE98E0:
    ctx.gpr[31] = (0x08AE98E8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE98E8u) goto L_08AE98E8;
    return;
L_08AE98E8:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_08AE98EC;
L_08AE98EC:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24444), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-25308)));
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    goto L_08AE98F8;
L_08AE98F8:
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11064));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE990Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE990Cu) goto L_08AE990C;
    return;
L_08AE990C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-25308)));
    ctx.gpr[5] = (2278u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11832));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AE9938u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 256u, 0x0887966Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9938u) goto L_08AE9938;
    return;
L_08AE9938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-25308)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-25308), ctx.gpr[4]);
    goto L_08AE9944;
L_08AE9944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-25296)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (2233u << 16u);
      if (branch_taken) {
          goto L_08AE9994;
      }
      goto L_08AE9958;
    }
L_08AE9958:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-18952));
    goto L_08AE995C;
L_08AE995C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 120 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 130 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE9980;
      }
      goto L_08AE9970;
    }
L_08AE9970:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9980;
      }
      goto L_08AE9978;
    }
L_08AE9978:
    ctx.gpr[31] = (0x08AE9980u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 518u, 0x08AE71F4u>(ctx, &aot_mem) && ctx.pc == 0x08AE9980u) goto L_08AE9980;
    return;
L_08AE9980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-25296)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE995C;
      }
      goto L_08AE9994;
    }
L_08AE9994:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25531)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9BBC;
      }
      goto L_08AE99A4;
    }
L_08AE99A4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5904));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6528));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AE9A34;
      }
      goto L_08AE99C0;
    }
L_08AE99C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25176));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08AE99CC;
L_08AE99CC:
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (ctx.gpr[9] & 2u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE99F0;
      }
      goto L_08AE99E0;
    }
L_08AE99E0:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[7] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 24u));
      if (branch_taken) {
          goto L_08AE99F0;
      }
      goto L_08AE99F0;
    }
L_08AE99F0:
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (ctx.gpr[9] & 2u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9A14;
      }
      goto L_08AE9A04;
    }
L_08AE9A04:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[8] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 24u));
      if (branch_taken) {
          goto L_08AE9A14;
      }
      goto L_08AE9A14;
    }
L_08AE9A14:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE9A24;
      }
      goto L_08AE9A1C;
    }
L_08AE9A1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE9A44;
      }
      goto L_08AE9A24;
    }
L_08AE9A24:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AE99CC;
      }
      goto L_08AE9A34;
    }
L_08AE9A34:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE9A44;
      }
      goto L_08AE9A3C;
    }
L_08AE9A3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE9A44;
      }
      goto L_08AE9A44;
    }
L_08AE9A44:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AE9BBC;
      }
      goto L_08AE9A4C;
    }
L_08AE9A4C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE9BBC;
      }
      goto L_08AE9A80;
    }
L_08AE9A80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(684)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AE9BBC;
      }
      goto L_08AE9A8C;
    }
L_08AE9A8C:
    ctx.gpr[31] = (0x08AE9A94u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 162u, 0x088ED294u>(ctx, &aot_mem) && ctx.pc == 0x08AE9A94u) goto L_08AE9A94;
    return;
L_08AE9A94:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1000));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE9AD0;
      }
      goto L_08AE9AA4;
    }
L_08AE9AA4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6840)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9AD0;
      }
      goto L_08AE9AB4;
    }
L_08AE9AB4:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6840), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08AE9AD0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 401u, 0x088EE920u>(ctx, &aot_mem) && ctx.pc == 0x08AE9AD0u) goto L_08AE9AD0;
    return;
L_08AE9AD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-25276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE9B74;
      }
      goto L_08AE9ADC;
    }
L_08AE9ADC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-25280)));
      if (branch_taken) {
          goto L_08AE9B24;
      }
      goto L_08AE9B0C;
    }
L_08AE9B0C:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE9B44;
      }
      goto L_08AE9B24;
    }
L_08AE9B24:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[5] = (32768u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    goto L_08AE9B44;
L_08AE9B44:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25280), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE9BBC;
      }
      goto L_08AE9B4C;
    }
L_08AE9B4C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(512), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[31] = (0x08AE9B68u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(683), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 579u, 0x08AE77E8u>(ctx, &aot_mem) && ctx.pc == 0x08AE9B68u) goto L_08AE9B68;
    return;
L_08AE9B68:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-25276), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25280), 0u);
      if (branch_taken) {
          goto L_08AE9BBC;
      }
      goto L_08AE9B74;
    }
L_08AE9B74:
    ctx.gpr[31] = (0x08AE9B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 69u, 0x088247D8u>(ctx, &aot_mem) && ctx.pc == 0x08AE9B7Cu) goto L_08AE9B7C;
    return;
L_08AE9B7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9BBC;
      }
      goto L_08AE9B84;
    }
L_08AE9B84:
    ctx.gpr[31] = (0x08AE9B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 615u, 0x08AE7BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AE9B8Cu) goto L_08AE9B8C;
    return;
L_08AE9B8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9BBC;
      }
      goto L_08AE9B94;
    }
L_08AE9B94:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-25276), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1000u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25280), ctx.gpr[4]);
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08AE9BBCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 401u, 0x088EE920u>(ctx, &aot_mem) && ctx.pc == 0x08AE9BBCu) goto L_08AE9BBC;
    return;
L_08AE9BBC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE9BEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25564)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25568)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2230u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-25540)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-25560), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    ctx.gpr[11] = (2230u << 16u);
    ctx.gpr[10] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-25552), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-25556), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2230u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[3] = (2230u << 16u);
    ctx.gpr[13] = (2278u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-25548), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[12] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[13] + static_cast<std::uint32_t>(7584));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25544), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE9C90u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-25536), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 414u, 0x08839C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9C90u) goto L_08AE9C90;
    return;
L_08AE9C90:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AE9C9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25272));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x08AE9C9Cu) goto L_08AE9C9C;
    return;
L_08AE9C9C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE9CA8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5880), 0u);
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5876), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE9CBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[6] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5880)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 96 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AE9E9C;
      }
      goto L_08AE9D6C;
    }
L_08AE9D6C:
    ctx.gpr[7] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (2278u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(15952));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08AE9DAC;
      }
      goto L_08AE9DA4;
    }
L_08AE9DA4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08AE9DB0;
      }
      goto L_08AE9DAC;
    }
L_08AE9DAC:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AE9DB0;
L_08AE9DB0:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          goto L_08AE9DC8;
      }
      goto L_08AE9DC0;
    }
L_08AE9DC0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08AE9DCC;
      }
      goto L_08AE9DC8;
    }
L_08AE9DC8:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AE9DCC;
L_08AE9DCC:
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          goto L_08AE9DE4;
      }
      goto L_08AE9DDC;
    }
L_08AE9DDC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08AE9DE4;
      }
      goto L_08AE9DE4;
    }
L_08AE9DE4:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08AE9DFC;
      }
      goto L_08AE9DF4;
    }
L_08AE9DF4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08AE9DFC;
      }
      goto L_08AE9DFC;
    }
L_08AE9DFC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5880)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(40));
    ctx.gpr[8] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[8] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5880)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[8] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5880)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5880)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5880), ctx.gpr[4]);
    goto L_08AE9E9C;
L_08AE9E9C:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE9EA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25252)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25256)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[8] = (ctx.gpr[5] | 14571u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25228)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-25248), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    ctx.gpr[2] = (2230u << 16u);
    ctx.gpr[11] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-25240), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-25244), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[10] = (15744u << 16u);
    ctx.gpr[3] = (2230u << 16u);
    ctx.gpr[7] = (2278u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[12] = (2230u << 16u);
    ctx.gpr[14] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(15952));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25236), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[13] = (2230u << 16u);
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[6] = (0u | 56u);
    ctx.gpr[7] = (ctx.gpr[14] + static_cast<std::uint32_t>(-18780));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-25232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE9F58u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-25224), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x08AE9F58u) goto L_08AE9F58;
    return;
L_08AE9F58:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE9F64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (512u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[31] = (0x08AE9F88u);
    ctx.gpr[16] = (ctx.gpr[5] + 0u);
    ctx.pc = 0x08B0BCF4u;
    return;
L_08AE9F88:
    ctx.gpr[5] = (3u << 16u);
    ctx.gpr[31] = (0x08AE9F94u);
    ctx.gpr[4] = (ctx.gpr[5] | 771u);
    ctx.pc = 0x08B0BCFCu;
    return;
L_08AE9F94:
    ctx.gpr[3] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[3] + static_cast<std::uint32_t>(-6256));
    ctx.gpr[3] = (2229u << 16u);
    ctx.gpr[2] = (2223u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[12] = (0u << 16u);
    ctx.gpr[6] = (ctx.gpr[3] + static_cast<std::uint32_t>(-28752));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-24544));
    ctx.gpr[9] = (0u + 0u);
    ctx.gpr[10] = (ctx.gpr[11] + static_cast<std::uint32_t>(-28748));
    ctx.gpr[13] = (ctx.gpr[12] + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (4u << 16u);
      if (branch_taken) {
          goto L_08AE9FD0;
      }
      goto L_08AE9FC8;
    }
L_08AE9FC8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28752)));
    ctx.gpr[7] = (ctx.gpr[8] << 10u);
    goto L_08AE9FD0;
L_08AE9FD0:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[8] = (32768u << 16u);
      if (branch_taken) {
          goto L_08AE9FE0;
      }
      goto L_08AE9FDC;
    }
L_08AE9FDC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-28748)));
    goto L_08AE9FE0;
L_08AE9FE0:
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[10] = (32768u << 16u);
      if (branch_taken) {
          goto L_08AE9FF0;
      }
      goto L_08AE9FE8;
    }
L_08AE9FE8:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[11] | ctx.gpr[10]);
    goto L_08AE9FF0;
L_08AE9FF0:
    ctx.gpr[31] = (0x08AE9FF8u);
    // nop
    ctx.pc = 0x08B0BBA4u;
    return;
L_08AE9FF8:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    ctx.gpr[5] = (ctx.gpr[17] + 0u);
    ctx.gpr[31] = (0x08AEA008u);
    ctx.gpr[6] = (ctx.gpr[16] + 0u);
    ctx.pc = 0x08B0BBACu;
    return;
L_08AEA008:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA020:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(996), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(992), ctx.gpr[20]);
    ctx.gpr[20] = (0u + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(988), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(984), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(976), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(980), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AEA090;
      }
      goto L_08AEA058;
    }
L_08AEA058:
    ctx.gpr[17] = (ctx.gpr[29] + 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08AEA060;
L_08AEA060:
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08AEA06Cu);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08AEA06Cu) goto L_08AEA06C;
    return;
L_08AEA06C:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[16] - ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 20 ? 1u : 0u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AEA090;
      }
      goto L_08AEA088;
    }
L_08AEA088:
    if (ctx.gpr[2] != 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
        goto L_08AEA060;
    }
    goto L_08AEA090;
L_08AEA090:
    ctx.gpr[7] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (0u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[29]);
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08AEA12C;
      }
      goto L_08AEA0A8;
    }
L_08AEA0A8:
    ctx.gpr[31] = (0x08AEA0B0u);
    ctx.gpr[4] = (ctx.gpr[21] + 0u);
    ctx.pc = 0x00000000u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEA0B0u) goto L_08AEA0B0;
    return;
L_08AEA0B0:
    ctx.gpr[8] = (2223u << 16u);
    ctx.gpr[31] = (0x08AEA0BCu);
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(-24732));
    ctx.pc = 0x08B0BD2Cu;
    return;
L_08AEA0BC:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    ctx.gpr[31] = (0x08AEA0C8u);
    ctx.gpr[5] = (ctx.gpr[21] + 0u);
    ctx.pc = 0x00000000u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEA0C8u) goto L_08AEA0C8;
    return;
L_08AEA0C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AEA0FC;
      }
      goto L_08AEA0D0;
    }
L_08AEA0D0:
    aot_mem.aot_store32(ctx.gpr[26] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.gpr[21] = (2223u << 16u);
    ctx.gpr[31] = (0x08AEA0E0u);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(21684));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 230u, 0x08AECB78u>(ctx, &aot_mem) && ctx.pc == 0x08AEA0E0u) goto L_08AEA0E0;
    return;
L_08AEA0E0:
    ctx.gpr[31] = (0x08AEA0E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 254u, 0x08AF54ACu>(ctx, &aot_mem) && ctx.pc == 0x08AEA0E8u) goto L_08AEA0E8;
    return;
L_08AEA0E8:
    ctx.gpr[4] = (ctx.gpr[20] + 0u);
    ctx.gpr[31] = (0x08AEA0F4u);
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 197u, 0x089C0DA8u>(ctx, &aot_mem) && ctx.pc == 0x08AEA0F4u) goto L_08AEA0F4;
    return;
L_08AEA0F4:
    ctx.gpr[31] = (0x08AEA0FCu);
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 242u, 0x08AECC58u>(ctx, &aot_mem) && ctx.pc == 0x08AEA0FCu) goto L_08AEA0FC;
    return;
L_08AEA0FC:
    ctx.gpr[31] = (0x08AEA104u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B0BBB4u;
    return;
L_08AEA104:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(996)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(992)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(988)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(984)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(980)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(976)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA12C:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(616));
    ctx.gpr[10] = (ctx.gpr[21] + static_cast<std::uint32_t>(708));
    ctx.gpr[9] = (ctx.gpr[21] + static_cast<std::uint32_t>(800));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.gpr[2] = (ctx.gpr[21] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), 0u);
    goto L_08AEA154;
L_08AEA154:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AEA154;
      }
      goto L_08AEA164;
    }
L_08AEA164:
    ctx.gpr[12] = (2227u << 16u);
    ctx.gpr[11] = (ctx.gpr[12] + static_cast<std::uint32_t>(-6244));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[11]);
    ctx.gpr[6] = (ctx.gpr[21] + static_cast<std::uint32_t>(124));
    ctx.gpr[5] = (0u + 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(88), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(92), 0u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    goto L_08AEA1A8;
L_08AEA1A8:
    ctx.gpr[14] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (ctx.gpr[5] < static_cast<std::uint32_t>(36) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    aot_mem.aot_store8(ctx.gpr[14] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AEA1A8;
      }
      goto L_08AEA1BC;
    }
L_08AEA1BC:
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(13070));
    ctx.gpr[24] = (0u + static_cast<std::uint32_t>(-21555));
    ctx.gpr[15] = (0u + static_cast<std::uint32_t>(11));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(4660));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-6547));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-8468));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(5));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(168), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(172), ctx.gpr[9]);
    ctx.gpr[5] = (0u + 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(276));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(ctx.gpr[25]));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(178), static_cast<std::uint16_t>(ctx.gpr[24]));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(188), static_cast<std::uint16_t>(ctx.gpr[15]));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(180), static_cast<std::uint16_t>(ctx.gpr[19]));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(182), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(184), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(186), static_cast<std::uint16_t>(ctx.gpr[16]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(160), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(192), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(196), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(200), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(204), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(208), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(212), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(252), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(256), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(260), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(264), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(268), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(272), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(276), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(280), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(284), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(288), 0u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(216), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(248), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(328), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(332), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(336), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(340), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(596), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(468), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(600), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(604), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(608), 0u);
    ctx.gpr[31] = (0x08AEA288u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(612), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEA288u) goto L_08AEA288;
    return;
L_08AEA288:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(892), 0u);
    goto L_08AEA0D0;
L_08AEA290:
    ctx.gpr[3] = (2230u << 16u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[3] + static_cast<std::uint32_t>(-25184));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08AEA2B0;
      }
      goto L_08AEA2A4;
    }
L_08AEA2A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-25184)));
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08AEA2B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEA2B0u) goto L_08AEA2B0;
    return;
L_08AEA2B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA2C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AEA3E0;
      }
      goto L_08AEA2E4;
    }
L_08AEA2E4:
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AEA3C8;
      }
      goto L_08AEA2F0;
    }
L_08AEA2F0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AEA3B8;
      }
      goto L_08AEA2F8;
    }
L_08AEA2F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08AEA358;
      }
      goto L_08AEA300;
    }
L_08AEA300:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AEA324;
      }
      goto L_08AEA30C;
    }
L_08AEA30C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AEA3A8;
      }
      goto L_08AEA318;
    }
L_08AEA318:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[8];
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AEA324;
      }
      goto L_08AEA320;
    }
L_08AEA320:
    ctx.gpr[17] = (ctx.gpr[16] + 0u);
    goto L_08AEA324;
L_08AEA324:
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[9];
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AEA398;
      }
      goto L_08AEA330;
    }
L_08AEA330:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AEA380;
      }
      goto L_08AEA338;
    }
L_08AEA338:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08AEA370;
      }
      goto L_08AEA340;
    }
L_08AEA340:
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    goto L_08AEA344;
L_08AEA344:
    ctx.gpr[6] = (ctx.gpr[18] + 0u);
    goto L_08AEA348;
L_08AEA348:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    ctx.gpr[31] = (0x08AEA358u);
    ctx.gpr[8] = (ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0BD8Cu;
    return;
L_08AEA358:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA370:
    ctx.gpr[31] = (0x08AEA378u);
    // nop
    ctx.pc = 0x08B0BD1Cu;
    return;
L_08AEA378:
    ctx.gpr[6] = (ctx.gpr[18] + 0u);
    goto L_08AEA348;
L_08AEA380:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
        goto L_08AEA344;
    }
    goto L_08AEA388;
L_08AEA388:
    ctx.gpr[31] = (0x08AEA390u);
    // nop
    ctx.pc = 0x08B0BD0Cu;
    return;
L_08AEA390:
    ctx.gpr[6] = (ctx.gpr[18] + 0u);
    goto L_08AEA348;
L_08AEA398:
    ctx.gpr[31] = (0x08AEA3A0u);
    // nop
    ctx.pc = 0x08B0BD14u;
    return;
L_08AEA3A0:
    ctx.gpr[6] = (ctx.gpr[18] + 0u);
    goto L_08AEA348;
L_08AEA3A8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_08AEA324;
      }
      goto L_08AEA3B0;
    }
L_08AEA3B0:
    ctx.gpr[17] = (ctx.gpr[16] + 0u);
    goto L_08AEA324;
L_08AEA3B8:
    ctx.gpr[31] = (0x08AEA3C0u);
    // nop
    ctx.pc = 0x08B0BD1Cu;
    return;
L_08AEA3C0:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    goto L_08AEA2F8;
L_08AEA3C8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA2F8;
      }
      goto L_08AEA3D0;
    }
L_08AEA3D0:
    ctx.gpr[31] = (0x08AEA3D8u);
    // nop
    ctx.pc = 0x08B0BD0Cu;
    return;
L_08AEA3D8:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    goto L_08AEA2F8;
L_08AEA3E0:
    ctx.gpr[31] = (0x08AEA3E8u);
    // nop
    ctx.pc = 0x08B0BD14u;
    return;
L_08AEA3E8:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    goto L_08AEA2F8;
L_08AEA3F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (0u << 16u);
    ctx.gpr[3] = (ctx.gpr[4] + static_cast<std::uint32_t>(0));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AEA48C;
      }
      goto L_08AEA410;
    }
L_08AEA410:
    ctx.gpr[31] = (0x08AEA418u);
    // nop
    ctx.pc = 0x00000000u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEA418u) goto L_08AEA418;
    return;
L_08AEA418:
    ctx.gpr[31] = (0x08AEA420u);
    ctx.gpr[16] = (ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 914u, 0x08AEF3D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEA420u) goto L_08AEA420;
    return;
L_08AEA420:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[3] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6240));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    ctx.gpr[4] = (ctx.gpr[3] + static_cast<std::uint32_t>(-6232));
      if (branch_taken) {
          goto L_08AEA444;
      }
      goto L_08AEA434;
    }
L_08AEA434:
    ctx.gpr[31] = (0x08AEA43Cu);
    // nop
    ctx.pc = 0x08B0BD04u;
    return;
L_08AEA43C:
    ctx.gpr[31] = (0x08AEA444u);
    ctx.gpr[4] = (ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0BBB4u;
    return;
L_08AEA444:
    ctx.gpr[31] = (0x08AEA44Cu);
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
    goto L_08AEA924;
L_08AEA44C:
    ctx.gpr[31] = (0x08AEA454u);
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
    ctx.pc = 0x00000000u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEA454u) goto L_08AEA454;
    return;
L_08AEA454:
    ctx.gpr[31] = (0x08AEA45Cu);
    ctx.gpr[16] = (ctx.gpr[2] + 0u);
    ctx.pc = 0x08B0BD24u;
    return;
L_08AEA45C:
    ctx.gpr[5] = (0u + 0u);
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[7] = (ctx.gpr[29] + 0u);
    ctx.gpr[8] = (0u + 0u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08AEA48C;
      }
      goto L_08AEA474;
    }
L_08AEA474:
    ctx.gpr[31] = (0x08AEA47Cu);
    // nop
    ctx.pc = 0x08B0BD44u;
    return;
L_08AEA47C:
    ctx.gpr[31] = (0x08AEA484u);
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
    ctx.pc = 0x08B0BD4Cu;
    return;
L_08AEA484:
    ctx.gpr[31] = (0x08AEA48Cu);
    ctx.gpr[4] = (ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0BBB4u;
    return;
L_08AEA48C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (0u + 0u);
    ctx.gpr[31] = (0x08AEA49Cu);
    ctx.gpr[6] = (0u + 0u);
    ctx.pc = 0x08B0BD54u;
    return;
L_08AEA49C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA4B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6832)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AEA540;
      }
      goto L_08AEA4D4;
    }
L_08AEA4D4:
    ctx.gpr[3] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[3] + static_cast<std::uint32_t>(-28756));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (1u << 16u);
      if (branch_taken) {
          goto L_08AEA4F4;
      }
      goto L_08AEA4E4;
    }
L_08AEA4E4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28756)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (ctx.gpr[2] << 10u);
      if (branch_taken) {
          goto L_08AEA598;
      }
      goto L_08AEA4F0;
    }
L_08AEA4F0:
    ctx.gpr[17] = (1u << 16u);
    goto L_08AEA4F4;
L_08AEA4F4:
    ctx.gpr[2] = (2227u << 16u);
    goto L_08AEA4F8;
L_08AEA4F8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-6188));
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[7] = (ctx.gpr[17] + 0u);
    ctx.gpr[31] = (0x08AEA510u);
    ctx.gpr[8] = (0u + 0u);
    ctx.pc = 0x08B0BCDCu;
    return;
L_08AEA510:
    ctx.gpr[3] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-6824), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEA540;
      }
      goto L_08AEA520;
    }
L_08AEA520:
    ctx.gpr[31] = (0x08AEA528u);
    // nop
    ctx.pc = 0x08B0BCECu;
    return;
L_08AEA528:
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6828), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6836), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6832), ctx.gpr[2]);
    goto L_08AEA540;
L_08AEA540:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6832)));
    goto L_08AEA544;
L_08AEA544:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08AEA580;
    }
    goto L_08AEA54C;
L_08AEA54C:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6836)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[8] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AEA580;
      }
      goto L_08AEA564;
    }
L_08AEA564:
    ctx.gpr[11] = (2232u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-6828)));
    ctx.gpr[9] = (ctx.gpr[10] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AEA584;
      }
      goto L_08AEA578;
    }
L_08AEA578:
    ctx.gpr[2] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6836), ctx.gpr[4]);
    goto L_08AEA580;
L_08AEA580:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AEA584;
L_08AEA584:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA598:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6832)));
        goto L_08AEA544;
    }
    goto L_08AEA5A0;
L_08AEA5A0:
    ctx.gpr[2] = (2227u << 16u);
    goto L_08AEA4F8;
L_08AEA5A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08AEA63C;
      }
      goto L_08AEA5C8;
    }
L_08AEA5C8:
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AEA624;
      }
      goto L_08AEA5D4;
    }
L_08AEA5D4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AEA614;
      }
      goto L_08AEA5DC;
    }
L_08AEA5DC:
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    goto L_08AEA5E0;
L_08AEA5E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08AEA5FC;
      }
      goto L_08AEA5E8;
    }
L_08AEA5E8:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08AEA5F8u);
    ctx.gpr[6] = (ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0BD74u;
    return;
L_08AEA5F8:
    ctx.gpr[3] = (ctx.gpr[2] + 0u);
    goto L_08AEA5FC;
L_08AEA5FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA614:
    ctx.gpr[31] = (0x08AEA61Cu);
    // nop
    ctx.pc = 0x08B0BD1Cu;
    return;
L_08AEA61C:
    // nop
    goto L_08AEA5E0;
L_08AEA624:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
        goto L_08AEA5E0;
    }
    goto L_08AEA62C;
L_08AEA62C:
    ctx.gpr[31] = (0x08AEA634u);
    // nop
    ctx.pc = 0x08B0BD0Cu;
    return;
L_08AEA634:
    // nop
    goto L_08AEA5E0;
L_08AEA63C:
    ctx.gpr[31] = (0x08AEA644u);
    // nop
    ctx.pc = 0x08B0BD14u;
    return;
L_08AEA644:
    // nop
    goto L_08AEA5E0;
L_08AEA64C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08AEA6E0;
      }
      goto L_08AEA66C;
    }
L_08AEA66C:
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AEA6C8;
      }
      goto L_08AEA678;
    }
L_08AEA678:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AEA6B8;
      }
      goto L_08AEA680;
    }
L_08AEA680:
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    goto L_08AEA684;
L_08AEA684:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08AEA6A0;
      }
      goto L_08AEA68C;
    }
L_08AEA68C:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08AEA69Cu);
    ctx.gpr[6] = (ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0BD84u;
    return;
L_08AEA69C:
    ctx.gpr[3] = (ctx.gpr[2] + 0u);
    goto L_08AEA6A0;
L_08AEA6A0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA6B8:
    ctx.gpr[31] = (0x08AEA6C0u);
    // nop
    ctx.pc = 0x08B0BD1Cu;
    return;
L_08AEA6C0:
    // nop
    goto L_08AEA684;
L_08AEA6C8:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
        goto L_08AEA684;
    }
    goto L_08AEA6D0;
L_08AEA6D0:
    ctx.gpr[31] = (0x08AEA6D8u);
    // nop
    ctx.pc = 0x08B0BD0Cu;
    return;
L_08AEA6D8:
    // nop
    goto L_08AEA684;
L_08AEA6E0:
    ctx.gpr[31] = (0x08AEA6E8u);
    // nop
    ctx.pc = 0x08B0BD14u;
    return;
L_08AEA6E8:
    // nop
    goto L_08AEA684;
L_08AEA6F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08AEA764;
      }
      goto L_08AEA700;
    }
L_08AEA700:
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AEA74C;
      }
      goto L_08AEA70C;
    }
L_08AEA70C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AEA73C;
      }
      goto L_08AEA714;
    }
L_08AEA714:
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    goto L_08AEA718;
L_08AEA718:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08AEA72C;
      }
      goto L_08AEA720;
    }
L_08AEA720:
    ctx.gpr[31] = (0x08AEA728u);
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    ctx.pc = 0x08B0BDECu;
    return;
L_08AEA728:
    ctx.gpr[3] = (ctx.gpr[2] + 0u);
    goto L_08AEA72C;
L_08AEA72C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA73C:
    ctx.gpr[31] = (0x08AEA744u);
    // nop
    ctx.pc = 0x08B0BD1Cu;
    return;
L_08AEA744:
    // nop
    goto L_08AEA718;
L_08AEA74C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
        goto L_08AEA718;
    }
    goto L_08AEA754;
L_08AEA754:
    ctx.gpr[31] = (0x08AEA75Cu);
    // nop
    ctx.pc = 0x08B0BD0Cu;
    return;
L_08AEA75C:
    // nop
    goto L_08AEA718;
L_08AEA764:
    ctx.gpr[31] = (0x08AEA76Cu);
    // nop
    ctx.pc = 0x08B0BD14u;
    return;
L_08AEA76C:
    // nop
    goto L_08AEA718;
L_08AEA774:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(8192));
    ctx.gpr[2] = (0u + 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA784:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6824)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[4] = (ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08AEA7B0;
      }
      goto L_08AEA7A0;
    }
L_08AEA7A0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA7B0:
    ctx.gpr[31] = (0x08AEA7B8u);
    // nop
    ctx.pc = 0x08B0BCE4u;
    return;
L_08AEA7B8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6824), 0u);
    goto L_08AEA7A0;
L_08AEA7C0:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24164)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA7CC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[29]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[27]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[29]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[31]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA830:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[29] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[21] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[23] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.fpr[25] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[27] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.fpr[29] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[31] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_08AEA894;
      }
      goto L_08AEA890;
    }
L_08AEA890:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1));
    goto L_08AEA894;
L_08AEA894:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA89C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEA8ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 528u, 0x08AF68D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEA8ACu) goto L_08AEA8AC;
    return;
L_08AEA8AC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AEA8C8;
      }
      goto L_08AEA8B4;
    }
L_08AEA8B4:
    ctx.gpr[5] = (ctx.gpr[3] + 0u);
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[7] = (0u | 61505u);
    ctx.gpr[31] = (0x08AEA8C8u);
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61FCu>(ctx, &aot_mem) && ctx.pc == 0x08AEA8C8u) goto L_08AEA8C8;
    return;
L_08AEA8C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA8D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AEA904;
      }
      goto L_08AEA8F8;
    }
L_08AEA8F8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AEA904u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AEA8D8;
L_08AEA904:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AEA910u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 661u, 0x08AF27FCu>(ctx, &aot_mem) && ctx.pc == 0x08AEA910u) goto L_08AEA910;
    return;
L_08AEA910:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA924:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-24164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEAA18;
      }
      goto L_08AEA94C;
    }
L_08AEA94C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEA9A4;
      }
      goto L_08AEA958;
    }
L_08AEA958:
    ctx.gpr[18] = (0u | 0u);
    goto L_08AEA95C;
L_08AEA95C:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08AEA98C;
    }
    goto L_08AEA96C;
L_08AEA96C:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08AEA970;
L_08AEA970:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AEA97Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 661u, 0x08AF27FCu>(ctx, &aot_mem) && ctx.pc == 0x08AEA97Cu) goto L_08AEA97C;
    return;
L_08AEA97C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AEA970;
      }
      goto L_08AEA984;
    }
L_08AEA984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AEA98C;
L_08AEA98C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AEA95C;
      }
      goto L_08AEA998;
    }
L_08AEA998:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AEA9A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 661u, 0x08AF27FCu>(ctx, &aot_mem) && ctx.pc == 0x08AEA9A4u) goto L_08AEA9A4;
    return;
L_08AEA9A4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(332));
      if (branch_taken) {
          goto L_08AEA9D8;
      }
      goto L_08AEA9B0;
    }
L_08AEA9B0:
    if (ctx.gpr[18] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
        goto L_08AEA9DC;
    }
    goto L_08AEA9B8;
L_08AEA9B8:
    if (ctx.gpr[18] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
        goto L_08AEA9DC;
    }
    goto L_08AEA9C0;
L_08AEA9C0:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AEA9C4;
L_08AEA9C4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AEA9D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 661u, 0x08AF27FCu>(ctx, &aot_mem) && ctx.pc == 0x08AEA9D0u) goto L_08AEA9D0;
    return;
L_08AEA9D0:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AEA9C4;
      }
      goto L_08AEA9D8;
    }
L_08AEA9D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    goto L_08AEA9DC;
L_08AEA9DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEA9EC;
      }
      goto L_08AEA9E4;
    }
L_08AEA9E4:
    ctx.gpr[31] = (0x08AEA9ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 661u, 0x08AF27FCu>(ctx, &aot_mem) && ctx.pc == 0x08AEA9ECu) goto L_08AEA9EC;
    return;
L_08AEA9EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEAA18;
      }
      goto L_08AEA9F8;
    }
L_08AEA9F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AEAA04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEAA04u) goto L_08AEAA04;
    return;
L_08AEAA04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEAA18;
      }
      goto L_08AEAA10;
    }
L_08AEAA10:
    ctx.gpr[31] = (0x08AEAA18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AEA8D8;
L_08AEAA18:
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
L_08AEAA34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEAA64;
      }
      goto L_08AEAA50;
    }
L_08AEAA50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (2230u << 16u);
        goto L_08AEAA90;
    }
    goto L_08AEAA5C;
L_08AEAA5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08AEAA9C;
      }
      goto L_08AEAA64;
    }
L_08AEAA64:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24164)));
    ctx.gpr[31] = (0x08AEAA78u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21964));
    goto L_08AEB3FC;
L_08AEAA78:
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
L_08AEAA90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24164)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    goto L_08AEAA9C;
L_08AEAA9C:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08AEAAB0;
    }
    goto L_08AEAAA4;
L_08AEAAA4:
    ctx.gpr[31] = (0x08AEAAACu);
    // nop
    goto L_08AEAD28;
L_08AEAAAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08AEAAB0;
L_08AEAAB0:
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEAB18;
      }
      goto L_08AEAABC;
    }
L_08AEAABC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEAB18;
      }
      goto L_08AEAAC8;
    }
L_08AEAAC8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_08AEAAE8;
    }
    goto L_08AEAAE8;
L_08AEAAE8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AEAB18;
      }
      goto L_08AEAAF0;
    }
L_08AEAAF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AEAB04u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEAB04u) goto L_08AEAB04;
    return;
L_08AEAB04:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AEAB34;
      }
      goto L_08AEAB10;
    }
L_08AEAB10:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AEAAF0;
      }
      goto L_08AEAB18;
    }
L_08AEAB18:
    ctx.gpr[2] = (0u | 0u);
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
L_08AEAB34:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
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
L_08AEAB5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AEABEC;
      }
      goto L_08AEAB90;
    }
L_08AEAB90:
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AEAB9C;
L_08AEAB9C:
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    if (ctx.gpr[20] != 0u) {
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AEAC1C;
    }
    goto L_08AEABA8;
L_08AEABA8:
    ctx.gpr[31] = (0x08AEABB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AEB5A8;
L_08AEABB0:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AEAC14;
    }
    goto L_08AEABB8;
L_08AEABB8:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AEABEC;
      }
      goto L_08AEABC0;
    }
L_08AEABC0:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEABEC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEAC14:
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AEAC1C;
L_08AEAC1C:
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
        goto L_08AEAC28;
    }
    goto L_08AEAC28;
L_08AEAC28:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x08AEAC38u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 380u, 0x08AED540u>(ctx, &aot_mem) && ctx.pc == 0x08AEAC38u) goto L_08AEAC38;
    return;
L_08AEAC38:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AEAC7C;
      }
      goto L_08AEAC44;
    }
L_08AEAC44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AEAC68u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AEAC68u) goto L_08AEAC68;
    return;
L_08AEAC68:
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AEABC0;
      }
      goto L_08AEAC74;
    }
L_08AEAC74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AEAB9C;
      }
      goto L_08AEAC7C;
    }
L_08AEAC7C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AEACA0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AEACA0u) goto L_08AEACA0;
    return;
L_08AEACA0:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEACD0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18292));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18204));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18056));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17964));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEAD28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21084));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(484));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEAD60u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_08AEACD0;
L_08AEAD60:
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(572));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AEAD74u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_08AEACD0;
L_08AEAD74:
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(660));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08AEAD88u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_08AEACD0;
L_08AEAD88:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(472), 0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(480), ctx.gpr[9]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEADA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEADB8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21964));
    goto L_08AEB3FC;
L_08AEADB8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEADC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[6] = (0u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEADF8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1062u, 0x08AEFE20u>(ctx, &aot_mem) && ctx.pc == 0x08AEADF8u) goto L_08AEADF8;
    return;
L_08AEADF8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEAE04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEAE1Cu);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08AEAE1Cu) goto L_08AEAE1C;
    return;
L_08AEAE1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AEAE40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AEAFE4;
L_08AEAE40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEAE50:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEAE84;
      }
      goto L_08AEAE64;
    }
L_08AEAE64:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEAE64;
      }
      goto L_08AEAE84;
    }
L_08AEAE84:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEAE8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AEAEDC;
      }
      goto L_08AEAEC8;
    }
L_08AEAEC8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AEAF08;
      }
      goto L_08AEAED4;
    }
L_08AEAED4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AEAF10;
      }
      goto L_08AEAEDC;
    }
L_08AEAEDC:
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
L_08AEAF08:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AEAF10;
L_08AEAF10:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AEAF68;
      }
      goto L_08AEAF24;
    }
L_08AEAF24:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AEAF30u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08AEAE50;
L_08AEAF30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] - ctx.gpr[19]);
    ctx.gpr[31] = (0x08AEAF4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AEB5A8;
L_08AEAF4C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] - ctx.gpr[22]);
      if (branch_taken) {
          goto L_08AEAFB4;
      }
      goto L_08AEAF54;
    }
L_08AEAF54:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AEAF24;
      }
      goto L_08AEAF64;
    }
L_08AEAF64:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08AEAF68;
L_08AEAF68:
    ctx.gpr[31] = (0x08AEAF70u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_08AEAE50;
L_08AEAF70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08AEAFB4:
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[2] = (ctx.lo);
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
L_08AEAFE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AEB394;
      }
      goto L_08AEB01C;
    }
L_08AEB01C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB038;
      }
      goto L_08AEB02C;
    }
L_08AEB02C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AEB04C;
    }
    goto L_08AEB038;
L_08AEB038:
    ctx.gpr[31] = (0x08AEB040u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 208u, 0x08AECA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB040u) goto L_08AEB040;
    return;
L_08AEB040:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB064;
      }
      goto L_08AEB048;
    }
L_08AEB048:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AEB04C;
L_08AEB04C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEB094;
      }
      goto L_08AEB05C;
    }
L_08AEB05C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
      if (branch_taken) {
          goto L_08AEB0FC;
      }
      goto L_08AEB064;
    }
L_08AEB064:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
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
L_08AEB094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AEB0B0;
      }
      goto L_08AEB0A0;
    }
L_08AEB0A0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AEB0A0;
      }
      goto L_08AEB0B0;
    }
L_08AEB0B0:
    ctx.gpr[5] = (0u | 1024u);
    ctx.gpr[7] = (ctx.gpr[18] < static_cast<std::uint32_t>(1024) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
        goto L_08AEB0C0;
    }
    goto L_08AEB0C0;
L_08AEB0C0:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AEB0D0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEB0D0u) goto L_08AEB0D0;
    return;
L_08AEB0D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08AEB3C4;
    }
    goto L_08AEB0DC;
L_08AEB0DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AEB094;
      }
      goto L_08AEB0F4;
    }
L_08AEB0F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB394;
      }
      goto L_08AEB0FC;
    }
L_08AEB0FC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEB240;
      }
      goto L_08AEB104;
    }
L_08AEB104:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AEB124;
      }
      goto L_08AEB114;
    }
L_08AEB114:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AEB114;
      }
      goto L_08AEB124;
    }
L_08AEB124:
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AEB16C;
      }
      goto L_08AEB130;
    }
L_08AEB130:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
        goto L_08AEB13C;
    }
    goto L_08AEB13C;
L_08AEB13C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AEB14Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AEB14Cu) goto L_08AEB14C;
    return;
L_08AEB14C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AEB220;
      }
      goto L_08AEB16C;
    }
L_08AEB16C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AEB1BC;
      }
      goto L_08AEB17C;
    }
L_08AEB17C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AEB1BC;
      }
      goto L_08AEB184;
    }
L_08AEB184:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AEB190u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AEB190u) goto L_08AEB190;
    return;
L_08AEB190:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[31] = (0x08AEB1A4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AEAA34;
L_08AEB1A4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08AEB224;
    }
    goto L_08AEB1AC;
L_08AEB1AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08AEB1B0;
L_08AEB1B0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
      if (branch_taken) {
          goto L_08AEB3CC;
      }
      goto L_08AEB1BC;
    }
L_08AEB1BC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[20] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
        goto L_08AEB1F8;
    }
    goto L_08AEB1CC;
L_08AEB1CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AEB1E0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEB1E0u) goto L_08AEB1E0;
    return;
L_08AEB1E0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[20]) <= 0) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08AEB1B0;
    }
    goto L_08AEB1EC;
L_08AEB1EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AEB224;
      }
      goto L_08AEB1F4;
    }
L_08AEB1F4:
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    goto L_08AEB1F8;
L_08AEB1F8:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AEB208u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AEB208u) goto L_08AEB208;
    return;
L_08AEB208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AEB220;
L_08AEB220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08AEB224;
L_08AEB224:
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AEB104;
      }
      goto L_08AEB238;
    }
L_08AEB238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB394;
      }
      goto L_08AEB240;
    }
L_08AEB240:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB25C;
      }
      goto L_08AEB248;
    }
L_08AEB248:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AEB248;
      }
      goto L_08AEB25C;
    }
L_08AEB25C:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AEB28C;
      }
      goto L_08AEB264;
    }
L_08AEB264:
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x08AEB270u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 380u, 0x08AED540u>(ctx, &aot_mem) && ctx.pc == 0x08AEB270u) goto L_08AEB270;
    return;
L_08AEB270:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AEB284;
      }
      goto L_08AEB27C;
    }
L_08AEB27C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AEB288;
      }
      goto L_08AEB284;
    }
L_08AEB284:
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AEB288;
L_08AEB288:
    ctx.gpr[22] = (0u | 1u);
    goto L_08AEB28C;
L_08AEB28C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[23] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
        goto L_08AEB2AC;
    }
    goto L_08AEB2AC;
L_08AEB2AC:
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AEB2FC;
      }
      goto L_08AEB2B8;
    }
L_08AEB2B8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AEB2FC;
      }
      goto L_08AEB2C4;
    }
L_08AEB2C4:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AEB2D0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AEB2D0u) goto L_08AEB2D0;
    return;
L_08AEB2D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[31] = (0x08AEB2E4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AEAA34;
L_08AEB2E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AEB364;
      }
      goto L_08AEB2EC;
    }
L_08AEB2EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08AEB2F0;
L_08AEB2F0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
      if (branch_taken) {
          goto L_08AEB3CC;
      }
      goto L_08AEB2FC;
    }
L_08AEB2FC:
    ctx.gpr[21] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[21] = (ctx.gpr[7] | 0u);
        goto L_08AEB338;
    }
    goto L_08AEB30C;
L_08AEB30C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AEB320u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEB320u) goto L_08AEB320;
    return;
L_08AEB320:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[21]) <= 0) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08AEB2F0;
    }
    goto L_08AEB32C;
L_08AEB32C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AEB364;
      }
      goto L_08AEB334;
    }
L_08AEB334:
    ctx.gpr[21] = (ctx.gpr[7] | 0u);
    goto L_08AEB338;
L_08AEB338:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AEB348u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AEB348u) goto L_08AEB348;
    return;
L_08AEB348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[21]);
    goto L_08AEB364;
L_08AEB364:
    if (ctx.gpr[23] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08AEB380;
    }
    goto L_08AEB36C;
L_08AEB36C:
    ctx.gpr[31] = (0x08AEB374u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AEAA34;
L_08AEB374:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEB2EC;
      }
      goto L_08AEB37C;
    }
L_08AEB37C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08AEB380;
L_08AEB380:
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[21]);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AEB240;
      }
      goto L_08AEB394;
    }
L_08AEB394:
    ctx.gpr[2] = (0u | 0u);
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
L_08AEB3C4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    goto L_08AEB3CC;
L_08AEB3CC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
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
L_08AEB3FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(472));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AEB468;
      }
      goto L_08AEB428;
    }
L_08AEB428:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_08AEB42C;
L_08AEB42C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AEB45C;
      }
      goto L_08AEB438;
    }
L_08AEB438:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
        goto L_08AEB454;
    }
    goto L_08AEB444;
L_08AEB444:
    jump_target = ctx.gpr[16];
    ctx.gpr[31] = (0x08AEB44Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEB44Cu) goto L_08AEB44C;
    return;
L_08AEB44C:
    ctx.gpr[20] = (ctx.gpr[20] | ctx.gpr[2]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08AEB454;
L_08AEB454:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_08AEB438;
      }
      goto L_08AEB45C;
    }
L_08AEB45C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_08AEB42C;
    }
    goto L_08AEB468;
L_08AEB468:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_08AEB48C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(67));
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08AEB4CC;
      }
      goto L_08AEB4B8;
    }
L_08AEB4B8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
      if (branch_taken) {
          goto L_08AEB504;
      }
      goto L_08AEB4C4;
    }
L_08AEB4C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08AEB4F0;
      }
      goto L_08AEB4CC;
    }
L_08AEB4CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB4F0:
    ctx.gpr[31] = (0x08AEB4F8u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 10u, 0x08AF40C0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB4F8u) goto L_08AEB4F8;
    return;
L_08AEB4F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08AEB514;
      }
      goto L_08AEB500;
    }
L_08AEB500:
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    goto L_08AEB504;
L_08AEB504:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
      if (branch_taken) {
          goto L_08AEB564;
      }
      goto L_08AEB514;
    }
L_08AEB514:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 32768u);
    ctx.gpr[5] = (ctx.gpr[5] & 61440u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
        goto L_08AEB558;
    }
    goto L_08AEB528;
L_08AEB528:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-18056));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
        goto L_08AEB558;
    }
    goto L_08AEB53C;
L_08AEB53C:
    ctx.gpr[4] = (ctx.gpr[4] | 1024u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1024u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 2u);
      if (branch_taken) {
          goto L_08AEB564;
      }
      goto L_08AEB558;
    }
L_08AEB558:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    goto L_08AEB564;
L_08AEB564:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB58C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEB59Cu);
    // nop
    goto L_08AEAA34;
L_08AEB59C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB5A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
        goto L_08AEB5D4;
    }
    goto L_08AEB5C4;
L_08AEB5C4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24164)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    goto L_08AEB5D4;
L_08AEB5D4:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08AEB5E8;
    }
    goto L_08AEB5DC;
L_08AEB5DC:
    ctx.gpr[31] = (0x08AEB5E4u);
    // nop
    goto L_08AEAD28;
L_08AEB5E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08AEB5E8;
L_08AEB5E8:
    ctx.gpr[5] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08AEB608;
      }
      goto L_08AEB5F4;
    }
L_08AEB5F4:
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
      if (branch_taken) {
          goto L_08AEB61C;
      }
      goto L_08AEB600;
    }
L_08AEB600:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08AEB690;
      }
      goto L_08AEB608;
    }
L_08AEB608:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB61C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_08AEB638;
      }
      goto L_08AEB624;
    }
L_08AEB624:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB64C;
      }
      goto L_08AEB62C;
    }
L_08AEB62C:
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AEB6A4;
      }
      goto L_08AEB638;
    }
L_08AEB638:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB64C:
    ctx.gpr[31] = (0x08AEB654u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AEAA34;
L_08AEB654:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB67C;
      }
      goto L_08AEB65C;
    }
L_08AEB65C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08AEB62C;
      }
      goto L_08AEB67C;
    }
L_08AEB67C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB690:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_08AEB6A8;
    }
    goto L_08AEB698;
L_08AEB698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AEB6B8;
      }
      goto L_08AEB6A4;
    }
L_08AEB6A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08AEB6A8;
L_08AEB6A8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB6D4;
      }
      goto L_08AEB6B0;
    }
L_08AEB6B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08AEB6E0;
      }
      goto L_08AEB6B8;
    }
L_08AEB6B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB6D4:
    ctx.gpr[31] = (0x08AEB6DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AEB48C;
L_08AEB6DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08AEB6E0;
L_08AEB6E0:
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2223u << 16u);
      if (branch_taken) {
          goto L_08AEB6F8;
      }
      goto L_08AEB6EC;
    }
L_08AEB6EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x08AEB6F8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19060));
    goto L_08AEB3FC;
L_08AEB6F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AEB714u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEB714u) goto L_08AEB714;
    return;
L_08AEB714:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8193));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEB768;
      }
      goto L_08AEB734;
    }
L_08AEB734:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08AEB748;
      }
      goto L_08AEB73C;
    }
L_08AEB73C:
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AEB754;
      }
      goto L_08AEB748;
    }
L_08AEB748:
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AEB754;
L_08AEB754:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB768:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB77C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[11]);
    ctx.gpr[6] = (0u | 520u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-24164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEB7E0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1062u, 0x08AEFE20u>(ctx, &aot_mem) && ctx.pc == 0x08AEB7E0u) goto L_08AEB7E0;
    return;
L_08AEB7E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB7F4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB7FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[11]);
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEB838u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08AEB838u) goto L_08AEB838;
    return;
L_08AEB838:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18444));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24164)));
    ctx.gpr[5] = (0u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08AEB87Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AEBCD8;
L_08AEB87C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB88C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEB8B0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 20u, 0x08AF4174u>(ctx, &aot_mem) && ctx.pc == 0x08AEB8B0u) goto L_08AEB8B0;
    return;
L_08AEB8B0:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08AEB8C8;
    }
    goto L_08AEB8B8;
L_08AEB8B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AEB8D4;
      }
      goto L_08AEB8C8;
    }
L_08AEB8C8:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AEB8D4;
L_08AEB8D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB8E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] & 256u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AEB938;
      }
      goto L_08AEB918;
    }
L_08AEB918:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AEB930u);
    ctx.gpr[7] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 15u, 0x08AF4118u>(ctx, &aot_mem) && ctx.pc == 0x08AEB930u) goto L_08AEB930;
    return;
L_08AEB930:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AEB938;
L_08AEB938:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AEB960u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF4224u>(ctx, &aot_mem) && ctx.pc == 0x08AEB960u) goto L_08AEB960;
    return;
L_08AEB960:
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
L_08AEB978:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEB99Cu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 15u, 0x08AF4118u>(ctx, &aot_mem) && ctx.pc == 0x08AEB99Cu) goto L_08AEB99C;
    return;
L_08AEB99C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08AEB9B8;
      }
      goto L_08AEB9A8;
    }
L_08AEB9A8:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AEB9C4;
      }
      goto L_08AEB9B8;
    }
L_08AEB9B8:
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    goto L_08AEB9C4;
L_08AEB9C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB9D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEB9E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 5u, 0x08AF406Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB9E8u) goto L_08AEB9E8;
    return;
L_08AEB9E8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB9F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AEBAA4;
      }
      goto L_08AEBA18;
    }
L_08AEBA18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
        goto L_08AEBA34;
    }
    goto L_08AEBA24;
L_08AEBA24:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24164)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    goto L_08AEBA34;
L_08AEBA34:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08AEBA48;
    }
    goto L_08AEBA3C;
L_08AEBA3C:
    ctx.gpr[31] = (0x08AEBA44u);
    // nop
    goto L_08AEAD28;
L_08AEBA44:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08AEBA48;
L_08AEBA48:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
      if (branch_taken) {
          goto L_08AEBAC8;
      }
      goto L_08AEBA64;
    }
L_08AEBA64:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_08AEBAA4;
      }
      goto L_08AEBA6C;
    }
L_08AEBA6C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
      if (branch_taken) {
          goto L_08AEBAC4;
      }
      goto L_08AEBA74;
    }
L_08AEBA74:
    ctx.gpr[31] = (0x08AEBA7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AEAA34;
L_08AEBA7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBAA4;
      }
      goto L_08AEBA84;
    }
L_08AEBA84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08AEBAC0;
      }
      goto L_08AEBAA4;
    }
L_08AEBAA4:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08AEBAC0:
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    goto L_08AEBAC4;
L_08AEBAC4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AEBAC8;
L_08AEBAC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AEBB4C;
      }
      goto L_08AEBAD8;
    }
L_08AEBAD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AEBB14;
      }
      goto L_08AEBAE8;
    }
L_08AEBAE8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (0u | 68u);
    ctx.gpr[31] = (0x08AEBAF8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6168));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 248u, 0x08AF5444u>(ctx, &aot_mem) && ctx.pc == 0x08AEBAF8u) goto L_08AEBAF8;
    return;
L_08AEBAF8:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08AEBB14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
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
L_08AEBB4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AEBB98;
      }
      goto L_08AEBB58;
    }
L_08AEBB58:
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
        goto L_08AEBB9C;
    }
    goto L_08AEBB64;
L_08AEBB64:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-1)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AEBB98;
      }
      goto L_08AEBB70;
    }
L_08AEBB70:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08AEBB98:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    goto L_08AEBB9C;
L_08AEBB9C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(66));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08AEBBE0:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (0u | 94u);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AEBC08;
      }
      goto L_08AEBBF4;
    }
L_08AEBBF4:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AEBC0C;
      }
      goto L_08AEBC08;
    }
L_08AEBC08:
    ctx.gpr[8] = (0u | 0u);
    goto L_08AEBC0C;
L_08AEBC0C:
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[3] + ctx.gpr[4]);
    goto L_08AEBC14;
L_08AEBC14:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[3]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[3] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AEBC14;
      }
      goto L_08AEBC28;
    }
L_08AEBC28:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AEBC48;
      }
      goto L_08AEBC30;
    }
L_08AEBC30:
    ctx.gpr[8] = (ctx.gpr[6] - ctx.gpr[8]);
    ctx.gpr[7] = (0u | 93u);
    ctx.gpr[6] = (0u | 45u);
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AEBC50;
      }
      goto L_08AEBC48;
    }
L_08AEBC48:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEBC50:
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    goto L_08AEBC58;
L_08AEBC58:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AEBCD0;
      }
      goto L_08AEBC60;
    }
L_08AEBC60:
    if (ctx.gpr[10] == ctx.gpr[6]) {
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
        goto L_08AEBC84;
    }
    goto L_08AEBC68;
L_08AEBC68:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08AEBC7C;
      }
      goto L_08AEBC70;
    }
L_08AEBC70:
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AEBC50;
      }
      goto L_08AEBC7C;
    }
L_08AEBC7C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEBC84:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[7];
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AEBC98;
      }
      goto L_08AEBC8C;
    }
L_08AEBC8C:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
        goto L_08AEBCA4;
    }
    goto L_08AEBC98;
L_08AEBC98:
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(45));
      if (branch_taken) {
          goto L_08AEBC50;
      }
      goto L_08AEBCA4;
    }
L_08AEBCA4:
    ctx.gpr[11] = (ctx.gpr[9] | 0u);
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[11]);
    goto L_08AEBCB0;
L_08AEBCB0:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_08AEBCB0;
      }
      goto L_08AEBCC8;
    }
L_08AEBCC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AEBC58;
      }
      goto L_08AEBCD0;
    }
L_08AEBCD0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEBCD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-720));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(700), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[4]);
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11816));
    ctx.gpr[5] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10988));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[6]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24164)));
    ctx.gpr[20] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), ctx.gpr[22]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23024)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(684), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), ctx.gpr[31]);
    goto L_08AEBD6C;
L_08AEBD6C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(644));
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AEBD80u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 256u, 0x08AECD18u>(ctx, &aot_mem) && ctx.pc == 0x08AEBD80u) goto L_08AEBD80;
    return;
L_08AEBD80:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[20]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 130u, 0x08AEC670u>(ctx, &aot_mem); return;
      }
      goto L_08AEBD90;
    }
L_08AEBD90:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 37u);
      if (branch_taken) {
          goto L_08AEBE08;
      }
      goto L_08AEBD9C;
    }
L_08AEBD9C:
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 37u);
      if (branch_taken) {
          goto L_08AEBE08;
      }
      goto L_08AEBDB0;
    }
L_08AEBDB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08AEBDB4;
L_08AEBDB4:
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AEBDD0;
    }
    goto L_08AEBDBC;
L_08AEBDBC:
    ctx.gpr[31] = (0x08AEBDC4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AEB5A8;
L_08AEBDC4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 130u, 0x08AEC670u>(ctx, &aot_mem); return;
      }
      goto L_08AEBDCC;
    }
L_08AEBDCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AEBDD0;
L_08AEBDD0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (2230u << 16u);
        (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 202u, 0x08AEC9CCu>(ctx, &aot_mem); return;
    }
    goto L_08AEBDE8;
L_08AEBDE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AEBDB4;
      }
      goto L_08AEBE08;
    }
L_08AEBE08:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEBE54;
      }
      goto L_08AEBE10;
    }
L_08AEBE10:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08AEBE1C;
L_08AEBE1C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 8u, 0x08AEC08Cu>(ctx, &aot_mem); return;
      }
      goto L_08AEBE2C;
    }
L_08AEBE2C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 121 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
        (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 9u, 0x08AEC090u>(ctx, &aot_mem); return;
    }
    goto L_08AEBE38;
L_08AEBE38:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-6096)));
    jump_target = ctx.gpr[1];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEBE50:
    ctx.gpr[16] = (0u | 0u);
    goto L_08AEBE54;
L_08AEBE54:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[23] - ctx.gpr[20]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 201u, 0x08AEC9C8u>(ctx, &aot_mem); return;
      }
      goto L_08AEBE60;
    }
L_08AEBE60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AEBE80;
    }
    goto L_08AEBE6C;
L_08AEBE6C:
    ctx.gpr[31] = (0x08AEBE74u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AEB5A8;
L_08AEBE74:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
        (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 204u, 0x08AEC9E0u>(ctx, &aot_mem); return;
    }
    goto L_08AEBE7C;
L_08AEBE7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AEBE80;
L_08AEBE80:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 130u, 0x08AEC670u>(ctx, &aot_mem); return;
      }
      goto L_08AEBE90;
    }
L_08AEBE90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AEBE60;
      }
      goto L_08AEBEB8;
    }
L_08AEBEB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 202u, 0x08AEC9CCu>(ctx, &aot_mem); return;
      }
      goto L_08AEBEC0;
    }
L_08AEBEC0:
    ctx.gpr[16] = (ctx.gpr[16] | 8u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AEBE1C;
      }
      goto L_08AEBECC;
    }
L_08AEBECC:
    ctx.gpr[16] = (ctx.gpr[16] | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AEBE1C;
      }
      goto L_08AEBED8;
    }
L_08AEBED8:
    ctx.gpr[16] = (ctx.gpr[16] | 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AEBE1C;
      }
      goto L_08AEBEE4;
    }
L_08AEBEE4:
    ctx.gpr[16] = (ctx.gpr[16] | 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AEBE1C;
      }
      goto L_08AEBEF0;
    }
L_08AEBEF0:
    ctx.gpr[5] = (ctx.gpr[19] << 3u);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-48));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AEBE1C;
      }
      goto L_08AEBF0C;
    }
L_08AEBF0C:
    ctx.gpr[16] = (ctx.gpr[16] | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AEBF1C;
      }
      goto L_08AEBF18;
    }
L_08AEBF18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08AEBF1C;
L_08AEBF1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[21] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 11u, 0x08AEC0B4u>(ctx, &aot_mem); return;
      }
      goto L_08AEBF30;
    }
L_08AEBF30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[21] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 11u, 0x08AEC0B4u>(ctx, &aot_mem); return;
      }
      goto L_08AEBF48;
    }
L_08AEBF48:
    ctx.gpr[16] = (ctx.gpr[16] | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AEBF58;
      }
      goto L_08AEBF54;
    }
L_08AEBF54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08AEBF58;
L_08AEBF58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[21] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 11u, 0x08AEC0B4u>(ctx, &aot_mem); return;
      }
      goto L_08AEBF6C;
    }
L_08AEBF6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.gpr[17] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    ctx.gpr[21] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 11u, 0x08AEC0B4u>(ctx, &aot_mem); return;
      }
      goto L_08AEBF84;
    }
L_08AEBF84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.gpr[16] = (ctx.gpr[16] | 256u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[21] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 11u, 0x08AEC0B4u>(ctx, &aot_mem); return;
      }
      goto L_08AEBFA0;
    }
L_08AEBFA0:
    ctx.gpr[17] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 11u, 0x08AEC0B4u>(ctx, &aot_mem); return;
      }
      goto L_08AEBFAC;
    }
L_08AEBFAC:
    ctx.gpr[17] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 11u, 0x08AEC0B4u>(ctx, &aot_mem); return;
      }
      goto L_08AEBFB8;
    }
L_08AEBFB8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08AEBFC4u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_08AEBBE0;
L_08AEBFC4:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[16] | 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 11u, 0x08AEC0B4u>(ctx, &aot_mem); return;
      }
      goto L_08AEBFD8;
    }
L_08AEBFD8:
    ctx.gpr[16] = (ctx.gpr[16] | 32u);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 11u, 0x08AEC0B4u>(ctx, &aot_mem); return;
      }
      goto L_08AEBFE8;
    }
L_08AEBFE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.gpr[16] = (ctx.gpr[16] | 272u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[21] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 11u, 0x08AEC0B4u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1u, 0x08AEC004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0185(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0185_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_185(Runtime &runtime) {
    runtime.register_generated_unit(185u, 0x08AE8000u, 16384u, &recomp_unit_0185, &recomp_unit_0185_entry);
    runtime.register_function(0x08AE8000u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8080u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE808Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE80A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE80B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE80D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE80E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE80ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE80F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8100u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE810Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8114u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE811Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8134u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE813Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE814Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8158u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8174u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8184u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8190u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE819Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE81A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE81C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE81CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE81DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE81E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE81F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8204u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE82ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE82C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE82C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE82DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE82E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE82ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8320u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8344u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE835Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8378u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8390u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8398u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE83BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE83D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE83E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE83F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8400u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8564u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE856Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8574u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8578u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8584u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE858Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE859Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8610u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8620u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8630u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8638u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8644u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8650u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8658u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8660u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8668u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE867Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE868Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8694u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8700u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8708u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8710u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8714u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8724u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8734u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE873Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8748u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8754u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE875Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8764u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8768u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8778u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8788u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8790u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE879Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8804u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE880Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8810u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8820u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8830u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8838u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8844u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8850u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8858u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8860u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8868u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8878u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8888u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8890u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE889Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8914u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8918u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8920u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE892Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE893Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8944u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE894Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8954u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8964u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8968u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8970u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8988u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8990u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A10u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A20u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A2Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A38u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A40u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A50u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A58u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A70u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A88u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A90u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8AB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8AD4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8AECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8AF8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B00u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B1Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B20u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B28u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B34u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B48u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B58u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B70u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B8Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8BC0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8BCCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8BD4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8BDCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8BF4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C34u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C54u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C9Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8CACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8CCCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8CE0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8CF0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D00u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D0Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D14u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D24u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D2Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D3Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D44u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D54u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D70u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D78u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D94u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D9Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8DA8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8DB8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8DC0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8DCCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8DDCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8DE4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8DF0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E00u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E08u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E14u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E24u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E2Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E38u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E80u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8EC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8EDCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8EE4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8EECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F2Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F40u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F54u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F88u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F98u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FBCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FDCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FE8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FF0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FFCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9008u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9014u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE901Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE902Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9034u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9048u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9080u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9084u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE90B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE90BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE90CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE90D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE90ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE90F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9100u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9148u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9184u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE918Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE920Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9218u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9224u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE922Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9234u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9238u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE924Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9260u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9270u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9278u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE92A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE92A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE92BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE92E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE92FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9318u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9324u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9334u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9344u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE934Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE935Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE937Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9390u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9398u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE940Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9428u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9434u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9448u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9458u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE946Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE947Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9484u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE948Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE949Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9500u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9508u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9510u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9518u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9520u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9538u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9550u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9558u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9580u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9588u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9590u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE959Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9614u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE961Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9624u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9638u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9640u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE964Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9654u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE965Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE968Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE96CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE96D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE96ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE96F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE96FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9704u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9718u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9724u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE972Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9738u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9740u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9748u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9750u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9758u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9764u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9770u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9778u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9788u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9804u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE980Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE981Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9824u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE982Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9834u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9840u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9848u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE984Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9854u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9878u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9898u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE98B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE98C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE98D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE98E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE98E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE98ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE98F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE990Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9938u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9944u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9958u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE995Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9970u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9978u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9980u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9994u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE99A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE99C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE99CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE99E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE99F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A14u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A1Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A24u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A34u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A3Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A44u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A4Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A80u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A8Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A94u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9AA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9AB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9AD0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9ADCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B0Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B24u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B44u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B4Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B68u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B7Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B8Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B94u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9BBCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9BECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9C90u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9C9Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9CA8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9CBCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9D6Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9DA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9DACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9DB0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9DC0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9DC8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9DCCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9DDCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9DE4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9DF4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9DFCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9E9Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9EA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F58u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F88u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F94u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9FC8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9FD0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9FDCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9FE0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9FE8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9FF0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9FF8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA008u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA020u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA058u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA060u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA06Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA088u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA090u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA0A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA0B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA0BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA0C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA0D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA0E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA0E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA0F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA0FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA104u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA12Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA154u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA164u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA1A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA1BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA288u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA290u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA300u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA30Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA318u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA320u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA324u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA330u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA338u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA340u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA344u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA348u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA358u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA370u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA378u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA380u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA388u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA390u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA398u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA410u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA418u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA420u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA434u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA43Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA444u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA44Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA454u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA45Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA474u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA47Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA484u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA48Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA49Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA510u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA520u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA528u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA540u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA544u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA54Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA564u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA578u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA580u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA584u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA598u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA614u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA61Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA624u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA62Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA634u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA63Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA644u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA64Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA66Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA678u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA680u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA684u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA68Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA69Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA700u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA70Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA714u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA718u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA720u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA728u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA72Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA73Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA744u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA74Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA754u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA75Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA764u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA76Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA774u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA784u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA7A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA7B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA7B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA7C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA7CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA830u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA890u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA894u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA89Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA904u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA910u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA924u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA94Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA958u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA95Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA96Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA970u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA97Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA984u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA98Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA998u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA10u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA18u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA34u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA50u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA5Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA78u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA90u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA9Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAAA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAAACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAAB0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAABCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAAC8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAAE8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAAF0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB10u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB18u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB34u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB5Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB90u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB9Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEABA8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEABB0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEABB8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEABC0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEABECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAC14u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAC1Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAC28u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAC38u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAC44u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAC68u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAC74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAC7Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEACA0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEACD0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD28u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD60u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD88u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEADA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEADB8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEADC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEADF8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE1Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE40u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE50u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE8Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAEC8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAED4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAEDCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF08u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF10u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF24u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF30u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF4Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF54u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF68u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF70u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAFB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAFE4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB01Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB02Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB038u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB040u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB048u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB04Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB05Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB064u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB094u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB0A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB0B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB0C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB0D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB0DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB0F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB0FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB104u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB114u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB124u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB130u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB13Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB14Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB16Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB17Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB184u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB190u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB208u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB220u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB224u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB238u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB240u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB248u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB25Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB264u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB270u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB27Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB284u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB288u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB28Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB30Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB320u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB32Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB334u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB338u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB348u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB364u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB36Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB374u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB37Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB380u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB394u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB3C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB3CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB3FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB428u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB42Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB438u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB444u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB44Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB454u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB45Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB468u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB48Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB4B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB4C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB4CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB4F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB4F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB500u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB504u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB514u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB528u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB53Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB558u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB564u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB58Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB59Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB600u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB608u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB61Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB624u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB62Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB638u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB64Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB654u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB65Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB67Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB690u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB698u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB6A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB6A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB6B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB6B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB6D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB6DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB6E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB6ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB6F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB714u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB734u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB73Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB748u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB754u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB768u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB77Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB7E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB7F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB7FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB838u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB87Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB88Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB8B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB8B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB8C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB8D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB8E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB918u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB930u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB938u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB960u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB978u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB99Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB9A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB9B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB9C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB9D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB9E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB9F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA18u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA24u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA34u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA3Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA44u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA48u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA6Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA7Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBAA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBAC0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBAC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBAC8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBAD8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBAE8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBAF8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB14u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB4Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB58u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB70u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB98u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB9Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBBE0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBBF4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC08u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC0Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC14u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC28u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC30u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC48u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC50u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC58u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC60u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC68u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC70u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC7Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC8Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC98u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBCA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBCB0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBCC8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBCD0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBCD8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD6Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD80u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD90u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD9Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDB0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDBCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDCCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDD0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDE8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE08u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE10u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE1Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE2Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE38u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE50u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE54u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE60u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE6Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE7Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE80u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE90u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBEB8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBEC0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBECCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBED8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBEE4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBEF0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF0Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF18u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF1Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF30u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF48u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF54u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF58u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF6Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBFA0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBFACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBFB8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBFC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBFD8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBFE8u, &recomp_unit_0185, "recomp_unit_0185");
}
} // namespace psprecomp
