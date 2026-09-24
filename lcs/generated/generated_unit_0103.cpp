#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0103[4080] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 0, 6, 0, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0,
    18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 26, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 30, 0, 31, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 41,
    0, 42, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 53,
    0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 59,
    0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0,
    65, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 72, 0, 73, 74, 0, 75, 0, 0, 0, 0,
    0, 76, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0,
    91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 97,
    0, 0, 0, 98, 0, 0, 99, 0, 100, 0, 0, 101, 0, 102, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 112, 0, 0, 0, 113, 0, 114, 0, 115, 0, 116, 0,
    117, 0, 0, 0, 118, 0, 0, 119, 0, 120, 0, 121, 122, 0, 123, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 130, 0, 0, 131, 0, 0, 0, 0, 132, 0, 133, 0, 134, 0, 135, 0, 0, 136, 0, 0, 137, 0,
    0, 138, 139, 0, 0, 140, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0,
    0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0, 152, 0, 0, 153, 0, 0,
    154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 158, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 167,
    0, 168, 0, 0, 0, 169, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 180, 0, 181, 182, 0, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 188, 0, 189, 0, 190, 0,
    0, 191, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 195, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0,
    208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 214, 0, 215, 0, 0, 216, 0, 0, 217, 0, 218, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 222, 0, 223, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 231, 0,
    0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 237, 0, 238, 0, 0, 239, 0, 0,
    240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0,
    0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0,
    256, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0,
    274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 281, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 286,
    0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 298,
    0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 0,
    306, 307, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 314, 0, 315, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 320,
    0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 0, 326, 0, 327, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 0, 331, 332, 0, 333, 334, 0,
    0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 339, 0, 340, 0, 341,
    0, 342, 0, 0, 343, 0, 344, 0, 345, 0, 346, 0, 347, 0, 348, 0, 349, 350, 0, 351, 0, 0, 352, 0, 353, 0, 354, 355, 0, 356, 0, 0,
    0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 0, 0,
    0, 371, 0, 0, 372, 0, 373, 0, 374, 375, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0,
    0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 388, 0, 389, 0, 390, 0, 391, 0, 392, 0,
    0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 395, 0, 396, 397, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 401,
    0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 404, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0,
    0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    412, 0, 413, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418,
    0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 423, 0, 0, 0, 424, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 427, 0, 0, 428, 0, 0, 429, 0, 430, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0,
    0, 0, 0, 433, 0, 434, 0, 0, 0, 435, 0, 0, 436, 0, 437, 0, 438, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 442, 0,
    0, 443, 0, 444, 0, 445, 446, 0, 447, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 452,
    0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 456, 0, 457, 0, 458, 0, 0, 459, 0, 460, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 468,
    0, 0, 469, 0, 0, 470, 471, 0, 472, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0,
    478, 0, 479, 0, 0, 480, 0, 481, 0, 482, 0, 483, 0, 484, 0, 485, 486, 0, 487, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0,
    0, 0, 0, 0, 490, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 494, 0, 0, 0, 0,
    495, 0, 0, 0, 0, 0, 0, 0, 496, 497, 0, 0, 498, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 502, 0, 0, 503, 504,
    0, 505, 0, 0, 506, 0, 507, 0, 508, 0, 509, 0, 510, 0, 511, 512, 0, 513, 0, 0, 0, 514, 515, 0, 0, 0, 0, 516, 0, 0, 0, 0,
    0, 0, 517, 0, 518, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 0, 523, 0, 524, 0, 525, 0, 0,
    0, 0, 0, 0, 0, 526, 0, 0, 527, 0, 0, 528, 0, 0, 0, 529, 0, 530, 0, 531, 0, 0, 0, 532, 0, 0, 533, 0, 534, 0, 535, 0,
    0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0, 539, 0, 540, 0, 541, 0, 0, 0, 542, 0, 0, 543, 0, 0,
    544, 0, 545, 0, 0, 0, 0, 0, 546, 0, 547, 0, 0, 0, 0, 548, 0, 0, 549, 0, 0, 0, 0, 0, 550, 0, 551, 0, 552, 0, 0, 553,
    0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 558, 0, 559, 0, 0, 560, 0, 0, 561, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 563,
    0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0, 0, 0, 0, 569, 0,
    0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 573, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 579, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 581, 0, 582, 0, 583, 0, 584, 0, 0, 585, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 587, 0, 588, 0, 589, 0, 590, 0,
    591, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 593, 0, 594, 0, 0, 595, 0, 596, 0, 0, 0, 597, 0, 598, 0, 0, 0, 599, 0, 0, 600,
    0, 0, 601, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 0, 604, 0, 605, 0, 606, 0, 0, 0, 607, 0, 0, 608, 0, 609, 0, 0,
    0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 612, 0, 613, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0,
    0, 0, 617, 0, 0, 618, 0, 0, 0, 619, 0, 620, 0, 0, 621, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 623, 0, 0, 624,
    0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 626, 0, 627, 0, 0, 0, 628, 0, 0, 0, 0, 0, 629, 0, 630, 0, 0, 0, 0, 0, 631,
    0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 635, 0, 0, 0, 636,
    0, 0, 637, 0, 638, 0, 639, 640, 0, 641, 0, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 644, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 646, 0, 647, 0, 0, 0, 0, 0, 648, 0, 649, 0, 0, 0, 650, 0, 651, 0, 0, 0,
    652, 0, 653, 0, 654, 0, 655, 0, 0, 0, 656, 0, 0, 657, 0, 0, 658, 0, 659, 0, 660, 0, 661, 0, 662, 0, 663, 0, 664, 0, 665, 0,
    666, 0, 667, 0, 668, 0, 669, 0, 670, 0, 671, 0, 672, 0, 673, 674, 0, 0, 675, 0, 676, 677, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 679, 0, 680, 0, 681, 0, 0, 0, 682, 0, 683, 0, 0, 0, 0, 684, 0, 0, 0, 685, 0, 0, 0, 686, 0,
    0, 687, 0, 0, 0, 0, 0, 0, 688, 0, 689, 0, 690, 0, 0, 691, 0, 692, 0, 693, 694, 0, 695, 696, 0, 0, 0, 0, 0, 0, 0, 697,
    0, 0, 698, 0, 0, 699, 0, 700, 0, 701, 0, 702, 0, 703, 0, 704, 0, 705, 0, 706, 707, 0, 708, 0, 0, 709, 0, 710, 0, 711, 0, 712,
    0, 713, 0, 714, 0, 715, 716, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 719, 0, 0, 0, 0,
    0, 0, 0, 720, 0, 721, 0, 0, 0, 722, 0, 0, 723, 0, 0, 0, 724, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 727, 0,
    0, 728, 0, 729, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 733, 0, 734,
    0, 0, 735, 0, 0, 736, 0, 0, 737, 0, 738, 0, 0, 0, 739, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 743, 0, 0, 744, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 746, 0, 0, 0, 0, 0, 747, 0,
    0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 750, 0, 751, 0, 752, 753, 0, 754, 755, 0, 756, 0, 0, 0, 0, 0, 0, 757, 0,
    0, 0, 0, 0, 758, 0, 759, 0, 0, 0, 760, 0, 761, 0, 762, 0, 763, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 765, 0, 0, 766, 0,
    767, 0, 0, 0, 768, 0, 769, 0, 770, 0, 771, 0, 772, 0, 0, 0, 773, 0, 774, 0, 775, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0,
    777, 0, 778, 0, 0, 0, 779, 0, 0, 0, 0, 780, 0, 0, 0, 781, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 784,
    0, 0, 785, 0, 0, 786, 0, 0, 0, 787, 0, 0, 788, 0, 789, 0, 0, 790, 0, 791, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 793, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 794, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0,
    797, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 800, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 801, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 804, 0, 805, 0, 806, 0, 0, 807, 0, 808, 0, 809, 0,
    810, 0, 811, 0, 812, 813, 0, 814, 0, 0, 815, 0, 0, 0, 0, 816, 0, 0, 0, 0, 817, 0, 818, 0, 819, 0, 0, 0, 0, 0, 0, 820,
    0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 0,
    0, 0, 0, 0, 823, 0, 0, 0, 0, 0, 824, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 826, 0, 0, 827, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 829, 0, 830, 0, 831, 0, 832, 0, 0, 0, 833, 0, 0, 0, 834, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 835, 0, 836, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 837, 0, 0, 0, 0, 838, 0, 839, 0,
    0, 0, 0, 0, 840, 0, 0, 0, 841, 0, 0, 842, 0, 843, 844, 0, 845, 0, 0, 0, 846, 0, 847, 0, 848, 849, 0, 850, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 851, 0, 852, 0, 0, 0, 853, 0, 0, 0, 0, 0, 854, 0, 855, 0, 856, 0, 0, 857, 0, 0, 0,
    0, 858, 0, 0, 0, 0, 0, 0, 0, 0, 859, 0, 0, 0, 860, 0, 861, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 862, 0, 0, 0, 0, 0, 0, 0, 863, 0, 0, 0, 864, 0, 0, 0, 0, 865, 0, 0, 0, 0, 0, 866, 0, 867, 0, 0, 0, 0, 868,
    0, 0, 869, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 870, 0, 0, 0, 0, 0, 0, 0, 871, 0, 872, 0, 0, 0, 873, 0, 0,
    0, 0, 0, 0, 874, 0, 875, 0, 876, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 877, 0, 0, 0, 0, 878, 0,
    0, 0, 0, 0, 879, 0, 0, 0, 0, 880, 0, 0, 881, 0, 0, 0, 0, 0, 0, 882, 0, 0, 883, 0, 0, 884, 0, 0, 0, 0, 0, 0,
    885, 0, 0, 886, 0, 0, 0, 0, 0, 0, 887, 0, 0, 0, 888, 0, 0, 0, 889, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 890,
    0, 891, 0, 892, 0, 0, 893, 0, 0, 0, 894, 0, 0, 895, 0, 0, 0, 0, 0, 896, 0, 0, 0, 0, 0, 0, 897, 0, 0, 0, 0, 0,
    898, 0, 0, 0, 899, 0, 0, 900, 0, 901, 0, 902, 0, 0, 903, 0, 0, 0, 0, 0, 904, 0, 0, 0, 905, 0, 0, 906, 0, 907, 0, 908,
    0, 909, 0, 0, 0, 0, 910, 0, 0, 0, 911, 0, 0, 0, 0, 0, 0, 0, 912, 0, 913, 0, 0, 0, 0, 0, 914, 915, 0, 0, 0, 916,
    0, 0, 917, 0, 918, 0, 919, 920, 0, 921, 922, 0, 0, 0, 0, 0, 0, 0, 0, 923, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 924, 0, 0, 925, 0, 0, 926, 0, 927, 0, 928, 0, 0, 929, 0, 930, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 931,
    0, 0, 0, 0, 932, 0, 0, 933, 0, 934, 0, 935, 0, 0, 0, 0, 0, 0, 0, 936, 0, 0, 0, 0, 0, 937, 0, 938, 0, 0, 0, 0,
    0, 939, 0, 940, 0, 0, 941, 0, 0, 942, 0, 0, 0, 0, 0, 943,
};
void recomp_unit_0103_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089A0000u;
        entry_id = (entry_delta < 16320u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0103[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089A0000;
    case 2u: goto L_089A000C;
    case 3u: goto L_089A003C;
    case 4u: goto L_089A0064;
    case 5u: goto L_089A0068;
    case 6u: goto L_089A0070;
    case 7u: goto L_089A008C;
    case 8u: goto L_089A00A0;
    case 9u: goto L_089A00B4;
    case 10u: goto L_089A00C4;
    case 11u: goto L_089A00E4;
    case 12u: goto L_089A0100;
    case 13u: goto L_089A0110;
    case 14u: goto L_089A0134;
    case 15u: goto L_089A0154;
    case 16u: goto L_089A0160;
    case 17u: goto L_089A0170;
    case 18u: goto L_089A0180;
    case 19u: goto L_089A018C;
    case 20u: goto L_089A01AC;
    case 21u: goto L_089A01C0;
    case 22u: goto L_089A01C8;
    case 23u: goto L_089A01D8;
    case 24u: goto L_089A01E0;
    case 25u: goto L_089A01E8;
    case 26u: goto L_089A01F4;
    case 27u: goto L_089A0200;
    case 28u: goto L_089A0228;
    case 29u: goto L_089A023C;
    case 30u: goto L_089A0244;
    case 31u: goto L_089A024C;
    case 32u: goto L_089A0254;
    case 33u: goto L_089A0264;
    case 34u: goto L_089A0280;
    case 35u: goto L_089A0290;
    case 36u: goto L_089A02A8;
    case 37u: goto L_089A02C4;
    case 38u: goto L_089A02E4;
    case 39u: goto L_089A02EC;
    case 40u: goto L_089A02F4;
    case 41u: goto L_089A02FC;
    case 42u: goto L_089A0304;
    case 43u: goto L_089A030C;
    case 44u: goto L_089A0320;
    case 45u: goto L_089A0340;
    case 46u: goto L_089A0348;
    case 47u: goto L_089A0358;
    case 48u: goto L_089A039C;
    case 49u: goto L_089A03AC;
    case 50u: goto L_089A03CC;
    case 51u: goto L_089A03E4;
    case 52u: goto L_089A03F0;
    case 53u: goto L_089A03FC;
    case 54u: goto L_089A040C;
    case 55u: goto L_089A0450;
    case 56u: goto L_089A0458;
    case 57u: goto L_089A0468;
    case 58u: goto L_089A0474;
    case 59u: goto L_089A047C;
    case 60u: goto L_089A048C;
    case 61u: goto L_089A04AC;
    case 62u: goto L_089A04CC;
    case 63u: goto L_089A04F0;
    case 64u: goto L_089A04F8;
    case 65u: goto L_089A0500;
    case 66u: goto L_089A0508;
    case 67u: goto L_089A0518;
    case 68u: goto L_089A0528;
    case 69u: goto L_089A0530;
    case 70u: goto L_089A0540;
    case 71u: goto L_089A0550;
    case 72u: goto L_089A0558;
    case 73u: goto L_089A0560;
    case 74u: goto L_089A0564;
    case 75u: goto L_089A056C;
    case 76u: goto L_089A0584;
    case 77u: goto L_089A058C;
    case 78u: goto L_089A059C;
    case 79u: goto L_089A05AC;
    case 80u: goto L_089A05D8;
    case 81u: goto L_089A05E0;
    case 82u: goto L_089A0624;
    case 83u: goto L_089A062C;
    case 84u: goto L_089A063C;
    case 85u: goto L_089A064C;
    case 86u: goto L_089A0684;
    case 87u: goto L_089A068C;
    case 88u: goto L_089A06B0;
    case 89u: goto L_089A06E8;
    case 90u: goto L_089A06F0;
    case 91u: goto L_089A0700;
    case 92u: goto L_089A0714;
    case 93u: goto L_089A0734;
    case 94u: goto L_089A075C;
    case 95u: goto L_089A0764;
    case 96u: goto L_089A0774;
    case 97u: goto L_089A077C;
    case 98u: goto L_089A078C;
    case 99u: goto L_089A0798;
    case 100u: goto L_089A07A0;
    case 101u: goto L_089A07AC;
    case 102u: goto L_089A07B4;
    case 103u: goto L_089A07BC;
    case 104u: goto L_089A07CC;
    case 105u: goto L_089A07DC;
    case 106u: goto L_089A07E8;
    case 107u: goto L_089A0828;
    case 108u: goto L_089A0830;
    case 109u: goto L_089A0838;
    case 110u: goto L_089A0840;
    case 111u: goto L_089A0848;
    case 112u: goto L_089A0850;
    case 113u: goto L_089A0860;
    case 114u: goto L_089A0868;
    case 115u: goto L_089A0870;
    case 116u: goto L_089A0878;
    case 117u: goto L_089A0880;
    case 118u: goto L_089A0890;
    case 119u: goto L_089A089C;
    case 120u: goto L_089A08A4;
    case 121u: goto L_089A08AC;
    case 122u: goto L_089A08B0;
    case 123u: goto L_089A08B8;
    case 124u: goto L_089A08CC;
    case 125u: goto L_089A08D8;
    case 126u: goto L_089A08E8;
    case 127u: goto L_089A08F8;
    case 128u: goto L_089A0910;
    case 129u: goto L_089A0924;
    case 130u: goto L_089A0928;
    case 131u: goto L_089A0934;
    case 132u: goto L_089A0948;
    case 133u: goto L_089A0950;
    case 134u: goto L_089A0958;
    case 135u: goto L_089A0960;
    case 136u: goto L_089A096C;
    case 137u: goto L_089A0978;
    case 138u: goto L_089A0984;
    case 139u: goto L_089A0988;
    case 140u: goto L_089A0994;
    case 141u: goto L_089A09A8;
    case 142u: goto L_089A09B0;
    case 143u: goto L_089A09C4;
    case 144u: goto L_089A09CC;
    case 145u: goto L_089A09EC;
    case 146u: goto L_089A09F8;
    case 147u: goto L_089A0A04;
    case 148u: goto L_089A0A10;
    case 149u: goto L_089A0A44;
    case 150u: goto L_089A0A50;
    case 151u: goto L_089A0A60;
    case 152u: goto L_089A0A68;
    case 153u: goto L_089A0A74;
    case 154u: goto L_089A0A80;
    case 155u: goto L_089A0AA8;
    case 156u: goto L_089A0AB4;
    case 157u: goto L_089A0AC4;
    case 158u: goto L_089A0ACC;
    case 159u: goto L_089A0AD0;
    case 160u: goto L_089A0AF0;
    case 161u: goto L_089A0B08;
    case 162u: goto L_089A0B14;
    case 163u: goto L_089A0B40;
    case 164u: goto L_089A0B4C;
    case 165u: goto L_089A0B60;
    case 166u: goto L_089A0B6C;
    case 167u: goto L_089A0B7C;
    case 168u: goto L_089A0B84;
    case 169u: goto L_089A0B94;
    case 170u: goto L_089A0B98;
    case 171u: goto L_089A0BC0;
    case 172u: goto L_089A0BD0;
    case 173u: goto L_089A0BDC;
    case 174u: goto L_089A0C1C;
    case 175u: goto L_089A0C4C;
    case 176u: goto L_089A0C58;
    case 177u: goto L_089A0C68;
    case 178u: goto L_089A0CC4;
    case 179u: goto L_089A0CCC;
    case 180u: goto L_089A0CD0;
    case 181u: goto L_089A0CD8;
    case 182u: goto L_089A0CDC;
    case 183u: goto L_089A0CF0;
    case 184u: goto L_089A0D10;
    case 185u: goto L_089A0D30;
    case 186u: goto L_089A0D50;
    case 187u: goto L_089A0D60;
    case 188u: goto L_089A0D68;
    case 189u: goto L_089A0D70;
    case 190u: goto L_089A0D78;
    case 191u: goto L_089A0D84;
    case 192u: goto L_089A0D90;
    case 193u: goto L_089A0DA0;
    case 194u: goto L_089A0DF0;
    case 195u: goto L_089A0E04;
    case 196u: goto L_089A0E14;
    case 197u: goto L_089A0E1C;
    case 198u: goto L_089A0E58;
    case 199u: goto L_089A0E60;
    case 200u: goto L_089A0E70;
    case 201u: goto L_089A0E8C;
    case 202u: goto L_089A0E98;
    case 203u: goto L_089A0EA4;
    case 204u: goto L_089A0EB0;
    case 205u: goto L_089A0ED0;
    case 206u: goto L_089A0ED8;
    case 207u: goto L_089A0EF4;
    case 208u: goto L_089A0F00;
    case 209u: goto L_089A0F08;
    case 210u: goto L_089A0F2C;
    case 211u: goto L_089A0F3C;
    case 212u: goto L_089A0F44;
    case 213u: goto L_089A0F58;
    case 214u: goto L_089A0F88;
    case 215u: goto L_089A0F90;
    case 216u: goto L_089A0F9C;
    case 217u: goto L_089A0FA8;
    case 218u: goto L_089A0FB0;
    case 219u: goto L_089A0FB8;
    case 220u: goto L_089A0FC8;
    case 221u: goto L_089A0FDC;
    case 222u: goto L_089A1004;
    case 223u: goto L_089A100C;
    case 224u: goto L_089A1014;
    case 225u: goto L_089A1020;
    case 226u: goto L_089A1038;
    case 227u: goto L_089A1044;
    case 228u: goto L_089A104C;
    case 229u: goto L_089A1058;
    case 230u: goto L_089A1070;
    case 231u: goto L_089A1078;
    case 232u: goto L_089A1090;
    case 233u: goto L_089A109C;
    case 234u: goto L_089A10B0;
    case 235u: goto L_089A10C0;
    case 236u: goto L_089A10D8;
    case 237u: goto L_089A10E0;
    case 238u: goto L_089A10E8;
    case 239u: goto L_089A10F4;
    case 240u: goto L_089A1100;
    case 241u: goto L_089A1114;
    case 242u: goto L_089A1128;
    case 243u: goto L_089A1138;
    case 244u: goto L_089A1150;
    case 245u: goto L_089A1164;
    case 246u: goto L_089A1184;
    case 247u: goto L_089A11A4;
    case 248u: goto L_089A11D4;
    case 249u: goto L_089A11E4;
    case 250u: goto L_089A11F0;
    case 251u: goto L_089A1210;
    case 252u: goto L_089A1224;
    case 253u: goto L_089A125C;
    case 254u: goto L_089A126C;
    case 255u: goto L_089A1278;
    case 256u: goto L_089A1280;
    case 257u: goto L_089A1288;
    case 258u: goto L_089A129C;
    case 259u: goto L_089A12AC;
    case 260u: goto L_089A12B8;
    case 261u: goto L_089A12C0;
    case 262u: goto L_089A12E4;
    case 263u: goto L_089A131C;
    case 264u: goto L_089A132C;
    case 265u: goto L_089A1338;
    case 266u: goto L_089A1358;
    case 267u: goto L_089A136C;
    case 268u: goto L_089A13A8;
    case 269u: goto L_089A13B4;
    case 270u: goto L_089A13BC;
    case 271u: goto L_089A13D0;
    case 272u: goto L_089A13E0;
    case 273u: goto L_089A13F4;
    case 274u: goto L_089A1400;
    case 275u: goto L_089A141C;
    case 276u: goto L_089A1428;
    case 277u: goto L_089A1438;
    case 278u: goto L_089A1468;
    case 279u: goto L_089A14A4;
    case 280u: goto L_089A14AC;
    case 281u: goto L_089A14B4;
    case 282u: goto L_089A14BC;
    case 283u: goto L_089A14CC;
    case 284u: goto L_089A14EC;
    case 285u: goto L_089A14F4;
    case 286u: goto L_089A14FC;
    case 287u: goto L_089A1504;
    case 288u: goto L_089A1520;
    case 289u: goto L_089A1528;
    case 290u: goto L_089A1530;
    case 291u: goto L_089A1548;
    case 292u: goto L_089A1584;
    case 293u: goto L_089A15B0;
    case 294u: goto L_089A15BC;
    case 295u: goto L_089A15D4;
    case 296u: goto L_089A15E4;
    case 297u: goto L_089A15F4;
    case 298u: goto L_089A15FC;
    case 299u: goto L_089A1604;
    case 300u: goto L_089A160C;
    case 301u: goto L_089A1638;
    case 302u: goto L_089A1644;
    case 303u: goto L_089A165C;
    case 304u: goto L_089A1668;
    case 305u: goto L_089A1674;
    case 306u: goto L_089A1680;
    case 307u: goto L_089A1684;
    case 308u: goto L_089A168C;
    case 309u: goto L_089A16A0;
    case 310u: goto L_089A16B4;
    case 311u: goto L_089A16E4;
    case 312u: goto L_089A1710;
    case 313u: goto L_089A1718;
    case 314u: goto L_089A1728;
    case 315u: goto L_089A1730;
    case 316u: goto L_089A1738;
    case 317u: goto L_089A174C;
    case 318u: goto L_089A1764;
    case 319u: goto L_089A1774;
    case 320u: goto L_089A177C;
    case 321u: goto L_089A1784;
    case 322u: goto L_089A178C;
    case 323u: goto L_089A1794;
    case 324u: goto L_089A179C;
    case 325u: goto L_089A17A4;
    case 326u: goto L_089A17B0;
    case 327u: goto L_089A17B8;
    case 328u: goto L_089A17C4;
    case 329u: goto L_089A17D0;
    case 330u: goto L_089A17DC;
    case 331u: goto L_089A17E8;
    case 332u: goto L_089A17EC;
    case 333u: goto L_089A17F4;
    case 334u: goto L_089A17F8;
    case 335u: goto L_089A1808;
    case 336u: goto L_089A1828;
    case 337u: goto L_089A1854;
    case 338u: goto L_089A185C;
    case 339u: goto L_089A186C;
    case 340u: goto L_089A1874;
    case 341u: goto L_089A187C;
    case 342u: goto L_089A1884;
    case 343u: goto L_089A1890;
    case 344u: goto L_089A1898;
    case 345u: goto L_089A18A0;
    case 346u: goto L_089A18A8;
    case 347u: goto L_089A18B0;
    case 348u: goto L_089A18B8;
    case 349u: goto L_089A18C0;
    case 350u: goto L_089A18C4;
    case 351u: goto L_089A18CC;
    case 352u: goto L_089A18D8;
    case 353u: goto L_089A18E0;
    case 354u: goto L_089A18E8;
    case 355u: goto L_089A18EC;
    case 356u: goto L_089A18F4;
    case 357u: goto L_089A190C;
    case 358u: goto L_089A1918;
    case 359u: goto L_089A1938;
    case 360u: goto L_089A194C;
    case 361u: goto L_089A1960;
    case 362u: goto L_089A199C;
    case 363u: goto L_089A19A4;
    case 364u: goto L_089A19AC;
    case 365u: goto L_089A19BC;
    case 366u: goto L_089A19D4;
    case 367u: goto L_089A19DC;
    case 368u: goto L_089A19E4;
    case 369u: goto L_089A19EC;
    case 370u: goto L_089A19F4;
    case 371u: goto L_089A1A04;
    case 372u: goto L_089A1A10;
    case 373u: goto L_089A1A18;
    case 374u: goto L_089A1A20;
    case 375u: goto L_089A1A24;
    case 376u: goto L_089A1A2C;
    case 377u: goto L_089A1A40;
    case 378u: goto L_089A1A54;
    case 379u: goto L_089A1A90;
    case 380u: goto L_089A1A98;
    case 381u: goto L_089A1AB4;
    case 382u: goto L_089A1ACC;
    case 383u: goto L_089A1AE0;
    case 384u: goto L_089A1AF0;
    case 385u: goto L_089A1B10;
    case 386u: goto L_089A1B40;
    case 387u: goto L_089A1B48;
    case 388u: goto L_089A1B58;
    case 389u: goto L_089A1B60;
    case 390u: goto L_089A1B68;
    case 391u: goto L_089A1B70;
    case 392u: goto L_089A1B78;
    case 393u: goto L_089A1B98;
    case 394u: goto L_089A1BA4;
    case 395u: goto L_089A1BAC;
    case 396u: goto L_089A1BB4;
    case 397u: goto L_089A1BB8;
    case 398u: goto L_089A1BC0;
    case 399u: goto L_089A1BE4;
    case 400u: goto L_089A1BF4;
    case 401u: goto L_089A1BFC;
    case 402u: goto L_089A1C1C;
    case 403u: goto L_089A1C30;
    case 404u: goto L_089A1C3C;
    case 405u: goto L_089A1C44;
    case 406u: goto L_089A1C60;
    case 407u: goto L_089A1C78;
    case 408u: goto L_089A1C8C;
    case 409u: goto L_089A1C9C;
    case 410u: goto L_089A1CC0;
    case 411u: goto L_089A1CD4;
    case 412u: goto L_089A1D00;
    case 413u: goto L_089A1D08;
    case 414u: goto L_089A1D1C;
    case 415u: goto L_089A1D28;
    case 416u: goto L_089A1D40;
    case 417u: goto L_089A1D60;
    case 418u: goto L_089A1D7C;
    case 419u: goto L_089A1D84;
    case 420u: goto L_089A1D90;
    case 421u: goto L_089A1DA8;
    case 422u: goto L_089A1DB0;
    case 423u: goto L_089A1DBC;
    case 424u: goto L_089A1DCC;
    case 425u: goto L_089A1DD4;
    case 426u: goto L_089A1E2C;
    case 427u: goto L_089A1E34;
    case 428u: goto L_089A1E40;
    case 429u: goto L_089A1E4C;
    case 430u: goto L_089A1E54;
    case 431u: goto L_089A1E5C;
    case 432u: goto L_089A1E6C;
    case 433u: goto L_089A1E8C;
    case 434u: goto L_089A1E94;
    case 435u: goto L_089A1EA4;
    case 436u: goto L_089A1EB0;
    case 437u: goto L_089A1EB8;
    case 438u: goto L_089A1EC0;
    case 439u: goto L_089A1EC4;
    case 440u: goto L_089A1ED8;
    case 441u: goto L_089A1EEC;
    case 442u: goto L_089A1EF8;
    case 443u: goto L_089A1F04;
    case 444u: goto L_089A1F0C;
    case 445u: goto L_089A1F14;
    case 446u: goto L_089A1F18;
    case 447u: goto L_089A1F20;
    case 448u: goto L_089A1F24;
    case 449u: goto L_089A1F50;
    case 450u: goto L_089A1F5C;
    case 451u: goto L_089A1F74;
    case 452u: goto L_089A1F7C;
    case 453u: goto L_089A1F84;
    case 454u: goto L_089A1F98;
    case 455u: goto L_089A1FA8;
    case 456u: goto L_089A1FB0;
    case 457u: goto L_089A1FB8;
    case 458u: goto L_089A1FC0;
    case 459u: goto L_089A1FCC;
    case 460u: goto L_089A1FD4;
    case 461u: goto L_089A1FD8;
    case 462u: goto L_089A2020;
    case 463u: goto L_089A2034;
    case 464u: goto L_089A2048;
    case 465u: goto L_089A2050;
    case 466u: goto L_089A2060;
    case 467u: goto L_089A2070;
    case 468u: goto L_089A207C;
    case 469u: goto L_089A2088;
    case 470u: goto L_089A2094;
    case 471u: goto L_089A2098;
    case 472u: goto L_089A20A0;
    case 473u: goto L_089A20A4;
    case 474u: goto L_089A2104;
    case 475u: goto L_089A2144;
    case 476u: goto L_089A2154;
    case 477u: goto L_089A2178;
    case 478u: goto L_089A2180;
    case 479u: goto L_089A2188;
    case 480u: goto L_089A2194;
    case 481u: goto L_089A219C;
    case 482u: goto L_089A21A4;
    case 483u: goto L_089A21AC;
    case 484u: goto L_089A21B4;
    case 485u: goto L_089A21BC;
    case 486u: goto L_089A21C0;
    case 487u: goto L_089A21C8;
    case 488u: goto L_089A21CC;
    case 489u: goto L_089A21F8;
    case 490u: goto L_089A2210;
    case 491u: goto L_089A2224;
    case 492u: goto L_089A2240;
    case 493u: goto L_089A2260;
    case 494u: goto L_089A226C;
    case 495u: goto L_089A2280;
    case 496u: goto L_089A22A0;
    case 497u: goto L_089A22A4;
    case 498u: goto L_089A22B0;
    case 499u: goto L_089A22B8;
    case 500u: goto L_089A22D0;
    case 501u: goto L_089A22E4;
    case 502u: goto L_089A22EC;
    case 503u: goto L_089A22F8;
    case 504u: goto L_089A22FC;
    case 505u: goto L_089A2304;
    case 506u: goto L_089A2310;
    case 507u: goto L_089A2318;
    case 508u: goto L_089A2320;
    case 509u: goto L_089A2328;
    case 510u: goto L_089A2330;
    case 511u: goto L_089A2338;
    case 512u: goto L_089A233C;
    case 513u: goto L_089A2344;
    case 514u: goto L_089A2354;
    case 515u: goto L_089A2358;
    case 516u: goto L_089A236C;
    case 517u: goto L_089A2388;
    case 518u: goto L_089A2390;
    case 519u: goto L_089A239C;
    case 520u: goto L_089A23AC;
    case 521u: goto L_089A23BC;
    case 522u: goto L_089A23CC;
    case 523u: goto L_089A23E4;
    case 524u: goto L_089A23EC;
    case 525u: goto L_089A23F4;
    case 526u: goto L_089A2414;
    case 527u: goto L_089A2420;
    case 528u: goto L_089A242C;
    case 529u: goto L_089A243C;
    case 530u: goto L_089A2444;
    case 531u: goto L_089A244C;
    case 532u: goto L_089A245C;
    case 533u: goto L_089A2468;
    case 534u: goto L_089A2470;
    case 535u: goto L_089A2478;
    case 536u: goto L_089A2494;
    case 537u: goto L_089A24AC;
    case 538u: goto L_089A24B8;
    case 539u: goto L_089A24C8;
    case 540u: goto L_089A24D0;
    case 541u: goto L_089A24D8;
    case 542u: goto L_089A24E8;
    case 543u: goto L_089A24F4;
    case 544u: goto L_089A2500;
    case 545u: goto L_089A2508;
    case 546u: goto L_089A2520;
    case 547u: goto L_089A2528;
    case 548u: goto L_089A253C;
    case 549u: goto L_089A2548;
    case 550u: goto L_089A2560;
    case 551u: goto L_089A2568;
    case 552u: goto L_089A2570;
    case 553u: goto L_089A257C;
    case 554u: goto L_089A258C;
    case 555u: goto L_089A259C;
    case 556u: goto L_089A25A8;
    case 557u: goto L_089A25C0;
    case 558u: goto L_089A25C8;
    case 559u: goto L_089A25D0;
    case 560u: goto L_089A25DC;
    case 561u: goto L_089A25E8;
    case 562u: goto L_089A2660;
    case 563u: goto L_089A267C;
    case 564u: goto L_089A2684;
    case 565u: goto L_089A26AC;
    case 566u: goto L_089A26BC;
    case 567u: goto L_089A26D0;
    case 568u: goto L_089A26DC;
    case 569u: goto L_089A26F8;
    case 570u: goto L_089A2710;
    case 571u: goto L_089A2730;
    case 572u: goto L_089A2738;
    case 573u: goto L_089A2740;
    case 574u: goto L_089A2754;
    case 575u: goto L_089A2778;
    case 576u: goto L_089A27A0;
    case 577u: goto L_089A27A8;
    case 578u: goto L_089A27D0;
    case 579u: goto L_089A27D4;
    case 580u: goto L_089A27E4;
    case 581u: goto L_089A2810;
    case 582u: goto L_089A2818;
    case 583u: goto L_089A2820;
    case 584u: goto L_089A2828;
    case 585u: goto L_089A2834;
    case 586u: goto L_089A2850;
    case 587u: goto L_089A2860;
    case 588u: goto L_089A2868;
    case 589u: goto L_089A2870;
    case 590u: goto L_089A2878;
    case 591u: goto L_089A2880;
    case 592u: goto L_089A289C;
    case 593u: goto L_089A28AC;
    case 594u: goto L_089A28B4;
    case 595u: goto L_089A28C0;
    case 596u: goto L_089A28C8;
    case 597u: goto L_089A28D8;
    case 598u: goto L_089A28E0;
    case 599u: goto L_089A28F0;
    case 600u: goto L_089A28FC;
    case 601u: goto L_089A2908;
    case 602u: goto L_089A2920;
    case 603u: goto L_089A2934;
    case 604u: goto L_089A2940;
    case 605u: goto L_089A2948;
    case 606u: goto L_089A2950;
    case 607u: goto L_089A2960;
    case 608u: goto L_089A296C;
    case 609u: goto L_089A2974;
    case 610u: goto L_089A298C;
    case 611u: goto L_089A299C;
    case 612u: goto L_089A29A8;
    case 613u: goto L_089A29B0;
    case 614u: goto L_089A29C8;
    case 615u: goto L_089A29DC;
    case 616u: goto L_089A29F0;
    case 617u: goto L_089A2A08;
    case 618u: goto L_089A2A14;
    case 619u: goto L_089A2A24;
    case 620u: goto L_089A2A2C;
    case 621u: goto L_089A2A38;
    case 622u: goto L_089A2A54;
    case 623u: goto L_089A2A70;
    case 624u: goto L_089A2A7C;
    case 625u: goto L_089A2A94;
    case 626u: goto L_089A2AAC;
    case 627u: goto L_089A2AB4;
    case 628u: goto L_089A2AC4;
    case 629u: goto L_089A2ADC;
    case 630u: goto L_089A2AE4;
    case 631u: goto L_089A2AFC;
    case 632u: goto L_089A2B20;
    case 633u: goto L_089A2B30;
    case 634u: goto L_089A2B60;
    case 635u: goto L_089A2B6C;
    case 636u: goto L_089A2B7C;
    case 637u: goto L_089A2B88;
    case 638u: goto L_089A2B90;
    case 639u: goto L_089A2B98;
    case 640u: goto L_089A2B9C;
    case 641u: goto L_089A2BA4;
    case 642u: goto L_089A2BB4;
    case 643u: goto L_089A2BCC;
    case 644u: goto L_089A2C04;
    case 645u: goto L_089A2C24;
    case 646u: goto L_089A2C30;
    case 647u: goto L_089A2C38;
    case 648u: goto L_089A2C50;
    case 649u: goto L_089A2C58;
    case 650u: goto L_089A2C68;
    case 651u: goto L_089A2C70;
    case 652u: goto L_089A2C80;
    case 653u: goto L_089A2C88;
    case 654u: goto L_089A2C90;
    case 655u: goto L_089A2C98;
    case 656u: goto L_089A2CA8;
    case 657u: goto L_089A2CB4;
    case 658u: goto L_089A2CC0;
    case 659u: goto L_089A2CC8;
    case 660u: goto L_089A2CD0;
    case 661u: goto L_089A2CD8;
    case 662u: goto L_089A2CE0;
    case 663u: goto L_089A2CE8;
    case 664u: goto L_089A2CF0;
    case 665u: goto L_089A2CF8;
    case 666u: goto L_089A2D00;
    case 667u: goto L_089A2D08;
    case 668u: goto L_089A2D10;
    case 669u: goto L_089A2D18;
    case 670u: goto L_089A2D20;
    case 671u: goto L_089A2D28;
    case 672u: goto L_089A2D30;
    case 673u: goto L_089A2D38;
    case 674u: goto L_089A2D3C;
    case 675u: goto L_089A2D48;
    case 676u: goto L_089A2D50;
    case 677u: goto L_089A2D54;
    case 678u: goto L_089A2D68;
    case 679u: goto L_089A2D9C;
    case 680u: goto L_089A2DA4;
    case 681u: goto L_089A2DAC;
    case 682u: goto L_089A2DBC;
    case 683u: goto L_089A2DC4;
    case 684u: goto L_089A2DD8;
    case 685u: goto L_089A2DE8;
    case 686u: goto L_089A2DF8;
    case 687u: goto L_089A2E04;
    case 688u: goto L_089A2E20;
    case 689u: goto L_089A2E28;
    case 690u: goto L_089A2E30;
    case 691u: goto L_089A2E3C;
    case 692u: goto L_089A2E44;
    case 693u: goto L_089A2E4C;
    case 694u: goto L_089A2E50;
    case 695u: goto L_089A2E58;
    case 696u: goto L_089A2E5C;
    case 697u: goto L_089A2E7C;
    case 698u: goto L_089A2E88;
    case 699u: goto L_089A2E94;
    case 700u: goto L_089A2E9C;
    case 701u: goto L_089A2EA4;
    case 702u: goto L_089A2EAC;
    case 703u: goto L_089A2EB4;
    case 704u: goto L_089A2EBC;
    case 705u: goto L_089A2EC4;
    case 706u: goto L_089A2ECC;
    case 707u: goto L_089A2ED0;
    case 708u: goto L_089A2ED8;
    case 709u: goto L_089A2EE4;
    case 710u: goto L_089A2EEC;
    case 711u: goto L_089A2EF4;
    case 712u: goto L_089A2EFC;
    case 713u: goto L_089A2F04;
    case 714u: goto L_089A2F0C;
    case 715u: goto L_089A2F14;
    case 716u: goto L_089A2F18;
    case 717u: goto L_089A2F20;
    case 718u: goto L_089A2F5C;
    case 719u: goto L_089A2F6C;
    case 720u: goto L_089A2F8C;
    case 721u: goto L_089A2F94;
    case 722u: goto L_089A2FA4;
    case 723u: goto L_089A2FB0;
    case 724u: goto L_089A2FC0;
    case 725u: goto L_089A2FCC;
    case 726u: goto L_089A2FEC;
    case 727u: goto L_089A2FF8;
    case 728u: goto L_089A3004;
    case 729u: goto L_089A300C;
    case 730u: goto L_089A3024;
    case 731u: goto L_089A3048;
    case 732u: goto L_089A3064;
    case 733u: goto L_089A3074;
    case 734u: goto L_089A307C;
    case 735u: goto L_089A3088;
    case 736u: goto L_089A3094;
    case 737u: goto L_089A30A0;
    case 738u: goto L_089A30A8;
    case 739u: goto L_089A30B8;
    case 740u: goto L_089A30C0;
    case 741u: goto L_089A30E4;
    case 742u: goto L_089A3120;
    case 743u: goto L_089A3128;
    case 744u: goto L_089A3134;
    case 745u: goto L_089A3150;
    case 746u: goto L_089A3160;
    case 747u: goto L_089A3178;
    case 748u: goto L_089A3188;
    case 749u: goto L_089A31A8;
    case 750u: goto L_089A31B4;
    case 751u: goto L_089A31BC;
    case 752u: goto L_089A31C4;
    case 753u: goto L_089A31C8;
    case 754u: goto L_089A31D0;
    case 755u: goto L_089A31D4;
    case 756u: goto L_089A31DC;
    case 757u: goto L_089A31F8;
    case 758u: goto L_089A3210;
    case 759u: goto L_089A3218;
    case 760u: goto L_089A3228;
    case 761u: goto L_089A3230;
    case 762u: goto L_089A3238;
    case 763u: goto L_089A3240;
    case 764u: goto L_089A3250;
    case 765u: goto L_089A326C;
    case 766u: goto L_089A3278;
    case 767u: goto L_089A3280;
    case 768u: goto L_089A3290;
    case 769u: goto L_089A3298;
    case 770u: goto L_089A32A0;
    case 771u: goto L_089A32A8;
    case 772u: goto L_089A32B0;
    case 773u: goto L_089A32C0;
    case 774u: goto L_089A32C8;
    case 775u: goto L_089A32D0;
    case 776u: goto L_089A32E4;
    case 777u: goto L_089A3300;
    case 778u: goto L_089A3308;
    case 779u: goto L_089A3318;
    case 780u: goto L_089A332C;
    case 781u: goto L_089A333C;
    case 782u: goto L_089A3344;
    case 783u: goto L_089A336C;
    case 784u: goto L_089A337C;
    case 785u: goto L_089A3388;
    case 786u: goto L_089A3394;
    case 787u: goto L_089A33A4;
    case 788u: goto L_089A33B0;
    case 789u: goto L_089A33B8;
    case 790u: goto L_089A33C4;
    case 791u: goto L_089A33CC;
    case 792u: goto L_089A33DC;
    case 793u: goto L_089A33F8;
    case 794u: goto L_089A3440;
    case 795u: goto L_089A3454;
    case 796u: goto L_089A3470;
    case 797u: goto L_089A3480;
    case 798u: goto L_089A34AC;
    case 799u: goto L_089A34E0;
    case 800u: goto L_089A34F4;
    case 801u: goto L_089A352C;
    case 802u: goto L_089A3534;
    case 803u: goto L_089A35C4;
    case 804u: goto L_089A35CC;
    case 805u: goto L_089A35D4;
    case 806u: goto L_089A35DC;
    case 807u: goto L_089A35E8;
    case 808u: goto L_089A35F0;
    case 809u: goto L_089A35F8;
    case 810u: goto L_089A3600;
    case 811u: goto L_089A3608;
    case 812u: goto L_089A3610;
    case 813u: goto L_089A3614;
    case 814u: goto L_089A361C;
    case 815u: goto L_089A3628;
    case 816u: goto L_089A363C;
    case 817u: goto L_089A3650;
    case 818u: goto L_089A3658;
    case 819u: goto L_089A3660;
    case 820u: goto L_089A367C;
    case 821u: goto L_089A3684;
    case 822u: goto L_089A36F4;
    case 823u: goto L_089A3710;
    case 824u: goto L_089A3728;
    case 825u: goto L_089A373C;
    case 826u: goto L_089A376C;
    case 827u: goto L_089A3778;
    case 828u: goto L_089A37A8;
    case 829u: goto L_089A37C0;
    case 830u: goto L_089A37C8;
    case 831u: goto L_089A37D0;
    case 832u: goto L_089A37D8;
    case 833u: goto L_089A37E8;
    case 834u: goto L_089A37F8;
    case 835u: goto L_089A3828;
    case 836u: goto L_089A3830;
    case 837u: goto L_089A385C;
    case 838u: goto L_089A3870;
    case 839u: goto L_089A3878;
    case 840u: goto L_089A3890;
    case 841u: goto L_089A38A0;
    case 842u: goto L_089A38AC;
    case 843u: goto L_089A38B4;
    case 844u: goto L_089A38B8;
    case 845u: goto L_089A38C0;
    case 846u: goto L_089A38D0;
    case 847u: goto L_089A38D8;
    case 848u: goto L_089A38E0;
    case 849u: goto L_089A38E4;
    case 850u: goto L_089A38EC;
    case 851u: goto L_089A3924;
    case 852u: goto L_089A392C;
    case 853u: goto L_089A393C;
    case 854u: goto L_089A3954;
    case 855u: goto L_089A395C;
    case 856u: goto L_089A3964;
    case 857u: goto L_089A3970;
    case 858u: goto L_089A3984;
    case 859u: goto L_089A39A8;
    case 860u: goto L_089A39B8;
    case 861u: goto L_089A39C0;
    case 862u: goto L_089A3A04;
    case 863u: goto L_089A3A24;
    case 864u: goto L_089A3A34;
    case 865u: goto L_089A3A48;
    case 866u: goto L_089A3A60;
    case 867u: goto L_089A3A68;
    case 868u: goto L_089A3A7C;
    case 869u: goto L_089A3A88;
    case 870u: goto L_089A3ABC;
    case 871u: goto L_089A3ADC;
    case 872u: goto L_089A3AE4;
    case 873u: goto L_089A3AF4;
    case 874u: goto L_089A3B10;
    case 875u: goto L_089A3B18;
    case 876u: goto L_089A3B20;
    case 877u: goto L_089A3B64;
    case 878u: goto L_089A3B78;
    case 879u: goto L_089A3B90;
    case 880u: goto L_089A3BA4;
    case 881u: goto L_089A3BB0;
    case 882u: goto L_089A3BCC;
    case 883u: goto L_089A3BD8;
    case 884u: goto L_089A3BE4;
    case 885u: goto L_089A3C00;
    case 886u: goto L_089A3C0C;
    case 887u: goto L_089A3C28;
    case 888u: goto L_089A3C38;
    case 889u: goto L_089A3C48;
    case 890u: goto L_089A3C7C;
    case 891u: goto L_089A3C84;
    case 892u: goto L_089A3C8C;
    case 893u: goto L_089A3C98;
    case 894u: goto L_089A3CA8;
    case 895u: goto L_089A3CB4;
    case 896u: goto L_089A3CCC;
    case 897u: goto L_089A3CE8;
    case 898u: goto L_089A3D00;
    case 899u: goto L_089A3D10;
    case 900u: goto L_089A3D1C;
    case 901u: goto L_089A3D24;
    case 902u: goto L_089A3D2C;
    case 903u: goto L_089A3D38;
    case 904u: goto L_089A3D50;
    case 905u: goto L_089A3D60;
    case 906u: goto L_089A3D6C;
    case 907u: goto L_089A3D74;
    case 908u: goto L_089A3D7C;
    case 909u: goto L_089A3D84;
    case 910u: goto L_089A3D98;
    case 911u: goto L_089A3DA8;
    case 912u: goto L_089A3DC8;
    case 913u: goto L_089A3DD0;
    case 914u: goto L_089A3DE8;
    case 915u: goto L_089A3DEC;
    case 916u: goto L_089A3DFC;
    case 917u: goto L_089A3E08;
    case 918u: goto L_089A3E10;
    case 919u: goto L_089A3E18;
    case 920u: goto L_089A3E1C;
    case 921u: goto L_089A3E24;
    case 922u: goto L_089A3E28;
    case 923u: goto L_089A3E4C;
    case 924u: goto L_089A3E8C;
    case 925u: goto L_089A3E98;
    case 926u: goto L_089A3EA4;
    case 927u: goto L_089A3EAC;
    case 928u: goto L_089A3EB4;
    case 929u: goto L_089A3EC0;
    case 930u: goto L_089A3EC8;
    case 931u: goto L_089A3EFC;
    case 932u: goto L_089A3F10;
    case 933u: goto L_089A3F1C;
    case 934u: goto L_089A3F24;
    case 935u: goto L_089A3F2C;
    case 936u: goto L_089A3F4C;
    case 937u: goto L_089A3F64;
    case 938u: goto L_089A3F6C;
    case 939u: goto L_089A3F84;
    case 940u: goto L_089A3F8C;
    case 941u: goto L_089A3F98;
    case 942u: goto L_089A3FA4;
    case 943u: goto L_089A3FBC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089A0000:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A000C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (16457u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A0068;
      }
      goto L_089A003C;
    }
L_089A003C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089A0064u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089A0064u) goto L_089A0064;
    return;
