#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0033[4094] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3,
    0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 8, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0,
    0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0,
    0, 26, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 35, 36, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64,
    0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0,
    0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0,
    89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0,
    0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0,
    0, 100, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 106,
    0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 113, 0, 0, 114, 0, 115, 0, 116, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 119, 0, 0, 120, 0, 121, 0, 122, 0, 0, 0, 123,
    0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    129, 0, 130, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0,
    137, 0, 138, 0, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 147, 148, 0,
    149, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 153, 0, 0, 0, 0, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 0, 159, 0,
    160, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 163, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 0,
    0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 175, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 180, 0, 0, 0, 181, 0, 0,
    0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 185, 186, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 0, 195,
    0, 0, 196, 197, 0, 198, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 203, 0, 0, 0, 204,
    0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 213, 0, 0, 0, 0, 0,
    0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 218, 0, 0, 0, 219, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 223,
    0, 0, 0, 224, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 230, 0, 231, 0, 0, 0, 232, 0, 233, 0, 234, 0, 235, 236, 0, 237, 0,
    0, 238, 0, 239, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 245, 0, 0, 0, 246, 0, 0,
    0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 250, 0, 0, 251, 0, 252, 0, 253, 0,
    0, 254, 0, 255, 0, 256, 0, 0, 0, 257, 0, 258, 0, 0, 259, 0, 260, 0, 0, 261, 0, 262, 0, 0, 263, 0, 264, 0, 0, 265, 0, 266,
    0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0, 270, 271, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0,
    0, 0, 0, 276, 0, 0, 0, 277, 278, 0, 279, 0, 0, 0, 280, 281, 0, 282, 0, 0, 0, 283, 0, 284, 0, 285, 0, 286, 0, 287, 0, 0,
    0, 288, 289, 0, 0, 0, 290, 291, 0, 292, 0, 0, 0, 293, 294, 0, 0, 0, 295, 296, 0, 297, 0, 0, 0, 298, 299, 0, 0, 0, 300, 301,
    0, 302, 0, 0, 0, 303, 304, 0, 0, 0, 305, 306, 0, 307, 0, 0, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0, 0, 313, 0, 0, 0,
    314, 0, 315, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 320, 0, 0, 321, 0, 0,
    0, 0, 322, 0, 0, 323, 0, 324, 0, 325, 0, 326, 0, 0, 327, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 0, 331, 0, 332, 0, 333, 0,
    334, 0, 335, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 338, 0, 339, 0, 340, 0, 341, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 344, 0,
    345, 0, 346, 0, 347, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 350, 0, 351, 0, 352, 0, 353, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0,
    356, 0, 357, 0, 358, 0, 359, 0, 360, 0, 361, 0, 362, 0, 0, 0, 363, 0, 0, 364, 0, 365, 0, 366, 0, 367, 0, 0, 368, 0, 0, 369,
    0, 0, 370, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 376, 0, 377, 0, 0,
    0, 378, 0, 0, 0, 379, 0, 0, 380, 0, 381, 382, 0, 0, 0, 383, 0, 384, 0, 0, 385, 0, 386, 0, 387, 0, 388, 0, 0, 0, 389, 0,
    390, 0, 0, 0, 391, 0, 0, 392, 0, 393, 0, 394, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 399, 0, 400, 0, 401, 0, 0, 402, 403, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 406, 0, 0,
    0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0, 412, 413, 0, 414, 415, 0, 0, 0,
    416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 423, 0, 424,
    0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 429, 0, 430, 0, 0, 431, 0, 0, 0,
    432, 0, 0, 0, 433, 434, 0, 0, 0, 0, 435, 0, 436, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440, 0, 0,
    0, 441, 0, 0, 442, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0,
    0, 449, 0, 0, 450, 0, 0, 0, 451, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 455, 456, 0, 457, 0, 458,
    0, 0, 0, 459, 0, 460, 0, 461, 0, 462, 0, 463, 0, 464, 0, 0, 0, 465, 0, 466, 0, 0, 0, 467, 0, 0, 0, 468, 0, 469, 0, 470,
    0, 0, 0, 471, 0, 472, 0, 0, 0, 473, 474, 0, 475, 0, 476, 0, 0, 0, 477, 0, 478, 0, 0, 0, 479, 0, 0, 0, 480, 0, 481, 0,
    482, 0, 0, 0, 483, 0, 484, 0, 0, 0, 485, 486, 0, 487, 0, 488, 0, 0, 0, 489, 0, 490, 0, 0, 0, 491, 0, 0, 0, 492, 0, 493,
    0, 494, 0, 0, 0, 495, 0, 496, 0, 0, 0, 497, 498, 0, 499, 0, 500, 0, 0, 0, 501, 0, 502, 0, 0, 0, 503, 0, 0, 0, 504, 0,
    505, 0, 506, 0, 0, 0, 507, 0, 508, 0, 0, 0, 509, 510, 0, 511, 0, 512, 0, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 515, 0, 516,
    0, 517, 0, 0, 518, 0, 0, 519, 0, 0, 520, 0, 0, 521, 0, 0, 522, 0, 523, 0, 0, 0, 0, 524, 0, 525, 0, 0, 0, 0, 526, 0,
    0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 528, 0, 529, 0, 0, 530, 0, 531, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0,
    0, 0, 538, 0, 0, 0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0,
    545, 0, 0, 0, 0, 0, 546, 0, 547, 0, 0, 548, 0, 549, 0, 0, 550, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 0, 553, 0, 0, 0,
    554, 0, 0, 0, 0, 555, 0, 0, 556, 0, 0, 0, 0, 557, 0, 558, 0, 0, 0, 0, 559, 0, 560, 0, 0, 561, 0, 562, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 566, 0, 567, 0, 0, 568, 0, 569, 0, 0,
    0, 0, 0, 570, 0, 0, 571, 0, 572, 0, 0, 0, 0, 573, 0, 0, 574, 0, 575, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 0, 0, 578,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 580, 0, 0, 0, 0, 581, 0, 582, 0, 583, 0, 584, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0,
    0, 587, 0, 0, 0, 0, 0, 0, 588, 0, 589, 0, 590, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 596, 597, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 600, 0,
    601, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 611, 0, 612, 0, 613, 0, 0, 614, 615, 0, 616, 0, 0, 0, 0, 617, 0, 0, 0, 0, 618, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 621,
    0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 626, 0, 0, 627, 0, 0, 0, 0, 0, 0, 628, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 631, 0,
    0, 0, 632, 0, 0, 0, 633, 0, 0, 634, 0, 0, 635, 0, 0, 636, 637, 0, 638, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 640, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 643, 0, 0, 0,
    0, 644, 0, 0, 645, 0, 0, 0, 646, 0, 0, 0, 0, 0, 647, 0, 648, 0, 649, 0, 650, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 0,
    0, 653, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 656, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 659, 0, 660, 0, 0, 661, 0, 0, 0, 662,
    0, 0, 663, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 668, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 671, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0,
    673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 675, 0, 676, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 679, 0,
    0, 0, 0, 0, 0, 680, 0, 681, 0, 682, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 685, 0, 0, 0, 686, 0, 0, 687, 0, 0, 0, 688,
    0, 0, 0, 689, 0, 0, 690, 0, 0, 0, 691, 0, 0, 692, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0, 0, 695, 0, 0, 0, 696, 0,
    0, 0, 697, 0, 0, 0, 698, 0, 699, 0, 0, 0, 700, 0, 0, 0, 701, 0, 702, 0, 703, 0, 0, 704, 0, 705, 0, 0, 0, 706, 0, 0,
    707, 0, 708, 709, 0, 0, 710, 0, 0, 711, 0, 712, 0, 713, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 715, 0, 0, 716, 0, 0, 0, 717,
    0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 0, 720, 0, 0, 0, 0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 724, 0,
    0, 725, 0, 0, 726, 727, 0, 728, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 731, 0, 0, 0, 0, 732, 0, 0, 0, 0,
    733, 734, 0, 0, 735, 0, 0, 0, 736, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 739, 0, 0, 0, 740, 0, 0, 0, 741, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 743, 0, 0, 0, 744, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 746, 0, 747, 0,
    748, 0, 749, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 752, 0, 753, 0, 754,
    755, 0, 756, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 759, 0, 760, 0,
    0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 763, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 765, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 767, 0, 768, 0, 0, 769, 0,
    0, 770, 0, 0, 771, 772, 0, 0, 773, 0, 0, 774, 0, 775, 0, 776, 0, 0, 0, 0, 777, 0, 0, 0, 778, 0, 0, 779, 0, 0, 780, 0,
    0, 781, 0, 0, 782, 0, 783, 0, 0, 784, 0, 0, 0, 785, 0, 0, 786, 0, 0, 787, 0, 0, 788, 789, 0, 790, 791, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 793, 0, 0, 794, 0, 0, 795, 0, 796, 0, 0, 0,
    797, 0, 0, 798, 0, 0, 799, 0, 0, 0, 800, 0, 801, 0, 0, 0, 802, 0, 0, 0, 803, 0, 804, 0, 0, 0, 805, 0, 806, 0, 807, 0,
    808, 0, 0, 809, 0, 0, 810, 0, 0, 811, 812, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 815,
    0, 0, 0, 0, 816, 0, 0, 0, 0, 817, 0, 0, 0, 0, 0, 0, 0, 0, 818, 0, 0, 0, 0, 819, 0, 0, 820, 0, 821, 0, 0, 822,
    0, 823, 0, 0, 0, 0, 0, 0, 0, 0, 824, 0, 0, 825, 0, 826, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 827, 0, 828, 0, 0, 0,
    829, 0, 0, 830, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 831, 0, 832, 0, 0, 0, 0, 0, 0, 833, 0, 0, 834, 0,
    0, 0, 0, 835, 0, 0, 0, 0, 836, 0, 837, 0, 0, 0, 838, 0, 0, 0, 839, 0, 0, 0, 840, 0, 0, 841, 0, 0, 0, 842, 0, 843,
    0, 0, 0, 0, 844, 0, 0, 0, 845, 0, 846, 0, 0, 0, 847, 0, 848, 0, 0, 0, 849, 0, 0, 0, 850, 0, 0, 0, 0, 851, 0, 0,
    0, 852, 0, 853, 0, 0, 0, 854, 0, 0, 0, 0, 0, 855, 0, 0, 0, 856, 0, 0, 0, 0, 857, 0, 0, 858, 0, 0, 0, 0, 859, 0,
    0, 860, 0, 861, 0, 0, 862, 0, 0, 0, 863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 864, 0, 865, 0, 0, 0, 866, 0, 867, 0, 868,
    0, 869, 0, 870, 0, 0, 0, 871, 0, 0, 0, 0, 0, 872, 0, 0, 0, 873, 0, 0, 0, 874, 0, 0, 0, 875, 0, 0, 0, 876, 0, 0,
    877, 0, 0, 878, 0, 879, 0, 880, 0, 881, 0, 0, 0, 882, 0, 0, 0, 883, 0, 884, 885, 0, 886, 0, 0, 0, 887, 0, 888, 889, 0, 890,
    0, 0, 0, 891, 892, 0, 893, 0, 894, 0, 0, 0, 0, 0, 895, 0, 0, 0, 896, 0, 0, 0, 897, 0, 0, 0, 898, 0, 899, 0, 0, 0,
    0, 0, 0, 900, 0, 901, 0, 0, 0, 0, 0, 0, 902, 0, 903, 904, 0, 905, 0, 0, 906, 0, 0, 907, 0, 0, 908, 0, 0, 0, 909, 910,
    0, 911, 0, 0, 912, 0, 0, 0, 913, 914, 0, 915, 0, 0, 916, 0, 0, 0, 917, 0, 918, 0, 919, 920, 0, 0, 0, 921, 0, 922, 0, 0,
    923, 0, 0, 0, 0, 0, 0, 0, 924, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 925, 0, 0, 0, 926, 0, 927, 0, 0, 0, 928, 0, 0, 0, 929, 0, 0, 930, 0, 0, 931, 0, 0, 932, 933,
    0, 934, 935, 0, 0, 0, 936, 0, 0, 0, 937, 0, 0, 0, 938, 0, 0, 939, 0, 0, 0, 940, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 941, 0, 0, 0, 0, 0, 0, 942, 0, 0, 943, 0, 0, 0, 944, 945, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    946, 0, 0, 0, 0, 0, 0, 947, 0, 0, 0, 948, 0, 949, 0, 0, 0, 950, 951, 0, 0, 952, 0, 0, 0, 953, 0, 0, 0, 954,
};
void recomp_unit_0033_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08888000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0033[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08888000;
    case 2u: goto L_08888030;
    case 3u: goto L_0888807C;
    case 4u: goto L_08888084;
    case 5u: goto L_0888809C;
    case 6u: goto L_08888138;
    case 7u: goto L_08888140;
    case 8u: goto L_08888148;
    case 9u: goto L_0888814C;
    case 10u: goto L_08888164;
    case 11u: goto L_08888190;
    case 12u: goto L_0888819C;
    case 13u: goto L_088881B0;
    case 14u: goto L_088881CC;
    case 15u: goto L_088881DC;
    case 16u: goto L_088881F8;
    case 17u: goto L_08888208;
    case 18u: goto L_08888244;
    case 19u: goto L_0888824C;
    case 20u: goto L_08888254;
    case 21u: goto L_08888280;
    case 22u: goto L_08888288;
    case 23u: goto L_088882C0;
    case 24u: goto L_088882C8;
    case 25u: goto L_088882F4;
    case 26u: goto L_08888304;
    case 27u: goto L_08888308;
    case 28u: goto L_08888318;
    case 29u: goto L_08888354;
    case 30u: goto L_088883A4;
    case 31u: goto L_088883AC;
    case 32u: goto L_088883C4;
    case 33u: goto L_0888845C;
    case 34u: goto L_08888464;
    case 35u: goto L_0888846C;
    case 36u: goto L_08888470;
    case 37u: goto L_08888488;
    case 38u: goto L_088884B4;
    case 39u: goto L_088884C0;
    case 40u: goto L_088884D4;
    case 41u: goto L_088884F0;
    case 42u: goto L_08888500;
    case 43u: goto L_0888851C;
    case 44u: goto L_0888852C;
    case 45u: goto L_08888568;
    case 46u: goto L_08888570;
    case 47u: goto L_08888578;
    case 48u: goto L_088885A4;
    case 49u: goto L_088885AC;
    case 50u: goto L_088885E4;
    case 51u: goto L_088885EC;
    case 52u: goto L_08888618;
    case 53u: goto L_08888628;
    case 54u: goto L_0888862C;
    case 55u: goto L_0888863C;
    case 56u: goto L_08888678;
    case 57u: goto L_0888869C;
    case 58u: goto L_088886A4;
    case 59u: goto L_088886A8;
    case 60u: goto L_088886B0;
    case 61u: goto L_088886D0;
    case 62u: goto L_088886DC;
    case 63u: goto L_088886EC;
    case 64u: goto L_088886FC;
    case 65u: goto L_08888708;
    case 66u: goto L_08888714;
    case 67u: goto L_08888720;
    case 68u: goto L_08888728;
    case 69u: goto L_08888738;
    case 70u: goto L_08888750;
    case 71u: goto L_08888760;
    case 72u: goto L_08888774;
    case 73u: goto L_08888780;
    case 74u: goto L_088887C8;
    case 75u: goto L_088887E0;
    case 76u: goto L_088887F4;
    case 77u: goto L_08888808;
    case 78u: goto L_08888810;
    case 79u: goto L_08888834;
    case 80u: goto L_08888844;
    case 81u: goto L_08888850;
    case 82u: goto L_08888868;
    case 83u: goto L_088888A8;
    case 84u: goto L_088888B4;
    case 85u: goto L_088888C4;
    case 86u: goto L_088888D0;
    case 87u: goto L_088888E0;
    case 88u: goto L_088888E8;
    case 89u: goto L_08888900;
    case 90u: goto L_08888914;
    case 91u: goto L_08888928;
    case 92u: goto L_08888930;
    case 93u: goto L_08888954;
    case 94u: goto L_08888964;
    case 95u: goto L_08888970;
    case 96u: goto L_08888988;
    case 97u: goto L_088889C8;
    case 98u: goto L_088889D8;
    case 99u: goto L_088889E8;
    case 100u: goto L_08888A04;
    case 101u: goto L_08888A18;
    case 102u: goto L_08888A20;
    case 103u: goto L_08888A34;
    case 104u: goto L_08888A60;
    case 105u: goto L_08888A6C;
    case 106u: goto L_08888A7C;
    case 107u: goto L_08888A88;
    case 108u: goto L_08888A98;
    case 109u: goto L_08888B28;
    case 110u: goto L_08888B40;
    case 111u: goto L_08888BC0;
    case 112u: goto L_08888BC8;
    case 113u: goto L_08888BD8;
    case 114u: goto L_08888BE4;
    case 115u: goto L_08888BEC;
    case 116u: goto L_08888BF4;
    case 117u: goto L_08888C38;
    case 118u: goto L_08888C40;
    case 119u: goto L_08888C50;
    case 120u: goto L_08888C5C;
    case 121u: goto L_08888C64;
    case 122u: goto L_08888C6C;
    case 123u: goto L_08888C7C;
    case 124u: goto L_08888C88;
    case 125u: goto L_08888C90;
    case 126u: goto L_08888C98;
    case 127u: goto L_08888CB8;
    case 128u: goto L_08888CF0;
    case 129u: goto L_08888D00;
    case 130u: goto L_08888D08;
    case 131u: goto L_08888D10;
    case 132u: goto L_08888D20;
    case 133u: goto L_08888D38;
    case 134u: goto L_08888D4C;
    case 135u: goto L_08888D60;
    case 136u: goto L_08888D74;
    case 137u: goto L_08888D80;
    case 138u: goto L_08888D88;
    case 139u: goto L_08888D94;
    case 140u: goto L_08888D9C;
    case 141u: goto L_08888DA4;
    case 142u: goto L_08888DAC;
    case 143u: goto L_08888DB4;
    case 144u: goto L_08888DC8;
    case 145u: goto L_08888DDC;
    case 146u: goto L_08888DE4;
    case 147u: goto L_08888DF4;
    case 148u: goto L_08888DF8;
    case 149u: goto L_08888E00;
    case 150u: goto L_08888E14;
    case 151u: goto L_08888E20;
    case 152u: goto L_08888E30;
    case 153u: goto L_08888E34;
    case 154u: goto L_08888E4C;
    case 155u: goto L_08888E54;
    case 156u: goto L_08888E5C;
    case 157u: goto L_08888E64;
    case 158u: goto L_08888E6C;
    case 159u: goto L_08888E78;
    case 160u: goto L_08888E80;
    case 161u: goto L_08888E90;
    case 162u: goto L_08888E9C;
    case 163u: goto L_08888EAC;
    case 164u: goto L_08888EB4;
    case 165u: goto L_08888EBC;
    case 166u: goto L_08888EC4;
    case 167u: goto L_08888ECC;
    case 168u: goto L_08888ED4;
    case 169u: goto L_08888EDC;
    case 170u: goto L_08888EE4;
    case 171u: goto L_08888EEC;
    case 172u: goto L_08888EF4;
    case 173u: goto L_08888F10;
    case 174u: goto L_08888F20;
    case 175u: goto L_08888F28;
    case 176u: goto L_08888F30;
    case 177u: goto L_08888F3C;
    case 178u: goto L_08888F4C;
    case 179u: goto L_08888F5C;
    case 180u: goto L_08888F64;
    case 181u: goto L_08888F74;
    case 182u: goto L_08888F90;
    case 183u: goto L_08888F98;
    case 184u: goto L_08888FB4;
    case 185u: goto L_08888FBC;
    case 186u: goto L_08888FC0;
    case 187u: goto L_08888FC8;
    case 188u: goto L_08888FDC;
    case 189u: goto L_08888FFC;
    case 190u: goto L_0888903C;
    case 191u: goto L_08889044;
    case 192u: goto L_08889054;
    case 193u: goto L_08889064;
    case 194u: goto L_08889070;
    case 195u: goto L_0888907C;
    case 196u: goto L_08889088;
    case 197u: goto L_0888908C;
    case 198u: goto L_08889094;
    case 199u: goto L_08889098;
    case 200u: goto L_088890B8;
    case 201u: goto L_088890D8;
    case 202u: goto L_088890E4;
    case 203u: goto L_088890EC;
    case 204u: goto L_088890FC;
    case 205u: goto L_08889108;
    case 206u: goto L_08889118;
    case 207u: goto L_08889130;
    case 208u: goto L_08889184;
    case 209u: goto L_08889194;
    case 210u: goto L_088891AC;
    case 211u: goto L_088891B4;
    case 212u: goto L_088891E4;
    case 213u: goto L_088891E8;
    case 214u: goto L_08889204;
    case 215u: goto L_08889214;
    case 216u: goto L_08889224;
    case 217u: goto L_08889234;
    case 218u: goto L_0888923C;
    case 219u: goto L_0888924C;
    case 220u: goto L_08889254;
    case 221u: goto L_08889264;
    case 222u: goto L_08889274;
    case 223u: goto L_0888927C;
    case 224u: goto L_0888928C;
    case 225u: goto L_08889290;
    case 226u: goto L_088892A4;
    case 227u: goto L_088892C8;
    case 228u: goto L_0888932C;
    case 229u: goto L_08889334;
    case 230u: goto L_0888933C;
    case 231u: goto L_08889344;
    case 232u: goto L_08889354;
    case 233u: goto L_0888935C;
    case 234u: goto L_08889364;
    case 235u: goto L_0888936C;
    case 236u: goto L_08889370;
    case 237u: goto L_08889378;
    case 238u: goto L_08889384;
    case 239u: goto L_0888938C;
    case 240u: goto L_08889394;
    case 241u: goto L_088893A0;
    case 242u: goto L_088893AC;
    case 243u: goto L_088893CC;
    case 244u: goto L_088893DC;
    case 245u: goto L_088893E4;
    case 246u: goto L_088893F4;
    case 247u: goto L_08889404;
    case 248u: goto L_08889444;
    case 249u: goto L_08889454;
    case 250u: goto L_0888945C;
    case 251u: goto L_08889468;
    case 252u: goto L_08889470;
    case 253u: goto L_08889478;
    case 254u: goto L_08889484;
    case 255u: goto L_0888948C;
    case 256u: goto L_08889494;
    case 257u: goto L_088894A4;
    case 258u: goto L_088894AC;
    case 259u: goto L_088894B8;
    case 260u: goto L_088894C0;
    case 261u: goto L_088894CC;
    case 262u: goto L_088894D4;
    case 263u: goto L_088894E0;
    case 264u: goto L_088894E8;
    case 265u: goto L_088894F4;
    case 266u: goto L_088894FC;
    case 267u: goto L_08889510;
    case 268u: goto L_0888951C;
    case 269u: goto L_08889528;
    case 270u: goto L_08889530;
    case 271u: goto L_08889534;
    case 272u: goto L_0888953C;
    case 273u: goto L_08889550;
    case 274u: goto L_08889564;
    case 275u: goto L_08889574;
    case 276u: goto L_0888958C;
    case 277u: goto L_0888959C;
    case 278u: goto L_088895A0;
    case 279u: goto L_088895A8;
    case 280u: goto L_088895B8;
    case 281u: goto L_088895BC;
    case 282u: goto L_088895C4;
    case 283u: goto L_088895D4;
    case 284u: goto L_088895DC;
    case 285u: goto L_088895E4;
    case 286u: goto L_088895EC;
    case 287u: goto L_088895F4;
    case 288u: goto L_08889604;
    case 289u: goto L_08889608;
    case 290u: goto L_08889618;
    case 291u: goto L_0888961C;
    case 292u: goto L_08889624;
    case 293u: goto L_08889634;
    case 294u: goto L_08889638;
    case 295u: goto L_08889648;
    case 296u: goto L_0888964C;
    case 297u: goto L_08889654;
    case 298u: goto L_08889664;
    case 299u: goto L_08889668;
    case 300u: goto L_08889678;
    case 301u: goto L_0888967C;
    case 302u: goto L_08889684;
    case 303u: goto L_08889694;
    case 304u: goto L_08889698;
    case 305u: goto L_088896A8;
    case 306u: goto L_088896AC;
    case 307u: goto L_088896B4;
    case 308u: goto L_088896C4;
    case 309u: goto L_088896CC;
    case 310u: goto L_088896D4;
    case 311u: goto L_088896DC;
    case 312u: goto L_088896E4;
    case 313u: goto L_088896F0;
    case 314u: goto L_08889700;
    case 315u: goto L_08889708;
    case 316u: goto L_0888971C;
    case 317u: goto L_08889724;
    case 318u: goto L_0888973C;
    case 319u: goto L_08889764;
    case 320u: goto L_08889768;
    case 321u: goto L_08889774;
    case 322u: goto L_08889788;
    case 323u: goto L_08889794;
    case 324u: goto L_0888979C;
    case 325u: goto L_088897A4;
    case 326u: goto L_088897AC;
    case 327u: goto L_088897B8;
    case 328u: goto L_088897C4;
    case 329u: goto L_088897D0;
    case 330u: goto L_088897DC;
    case 331u: goto L_088897E8;
    case 332u: goto L_088897F0;
    case 333u: goto L_088897F8;
    case 334u: goto L_08889800;
    case 335u: goto L_08889808;
    case 336u: goto L_08889814;
    case 337u: goto L_08889824;
    case 338u: goto L_08889834;
    case 339u: goto L_0888983C;
    case 340u: goto L_08889844;
    case 341u: goto L_0888984C;
    case 342u: goto L_08889858;
    case 343u: goto L_08889868;
    case 344u: goto L_08889878;
    case 345u: goto L_08889880;
    case 346u: goto L_08889888;
    case 347u: goto L_08889890;
    case 348u: goto L_0888989C;
    case 349u: goto L_088898AC;
    case 350u: goto L_088898BC;
    case 351u: goto L_088898C4;
    case 352u: goto L_088898CC;
    case 353u: goto L_088898D4;
    case 354u: goto L_088898E0;
    case 355u: goto L_088898F0;
    case 356u: goto L_08889900;
    case 357u: goto L_08889908;
    case 358u: goto L_08889910;
    case 359u: goto L_08889918;
    case 360u: goto L_08889920;
    case 361u: goto L_08889928;
    case 362u: goto L_08889930;
    case 363u: goto L_08889940;
    case 364u: goto L_0888994C;
    case 365u: goto L_08889954;
    case 366u: goto L_0888995C;
    case 367u: goto L_08889964;
    case 368u: goto L_08889970;
    case 369u: goto L_0888997C;
    case 370u: goto L_08889988;
    case 371u: goto L_08889994;
    case 372u: goto L_0888999C;
    case 373u: goto L_088899B4;
    case 374u: goto L_088899DC;
    case 375u: goto L_088899E4;
    case 376u: goto L_088899EC;
    case 377u: goto L_088899F4;
    case 378u: goto L_08889A04;
    case 379u: goto L_08889A14;
    case 380u: goto L_08889A20;
    case 381u: goto L_08889A28;
    case 382u: goto L_08889A2C;
    case 383u: goto L_08889A3C;
    case 384u: goto L_08889A44;
    case 385u: goto L_08889A50;
    case 386u: goto L_08889A58;
    case 387u: goto L_08889A60;
    case 388u: goto L_08889A68;
    case 389u: goto L_08889A78;
    case 390u: goto L_08889A80;
    case 391u: goto L_08889A90;
    case 392u: goto L_08889A9C;
    case 393u: goto L_08889AA4;
    case 394u: goto L_08889AAC;
    case 395u: goto L_08889AC4;
    case 396u: goto L_08889ACC;
    case 397u: goto L_08889B10;
    case 398u: goto L_08889B18;
    case 399u: goto L_08889B28;
    case 400u: goto L_08889B30;
    case 401u: goto L_08889B38;
    case 402u: goto L_08889B44;
    case 403u: goto L_08889B48;
    case 404u: goto L_08889B54;
    case 405u: goto L_08889B6C;
    case 406u: goto L_08889B74;
    case 407u: goto L_08889B8C;
    case 408u: goto L_08889BAC;
    case 409u: goto L_08889BBC;
    case 410u: goto L_08889BC8;
    case 411u: goto L_08889BD4;
    case 412u: goto L_08889BE0;
    case 413u: goto L_08889BE4;
    case 414u: goto L_08889BEC;
    case 415u: goto L_08889BF0;
    case 416u: goto L_08889C00;
    case 417u: goto L_08889C1C;
    case 418u: goto L_08889C2C;
    case 419u: goto L_08889C38;
    case 420u: goto L_08889C44;
    case 421u: goto L_08889C5C;
    case 422u: goto L_08889C68;
    case 423u: goto L_08889C74;
    case 424u: goto L_08889C7C;
    case 425u: goto L_08889CA0;
    case 426u: goto L_08889CAC;
    case 427u: goto L_08889CBC;
    case 428u: goto L_08889CCC;
    case 429u: goto L_08889CDC;
    case 430u: goto L_08889CE4;
    case 431u: goto L_08889CF0;
    case 432u: goto L_08889D00;
    case 433u: goto L_08889D10;
    case 434u: goto L_08889D14;
    case 435u: goto L_08889D28;
    case 436u: goto L_08889D30;
    case 437u: goto L_08889D38;
    case 438u: goto L_08889D44;
    case 439u: goto L_08889D5C;
    case 440u: goto L_08889D74;
    case 441u: goto L_08889D84;
    case 442u: goto L_08889D90;
    case 443u: goto L_08889DA0;
    case 444u: goto L_08889DAC;
    case 445u: goto L_08889DBC;
    case 446u: goto L_08889DC8;
    case 447u: goto L_08889DE0;
    case 448u: goto L_08889DF8;
    case 449u: goto L_08889E04;
    case 450u: goto L_08889E10;
    case 451u: goto L_08889E20;
    case 452u: goto L_08889E2C;
    case 453u: goto L_08889E4C;
    case 454u: goto L_08889E54;
    case 455u: goto L_08889E68;
    case 456u: goto L_08889E6C;
    case 457u: goto L_08889E74;
    case 458u: goto L_08889E7C;
    case 459u: goto L_08889E8C;
    case 460u: goto L_08889E94;
    case 461u: goto L_08889E9C;
    case 462u: goto L_08889EA4;
    case 463u: goto L_08889EAC;
    case 464u: goto L_08889EB4;
    case 465u: goto L_08889EC4;
    case 466u: goto L_08889ECC;
    case 467u: goto L_08889EDC;
    case 468u: goto L_08889EEC;
    case 469u: goto L_08889EF4;
    case 470u: goto L_08889EFC;
    case 471u: goto L_08889F0C;
    case 472u: goto L_08889F14;
    case 473u: goto L_08889F24;
    case 474u: goto L_08889F28;
    case 475u: goto L_08889F30;
    case 476u: goto L_08889F38;
    case 477u: goto L_08889F48;
    case 478u: goto L_08889F50;
    case 479u: goto L_08889F60;
    case 480u: goto L_08889F70;
    case 481u: goto L_08889F78;
    case 482u: goto L_08889F80;
    case 483u: goto L_08889F90;
    case 484u: goto L_08889F98;
    case 485u: goto L_08889FA8;
    case 486u: goto L_08889FAC;
    case 487u: goto L_08889FB4;
    case 488u: goto L_08889FBC;
    case 489u: goto L_08889FCC;
    case 490u: goto L_08889FD4;
    case 491u: goto L_08889FE4;
    case 492u: goto L_08889FF4;
    case 493u: goto L_08889FFC;
    case 494u: goto L_0888A004;
    case 495u: goto L_0888A014;
    case 496u: goto L_0888A01C;
    case 497u: goto L_0888A02C;
    case 498u: goto L_0888A030;
    case 499u: goto L_0888A038;
    case 500u: goto L_0888A040;
    case 501u: goto L_0888A050;
    case 502u: goto L_0888A058;
    case 503u: goto L_0888A068;
    case 504u: goto L_0888A078;
    case 505u: goto L_0888A080;
    case 506u: goto L_0888A088;
    case 507u: goto L_0888A098;
    case 508u: goto L_0888A0A0;
    case 509u: goto L_0888A0B0;
    case 510u: goto L_0888A0B4;
    case 511u: goto L_0888A0BC;
    case 512u: goto L_0888A0C4;
    case 513u: goto L_0888A0DC;
    case 514u: goto L_0888A0EC;
    case 515u: goto L_0888A0F4;
    case 516u: goto L_0888A0FC;
    case 517u: goto L_0888A104;
    case 518u: goto L_0888A110;
    case 519u: goto L_0888A11C;
    case 520u: goto L_0888A128;
    case 521u: goto L_0888A134;
    case 522u: goto L_0888A140;
    case 523u: goto L_0888A148;
    case 524u: goto L_0888A15C;
    case 525u: goto L_0888A164;
    case 526u: goto L_0888A178;
    case 527u: goto L_0888A19C;
    case 528u: goto L_0888A1AC;
    case 529u: goto L_0888A1B4;
    case 530u: goto L_0888A1C0;
    case 531u: goto L_0888A1C8;
    case 532u: goto L_0888A1D0;
    case 533u: goto L_0888A1E4;
    case 534u: goto L_0888A1F4;
    case 535u: goto L_0888A228;
    case 536u: goto L_0888A250;
    case 537u: goto L_0888A268;
    case 538u: goto L_0888A288;
    case 539u: goto L_0888A29C;
    case 540u: goto L_0888A2B0;
    case 541u: goto L_0888A2C4;
    case 542u: goto L_0888A2D0;
    case 543u: goto L_0888A2E0;
    case 544u: goto L_0888A2EC;
    case 545u: goto L_0888A300;
    case 546u: goto L_0888A318;
    case 547u: goto L_0888A320;
    case 548u: goto L_0888A32C;
    case 549u: goto L_0888A334;
    case 550u: goto L_0888A340;
    case 551u: goto L_0888A348;
    case 552u: goto L_0888A364;
    case 553u: goto L_0888A370;
    case 554u: goto L_0888A380;
    case 555u: goto L_0888A394;
    case 556u: goto L_0888A3A0;
    case 557u: goto L_0888A3B4;
    case 558u: goto L_0888A3BC;
    case 559u: goto L_0888A3D0;
    case 560u: goto L_0888A3D8;
    case 561u: goto L_0888A3E4;
    case 562u: goto L_0888A3EC;
    case 563u: goto L_0888A41C;
    case 564u: goto L_0888A428;
    case 565u: goto L_0888A44C;
    case 566u: goto L_0888A458;
    case 567u: goto L_0888A460;
    case 568u: goto L_0888A46C;
    case 569u: goto L_0888A474;
    case 570u: goto L_0888A48C;
    case 571u: goto L_0888A498;
    case 572u: goto L_0888A4A0;
    case 573u: goto L_0888A4B4;
    case 574u: goto L_0888A4C0;
    case 575u: goto L_0888A4C8;
    case 576u: goto L_0888A4D4;
    case 577u: goto L_0888A4E4;
    case 578u: goto L_0888A4FC;
    case 579u: goto L_0888A594;
    case 580u: goto L_0888A5A8;
    case 581u: goto L_0888A5BC;
    case 582u: goto L_0888A5C4;
    case 583u: goto L_0888A5CC;
    case 584u: goto L_0888A5D4;
    case 585u: goto L_0888A5E4;
    case 586u: goto L_0888A5F4;
    case 587u: goto L_0888A604;
    case 588u: goto L_0888A620;
    case 589u: goto L_0888A628;
    case 590u: goto L_0888A630;
    case 591u: goto L_0888A644;
    case 592u: goto L_0888A660;
    case 593u: goto L_0888A68C;
    case 594u: goto L_0888A698;
    case 595u: goto L_0888A6A4;
    case 596u: goto L_0888A6B0;
    case 597u: goto L_0888A6B4;
    case 598u: goto L_0888A6BC;
    case 599u: goto L_0888A6EC;
    case 600u: goto L_0888A6F8;
    case 601u: goto L_0888A700;
    case 602u: goto L_0888A708;
    case 603u: goto L_0888A754;
    case 604u: goto L_0888A784;
    case 605u: goto L_0888A7B0;
    case 606u: goto L_0888A7BC;
    case 607u: goto L_0888A7CC;
    case 608u: goto L_0888A7DC;
    case 609u: goto L_0888A7F0;
    case 610u: goto L_0888A818;
    case 611u: goto L_0888A91C;
    case 612u: goto L_0888A924;
    case 613u: goto L_0888A92C;
    case 614u: goto L_0888A938;
    case 615u: goto L_0888A93C;
    case 616u: goto L_0888A944;
    case 617u: goto L_0888A958;
    case 618u: goto L_0888A96C;
    case 619u: goto L_0888A998;
    case 620u: goto L_0888A9F4;
    case 621u: goto L_0888A9FC;
    case 622u: goto L_0888AA14;
    case 623u: goto L_0888AA38;
    case 624u: goto L_0888AA48;
    case 625u: goto L_0888AA64;
    case 626u: goto L_0888AA8C;
    case 627u: goto L_0888AA98;
    case 628u: goto L_0888AAB4;
    case 629u: goto L_0888AAC0;
    case 630u: goto L_0888AAE8;
    case 631u: goto L_0888AAF8;
    case 632u: goto L_0888AB08;
    case 633u: goto L_0888AB18;
    case 634u: goto L_0888AB24;
    case 635u: goto L_0888AB30;
    case 636u: goto L_0888AB3C;
    case 637u: goto L_0888AB40;
    case 638u: goto L_0888AB48;
    case 639u: goto L_0888AB4C;
    case 640u: goto L_0888AB8C;
    case 641u: goto L_0888AB98;
    case 642u: goto L_0888ABE8;
    case 643u: goto L_0888ABF0;
    case 644u: goto L_0888AC04;
    case 645u: goto L_0888AC10;
    case 646u: goto L_0888AC20;
    case 647u: goto L_0888AC38;
    case 648u: goto L_0888AC40;
    case 649u: goto L_0888AC48;
    case 650u: goto L_0888AC50;
    case 651u: goto L_0888AC58;
    case 652u: goto L_0888AC70;
    case 653u: goto L_0888AC84;
    case 654u: goto L_0888AC90;
    case 655u: goto L_0888ACB4;
    case 656u: goto L_0888ACBC;
    case 657u: goto L_0888ACD4;
    case 658u: goto L_0888AD44;
    case 659u: goto L_0888AD58;
    case 660u: goto L_0888AD60;
    case 661u: goto L_0888AD6C;
    case 662u: goto L_0888AD7C;
    case 663u: goto L_0888AD88;
    case 664u: goto L_0888AD98;
    case 665u: goto L_0888ADA8;
    case 666u: goto L_0888ADCC;
    case 667u: goto L_0888ADEC;
    case 668u: goto L_0888AE14;
    case 669u: goto L_0888AE1C;
    case 670u: goto L_0888AE44;
    case 671u: goto L_0888AE48;
    case 672u: goto L_0888AE60;
    case 673u: goto L_0888AE80;
    case 674u: goto L_0888AEAC;
    case 675u: goto L_0888AEC0;
    case 676u: goto L_0888AEC8;
    case 677u: goto L_0888AED8;
    case 678u: goto L_0888AEE8;
    case 679u: goto L_0888AEF8;
    case 680u: goto L_0888AF14;
    case 681u: goto L_0888AF1C;
    case 682u: goto L_0888AF24;
    case 683u: goto L_0888AF30;
    case 684u: goto L_0888AF40;
    case 685u: goto L_0888AF50;
    case 686u: goto L_0888AF60;
    case 687u: goto L_0888AF6C;
    case 688u: goto L_0888AF7C;
    case 689u: goto L_0888AF8C;
    case 690u: goto L_0888AF98;
    case 691u: goto L_0888AFA8;
    case 692u: goto L_0888AFB4;
    case 693u: goto L_0888AFC4;
    case 694u: goto L_0888AFD4;
    case 695u: goto L_0888AFE8;
    case 696u: goto L_0888AFF8;
    case 697u: goto L_0888B008;
    case 698u: goto L_0888B018;
    case 699u: goto L_0888B020;
    case 700u: goto L_0888B030;
    case 701u: goto L_0888B040;
    case 702u: goto L_0888B048;
    case 703u: goto L_0888B050;
    case 704u: goto L_0888B05C;
    case 705u: goto L_0888B064;
    case 706u: goto L_0888B074;
    case 707u: goto L_0888B080;
    case 708u: goto L_0888B088;
    case 709u: goto L_0888B08C;
    case 710u: goto L_0888B098;
    case 711u: goto L_0888B0A4;
    case 712u: goto L_0888B0AC;
    case 713u: goto L_0888B0B4;
    case 714u: goto L_0888B0D4;
    case 715u: goto L_0888B0E0;
    case 716u: goto L_0888B0EC;
    case 717u: goto L_0888B0FC;
    case 718u: goto L_0888B10C;
    case 719u: goto L_0888B128;
    case 720u: goto L_0888B134;
    case 721u: goto L_0888B14C;
    case 722u: goto L_0888B15C;
    case 723u: goto L_0888B16C;
    case 724u: goto L_0888B178;
    case 725u: goto L_0888B184;
    case 726u: goto L_0888B190;
    case 727u: goto L_0888B194;
    case 728u: goto L_0888B19C;
    case 729u: goto L_0888B1A0;
    case 730u: goto L_0888B1D0;
    case 731u: goto L_0888B1D8;
    case 732u: goto L_0888B1EC;
    case 733u: goto L_0888B200;
    case 734u: goto L_0888B204;
    case 735u: goto L_0888B210;
    case 736u: goto L_0888B220;
    case 737u: goto L_0888B230;
    case 738u: goto L_0888B240;
    case 739u: goto L_0888B24C;
    case 740u: goto L_0888B25C;
    case 741u: goto L_0888B26C;
    case 742u: goto L_0888B2A4;
    case 743u: goto L_0888B2B0;
    case 744u: goto L_0888B2C0;
    case 745u: goto L_0888B2D0;
    case 746u: goto L_0888B2F0;
    case 747u: goto L_0888B2F8;
    case 748u: goto L_0888B300;
    case 749u: goto L_0888B308;
    case 750u: goto L_0888B310;
    case 751u: goto L_0888B358;
    case 752u: goto L_0888B36C;
    case 753u: goto L_0888B374;
    case 754u: goto L_0888B37C;
    case 755u: goto L_0888B380;
    case 756u: goto L_0888B388;
    case 757u: goto L_0888B3A0;
    case 758u: goto L_0888B3E4;
    case 759u: goto L_0888B3F0;
    case 760u: goto L_0888B3F8;
    case 761u: goto L_0888B414;
    case 762u: goto L_0888B45C;
    case 763u: goto L_0888B464;
    case 764u: goto L_0888B4A8;
    case 765u: goto L_0888B4B8;
    case 766u: goto L_0888B4CC;
    case 767u: goto L_0888B4E4;
    case 768u: goto L_0888B4EC;
    case 769u: goto L_0888B4F8;
    case 770u: goto L_0888B504;
    case 771u: goto L_0888B510;
    case 772u: goto L_0888B514;
    case 773u: goto L_0888B520;
    case 774u: goto L_0888B52C;
    case 775u: goto L_0888B534;
    case 776u: goto L_0888B53C;
    case 777u: goto L_0888B550;
    case 778u: goto L_0888B560;
    case 779u: goto L_0888B56C;
    case 780u: goto L_0888B578;
    case 781u: goto L_0888B584;
    case 782u: goto L_0888B590;
    case 783u: goto L_0888B598;
    case 784u: goto L_0888B5A4;
    case 785u: goto L_0888B5B4;
    case 786u: goto L_0888B5C0;
    case 787u: goto L_0888B5CC;
    case 788u: goto L_0888B5D8;
    case 789u: goto L_0888B5DC;
    case 790u: goto L_0888B5E4;
    case 791u: goto L_0888B5E8;
    case 792u: goto L_0888B63C;
    case 793u: goto L_0888B650;
    case 794u: goto L_0888B65C;
    case 795u: goto L_0888B668;
    case 796u: goto L_0888B670;
    case 797u: goto L_0888B680;
    case 798u: goto L_0888B68C;
    case 799u: goto L_0888B698;
    case 800u: goto L_0888B6A8;
    case 801u: goto L_0888B6B0;
    case 802u: goto L_0888B6C0;
    case 803u: goto L_0888B6D0;
    case 804u: goto L_0888B6D8;
    case 805u: goto L_0888B6E8;
    case 806u: goto L_0888B6F0;
    case 807u: goto L_0888B6F8;
    case 808u: goto L_0888B700;
    case 809u: goto L_0888B70C;
    case 810u: goto L_0888B718;
    case 811u: goto L_0888B724;
    case 812u: goto L_0888B728;
    case 813u: goto L_0888B734;
    case 814u: goto L_0888B764;
    case 815u: goto L_0888B77C;
    case 816u: goto L_0888B790;
    case 817u: goto L_0888B7A4;
    case 818u: goto L_0888B7C8;
    case 819u: goto L_0888B7DC;
    case 820u: goto L_0888B7E8;
    case 821u: goto L_0888B7F0;
    case 822u: goto L_0888B7FC;
    case 823u: goto L_0888B804;
    case 824u: goto L_0888B828;
    case 825u: goto L_0888B834;
    case 826u: goto L_0888B83C;
    case 827u: goto L_0888B868;
    case 828u: goto L_0888B870;
    case 829u: goto L_0888B880;
    case 830u: goto L_0888B88C;
    case 831u: goto L_0888B8C8;
    case 832u: goto L_0888B8D0;
    case 833u: goto L_0888B8EC;
    case 834u: goto L_0888B8F8;
    case 835u: goto L_0888B90C;
    case 836u: goto L_0888B920;
    case 837u: goto L_0888B928;
    case 838u: goto L_0888B938;
    case 839u: goto L_0888B948;
    case 840u: goto L_0888B958;
    case 841u: goto L_0888B964;
    case 842u: goto L_0888B974;
    case 843u: goto L_0888B97C;
    case 844u: goto L_0888B990;
    case 845u: goto L_0888B9A0;
    case 846u: goto L_0888B9A8;
    case 847u: goto L_0888B9B8;
    case 848u: goto L_0888B9C0;
    case 849u: goto L_0888B9D0;
    case 850u: goto L_0888B9E0;
    case 851u: goto L_0888B9F4;
    case 852u: goto L_0888BA04;
    case 853u: goto L_0888BA0C;
    case 854u: goto L_0888BA1C;
    case 855u: goto L_0888BA34;
    case 856u: goto L_0888BA44;
    case 857u: goto L_0888BA58;
    case 858u: goto L_0888BA64;
    case 859u: goto L_0888BA78;
    case 860u: goto L_0888BA84;
    case 861u: goto L_0888BA8C;
    case 862u: goto L_0888BA98;
    case 863u: goto L_0888BAA8;
    case 864u: goto L_0888BAD4;
    case 865u: goto L_0888BADC;
    case 866u: goto L_0888BAEC;
    case 867u: goto L_0888BAF4;
    case 868u: goto L_0888BAFC;
    case 869u: goto L_0888BB04;
    case 870u: goto L_0888BB0C;
    case 871u: goto L_0888BB1C;
    case 872u: goto L_0888BB34;
    case 873u: goto L_0888BB44;
    case 874u: goto L_0888BB54;
    case 875u: goto L_0888BB64;
    case 876u: goto L_0888BB74;
    case 877u: goto L_0888BB80;
    case 878u: goto L_0888BB8C;
    case 879u: goto L_0888BB94;
    case 880u: goto L_0888BB9C;
    case 881u: goto L_0888BBA4;
    case 882u: goto L_0888BBB4;
    case 883u: goto L_0888BBC4;
    case 884u: goto L_0888BBCC;
    case 885u: goto L_0888BBD0;
    case 886u: goto L_0888BBD8;
    case 887u: goto L_0888BBE8;
    case 888u: goto L_0888BBF0;
    case 889u: goto L_0888BBF4;
    case 890u: goto L_0888BBFC;
    case 891u: goto L_0888BC0C;
    case 892u: goto L_0888BC10;
    case 893u: goto L_0888BC18;
    case 894u: goto L_0888BC20;
    case 895u: goto L_0888BC38;
    case 896u: goto L_0888BC48;
    case 897u: goto L_0888BC58;
    case 898u: goto L_0888BC68;
    case 899u: goto L_0888BC70;
    case 900u: goto L_0888BC8C;
    case 901u: goto L_0888BC94;
    case 902u: goto L_0888BCB0;
    case 903u: goto L_0888BCB8;
    case 904u: goto L_0888BCBC;
    case 905u: goto L_0888BCC4;
    case 906u: goto L_0888BCD0;
    case 907u: goto L_0888BCDC;
    case 908u: goto L_0888BCE8;
    case 909u: goto L_0888BCF8;
    case 910u: goto L_0888BCFC;
    case 911u: goto L_0888BD04;
    case 912u: goto L_0888BD10;
    case 913u: goto L_0888BD20;
    case 914u: goto L_0888BD24;
    case 915u: goto L_0888BD2C;
    case 916u: goto L_0888BD38;
    case 917u: goto L_0888BD48;
    case 918u: goto L_0888BD50;
    case 919u: goto L_0888BD58;
    case 920u: goto L_0888BD5C;
    case 921u: goto L_0888BD6C;
    case 922u: goto L_0888BD74;
    case 923u: goto L_0888BD80;
    case 924u: goto L_0888BDA0;
    case 925u: goto L_0888BE1C;
    case 926u: goto L_0888BE2C;
    case 927u: goto L_0888BE34;
    case 928u: goto L_0888BE44;
    case 929u: goto L_0888BE54;
    case 930u: goto L_0888BE60;
    case 931u: goto L_0888BE6C;
    case 932u: goto L_0888BE78;
    case 933u: goto L_0888BE7C;
    case 934u: goto L_0888BE84;
    case 935u: goto L_0888BE88;
    case 936u: goto L_0888BE98;
    case 937u: goto L_0888BEA8;
    case 938u: goto L_0888BEB8;
    case 939u: goto L_0888BEC4;
    case 940u: goto L_0888BED4;
    case 941u: goto L_0888BF08;
    case 942u: goto L_0888BF24;
    case 943u: goto L_0888BF30;
    case 944u: goto L_0888BF40;
    case 945u: goto L_0888BF44;
    case 946u: goto L_0888BF80;
    case 947u: goto L_0888BF9C;
    case 948u: goto L_0888BFAC;
    case 949u: goto L_0888BFB4;
    case 950u: goto L_0888BFC4;
    case 951u: goto L_0888BFC8;
    case 952u: goto L_0888BFD4;
    case 953u: goto L_0888BFE4;
    case 954u: goto L_0888BFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08888000:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888030:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0888807Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F7ACu>(ctx, &aot_mem) && ctx.pc == 0x0888807Cu) goto L_0888807C;
    return;
L_0888807C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888140;
      }
      goto L_08888084;
    }
L_08888084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1772)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888140;
      }
      goto L_0888809C;
    }
L_0888809C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(628)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08888148;
      }
      goto L_08888138;
    }
L_08888138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888814C;
      }
      goto L_08888140;
    }
L_08888140:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08888318;
      }
      goto L_08888148;
    }
L_08888148:
    ctx.gpr[23] = (0u | 10u);
    goto L_0888814C;
L_0888814C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08888308;
      }
      goto L_08888164;
    }
L_08888164:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-720));
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    goto L_08888190;
L_08888190:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0888819Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x0888819Cu) goto L_0888819C;
    return;
L_0888819C:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088881B0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 433u, 0x088A6DC0u>(ctx, &aot_mem) && ctx.pc == 0x088881B0u) goto L_088881B0;
    return;
L_088881B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088881CC;
    }
    goto L_088881CC;
L_088881CC:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08888208;
      }
      goto L_088881DC;
    }
L_088881DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088881F8;
    }
    goto L_088881F8;
L_088881F8:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088882F4;
      }
      goto L_08888208;
    }
L_08888208:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
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
          goto L_0888824C;
      }
      goto L_08888244;
    }
L_08888244:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0888824C;
L_0888824C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088882F4;
      }
      goto L_08888254;
    }