L_089A0064:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1764), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089A0068;
L_089A0068:
    ctx.gpr[31] = (0x089A0070u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1764)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089A0070u) goto L_089A0070;
    return;
L_089A0070:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A00A0;
      }
      goto L_089A008C;
    }
L_089A008C:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
      if (branch_taken) {
          goto L_089A00C4;
      }
      goto L_089A00A0;
    }
L_089A00A0:
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A00C4;
      }
      goto L_089A00B4;
    }
L_089A00B4:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_089A00C4;
L_089A00C4:
    ctx.fpr[15] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
        goto L_089A00E4;
    }
    goto L_089A00E4;
L_089A00E4:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16544u << 16u);
      if (branch_taken) {
          goto L_089A0110;
      }
      goto L_089A0100;
    }
L_089A0100:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    goto L_089A0110;
L_089A0110:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1764), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0134:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A0154u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_089A38A0;
L_089A0154:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(784));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-513));
      if (branch_taken) {
          goto L_089A0180;
      }
      goto L_089A0160;
    }
L_089A0160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0180;
      }
      goto L_089A0170;
    }
L_089A0170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
    goto L_089A0180;
L_089A0180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0244;
      }
      goto L_089A018C;
    }
L_089A018C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089A01C8;
      }
      goto L_089A01AC;
    }