L_08888254:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08888280u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08888280u) goto L_08888280;
    return;
L_08888280:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088882F4;
      }
      goto L_08888288;
    }
L_08888288:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x088882C0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 72u, 0x088C8430u>(ctx, &aot_mem) && ctx.pc == 0x088882C0u) goto L_088882C0;
    return;
L_088882C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088882F4;
      }
      goto L_088882C8;
    }
L_088882C8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088882F4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088882F4u) goto L_088882F4;
    return;
L_088882F4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888190;
      }
      goto L_08888304;
    }
L_08888304:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08888308;
L_08888308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1772), ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    goto L_08888318;
L_08888318:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888354:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[31]);
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x088883A4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F7ACu>(ctx, &aot_mem) && ctx.pc == 0x088883A4u) goto L_088883A4;
    return;
L_088883A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888464;
      }
      goto L_088883AC;
    }
L_088883AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1772)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888464;
      }
      goto L_088883C4;
    }
L_088883C4:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_0888846C;
      }
      goto L_0888845C;
    }
L_0888845C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888470;
      }
      goto L_08888464;
    }
L_08888464:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0888863C;
      }
      goto L_0888846C;
    }
L_0888846C:
    ctx.gpr[23] = (0u | 10u);
    goto L_08888470;
L_08888470:
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
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0888862C;
      }
      goto L_08888488;
    }
L_08888488:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-720));
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    goto L_088884B4;
L_088884B4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x088884C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x088884C0u) goto L_088884C0;
    return;
L_088884C0:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088884D4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 433u, 0x088A6DC0u>(ctx, &aot_mem) && ctx.pc == 0x088884D4u) goto L_088884D4;
    return;
L_088884D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088884F0;
    }
    goto L_088884F0;
L_088884F0:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888852C;
      }
      goto L_08888500;
    }
L_08888500:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0888851C;
    }
    goto L_0888851C;
L_0888851C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08888618;
      }
      goto L_0888852C;
    }
L_0888852C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
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
          goto L_08888570;
      }
      goto L_08888568;
    }
L_08888568:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08888570;
L_08888570:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888618;
      }
      goto L_08888578;
    }
L_08888578:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x088885A4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x088885A4u) goto L_088885A4;
    return;
L_088885A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888618;
      }
      goto L_088885AC;
    }
L_088885AC:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x088885E4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 72u, 0x088C8430u>(ctx, &aot_mem) && ctx.pc == 0x088885E4u) goto L_088885E4;
    return;
L_088885E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888618;
      }
      goto L_088885EC;
    }
L_088885EC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08888618u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888618u) goto L_08888618;
    return;
L_08888618:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088884B4;
      }
      goto L_08888628;
    }
L_08888628:
    ctx.gpr[4] = (2230u << 16u);
    goto L_0888862C;
L_0888862C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1772), ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    goto L_0888863C;
L_0888863C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888678:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(418)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088886A4;
      }
      goto L_0888869C;
    }
L_0888869C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088886A8;
      }
      goto L_088886A4;
    }
L_088886A4:
    ctx.gpr[2] = (0u | 0u);
    goto L_088886A8;
L_088886A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088886B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08888750;
      }
      goto L_088886D0;
    }
L_088886D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088886EC;
      }
      goto L_088886DC;
    }
L_088886DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08888750;
      }
      goto L_088886EC;
    }
L_088886EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_08888714;
      }
      goto L_088886FC;
    }
L_088886FC:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08888708u);
    ctx.gpr[6] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08888708u) goto L_08888708;
    return;
L_08888708:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_08888728;
      }
      goto L_08888714;
    }
L_08888714:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08888720u);
    ctx.gpr[6] = (0u | 95u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08888720u) goto L_08888720;
    return;
L_08888720:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    goto L_08888728;
L_08888728:
    ctx.gpr[5] = (0u | 18u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), ctx.gpr[5]);
    ctx.gpr[31] = (0x08888738u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 668u, 0x0889F3FCu>(ctx, &aot_mem) && ctx.pc == 0x08888738u) goto L_08888738;
    return;
L_08888738:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31252));
    ctx.gpr[31] = (0x08888750u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x08888750u) goto L_08888750;
    return;
L_08888750:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888760:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x08888774u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08888774u) goto L_08888774;
    return;
L_08888774:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888780:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-464));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(364)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088888E8;
      }
      goto L_088887C8;
    }
L_088887C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088887F4;
      }
      goto L_088887E0;
    }
L_088887E0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088887F4;
L_088887F4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(112));
        goto L_08888810;
    }
    goto L_08888808;
L_08888808:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08888810;
      }
      goto L_08888810;
    }
L_08888810:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
      if (branch_taken) {
          goto L_08888850;
      }
      goto L_08888834;
    }
L_08888834:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[31] = (0x08888844u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08888844u) goto L_08888844;
    return;
L_08888844:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08888850;
L_08888850:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08888868u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 113u, 0x08884860u>(ctx, &aot_mem) && ctx.pc == 0x08888868u) goto L_08888868;
    return;
L_08888868:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(15468)));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(15468)));
    ctx.gpr[31] = (0x088888A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x088888A8u) goto L_088888A8;
    return;
L_088888A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_088888D0;
      }
      goto L_088888B4;
    }
L_088888B4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[31] = (0x088888C4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x088888C4u) goto L_088888C4;
    return;
L_088888C4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088888D0;
L_088888D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088888E0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x088888E0u) goto L_088888E0;
    return;
L_088888E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888A98;
      }
      goto L_088888E8;
    }
L_088888E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08888914;
      }
      goto L_08888900;
    }
L_08888900:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08888914;
L_08888914:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
        goto L_08888930;
    }
    goto L_08888928;
L_08888928:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08888930;
      }
      goto L_08888930;
    }
L_08888930:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_08888970;
      }
      goto L_08888954;
    }
L_08888954:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(321));
    ctx.gpr[31] = (0x08888964u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08888964u) goto L_08888964;
    return;
L_08888964:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(321)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08888970;
L_08888970:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08888988u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 113u, 0x08884860u>(ctx, &aot_mem) && ctx.pc == 0x08888988u) goto L_08888988;
    return;
L_08888988:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(15468)));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_088889E8;
    }
    goto L_088889C8;
L_088889C8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.gpr[31] = (0x088889D8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x088889D8u) goto L_088889D8;
    return;
L_088889D8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    goto L_088889E8;
L_088889E8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(520));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(15)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 3u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888A20;
      }
      goto L_08888A04;
    }
L_08888A04:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(15468)));
    ctx.gpr[31] = (0x08888A18u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08888A18u) goto L_08888A18;
    return;
L_08888A18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888A60;
      }
      goto L_08888A20;
    }
L_08888A20:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(15468)));
    ctx.gpr[31] = (0x08888A34u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08888A34u) goto L_08888A34;
    return;
L_08888A34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08888A60;
L_08888A60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08888A88;
      }
      goto L_08888A6C;
    }
L_08888A6C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(353));
    ctx.gpr[31] = (0x08888A7Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08888A7Cu) goto L_08888A7C;
    return;
L_08888A7C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(353)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08888A88;
L_08888A88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08888A98u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x08888A98u) goto L_08888A98;
    return;
L_08888A98:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888B40;
      }
      goto L_08888B28;
    }
L_08888B28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08888B40;
L_08888B40:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08888BC0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08888BC0u) goto L_08888BC0;
    return;
L_08888BC0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888BF4;
      }
      goto L_08888BC8;
    }
L_08888BC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888C64;
      }
      goto L_08888BD8;
    }
L_08888BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888C64;
      }
      goto L_08888BE4;
    }
L_08888BE4:
    ctx.gpr[31] = (0x08888BECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08888BECu) goto L_08888BEC;
    return;
L_08888BEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888C64;
      }
      goto L_08888BF4;
    }
L_08888BF4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08888C38u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 72u, 0x088C8430u>(ctx, &aot_mem) && ctx.pc == 0x08888C38u) goto L_08888C38;
    return;
L_08888C38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888C6C;
      }
      goto L_08888C40;
    }
L_08888C40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888C64;
      }
      goto L_08888C50;
    }
L_08888C50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888C64;
      }
      goto L_08888C5C;
    }
L_08888C5C:
    ctx.gpr[31] = (0x08888C64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08888C64u) goto L_08888C64;
    return;
L_08888C64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08888C98;
      }
      goto L_08888C6C;
    }
L_08888C6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888C90;
      }
      goto L_08888C7C;
    }
L_08888C7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888C90;
      }
      goto L_08888C88;
    }
L_08888C88:
    ctx.gpr[31] = (0x08888C90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08888C90u) goto L_08888C90;
    return;
L_08888C90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08888C98;
      }
      goto L_08888C98;
    }
L_08888C98:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888CB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(836)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08888D08;
      }
      goto L_08888CF0;
    }
L_08888CF0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
      if (branch_taken) {
          goto L_08888D10;
      }
      goto L_08888D00;
    }
L_08888D00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888D88;
      }
      goto L_08888D08;
    }
L_08888D08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888FDC;
      }
      goto L_08888D10;
    }
L_08888D10:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888E20;
      }
      goto L_08888D20;
    }
L_08888D20:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(904)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888D38:
    ctx.gpr[20] = (0u | 2u);
    ctx.gpr[18] = (0u | 5u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888E20;
      }
      goto L_08888D4C;
    }
L_08888D4C:
    ctx.gpr[20] = (0u | 3u);
    ctx.gpr[18] = (0u | 5u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888E20;
      }
      goto L_08888D60;
    }
L_08888D60:
    ctx.gpr[20] = (0u | 4u);
    ctx.gpr[18] = (0u | 10u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888E20;
      }
      goto L_08888D74;
    }
L_08888D74:
    ctx.gpr[20] = (0u | 5u);
    ctx.gpr[18] = (0u | 10u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    goto L_08888D80;
L_08888D80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888E20;
      }
      goto L_08888D88;
    }
L_08888D88:
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_08888E00;
      }
      goto L_08888D94;
    }
L_08888D94:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_08888DB4;
      }
      goto L_08888D9C;
    }
L_08888D9C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_08888E14;
      }
      goto L_08888DA4;
    }
L_08888DA4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08888DC8;
      }
      goto L_08888DAC;
    }
L_08888DAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888E20;
      }
      goto L_08888DB4;
    }
L_08888DB4:
    ctx.gpr[20] = (0u | 2u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888E20;
      }
      goto L_08888DC8;
    }
L_08888DC8:
    ctx.gpr[20] = (0u | 3u);
    ctx.gpr[18] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888DE4;
      }
      goto L_08888DDC;
    }
L_08888DDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08888DF8;
      }
      goto L_08888DE4;
    }
L_08888DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08888DF8;
      }
      goto L_08888DF4;
    }
L_08888DF4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    goto L_08888DF8;
L_08888DF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888E20;
      }
      goto L_08888E00;
    }
L_08888E00:
    ctx.gpr[20] = (0u | 4u);
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888E20;
      }
      goto L_08888E14;
    }
L_08888E14:
    ctx.gpr[20] = (0u | 5u);
    ctx.gpr[18] = (0u | 8u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(516)));
    goto L_08888E20;
L_08888E20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888E34;
      }
      goto L_08888E30;
    }
L_08888E30:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    goto L_08888E34;
L_08888E34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08888E64;
      }
      goto L_08888E4C;
    }
L_08888E4C:
    ctx.gpr[31] = (0x08888E54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08888E54u) goto L_08888E54;
    return;
L_08888E54:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
        goto L_08888E6C;
    }
    goto L_08888E5C;
L_08888E5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888EAC;
      }
      goto L_08888E64;
    }
L_08888E64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888FDC;
      }
      goto L_08888E6C;
    }
L_08888E6C:
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_08888EAC;
      }
      goto L_08888E78;
    }
L_08888E78:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08888EAC;
      }
      goto L_08888E80;
    }
L_08888E80:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08888EAC;
      }
      goto L_08888E90;
    }
L_08888E90:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08888EDC;
      }
      goto L_08888E9C;
    }
L_08888E9C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 164u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08888EDC;
      }
      goto L_08888EAC;
    }
L_08888EAC:
    ctx.gpr[31] = (0x08888EB4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 402u, 0x088525E8u>(ctx, &aot_mem) && ctx.pc == 0x08888EB4u) goto L_08888EB4;
    return;
L_08888EB4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888ED4;
      }
      goto L_08888EBC;
    }
L_08888EBC:
    ctx.gpr[31] = (0x08888EC4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08888EC4u) goto L_08888EC4;
    return;
L_08888EC4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888EE4;
      }
      goto L_08888ECC;
    }
L_08888ECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888F10;
      }
      goto L_08888ED4;
    }
L_08888ED4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888FDC;
      }
      goto L_08888EDC;
    }
L_08888EDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888FDC;
      }
      goto L_08888EE4;
    }
L_08888EE4:
    ctx.gpr[31] = (0x08888EECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08888EECu) goto L_08888EEC;
    return;
L_08888EEC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888F10;
      }
      goto L_08888EF4;
    }
L_08888EF4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08888F28;
      }
      goto L_08888F10;
    }
L_08888F10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
        goto L_08888F30;
    }
    goto L_08888F20;
L_08888F20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888FDC;
      }
      goto L_08888F28;
    }
L_08888F28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888FDC;
      }
      goto L_08888F30;
    }
L_08888F30:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888FDC;
      }
      goto L_08888F3C;
    }
L_08888F3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888FDC;
      }
      goto L_08888F4C;
    }
L_08888F4C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888FDC;
      }
      goto L_08888F5C;
    }
L_08888F5C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888FDC;
      }
      goto L_08888F64;
    }
L_08888F64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08888FDC;
      }
      goto L_08888F74;
    }
L_08888F74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(232));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08888F90u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888F90u) goto L_08888F90;
    return;
L_08888F90:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
        goto L_08888FC0;
    }
    goto L_08888F98;
L_08888F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08888FB4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888FB4u) goto L_08888FB4;
    return;
L_08888FB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888FDC;
      }
      goto L_08888FBC;
    }
L_08888FBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    goto L_08888FC0;
L_08888FC0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888FDC;
      }
      goto L_08888FC8;
    }
L_08888FC8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08888FDCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08888FFC;
L_08888FDC:
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
L_08888FFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[8] = (0u | 24u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08889044;
      }
      goto L_0888903C;
    }
L_0888903C:
    ctx.gpr[31] = (0x08889044u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 727u, 0x0899FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08889044u) goto L_08889044;
    return;
L_08889044:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1328), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1328));
    ctx.gpr[31] = (0x08889054u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08889054u) goto L_08889054;
    return;
L_08889054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 56u);
      if (branch_taken) {
          goto L_08889098;
      }
      goto L_08889064;
    }
L_08889064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888908C;
      }
      goto L_08889070;
    }
L_08889070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
        goto L_0888908C;
    }
    goto L_0888907C;
L_0888907C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08889088u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08889088u) goto L_08889088;
    return;
L_08889088:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
    goto L_0888908C;
L_0888908C:
    ctx.gpr[31] = (0x08889094u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x08889094u) goto L_08889094;
    return;
L_08889094:
    ctx.gpr[4] = (0u | 56u);
    goto L_08889098;
L_08889098:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1328)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1332), ctx.gpr[4]);
    ctx.gpr[31] = (0x088890B8u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1332));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x088890B8u) goto L_088890B8;
    return;
L_088890B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(541)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(541), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088890EC;
      }
      goto L_088890D8;
    }
L_088890D8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088890E4u);
    ctx.gpr[5] = (0u | 110u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x088890E4u) goto L_088890E4;
    return;
L_088890E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889118;
      }
      goto L_088890EC;
    }
L_088890EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(660)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889118;
      }
      goto L_088890FC;
    }
L_088890FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889118;
      }
      goto L_08889108;
    }
L_08889108:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 121u);
    ctx.gpr[31] = (0x08889118u);
    ctx.gpr[6] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 247u, 0x0899DA18u>(ctx, &aot_mem) && ctx.pc == 0x08889118u) goto L_08889118;
    return;
L_08889118:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08889130u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 472u, 0x0888E3F0u>(ctx, &aot_mem) && ctx.pc == 0x08889130u) goto L_08889130;
    return;
L_08889130:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(542), static_cast<std::uint8_t>(ctx.gpr[5]));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(768));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(600));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889194;
      }
      goto L_08889184;
    }
L_08889184:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088891B4;
      }
      goto L_08889194;
    }
L_08889194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088891ACu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 54u, 0x0889035Cu>(ctx, &aot_mem) && ctx.pc == 0x088891ACu) goto L_088891AC;
    return;
L_088891AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088892A4;
      }
      goto L_088891B4;
    }
L_088891B4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16524u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16512u << 16u);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088891E8;
      }
      goto L_088891E4;
    }
L_088891E4:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_088891E8;
L_088891E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889214;
      }
      goto L_08889204;
    }
L_08889204:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889254;
      }
      goto L_08889214;
    }
L_08889214:
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888923C;
      }
      goto L_08889224;
    }
L_08889224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08889234u);
    ctx.gpr[6] = (0u | 70u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x08889234u) goto L_08889234;
    return;
L_08889234:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08889290;
      }
      goto L_0888923C;
    }
L_0888923C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888924Cu);
    ctx.gpr[6] = (0u | 69u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x0888924Cu) goto L_0888924C;
    return;
L_0888924C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08889290;
      }
      goto L_08889254;
    }
L_08889254:
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888927C;
      }
      goto L_08889264;
    }
L_08889264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08889274u);
    ctx.gpr[6] = (0u | 86u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x08889274u) goto L_08889274;
    return;
L_08889274:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08889290;
      }
      goto L_0888927C;
    }
L_0888927C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888928Cu);
    ctx.gpr[6] = (0u | 85u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x0888928Cu) goto L_0888928C;
    return;
L_0888928C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    goto L_08889290;
L_08889290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (2185u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(860));
    ctx.gpr[31] = (0x088892A4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x088892A4u) goto L_088892A4;
    return;
L_088892A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088892C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0888932Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 12u, 0x088A00D8u>(ctx, &aot_mem) && ctx.pc == 0x0888932Cu) goto L_0888932C;
    return;
L_0888932C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
      if (branch_taken) {
          goto L_088893E4;
      }
      goto L_08889334;
    }
L_08889334:
    ctx.gpr[31] = (0x0888933Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0888933Cu) goto L_0888933C;
    return;
L_0888933C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889370;
      }
      goto L_08889344;
    }
L_08889344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889364;
      }
      goto L_08889354;
    }
L_08889354:
    ctx.gpr[31] = (0x0888935Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 46u, 0x088A031Cu>(ctx, &aot_mem) && ctx.pc == 0x0888935Cu) goto L_0888935C;
    return;
L_0888935C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08889370;
      }
      goto L_08889364;
    }
L_08889364:
    ctx.gpr[31] = (0x0888936Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 52u, 0x088A0374u>(ctx, &aot_mem) && ctx.pc == 0x0888936Cu) goto L_0888936C;
    return;
L_0888936C:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    goto L_08889370;
L_08889370:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_088893E4;
      }
      goto L_08889378;
    }
L_08889378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088893DC;
      }
      goto L_08889384;
    }
L_08889384:
    ctx.gpr[31] = (0x0888938Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0888938Cu) goto L_0888938C;
    return;
L_0888938C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088893A0;
      }
      goto L_08889394;
    }
L_08889394:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088893DC;
      }
      goto L_088893A0;
    }
L_088893A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088893DC;
      }
      goto L_088893AC;
    }
L_088893AC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1772), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088893DC;
      }
      goto L_088893CC;
    }
L_088893CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_088893DC;
L_088893DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A1F4;
      }
      goto L_088893E4;
    }
L_088893E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A1F4;
      }
      goto L_088893F4;
    }
L_088893F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A1F4;
      }
      goto L_08889404;
    }
L_08889404:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[30] = (0u | 5u);
      if (branch_taken) {
          goto L_08889550;
      }
      goto L_08889444;
    }
L_08889444:
    ctx.gpr[18] = (0u | 15u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08889494;
      }
      goto L_08889454;
    }
L_08889454:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889478;
      }
      goto L_0888945C;
    }
L_0888945C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08889470;
      }
      goto L_08889468;
    }
L_08889468:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 8u);
      if (branch_taken) {
          goto L_08889550;
      }
      goto L_08889470;
    }
L_08889470:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 18u);
      if (branch_taken) {
          goto L_08889550;
      }
      goto L_08889478;
    }
L_08889478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0888948C;
      }
      goto L_08889484;
    }
L_08889484:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 16u);
      if (branch_taken) {
          goto L_08889550;
      }
      goto L_0888948C;
    }
L_0888948C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 15u);
      if (branch_taken) {
          goto L_08889550;
      }
      goto L_08889494;
    }
L_08889494:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088894AC;
      }
      goto L_088894A4;
    }
L_088894A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 15u);
      if (branch_taken) {
          goto L_08889550;
      }
      goto L_088894AC;
    }
L_088894AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088894C0;
      }
      goto L_088894B8;
    }
L_088894B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 15u);
      if (branch_taken) {
          goto L_08889550;
      }
      goto L_088894C0;
    }
L_088894C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088894D4;
      }
      goto L_088894CC;
    }
L_088894CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 11u);
      if (branch_taken) {
          goto L_08889550;
      }
      goto L_088894D4;
    }
L_088894D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088894E8;
      }
      goto L_088894E0;
    }
L_088894E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 16u);
      if (branch_taken) {
          goto L_08889550;
      }
      goto L_088894E8;
    }
L_088894E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088894FC;
      }
      goto L_088894F4;
    }
L_088894F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 12u);
      if (branch_taken) {
          goto L_08889550;
      }
      goto L_088894FC;
    }
L_088894FC:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08889550;
      }
      goto L_08889510;
    }
L_08889510:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0888953C;
      }
      goto L_0888951C;
    }
L_0888951C:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889530;
      }
      goto L_08889528;
    }
L_08889528:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 12u);
      if (branch_taken) {
          goto L_08889534;
      }
      goto L_08889530;
    }
L_08889530:
    ctx.gpr[18] = (0u | 16u);
    goto L_08889534;
L_08889534:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889550;
      }
      goto L_0888953C;
    }
L_0888953C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08889510;
      }
      goto L_08889550;
    }
L_08889550:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088895C4;
      }
      goto L_08889564;
    }
L_08889564:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(-8));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088896AC;
      }
      goto L_08889574;
    }
L_08889574:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(944)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888958C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 5u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088895A0;
      }
      goto L_0888959C;
    }
L_0888959C:
    ctx.gpr[4] = (0u | 1u);
    goto L_088895A0;
L_088895A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088896AC;
      }
      goto L_088895A8;
    }
L_088895A8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 10u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088895BC;
      }
      goto L_088895B8;
    }
L_088895B8:
    ctx.gpr[4] = (0u | 1u);
    goto L_088895BC;
L_088895BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088896AC;
      }
      goto L_088895C4;
    }
L_088895C4:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 15u);
      if (branch_taken) {
          goto L_08889624;
      }
      goto L_088895D4;
    }