L_089A01AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(784));
    ctx.gpr[31] = (0x089A01C0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 42u, 0x08AA83C4u>(ctx, &aot_mem) && ctx.pc == 0x089A01C0u) goto L_089A01C0;
    return;
L_089A01C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A01D8;
      }
      goto L_089A01C8;
    }
L_089A01C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    goto L_089A01D8;
L_089A01D8:
    ctx.gpr[31] = (0x089A01E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A38A0;
L_089A01E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A01F4;
      }
      goto L_089A01E8;
    }
L_089A01E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A01F4u);
    ctx.gpr[5] = (0u | 138u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089A01F4u) goto L_089A01F4;
    return;
L_089A01F4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089A0200u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 76u, 0x08AA87A4u>(ctx, &aot_mem) && ctx.pc == 0x089A0200u) goto L_089A0200;
    return;
L_089A0200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[2] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] << 9u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A023C;
      }
      goto L_089A0228;
    }
L_089A0228:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089A023Cu);
    ctx.gpr[7] = (0u | 1u);
    goto L_089A064C;
L_089A023C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A02A8;
      }
      goto L_089A0244;
    }
L_089A0244:
    ctx.gpr[31] = (0x089A024Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A38A0;
L_089A024C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0280;
      }
      goto L_089A0254;
    }
L_089A0254:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1764)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3192)));
    ctx.gpr[31] = (0x089A0264u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 141u, 0x08AA8F48u>(ctx, &aot_mem) && ctx.pc == 0x089A0264u) goto L_089A0264;
    return;
L_089A0264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[2] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] << 9u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A02A8;
      }
      goto L_089A0280;
    }
L_089A0280:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1764)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x089A0290u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 141u, 0x08AA8F48u>(ctx, &aot_mem) && ctx.pc == 0x089A0290u) goto L_089A0290;
    return;
L_089A0290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[2] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] << 9u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089A02A8;
L_089A02A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A02C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0320;
      }
      goto L_089A02E4;
    }
L_089A02E4:
    ctx.gpr[31] = (0x089A02ECu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(784));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 85u, 0x08AA88E8u>(ctx, &aot_mem) && ctx.pc == 0x089A02ECu) goto L_089A02EC;
    return;
L_089A02EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A030C;
      }
      goto L_089A02F4;
    }
L_089A02F4:
    ctx.gpr[31] = (0x089A02FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A38A0;
L_089A02FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0340;
      }
      goto L_089A0304;
    }
L_089A0304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0348;
      }
      goto L_089A030C;
    }
L_089A030C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A0348;
      }
      goto L_089A0320;
    }
L_089A0320:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-257));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A0348;
      }
      goto L_089A0340;
    }
L_089A0340:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089A0348;
L_089A0348:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0358:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[5] | 128u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-257));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1764), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1780), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1760), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1328), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A03AC;
      }
      goto L_089A039C;
    }
L_089A039C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
    goto L_089A03AC;
L_089A03AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x089A03CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x089A03CCu) goto L_089A03CC;
    return;
L_089A03CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
      if (branch_taken) {
          goto L_089A03F0;
      }
      goto L_089A03E4;
    }
L_089A03E4:
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A03FC;
      }
      goto L_089A03F0;
    }
L_089A03F0:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
    goto L_089A03FC;
L_089A03FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A040C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1760)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(1760));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(1328));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089A0458;
      }
      goto L_089A0450;
    }
L_089A0450:
    ctx.gpr[31] = (0x089A0458u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A0458u) goto L_089A0458;
    return;
L_089A0458:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1760), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A0468u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089A0468u) goto L_089A0468;
    return;
L_089A0468:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089A047C;
      }
      goto L_089A0474;
    }
L_089A0474:
    ctx.gpr[31] = (0x089A047Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A047Cu) goto L_089A047C;
    return;
L_089A047C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1328), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A048Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089A048Cu) goto L_089A048C;
    return;
L_089A048C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1780), 0u);
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
L_089A04AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
      if (branch_taken) {
          goto L_089A04F0;
      }
      goto L_089A04CC;
    }
L_089A04CC:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1780), 0u);
    goto L_089A04F0;
L_089A04F0:
    ctx.gpr[31] = (0x089A04F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A38A0;
L_089A04F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0508;
      }
      goto L_089A0500;
    }
L_089A0500:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089A0508;
L_089A0508:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0518:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 57u);
      if (branch_taken) {
          goto L_089A0558;
      }
      goto L_089A0528;
    }
L_089A0528:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A0558;
      }
      goto L_089A0530;
    }
L_089A0530:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0558;
      }
      goto L_089A0540;
    }
L_089A0540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    ctx.gpr[5] = (0u | 48u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 45u);
      if (branch_taken) {
          goto L_089A0558;
      }
      goto L_089A0550;
    }
L_089A0550:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A0560;
      }
      goto L_089A0558;
    }
L_089A0558:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A0564;
      }
      goto L_089A0560;
    }
L_089A0560:
    ctx.gpr[2] = (0u | 1u);
    goto L_089A0564;
L_089A0564:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A056C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A0584u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(784));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 64u, 0x08AA8698u>(ctx, &aot_mem) && ctx.pc == 0x089A0584u) goto L_089A0584;
    return;
L_089A0584:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A059C;
      }
      goto L_089A058C;
    }
L_089A058C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089A059C;
L_089A059C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A05AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089A05E0;
      }
      goto L_089A05D8;
    }
L_089A05D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A063C;
      }
      goto L_089A05E0;
    }
L_089A05E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1764), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1760), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1780), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x089A0624u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A0518;
L_089A0624:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A063C;
      }
      goto L_089A062C;
    }
L_089A062C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
    goto L_089A063C;
L_089A063C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A064C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[7] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_089A068C;
      }
      goto L_089A0684;
    }
L_089A0684:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0700;
      }
      goto L_089A068C;
    }
L_089A068C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1760), ctx.gpr[4]);
    ctx.gpr[31] = (0x089A06B0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1760));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089A06B0u) goto L_089A06B0;
    return;
L_089A06B0:
    ctx.gpr[4] = (18804u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 9200u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (ctx.gpr[17] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1764), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] << 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1780), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x089A06E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A0518;
L_089A06E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0700;
      }
      goto L_089A06F0;
    }
L_089A06F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
    goto L_089A0700;
L_089A0700:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0714:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
      if (branch_taken) {
          goto L_089A07BC;
      }
      goto L_089A0734;
    }
L_089A0734:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[31] = (0x089A075Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A0518;
L_089A075C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0774;
      }
      goto L_089A0764;
    }
L_089A0764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
    goto L_089A0774;
L_089A0774:
    ctx.gpr[31] = (0x089A077Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A38A0;
L_089A077C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
      if (branch_taken) {
          goto L_089A0798;
      }
      goto L_089A078C;
    }
L_089A078C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1780), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A07A0;
      }
      goto L_089A0798;
    }
L_089A0798:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1780), ctx.gpr[5]);
    goto L_089A07A0;
L_089A07A0:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_089A07B4;
      }
      goto L_089A07AC;
    }
L_089A07AC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A07BC;
      }
      goto L_089A07B4;
    }
L_089A07B4:
    ctx.gpr[31] = (0x089A07BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 801u, 0x0899FFC4u>(ctx, &aot_mem) && ctx.pc == 0x089A07BCu) goto L_089A07BC;
    return;
L_089A07BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A07CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A07DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089A07DCu) goto L_089A07DC;
    return;
L_089A07DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A07E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1924)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089A0840;
      }
      goto L_089A0828;
    }
L_089A0828:
    ctx.gpr[31] = (0x089A0830u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089A0830u) goto L_089A0830;
    return;
L_089A0830:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0868;
      }
      goto L_089A0838;
    }
L_089A0838:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0848;
      }
      goto L_089A0840;
    }
L_089A0840:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0B98;
      }
      goto L_089A0848;
    }
L_089A0848:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0B98;
      }
      goto L_089A0850;
    }
L_089A0850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 55u);
      if (branch_taken) {
          goto L_089A0B98;
      }
      goto L_089A0860;
    }
L_089A0860:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A0B98;
      }
      goto L_089A0868;
    }
L_089A0868:
    ctx.gpr[31] = (0x089A0870u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A0714;
L_089A0870:
    ctx.gpr[31] = (0x089A0878u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A04AC;
L_089A0878:
    ctx.gpr[31] = (0x089A0880u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 727u, 0x0899FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0880u) goto L_089A0880;
    return;
L_089A0880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A08B8;
      }
      goto L_089A0890;
    }
L_089A0890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A08B0;
      }
      goto L_089A089C;
    }
L_089A089C:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A08B0;
    }
    goto L_089A08A4;
L_089A08A4:
    ctx.gpr[31] = (0x089A08ACu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A08ACu) goto L_089A08AC;
    return;
L_089A08AC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A08B0;
L_089A08B0:
    ctx.gpr[31] = (0x089A08B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A1D00;
L_089A08B8:
    ctx.gpr[4] = (0u | 42u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 169u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A0950;
      }
      goto L_089A08CC;
    }
L_089A08CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A08D8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089A08D8u) goto L_089A08D8;
    return;
L_089A08D8:
    ctx.gpr[4] = (16640u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A0910;
      }
      goto L_089A08E8;
    }
L_089A08E8:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089A08F8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x089A08F8u) goto L_089A08F8;
    return;
L_089A08F8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A0928;
      }
      goto L_089A0910;
    }
L_089A0910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A0924u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089A0924u) goto L_089A0924;
    return;
L_089A0924:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_089A0928;
L_089A0928:
    ctx.gpr[4] = (0u | 121u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A0988;
      }
      goto L_089A0934;
    }
L_089A0934:
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089A0948u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x089A0948u) goto L_089A0948;
    return;
L_089A0948:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0988;
      }
      goto L_089A0950;
    }
L_089A0950:
    ctx.gpr[31] = (0x089A0958u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A38A0;
L_089A0958:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0988;
      }
      goto L_089A0960;
    }
L_089A0960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A096Cu);
    ctx.gpr[5] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089A096Cu) goto L_089A096C;
    return;
L_089A096C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0988;
      }
      goto L_089A0978;
    }
L_089A0978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A0984u);
    ctx.gpr[5] = (0u | 131u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089A0984u) goto L_089A0984;
    return;
L_089A0984:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_089A0988;
L_089A0988:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A09A8;
      }
      goto L_089A0994;
    }
L_089A0994:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1776), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] | 16u);
      if (branch_taken) {
          goto L_089A0B94;
      }
      goto L_089A09A8;
    }
L_089A09A8:
    ctx.gpr[31] = (0x089A09B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A38A0;
L_089A09B0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] | 16u);
      if (branch_taken) {
          goto L_089A0ACC;
      }
      goto L_089A09C4;
    }
L_089A09C4:
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
        goto L_089A0AD0;
    }
    goto L_089A09CC;
L_089A09CC:
    ctx.gpr[9] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[9] = (20224u << 16u);
    ctx.gpr[8] = (0u | 130u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[8];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089A09F8;
      }
      goto L_089A09EC;
    }
L_089A09EC:
    ctx.gpr[8] = (0u | 131u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089A0A68;
      }
      goto L_089A09F8;
    }
L_089A09F8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_089A0A10;
      }
      goto L_089A0A04;
    }
L_089A0A04:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    goto L_089A0A10;
L_089A0A10:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
        goto L_089A0A50;
    }
    goto L_089A0A44;
L_089A0A44:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A0A60;
      }
      goto L_089A0A50;
    }
L_089A0A50:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089A0A60;
L_089A0A60:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1776), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A0B94;
      }
      goto L_089A0A68;
    }
L_089A0A68:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_089A0A80;
      }
      goto L_089A0A74;
    }
L_089A0A74:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    goto L_089A0A80;
L_089A0A80:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (17402u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[14];
        goto L_089A0AB4;
    }
    goto L_089A0AA8;
L_089A0AA8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A0AC4;
      }
      goto L_089A0AB4;
    }
L_089A0AB4:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089A0AC4;
L_089A0AC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1776), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A0B94;
      }
      goto L_089A0ACC;
    }
L_089A0ACC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    goto L_089A0AD0;
L_089A0AD0:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[8] = (0u | 1000u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0B84;
      }
      goto L_089A0AF0;
    }
L_089A0AF0:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (20224u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_089A0B14;
      }
      goto L_089A0B08;
    }
L_089A0B08:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_089A0B14;
L_089A0B14:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
      if (branch_taken) {
          goto L_089A0B4C;
      }
      goto L_089A0B40;
    }
L_089A0B40:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    goto L_089A0B4C;
L_089A0B4C:
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_089A0B6C;
    }
    goto L_089A0B60;
L_089A0B60:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A0B7C;
      }
      goto L_089A0B6C;
    }
L_089A0B6C:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089A0B7C;
L_089A0B7C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1776), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A0B94;
      }
      goto L_089A0B84;
    }
L_089A0B84:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1776), ctx.gpr[4]);
    goto L_089A0B94;
L_089A0B94:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[6]);
    goto L_089A0B98;
L_089A0B98:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0BC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A0BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 358u, 0x089ADE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0BD0u) goto L_089A0BD0;
    return;
L_089A0BD0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0BDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (16325u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A0CD8;
      }
      goto L_089A0C1C;
    }
L_089A0C1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089A0C4Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0C4Cu) goto L_089A0C4C;
    return;
L_089A0C4C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0CD0;
      }
      goto L_089A0C58;
    }
L_089A0C58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A0CD0;
      }
      goto L_089A0C68;
    }
L_089A0C68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (16261u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (15897u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x089A0CC4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 72u, 0x088C8430u>(ctx, &aot_mem) && ctx.pc == 0x089A0CC4u) goto L_089A0CC4;
    return;
L_089A0CC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0CD0;
      }
      goto L_089A0CCC;
    }
L_089A0CCC:
    ctx.gpr[17] = (0u | 1u);
    goto L_089A0CD0;
L_089A0CD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_089A0CDC;
      }
      goto L_089A0CD8;
    }
L_089A0CD8:
    ctx.gpr[2] = (0u | 0u);
    goto L_089A0CDC;
L_089A0CDC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0CF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 2048u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0D90;
      }
      goto L_089A0D10;
    }
L_089A0D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089A0D30u);
    ctx.gpr[5] = (0u | 140u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 489u, 0x08A8AEF8u>(ctx, &aot_mem) && ctx.pc == 0x089A0D30u) goto L_089A0D30;
    return;
L_089A0D30:
    ctx.gpr[4] = (0u | 22u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A0D50u);
    ctx.gpr[6] = (0u | 140u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089A0D50u) goto L_089A0D50;
    return;
L_089A0D50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A0D78;
      }
      goto L_089A0D60;
    }
L_089A0D60:
    ctx.gpr[31] = (0x089A0D68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 107u, 0x088D4980u>(ctx, &aot_mem) && ctx.pc == 0x089A0D68u) goto L_089A0D68;
    return;
L_089A0D68:
    ctx.gpr[31] = (0x089A0D70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 321u, 0x088D5678u>(ctx, &aot_mem) && ctx.pc == 0x089A0D70u) goto L_089A0D70;
    return;
L_089A0D70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0D90;
      }
      goto L_089A0D78;
    }
L_089A0D78:
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A0D90;
      }
      goto L_089A0D84;
    }
L_089A0D84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A0D90u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 240u, 0x088D51D4u>(ctx, &aot_mem) && ctx.pc == 0x089A0D90u) goto L_089A0D90;
    return;
L_089A0D90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0DA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (16513u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] | 18350u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
      if (branch_taken) {
          goto L_089A0F44;
      }
      goto L_089A0DF0;
    }
L_089A0DF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0F44;
      }
      goto L_089A0E04;
    }
L_089A0E04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 55u);
      if (branch_taken) {
          goto L_089A0F44;
      }
      goto L_089A0E14;
    }
L_089A0E14:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A0F44;
      }
      goto L_089A0E1C;
    }
L_089A0E1C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(424)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089A0E58u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0E58u) goto L_089A0E58;
    return;
L_089A0E58:
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_089A0F08;
    }
    goto L_089A0E60;
L_089A0E60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A0F44;
      }
      goto L_089A0E70;
    }
L_089A0E70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(424)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-29156)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A0F44;
      }
      goto L_089A0E8C;
    }
L_089A0E8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A0E98u);
    ctx.gpr[5] = (0u | 142u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089A0E98u) goto L_089A0E98;
    return;
L_089A0E98:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0ED8;
      }
      goto L_089A0EA4;
    }
L_089A0EA4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089A0EB0u);
    ctx.gpr[5] = (0u | 142u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 489u, 0x08A8AEF8u>(ctx, &aot_mem) && ctx.pc == 0x089A0EB0u) goto L_089A0EB0;
    return;
L_089A0EB0:
    ctx.gpr[4] = (0u | 86u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A0ED0u);
    ctx.gpr[6] = (0u | 142u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089A0ED0u) goto L_089A0ED0;
    return;
L_089A0ED0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0F00;
      }
      goto L_089A0ED8;
    }
L_089A0ED8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A0F00;
      }
      goto L_089A0EF4;
    }
L_089A0EF4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-29156)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089A0F00;
L_089A0F00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0F44;
      }
      goto L_089A0F08;
    }
L_089A0F08:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (16294u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A0F3C;
      }
      goto L_089A0F2C;
    }
L_089A0F2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0F44;
      }
      goto L_089A0F3C;
    }
L_089A0F3C:
    ctx.gpr[31] = (0x089A0F44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A0F58;
L_089A0F44:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0F58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 55u);
      if (branch_taken) {
          goto L_089A0FB0;
      }
      goto L_089A0F88;
    }
L_089A0F88:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A0FB0;
      }
      goto L_089A0F90;
    }
L_089A0F90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A0F9Cu);
    ctx.gpr[5] = (0u | 139u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089A0F9Cu) goto L_089A0F9C;
    return;
L_089A0F9C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
        goto L_089A0FB8;
    }
    goto L_089A0FA8;
L_089A0FA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0FC8;
      }
      goto L_089A0FB0;
    }
L_089A0FB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1184;
      }
      goto L_089A0FB8;
    }
L_089A0FB8:
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A100C;
      }
      goto L_089A0FC8;
    }
L_089A0FC8:
    ctx.gpr[6] = (50298u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089A0FDCu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 315u, 0x08865724u>(ctx, &aot_mem) && ctx.pc == 0x089A0FDCu) goto L_089A0FDC;
    return;
L_089A0FDC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29156)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(424)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A1014;
      }
      goto L_089A1004;
    }
L_089A1004:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1078;
      }
      goto L_089A100C;
    }
L_089A100C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1184;
      }
      goto L_089A1014;
    }
L_089A1014:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089A1020u);
    ctx.gpr[5] = (0u | 139u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 489u, 0x08A8AEF8u>(ctx, &aot_mem) && ctx.pc == 0x089A1020u) goto L_089A1020;
    return;
L_089A1020:
    ctx.gpr[4] = (0u | 84u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A1038u);
    ctx.gpr[6] = (0u | 139u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1038u) goto L_089A1038;
    return;
L_089A1038:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A1044u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A38A0;
L_089A1044:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1150;
      }
      goto L_089A104C;
    }
L_089A104C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A1058u);
    ctx.gpr[5] = (0u | 106u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089A1058u) goto L_089A1058;
    return;
L_089A1058:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 35u);
    ctx.gpr[31] = (0x089A1070u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1070u) goto L_089A1070;
    return;
L_089A1070:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1150;
      }
      goto L_089A1078;
    }
L_089A1078:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-8107));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (0u | 6u);
      if (branch_taken) {
          goto L_089A10B0;
      }
      goto L_089A1090;
    }
L_089A1090:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089A1128;
      }
      goto L_089A109C;
    }
L_089A109C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1128;
      }
      goto L_089A10B0;
    }
L_089A10B0:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A10C0u);
    ctx.gpr[6] = (0u | 141u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089A10C0u) goto L_089A10C0;
    return;
L_089A10C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089A10D8u);
    ctx.gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x089A10D8u) goto L_089A10D8;
    return;
L_089A10D8:
    ctx.gpr[31] = (0x089A10E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A38A0;
L_089A10E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A10F4;
      }
      goto L_089A10E8;
    }
L_089A10E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A10F4u);
    ctx.gpr[5] = (0u | 106u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089A10F4u) goto L_089A10F4;
    return;
L_089A10F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089A1150;
      }
      goto L_089A1100;
    }
L_089A1100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1150;
      }
      goto L_089A1114;
    }
L_089A1114:
    ctx.gpr[5] = (65280u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A1150;
      }
      goto L_089A1128;
    }
L_089A1128:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A1138u);
    ctx.gpr[6] = (0u | 141u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1138u) goto L_089A1138;
    return;
L_089A1138:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A1150u);
    ctx.gpr[6] = (0u | 35u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1150u) goto L_089A1150;
    return;
L_089A1150:
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A1164u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12516));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x089A1164u) goto L_089A1164;
    return;
L_089A1164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089A1184;
L_089A1184:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_089A11A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1224)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_089A1288;
      }
      goto L_089A11D4;
    }
L_089A11D4:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_089A11F0;
      }
      goto L_089A11E4;
    }
L_089A11E4:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089A11F0;
L_089A11F0:
    ctx.gpr[5] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089A1210u);
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089A1210u) goto L_089A1210;
    return;
L_089A1210:
    ctx.gpr[6] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A1224u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089A1224u) goto L_089A1224;
    return;
L_089A1224:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[21]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A1280;
      }
      goto L_089A125C;
    }
L_089A125C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1792)));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1278;
      }
      goto L_089A126C;
    }
L_089A126C:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1788), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A1280;
      }
      goto L_089A1278;
    }
L_089A1278:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1788), ctx.gpr[4]);
    goto L_089A1280;
L_089A1280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A12C0;
      }
      goto L_089A1288;
    }
L_089A1288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A12C0;
      }
      goto L_089A129C;
    }
L_089A129C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1792)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A12B8;
      }
      goto L_089A12AC;
    }
L_089A12AC:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1788), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A12C0;
      }
      goto L_089A12B8;
    }
L_089A12B8:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1788), ctx.gpr[4]);
    goto L_089A12C0;
L_089A12C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A12E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1220)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2230u << 16u);
      if (branch_taken) {
          goto L_089A13BC;
      }
      goto L_089A131C;
    }