L_088895D4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 12u);
      if (branch_taken) {
          goto L_088895F4;
      }
      goto L_088895DC;
    }
L_088895DC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 11u);
      if (branch_taken) {
          goto L_08889684;
      }
      goto L_088895E4;
    }
L_088895E4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08889654;
      }
      goto L_088895EC;
    }
L_088895EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088896AC;
      }
      goto L_088895F4;
    }
L_088895F4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889608;
      }
      goto L_08889604;
    }
L_08889604:
    ctx.gpr[4] = (0u | 1u);
    goto L_08889608;
L_08889608:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888961C;
      }
      goto L_08889618;
    }
L_08889618:
    ctx.gpr[21] = (0u | 1u);
    goto L_0888961C;
L_0888961C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088896AC;
      }
      goto L_08889624;
    }
L_08889624:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889638;
      }
      goto L_08889634;
    }
L_08889634:
    ctx.gpr[4] = (0u | 1u);
    goto L_08889638;
L_08889638:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888964C;
      }
      goto L_08889648;
    }
L_08889648:
    ctx.gpr[21] = (0u | 1u);
    goto L_0888964C;
L_0888964C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088896AC;
      }
      goto L_08889654;
    }
L_08889654:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889668;
      }
      goto L_08889664;
    }
L_08889664:
    ctx.gpr[4] = (0u | 1u);
    goto L_08889668;
L_08889668:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888967C;
      }
      goto L_08889678;
    }
L_08889678:
    ctx.gpr[21] = (0u | 1u);
    goto L_0888967C;
L_0888967C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088896AC;
      }
      goto L_08889684;
    }
L_08889684:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889698;
      }
      goto L_08889694;
    }
L_08889694:
    ctx.gpr[4] = (0u | 1u);
    goto L_08889698;
L_08889698:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088896AC;
      }
      goto L_088896A8;
    }
L_088896A8:
    ctx.gpr[21] = (0u | 1u);
    goto L_088896AC;
L_088896AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088896C4;
      }
      goto L_088896B4;
    }
L_088896B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088896D4;
      }
      goto L_088896C4;
    }
L_088896C4:
    if (ctx.gpr[21] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
        goto L_088896E4;
    }
    goto L_088896CC;
L_088896CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889700;
      }
      goto L_088896D4;
    }
L_088896D4:
    ctx.gpr[31] = (0x088896DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x088896DCu) goto L_088896DC;
    return;
L_088896DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A1F4;
      }
      goto L_088896E4;
    }
L_088896E4:
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888971C;
      }
      goto L_088896F0;
    }
L_088896F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888971C;
      }
      goto L_08889700;
    }
L_08889700:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08889724;
      }
      goto L_08889708;
    }
L_08889708:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08889768;
      }
      goto L_0888971C;
    }
L_0888971C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A1F4;
      }
      goto L_08889724;
    }
L_08889724:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0888973Cu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 472u, 0x0888E3F0u>(ctx, &aot_mem) && ctx.pc == 0x0888973Cu) goto L_0888973C;
    return;
L_0888973C:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(304));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08889764u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08889764u) goto L_08889764;
    return;
L_08889764:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08889768;
L_08889768:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889A2C;
      }
      goto L_08889774;
    }
L_08889774:
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[30];
    ctx.gpr[19] = (0u | 16u);
      if (branch_taken) {
          goto L_088897DC;
      }
      goto L_08889788;
    }
L_08889788:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    ctx.gpr[6] = (0u | 15u);
      if (branch_taken) {
          goto L_088897C4;
      }
      goto L_08889794;
    }
L_08889794:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 12u);
      if (branch_taken) {
          goto L_088897B8;
      }
      goto L_0888979C;
    }
L_0888979C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 11u);
      if (branch_taken) {
          goto L_088897D0;
      }
      goto L_088897A4;
    }
L_088897A4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08889910;
      }
      goto L_088897AC;
    }
L_088897AC:
    ctx.gpr[18] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889910;
      }
      goto L_088897B8;
    }
L_088897B8:
    ctx.gpr[18] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889910;
      }
      goto L_088897C4;
    }
L_088897C4:
    ctx.gpr[18] = (0u | 12u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889910;
      }
      goto L_088897D0;
    }
L_088897D0:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889910;
      }
      goto L_088897DC;
    }
L_088897DC:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    ctx.gpr[6] = (0u | 15u);
      if (branch_taken) {
          goto L_0888984C;
      }
      goto L_088897E8;
    }
L_088897E8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 12u);
      if (branch_taken) {
          goto L_08889808;
      }
      goto L_088897F0;
    }
L_088897F0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 11u);
      if (branch_taken) {
          goto L_088898D4;
      }
      goto L_088897F8;
    }
L_088897F8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08889890;
      }
      goto L_08889800;
    }
L_08889800:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889910;
      }
      goto L_08889808;
    }
L_08889808:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888983C;
      }
      goto L_08889814;
    }
L_08889814:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888983C;
      }
      goto L_08889824;
    }
L_08889824:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888983C;
      }
      goto L_08889834;
    }
L_08889834:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 11u);
      if (branch_taken) {
          goto L_08889844;
      }
      goto L_0888983C;
    }
L_0888983C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    goto L_08889844;
L_08889844:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889910;
      }
      goto L_0888984C;
    }
L_0888984C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889880;
      }
      goto L_08889858;
    }
L_08889858:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889880;
      }
      goto L_08889868;
    }
L_08889868:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889880;
      }
      goto L_08889878;
    }
L_08889878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 12u);
      if (branch_taken) {
          goto L_08889888;
      }
      goto L_08889880;
    }
L_08889880:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(516)));
    goto L_08889888;
L_08889888:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889910;
      }
      goto L_08889890;
    }
L_08889890:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088898C4;
      }
      goto L_0888989C;
    }
L_0888989C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088898C4;
      }
      goto L_088898AC;
    }
L_088898AC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088898C4;
      }
      goto L_088898BC;
    }
L_088898BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 15u);
      if (branch_taken) {
          goto L_088898CC;
      }
      goto L_088898C4;
    }
L_088898C4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    goto L_088898CC;
L_088898CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889910;
      }
      goto L_088898D4;
    }
L_088898D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889908;
      }
      goto L_088898E0;
    }
L_088898E0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889908;
      }
      goto L_088898F0;
    }
L_088898F0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889908;
      }
      goto L_08889900;
    }
L_08889900:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08889910;
      }
      goto L_08889908;
    }
L_08889908:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(512)));
    goto L_08889910;
L_08889910:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888999C;
      }
      goto L_08889918;
    }
L_08889918:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889994;
      }
      goto L_08889920;
    }
L_08889920:
    ctx.gpr[31] = (0x08889928u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08889928u) goto L_08889928;
    return;
L_08889928:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889940;
      }
      goto L_08889930;
    }
L_08889930:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889994;
      }
      goto L_08889940;
    }
L_08889940:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_0888997C;
      }
      goto L_0888994C;
    }
L_0888994C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_08889970;
      }
      goto L_08889954;
    }
L_08889954:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_08889988;
      }
      goto L_0888995C;
    }
L_0888995C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888999C;
      }
      goto L_08889964;
    }
L_08889964:
    ctx.gpr[18] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888999C;
      }
      goto L_08889970;
    }
L_08889970:
    ctx.gpr[18] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888999C;
      }
      goto L_0888997C;
    }
L_0888997C:
    ctx.gpr[18] = (0u | 12u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888999C;
      }
      goto L_08889988;
    }
L_08889988:
    ctx.gpr[18] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888999C;
      }
      goto L_08889994;
    }
L_08889994:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A1F4;
      }
      goto L_0888999C;
    }
L_0888999C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088899B4u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 472u, 0x0888E3F0u>(ctx, &aot_mem) && ctx.pc == 0x088899B4u) goto L_088899B4;
    return;
L_088899B4:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(304));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088899DCu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088899DCu) goto L_088899DC;
    return;
L_088899DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889A28;
      }
      goto L_088899E4;
    }
L_088899E4:
    ctx.gpr[31] = (0x088899ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088899ECu) goto L_088899EC;
    return;
L_088899EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889A04;
      }
      goto L_088899F4;
    }
L_088899F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889A20;
      }
      goto L_08889A04;
    }
L_08889A04:
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[22]));
    ctx.gpr[31] = (0x08889A14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 623u, 0x0889B6A0u>(ctx, &aot_mem) && ctx.pc == 0x08889A14u) goto L_08889A14;
    return;
L_08889A14:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08889A28;
      }
      goto L_08889A20;
    }
L_08889A20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A1F4;
      }
      goto L_08889A28;
    }
L_08889A28:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    goto L_08889A2C;
L_08889A2C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889B18;
      }
      goto L_08889A3C;
    }
L_08889A3C:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889B18;
      }
      goto L_08889A44;
    }
L_08889A44:
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 11u);
      if (branch_taken) {
          goto L_08889A58;
      }
      goto L_08889A50;
    }
L_08889A50:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08889B18;
      }
      goto L_08889A58;
    }
L_08889A58:
    ctx.gpr[31] = (0x08889A60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08889A60u) goto L_08889A60;
    return;
L_08889A60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889B18;
      }
      goto L_08889A68;
    }
L_08889A68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889B18;
      }
      goto L_08889A78;
    }
L_08889A78:
    ctx.gpr[31] = (0x08889A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08889A80u) goto L_08889A80;
    return;
L_08889A80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889AA4;
      }
      goto L_08889A90;
    }
L_08889A90:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889AAC;
      }
      goto L_08889A9C;
    }
L_08889A9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889B18;
      }
      goto L_08889AA4;
    }
L_08889AA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A1F4;
      }
      goto L_08889AAC;
    }
L_08889AAC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08889AC4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 472u, 0x0888E3F0u>(ctx, &aot_mem) && ctx.pc == 0x08889AC4u) goto L_08889AC4;
    return;
L_08889AC4:
    ctx.gpr[31] = (0x08889ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08889ACCu) goto L_08889ACC;
    return;
L_08889ACC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16056u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08889B18;
      }
      goto L_08889B10;
    }
L_08889B10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A1F4;
      }
      goto L_08889B18;
    }
L_08889B18:
    ctx.gpr[20] = (0u | 11u);
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[19] = (0u | 8u);
      if (branch_taken) {
          goto L_08889B48;
      }
      goto L_08889B28;
    }
L_08889B28:
    ctx.gpr[31] = (0x08889B30u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 829u, 0x0889FD68u>(ctx, &aot_mem) && ctx.pc == 0x08889B30u) goto L_08889B30;
    return;
L_08889B30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889B48;
      }
      goto L_08889B38;
    }
L_08889B38:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[31] = (0x08889B44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 623u, 0x0889B6A0u>(ctx, &aot_mem) && ctx.pc == 0x08889B44u) goto L_08889B44;
    return;
L_08889B44:
    ctx.gpr[21] = (0u | 1u);
    goto L_08889B48;
L_08889B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08889B74;
      }
      goto L_08889B54;
    }
L_08889B54:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), ctx.gpr[19]);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(860), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08889B6Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08889B6Cu) goto L_08889B6C;
    return;
L_08889B6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889B8C;
      }
      goto L_08889B74;
    }
L_08889B74:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(860), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08889B8Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08889B8Cu) goto L_08889B8C;
    return;
L_08889B8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1328), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1328));
    ctx.gpr[31] = (0x08889BACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08889BACu) goto L_08889BAC;
    return;
L_08889BAC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[4] = (0u | 60u);
      if (branch_taken) {
          goto L_08889BF0;
      }
      goto L_08889BBC;
    }
L_08889BBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889BE4;
      }
      goto L_08889BC8;
    }
L_08889BC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_08889BE4;
    }
    goto L_08889BD4;
L_08889BD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08889BE0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08889BE0u) goto L_08889BE0;
    return;
L_08889BE0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_08889BE4;
L_08889BE4:
    ctx.gpr[31] = (0x08889BECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x08889BECu) goto L_08889BEC;
    return;
L_08889BEC:
    ctx.gpr[4] = (0u | 60u);
    goto L_08889BF0;
L_08889BF0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889C2C;
      }
      goto L_08889C00;
    }
L_08889C00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889C2C;
      }
      goto L_08889C1C;
    }
L_08889C1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08889C2C;
L_08889C2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08889C38u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 768u, 0x08887CACu>(ctx, &aot_mem) && ctx.pc == 0x08889C38u) goto L_08889C38;
    return;
L_08889C38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08889C44u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08889C44u) goto L_08889C44;
    return;
L_08889C44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08889C5Cu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x08889C5Cu) goto L_08889C5C;
    return;
L_08889C5C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889C7C;
      }
      goto L_08889C68;
    }
L_08889C68:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08889C74u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 722u, 0x089B6DBCu>(ctx, &aot_mem) && ctx.pc == 0x08889C74u) goto L_08889C74;
    return;
L_08889C74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A178;
      }
      goto L_08889C7C;
    }
L_08889C7C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (48972u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08889D38;
      }
      goto L_08889CA0;
    }
L_08889CA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08889D38;
      }
      goto L_08889CAC;
    }
L_08889CAC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889CCC;
      }
      goto L_08889CBC;
    }
L_08889CBC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889CE4;
      }
      goto L_08889CCC;
    }
L_08889CCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08889CDCu);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08889CDCu) goto L_08889CDC;
    return;
L_08889CDC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08889D14;
      }
      goto L_08889CE4;
    }
L_08889CE4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08889D00;
      }
      goto L_08889CF0;
    }
L_08889CF0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889D14;
      }
      goto L_08889D00;
    }
L_08889D00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08889D10u);
    ctx.gpr[6] = (0u | 129u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08889D10u) goto L_08889D10;
    return;
L_08889D10:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    goto L_08889D14;
L_08889D14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28092));
    ctx.gpr[31] = (0x08889D28u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x08889D28u) goto L_08889D28;
    return;
L_08889D28:
    ctx.gpr[31] = (0x08889D30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 273u, 0x089A5340u>(ctx, &aot_mem) && ctx.pc == 0x08889D30u) goto L_08889D30;
    return;
L_08889D30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A178;
      }
      goto L_08889D38;
    }
L_08889D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08889E7C;
      }
      goto L_08889D44;
    }
L_08889D44:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889DC8;
      }
      goto L_08889D5C;
    }
L_08889D5C:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(992)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889D74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1012)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08889D84u);
    ctx.gpr[6] = (0u | 196u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08889D84u) goto L_08889D84;
    return;
L_08889D84:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889DC8;
      }
      goto L_08889D90;
    }
L_08889D90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1012)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08889DA0u);
    ctx.gpr[6] = (0u | 194u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08889DA0u) goto L_08889DA0;
    return;
L_08889DA0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889DC8;
      }
      goto L_08889DAC;
    }
L_08889DAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1012)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08889DBCu);
    ctx.gpr[6] = (0u | 195u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08889DBCu) goto L_08889DBC;
    return;
L_08889DBC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889DC8;
      }
      goto L_08889DC8;
    }
L_08889DC8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889E10;
      }
      goto L_08889DE0;
    }
L_08889DE0:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(1040)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889DF8:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889E10;
      }
      goto L_08889E04;
    }
L_08889E04:
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889E10;
      }
      goto L_08889E10;
    }
L_08889E10:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[6] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08889E54;
      }
      goto L_08889E20;
    }
L_08889E20:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08889E54;
      }
      goto L_08889E2C;
    }
L_08889E2C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(543), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (2185u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10576));
    ctx.gpr[31] = (0x08889E4Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x08889E4Cu) goto L_08889E4C;
    return;
L_08889E4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889E6C;
      }
      goto L_08889E54;
    }
L_08889E54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15416));
    ctx.gpr[31] = (0x08889E68u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x08889E68u) goto L_08889E68;
    return;
L_08889E68:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08889E6C;
L_08889E6C:
    ctx.gpr[31] = (0x08889E74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 273u, 0x089A5340u>(ctx, &aot_mem) && ctx.pc == 0x08889E74u) goto L_08889E74;
    return;
L_08889E74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A178;
      }
      goto L_08889E7C;
    }
L_08889E7C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[18] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_08889F30;
      }
      goto L_08889E8C;
    }
L_08889E8C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_08889EAC;
      }
      goto L_08889E94;
    }
L_08889E94:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A038;
      }
      goto L_08889E9C;
    }
L_08889E9C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08889FB4;
      }
      goto L_08889EA4;
    }
L_08889EA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A0BC;
      }
      goto L_08889EAC;
    }
L_08889EAC:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889ECC;
      }
      goto L_08889EB4;
    }
L_08889EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08889EC4u);
    ctx.gpr[6] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08889EC4u) goto L_08889EC4;
    return;
L_08889EC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08889F28;
      }
      goto L_08889ECC;
    }
L_08889ECC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889EF4;
      }
      goto L_08889EDC;
    }
L_08889EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08889EECu);
    ctx.gpr[6] = (0u | 182u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08889EECu) goto L_08889EEC;
    return;
L_08889EEC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08889F28;
      }
      goto L_08889EF4;
    }
L_08889EF4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889F14;
      }
      goto L_08889EFC;
    }
L_08889EFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08889F0Cu);
    ctx.gpr[6] = (0u | 83u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08889F0Cu) goto L_08889F0C;
    return;
L_08889F0C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08889F28;
      }
      goto L_08889F14;
    }
L_08889F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08889F24u);
    ctx.gpr[6] = (0u | 82u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08889F24u) goto L_08889F24;
    return;
L_08889F24:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    goto L_08889F28;
L_08889F28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A0BC;
      }
      goto L_08889F30;
    }
L_08889F30:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889F50;
      }
      goto L_08889F38;
    }
L_08889F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08889F48u);
    ctx.gpr[6] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08889F48u) goto L_08889F48;
    return;
L_08889F48:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08889FAC;
      }
      goto L_08889F50;
    }
L_08889F50:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889F78;
      }
      goto L_08889F60;
    }
L_08889F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08889F70u);
    ctx.gpr[6] = (0u | 173u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08889F70u) goto L_08889F70;
    return;
L_08889F70:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08889FAC;
      }
      goto L_08889F78;
    }
L_08889F78:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889F98;
      }
      goto L_08889F80;
    }
L_08889F80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08889F90u);
    ctx.gpr[6] = (0u | 83u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08889F90u) goto L_08889F90;
    return;
L_08889F90:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08889FAC;
      }
      goto L_08889F98;
    }
L_08889F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08889FA8u);
    ctx.gpr[6] = (0u | 82u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08889FA8u) goto L_08889FA8;
    return;
L_08889FA8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    goto L_08889FAC;
L_08889FAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A0BC;
      }
      goto L_08889FB4;
    }
L_08889FB4:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889FD4;
      }
      goto L_08889FBC;
    }
L_08889FBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08889FCCu);
    ctx.gpr[6] = (0u | 131u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08889FCCu) goto L_08889FCC;
    return;
L_08889FCC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888A030;
      }
      goto L_08889FD4;
    }