L_089A131C:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_089A1338;
      }
      goto L_089A132C;
    }
L_089A132C:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089A1338;
L_089A1338:
    ctx.gpr[5] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089A1358u);
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089A1358u) goto L_089A1358;
    return;
L_089A1358:
    ctx.gpr[6] = (ctx.gpr[22] - ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A136Cu);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089A136Cu) goto L_089A136C;
    return;
L_089A136C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1792)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A13B4;
      }
      goto L_089A13A8;
    }
L_089A13A8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1792), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8148)));
    goto L_089A13B4;
L_089A13B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1438;
      }
      goto L_089A13BC;
    }
L_089A13BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1438;
      }
      goto L_089A13D0;
    }
L_089A13D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1438;
      }
      goto L_089A13E0;
    }
L_089A13E0:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A1400;
      }
      goto L_089A13F4;
    }
L_089A13F4:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_089A1400;
L_089A1400:
    ctx.gpr[5] = (16320u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_089A1428;
    }
    goto L_089A141C;
L_089A141C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A1438;
      }
      goto L_089A1428;
    }
L_089A1428:
    ctx.gpr[16] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[16]);
    goto L_089A1438;
L_089A1438:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1792), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1468:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] << 24u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A14A4u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 24u));
    goto L_089A38A0;
L_089A14A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A1520;
      }
      goto L_089A14AC;
    }
L_089A14AC:
    ctx.gpr[31] = (0x089A14B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089A14B4u) goto L_089A14B4;
    return;
L_089A14B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1504;
      }
      goto L_089A14BC;
    }
L_089A14BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A14F4;
      }
      goto L_089A14CC;
    }
L_089A14CC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(1172));
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(1176));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[18] = (2228u << 16u);
      if (branch_taken) {
          goto L_089A1528;
      }
      goto L_089A14EC;
    }
L_089A14EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1584;
      }
      goto L_089A14F4;
    }
L_089A14F4:
    ctx.gpr[31] = (0x089A14FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x089A14FCu) goto L_089A14FC;
    return;
L_089A14FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A16B4;
      }
      goto L_089A1504;
    }
L_089A1504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (8u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A16B4;
      }
      goto L_089A1520;
    }
L_089A1520:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A16B4;
      }
      goto L_089A1528;
    }
L_089A1528:
    ctx.gpr[31] = (0x089A1530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089A1530u) goto L_089A1530;
    return;
L_089A1530:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29004)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29008)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A1548u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089A1548u) goto L_089A1548;
    return;
L_089A1548:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28996)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29000)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] << 24u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 24u));
    goto L_089A1584;
L_089A1584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26868)));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089A15B0u);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 87u, 0x08978A10u>(ctx, &aot_mem) && ctx.pc == 0x089A15B0u) goto L_089A15B0;
    return;
L_089A15B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_089A1644;
      }
      goto L_089A15BC;
    }
L_089A15BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_089A15E4;
    }
    goto L_089A15D4;
L_089A15D4:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A15E4;
      }
      goto L_089A15E4;
    }
L_089A15E4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089A160C;
      }
      goto L_089A15F4;
    }
L_089A15F4:
    ctx.gpr[31] = (0x089A15FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A2034;
L_089A15FC:
    ctx.gpr[31] = (0x089A1604u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x089A1604u) goto L_089A1604;
    return;
L_089A1604:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A16B4;
      }
      goto L_089A160C;
    }
L_089A160C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26868)));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089A1638u);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 87u, 0x08978A10u>(ctx, &aot_mem) && ctx.pc == 0x089A1638u) goto L_089A1638;
    return;
L_089A1638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A15BC;
      }
      goto L_089A1644;
    }
L_089A1644:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A168C;
      }
      goto L_089A165C;
    }
L_089A165C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1684;
      }
      goto L_089A1668;
    }
L_089A1668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A1684;
    }
    goto L_089A1674;
L_089A1674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089A1680u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A1680u) goto L_089A1680;
    return;
L_089A1680:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A1684;
L_089A1684:
    ctx.gpr[31] = (0x089A168Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A1D00;
L_089A168C:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A16A0u);
    ctx.gpr[5] = (0u | 2u);
    goto L_089A2520;
L_089A16A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_089A16B4;
L_089A16B4:
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
L_089A16E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A1710u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089A1710u) goto L_089A1710;
    return;
L_089A1710:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1730;
      }
      goto L_089A1718;
    }
L_089A1718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[18] = (0u | 6u);
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1312)));
        goto L_089A1738;
    }
    goto L_089A1728;
L_089A1728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1764;
      }
      goto L_089A1730;
    }
L_089A1730:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1808;
      }
      goto L_089A1738;
    }
L_089A1738:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A1764;
      }
      goto L_089A174C;
    }
L_089A174C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1316)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A1794;
      }
      goto L_089A1764;
    }
L_089A1764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[17] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089A178C;
      }
      goto L_089A1774;
    }
L_089A1774:
    ctx.gpr[31] = (0x089A177Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 276u, 0x0899DC04u>(ctx, &aot_mem) && ctx.pc == 0x089A177Cu) goto L_089A177C;
    return;
L_089A177C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A179C;
      }
      goto L_089A1784;
    }
L_089A1784:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A17A4;
      }
      goto L_089A178C;
    }
L_089A178C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1808;
      }
      goto L_089A1794;
    }
L_089A1794:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1808;
      }
      goto L_089A179C;
    }
L_089A179C:
    ctx.gpr[31] = (0x089A17A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 321u, 0x088D5678u>(ctx, &aot_mem) && ctx.pc == 0x089A17A4u) goto L_089A17A4;
    return;
L_089A17A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089A17B8;
      }
      goto L_089A17B0;
    }
L_089A17B0:
    ctx.gpr[31] = (0x089A17B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 727u, 0x0899FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A17B8u) goto L_089A17B8;
    return;
L_089A17B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    if (ctx.gpr[4] != ctx.gpr[17]) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[18]);
        goto L_089A17F8;
    }
    goto L_089A17C4;
L_089A17C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A17EC;
      }
      goto L_089A17D0;
    }
L_089A17D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A17EC;
    }
    goto L_089A17DC;
L_089A17DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089A17E8u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A17E8u) goto L_089A17E8;
    return;
L_089A17E8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A17EC;
L_089A17EC:
    ctx.gpr[31] = (0x089A17F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A1D00;
L_089A17F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[18]);
    goto L_089A17F8;
L_089A17F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1340), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    goto L_089A1808;
L_089A1808:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1828:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A1854u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089A1854u) goto L_089A1854;
    return;
L_089A1854:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1874;
      }
      goto L_089A185C;
    }
L_089A185C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[18] = (0u | 7u);
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1328)));
        goto L_089A187C;
    }
    goto L_089A186C;
L_089A186C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1884;
      }
      goto L_089A1874;
    }
L_089A1874:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1918;
      }
      goto L_089A187C;
    }
L_089A187C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089A18A8;
      }
      goto L_089A1884;
    }
L_089A1884:
    ctx.gpr[19] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089A18A0;
      }
      goto L_089A1890;
    }
L_089A1890:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A18B0;
      }
      goto L_089A1898;
    }
L_089A1898:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1918;
      }
      goto L_089A18A0;
    }
L_089A18A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1918;
      }
      goto L_089A18A8;
    }
L_089A18A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1918;
      }
      goto L_089A18B0;
    }
L_089A18B0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089A18C4;
      }
      goto L_089A18B8;
    }
L_089A18B8:
    ctx.gpr[31] = (0x089A18C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 727u, 0x0899FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A18C0u) goto L_089A18C0;
    return;
L_089A18C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    goto L_089A18C4;
L_089A18C4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089A18F4;
      }
      goto L_089A18CC;
    }
L_089A18CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A18EC;
      }
      goto L_089A18D8;
    }
L_089A18D8:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A18EC;
    }
    goto L_089A18E0;
L_089A18E0:
    ctx.gpr[31] = (0x089A18E8u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A18E8u) goto L_089A18E8;
    return;
L_089A18E8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A18EC;
L_089A18EC:
    ctx.gpr[31] = (0x089A18F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089A1D00;
L_089A18F4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1340), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1328), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1328));
    ctx.gpr[31] = (0x089A190Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089A190Cu) goto L_089A190C;
    return;
L_089A190C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A1918u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089A2520;
L_089A1918:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_089A1938:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A194Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x089A194Cu) goto L_089A194C;
    return;
L_089A194C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1360), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1960:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(840)));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089A19E4;
      }
      goto L_089A199C;
    }
L_089A199C:
    ctx.gpr[31] = (0x089A19A4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089A19A4u) goto L_089A19A4;
    return;
L_089A19A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A19DC;
      }
      goto L_089A19AC;
    }
L_089A19AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A19DC;
      }
      goto L_089A19BC;
    }
L_089A19BC:
    ctx.gpr[6] = (16457u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_089A19EC;
      }
      goto L_089A19D4;
    }
L_089A19D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
      if (branch_taken) {
          goto L_089A1A54;
      }
      goto L_089A19DC;
    }
L_089A19DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1AF0;
      }
      goto L_089A19E4;
    }
L_089A19E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1AF0;
      }
      goto L_089A19EC;
    }
L_089A19EC:
    ctx.gpr[31] = (0x089A19F4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 727u, 0x0899FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A19F4u) goto L_089A19F4;
    return;
L_089A19F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A1A2C;
      }
      goto L_089A1A04;
    }
L_089A1A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1A24;
      }
      goto L_089A1A10;
    }
L_089A1A10:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A1A24;
    }
    goto L_089A1A18;
L_089A1A18:
    ctx.gpr[31] = (0x089A1A20u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A1A20u) goto L_089A1A20;
    return;
L_089A1A20:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A1A24;
L_089A1A24:
    ctx.gpr[31] = (0x089A1A2Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089A1D00;
L_089A1A2C:
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089A1A40u);
    ctx.gpr[5] = (0u | 4u);
    goto L_089A2520;
L_089A1A40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    goto L_089A1A54;
L_089A1A54:
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1396), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089A1A90u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089A1A90u) goto L_089A1A90;
    return;
L_089A1A90:
    ctx.gpr[31] = (0x089A1A98u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089A1A98u) goto L_089A1A98;
    return;
L_089A1A98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[16] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089A1ACC;
      }
      goto L_089A1AB4;
    }
L_089A1AB4:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A1AF0;
      }
      goto L_089A1ACC;
    }
L_089A1ACC:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_089A1AF0;
      }
      goto L_089A1AE0;
    }
L_089A1AE0:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089A1AF0;
L_089A1AF0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_089A1B10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A1B40u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089A1B40u) goto L_089A1B40;
    return;
L_089A1B40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1B68;
      }
      goto L_089A1B48;
    }
L_089A1B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A1B68;
      }
      goto L_089A1B58;
    }
L_089A1B58:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A1B70;
      }
      goto L_089A1B60;
    }
L_089A1B60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1C9C;
      }
      goto L_089A1B68;
    }
L_089A1B68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1C9C;
      }
      goto L_089A1B70;
    }
L_089A1B70:
    ctx.gpr[31] = (0x089A1B78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 727u, 0x0899FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1B78u) goto L_089A1B78;
    return;
L_089A1B78:
    ctx.gpr[6] = (16457u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.gpr[5] = (0u | 11u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089A1BC0;
      }
      goto L_089A1B98;
    }
L_089A1B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1BB8;
      }
      goto L_089A1BA4;
    }
L_089A1BA4:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A1BB8;
    }
    goto L_089A1BAC;
L_089A1BAC:
    ctx.gpr[31] = (0x089A1BB4u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A1BB4u) goto L_089A1BB4;
    return;
L_089A1BB4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A1BB8;
L_089A1BB8:
    ctx.gpr[31] = (0x089A1BC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A1D00;
L_089A1BC0:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A1BE4u);
    ctx.gpr[5] = (0u | 4u);
    goto L_089A2520;
L_089A1BE4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1392), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1392));
    ctx.gpr[31] = (0x089A1BF4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089A1BF4u) goto L_089A1BF4;
    return;
L_089A1BF4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089A1C1C;
      }
      goto L_089A1BFC;
    }
L_089A1BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1396), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089A1C30;
      }
      goto L_089A1C1C;
    }
L_089A1C1C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1396), 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_089A1C30;
L_089A1C30:
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089A1C3Cu);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089A1C3Cu) goto L_089A1C3C;
    return;
L_089A1C3C:
    ctx.gpr[31] = (0x089A1C44u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x089A1C44u) goto L_089A1C44;
    return;
L_089A1C44:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[16] = ctx.fpr[13] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089A1C78;
      }
      goto L_089A1C60;
    }
L_089A1C60:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A1C9C;
      }
      goto L_089A1C78;
    }
L_089A1C78:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_089A1C9C;
      }
      goto L_089A1C8C;
    }
L_089A1C8C:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089A1C9C;
L_089A1C9C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1CC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A1CD4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089A1CD4u) goto L_089A1CD4;
    return;
L_089A1CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1784), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1396), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1D00:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_089A1D08;
L_089A1D08:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(872), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A1D08;
      }
      goto L_089A1D1C;
    }
L_089A1D1C:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(906), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1D28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1328)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A1E54;
      }
      goto L_089A1D40;
    }
L_089A1D40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1E54;
      }
      goto L_089A1D60;
    }
L_089A1D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2000));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1DD4;
      }
      goto L_089A1D7C;
    }
L_089A1D7C:
    ctx.gpr[31] = (0x089A1D84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089A1D84u) goto L_089A1D84;
    return;
L_089A1D84:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_089A1DA8;
    }
    goto L_089A1D90;
L_089A1D90:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
      if (branch_taken) {
          goto L_089A1DB0;
      }
      goto L_089A1DA8;
    }
L_089A1DA8:
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    goto L_089A1DB0;
L_089A1DB0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089A1DBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A1468;
L_089A1DBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A1DCCu);
    ctx.gpr[6] = (0u | 20000u);
    goto L_089A1B10;
L_089A1DCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1E5C;
      }
      goto L_089A1DD4;
    }
L_089A1DD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A1E34;
      }
      goto L_089A1E2C;
    }
L_089A1E2C:
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1721), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089A1E34;
L_089A1E34:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A1E40u);
    ctx.gpr[5] = (0u | 122u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089A1E40u) goto L_089A1E40;
    return;
L_089A1E40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[31] = (0x089A1E4Cu);
    ctx.gpr[5] = (0u | 124u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089A1E4Cu) goto L_089A1E4C;
    return;
L_089A1E4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1E5C;
      }
      goto L_089A1E54;
    }
L_089A1E54:
    ctx.gpr[31] = (0x089A1E5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x089A1E5Cu) goto L_089A1E5C;
    return;
L_089A1E5C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1E6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A1E8Cu);
    ctx.gpr[5] = (0u | 152u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089A1E8Cu) goto L_089A1E8C;
    return;
L_089A1E8C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (2229u << 16u);
      if (branch_taken) {
          goto L_089A1EA4;
      }
      goto L_089A1E94;
    }
L_089A1E94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_089A1EA4;
L_089A1EA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1EC4;
      }
      goto L_089A1EB0;
    }
L_089A1EB0:
    ctx.gpr[31] = (0x089A1EB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A38A0;
L_089A1EB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1EC4;
      }
      goto L_089A1EC0;
    }
L_089A1EC0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(0u));
    goto L_089A1EC4;
L_089A1EC4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A1EEC;
      }
      goto L_089A1ED8;
    }
L_089A1ED8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (65528u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_089A1EEC;
L_089A1EEC:
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 55u);
      if (branch_taken) {
          goto L_089A1F24;
      }
      goto L_089A1EF8;
    }
L_089A1EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1F18;
      }
      goto L_089A1F04;
    }
L_089A1F04:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A1F18;
    }
    goto L_089A1F0C;
L_089A1F0C:
    ctx.gpr[31] = (0x089A1F14u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A1F14u) goto L_089A1F14;
    return;
L_089A1F14:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A1F18;
L_089A1F18:
    ctx.gpr[31] = (0x089A1F20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A1D00;
L_089A1F20:
    ctx.gpr[4] = (0u | 55u);
    goto L_089A1F24;
L_089A1F24:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x089A1F50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1F50u) goto L_089A1F50;
    return;
L_089A1F50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x089A1F5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 576u, 0x0899F198u>(ctx, &aot_mem) && ctx.pc == 0x089A1F5Cu) goto L_089A1F5C;
    return;
L_089A1F5C:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089A1F74u);
    ctx.gpr[8] = (0u | 250u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 556u, 0x08A927F0u>(ctx, &aot_mem) && ctx.pc == 0x089A1F74u) goto L_089A1F74;
    return;
L_089A1F74:
    ctx.gpr[31] = (0x089A1F7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1F7Cu) goto L_089A1F7C;
    return;
L_089A1F7C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A1FC0;
      }
      goto L_089A1F84;
    }
L_089A1F84:
    ctx.gpr[6] = (50298u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089A1F98u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 460u, 0x088D6300u>(ctx, &aot_mem) && ctx.pc == 0x089A1F98u) goto L_089A1F98;
    return;
L_089A1F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A1FB0;
      }
      goto L_089A1FA8;
    }
L_089A1FA8:
    ctx.gpr[31] = (0x089A1FB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 623u, 0x08A86FF4u>(ctx, &aot_mem) && ctx.pc == 0x089A1FB0u) goto L_089A1FB0;
    return;
L_089A1FB0:
    ctx.gpr[31] = (0x089A1FB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 311u, 0x08A82A40u>(ctx, &aot_mem) && ctx.pc == 0x089A1FB8u) goto L_089A1FB8;
    return;
L_089A1FB8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1720), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089A1FD8;
      }
      goto L_089A1FC0;
    }
L_089A1FC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27452)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1720), static_cast<std::uint8_t>(0u));
        goto L_089A1FD8;
    }
    goto L_089A1FCC;
L_089A1FCC:
    ctx.gpr[31] = (0x089A1FD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 623u, 0x08A86FF4u>(ctx, &aot_mem) && ctx.pc == 0x089A1FD4u) goto L_089A1FD4;
    return;
L_089A1FD4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1720), static_cast<std::uint8_t>(0u));
    goto L_089A1FD8;
L_089A1FD8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-65));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1825), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089A2020u);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 556u, 0x08A927F0u>(ctx, &aot_mem) && ctx.pc == 0x089A2020u) goto L_089A2020;
    return;
L_089A2020:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2034:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A2048u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089A2048u) goto L_089A2048;
    return;