L_08889FD4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889FFC;
      }
      goto L_08889FE4;
    }
L_08889FE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08889FF4u);
    ctx.gpr[6] = (0u | 182u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08889FF4u) goto L_08889FF4;
    return;
L_08889FF4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888A030;
      }
      goto L_08889FFC;
    }
L_08889FFC:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A01C;
      }
      goto L_0888A004;
    }
L_0888A004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888A014u);
    ctx.gpr[6] = (0u | 123u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A014u) goto L_0888A014;
    return;
L_0888A014:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888A030;
      }
      goto L_0888A01C;
    }
L_0888A01C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888A02Cu);
    ctx.gpr[6] = (0u | 122u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A02Cu) goto L_0888A02C;
    return;
L_0888A02C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    goto L_0888A030;
L_0888A030:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A0BC;
      }
      goto L_0888A038;
    }
L_0888A038:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A058;
      }
      goto L_0888A040;
    }
L_0888A040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888A050u);
    ctx.gpr[6] = (0u | 131u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A050u) goto L_0888A050;
    return;
L_0888A050:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888A0B4;
      }
      goto L_0888A058;
    }
L_0888A058:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A080;
      }
      goto L_0888A068;
    }
L_0888A068:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0888A078u);
    ctx.gpr[6] = (0u | 177u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A078u) goto L_0888A078;
    return;
L_0888A078:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888A0B4;
      }
      goto L_0888A080;
    }
L_0888A080:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A0A0;
      }
      goto L_0888A088;
    }
L_0888A088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888A098u);
    ctx.gpr[6] = (0u | 123u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A098u) goto L_0888A098;
    return;
L_0888A098:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888A0B4;
      }
      goto L_0888A0A0;
    }
L_0888A0A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888A0B0u);
    ctx.gpr[6] = (0u | 122u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A0B0u) goto L_0888A0B0;
    return;
L_0888A0B0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    goto L_0888A0B4;
L_0888A0B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A0BC;
      }
      goto L_0888A0BC;
    }
L_0888A0BC:
    ctx.gpr[31] = (0x0888A0C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 273u, 0x089A5340u>(ctx, &aot_mem) && ctx.pc == 0x0888A0C4u) goto L_0888A0C4;
    return;
L_0888A0C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A140;
      }
      goto L_0888A0DC;
    }
L_0888A0DC:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[6] = (0u | 15u);
      if (branch_taken) {
          goto L_0888A11C;
      }
      goto L_0888A0EC;
    }
L_0888A0EC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 12u);
      if (branch_taken) {
          goto L_0888A110;
      }
      goto L_0888A0F4;
    }
L_0888A0F4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0888A128;
      }
      goto L_0888A0FC;
    }
L_0888A0FC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0888A134;
      }
      goto L_0888A104;
    }
L_0888A104:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A134;
      }
      goto L_0888A110;
    }
L_0888A110:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A134;
      }
      goto L_0888A11C;
    }
L_0888A11C:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A134;
      }
      goto L_0888A128;
    }
L_0888A128:
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A134;
      }
      goto L_0888A134;
    }
L_0888A134:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(543), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0888A140;
L_0888A140:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A164;
      }
      goto L_0888A148;
    }
L_0888A148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15416));
    ctx.gpr[31] = (0x0888A15Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x0888A15Cu) goto L_0888A15C;
    return;
L_0888A15C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A178;
      }
      goto L_0888A164;
    }
L_0888A164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (2185u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10576));
    ctx.gpr[31] = (0x0888A178u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x0888A178u) goto L_0888A178;
    return;
L_0888A178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A1AC;
      }
      goto L_0888A19C;
    }
L_0888A19C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_0888A1AC;
L_0888A1AC:
    ctx.gpr[31] = (0x0888A1B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 226u, 0x0899D8F0u>(ctx, &aot_mem) && ctx.pc == 0x0888A1B4u) goto L_0888A1B4;
    return;
L_0888A1B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888A1F4;
      }
      goto L_0888A1C0;
    }
L_0888A1C0:
    ctx.gpr[31] = (0x0888A1C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0888A1C8u) goto L_0888A1C8;
    return;
L_0888A1C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-497));
      if (branch_taken) {
          goto L_0888A1E4;
      }
      goto L_0888A1D0;
    }
L_0888A1D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] | 208u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888A1F4;
      }
      goto L_0888A1E4;
    }
L_0888A1E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_0888A1F4;
L_0888A1F4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A228:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0888A644;
      }
      goto L_0888A250;
    }
L_0888A250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (0u | 196u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888A334;
      }
      goto L_0888A268;
    }
L_0888A268:
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 206u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A2C4;
      }
      goto L_0888A288;
    }
L_0888A288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 207u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A2C4;
      }
      goto L_0888A29C;
    }
L_0888A29C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 202u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A2C4;
      }
      goto L_0888A2B0;
    }
L_0888A2B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 208u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A2D0;
      }
      goto L_0888A2C4;
    }
L_0888A2C4:
    ctx.gpr[4] = (16140u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0888A2D0;
L_0888A2D0:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888A320;
      }
      goto L_0888A2E0;
    }
L_0888A2E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A320;
      }
      goto L_0888A2EC;
    }
L_0888A2EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A320;
      }
      goto L_0888A300;
    }
L_0888A300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888A318u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 95u, 0x08A408F0u>(ctx, &aot_mem) && ctx.pc == 0x0888A318u) goto L_0888A318;
    return;
L_0888A318:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A32C;
      }
      goto L_0888A320;
    }
L_0888A320:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888A32Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 204u, 0x0888D084u>(ctx, &aot_mem) && ctx.pc == 0x0888A32Cu) goto L_0888A32C;
    return;
L_0888A32C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A644;
      }
      goto L_0888A334;
    }
L_0888A334:
    ctx.gpr[4] = (0u | 130u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 131u);
      if (branch_taken) {
          goto L_0888A348;
      }
      goto L_0888A340;
    }
L_0888A340:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888A3EC;
      }
      goto L_0888A348;
    }
L_0888A348:
    ctx.gpr[4] = (15759u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888A3D8;
      }
      goto L_0888A364;
    }
L_0888A364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A3D8;
      }
      goto L_0888A370;
    }
L_0888A370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A394;
      }
      goto L_0888A380;
    }
L_0888A380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A3D8;
      }
      goto L_0888A394;
    }
L_0888A394:
    ctx.gpr[4] = (0u | 130u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888A3BC;
      }
      goto L_0888A3A0;
    }
L_0888A3A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 45u);
    ctx.gpr[6] = (0u | 15u);
    ctx.gpr[31] = (0x0888A3B4u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 428u, 0x088226F8u>(ctx, &aot_mem) && ctx.pc == 0x0888A3B4u) goto L_0888A3B4;
    return;
L_0888A3B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A3E4;
      }
      goto L_0888A3BC;
    }
L_0888A3BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 45u);
    ctx.gpr[6] = (0u | 11u);
    ctx.gpr[31] = (0x0888A3D0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 428u, 0x088226F8u>(ctx, &aot_mem) && ctx.pc == 0x0888A3D0u) goto L_0888A3D0;
    return;
L_0888A3D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A3E4;
      }
      goto L_0888A3D8;
    }
L_0888A3D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888A3E4u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 204u, 0x0888D084u>(ctx, &aot_mem) && ctx.pc == 0x0888A3E4u) goto L_0888A3E4;
    return;
L_0888A3E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A644;
      }
      goto L_0888A3EC;
    }
L_0888A3EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(224));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(48))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0888A41Cu);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888A41Cu) goto L_0888A41C;
    return;
L_0888A41C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A4D4;
      }
      goto L_0888A428;
    }
L_0888A428:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (48972u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888A460;
      }
      goto L_0888A44C;
    }
L_0888A44C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888A458u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 204u, 0x0888D084u>(ctx, &aot_mem) && ctx.pc == 0x0888A458u) goto L_0888A458;
    return;
L_0888A458:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A4D4;
      }
      goto L_0888A460;
    }
L_0888A460:
    ctx.gpr[4] = (0u | 124u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 84u);
      if (branch_taken) {
          goto L_0888A48C;
      }
      goto L_0888A46C;
    }
L_0888A46C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (16025u << 16u);
      if (branch_taken) {
          goto L_0888A48C;
      }
      goto L_0888A474;
    }
L_0888A474:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888A4A0;
      }
      goto L_0888A48C;
    }
L_0888A48C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888A498u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 204u, 0x0888D084u>(ctx, &aot_mem) && ctx.pc == 0x0888A498u) goto L_0888A498;
    return;
L_0888A498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A4D4;
      }
      goto L_0888A4A0;
    }
L_0888A4A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 164u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A4C8;
      }
      goto L_0888A4B4;
    }
L_0888A4B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888A4C0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 204u, 0x0888D084u>(ctx, &aot_mem) && ctx.pc == 0x0888A4C0u) goto L_0888A4C0;
    return;
L_0888A4C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A4D4;
      }
      goto L_0888A4C8;
    }
L_0888A4C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888A4D4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 204u, 0x0888D084u>(ctx, &aot_mem) && ctx.pc == 0x0888A4D4u) goto L_0888A4D4;
    return;
L_0888A4D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A644;
      }
      goto L_0888A4E4;
    }
L_0888A4E4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A5BC;
      }
      goto L_0888A4FC;
    }
L_0888A4FC:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[5] = (15651u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55051u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888A5A8;
      }
      goto L_0888A594;
    }
L_0888A594:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A5BC;
      }
      goto L_0888A5A8;
    }
L_0888A5A8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A4FC;
      }
      goto L_0888A5BC;
    }
L_0888A5BC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A644;
      }
      goto L_0888A5C4;
    }
L_0888A5C4:
    ctx.gpr[31] = (0x0888A5CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0888A5CCu) goto L_0888A5CC;
    return;
L_0888A5CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A604;
      }
      goto L_0888A5D4;
    }
L_0888A5D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A604;
      }
      goto L_0888A5E4;
    }
L_0888A5E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A604;
      }
      goto L_0888A5F4;
    }
L_0888A5F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A644;
      }
      goto L_0888A604;
    }
L_0888A604:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888A644;
      }
      goto L_0888A620;
    }
L_0888A620:
    ctx.gpr[31] = (0x0888A628u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x0888A628u) goto L_0888A628;
    return;
L_0888A628:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A644;
      }
      goto L_0888A630;
    }
L_0888A630:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[6] = (0u | 25u);
    ctx.gpr[31] = (0x0888A644u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 106u, 0x089A07E8u>(ctx, &aot_mem) && ctx.pc == 0x0888A644u) goto L_0888A644;
    return;
L_0888A644:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A660:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[7] = (0u | 11u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0888A6BC;
      }
      goto L_0888A68C;
    }
L_0888A68C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A6B4;
      }
      goto L_0888A698;
    }
L_0888A698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
        goto L_0888A6B4;
    }
    goto L_0888A6A4;
L_0888A6A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x0888A6B0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0888A6B0u) goto L_0888A6B0;
    return;
L_0888A6B0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_0888A6B4;
L_0888A6B4:
    ctx.gpr[31] = (0x0888A6BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x0888A6BCu) goto L_0888A6BC;
    return;
L_0888A6BC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(744)));
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0888A6ECu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x0888A6ECu) goto L_0888A6EC;
    return;
L_0888A6EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0888A6F8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 768u, 0x08887CACu>(ctx, &aot_mem) && ctx.pc == 0x0888A6F8u) goto L_0888A6F8;
    return;
L_0888A6F8:
    ctx.gpr[31] = (0x0888A700u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 825u, 0x0889FD24u>(ctx, &aot_mem) && ctx.pc == 0x0888A700u) goto L_0888A700;
    return;
L_0888A700:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A7BC;
      }
      goto L_0888A708;
    }
L_0888A708:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888A754u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 113u, 0x08884860u>(ctx, &aot_mem) && ctx.pc == 0x0888A754u) goto L_0888A754;
    return;
L_0888A754:
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0888A784u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 722u, 0x089B6DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888A784u) goto L_0888A784;
    return;
L_0888A784:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1296), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1296));
    ctx.gpr[31] = (0x0888A7B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0888A7B0u) goto L_0888A7B0;
    return;
L_0888A7B0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1264), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AA14;
      }
      goto L_0888A7BC;
    }
L_0888A7BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A958;
      }
      goto L_0888A7CC;
    }
L_0888A7CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A944;
      }
      goto L_0888A7DC;
    }
L_0888A7DC:
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0888A7F0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 722u, 0x089B6DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888A7F0u) goto L_0888A7F0;
    return;
L_0888A7F0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0888A818u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x0888A818u) goto L_0888A818;
    return;
L_0888A818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16261u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A92C;
      }
      goto L_0888A91C;
    }
L_0888A91C:
    ctx.gpr[31] = (0x0888A924u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 623u, 0x0889B6A0u>(ctx, &aot_mem) && ctx.pc == 0x0888A924u) goto L_0888A924;
    return;
L_0888A924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A93C;
      }
      goto L_0888A92C;
    }
L_0888A92C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1332), ctx.gpr[16]);
    ctx.gpr[31] = (0x0888A938u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 623u, 0x0889B6A0u>(ctx, &aot_mem) && ctx.pc == 0x0888A938u) goto L_0888A938;
    return;
L_0888A938:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1332), 0u);
    goto L_0888A93C;
L_0888A93C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AA48;
      }
      goto L_0888A944;
    }
L_0888A944:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0888A958;
L_0888A958:
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0888A96Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 722u, 0x089B6DBCu>(ctx, &aot_mem) && ctx.pc == 0x0888A96Cu) goto L_0888A96C;
    return;
L_0888A96C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1296), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1296));
    ctx.gpr[31] = (0x0888A998u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0888A998u) goto L_0888A998;
    return;
L_0888A998:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1264), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16409u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x0888A9F4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A9F4u) goto L_0888A9F4;
    return;
L_0888A9F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AA14;
      }
      goto L_0888A9FC;
    }
L_0888A9FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (16261u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0888AA14;
L_0888AA14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0888AA38u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x0888AA38u) goto L_0888AA38;
    return;
L_0888AA38:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0888AA48;
L_0888AA48:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888AA64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-480));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0888ABF0;
      }
      goto L_0888AA8C;
    }
L_0888AA8C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0888AA98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-72));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 112u, 0x08884834u>(ctx, &aot_mem) && ctx.pc == 0x0888AA98u) goto L_0888AA98;
    return;
L_0888AA98:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[5] << 24u);
    ctx.gpr[31] = (0x0888AAB4u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 171u, 0x088A8A48u>(ctx, &aot_mem) && ctx.pc == 0x0888AAB4u) goto L_0888AAB4;
    return;
L_0888AAB4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888ABE8;
      }
      goto L_0888AAC0;
    }
L_0888AAC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888ABE8;
      }
      goto L_0888AAE8;
    }
L_0888AAE8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-44));
    ctx.gpr[31] = (0x0888AAF8u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 112u, 0x08884834u>(ctx, &aot_mem) && ctx.pc == 0x0888AAF8u) goto L_0888AAF8;
    return;
L_0888AAF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888ABE8;
      }
      goto L_0888AB08;
    }
L_0888AB08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 50u);
      if (branch_taken) {
          goto L_0888AB4C;
      }
      goto L_0888AB18;
    }
L_0888AB18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AB40;
      }
      goto L_0888AB24;
    }
L_0888AB24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_0888AB40;
    }
    goto L_0888AB30;
L_0888AB30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x0888AB3Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0888AB3Cu) goto L_0888AB3C;
    return;
L_0888AB3C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_0888AB40;
L_0888AB40:
    ctx.gpr[31] = (0x0888AB48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x0888AB48u) goto L_0888AB48;
    return;
L_0888AB48:
    ctx.gpr[4] = (0u | 50u);
    goto L_0888AB4C;
L_0888AB4C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] << 9u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888AB8Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 728u, 0x08887A8Cu>(ctx, &aot_mem) && ctx.pc == 0x0888AB8Cu) goto L_0888AB8C;
    return;
L_0888AB8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x0888AB98u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 195u, 0x088A1328u>(ctx, &aot_mem) && ctx.pc == 0x0888AB98u) goto L_0888AB98;
    return;
L_0888AB98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(420), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] << 9u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x0888ABE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 373u, 0x088EE65Cu>(ctx, &aot_mem) && ctx.pc == 0x0888ABE8u) goto L_0888ABE8;
    return;
L_0888ABE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B3F8;
      }
      goto L_0888ABF0;
    }
L_0888ABF0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15504));
    ctx.gpr[31] = (0x0888AC04u);
    ctx.gpr[6] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x0888AC04u) goto L_0888AC04;
    return;
L_0888AC04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B3F8;
      }
      goto L_0888AC10;
    }
L_0888AC10:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[31] = (0x0888AC20u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(429))))));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 652u, 0x088A7E10u>(ctx, &aot_mem) && ctx.pc == 0x0888AC20u) goto L_0888AC20;
    return;
L_0888AC20:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 68u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 65u);
      if (branch_taken) {
          goto L_0888B0B4;
      }
      goto L_0888AC38;
    }
L_0888AC38:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 66u);
      if (branch_taken) {
          goto L_0888B0B4;
      }
      goto L_0888AC40;
    }
L_0888AC40:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 193u);
      if (branch_taken) {
          goto L_0888B0B4;
      }
      goto L_0888AC48;
    }
L_0888AC48:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 120u);
      if (branch_taken) {
          goto L_0888B0B4;
      }
      goto L_0888AC50;
    }
L_0888AC50:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B0B4;
      }
      goto L_0888AC58;
    }
L_0888AC58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0888AC84;
      }
      goto L_0888AC70;
    }
L_0888AC70:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0888AC84;
L_0888AC84:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x0888AC90u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(464));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 489u, 0x08A05EE4u>(ctx, &aot_mem) && ctx.pc == 0x0888AC90u) goto L_0888AC90;
    return;
L_0888AC90:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
        goto L_0888ACBC;
    }
    goto L_0888ACB4;
L_0888ACB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0888ACBC;
      }
      goto L_0888ACBC;
    }
L_0888ACBC:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x0888ACD4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 404u, 0x0899E458u>(ctx, &aot_mem) && ctx.pc == 0x0888ACD4u) goto L_0888ACD4;
    return;
L_0888ACD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0888AD44u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 517u, 0x08A06634u>(ctx, &aot_mem) && ctx.pc == 0x0888AD44u) goto L_0888AD44;
    return;
L_0888AD44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888AD58u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x0888AD58u) goto L_0888AD58;
    return;
L_0888AD58:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B050;
      }
      goto L_0888AD60;
    }
L_0888AD60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0888AED8;
      }
      goto L_0888AD6C;
    }
L_0888AD6C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AED8;
      }
      goto L_0888AD7C;
    }
L_0888AD7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_0888ADA8;
    }
    goto L_0888AD88;
L_0888AD88:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x0888AD98u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0888AD98u) goto L_0888AD98;
    return;