L_089A2048:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2060;
      }
      goto L_089A2050;
    }
L_089A2050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A2144;
      }
      goto L_089A2060;
    }
L_089A2060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), 0u);
        goto L_089A20A4;
    }
    goto L_089A2070;
L_089A2070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2098;
      }
      goto L_089A207C;
    }
L_089A207C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A2098;
    }
    goto L_089A2088;
L_089A2088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089A2094u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A2094u) goto L_089A2094;
    return;
L_089A2094:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A2098;
L_089A2098:
    ctx.gpr[31] = (0x089A20A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A1D00;
L_089A20A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), 0u);
    goto L_089A20A4;
L_089A20A4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1328), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1392), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1396), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1400), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x089A2104u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 321u, 0x088D5678u>(ctx, &aot_mem) && ctx.pc == 0x089A2104u) goto L_089A2104;
    return;
L_089A2104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (65280u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), 0u);
    goto L_089A2144;
L_089A2144:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2154:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 36u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[5] = (0u | 54u);
      if (branch_taken) {
          goto L_089A219C;
      }
      goto L_089A2178;
    }
L_089A2178:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 55u);
      if (branch_taken) {
          goto L_089A219C;
      }
      goto L_089A2180;
    }
L_089A2180:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A219C;
      }
      goto L_089A2188;
    }
L_089A2188:
    ctx.gpr[5] = (0u | 11u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
        goto L_089A21A4;
    }
    goto L_089A2194;
L_089A2194:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
      if (branch_taken) {
          goto L_089A21CC;
      }
      goto L_089A219C;
    }
L_089A219C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A226C;
      }
      goto L_089A21A4;
    }
L_089A21A4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A21C0;
      }
      goto L_089A21AC;
    }
L_089A21AC:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A21C0;
    }
    goto L_089A21B4;
L_089A21B4:
    ctx.gpr[31] = (0x089A21BCu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A21BCu) goto L_089A21BC;
    return;
L_089A21BC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A21C0;
L_089A21C0:
    ctx.gpr[31] = (0x089A21C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A1D00;
L_089A21C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    goto L_089A21CC;
L_089A21CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (49280u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A21F8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 460u, 0x088D6300u>(ctx, &aot_mem) && ctx.pc == 0x089A21F8u) goto L_089A21F8;
    return;
L_089A21F8:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A2210u);
    ctx.gpr[6] = (0u | 160u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089A2210u) goto L_089A2210;
    return;
L_089A2210:
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A2224u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11496));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x089A2224u) goto L_089A2224;
    return;
L_089A2224:
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1780), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1708)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A2260;
      }
      goto L_089A2240;
    }
L_089A2240:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1708), ctx.gpr[4]);
    goto L_089A2260;
L_089A2260:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A226Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 576u, 0x0899F198u>(ctx, &aot_mem) && ctx.pc == 0x089A226Cu) goto L_089A226C;
    return;
L_089A226C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2280:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 36u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A22A4;
      }
      goto L_089A22A0;
    }
L_089A22A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
    goto L_089A22A4;
L_089A22A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A22B0u);
    ctx.gpr[5] = (0u | 162u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089A22B0u) goto L_089A22B0;
    return;
L_089A22B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A22EC;
      }
      goto L_089A22B8;
    }
L_089A22B8:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A22D0u);
    ctx.gpr[6] = (0u | 161u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089A22D0u) goto L_089A22D0;
    return;
L_089A22D0:
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A22E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11432));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x089A22E4u) goto L_089A22E4;
    return;
L_089A22E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
      if (branch_taken) {
          goto L_089A22FC;
      }
      goto L_089A22EC;
    }
L_089A22EC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089A22F8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 148u, 0x0899D358u>(ctx, &aot_mem) && ctx.pc == 0x089A22F8u) goto L_089A22F8;
    return;
L_089A22F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    goto L_089A22FC;
L_089A22FC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089A2318;
      }
      goto L_089A2304;
    }
L_089A2304:
    ctx.gpr[5] = (0u | 11u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
        goto L_089A2320;
    }
    goto L_089A2310;
L_089A2310:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2344;
      }
      goto L_089A2318;
    }
L_089A2318:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2358;
      }
      goto L_089A2320;
    }
L_089A2320:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A233C;
      }
      goto L_089A2328;
    }
L_089A2328:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A233C;
    }
    goto L_089A2330;
L_089A2330:
    ctx.gpr[31] = (0x089A2338u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A2338u) goto L_089A2338;
    return;
L_089A2338:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A233C;
L_089A233C:
    ctx.gpr[31] = (0x089A2344u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A1D00;
L_089A2344:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[31] = (0x089A2354u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089A2354u) goto L_089A2354;
    return;
L_089A2354:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), 0u);
    goto L_089A2358;
L_089A2358:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A236C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A2388u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089A2388u) goto L_089A2388;
    return;
L_089A2388:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2508;
      }
      goto L_089A2390;
    }
L_089A2390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A239Cu);
    ctx.gpr[5] = (0u | 160u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089A239Cu) goto L_089A239C;
    return;
L_089A239C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A23ACu);
    ctx.gpr[5] = (0u | 161u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089A23ACu) goto L_089A23AC;
    return;
L_089A23AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A23BCu);
    ctx.gpr[5] = (0u | 162u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089A23BCu) goto L_089A23BC;
    return;
L_089A23BC:
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A23EC;
      }
      goto L_089A23CC;
    }
L_089A23CC:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A23E4u);
    ctx.gpr[6] = (0u | 162u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089A23E4u) goto L_089A23E4;
    return;
L_089A23E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2508;
      }
      goto L_089A23EC;
    }
L_089A23EC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2470;
      }
      goto L_089A23F4;
    }
L_089A23F4:
    ctx.gpr[4] = (16051u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A2508;
      }
      goto L_089A2414;
    }
L_089A2414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(740)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2508;
      }
      goto L_089A2420;
    }
L_089A2420:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A242Cu);
    ctx.gpr[5] = (0u | 258u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 555u, 0x0899F044u>(ctx, &aot_mem) && ctx.pc == 0x089A242Cu) goto L_089A242C;
    return;
L_089A242C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2508;
      }
      goto L_089A243C;
    }
L_089A243C:
    ctx.gpr[31] = (0x089A2444u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A38A0;
L_089A2444:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2508;
      }
      goto L_089A244C;
    }
L_089A244C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089A245Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 652u, 0x088A7E10u>(ctx, &aot_mem) && ctx.pc == 0x089A245Cu) goto L_089A245C;
    return;
L_089A245C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x089A2468u);
    ctx.gpr[5] = (0u | 258u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 408u, 0x08982390u>(ctx, &aot_mem) && ctx.pc == 0x089A2468u) goto L_089A2468;
    return;
L_089A2468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2508;
      }
      goto L_089A2470;
    }
L_089A2470:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2508;
      }
      goto L_089A2478;
    }
L_089A2478:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A2508;
      }
      goto L_089A2494;
    }
L_089A2494:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A2508;
      }
      goto L_089A24AC;
    }
L_089A24AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A24B8u);
    ctx.gpr[5] = (0u | 258u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 576u, 0x0899F198u>(ctx, &aot_mem) && ctx.pc == 0x089A24B8u) goto L_089A24B8;
    return;
L_089A24B8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A24F4;
      }
      goto L_089A24C8;
    }
L_089A24C8:
    ctx.gpr[31] = (0x089A24D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A38A0;
L_089A24D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A24F4;
      }
      goto L_089A24D8;
    }
L_089A24D8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089A24E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 652u, 0x088A7E10u>(ctx, &aot_mem) && ctx.pc == 0x089A24E8u) goto L_089A24E8;
    return;
L_089A24E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x089A24F4u);
    ctx.gpr[5] = (0u | 258u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 418u, 0x08982434u>(ctx, &aot_mem) && ctx.pc == 0x089A24F4u) goto L_089A24F4;
    return;
L_089A24F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1708)));
    ctx.gpr[31] = (0x089A2500u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 609u, 0x0899F378u>(ctx, &aot_mem) && ctx.pc == 0x089A2500u) goto L_089A2500;
    return;
L_089A2500:
    ctx.gpr[4] = (0u | 45u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1708), ctx.gpr[4]);
    goto L_089A2508;
L_089A2508:
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
L_089A2520:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(852), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2528:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A253Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 347u, 0x0897235Cu>(ctx, &aot_mem) && ctx.pc == 0x089A253Cu) goto L_089A253C;
    return;
L_089A253C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_089A257C;
      }
      goto L_089A2548;
    }
L_089A2548:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] & 16u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2568;
      }
      goto L_089A2560;
    }
L_089A2560:
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[16]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089A2568;
L_089A2568:
    ctx.gpr[31] = (0x089A2570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 343u, 0x088658B8u>(ctx, &aot_mem) && ctx.pc == 0x089A2570u) goto L_089A2570;
    return;
L_089A2570:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2548;
      }
      goto L_089A257C;
    }
L_089A257C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A258C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A259Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 347u, 0x0897235Cu>(ctx, &aot_mem) && ctx.pc == 0x089A259Cu) goto L_089A259C;
    return;
L_089A259C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A25DC;
      }
      goto L_089A25A8;
    }
L_089A25A8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] & 16u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A25C8;
      }
      goto L_089A25C0;
    }
L_089A25C0:
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089A25C8;
L_089A25C8:
    ctx.gpr[31] = (0x089A25D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 343u, 0x088658B8u>(ctx, &aot_mem) && ctx.pc == 0x089A25D0u) goto L_089A25D0;
    return;
L_089A25D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A25A8;
      }
      goto L_089A25DC;
    }
L_089A25DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A25E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17204u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[22];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1362))))));
    ctx.gpr[6] = (2274u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(19376));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089A2660u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089A2660u) goto L_089A2660;
    return;
L_089A2660:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089A267Cu);
    ctx.gpr[6] = (0u | 1u);
    goto L_089A05AC;
L_089A267C:
    ctx.gpr[31] = (0x089A2684u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D380u>(ctx, &aot_mem) && ctx.pc == 0x089A2684u) goto L_089A2684;
    return;
L_089A2684:
    ctx.fpr[14] = ctx.fpr[24] + ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1240), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089A26BC;
      }
      goto L_089A26AC;
    }
L_089A26AC:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
      if (branch_taken) {
          goto L_089A26DC;
      }
      goto L_089A26BC;
    }
L_089A26BC:
    ctx.fpr[14] = ctx.fpr[24] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A26DC;
      }
      goto L_089A26D0;
    }
L_089A26D0:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_089A26DC;
L_089A26DC:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_089A26F8;
    }
    goto L_089A26F8;
L_089A26F8:
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16544u << 16u);
      if (branch_taken) {
          goto L_089A2730;
      }
      goto L_089A2710;
    }
L_089A2710:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A2754;
      }
      goto L_089A2730;
    }
L_089A2730:
    ctx.gpr[31] = (0x089A2738u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x089A2738u) goto L_089A2738;
    return;
L_089A2738:
    ctx.gpr[31] = (0x089A2740u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A0714;
L_089A2740:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1368), ctx.gpr[4]);
    goto L_089A2754;
L_089A2754:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2778:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1368)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A27D0;
      }
      goto L_089A27A0;
    }
L_089A27A0:
    ctx.gpr[31] = (0x089A27A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x089A27A8u) goto L_089A27A8;
    return;
L_089A27A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1362))))));
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19376));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1362), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089A27D4;
      }
      goto L_089A27D0;
    }
L_089A27D0:
    ctx.gpr[2] = (0u | 0u);
    goto L_089A27D4;
L_089A27D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A27E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2828;
      }
      goto L_089A2810;
    }
L_089A2810:
    ctx.gpr[31] = (0x089A2818u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A000C;
L_089A2818:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2828;
      }
      goto L_089A2820;
    }
L_089A2820:
    ctx.gpr[31] = (0x089A2828u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A0714;
L_089A2828:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2868;
      }
      goto L_089A2834;
    }
L_089A2834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2868;
      }
      goto L_089A2850;
    }
L_089A2850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A2878;
      }
      goto L_089A2860;
    }
L_089A2860:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A28C8;
      }
      goto L_089A2868;
    }
L_089A2868:
    ctx.gpr[31] = (0x089A2870u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A2A54;
L_089A2870:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2A38;
      }
      goto L_089A2878;
    }
L_089A2878:
    ctx.gpr[31] = (0x089A2880u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A2A54;
L_089A2880:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1784), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A28C0;
      }
      goto L_089A289C;
    }
L_089A289C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 10u);
      if (branch_taken) {
          goto L_089A28B4;
      }
      goto L_089A28AC;
    }
L_089A28AC:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A28C0;
      }
      goto L_089A28B4;
    }
L_089A28B4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089A28C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 322u, 0x08899450u>(ctx, &aot_mem) && ctx.pc == 0x089A28C0u) goto L_089A28C0;
    return;
L_089A28C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2A38;
      }
      goto L_089A28C8;
    }
L_089A28C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2948;
      }
      goto L_089A28D8;
    }
L_089A28D8:
    ctx.gpr[31] = (0x089A28E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089A28E0u) goto L_089A28E0;
    return;
L_089A28E0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 512 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2934;
      }
      goto L_089A28F0;
    }
L_089A28F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A28FCu);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089A28FCu) goto L_089A28FC;
    return;
L_089A28FC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2920;
      }
      goto L_089A2908;
    }
L_089A2908:
    ctx.gpr[5] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089A2920;
L_089A2920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1025));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A2A08;
      }
      goto L_089A2934;
    }
L_089A2934:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A2940u);
    ctx.gpr[5] = (0u | 157u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089A2940u) goto L_089A2940;
    return;
L_089A2940:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2A08;
      }
      goto L_089A2948;
    }
L_089A2948:
    ctx.gpr[31] = (0x089A2950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089A2950u) goto L_089A2950;
    return;
L_089A2950:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A298C;
      }
      goto L_089A2960;
    }
L_089A2960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A296Cu);
    ctx.gpr[5] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 337u, 0x08865864u>(ctx, &aot_mem) && ctx.pc == 0x089A296Cu) goto L_089A296C;
    return;
L_089A296C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A298C;
      }
      goto L_089A2974;
    }
L_089A2974:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A298Cu);
    ctx.gpr[6] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089A298Cu) goto L_089A298C;
    return;
L_089A298C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2A08;
      }
      goto L_089A299C;
    }
L_089A299C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A29A8u);
    ctx.gpr[5] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 337u, 0x08865864u>(ctx, &aot_mem) && ctx.pc == 0x089A29A8u) goto L_089A29A8;
    return;
L_089A29A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2A08;
      }
      goto L_089A29B0;
    }
L_089A29B0:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A29C8u);
    ctx.gpr[6] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089A29C8u) goto L_089A29C8;
    return;
L_089A29C8:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A29DCu);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089A29DCu) goto L_089A29DC;
    return;
L_089A29DC:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x089A29F0u);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x089A29F0u) goto L_089A29F0;
    return;
L_089A29F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 1024u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[31] = (0x089A2A08u);
    ctx.gpr[5] = (0u | 157u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089A2A08u) goto L_089A2A08;
    return;
L_089A2A08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_089A2A38;
      }
      goto L_089A2A14;
    }
L_089A2A14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2A38;
      }
      goto L_089A2A24;
    }
L_089A2A24:
    ctx.gpr[31] = (0x089A2A2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A2A54;
L_089A2A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1784), ctx.gpr[4]);
    goto L_089A2A38;
L_089A2A38:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2A54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A2A70u);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089A2A70u) goto L_089A2A70;
    return;
L_089A2A70:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2A94;
      }
      goto L_089A2A7C;
    }
L_089A2A7C:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089A2A94;
L_089A2A94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1025));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x089A2AACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A0714;
L_089A2AAC:
    ctx.gpr[31] = (0x089A2AB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089A2AB4u) goto L_089A2AB4;
    return;
L_089A2AB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A2B20;
      }
      goto L_089A2AC4;
    }
L_089A2AC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[5]);
    ctx.gpr[31] = (0x089A2ADCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x089A2ADCu) goto L_089A2ADC;
    return;
L_089A2ADC:
    ctx.gpr[31] = (0x089A2AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089A2AE4u) goto L_089A2AE4;
    return;
L_089A2AE4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28988)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28992)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A2AFCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089A2AFCu) goto L_089A2AFC;
    return;
L_089A2AFC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x089A2B20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A1468;
L_089A2B20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2B30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 20u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[19];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089A2B6C;
      }
      goto L_089A2B60;
    }
L_089A2B60:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(848), 0u);
    ctx.gpr[31] = (0x089A2B6Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 727u, 0x0899FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2B6Cu) goto L_089A2B6C;
    return;
L_089A2B6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A2BA4;
      }
      goto L_089A2B7C;
    }
L_089A2B7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2B9C;
      }
      goto L_089A2B88;
    }
L_089A2B88:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A2B9C;
    }
    goto L_089A2B90;
L_089A2B90:
    ctx.gpr[31] = (0x089A2B98u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A2B98u) goto L_089A2B98;
    return;
L_089A2B98:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A2B9C;
L_089A2B9C:
    ctx.gpr[31] = (0x089A2BA4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089A1D00;
L_089A2BA4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(844), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089A2BB4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089A2520;
L_089A2BB4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1780), 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089A2BCCu);
    ctx.gpr[7] = (0u | 1u);
    goto L_089A064C;
L_089A2BCC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1784), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1780), ctx.gpr[4]);
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
L_089A2C04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1172)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089A2C58;
      }
      goto L_089A2C24;
    }
L_089A2C24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2C58;
      }
      goto L_089A2C30;
    }
L_089A2C30:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A2C58;
      }
      goto L_089A2C38;
    }
L_089A2C38:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089A2C50u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 693u, 0x089776A8u>(ctx, &aot_mem) && ctx.pc == 0x089A2C50u) goto L_089A2C50;
    return;
L_089A2C50:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2D20;
      }
      goto L_089A2C58;
    }
L_089A2C58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(325)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A2D18;
      }
      goto L_089A2C68;
    }
L_089A2C68:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089A2D10;
      }
      goto L_089A2C70;
    }
L_089A2C70:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 60u);
      if (branch_taken) {
          goto L_089A2D08;
      }
      goto L_089A2C80;
    }
L_089A2C80:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 61u);
      if (branch_taken) {
          goto L_089A2D08;
      }
      goto L_089A2C88;
    }
L_089A2C88:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 47u);
      if (branch_taken) {
          goto L_089A2D08;
      }
      goto L_089A2C90;
    }
L_089A2C90:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A2D08;
      }
      goto L_089A2C98;
    }
L_089A2C98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A2D00;
      }
      goto L_089A2CA8;
    }
L_089A2CA8:
    ctx.gpr[6] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A2CF8;
      }
      goto L_089A2CB4;
    }
L_089A2CB4:
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A2CF0;
      }
      goto L_089A2CC0;
    }
L_089A2CC0:
    ctx.gpr[31] = (0x089A2CC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A38A0;
L_089A2CC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2CE8;
      }
      goto L_089A2CD0;
    }
L_089A2CD0:
    ctx.gpr[31] = (0x089A2CD8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089A38C0;
L_089A2CD8:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
        goto L_089A2D3C;
    }
    goto L_089A2CE0;
L_089A2CE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2D28;
      }
      goto L_089A2CE8;
    }
L_089A2CE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A2D54;
      }
      goto L_089A2CF0;
    }
L_089A2CF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A2D54;
      }
      goto L_089A2CF8;
    }
L_089A2CF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A2D54;
      }
      goto L_089A2D00;
    }
L_089A2D00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089A2D54;
      }
      goto L_089A2D08;
    }
L_089A2D08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A2D54;
      }
      goto L_089A2D10;
    }
L_089A2D10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A2D54;
      }
      goto L_089A2D18;
    }
L_089A2D18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A2D54;
      }
      goto L_089A2D20;
    }
L_089A2D20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A2D54;
      }
      goto L_089A2D28;
    }
L_089A2D28:
    ctx.gpr[31] = (0x089A2D30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A38C0;
L_089A2D30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2D50;
      }
      goto L_089A2D38;
    }
L_089A2D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    goto L_089A2D3C;
L_089A2D3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A2D50;
      }
      goto L_089A2D48;
    }
L_089A2D48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A2D54;
      }
      goto L_089A2D50;
    }
L_089A2D50:
    ctx.gpr[2] = (0u | 1u);
    goto L_089A2D54;
L_089A2D54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2D68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[17] = (0u | 24u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089A2E28;
      }
      goto L_089A2D9C;
    }
L_089A2D9C:
    ctx.gpr[31] = (0x089A2DA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 379u, 0x0899E35Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2DA4u) goto L_089A2DA4;
    return;
L_089A2DA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2E28;
      }
      goto L_089A2DAC;
    }
L_089A2DAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A2E28;
      }
      goto L_089A2DBC;
    }
L_089A2DBC:
    ctx.gpr[31] = (0x089A2DC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 727u, 0x0899FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2DC4u) goto L_089A2DC4;
    return;
L_089A2DC4:
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(1328));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1328), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089A2DD8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089A2DD8u) goto L_089A2DD8;
    return;
L_089A2DD8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(604));
    ctx.gpr[31] = (0x089A2DE8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089A2DE8u) goto L_089A2DE8;
    return;
L_089A2DE8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1332));
    ctx.gpr[31] = (0x089A2DF8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089A2DF8u) goto L_089A2DF8;
    return;
L_089A2DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[31] = (0x089A2E04u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089A2E04u) goto L_089A2E04;
    return;
L_089A2E04:
    ctx.gpr[4] = (16128u << 16u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A2E30;
      }
      goto L_089A2E20;
    }
L_089A2E20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2E58;
      }
      goto L_089A2E28;
    }
L_089A2E28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2E5C;
      }
      goto L_089A2E30;
    }
L_089A2E30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2E50;
      }
      goto L_089A2E3C;
    }
L_089A2E3C:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A2E50;
    }
    goto L_089A2E44;
L_089A2E44:
    ctx.gpr[31] = (0x089A2E4Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A2E4Cu) goto L_089A2E4C;
    return;
L_089A2E4C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A2E50;
L_089A2E50:
    ctx.gpr[31] = (0x089A2E58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A1D00;
L_089A2E58:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[17]);
    goto L_089A2E5C;
L_089A2E5C:
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
L_089A2E7C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2EA4;
      }
      goto L_089A2E88;
    }
L_089A2E88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089A2EAC;
      }
      goto L_089A2E94;
    }
L_089A2E94:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A2ECC;
      }
      goto L_089A2E9C;
    }
L_089A2E9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2ECC;
      }
      goto L_089A2EA4;
    }
L_089A2EA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A2ED0;
      }
      goto L_089A2EAC;
    }
L_089A2EAC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089A2EC4;
      }
      goto L_089A2EB4;
    }
L_089A2EB4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2ECC;
      }
      goto L_089A2EBC;
    }
L_089A2EBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A2ED0;
      }
      goto L_089A2EC4;
    }
L_089A2EC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089A2ED0;
      }
      goto L_089A2ECC;
    }
L_089A2ECC:
    ctx.gpr[2] = (0u | 1u);
    goto L_089A2ED0;
L_089A2ED0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2ED8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089A2EF4;
      }
      goto L_089A2EE4;
    }
L_089A2EE4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A2F14;
      }
      goto L_089A2EEC;
    }
L_089A2EEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2F14;
      }
      goto L_089A2EF4;
    }
L_089A2EF4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089A2F0C;
      }
      goto L_089A2EFC;
    }
L_089A2EFC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2F14;
      }
      goto L_089A2F04;
    }
L_089A2F04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A2F18;
      }
      goto L_089A2F0C;
    }
L_089A2F0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089A2F18;
      }
      goto L_089A2F14;
    }
L_089A2F14:
    ctx.gpr[2] = (0u | 1u);
    goto L_089A2F18;
L_089A2F18:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2F20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (50298u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[19] = (0u | 43u);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-33));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A2F6C;
      }
      goto L_089A2F5C;
    }
L_089A2F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089A2F6Cu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 315u, 0x08865724u>(ctx, &aot_mem) && ctx.pc == 0x089A2F6Cu) goto L_089A2F6C;
    return;
L_089A2F6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089A2F94;
      }
      goto L_089A2F8C;
    }
L_089A2F8C:
    ctx.gpr[31] = (0x089A2F94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089A2F94u) goto L_089A2F94;
    return;
L_089A2F94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2FEC;
      }
      goto L_089A2FA4;
    }
L_089A2FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1400)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2FEC;
      }
      goto L_089A2FB0;
    }
L_089A2FB0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A2FC0u);
    ctx.gpr[6] = (0u | 10000u);
    goto L_089A1B10;
L_089A2FC0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A2FCCu);
    ctx.gpr[5] = (0u | 120u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089A2FCCu) goto L_089A2FCC;
    return;
L_089A2FCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1400), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] & ctx.gpr[16]);
      if (branch_taken) {
          goto L_089A30C0;
      }
      goto L_089A2FEC;
    }
L_089A2FEC:
    ctx.gpr[4] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3064;
      }
      goto L_089A2FF8;
    }
L_089A2FF8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A3004u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x089A3004u) goto L_089A3004;
    return;
L_089A3004:
    ctx.gpr[31] = (0x089A300Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089A300Cu) goto L_089A300C;
    return;
L_089A300C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28988)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28992)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A3024u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089A3024u) goto L_089A3024;
    return;
L_089A3024:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x089A3048u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089A1468;
L_089A3048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[5] & ctx.gpr[16]);
      if (branch_taken) {
          goto L_089A30C0;
      }
      goto L_089A3064;
    }
L_089A3064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_089A307C;
      }
      goto L_089A3074;
    }
L_089A3074:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A3094;
      }
      goto L_089A307C;
    }
L_089A307C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A3088u);
    ctx.gpr[5] = (0u | 4u);
    goto L_089A2520;
L_089A3088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
      if (branch_taken) {
          goto L_089A30A8;
      }
      goto L_089A3094;
    }
L_089A3094:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A30A0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089A2520;
L_089A30A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    goto L_089A30A8;
L_089A30A8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089A30B8u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A30B8u) goto L_089A30B8;
    return;
L_089A30B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[16] = (ctx.gpr[4] & ctx.gpr[16]);
    goto L_089A30C0;
L_089A30C0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_089A30E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 41u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A3128;
      }
      goto L_089A3120;
    }
L_089A3120:
    ctx.gpr[31] = (0x089A3128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089A3128u) goto L_089A3128;
    return;
L_089A3128:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3134:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A32A8;
      }
      goto L_089A3150;
    }
L_089A3150:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 146u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A31F8;
      }
      goto L_089A3160;
    }
L_089A3160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x089A3178u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A0714;
L_089A3178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 45u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_089A31DC;
    }
    goto L_089A3188;
L_089A3188:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1776), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 42u);
      if (branch_taken) {
          goto L_089A31D4;
      }
      goto L_089A31A8;
    }
L_089A31A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A31C8;
      }
      goto L_089A31B4;
    }
L_089A31B4:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A31C8;
    }
    goto L_089A31BC;
L_089A31BC:
    ctx.gpr[31] = (0x089A31C4u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A31C4u) goto L_089A31C4;
    return;
L_089A31C4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A31C8;
L_089A31C8:
    ctx.gpr[31] = (0x089A31D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A1D00;
L_089A31D0:
    ctx.gpr[4] = (0u | 42u);
    goto L_089A31D4;
L_089A31D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_089A31DC;
L_089A31DC:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A32D0;
      }
      goto L_089A31F8;
    }
L_089A31F8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3240;
      }
      goto L_089A3210;
    }
L_089A3210:
    ctx.gpr[31] = (0x089A3218u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A0714;
L_089A3218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 31u);
      if (branch_taken) {
          goto L_089A3230;
      }
      goto L_089A3228;
    }
L_089A3228:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A32D0;
      }
      goto L_089A3230;
    }
L_089A3230:
    ctx.gpr[31] = (0x089A3238u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089A3238u) goto L_089A3238;
    return;
L_089A3238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A32D0;
      }
      goto L_089A3240;
    }
L_089A3240:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A32D0;
      }
      goto L_089A3250;
    }
L_089A3250:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A3278;
      }
      goto L_089A326C;
    }
L_089A326C:
    ctx.gpr[4] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089A3278;
L_089A3278:
    ctx.gpr[31] = (0x089A3280u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A0714;
L_089A3280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 31u);
      if (branch_taken) {
          goto L_089A3298;
      }
      goto L_089A3290;
    }
L_089A3290:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A32D0;
      }
      goto L_089A3298;
    }
L_089A3298:
    ctx.gpr[31] = (0x089A32A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089A32A0u) goto L_089A32A0;
    return;
L_089A32A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A32D0;
      }
      goto L_089A32A8;
    }
L_089A32A8:
    ctx.gpr[31] = (0x089A32B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A0714;
L_089A32B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 31u);
      if (branch_taken) {
          goto L_089A32C8;
      }
      goto L_089A32C0;
    }
L_089A32C0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A32D0;
      }
      goto L_089A32C8;
    }
L_089A32C8:
    ctx.gpr[31] = (0x089A32D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089A32D0u) goto L_089A32D0;
    return;
L_089A32D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A32E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A3300u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A3C28;
L_089A3300:
    ctx.gpr[31] = (0x089A3308u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 788u, 0x089BB5D4u>(ctx, &aot_mem) && ctx.pc == 0x089A3308u) goto L_089A3308;
    return;
L_089A3308:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A333C;
      }
      goto L_089A332C;
    }
L_089A332C:
    ctx.gpr[6] = (61440u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089A333C;
L_089A333C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3344:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A33B8;
      }
      goto L_089A336C;
    }
L_089A336C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A33B8;
      }
      goto L_089A337C;
    }
L_089A337C:
    ctx.gpr[5] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A33B8;
      }
      goto L_089A3388;
    }
L_089A3388:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1400)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A33B8;
      }
      goto L_089A3394;
    }
L_089A3394:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    ctx.gpr[31] = (0x089A33A4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089A33A4u) goto L_089A33A4;
    return;
L_089A33A4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1400), ctx.gpr[2]);
    ctx.gpr[31] = (0x089A33B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 358u, 0x089ADE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089A33B0u) goto L_089A33B0;
    return;
L_089A33B0:
    ctx.gpr[31] = (0x089A33B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 477u, 0x089BA0ACu>(ctx, &aot_mem) && ctx.pc == 0x089A33B8u) goto L_089A33B8;
    return;
L_089A33B8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), 0u);
    ctx.gpr[31] = (0x089A33C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A3C28;
L_089A33C4:
    ctx.gpr[31] = (0x089A33CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 788u, 0x089BB5D4u>(ctx, &aot_mem) && ctx.pc == 0x089A33CCu) goto L_089A33CC;
    return;
L_089A33CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A33DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A33F8u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x089A33F8u) goto L_089A33F8;
    return;
L_089A33F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(300), 0u);
    ctx.gpr[31] = (0x089A3440u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x089A3440u) goto L_089A3440;
    return;
L_089A3440:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3454:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A34E0;
      }
      goto L_089A3470;
    }
L_089A3470:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 147u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A34E0;
      }
      goto L_089A3480;
    }
L_089A3480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (65520u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x089A34ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089A0714;
L_089A34AC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1776), 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    ctx.gpr[31] = (0x089A34E0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089A34E0u) goto L_089A34E0;
    return;
L_089A34E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A34F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089A352Cu);
    ctx.gpr[4] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 547u, 0x08A92714u>(ctx, &aot_mem) && ctx.pc == 0x089A352Cu) goto L_089A352C;
    return;
L_089A352C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3660;
      }
      goto L_089A3534;
    }
L_089A3534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16912));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089A35DC;
      }
      goto L_089A35C4;
    }
L_089A35C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089A3614;
      }
      goto L_089A35CC;
    }
L_089A35CC:
    ctx.gpr[31] = (0x089A35D4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 579u, 0x08A06DACu>(ctx, &aot_mem) && ctx.pc == 0x089A35D4u) goto L_089A35D4;
    return;
L_089A35D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A3614;
      }
      goto L_089A35DC;
    }
L_089A35DC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089A35F8;
      }
      goto L_089A35E8;
    }
L_089A35E8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3608;
      }
      goto L_089A35F0;
    }
L_089A35F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3614;
      }
      goto L_089A35F8;
    }
L_089A35F8:
    ctx.gpr[31] = (0x089A3600u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 583u, 0x08A06DF4u>(ctx, &aot_mem) && ctx.pc == 0x089A3600u) goto L_089A3600;
    return;
L_089A3600:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A3614;
      }
      goto L_089A3608;
    }
L_089A3608:
    ctx.gpr[31] = (0x089A3610u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 587u, 0x08A06E3Cu>(ctx, &aot_mem) && ctx.pc == 0x089A3610u) goto L_089A3610;
    return;
L_089A3610:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089A3614;
L_089A3614:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A363C;
      }
      goto L_089A361C;
    }
L_089A361C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(656), ctx.gpr[4]);
    ctx.gpr[31] = (0x089A3628u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(656));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089A3628u) goto L_089A3628;
    return;
L_089A3628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A3650;
      }
      goto L_089A363C;
    }
L_089A363C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65024u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089A3650;
L_089A3650:
    ctx.gpr[31] = (0x089A3658u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 553u, 0x08A927B8u>(ctx, &aot_mem) && ctx.pc == 0x089A3658u) goto L_089A3658;
    return;
L_089A3658:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089A3728;
      }
      goto L_089A3660;
    }
L_089A3660:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089A367Cu);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 547u, 0x08A92714u>(ctx, &aot_mem) && ctx.pc == 0x089A367Cu) goto L_089A367C;
    return;
L_089A367C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3710;
      }
      goto L_089A3684;
    }
L_089A3684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[31] = (0x089A36F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 553u, 0x08A927B8u>(ctx, &aot_mem) && ctx.pc == 0x089A36F4u) goto L_089A36F4;
    return;
L_089A36F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65024u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089A3728;
      }
      goto L_089A3710;
    }
L_089A3710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65024u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    goto L_089A3728;
L_089A3728:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A373C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089A376Cu);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 547u, 0x08A92714u>(ctx, &aot_mem) && ctx.pc == 0x089A376Cu) goto L_089A376C;
    return;
L_089A376C:
    ctx.gpr[4] = (65024u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089A37D8;
      }
      goto L_089A3778;
    }
L_089A3778:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16912));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A37D8;
      }
      goto L_089A37A8;
    }
L_089A37A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A37C0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 579u, 0x08A06DACu>(ctx, &aot_mem) && ctx.pc == 0x089A37C0u) goto L_089A37C0;
    return;
L_089A37C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A37D0;
      }
      goto L_089A37C8;
    }
L_089A37C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A37E8;
      }
      goto L_089A37D0;
    }
L_089A37D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A37E8;
      }
      goto L_089A37D8;
    }
L_089A37D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089A37E8;
L_089A37E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A37F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089A3828u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 547u, 0x08A92714u>(ctx, &aot_mem) && ctx.pc == 0x089A3828u) goto L_089A3828;
    return;
L_089A3828:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3878;
      }
      goto L_089A3830;
    }
L_089A3830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089A3878;
      }
      goto L_089A385C;
    }
L_089A385C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (512u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[31] = (0x089A3870u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 579u, 0x08A06DACu>(ctx, &aot_mem) && ctx.pc == 0x089A3870u) goto L_089A3870;
    return;
L_089A3870:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3890;
      }
      goto L_089A3878;
    }
L_089A3878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65024u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    goto L_089A3890;
L_089A3890:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A38A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A38B4;
      }
      goto L_089A38AC;
    }
L_089A38AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089A38B8;
      }
      goto L_089A38B4;
    }
L_089A38B4:
    ctx.gpr[2] = (0u | 0u);
    goto L_089A38B8;
L_089A38B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A38C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_089A38E0;
      }
      goto L_089A38D0;
    }
L_089A38D0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A38E0;
      }
      goto L_089A38D8;
    }
L_089A38D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089A38E4;
      }
      goto L_089A38E0;
    }
L_089A38E0:
    ctx.gpr[2] = (0u | 0u);
    goto L_089A38E4;
L_089A38E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A38EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A3924u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089A3924u) goto L_089A3924;
    return;
L_089A3924:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A393C;
      }
      goto L_089A392C;
    }
L_089A392C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A395C;
      }
      goto L_089A393C;
    }
L_089A393C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[22] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
        goto L_089A3964;
    }
    goto L_089A3954;
L_089A3954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3A88;
      }
      goto L_089A395C;
    }
L_089A395C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3A88;
      }
      goto L_089A3964;
    }
L_089A3964:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A3A88;
      }
      goto L_089A3970;
    }