L_0888AD98:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_0888ADA8;
L_0888ADA8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888AEC8;
      }
      goto L_0888ADCC;
    }
L_0888ADCC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(432), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888AE1C;
      }
      goto L_0888ADEC;
    }
L_0888ADEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0888AE14u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x0888AE14u) goto L_0888AE14;
    return;
L_0888AE14:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888AE48;
      }
      goto L_0888AE1C;
    }
L_0888AE1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(580)));
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (17096u << 16u);
    ctx.gpr[31] = (0x0888AE44u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x0888AE44u) goto L_0888AE44;
    return;
L_0888AE44:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    goto L_0888AE48;
L_0888AE48:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0888AE60u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 112u, 0x08884834u>(ctx, &aot_mem) && ctx.pc == 0x0888AE60u) goto L_0888AE60;
    return;
L_0888AE60:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 193u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888AEAC;
      }
      goto L_0888AE80;
    }
L_0888AE80:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888AEACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x0888AEACu) goto L_0888AEAC;
    return;
L_0888AEAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (2184u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24424));
    ctx.gpr[31] = (0x0888AEC0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x0888AEC0u) goto L_0888AEC0;
    return;
L_0888AEC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AED8;
      }
      goto L_0888AEC8;
    }
L_0888AEC8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888AD7C;
      }
      goto L_0888AED8;
    }
L_0888AED8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x0888AEE8u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(422)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 112u, 0x08884834u>(ctx, &aot_mem) && ctx.pc == 0x0888AEE8u) goto L_0888AEE8;
    return;
L_0888AEE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(422)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888AF6C;
      }
      goto L_0888AEF8;
    }
L_0888AEF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(422)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(422), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(422)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 111 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888AF24;
      }
      goto L_0888AF14;
    }
L_0888AF14:
    ctx.gpr[31] = (0x0888AF1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 196u, 0x08885050u>(ctx, &aot_mem) && ctx.pc == 0x0888AF1Cu) goto L_0888AF1C;
    return;
L_0888AF1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B064;
      }
      goto L_0888AF24;
    }
L_0888AF24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_0888AF50;
    }
    goto L_0888AF30;
L_0888AF30:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[31] = (0x0888AF40u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0888AF40u) goto L_0888AF40;
    return;
L_0888AF40:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_0888AF50;
L_0888AF50:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(181)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B064;
      }
      goto L_0888AF60;
    }
L_0888AF60:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(422), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888B064;
      }
      goto L_0888AF6C;
    }
L_0888AF6C:
    ctx.gpr[18] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(76));
      if (branch_taken) {
          goto L_0888AF98;
      }
      goto L_0888AF7C;
    }
L_0888AF7C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(417));
    ctx.gpr[31] = (0x0888AF8Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0888AF8Cu) goto L_0888AF8C;
    return;
L_0888AF8C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(417)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0888AF98;
L_0888AF98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(181)));
    ctx.gpr[31] = (0x0888AFA8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 112u, 0x08884834u>(ctx, &aot_mem) && ctx.pc == 0x0888AFA8u) goto L_0888AFA8;
    return;
L_0888AFA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_0888AFD4;
    }
    goto L_0888AFB4;
L_0888AFB4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(418));
    ctx.gpr[31] = (0x0888AFC4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0888AFC4u) goto L_0888AFC4;
    return;
L_0888AFC4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(418)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_0888AFD4;
L_0888AFD4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    ctx.gpr[18] = (ctx.gpr[5] ^ 55u);
    ctx.gpr[18] = (ctx.gpr[18] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_0888B008;
    }
    goto L_0888AFE8;
L_0888AFE8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(419));
    ctx.gpr[31] = (0x0888AFF8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0888AFF8u) goto L_0888AFF8;
    return;
L_0888AFF8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(419)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_0888B008;
L_0888B008:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(181)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B020;
      }
      goto L_0888B018;
    }
L_0888B018:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B048;
      }
      goto L_0888B020;
    }
L_0888B020:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(422)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B040;
      }
      goto L_0888B030;
    }
L_0888B030:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(422)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(422), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888B048;
      }
      goto L_0888B040;
    }
L_0888B040:
    ctx.gpr[31] = (0x0888B048u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 196u, 0x08885050u>(ctx, &aot_mem) && ctx.pc == 0x0888B048u) goto L_0888B048;
    return;
L_0888B048:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B064;
      }
      goto L_0888B050;
    }
L_0888B050:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0888B05Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 112u, 0x08884834u>(ctx, &aot_mem) && ctx.pc == 0x0888B05Cu) goto L_0888B05C;
    return;
L_0888B05C:
    ctx.gpr[31] = (0x0888B064u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 196u, 0x08885050u>(ctx, &aot_mem) && ctx.pc == 0x0888B064u) goto L_0888B064;
    return;
L_0888B064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
        goto L_0888B08C;
    }
    goto L_0888B074;
L_0888B074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
        goto L_0888B08C;
    }
    goto L_0888B080;
L_0888B080:
    ctx.gpr[31] = (0x0888B088u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x0888B088u) goto L_0888B088;
    return;
L_0888B088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    goto L_0888B08C;
L_0888B08C:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B0AC;
      }
      goto L_0888B098;
    }
L_0888B098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B0AC;
      }
      goto L_0888B0A4;
    }
L_0888B0A4:
    ctx.gpr[31] = (0x0888B0ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x0888B0ACu) goto L_0888B0AC;
    return;
L_0888B0AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B3F8;
      }
      goto L_0888B0B4;
    }
L_0888B0B4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(429))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] << 24u);
    ctx.gpr[31] = (0x0888B0D4u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 171u, 0x088A8A48u>(ctx, &aot_mem) && ctx.pc == 0x0888B0D4u) goto L_0888B0D4;
    return;
L_0888B0D4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B1D8;
      }
      goto L_0888B0E0;
    }
L_0888B0E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
        goto L_0888B10C;
    }
    goto L_0888B0EC;
L_0888B0EC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(420));
    ctx.gpr[31] = (0x0888B0FCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0888B0FCu) goto L_0888B0FC;
    return;
L_0888B0FC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_0888B10C;
L_0888B10C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888B1D8;
      }
      goto L_0888B128;
    }
L_0888B128:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0888B134u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 112u, 0x08884834u>(ctx, &aot_mem) && ctx.pc == 0x0888B134u) goto L_0888B134;
    return;
L_0888B134:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888B14Cu);
    ctx.gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 156u, 0x089B0884u>(ctx, &aot_mem) && ctx.pc == 0x0888B14Cu) goto L_0888B14C;
    return;
L_0888B14C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[31] = (0x0888B15Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 132u, 0x088A8720u>(ctx, &aot_mem) && ctx.pc == 0x0888B15Cu) goto L_0888B15C;
    return;
L_0888B15C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 55u);
      if (branch_taken) {
          goto L_0888B1A0;
      }
      goto L_0888B16C;
    }
L_0888B16C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B194;
      }
      goto L_0888B178;
    }
L_0888B178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_0888B194;
    }
    goto L_0888B184;
L_0888B184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x0888B190u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0888B190u) goto L_0888B190;
    return;
L_0888B190:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_0888B194;
L_0888B194:
    ctx.gpr[31] = (0x0888B19Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x0888B19Cu) goto L_0888B19C;
    return;
L_0888B19C:
    ctx.gpr[4] = (0u | 55u);
    goto L_0888B1A0;
L_0888B1A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[31] = (0x0888B1D0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 423u, 0x089D6EDCu>(ctx, &aot_mem) && ctx.pc == 0x0888B1D0u) goto L_0888B1D0;
    return;
L_0888B1D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B3F8;
      }
      goto L_0888B1D8;
    }
L_0888B1D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 193u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B310;
      }
      goto L_0888B1EC;
    }
L_0888B1EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 120u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B310;
      }
      goto L_0888B200;
    }
L_0888B200:
    ctx.gpr[18] = (0u | 0u);
    goto L_0888B204;
L_0888B204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_0888B230;
    }
    goto L_0888B210;
L_0888B210:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(421));
    ctx.gpr[31] = (0x0888B220u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0888B220u) goto L_0888B220;
    return;
L_0888B220:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(421)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_0888B230;
L_0888B230:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(214)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B308;
      }
      goto L_0888B240;
    }
L_0888B240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_0888B26C;
    }
    goto L_0888B24C;
L_0888B24C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(422));
    ctx.gpr[31] = (0x0888B25Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0888B25Cu) goto L_0888B25C;
    return;
L_0888B25C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(422)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_0888B26C;
L_0888B26C:
    ctx.gpr[5] = (ctx.gpr[18] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(432)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B300;
      }
      goto L_0888B2A4;
    }
L_0888B2A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_0888B2D0;
    }
    goto L_0888B2B0;
L_0888B2B0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(423));
    ctx.gpr[31] = (0x0888B2C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0888B2C0u) goto L_0888B2C0;
    return;
L_0888B2C0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(423)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_0888B2D0;
L_0888B2D0:
    ctx.gpr[5] = (ctx.gpr[18] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0888B2F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x0888B2F0u) goto L_0888B2F0;
    return;
L_0888B2F0:
    ctx.gpr[31] = (0x0888B2F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 306u, 0x08885A14u>(ctx, &aot_mem) && ctx.pc == 0x0888B2F8u) goto L_0888B2F8;
    return;
L_0888B2F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B3F8;
      }
      goto L_0888B300;
    }
L_0888B300:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888B204;
      }
      goto L_0888B308;
    }
L_0888B308:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B3F8;
      }
      goto L_0888B310;
    }
L_0888B310:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(756)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0888B374;
      }
      goto L_0888B358;
    }
L_0888B358:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888B374;
      }
      goto L_0888B36C;
    }
L_0888B36C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0888B380;
      }
      goto L_0888B374;
    }
L_0888B374:
    ctx.gpr[31] = (0x0888B37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x0888B37Cu) goto L_0888B37C;
    return;
L_0888B37C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0888B380;
L_0888B380:
    ctx.gpr[31] = (0x0888B388u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 498u, 0x08A060BCu>(ctx, &aot_mem) && ctx.pc == 0x0888B388u) goto L_0888B388;
    return;
L_0888B388:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0888B3A0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 113u, 0x08884860u>(ctx, &aot_mem) && ctx.pc == 0x0888B3A0u) goto L_0888B3A0;
    return;
L_0888B3A0:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B3F8;
      }
      goto L_0888B3E4;
    }
L_0888B3E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B3F8;
      }
      goto L_0888B3F0;
    }
L_0888B3F0:
    ctx.gpr[31] = (0x0888B3F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x0888B3F8u) goto L_0888B3F8;
    return;
L_0888B3F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B414:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[20] = (0u | 57u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[20];
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0888B734;
      }
      goto L_0888B45C;
    }
L_0888B45C:
    ctx.gpr[31] = (0x0888B464u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 273u, 0x089A5340u>(ctx, &aot_mem) && ctx.pc == 0x0888B464u) goto L_0888B464;
    return;
L_0888B464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888B4A8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x0888B4A8u) goto L_0888B4A8;
    return;
L_0888B4A8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1328), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1328));
    ctx.gpr[31] = (0x0888B4B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0888B4B8u) goto L_0888B4B8;
    return;
L_0888B4B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[21] = (0u | 5u);
    ctx.gpr[22] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[23] = (0u | 11u);
      if (branch_taken) {
          goto L_0888B510;
      }
      goto L_0888B4CC;
    }
L_0888B4CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1332), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 19u);
      if (branch_taken) {
          goto L_0888B4F8;
      }
      goto L_0888B4E4;
    }
L_0888B4E4:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888B504;
      }
      goto L_0888B4EC;
    }
L_0888B4EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B504;
      }
      goto L_0888B4F8;
    }
L_0888B4F8:
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888B514;
      }
      goto L_0888B504;
    }
L_0888B504:
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888B514;
      }
      goto L_0888B510;
    }
L_0888B510:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[18]));
    goto L_0888B514;
L_0888B514:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0888B560;
      }
      goto L_0888B520;
    }
L_0888B520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-497));
      if (branch_taken) {
          goto L_0888B550;
      }
      goto L_0888B52C;
    }
L_0888B52C:
    ctx.gpr[31] = (0x0888B534u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0888B534u) goto L_0888B534;
    return;
L_0888B534:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B550;
      }
      goto L_0888B53C;
    }
L_0888B53C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] | 208u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888B560;
      }
      goto L_0888B550;
    }
L_0888B550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_0888B560;
L_0888B560:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888B56Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 768u, 0x08887CACu>(ctx, &aot_mem) && ctx.pc == 0x0888B56Cu) goto L_0888B56C;
    return;
L_0888B56C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888B578u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x0888B578u) goto L_0888B578;
    return;
L_0888B578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0888B598;
      }
      goto L_0888B584;
    }
L_0888B584:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888B590u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 204u, 0x0888D084u>(ctx, &aot_mem) && ctx.pc == 0x0888B590u) goto L_0888B590;
    return;
L_0888B590:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B5A4;
      }
      goto L_0888B598;
    }
L_0888B598:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888B5A4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 204u, 0x0888D084u>(ctx, &aot_mem) && ctx.pc == 0x0888B5A4u) goto L_0888B5A4;
    return;
L_0888B5A4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    if (ctx.gpr[4] != ctx.gpr[23]) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[20]);
        goto L_0888B5E8;
    }
    goto L_0888B5B4;
L_0888B5B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B5DC;
      }
      goto L_0888B5C0;
    }
L_0888B5C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_0888B5DC;
    }
    goto L_0888B5CC;
L_0888B5CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x0888B5D8u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0888B5D8u) goto L_0888B5D8;
    return;
L_0888B5D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_0888B5DC;
L_0888B5DC:
    ctx.gpr[31] = (0x0888B5E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x0888B5E4u) goto L_0888B5E4;
    return;
L_0888B5E4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[20]);
    goto L_0888B5E8;
L_0888B5E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 12u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0888B63Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x0888B63Cu) goto L_0888B63C;
    return;
L_0888B63C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x0888B650u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x0888B650u) goto L_0888B650;
    return;
L_0888B650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B668;
      }
      goto L_0888B65C;
    }
L_0888B65C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888B668u);
    ctx.gpr[5] = (0u | 123u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x0888B668u) goto L_0888B668;
    return;
L_0888B668:
    ctx.gpr[31] = (0x0888B670u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 226u, 0x0899D8F0u>(ctx, &aot_mem) && ctx.pc == 0x0888B670u) goto L_0888B670;
    return;
L_0888B670:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0888B6D8;
      }
      goto L_0888B680;
    }
L_0888B680:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0888B6A8;
      }
      goto L_0888B68C;
    }
L_0888B68C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_0888B6A8;
      }
      goto L_0888B698;
    }
L_0888B698:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[6] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0888B6B0;
      }
      goto L_0888B6A8;
    }
L_0888B6A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_0888B728;
      }
      goto L_0888B6B0;
    }
L_0888B6B0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[6] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0888B6D0;
      }
      goto L_0888B6C0;
    }
L_0888B6C0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[6] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0888B728;
      }
      goto L_0888B6D0;
    }
L_0888B6D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_0888B728;
      }
      goto L_0888B6D8;
    }
L_0888B6D8:
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B718;
      }
      goto L_0888B6E8;
    }
L_0888B6E8:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[22];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_0888B70C;
      }
      goto L_0888B6F0;
    }
L_0888B6F0:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B724;
      }
      goto L_0888B6F8;
    }
L_0888B6F8:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_0888B728;
      }
      goto L_0888B700;
    }
L_0888B700:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B728;
      }
      goto L_0888B70C;
    }
L_0888B70C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B728;
      }
      goto L_0888B718;
    }
L_0888B718:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B728;
      }
      goto L_0888B724;
    }
L_0888B724:
    ctx.gpr[4] = (0u | 8u);
    goto L_0888B728;
L_0888B728:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(543), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0888B734;
L_0888B734:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B764:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0888B8D0;
      }
      goto L_0888B77C;
    }
L_0888B77C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B7C8;
      }
      goto L_0888B790;
    }
L_0888B790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B7C8;
      }
      goto L_0888B7A4;
    }
L_0888B7A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (16307u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888B7F0;
      }
      goto L_0888B7C8;
    }
L_0888B7C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 193u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B804;
      }
      goto L_0888B7DC;
    }
L_0888B7DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888B7E8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 204u, 0x0888D084u>(ctx, &aot_mem) && ctx.pc == 0x0888B7E8u) goto L_0888B7E8;
    return;
L_0888B7E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B868;
      }
      goto L_0888B7F0;
    }
L_0888B7F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[31] = (0x0888B7FCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 131u, 0x089B86C0u>(ctx, &aot_mem) && ctx.pc == 0x0888B7FCu) goto L_0888B7FC;
    return;
L_0888B7FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BA98;
      }
      goto L_0888B804;
    }
L_0888B804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (16307u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888B83C;
      }
      goto L_0888B828;
    }
L_0888B828:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888B834u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 204u, 0x0888D084u>(ctx, &aot_mem) && ctx.pc == 0x0888B834u) goto L_0888B834;
    return;
L_0888B834:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B868;
      }
      goto L_0888B83C;
    }
L_0888B83C:
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888B868u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 204u, 0x0888D084u>(ctx, &aot_mem) && ctx.pc == 0x0888B868u) goto L_0888B868;
    return;
L_0888B868:
    ctx.gpr[31] = (0x0888B870u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 129u, 0x088849E8u>(ctx, &aot_mem) && ctx.pc == 0x0888B870u) goto L_0888B870;
    return;
L_0888B870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 38u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B8C8;
      }
      goto L_0888B880;
    }
L_0888B880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B8C8;
      }
      goto L_0888B88C;
    }
L_0888B88C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(224));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(15536)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0888B8C8u);
    ctx.gpr[6] = (0u | 169u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888B8C8u) goto L_0888B8C8;
    return;
L_0888B8C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BA98;
      }
      goto L_0888B8D0;
    }
L_0888B8D0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2048), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[6] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0888B8ECu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x0888B8ECu) goto L_0888B8EC;
    return;
L_0888B8EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B928;
      }
      goto L_0888B8F8;
    }
L_0888B8F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B928;
      }
      goto L_0888B90C;
    }
L_0888B90C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1012)));
    ctx.gpr[31] = (0x0888B920u);
    ctx.gpr[6] = (0u | 193u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B920u) goto L_0888B920;
    return;
L_0888B920:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888BA44;
      }
      goto L_0888B928;
    }
L_0888B928:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888B948;
      }
      goto L_0888B938;
    }
L_0888B938:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[6] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0888B9C0;
      }
      goto L_0888B948;
    }
L_0888B948:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B97C;
      }
      goto L_0888B958;
    }
L_0888B958:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888B97C;
      }
      goto L_0888B964;
    }
L_0888B964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888B974u);
    ctx.gpr[6] = (0u | 68u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B974u) goto L_0888B974;
    return;
L_0888B974:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888BA44;
      }
      goto L_0888B97C;
    }
L_0888B97C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B9A8;
      }
      goto L_0888B990;
    }
L_0888B990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888B9A0u);
    ctx.gpr[6] = (0u | 66u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B9A0u) goto L_0888B9A0;
    return;
L_0888B9A0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888BA44;
      }
      goto L_0888B9A8;
    }
L_0888B9A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888B9B8u);
    ctx.gpr[6] = (0u | 65u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B9B8u) goto L_0888B9B8;
    return;
L_0888B9B8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888BA44;
      }
      goto L_0888B9C0;
    }
L_0888B9C0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B9E0;
      }
      goto L_0888B9D0;
    }
L_0888B9D0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888BA44;
      }
      goto L_0888B9E0;
    }
L_0888B9E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BA0C;
      }
      goto L_0888B9F4;
    }
L_0888B9F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888BA04u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x0888BA04u) goto L_0888BA04;
    return;
L_0888BA04:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888BA44;
      }
      goto L_0888BA0C;
    }
L_0888BA0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888BA1Cu);
    ctx.gpr[6] = (0u | 63u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x0888BA1Cu) goto L_0888BA1C;
    return;
L_0888BA1C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BA44;
      }
      goto L_0888BA34;
    }
L_0888BA34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_0888BA44;
L_0888BA44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (2204u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31040));
    ctx.gpr[31] = (0x0888BA58u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x0888BA58u) goto L_0888BA58;
    return;
L_0888BA58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BA8C;
      }
      goto L_0888BA64;
    }
L_0888BA64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888BA8C;
      }
      goto L_0888BA78;
    }
L_0888BA78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888BA84u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 204u, 0x0888D084u>(ctx, &aot_mem) && ctx.pc == 0x0888BA84u) goto L_0888BA84;
    return;
L_0888BA84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BA98;
      }
      goto L_0888BA8C;
    }
L_0888BA8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888BA98u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 204u, 0x0888D084u>(ctx, &aot_mem) && ctx.pc == 0x0888BA98u) goto L_0888BA98;
    return;
L_0888BA98:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888BAA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0888BAD4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 483u, 0x0897B084u>(ctx, &aot_mem) && ctx.pc == 0x0888BAD4u) goto L_0888BAD4;
    return;
L_0888BAD4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BAF4;
      }
      goto L_0888BADC;
    }
L_0888BADC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[19] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
      if (branch_taken) {
          goto L_0888BB0C;
      }
      goto L_0888BAEC;
    }
L_0888BAEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BB80;
      }
      goto L_0888BAF4;
    }
L_0888BAF4:
    ctx.gpr[31] = (0x0888BAFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x0888BAFCu) goto L_0888BAFC;
    return;
L_0888BAFC:
    ctx.gpr[31] = (0x0888BB04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x0888BB04u) goto L_0888BB04;
    return;
L_0888BB04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD80;
      }
      goto L_0888BB0C;
    }
L_0888BB0C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BB74;
      }
      goto L_0888BB1C;
    }
L_0888BB1C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(1088)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888BB34:
    ctx.gpr[20] = (0u | 2u);
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BC10;
      }
      goto L_0888BB44;
    }
L_0888BB44:
    ctx.gpr[20] = (0u | 4u);
    ctx.gpr[18] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BC10;
      }
      goto L_0888BB54;
    }
L_0888BB54:
    ctx.gpr[20] = (0u | 3u);
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BC10;
      }
      goto L_0888BB64;
    }
L_0888BB64:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[18] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BC10;
      }
      goto L_0888BB74;
    }
L_0888BB74:
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BC10;
      }
      goto L_0888BB80;
    }
L_0888BB80:
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_0888BBD8;
      }
      goto L_0888BB8C;
    }
L_0888BB8C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_0888BBB4;
      }
      goto L_0888BB94;
    }
L_0888BB94:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_0888BBFC;
      }
      goto L_0888BB9C;
    }
L_0888BB9C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888BC0C;
      }
      goto L_0888BBA4;
    }
L_0888BBA4:
    ctx.gpr[20] = (0u | 3u);
    ctx.gpr[18] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BC10;
      }
      goto L_0888BBB4;
    }
L_0888BBB4:
    ctx.gpr[20] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0888BBCC;
      }
      goto L_0888BBC4;
    }
L_0888BBC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0888BBD0;
      }
      goto L_0888BBCC;
    }
L_0888BBCC:
    ctx.gpr[18] = (0u | 3u);
    goto L_0888BBD0;
L_0888BBD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BC10;
      }
      goto L_0888BBD8;
    }
L_0888BBD8:
    ctx.gpr[20] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0888BBF0;
      }
      goto L_0888BBE8;
    }
L_0888BBE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 2u);
      if (branch_taken) {
          goto L_0888BBF4;
      }
      goto L_0888BBF0;
    }
L_0888BBF0:
    ctx.gpr[18] = (0u | 3u);
    goto L_0888BBF4;
L_0888BBF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BC10;
      }
      goto L_0888BBFC;
    }
L_0888BBFC:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[18] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BC10;
      }
      goto L_0888BC0C;
    }
L_0888BC0C:
    ctx.gpr[18] = (0u | 0u);
    goto L_0888BC10;
L_0888BC10:
    ctx.gpr[31] = (0x0888BC18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x0888BC18u) goto L_0888BC18;
    return;
L_0888BC18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BC20;
    }
L_0888BC20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BC38;
    }
L_0888BC38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(542)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BC48;
    }
L_0888BC48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(543)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BC58;
    }
L_0888BC58:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BC68;
    }
L_0888BC68:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
        goto L_0888BCBC;
    }
    goto L_0888BC70;
L_0888BC70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(232));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0888BC8Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888BC8Cu) goto L_0888BC8C;
    return;
L_0888BC8C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
        goto L_0888BCBC;
    }
    goto L_0888BC94;
L_0888BC94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0888BCB0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888BCB0u) goto L_0888BCB0;
    return;
L_0888BCB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BCB8;
    }
L_0888BCB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    goto L_0888BCBC;
L_0888BCBC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BCC4;
    }
L_0888BCC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
      if (branch_taken) {
          goto L_0888BD58;
      }
      goto L_0888BCD0;
    }
L_0888BCD0:
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_0888BCFC;
      }
      goto L_0888BCDC;
    }
L_0888BCDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (0u | 16u);
        goto L_0888BCFC;
    }
    goto L_0888BCE8;
L_0888BCE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[5] & 1024u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD48;
      }
      goto L_0888BCF8;
    }
L_0888BCF8:
    ctx.gpr[5] = (0u | 16u);
    goto L_0888BCFC;
L_0888BCFC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_0888BD24;
      }
      goto L_0888BD04;
    }
L_0888BD04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(512)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (0u | 12u);
        goto L_0888BD24;
    }
    goto L_0888BD10;
L_0888BD10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[5] & 1024u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD48;
      }
      goto L_0888BD20;
    }
L_0888BD20:
    ctx.gpr[5] = (0u | 12u);
    goto L_0888BD24;
L_0888BD24:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0888BD5C;
      }
      goto L_0888BD2C;
    }
L_0888BD2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0888BD5C;
      }
      goto L_0888BD38;
    }
L_0888BD38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[5] & 1024u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0888BD5C;
      }
      goto L_0888BD48;
    }
L_0888BD48:
    ctx.gpr[31] = (0x0888BD50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 621u, 0x0888F0A4u>(ctx, &aot_mem) && ctx.pc == 0x0888BD50u) goto L_0888BD50;
    return;
L_0888BD50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD80;
      }
      goto L_0888BD58;
    }
L_0888BD58:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_0888BD5C;
L_0888BD5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0888BD6Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_0888BDA0;
L_0888BD6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD80;
      }
      goto L_0888BD74;
    }
L_0888BD74:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888BD80u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x0888BD80u) goto L_0888BD80;
    return;
L_0888BD80:
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
L_0888BDA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[22] = (0u | 11u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(542)));
    ctx.gpr[7] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(542), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[8] = (65535u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(32767));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[8] = (0u | 24u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0888BE34;
      }
      goto L_0888BE1C;
    }
L_0888BE1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888BE34;
      }
      goto L_0888BE2C;
    }
L_0888BE2C:
    ctx.gpr[31] = (0x0888BE34u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 727u, 0x0899FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0888BE34u) goto L_0888BE34;
    return;
L_0888BE34:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1328), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1328));
    ctx.gpr[31] = (0x0888BE44u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0888BE44u) goto L_0888BE44;
    return;
L_0888BE44:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    ctx.gpr[4] = (0u | 58u);
      if (branch_taken) {
          goto L_0888BE88;
      }
      goto L_0888BE54;
    }
L_0888BE54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BE7C;
      }
      goto L_0888BE60;
    }
L_0888BE60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
        goto L_0888BE7C;
    }
    goto L_0888BE6C;
L_0888BE6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x0888BE78u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0888BE78u) goto L_0888BE78;
    return;
L_0888BE78:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
    goto L_0888BE7C;
L_0888BE7C:
    ctx.gpr[31] = (0x0888BE84u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x0888BE84u) goto L_0888BE84;
    return;
L_0888BE84:
    ctx.gpr[4] = (0u | 58u);
    goto L_0888BE88;
L_0888BE88:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0888BEC4;
      }
      goto L_0888BE98;
    }
L_0888BE98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888BEC4;
      }
      goto L_0888BEA8;
    }
L_0888BEA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888BEC4;
      }
      goto L_0888BEB8;
    }
L_0888BEB8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0888BEC4;
L_0888BEC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1328)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1332), ctx.gpr[4]);
    ctx.gpr[31] = (0x0888BED4u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1332));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0888BED4u) goto L_0888BED4;
    return;
L_0888BED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(541)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(541), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0888BF08u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 472u, 0x0888E3F0u>(ctx, &aot_mem) && ctx.pc == 0x0888BF08u) goto L_0888BF08;
    return;
L_0888BF08:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BF30;
      }
      goto L_0888BF24;
    }
L_0888BF24:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    goto L_0888BF30;
L_0888BF30:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888BF44;
      }
      goto L_0888BF40;
    }
L_0888BF40:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_0888BF44;
L_0888BF44:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(768));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(600));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888BFE4;
      }
      goto L_0888BF80;
    }
L_0888BF80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (17096u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0888BFB4;
      }
      goto L_0888BF9C;
    }
L_0888BF9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888BFACu);
    ctx.gpr[6] = (0u | 97u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x0888BFACu) goto L_0888BFAC;
    return;
L_0888BFAC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888BFC8;
      }
      goto L_0888BFB4;
    }
L_0888BFB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888BFC4u);
    ctx.gpr[6] = (0u | 110u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x0888BFC4u) goto L_0888BFC4;
    return;
L_0888BFC4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    goto L_0888BFC8;
L_0888BFC8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0888BFD4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 900u, 0x089B7A14u>(ctx, &aot_mem) && ctx.pc == 0x0888BFD4u) goto L_0888BFD4;
    return;
L_0888BFD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 18u, 0x0888C0ECu>(ctx, &aot_mem); return;
      }
      goto L_0888BFE4;
    }
L_0888BFE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 2u, 0x0888C008u>(ctx, &aot_mem); return;
      }
      goto L_0888BFF4;
    }
L_0888BFF4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0888C000u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 54u, 0x0889035Cu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0033(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0033_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_33(Runtime &runtime) {
    runtime.register_generated_unit(33u, 0x08888000u, 16384u, &recomp_unit_0033, &recomp_unit_0033_entry);
    runtime.register_function(0x08888000u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888030u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888807Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888084u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888809Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888138u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888140u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888148u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888814Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888164u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888190u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888819Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088881B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088881CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088881DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088881F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888208u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888244u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888824Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888254u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888280u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888288u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088882C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088882C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088882F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888304u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888308u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888318u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888354u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088883A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088883ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088883C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888845Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888464u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888846Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888470u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888488u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088884B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088884C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088884D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088884F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888500u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888851Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888852Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888568u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888570u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888578u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088885A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088885ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088885E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088885ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888618u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888628u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888862Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888863Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888678u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888869Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888708u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888714u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888720u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888728u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888738u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888750u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888760u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888774u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888780u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088887C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088887E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088887F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888808u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888810u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888834u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888844u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888850u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888868u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888900u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888914u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888928u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888930u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888954u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888964u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888970u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888988u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A18u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A60u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A7Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888B28u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888B40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888BC0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888BC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888BD8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888BE4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888BECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888BF4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C50u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C64u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C7Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888CB8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888CF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D00u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D08u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D10u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D4Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D60u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D80u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D94u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D9Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888DA4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888DACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888DB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888DC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888DDCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888DE4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888DF4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888DF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E00u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E30u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E4Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E54u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E64u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E78u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E80u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E9Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888EACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888EB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888EBCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888EC4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888ECCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888ED4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888EDCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888EE4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888EECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888EF4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F10u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F28u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F30u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F3Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F4Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F64u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888FB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888FBCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888FC0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888FC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888FDCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888FFCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888903Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889044u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889054u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889064u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889070u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888907Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889088u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888908Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889094u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889098u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088890B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088890D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088890E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088890ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088890FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889108u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889118u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889130u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889184u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889194u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088891ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088891B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088891E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088891E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889204u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889214u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889224u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889234u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888923Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888924Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889254u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889264u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889274u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888927Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888928Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889290u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088892A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088892C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888932Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889334u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888933Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889344u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889354u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888935Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889364u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888936Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889370u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889378u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889384u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888938Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889394u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088893A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088893ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088893CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088893DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088893E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088893F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889404u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889444u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889454u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888945Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889468u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889470u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889478u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889484u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888948Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889494u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088894A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088894ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088894B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088894C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088894CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088894D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088894E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088894E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088894F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088894FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889510u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888951Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889528u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889530u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889534u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888953Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889550u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889564u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889574u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888958Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888959Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088895A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088895A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088895B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088895BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088895C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088895D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088895DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088895E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088895ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088895F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889604u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889608u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889618u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888961Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889624u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889634u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889638u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889648u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888964Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889654u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889664u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889668u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889678u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888967Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889684u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889694u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889698u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889700u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889708u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888971Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889724u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888973Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889764u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889768u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889774u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889788u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889794u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888979Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889800u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889808u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889814u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889824u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889834u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888983Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889844u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888984Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889858u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889868u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889878u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889880u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889888u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889890u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888989Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889900u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889908u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889910u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889918u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889920u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889928u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889930u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889940u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888994Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889954u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888995Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889964u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889970u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888997Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889988u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889994u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888999Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088899B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088899DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088899E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088899ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088899F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A28u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A3Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A44u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A50u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A60u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A68u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A78u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A80u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A9Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889AA4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889AACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889AC4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889ACCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B10u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B18u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B28u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B30u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B44u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B54u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B8Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BBCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BD4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BE0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BE4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C00u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C1Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C44u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C68u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C7Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889CA0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889CACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889CBCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889CCCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889CDCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889CE4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889CF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D00u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D10u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D28u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D30u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D44u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D84u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889DA0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889DACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889DBCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889DC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889DE0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889DF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E10u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E4Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E54u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E68u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E7Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E8Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E94u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E9Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889EA4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889EACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889EB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889EC4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889ECCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889EDCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889EECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889EF4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889EFCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F0Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F24u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F28u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F30u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F50u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F60u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F70u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F78u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F80u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FA8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FBCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FCCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FD4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FE4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FF4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FFCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A004u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A014u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A01Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A02Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A030u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A038u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A040u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A050u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A058u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A068u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A078u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A080u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A088u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A098u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A104u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A110u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A11Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A128u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A134u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A140u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A148u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A15Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A164u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A178u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A19Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A1ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A1B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A1C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A1C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A1D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A1E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A1F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A228u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A250u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A268u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A288u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A29Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A300u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A318u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A320u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A32Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A334u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A340u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A348u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A364u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A370u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A380u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A394u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A3A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A3B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A3BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A3D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A3D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A3E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A3ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A41Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A428u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A44Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A458u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A460u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A46Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A474u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A48Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A498u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A4A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A4B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A4C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A4C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A4D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A4E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A4FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A594u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A5A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A5BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A5C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A5CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A5D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A5E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A5F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A604u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A620u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A628u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A630u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A644u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A660u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A68Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A698u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A6A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A6B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A6B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A6BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A6ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A6F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A700u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A708u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A754u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A784u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A7B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A7BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A7CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A7DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A7F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A818u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A91Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A924u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A92Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A938u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A93Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A944u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A958u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A96Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A998u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A9F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A9FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AA14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AA38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AA48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AA64u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AA8Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AA98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AAB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AAC0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AAE8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AAF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB08u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB18u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB24u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB30u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB3Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB4Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB8Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ABE8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ABF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC10u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC50u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC70u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC84u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ACB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ACBCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ACD4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD44u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD60u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD7Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ADA8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ADCCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ADECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE1Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE44u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE60u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE80u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AEACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AEC0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AEC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AED8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AEE8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AEF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF1Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF24u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF30u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF50u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF60u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF7Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF8Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFA8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFC4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFD4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFE8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B008u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B018u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B020u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B030u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B040u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B048u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B050u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B05Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B064u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B074u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B080u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B088u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B08Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B098u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B10Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B128u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B134u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B14Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B15Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B16Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B178u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B184u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B190u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B194u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B19Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B1A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B1D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B1D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B1ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B200u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B204u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B210u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B220u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B230u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B240u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B24Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B25Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B26Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B300u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B308u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B310u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B358u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B36Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B374u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B37Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B380u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B388u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B3A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B3E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B3F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B3F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B414u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B45Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B464u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B4A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B4B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B4CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B4E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B4ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B4F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B504u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B510u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B514u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B520u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B52Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B534u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B53Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B550u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B560u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B56Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B578u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B584u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B590u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B598u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B5A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B5B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B5C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B5CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B5D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B5DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B5E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B5E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B63Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B650u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B65Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B668u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B670u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B680u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B68Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B698u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B6A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B6B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B6C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B6D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B6D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B6E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B6F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B6F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B700u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B70Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B718u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B724u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B728u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B734u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B764u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B77Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B790u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B7A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B7C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B7DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B7E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B7F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B7FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B804u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B828u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B834u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B83Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B868u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B870u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B880u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B88Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B8C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B8D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B8ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B8F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B90Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B920u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B928u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B938u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B948u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B958u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B964u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B974u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B97Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B990u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA0Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA1Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA44u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA64u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA78u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA84u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA8Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BAA8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BAD4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BADCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BAECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BAF4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BAFCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB0Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB1Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB44u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB54u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB64u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB80u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB8Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB94u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB9Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBA4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBC4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBCCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBD0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBD8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBE8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBF4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBFCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC0Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC10u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC18u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC68u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC70u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC8Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC94u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCB0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCB8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCBCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCC4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCD0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCDCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCE8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCFCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD10u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD24u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD50u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD80u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BDA0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE1Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE44u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE54u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE60u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE78u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE7Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE84u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BEA8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BEB8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BEC4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BED4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF08u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF24u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF30u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF44u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF80u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF9Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BFACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BFB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BFC4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BFC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BFD4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BFE4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BFF4u, &recomp_unit_0033, "recomp_unit_0033");
}
} // namespace psprecomp