L_089A3970:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16262u << 16u);
      if (branch_taken) {
          goto L_089A3A7C;
      }
      goto L_089A3984;
    }
L_089A3984:
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (16672u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (0u | 5u);
    ctx.gpr[21] = (ctx.gpr[16] | 0u);
    goto L_089A39A8;
L_089A39A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1828)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089A39B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 594u, 0x088870A0u>(ctx, &aot_mem) && ctx.pc == 0x089A39B8u) goto L_089A39B8;
    return;
L_089A39B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3A68;
      }
      goto L_089A39C0;
    }
L_089A39C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1828)));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
          goto L_089A3A68;
      }
      goto L_089A3A04;
    }
L_089A3A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(39))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(39))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3A68;
      }
      goto L_089A3A24;
    }
L_089A3A24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089A3A68;
      }
      goto L_089A3A34;
    }
L_089A3A34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089A3A48u);
    ctx.gpr[7] = (0u | 0u);
    goto L_089A064C;
L_089A3A48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1780), ctx.gpr[5]);
    ctx.gpr[31] = (0x089A3A60u);
    ctx.gpr[5] = (0u | 154u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089A3A60u) goto L_089A3A60;
    return;
L_089A3A60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3A88;
      }
      goto L_089A3A68;
    }
L_089A3A68:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A39A8;
      }
      goto L_089A3A7C;
    }
L_089A3A7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1780), ctx.gpr[4]);
    goto L_089A3A88;
L_089A3A88:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3ABC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A3ADCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089A3ADCu) goto L_089A3ADC;
    return;
L_089A3ADC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3AF4;
      }
      goto L_089A3AE4;
    }
L_089A3AE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A3B18;
      }
      goto L_089A3AF4;
    }
L_089A3AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089A3B20;
      }
      goto L_089A3B10;
    }
L_089A3B10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3C0C;
      }
      goto L_089A3B18;
    }
L_089A3B18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3C0C;
      }
      goto L_089A3B20;
    }
L_089A3B20:
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
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x089A3B64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 158u, 0x088C0F80u>(ctx, &aot_mem) && ctx.pc == 0x089A3B64u) goto L_089A3B64;
    return;
L_089A3B64:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3BCC;
      }
      goto L_089A3B78;
    }
L_089A3B78:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A3BB0;
      }
      goto L_089A3B90;
    }
L_089A3B90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(216)));
    ctx.gpr[6] = (ctx.gpr[18] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3BB0;
      }
      goto L_089A3BA4;
    }
L_089A3BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    goto L_089A3BB0;
L_089A3BB0:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3B78;
      }
      goto L_089A3BCC;
    }
L_089A3BCC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 40000u);
      if (branch_taken) {
          goto L_089A3C00;
      }
      goto L_089A3BD8;
    }
L_089A3BD8:
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3C00;
      }
      goto L_089A3BE4;
    }
L_089A3BE4:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089A3C00u);
    ctx.gpr[7] = (0u | 0u);
    goto L_089A064C;
L_089A3C00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1780), ctx.gpr[4]);
    goto L_089A3C0C;
L_089A3C0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3C28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1380)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3C38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1380)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3C48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 28u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[18];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089A3E28;
      }
      goto L_089A3C7C;
    }
L_089A3C7C:
    ctx.gpr[31] = (0x089A3C84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089A3C84u) goto L_089A3C84;
    return;
L_089A3C84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3E28;
      }
      goto L_089A3C8C;
    }
L_089A3C8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3E28;
      }
      goto L_089A3C98;
    }
L_089A3C98:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A3E28;
      }
      goto L_089A3CA8;
    }
L_089A3CA8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(541)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3E28;
      }
      goto L_089A3CB4;
    }
L_089A3CB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1800)));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3E28;
      }
      goto L_089A3CCC;
    }
L_089A3CCC:
    ctx.gpr[7] = (16329u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[7] = (ctx.gpr[7] | 4059u);
    ctx.gpr[6] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_089A3D38;
      }
      goto L_089A3CE8;
    }
L_089A3CE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089A3D1C;
      }
      goto L_089A3D00;
    }
L_089A3D00:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A3D1C;
      }
      goto L_089A3D10;
    }
L_089A3D10:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
      if (branch_taken) {
          goto L_089A3D2C;
      }
      goto L_089A3D1C;
    }
L_089A3D1C:
    ctx.gpr[31] = (0x089A3D24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089A3D24u) goto L_089A3D24;
    return;
L_089A3D24:
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    goto L_089A3D2C;
L_089A3D2C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
      if (branch_taken) {
          goto L_089A3D84;
      }
      goto L_089A3D38;
    }
L_089A3D38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089A3D6C;
      }
      goto L_089A3D50;
    }
L_089A3D50:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A3D6C;
      }
      goto L_089A3D60;
    }
L_089A3D60:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[22];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
      if (branch_taken) {
          goto L_089A3D7C;
      }
      goto L_089A3D6C;
    }
L_089A3D6C:
    ctx.gpr[31] = (0x089A3D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089A3D74u) goto L_089A3D74;
    return;
L_089A3D74:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    goto L_089A3D7C;
L_089A3D7C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_089A3D84;
L_089A3D84:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_089A3D98;
    }
    goto L_089A3D98;
L_089A3D98:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A3E28;
      }
      goto L_089A3DA8;
    }
L_089A3DA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1784), ctx.gpr[4]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 2u);
      if (branch_taken) {
          goto L_089A3DEC;
      }
      goto L_089A3DC8;
    }
L_089A3DC8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3DEC;
      }
      goto L_089A3DD0;
    }
L_089A3DD0:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A3DE8u);
    ctx.gpr[6] = (0u | 125u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089A3DE8u) goto L_089A3DE8;
    return;
L_089A3DE8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    goto L_089A3DEC;
L_089A3DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[18]);
        goto L_089A3E28;
    }
    goto L_089A3DFC;
L_089A3DFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3E1C;
      }
      goto L_089A3E08;
    }
L_089A3E08:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A3E1C;
    }
    goto L_089A3E10;
L_089A3E10:
    ctx.gpr[31] = (0x089A3E18u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A3E18u) goto L_089A3E18;
    return;
L_089A3E18:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A3E1C;
L_089A3E1C:
    ctx.gpr[31] = (0x089A3E24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A1D00;
L_089A3E24:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[18]);
    goto L_089A3E28;
L_089A3E28:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3E4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3E98;
      }
      goto L_089A3E8C;
    }
L_089A3E8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3F2C;
      }
      goto L_089A3E98;
    }
L_089A3E98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089A3EC8;
      }
      goto L_089A3EA4;
    }
L_089A3EA4:
    ctx.gpr[31] = (0x089A3EACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089A3EACu) goto L_089A3EAC;
    return;
L_089A3EAC:
    ctx.gpr[31] = (0x089A3EB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x089A3EB4u) goto L_089A3EB4;
    return;
L_089A3EB4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A3EC0u);
    ctx.gpr[5] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 533u, 0x08886B9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A3EC0u) goto L_089A3EC0;
    return;
L_089A3EC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 12u, 0x089A40ACu>(ctx, &aot_mem); return;
      }
      goto L_089A3EC8;
    }
L_089A3EC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 101 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3F24;
      }
      goto L_089A3EFC;
    }
L_089A3EFC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A3F10u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 67u, 0x089A43B4u>(ctx, &aot_mem) && ctx.pc == 0x089A3F10u) goto L_089A3F10;
    return;
L_089A3F10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A3F1Cu);
    ctx.gpr[5] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089A3F1Cu) goto L_089A3F1C;
    return;
L_089A3F1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 12u, 0x089A40ACu>(ctx, &aot_mem); return;
      }
      goto L_089A3F24;
    }
L_089A3F24:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 12u, 0x089A40ACu>(ctx, &aot_mem); return;
      }
      goto L_089A3F2C;
    }
L_089A3F2C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089A3F4Cu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 528u, 0x0888E8F8u>(ctx, &aot_mem) && ctx.pc == 0x089A3F4Cu) goto L_089A3F4C;
    return;
L_089A3F4C:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A3F64u);
    ctx.gpr[5] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089A3F64u) goto L_089A3F64;
    return;
L_089A3F64:
    ctx.gpr[31] = (0x089A3F6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x089A3F6Cu) goto L_089A3F6C;
    return;
L_089A3F6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (16585u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A3F98;
      }
      goto L_089A3F84;
    }
L_089A3F84:
    ctx.gpr[31] = (0x089A3F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089A3F8Cu) goto L_089A3F8C;
    return;
L_089A3F8C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A3F98u);
    ctx.gpr[5] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x089A3F98u) goto L_089A3F98;
    return;
L_089A3F98:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A3FA4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089A2520;
L_089A3FA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089A3FBCu);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 241u, 0x08A1D350u>(ctx, &aot_mem) && ctx.pc == 0x089A3FBCu) goto L_089A3FBC;
    return;
L_089A3FBC:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    ctx.pc = 0x089A4000u; return;
}

void recomp_unit_0103(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0103_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_103(Runtime &runtime) {
    runtime.register_generated_unit(103u, 0x089A0000u, 16384u, &recomp_unit_0103, &recomp_unit_0103_entry);
    runtime.register_function(0x089A0000u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A000Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A003Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0064u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0068u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0070u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A008Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A00A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A00B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A00C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A00E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0100u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0110u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0134u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0154u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0160u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0170u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0180u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A018Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A01ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A01C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A01C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A01D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A01E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A01E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A01F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0200u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0228u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A023Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0244u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A024Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0254u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0264u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0280u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0290u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A02A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A02C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A02E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A02ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A02F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A02FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0304u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A030Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0320u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0340u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0348u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0358u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A039Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A03ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A03CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A03E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A03F0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A03FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A040Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0450u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0458u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0468u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0474u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A047Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A048Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A04ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A04CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A04F0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A04F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0500u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0508u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0518u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0528u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0530u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0540u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0550u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0558u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0560u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0564u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A056Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0584u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A058Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A059Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A05ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A05D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A05E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0624u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A062Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A063Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A064Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0684u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A068Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A06B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A06E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A06F0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0700u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0714u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0734u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A075Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0764u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0774u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A077Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A078Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0798u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A07A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A07ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A07B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A07BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A07CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A07DCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A07E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0828u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0830u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0838u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0840u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0848u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0850u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0860u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0868u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0870u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0878u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0880u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0890u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A089Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A08A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A08ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A08B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A08B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A08CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A08D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A08E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A08F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0910u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0924u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0928u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0934u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0948u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0950u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0958u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0960u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A096Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0978u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0984u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0988u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0994u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A09A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A09B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A09C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A09CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A09ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A09F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0A04u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0A10u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0A44u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0A50u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0A60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0A68u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0A74u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0A80u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0AA8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0AB4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0AC4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0ACCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0AD0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0AF0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0B08u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0B14u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0B40u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0B4Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0B60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0B6Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0B7Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0B84u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0B94u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0B98u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0BC0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0BD0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0BDCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0C1Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0C4Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0C58u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0C68u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0CC4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0CCCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0CD0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0CD8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0CDCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0CF0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0D10u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0D30u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0D50u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0D60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0D68u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0D70u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0D78u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0D84u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0D90u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0DA0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0DF0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0E04u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0E14u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0E1Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0E58u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0E60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0E70u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0E8Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0E98u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0EA4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0EB0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0ED0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0ED8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0EF4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F00u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F08u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F2Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F3Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F44u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F58u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F88u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F90u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F9Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0FA8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0FB0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0FB8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0FC8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0FDCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1004u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A100Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1014u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1020u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1038u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1044u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A104Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1058u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1070u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1078u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1090u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A109Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A10B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A10C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A10D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A10E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A10E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A10F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1100u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1114u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1128u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1138u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1150u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1164u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1184u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A11A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A11D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A11E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A11F0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1210u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1224u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A125Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A126Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1278u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1280u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1288u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A129Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A12ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A12B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A12C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A12E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A131Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A132Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1338u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1358u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A136Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A13A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A13B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A13BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A13D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A13E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A13F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1400u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A141Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1428u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1438u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1468u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A14A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A14ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A14B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A14BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A14CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A14ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A14F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A14FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1504u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1520u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1528u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1530u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1548u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1584u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A15B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A15BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A15D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A15E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A15F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A15FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1604u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A160Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1638u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1644u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A165Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1668u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1674u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1680u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1684u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A168Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A16A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A16B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A16E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1710u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1718u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1728u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1730u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1738u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A174Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1764u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1774u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A177Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1784u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A178Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1794u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A179Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17DCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1808u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1828u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1854u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A185Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A186Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1874u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A187Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1884u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1890u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1898u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A18A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A18A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A18B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A18B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A18C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A18C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A18CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A18D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A18E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A18E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A18ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A18F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A190Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1918u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1938u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A194Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1960u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A199Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A19A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A19ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A19BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A19D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A19DCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A19E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A19ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A19F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A04u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A10u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A20u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A24u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A2Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A40u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A54u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A90u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A98u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1AB4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1ACCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1AE0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1AF0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B10u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B40u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B48u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B58u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B68u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B70u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B78u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B98u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1BA4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1BACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1BB4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1BB8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1BC0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1BE4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1BF4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1BFCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1C1Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1C30u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1C3Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1C44u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1C60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1C78u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1C8Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1C9Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1CC0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1CD4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1D00u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1D08u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1D1Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1D28u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1D40u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1D60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1D7Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1D84u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1D90u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1DA8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1DB0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1DBCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1DCCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1DD4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E2Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E34u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E40u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E4Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E54u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E5Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E6Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E8Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E94u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1EA4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1EB0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1EB8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1EC0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1EC4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1ED8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1EECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1EF8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F04u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F0Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F14u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F20u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F24u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F50u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F5Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F74u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F7Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F84u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F98u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1FA8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1FB0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1FB8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1FC0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1FCCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1FD4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1FD8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2020u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2034u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2048u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2050u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2060u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2070u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A207Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2088u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2094u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2098u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A20A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A20A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2104u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2144u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2154u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2178u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2180u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2188u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2194u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A219Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A21A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A21ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A21B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A21BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A21C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A21C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A21CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A21F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2210u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2224u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2240u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2260u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A226Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2280u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A22A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A22A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A22B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A22B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A22D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A22E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A22ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A22F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A22FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2304u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2310u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2318u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2320u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2328u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2330u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2338u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A233Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2344u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2354u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2358u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A236Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2388u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2390u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A239Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A23ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A23BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A23CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A23E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A23ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A23F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2414u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2420u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A242Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A243Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2444u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A244Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A245Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2468u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2470u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2478u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2494u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A24ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A24B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A24C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A24D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A24D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A24E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A24F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2500u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2508u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2520u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2528u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A253Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2548u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2560u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2568u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2570u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A257Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A258Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A259Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A25A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A25C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A25C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A25D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A25DCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A25E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2660u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A267Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2684u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A26ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A26BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A26D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A26DCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A26F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2710u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2730u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2738u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2740u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2754u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2778u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A27A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A27A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A27D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A27D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A27E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2810u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2818u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2820u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2828u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2834u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2850u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2860u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2868u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2870u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2878u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2880u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A289Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A28ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A28B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A28C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A28C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A28D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A28E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A28F0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A28FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2908u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2920u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2934u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2940u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2948u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2950u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2960u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A296Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2974u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A298Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A299Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A29A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A29B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A29C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A29DCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A29F0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2A08u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2A14u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2A24u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2A2Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2A38u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2A54u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2A70u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2A7Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2A94u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2AACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2AB4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2AC4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2ADCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2AE4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2AFCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2B20u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2B30u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2B60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2B6Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2B7Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2B88u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2B90u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2B98u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2B9Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2BA4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2BB4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2BCCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C04u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C24u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C30u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C38u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C50u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C58u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C68u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C70u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C80u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C88u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C90u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C98u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2CA8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2CB4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2CC0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2CC8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2CD0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2CD8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2CE0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2CE8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2CF0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2CF8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D00u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D08u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D10u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D20u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D28u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D30u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D38u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D3Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D48u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D50u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D54u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D68u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D9Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2DA4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2DACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2DBCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2DC4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2DD8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2DE8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2DF8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E04u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E20u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E28u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E30u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E3Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E44u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E4Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E50u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E58u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E5Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E7Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E88u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E94u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E9Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2EA4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2EACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2EB4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2EBCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2EC4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2ECCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2ED0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2ED8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2EE4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2EECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2EF4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2EFCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2F04u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2F0Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2F14u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2F18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2F20u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2F5Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2F6Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2F8Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2F94u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2FA4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2FB0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2FC0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2FCCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2FECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2FF8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3004u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A300Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3024u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3048u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3064u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3074u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A307Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3088u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3094u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A30A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A30A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A30B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A30C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A30E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3120u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3128u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3134u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3150u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3160u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3178u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3188u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A31A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A31B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A31BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A31C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A31C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A31D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A31D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A31DCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A31F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3210u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3218u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3228u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3230u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3238u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3240u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3250u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A326Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3278u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3280u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3290u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3298u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A32A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A32A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A32B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A32C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A32C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A32D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A32E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3300u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3308u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3318u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A332Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A333Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3344u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A336Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A337Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3388u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3394u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A33A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A33B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A33B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A33C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A33CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A33DCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A33F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3440u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3454u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3470u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3480u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A34ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A34E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A34F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A352Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3534u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A35C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A35CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A35D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A35DCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A35E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A35F0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A35F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3600u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3608u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3610u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3614u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A361Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3628u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A363Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3650u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3658u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3660u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A367Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3684u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A36F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3710u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3728u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A373Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A376Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3778u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A37A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A37C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A37C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A37D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A37D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A37E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A37F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3828u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3830u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A385Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3870u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3878u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3890u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A38A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A38ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A38B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A38B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A38C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A38D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A38D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A38E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A38E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A38ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3924u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A392Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A393Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3954u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A395Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3964u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3970u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3984u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A39A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A39B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A39C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3A04u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3A24u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3A34u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3A48u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3A60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3A68u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3A7Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3A88u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3ABCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3ADCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3AE4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3AF4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B10u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B20u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B64u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B78u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B90u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3BA4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3BB0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3BCCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3BD8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3BE4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C00u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C0Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C28u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C38u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C48u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C7Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C84u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C8Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C98u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3CA8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3CB4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3CCCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3CE8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D00u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D10u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D1Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D24u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D2Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D38u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D50u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D6Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D74u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D7Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D84u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D98u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3DA8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3DC8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3DD0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3DE8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3DECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3DFCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3E08u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3E10u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3E18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3E1Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3E24u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3E28u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3E4Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3E8Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3E98u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3EA4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3EACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3EB4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3EC0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3EC8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3EFCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F10u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F1Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F24u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F2Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F4Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F64u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F6Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F84u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F8Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F98u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3FA4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3FBCu, &recomp_unit_0103, "recomp_unit_0103");
}
} // namespace psprecomp
