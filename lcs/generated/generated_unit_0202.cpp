#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0202[4076] = {
    1, 0, 2, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 12, 0, 13, 0, 0, 14, 0, 15, 0, 0, 0, 0,
    0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 18, 19, 20, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0,
    0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30,
    0, 0, 0, 0, 31, 0, 0, 32, 0, 33, 0, 0, 34, 0, 35, 0, 36, 37, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 41, 42,
    0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 46, 0, 0, 47, 0, 0, 48, 0, 49, 0, 0, 0, 50, 0,
    51, 0, 52, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 56, 57, 58, 59, 0, 60, 0, 61, 62, 0, 63, 0, 64, 0, 65,
    0, 66, 0, 67, 0, 68, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 73, 0, 0, 0, 0, 74, 0,
    0, 0, 0, 0, 75, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0,
    0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88,
    0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 93, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 95, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 100, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0,
    112, 0, 0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 0, 116, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 0,
    122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 128, 129, 0, 130, 0, 131, 0, 0, 132, 0, 133,
    134, 135, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 138, 0, 139, 0, 0, 140, 0, 141, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 144,
    0, 0, 0, 145, 0, 0, 0, 146, 0, 147, 0, 148, 0, 0, 149, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 153, 0, 154, 0, 0,
    0, 155, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 160, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 163, 164, 0,
    0, 0, 0, 165, 166, 167, 0, 0, 0, 168, 0, 169, 0, 0, 170, 171, 0, 0, 172, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 175,
    0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 181, 182, 0, 0,
    0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0,
    0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196,
    0, 197, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 201, 202, 0, 203, 204, 0, 0, 0, 0, 0, 205, 206, 0, 207, 0, 208, 0, 209, 0, 0,
    210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0,
    0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 230, 0,
    0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0,
    0, 237, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0,
    0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0,
    250, 0, 0, 0, 0, 0, 251, 0, 252, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 257, 0, 0, 0,
    0, 258, 0, 259, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 262, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 267, 0, 268, 0, 269, 0, 270, 271, 0, 0, 272, 0,
    0, 273, 0, 0, 274, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0,
    0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 288, 0, 0, 0, 0, 289, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0,
    0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0,
    0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 315, 0, 0,
    0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320,
    0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0,
    0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0,
    0, 0, 0, 330, 0, 0, 0, 331, 332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0,
    0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 340, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347,
    0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 352, 0, 0, 0, 353, 0, 354, 0, 0, 355, 0, 356, 0, 357, 0, 358,
    0, 0, 0, 359, 360, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366,
    367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 373, 0, 0, 0,
    0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 376, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 380, 0, 0, 0, 381, 382, 0, 0, 0, 383,
    0, 384, 0, 0, 385, 0, 386, 0, 387, 0, 388, 0, 389, 0, 390, 0, 391, 392, 393, 0, 394, 0, 395, 396, 0, 397, 0, 398, 0, 399, 400, 0,
    401, 0, 402, 0, 403, 0, 404, 0, 405, 406, 407, 0, 408, 0, 409, 0, 410, 0, 0, 411, 412, 413, 414, 0, 415, 416, 417, 0, 418, 0, 419, 0,
    420, 0, 421, 0, 422, 0, 423, 0, 424, 0, 425, 0, 426, 427, 428, 0, 429, 0, 430, 0, 431, 0, 432, 0, 433, 434, 435, 0, 436, 0, 437, 0,
    438, 0, 439, 0, 0, 0, 0, 440, 0, 0, 441, 0, 442, 0, 443, 0, 0, 0, 444, 0, 0, 445, 0, 446, 0, 0, 447, 0, 448, 449, 450, 0,
    451, 452, 0, 453, 0, 454, 0, 455, 0, 456, 0, 457, 458, 0, 459, 0, 460, 461, 462, 0, 463, 0, 464, 0, 465, 0, 466, 467, 468, 0, 469, 0,
    470, 0, 471, 472, 473, 0, 474, 0, 475, 0, 476, 0, 477, 0, 478, 0, 479, 0, 480, 0, 481, 482, 483, 484, 485, 0, 486, 0, 487, 0, 488, 0,
    489, 0, 490, 0, 491, 0, 0, 0, 0, 492, 493, 0, 0, 494, 495, 0, 0, 496, 497, 498, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 500,
    0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 503, 504, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0,
    0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0,
    0, 0, 0, 0, 0, 0, 0, 511, 512, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0,
    515, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0,
    0, 0, 0, 520, 521, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 524, 0,
    0, 0, 0, 0, 0, 0, 0, 525, 526, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0,
    0, 0, 529, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 531, 532, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0,
    0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0,
    0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 541,
    0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0,
    0, 0, 546, 0, 547, 548, 0, 549, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 551, 0, 552, 0, 553, 0, 554, 0, 555, 0, 556, 0, 557, 558,
    559, 0, 560, 0, 561, 0, 562, 0, 563, 0, 564, 0, 565, 0, 566, 567, 568, 0, 569, 0, 570, 0, 571, 0, 572, 0, 573, 0, 574, 0, 575, 0,
    576, 0, 577, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 580, 0, 0, 0, 0, 0, 0, 581, 582, 0, 0, 0, 0, 583, 0, 584, 0,
    0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 586, 0, 0, 587, 588, 0, 589, 590, 0, 0, 0, 591, 0, 592, 593, 0, 594, 595, 0,
    596, 0, 597, 0, 598, 0, 0, 599, 0, 600, 0, 601, 0, 602, 0, 0, 603, 604, 0, 605, 0, 0, 606, 607, 0, 0, 608, 0, 0, 609, 0, 0,
    610, 611, 0, 612, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 615,
    616, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 619, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 625,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 627, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 0, 0, 0, 630, 0,
    0, 631, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 633, 0, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 636, 0, 0, 0, 637, 638, 0,
    0, 0, 0, 639, 0, 0, 640, 0, 641, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 644, 0, 0, 645, 0, 0, 0, 0, 646,
    0, 0, 0, 647, 0, 0, 648, 649, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 653, 0, 0,
    0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 656, 0, 0, 0, 657, 0, 658, 0, 0, 0, 659, 0, 0, 0, 0, 0, 660, 0, 0, 0, 661,
    0, 0, 662, 0, 0, 0, 663, 0, 0, 0, 0, 664, 665, 0, 0, 0, 0, 0, 666, 667, 0, 0, 0, 668, 0, 0, 669, 670, 671, 0, 0, 0,
    672, 673, 0, 0, 0, 0, 674, 0, 0, 0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 677, 0, 0, 678, 0, 0, 0, 0, 679, 0, 0, 0, 0,
    0, 680, 0, 0, 0, 681, 0, 0, 0, 682, 0, 683, 0, 0, 684, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 687, 688, 0, 0, 0, 0,
    689, 0, 0, 0, 690, 0, 691, 0, 0, 0, 0, 0, 0, 692, 693, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 695, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 697, 0, 0, 0, 0, 0, 698, 0, 699, 0, 0, 0, 0, 700, 0, 0, 701, 702, 0, 0, 0, 0,
    703, 704, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    708, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 710, 711, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 713,
    0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 716, 0, 0, 0, 717, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0,
    0, 0, 0, 720, 0, 0, 0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    724, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 726, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 729, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 732, 0, 0, 0, 0, 733, 0, 734,
    0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 740, 0, 741, 0, 0, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 748, 0, 0, 0, 0, 0, 0,
    749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0,
    755, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0,
    763, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 765, 766, 0, 0, 767, 768, 769, 0, 0, 0, 0, 770, 0, 771, 0, 0, 772, 0, 0, 0, 0,
    0, 773, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0,
    776, 0, 0, 777, 0, 778, 0, 779, 0, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0,
    0, 0, 0, 783, 0, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 789,
    0, 790, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0,
    0, 794, 0, 0, 795, 0, 0, 0, 796, 0, 0, 0, 797, 0, 0, 0, 798, 0, 0, 0, 799, 0, 0, 800, 0, 0, 0, 801, 0, 0, 0, 0,
    0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 804, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 808,
    0, 0, 809, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 0, 0, 811, 0, 0, 0, 0, 0, 812, 0, 0, 0, 813, 0, 0, 0, 814, 0,
    0, 815, 0, 0, 816, 0, 0, 0, 0, 0, 0, 817,
};
void recomp_unit_0202_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B2C020u;
        entry_id = (entry_delta < 16304u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0202[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B2C020;
    case 2u: goto L_08B2C028;
    case 3u: goto L_08B2C030;
    case 4u: goto L_08B2C03C;
    case 5u: goto L_08B2C088;
    case 6u: goto L_08B2C098;
    case 7u: goto L_08B2C0CC;
    case 8u: goto L_08B2C0D4;
    case 9u: goto L_08B2C0DC;
    case 10u: goto L_08B2C0E4;
    case 11u: goto L_08B2C0EC;
    case 12u: goto L_08B2C0F0;
    case 13u: goto L_08B2C0F8;
    case 14u: goto L_08B2C104;
    case 15u: goto L_08B2C10C;
    case 16u: goto L_08B2C128;
    case 17u: goto L_08B2C144;
    case 18u: goto L_08B2C148;
    case 19u: goto L_08B2C14C;
    case 20u: goto L_08B2C150;
    case 21u: goto L_08B2C158;
    case 22u: goto L_08B2C168;
    case 23u: goto L_08B2C184;
    case 24u: goto L_08B2C1A4;
    case 25u: goto L_08B2C1C8;
    case 26u: goto L_08B2C1DC;
    case 27u: goto L_08B2C1E4;
    case 28u: goto L_08B2C1F4;
    case 29u: goto L_08B2C20C;
    case 30u: goto L_08B2C21C;
    case 31u: goto L_08B2C230;
    case 32u: goto L_08B2C23C;
    case 33u: goto L_08B2C244;
    case 34u: goto L_08B2C250;
    case 35u: goto L_08B2C258;
    case 36u: goto L_08B2C260;
    case 37u: goto L_08B2C264;
    case 38u: goto L_08B2C268;
    case 39u: goto L_08B2C270;
    case 40u: goto L_08B2C294;
    case 41u: goto L_08B2C298;
    case 42u: goto L_08B2C29C;
    case 43u: goto L_08B2C2B8;
    case 44u: goto L_08B2C2D0;
    case 45u: goto L_08B2C2E0;
    case 46u: goto L_08B2C2E8;
    case 47u: goto L_08B2C2F4;
    case 48u: goto L_08B2C300;
    case 49u: goto L_08B2C308;
    case 50u: goto L_08B2C318;
    case 51u: goto L_08B2C320;
    case 52u: goto L_08B2C328;
    case 53u: goto L_08B2C338;
    case 54u: goto L_08B2C340;
    case 55u: goto L_08B2C360;
    case 56u: goto L_08B2C364;
    case 57u: goto L_08B2C368;
    case 58u: goto L_08B2C36C;
    case 59u: goto L_08B2C370;
    case 60u: goto L_08B2C378;
    case 61u: goto L_08B2C380;
    case 62u: goto L_08B2C384;
    case 63u: goto L_08B2C38C;
    case 64u: goto L_08B2C394;
    case 65u: goto L_08B2C39C;
    case 66u: goto L_08B2C3A4;
    case 67u: goto L_08B2C3AC;
    case 68u: goto L_08B2C3B4;
    case 69u: goto L_08B2C3B8;
    case 70u: goto L_08B2C3C8;
    case 71u: goto L_08B2C3E8;
    case 72u: goto L_08B2C400;
    case 73u: goto L_08B2C404;
    case 74u: goto L_08B2C418;
    case 75u: goto L_08B2C430;
    case 76u: goto L_08B2C434;
    case 77u: goto L_08B2C43C;
    case 78u: goto L_08B2C45C;
    case 79u: goto L_08B2C46C;
    case 80u: goto L_08B2C470;
    case 81u: goto L_08B2C484;
    case 82u: goto L_08B2C498;
    case 83u: goto L_08B2C4A4;
    case 84u: goto L_08B2C4C0;
    case 85u: goto L_08B2C4C8;
    case 86u: goto L_08B2C4D0;
    case 87u: goto L_08B2C500;
    case 88u: goto L_08B2C51C;
    case 89u: goto L_08B2C524;
    case 90u: goto L_08B2C548;
    case 91u: goto L_08B2C56C;
    case 92u: goto L_08B2C600;
    case 93u: goto L_08B2C62C;
    case 94u: goto L_08B2C630;
    case 95u: goto L_08B2C728;
    case 96u: goto L_08B2C72C;
    case 97u: goto L_08B2C754;
    case 98u: goto L_08B2C78C;
    case 99u: goto L_08B2C7A0;
    case 100u: goto L_08B2C7BC;
    case 101u: goto L_08B2C7C0;
    case 102u: goto L_08B2C7C8;
    case 103u: goto L_08B2C7E8;
    case 104u: goto L_08B2C7F0;
    case 105u: goto L_08B2C820;
    case 106u: goto L_08B2C860;
    case 107u: goto L_08B2C8E0;
    case 108u: goto L_08B2C8EC;
    case 109u: goto L_08B2C8F4;
    case 110u: goto L_08B2C900;
    case 111u: goto L_08B2C90C;
    case 112u: goto L_08B2C920;
    case 113u: goto L_08B2C92C;
    case 114u: goto L_08B2C93C;
    case 115u: goto L_08B2C948;
    case 116u: goto L_08B2C954;
    case 117u: goto L_08B2C958;
    case 118u: goto L_08B2C968;
    case 119u: goto L_08B2C978;
    case 120u: goto L_08B2C988;
    case 121u: goto L_08B2C994;
    case 122u: goto L_08B2C9A0;
    case 123u: goto L_08B2C9B0;
    case 124u: goto L_08B2C9C0;
    case 125u: goto L_08B2C9D0;
    case 126u: goto L_08B2C9E0;
    case 127u: goto L_08B2C9EC;
    case 128u: goto L_08B2C9F4;
    case 129u: goto L_08B2C9F8;
    case 130u: goto L_08B2CA00;
    case 131u: goto L_08B2CA08;
    case 132u: goto L_08B2CA14;
    case 133u: goto L_08B2CA1C;
    case 134u: goto L_08B2CA20;
    case 135u: goto L_08B2CA24;
    case 136u: goto L_08B2CA30;
    case 137u: goto L_08B2CA44;
    case 138u: goto L_08B2CA50;
    case 139u: goto L_08B2CA58;
    case 140u: goto L_08B2CA64;
    case 141u: goto L_08B2CA6C;
    case 142u: goto L_08B2CA78;
    case 143u: goto L_08B2CA88;
    case 144u: goto L_08B2CA9C;
    case 145u: goto L_08B2CAAC;
    case 146u: goto L_08B2CABC;
    case 147u: goto L_08B2CAC4;
    case 148u: goto L_08B2CACC;
    case 149u: goto L_08B2CAD8;
    case 150u: goto L_08B2CAE0;
    case 151u: goto L_08B2CAEC;
    case 152u: goto L_08B2CB04;
    case 153u: goto L_08B2CB0C;
    case 154u: goto L_08B2CB14;
    case 155u: goto L_08B2CB24;
    case 156u: goto L_08B2CB2C;
    case 157u: goto L_08B2CB3C;
    case 158u: goto L_08B2CB48;
    case 159u: goto L_08B2CB58;
    case 160u: goto L_08B2CB60;
    case 161u: goto L_08B2CB70;
    case 162u: goto L_08B2CB7C;
    case 163u: goto L_08B2CB94;
    case 164u: goto L_08B2CB98;
    case 165u: goto L_08B2CBAC;
    case 166u: goto L_08B2CBB0;
    case 167u: goto L_08B2CBB4;
    case 168u: goto L_08B2CBC4;
    case 169u: goto L_08B2CBCC;
    case 170u: goto L_08B2CBD8;
    case 171u: goto L_08B2CBDC;
    case 172u: goto L_08B2CBE8;
    case 173u: goto L_08B2CBEC;
    case 174u: goto L_08B2CC18;
    case 175u: goto L_08B2CC1C;
    case 176u: goto L_08B2CC2C;
    case 177u: goto L_08B2CC3C;
    case 178u: goto L_08B2CC54;
    case 179u: goto L_08B2CC7C;
    case 180u: goto L_08B2CC88;
    case 181u: goto L_08B2CC90;
    case 182u: goto L_08B2CC94;
    case 183u: goto L_08B2CCA4;
    case 184u: goto L_08B2CCB4;
    case 185u: goto L_08B2CCC4;
    case 186u: goto L_08B2CCD4;
    case 187u: goto L_08B2CCE4;
    case 188u: goto L_08B2CCF4;
    case 189u: goto L_08B2CD04;
    case 190u: goto L_08B2CD14;
    case 191u: goto L_08B2CD28;
    case 192u: goto L_08B2CD38;
    case 193u: goto L_08B2CD50;
    case 194u: goto L_08B2CD68;
    case 195u: goto L_08B2CD7C;
    case 196u: goto L_08B2CD9C;
    case 197u: goto L_08B2CDA4;
    case 198u: goto L_08B2CDAC;
    case 199u: goto L_08B2CDB8;
    case 200u: goto L_08B2CDC4;
    case 201u: goto L_08B2CDD0;
    case 202u: goto L_08B2CDD4;
    case 203u: goto L_08B2CDDC;
    case 204u: goto L_08B2CDE0;
    case 205u: goto L_08B2CDF8;
    case 206u: goto L_08B2CDFC;
    case 207u: goto L_08B2CE04;
    case 208u: goto L_08B2CE0C;
    case 209u: goto L_08B2CE14;
    case 210u: goto L_08B2CE20;
    case 211u: goto L_08B2CE34;
    case 212u: goto L_08B2CE50;
    case 213u: goto L_08B2CE64;
    case 214u: goto L_08B2CE7C;
    case 215u: goto L_08B2CE90;
    case 216u: goto L_08B2CEA8;
    case 217u: goto L_08B2CEBC;
    case 218u: goto L_08B2CEC8;
    case 219u: goto L_08B2CEE4;
    case 220u: goto L_08B2CF08;
    case 221u: goto L_08B2CF30;
    case 222u: goto L_08B2CF5C;
    case 223u: goto L_08B2CF74;
    case 224u: goto L_08B2CFB4;
    case 225u: goto L_08B2CFBC;
    case 226u: goto L_08B2CFDC;
    case 227u: goto L_08B2CFE4;
    case 228u: goto L_08B2CFF8;
    case 229u: goto L_08B2D010;
    case 230u: goto L_08B2D018;
    case 231u: goto L_08B2D028;
    case 232u: goto L_08B2D040;
    case 233u: goto L_08B2D050;
    case 234u: goto L_08B2D06C;
    case 235u: goto L_08B2D088;
    case 236u: goto L_08B2D094;
    case 237u: goto L_08B2D0A4;
    case 238u: goto L_08B2D0AC;
    case 239u: goto L_08B2D0B8;
    case 240u: goto L_08B2D0C4;
    case 241u: goto L_08B2D0D0;
    case 242u: goto L_08B2D0DC;
    case 243u: goto L_08B2D0E8;
    case 244u: goto L_08B2D0F0;
    case 245u: goto L_08B2D114;
    case 246u: goto L_08B2D138;
    case 247u: goto L_08B2D16C;
    case 248u: goto L_08B2D180;
    case 249u: goto L_08B2D190;
    case 250u: goto L_08B2D1A0;
    case 251u: goto L_08B2D1B8;
    case 252u: goto L_08B2D1C0;
    case 253u: goto L_08B2D1C4;
    case 254u: goto L_08B2D1E4;
    case 255u: goto L_08B2D1EC;
    case 256u: goto L_08B2D20C;
    case 257u: goto L_08B2D210;
    case 258u: goto L_08B2D224;
    case 259u: goto L_08B2D22C;
    case 260u: goto L_08B2D238;
    case 261u: goto L_08B2D24C;
    case 262u: goto L_08B2D25C;
    case 263u: goto L_08B2D260;
    case 264u: goto L_08B2D280;
    case 265u: goto L_08B2D2E0;
    case 266u: goto L_08B2D2E8;
    case 267u: goto L_08B2D2F0;
    case 268u: goto L_08B2D2F8;
    case 269u: goto L_08B2D300;
    case 270u: goto L_08B2D308;
    case 271u: goto L_08B2D30C;
    case 272u: goto L_08B2D318;
    case 273u: goto L_08B2D324;
    case 274u: goto L_08B2D330;
    case 275u: goto L_08B2D33C;
    case 276u: goto L_08B2D348;
    case 277u: goto L_08B2D360;
    case 278u: goto L_08B2D374;
    case 279u: goto L_08B2D388;
    case 280u: goto L_08B2D3B4;
    case 281u: goto L_08B2D3C4;
    case 282u: goto L_08B2D3C8;
    case 283u: goto L_08B2D3F0;
    case 284u: goto L_08B2D400;
    case 285u: goto L_08B2D424;
    case 286u: goto L_08B2D448;
    case 287u: goto L_08B2D450;
    case 288u: goto L_08B2D458;
    case 289u: goto L_08B2D46C;
    case 290u: goto L_08B2D474;
    case 291u: goto L_08B2D47C;
    case 292u: goto L_08B2D4A4;
    case 293u: goto L_08B2D4B8;
    case 294u: goto L_08B2D4CC;
    case 295u: goto L_08B2D4FC;
    case 296u: goto L_08B2D528;
    case 297u: goto L_08B2D55C;
    case 298u: goto L_08B2D580;
    case 299u: goto L_08B2D590;
    case 300u: goto L_08B2D5A8;
    case 301u: goto L_08B2D5CC;
    case 302u: goto L_08B2D5F8;
    case 303u: goto L_08B2D614;
    case 304u: goto L_08B2D620;
    case 305u: goto L_08B2D640;
    case 306u: goto L_08B2D658;
    case 307u: goto L_08B2D678;
    case 308u: goto L_08B2D698;
    case 309u: goto L_08B2D6AC;
    case 310u: goto L_08B2D6B4;
    case 311u: goto L_08B2D6D4;
    case 312u: goto L_08B2D6E0;
    case 313u: goto L_08B2D700;
    case 314u: goto L_08B2D70C;
    case 315u: goto L_08B2D714;
    case 316u: goto L_08B2D734;
    case 317u: goto L_08B2D758;
    case 318u: goto L_08B2D75C;
    case 319u: goto L_08B2D788;
    case 320u: goto L_08B2D79C;
    case 321u: goto L_08B2D7A8;
    case 322u: goto L_08B2D7C8;
    case 323u: goto L_08B2D7EC;
    case 324u: goto L_08B2D80C;
    case 325u: goto L_08B2D824;
    case 326u: goto L_08B2D838;
    case 327u: goto L_08B2D850;
    case 328u: goto L_08B2D870;
    case 329u: goto L_08B2D88C;
    case 330u: goto L_08B2D8AC;
    case 331u: goto L_08B2D8BC;
    case 332u: goto L_08B2D8C0;
    case 333u: goto L_08B2D8D0;
    case 334u: goto L_08B2D8E0;
    case 335u: goto L_08B2D8F0;
    case 336u: goto L_08B2D908;
    case 337u: goto L_08B2D924;
    case 338u: goto L_08B2D94C;
    case 339u: goto L_08B2D960;
    case 340u: goto L_08B2D96C;
    case 341u: goto L_08B2D974;
    case 342u: goto L_08B2D97C;
    case 343u: goto L_08B2D9A8;
    case 344u: goto L_08B2D9C4;
    case 345u: goto L_08B2D9D0;
    case 346u: goto L_08B2D9F8;
    case 347u: goto L_08B2DA1C;
    case 348u: goto L_08B2DA28;
    case 349u: goto L_08B2DA30;
    case 350u: goto L_08B2DA48;
    case 351u: goto L_08B2DA5C;
    case 352u: goto L_08B2DA60;
    case 353u: goto L_08B2DA70;
    case 354u: goto L_08B2DA78;
    case 355u: goto L_08B2DA84;
    case 356u: goto L_08B2DA8C;
    case 357u: goto L_08B2DA94;
    case 358u: goto L_08B2DA9C;
    case 359u: goto L_08B2DAAC;
    case 360u: goto L_08B2DAB0;
    case 361u: goto L_08B2DABC;
    case 362u: goto L_08B2DAC8;
    case 363u: goto L_08B2DAD4;
    case 364u: goto L_08B2DAE8;
    case 365u: goto L_08B2DB04;
    case 366u: goto L_08B2DB1C;
    case 367u: goto L_08B2DB20;
    case 368u: goto L_08B2DB3C;
    case 369u: goto L_08B2DB54;
    case 370u: goto L_08B2DB58;
    case 371u: goto L_08B2DB74;
    case 372u: goto L_08B2DB8C;
    case 373u: goto L_08B2DB90;
    case 374u: goto L_08B2DBAC;
    case 375u: goto L_08B2DBC4;
    case 376u: goto L_08B2DBC8;
    case 377u: goto L_08B2DBCC;
    case 378u: goto L_08B2DBE0;
    case 379u: goto L_08B2DBF4;
    case 380u: goto L_08B2DBF8;
    case 381u: goto L_08B2DC08;
    case 382u: goto L_08B2DC0C;
    case 383u: goto L_08B2DC1C;
    case 384u: goto L_08B2DC24;
    case 385u: goto L_08B2DC30;
    case 386u: goto L_08B2DC38;
    case 387u: goto L_08B2DC40;
    case 388u: goto L_08B2DC48;
    case 389u: goto L_08B2DC50;
    case 390u: goto L_08B2DC58;
    case 391u: goto L_08B2DC60;
    case 392u: goto L_08B2DC64;
    case 393u: goto L_08B2DC68;
    case 394u: goto L_08B2DC70;
    case 395u: goto L_08B2DC78;
    case 396u: goto L_08B2DC7C;
    case 397u: goto L_08B2DC84;
    case 398u: goto L_08B2DC8C;
    case 399u: goto L_08B2DC94;
    case 400u: goto L_08B2DC98;
    case 401u: goto L_08B2DCA0;
    case 402u: goto L_08B2DCA8;
    case 403u: goto L_08B2DCB0;
    case 404u: goto L_08B2DCB8;
    case 405u: goto L_08B2DCC0;
    case 406u: goto L_08B2DCC4;
    case 407u: goto L_08B2DCC8;
    case 408u: goto L_08B2DCD0;
    case 409u: goto L_08B2DCD8;
    case 410u: goto L_08B2DCE0;
    case 411u: goto L_08B2DCEC;
    case 412u: goto L_08B2DCF0;
    case 413u: goto L_08B2DCF4;
    case 414u: goto L_08B2DCF8;
    case 415u: goto L_08B2DD00;
    case 416u: goto L_08B2DD04;
    case 417u: goto L_08B2DD08;
    case 418u: goto L_08B2DD10;
    case 419u: goto L_08B2DD18;
    case 420u: goto L_08B2DD20;
    case 421u: goto L_08B2DD28;
    case 422u: goto L_08B2DD30;
    case 423u: goto L_08B2DD38;
    case 424u: goto L_08B2DD40;
    case 425u: goto L_08B2DD48;
    case 426u: goto L_08B2DD50;
    case 427u: goto L_08B2DD54;
    case 428u: goto L_08B2DD58;
    case 429u: goto L_08B2DD60;
    case 430u: goto L_08B2DD68;
    case 431u: goto L_08B2DD70;
    case 432u: goto L_08B2DD78;
    case 433u: goto L_08B2DD80;
    case 434u: goto L_08B2DD84;
    case 435u: goto L_08B2DD88;
    case 436u: goto L_08B2DD90;
    case 437u: goto L_08B2DD98;
    case 438u: goto L_08B2DDA0;
    case 439u: goto L_08B2DDA8;
    case 440u: goto L_08B2DDBC;
    case 441u: goto L_08B2DDC8;
    case 442u: goto L_08B2DDD0;
    case 443u: goto L_08B2DDD8;
    case 444u: goto L_08B2DDE8;
    case 445u: goto L_08B2DDF4;
    case 446u: goto L_08B2DDFC;
    case 447u: goto L_08B2DE08;
    case 448u: goto L_08B2DE10;
    case 449u: goto L_08B2DE14;
    case 450u: goto L_08B2DE18;
    case 451u: goto L_08B2DE20;
    case 452u: goto L_08B2DE24;
    case 453u: goto L_08B2DE2C;
    case 454u: goto L_08B2DE34;
    case 455u: goto L_08B2DE3C;
    case 456u: goto L_08B2DE44;
    case 457u: goto L_08B2DE4C;
    case 458u: goto L_08B2DE50;
    case 459u: goto L_08B2DE58;
    case 460u: goto L_08B2DE60;
    case 461u: goto L_08B2DE64;
    case 462u: goto L_08B2DE68;
    case 463u: goto L_08B2DE70;
    case 464u: goto L_08B2DE78;
    case 465u: goto L_08B2DE80;
    case 466u: goto L_08B2DE88;
    case 467u: goto L_08B2DE8C;
    case 468u: goto L_08B2DE90;
    case 469u: goto L_08B2DE98;
    case 470u: goto L_08B2DEA0;
    case 471u: goto L_08B2DEA8;
    case 472u: goto L_08B2DEAC;
    case 473u: goto L_08B2DEB0;
    case 474u: goto L_08B2DEB8;
    case 475u: goto L_08B2DEC0;
    case 476u: goto L_08B2DEC8;
    case 477u: goto L_08B2DED0;
    case 478u: goto L_08B2DED8;
    case 479u: goto L_08B2DEE0;
    case 480u: goto L_08B2DEE8;
    case 481u: goto L_08B2DEF0;
    case 482u: goto L_08B2DEF4;
    case 483u: goto L_08B2DEF8;
    case 484u: goto L_08B2DEFC;
    case 485u: goto L_08B2DF00;
    case 486u: goto L_08B2DF08;
    case 487u: goto L_08B2DF10;
    case 488u: goto L_08B2DF18;
    case 489u: goto L_08B2DF20;
    case 490u: goto L_08B2DF28;
    case 491u: goto L_08B2DF30;
    case 492u: goto L_08B2DF44;
    case 493u: goto L_08B2DF48;
    case 494u: goto L_08B2DF54;
    case 495u: goto L_08B2DF58;
    case 496u: goto L_08B2DF64;
    case 497u: goto L_08B2DF68;
    case 498u: goto L_08B2DF6C;
    case 499u: goto L_08B2DF78;
    case 500u: goto L_08B2DF9C;
    case 501u: goto L_08B2DFBC;
    case 502u: goto L_08B2DFD8;
    case 503u: goto L_08B2DFF0;
    case 504u: goto L_08B2DFF4;
    case 505u: goto L_08B2E014;
    case 506u: goto L_08B2E038;
    case 507u: goto L_08B2E04C;
    case 508u: goto L_08B2E054;
    case 509u: goto L_08B2E074;
    case 510u: goto L_08B2E098;
    case 511u: goto L_08B2E0BC;
    case 512u: goto L_08B2E0C0;
    case 513u: goto L_08B2E0E0;
    case 514u: goto L_08B2E100;
    case 515u: goto L_08B2E120;
    case 516u: goto L_08B2E144;
    case 517u: goto L_08B2E168;
    case 518u: goto L_08B2E170;
    case 519u: goto L_08B2E18C;
    case 520u: goto L_08B2E1AC;
    case 521u: goto L_08B2E1B0;
    case 522u: goto L_08B2E1D4;
    case 523u: goto L_08B2E1F8;
    case 524u: goto L_08B2E218;
    case 525u: goto L_08B2E23C;
    case 526u: goto L_08B2E240;
    case 527u: goto L_08B2E260;
    case 528u: goto L_08B2E284;
    case 529u: goto L_08B2E2A8;
    case 530u: goto L_08B2E2C4;
    case 531u: goto L_08B2E2E4;
    case 532u: goto L_08B2E2E8;
    case 533u: goto L_08B2E308;
    case 534u: goto L_08B2E32C;
    case 535u: goto L_08B2E34C;
    case 536u: goto L_08B2E370;
    case 537u: goto L_08B2E394;
    case 538u: goto L_08B2E3B8;
    case 539u: goto L_08B2E3D8;
    case 540u: goto L_08B2E3F8;
    case 541u: goto L_08B2E41C;
    case 542u: goto L_08B2E438;
    case 543u: goto L_08B2E454;
    case 544u: goto L_08B2E474;
    case 545u: goto L_08B2E490;
    case 546u: goto L_08B2E4A8;
    case 547u: goto L_08B2E4B0;
    case 548u: goto L_08B2E4B4;
    case 549u: goto L_08B2E4BC;
    case 550u: goto L_08B2E4D4;
    case 551u: goto L_08B2E4E8;
    case 552u: goto L_08B2E4F0;
    case 553u: goto L_08B2E4F8;
    case 554u: goto L_08B2E500;
    case 555u: goto L_08B2E508;
    case 556u: goto L_08B2E510;
    case 557u: goto L_08B2E518;
    case 558u: goto L_08B2E51C;
    case 559u: goto L_08B2E520;
    case 560u: goto L_08B2E528;
    case 561u: goto L_08B2E530;
    case 562u: goto L_08B2E538;
    case 563u: goto L_08B2E540;
    case 564u: goto L_08B2E548;
    case 565u: goto L_08B2E550;
    case 566u: goto L_08B2E558;
    case 567u: goto L_08B2E55C;
    case 568u: goto L_08B2E560;
    case 569u: goto L_08B2E568;
    case 570u: goto L_08B2E570;
    case 571u: goto L_08B2E578;
    case 572u: goto L_08B2E580;
    case 573u: goto L_08B2E588;
    case 574u: goto L_08B2E590;
    case 575u: goto L_08B2E598;
    case 576u: goto L_08B2E5A0;
    case 577u: goto L_08B2E5A8;
    case 578u: goto L_08B2E5B0;
    case 579u: goto L_08B2E5D4;
    case 580u: goto L_08B2E5DC;
    case 581u: goto L_08B2E5F8;
    case 582u: goto L_08B2E5FC;
    case 583u: goto L_08B2E610;
    case 584u: goto L_08B2E618;
    case 585u: goto L_08B2E63C;
    case 586u: goto L_08B2E654;
    case 587u: goto L_08B2E660;
    case 588u: goto L_08B2E664;
    case 589u: goto L_08B2E66C;
    case 590u: goto L_08B2E670;
    case 591u: goto L_08B2E680;
    case 592u: goto L_08B2E688;
    case 593u: goto L_08B2E68C;
    case 594u: goto L_08B2E694;
    case 595u: goto L_08B2E698;
    case 596u: goto L_08B2E6A0;
    case 597u: goto L_08B2E6A8;
    case 598u: goto L_08B2E6B0;
    case 599u: goto L_08B2E6BC;
    case 600u: goto L_08B2E6C4;
    case 601u: goto L_08B2E6CC;
    case 602u: goto L_08B2E6D4;
    case 603u: goto L_08B2E6E0;
    case 604u: goto L_08B2E6E4;
    case 605u: goto L_08B2E6EC;
    case 606u: goto L_08B2E6F8;
    case 607u: goto L_08B2E6FC;
    case 608u: goto L_08B2E708;
    case 609u: goto L_08B2E714;
    case 610u: goto L_08B2E720;
    case 611u: goto L_08B2E724;
    case 612u: goto L_08B2E72C;
    case 613u: goto L_08B2E744;
    case 614u: goto L_08B2E790;
    case 615u: goto L_08B2E79C;
    case 616u: goto L_08B2E7A0;
    case 617u: goto L_08B2E7A8;
    case 618u: goto L_08B2E7D4;
    case 619u: goto L_08B2E7E0;
    case 620u: goto L_08B2E7E8;
    case 621u: goto L_08B2E8FC;
    case 622u: goto L_08B2E96C;
    case 623u: goto L_08B2EA68;
    case 624u: goto L_08B2EA90;
    case 625u: goto L_08B2EA9C;
    case 626u: goto L_08B2EAC8;
    case 627u: goto L_08B2EAD4;
    case 628u: goto L_08B2EAF0;
    case 629u: goto L_08B2EB00;
    case 630u: goto L_08B2EB18;
    case 631u: goto L_08B2EB24;
    case 632u: goto L_08B2EB40;
    case 633u: goto L_08B2EB54;
    case 634u: goto L_08B2EB68;
    case 635u: goto L_08B2EB78;
    case 636u: goto L_08B2EB84;
    case 637u: goto L_08B2EB94;
    case 638u: goto L_08B2EB98;
    case 639u: goto L_08B2EBAC;
    case 640u: goto L_08B2EBB8;
    case 641u: goto L_08B2EBC0;
    case 642u: goto L_08B2EBCC;
    case 643u: goto L_08B2EBE4;
    case 644u: goto L_08B2EBFC;
    case 645u: goto L_08B2EC08;
    case 646u: goto L_08B2EC1C;
    case 647u: goto L_08B2EC2C;
    case 648u: goto L_08B2EC38;
    case 649u: goto L_08B2EC3C;
    case 650u: goto L_08B2EC4C;
    case 651u: goto L_08B2EC60;
    case 652u: goto L_08B2EC80;
    case 653u: goto L_08B2EC94;
    case 654u: goto L_08B2ECAC;
    case 655u: goto L_08B2ECBC;
    case 656u: goto L_08B2ECCC;
    case 657u: goto L_08B2ECDC;
    case 658u: goto L_08B2ECE4;
    case 659u: goto L_08B2ECF4;
    case 660u: goto L_08B2ED0C;
    case 661u: goto L_08B2ED1C;
    case 662u: goto L_08B2ED28;
    case 663u: goto L_08B2ED38;
    case 664u: goto L_08B2ED4C;
    case 665u: goto L_08B2ED50;
    case 666u: goto L_08B2ED68;
    case 667u: goto L_08B2ED6C;
    case 668u: goto L_08B2ED7C;
    case 669u: goto L_08B2ED88;
    case 670u: goto L_08B2ED8C;
    case 671u: goto L_08B2ED90;
    case 672u: goto L_08B2EDA0;
    case 673u: goto L_08B2EDA4;
    case 674u: goto L_08B2EDB8;
    case 675u: goto L_08B2EDCC;
    case 676u: goto L_08B2EDDC;
    case 677u: goto L_08B2EDEC;
    case 678u: goto L_08B2EDF8;
    case 679u: goto L_08B2EE0C;
    case 680u: goto L_08B2EE24;
    case 681u: goto L_08B2EE34;
    case 682u: goto L_08B2EE44;
    case 683u: goto L_08B2EE4C;
    case 684u: goto L_08B2EE58;
    case 685u: goto L_08B2EE68;
    case 686u: goto L_08B2EE7C;
    case 687u: goto L_08B2EE88;
    case 688u: goto L_08B2EE8C;
    case 689u: goto L_08B2EEA0;
    case 690u: goto L_08B2EEB0;
    case 691u: goto L_08B2EEB8;
    case 692u: goto L_08B2EED4;
    case 693u: goto L_08B2EED8;
    case 694u: goto L_08B2EEF8;
    case 695u: goto L_08B2EF08;
    case 696u: goto L_08B2EF38;
    case 697u: goto L_08B2EF48;
    case 698u: goto L_08B2EF60;
    case 699u: goto L_08B2EF68;
    case 700u: goto L_08B2EF7C;
    case 701u: goto L_08B2EF88;
    case 702u: goto L_08B2EF8C;
    case 703u: goto L_08B2EFA0;
    case 704u: goto L_08B2EFA4;
    case 705u: goto L_08B2EFBC;
    case 706u: goto L_08B2EFD4;
    case 707u: goto L_08B2EFF0;
    case 708u: goto L_08B2F020;
    case 709u: goto L_08B2F040;
    case 710u: goto L_08B2F060;
    case 711u: goto L_08B2F064;
    case 712u: goto L_08B2F078;
    case 713u: goto L_08B2F09C;
    case 714u: goto L_08B2F0B0;
    case 715u: goto L_08B2F0C8;
    case 716u: goto L_08B2F0DC;
    case 717u: goto L_08B2F0EC;
    case 718u: goto L_08B2F0F4;
    case 719u: goto L_08B2F108;
    case 720u: goto L_08B2F12C;
    case 721u: goto L_08B2F140;
    case 722u: goto L_08B2F150;
    case 723u: goto L_08B2F178;
    case 724u: goto L_08B2F1A0;
    case 725u: goto L_08B2F1BC;
    case 726u: goto L_08B2F1D0;
    case 727u: goto L_08B2F1E0;
    case 728u: goto L_08B2F214;
    case 729u: goto L_08B2F2B8;
    case 730u: goto L_08B2F2BC;
    case 731u: goto L_08B2F370;
    case 732u: goto L_08B2F380;
    case 733u: goto L_08B2F394;
    case 734u: goto L_08B2F39C;
    case 735u: goto L_08B2F3B0;
    case 736u: goto L_08B2F468;
    case 737u: goto L_08B2F4A0;
    case 738u: goto L_08B2F5A8;
    case 739u: goto L_08B2F5C8;
    case 740u: goto L_08B2F5DC;
    case 741u: goto L_08B2F5E4;
    case 742u: goto L_08B2F5F8;
    case 743u: goto L_08B2F60C;
    case 744u: goto L_08B2F688;
    case 745u: goto L_08B2F72C;
    case 746u: goto L_08B2F758;
    case 747u: goto L_08B2F780;
    case 748u: goto L_08B2F784;
    case 749u: goto L_08B2F7A0;
    case 750u: goto L_08B2F7D0;
    case 751u: goto L_08B2F7E4;
    case 752u: goto L_08B2F81C;
    case 753u: goto L_08B2F850;
    case 754u: goto L_08B2F894;
    case 755u: goto L_08B2F8A0;
    case 756u: goto L_08B2F8B4;
    case 757u: goto L_08B2F8D8;
    case 758u: goto L_08B2F8F0;
    case 759u: goto L_08B2F90C;
    case 760u: goto L_08B2F944;
    case 761u: goto L_08B2F968;
    case 762u: goto L_08B2F988;
    case 763u: goto L_08B2F9A0;
    case 764u: goto L_08B2F9B8;
    case 765u: goto L_08B2F9CC;
    case 766u: goto L_08B2F9D0;
    case 767u: goto L_08B2F9DC;
    case 768u: goto L_08B2F9E0;
    case 769u: goto L_08B2F9E4;
    case 770u: goto L_08B2F9F8;
    case 771u: goto L_08B2FA00;
    case 772u: goto L_08B2FA0C;
    case 773u: goto L_08B2FA24;
    case 774u: goto L_08B2FA30;
    case 775u: goto L_08B2FA80;
    case 776u: goto L_08B2FAA0;
    case 777u: goto L_08B2FAAC;
    case 778u: goto L_08B2FAB4;
    case 779u: goto L_08B2FABC;
    case 780u: goto L_08B2FAD8;
    case 781u: goto L_08B2FAF0;
    case 782u: goto L_08B2FB0C;
    case 783u: goto L_08B2FB2C;
    case 784u: goto L_08B2FB4C;
    case 785u: goto L_08B2FB68;
    case 786u: goto L_08B2FBE0;
    case 787u: goto L_08B2FC54;
    case 788u: goto L_08B2FC80;
    case 789u: goto L_08B2FC9C;
    case 790u: goto L_08B2FCA4;
    case 791u: goto L_08B2FCC0;
    case 792u: goto L_08B2FD70;
    case 793u: goto L_08B2FD98;
    case 794u: goto L_08B2FDA4;
    case 795u: goto L_08B2FDB0;
    case 796u: goto L_08B2FDC0;
    case 797u: goto L_08B2FDD0;
    case 798u: goto L_08B2FDE0;
    case 799u: goto L_08B2FDF0;
    case 800u: goto L_08B2FDFC;
    case 801u: goto L_08B2FE0C;
    case 802u: goto L_08B2FE28;
    case 803u: goto L_08B2FE60;
    case 804u: goto L_08B2FE70;
    case 805u: goto L_08B2FE7C;
    case 806u: goto L_08B2FEB0;
    case 807u: goto L_08B2FECC;
    case 808u: goto L_08B2FF1C;
    case 809u: goto L_08B2FF28;
    case 810u: goto L_08B2FF40;
    case 811u: goto L_08B2FF60;
    case 812u: goto L_08B2FF78;
    case 813u: goto L_08B2FF88;
    case 814u: goto L_08B2FF98;
    case 815u: goto L_08B2FFA4;
    case 816u: goto L_08B2FFB0;
    case 817u: goto L_08B2FFCC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B2C020:
    rt.unsupported(0x08B2C020u, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B2C028:
    rt.unsupported(0x08B2C02Cu, 0x52205349u, "control flow in delay slot"); return;
L_08B2C030:
    rt.unsupported(0x08B2C030u, 0x49454345u, "cop2/vfpu not lowered yet"); return;
L_08B2C03C:
    rt.unsupported(0x08B2C03Cu, 0x7373654Du, "unknown not lowered yet"); return;
L_08B2C088:
    rt.unsupported(0x08B2C088u, 0x7373654Du, "unknown not lowered yet"); return;
L_08B2C098:
    ctx.execute_vfpu_vcmp_ct<105u, 99u, 1u, 8u>();
    rt.unsupported(0x08B2C09Cu, 0x706D4965u, "unknown not lowered yet"); return;
L_08B2C0CC:
    rt.unsupported(0x08B2C0D0u, 0x5241434Eu, "control flow in delay slot"); return;
L_08B2C0D4:
    rt.unsupported(0x08B2C0D8u, 0x00005349u, "control flow in delay slot"); return;
L_08B2C0DC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B2C0E0u, 0x49484556u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 27u, 0x08B3D62Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2C0E4;
L_08B2C0E4:
    rt.unsupported(0x08B2C0E8u, 0x54414548u, "control flow in delay slot"); return;
L_08B2C0EC:
    rt.unsupported(0x08B2C0F0u, 0x5F47534Du, "control flow in delay slot"); return;
L_08B2C0F0:
    rt.unsupported(0x08B2C0F4u, 0x5F544553u, "control flow in delay slot"); return;
L_08B2C0F8:
    rt.unsupported(0x08B2C0F8u, 0x49484556u, "cop2/vfpu not lowered yet"); return;
L_08B2C104:
    rt.unsupported(0x08B2C104u, 0x4E4F4954u, "unknown not lowered yet"); return;
L_08B2C10C:
    rt.unsupported(0x08B2C10Cu, 0x49484556u, "cop2/vfpu not lowered yet"); return;
L_08B2C128:
    rt.unsupported(0x08B2C128u, 0x6E617254u, "vfpu3 not lowered yet"); return;
L_08B2C144:
    // nop
    goto L_08B2C148;
L_08B2C148:
    (void)(0u & 0u);
    goto L_08B2C14C;
L_08B2C14C:
    rt.unsupported(0x08B2C14Cu, 0x0064252Fu, "special? not lowered yet"); return;
L_08B2C150:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<115u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<37u, 1u>(vfpu_d); }
    ctx.gpr[14] = (0u | 0u);
    goto L_08B2C158;
L_08B2C158:
    ctx.gpr[26] = (ctx.gpr[9] + static_cast<std::uint32_t>(25637));
    rt.unsupported(0x08B2C15Cu, 0x00643230u, "special? not lowered yet"); return;
L_08B2C168:
    rt.unsupported(0x08B2C168u, 0x202E2E2Eu, "unknown not lowered yet"); return;
L_08B2C184:
    rt.unsupported(0x08B2C184u, 0x202E2E2Eu, "unknown not lowered yet"); return;
L_08B2C1A4:
    rt.unsupported(0x08B2C1A4u, 0x202E2E2Eu, "unknown not lowered yet"); return;
L_08B2C1C8:
    rt.unsupported(0x08B2C1C8u, 0x202E2E2Eu, "unknown not lowered yet"); return;
L_08B2C1DC:
    if (ctx.gpr[10] != ctx.gpr[17]) {
    rt.unsupported(0x08B2C1E0u, 0x20545345u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 28u, 0x08B3D728u>(ctx, &aot_mem); return;
    }
    goto L_08B2C1E4;
L_08B2C1E4:
    rt.unsupported(0x08B2C1E4u, 0x444E4148u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B2C1E8u, 0x2053454Cu, "unknown not lowered yet"); return;
L_08B2C1F4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<85u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    ctx.gpr[26] = (ctx.gpr[17] ^ 28001u);
    rt.unsupported(0x08B2C200u, 0x74696157u, "unknown not lowered yet"); return;
L_08B2C20C:
    rt.unsupported(0x08B2C20Cu, 0x20444D55u, "unknown not lowered yet"); return;
L_08B2C21C:
    rt.unsupported(0x08B2C21Cu, 0x63736964u, "vfpu0 not lowered yet"); return;
L_08B2C230:
    rt.unsupported(0x08B2C230u, 0x7830657Au, "unknown not lowered yet"); return;
L_08B2C23C:
    if (ctx.gpr[27] == ctx.gpr[4]) {
    rt.unsupported(0x08B2C240u, 0x61657274u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 39u, 0x08B47794u>(ctx, &aot_mem); return;
    }
    goto L_08B2C244;
L_08B2C244:
    ctx.execute_vfpu_vscl_ct<109u, 69u, 118u, 1u>();
    ctx.execute_vfpu_vcmp_ct<116u, 70u, 1u, 14u>();
    ctx.gpr[12] = (0u + 0u);
    goto L_08B2C250;
L_08B2C250:
    if (ctx.gpr[27] == ctx.gpr[4]) {
    rt.unsupported(0x08B2C254u, 0x61657274u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 40u, 0x08B477A8u>(ctx, &aot_mem); return;
    }
    goto L_08B2C258;
L_08B2C258:
    ctx.execute_vfpu_vminmax(109u, 83u, 101u, 1u, false);
    (void)(0u + 0u);
    goto L_08B2C260;
L_08B2C260:
    if (ctx.gpr[27] == ctx.gpr[4]) {
    rt.unsupported(0x08B2C264u, 0x61657274u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 41u, 0x08B477B8u>(ctx, &aot_mem); return;
    }
    goto L_08B2C268;
L_08B2C264:
    rt.unsupported(0x08B2C264u, 0x61657274u, "vfpu0 not lowered yet"); return;
L_08B2C268:
    rt.unsupported(0x08B2C268u, 0x7268546Du, "unknown not lowered yet"); return;
L_08B2C270:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<85u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    ctx.gpr[26] = (ctx.gpr[17] ^ 28001u);
    rt.unsupported(0x08B2C27Cu, 0x75716341u, "unknown not lowered yet"); return;
L_08B2C294:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<85u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_d); }
    goto L_08B2C298;
L_08B2C298:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    goto L_08B2C29C;
L_08B2C29C:
    ctx.gpr[26] = (ctx.gpr[17] ^ 28001u);
    ctx.execute_vfpu_vscl_ct<82u, 101u, 108u, 1u>();
    rt.unsupported(0x08B2C2A4u, 0x4C657361u, "unknown not lowered yet"); return;
L_08B2C2B8:
    rt.unsupported(0x08B2C2B8u, 0x202E2E2Eu, "unknown not lowered yet"); return;
L_08B2C2D0:
    ctx.execute_vfpu_vscl_ct<100u, 32u, 114u, 1u>();
    rt.unsupported(0x08B2C2D4u, 0x73657571u, "unknown not lowered yet"); return;
L_08B2C2E0:
    if (ctx.gpr[25] != 0u) {
    rt.unsupported(0x08B2C2E4u, 0x49544941u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 469u, 0x08B36B8Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2C2E8;
L_08B2C2E8:
    rt.unsupported(0x08B2C2E8u, 0x203A474Eu, "unknown not lowered yet"); return;
L_08B2C2F4:
    rt.unsupported(0x08B2C2F4u, 0x63736964u, "vfpu0 not lowered yet"); return;
L_08B2C300:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B2C304u, 0x44525355u, "unsupported CFC1 control register"); return;
    goto L_08B2C308;
L_08B2C308:
    rt.unsupported(0x08B2C308u, 0x412F5249u, "unknown not lowered yet"); return;
L_08B2C318:
    if (ctx.gpr[18] == ctx.gpr[3]) {
    ctx.gpr[25] = (ctx.gpr[18] | 23105u);
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 1u, 0x08B38030u>(ctx, &aot_mem); return;
    }
    goto L_08B2C320;
L_08B2C320:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B2C324u, 0x00000033u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 598u, 0x08B37C08u>(ctx, &aot_mem); return;
    }
    goto L_08B2C328;
L_08B2C328:
    rt.unsupported(0x08B2C328u, 0x43202A2Au, "unknown not lowered yet"); return;
L_08B2C338:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[11]) < 9512 ? 1u : 0u);
    if (0u == 0u) (void)(0u);
    goto L_08B2C340;
L_08B2C340:
    rt.unsupported(0x08B2C340u, 0x202E2E2Eu, "unknown not lowered yet"); return;
L_08B2C360:
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) > static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[3] : ctx.gpr[14]);
    goto L_08B2C364;
L_08B2C364:
    rt.unsupported(0x08B2C364u, 0x00627573u, "special? not lowered yet"); return;
L_08B2C368:
    ctx.execute_vfpu_vscl_ct<108u, 111u, 119u, 1u>();
    goto L_08B2C36C;
L_08B2C36C:
    rt.unsupported(0x08B2C36Cu, 0x00000072u, "special? not lowered yet"); return;
L_08B2C370:
    ctx.execute_vfpu_vscl_ct<117u, 112u, 112u, 1u>();
    rt.unsupported(0x08B2C374u, 0x00000072u, "special? not lowered yet"); return;
L_08B2C378:
    rt.unsupported(0x08B2C378u, 0x72616863u, "unknown not lowered yet"); return;
L_08B2C380:
    rt.unsupported(0x08B2C380u, 0x00706572u, "special? not lowered yet"); return;
L_08B2C384:
    ctx.execute_vfpu_vscl_ct<98u, 121u, 116u, 1u>();
    // nop
    goto L_08B2C38C;
L_08B2C38C:
    ctx.execute_vfpu_vminmax(102u, 111u, 114u, 1u, false);
    ctx.gpr[14] = (0u + 0u);
    goto L_08B2C394;
L_08B2C394:
    rt.unsupported(0x08B2C394u, 0x706D7564u, "unknown not lowered yet"); return;
L_08B2C39C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<102u, 1u>(vfpu_d); }
    // nop
    goto L_08B2C3A4;
L_08B2C3A4:
    rt.unsupported(0x08B2C3A4u, 0x6E696667u, "vfpu3 not lowered yet"); return;
L_08B2C3AC:
    rt.unsupported(0x08B2C3ACu, 0x62757367u, "vfpu0 not lowered yet"); return;
L_08B2C3B4:
    // nop
    goto L_08B2C3B8;
L_08B2C3B8:
    rt.unsupported(0x08B2C3B8u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B2C3C8:
    rt.unsupported(0x08B2C3C8u, 0x62616E75u, "vfpu0 not lowered yet"); return;
L_08B2C3E8:
    rt.unsupported(0x08B2C3E8u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B2C400:
    rt.unsupported(0x08B2C400u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B2C404:
    rt.unsupported(0x08B2C404u, 0x2064696Cu, "unknown not lowered yet"); return;
L_08B2C418:
    ctx.execute_vfpu_vhdp(109u, 97u, 108u, 1u);
    ctx.execute_vfpu_vscl_ct<111u, 114u, 109u, 1u>();
    rt.unsupported(0x08B2C420u, 0x61702064u, "vfpu0 not lowered yet"); return;
L_08B2C430:
    rt.unsupported(0x08B2C430u, 0x68746977u, "unknown not lowered yet"); return;
L_08B2C434:
    ctx.gpr[5] = (ctx.gpr[25] + static_cast<std::uint32_t>(24608));
    rt.unsupported(0x08B2C438u, 0x00000029u, "special? not lowered yet"); return;
L_08B2C43C:
    ctx.execute_vfpu_vhdp(109u, 97u, 108u, 1u);
    ctx.execute_vfpu_vscl_ct<111u, 114u, 109u, 1u>();
    rt.unsupported(0x08B2C444u, 0x61702064u, "vfpu0 not lowered yet"); return;
L_08B2C45C:
    rt.unsupported(0x08B2C45Cu, 0x61626E75u, "vfpu0 not lowered yet"); return;
L_08B2C46C:
    rt.unsupported(0x08B2C46Cu, 0x00006E72u, "special? not lowered yet"); return;
L_08B2C470:
    rt.unsupported(0x08B2C470u, 0x206F6F74u, "unknown not lowered yet"); return;
L_08B2C484:
    rt.unsupported(0x08B2C484u, 0x69666E75u, "unknown not lowered yet"); return;
L_08B2C498:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[25]) < 9310 ? 1u : 0u);
    if (static_cast<std::int32_t>(ctx.gpr[25]) <= 0) {
    ctx.gpr[5] = (0u | 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 633u, 0x08B37D9Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2C4A4;
L_08B2C4A4:
    rt.unsupported(0x08B2C4A4u, 0x69727473u, "unknown not lowered yet"); return;
L_08B2C4C0:
    ctx.gpr[16] = (ctx.gpr[1] & 12380u);
    // nop
    goto L_08B2C4C8;
L_08B2C4C8:
    rt.unsupported(0x08B2C4C8u, 0x23202B2Du, "unknown not lowered yet"); return;
L_08B2C4D0:
    rt.unsupported(0x08B2C4D0u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B2C500:
    rt.unsupported(0x08B2C500u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B2C51C:
    rt.unsupported(0x08B2C51Cu, 0x69727473u, "unknown not lowered yet"); return;
L_08B2C524:
    rt.unsupported(0x08B2C524u, 0x7373696Du, "unknown not lowered yet"); return;
L_08B2C548:
    ctx.execute_vfpu_compare3(111u, 98u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<108u, 101u, 116u, 1u>();
    rt.unsupported(0x08B2C550u, 0x74706F20u, "unknown not lowered yet"); return;
L_08B2C56C:
    rt.unsupported(0x08B2C56Cu, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B2C600:
    rt.unsupported(0x08B2C604u, 0x08ACCA38u, "control flow in delay slot"); return;
L_08B2C62C:
    rt.unsupported(0x08B2C630u, 0x08ACCA38u, "control flow in delay slot"); return;
L_08B2C630:
    rt.unsupported(0x08B2C634u, 0x08ACCA38u, "control flow in delay slot"); return;
L_08B2C728:
    rt.unsupported(0x08B2C72Cu, 0x08ACCCE4u, "control flow in delay slot"); return;
L_08B2C72C:
    rt.unsupported(0x08B2C730u, 0x08ACCCE4u, "control flow in delay slot"); return;
L_08B2C754:
    rt.unsupported(0x08B2C758u, 0x08ACCCE4u, "control flow in delay slot"); return;
L_08B2C78C:
    rt.unsupported(0x08B2C790u, 0x08ACCCE4u, "control flow in delay slot"); return;
L_08B2C7A0:
    rt.unsupported(0x08B2C7A4u, 0x08ACCCE4u, "control flow in delay slot"); return;
L_08B2C7BC:
    rt.unsupported(0x08B2C7C0u, 0x50706F43u, "control flow in delay slot"); return;
L_08B2C7C0:
    if (ctx.gpr[3] == ctx.gpr[16]) {
    rt.unsupported(0x08B2C7C4u, 0x75737275u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 2u, 0x08B484D0u>(ctx, &aot_mem); return;
    }
    goto L_08B2C7C8;
L_08B2C7C8:
    rt.unsupported(0x08B2C7C8u, 0x74207469u, "unknown not lowered yet"); return;
L_08B2C7E8:
    if (ctx.gpr[3] == ctx.gpr[16]) {
    rt.unsupported(0x08B2C7ECu, 0x75737275u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 3u, 0x08B484F8u>(ctx, &aot_mem); return;
    }
    goto L_08B2C7F0;
L_08B2C7F0:
    rt.unsupported(0x08B2C7F0u, 0x70207469u, "unknown not lowered yet"); return;
L_08B2C820:
    ctx.execute_vfpu_vscl_ct<85u, 110u, 100u, 1u>();
    ctx.execute_vfpu_vscl_ct<102u, 105u, 110u, 1u>();
    rt.unsupported(0x08B2C828u, 0x72632064u, "unknown not lowered yet"); return;
L_08B2C860:
    rt.unsupported(0x08B2C864u, 0x08ACD550u, "control flow in delay slot"); return;
L_08B2C8E0:
    rt.unsupported(0x08B2C8E0u, 0x74736F48u, "unknown not lowered yet"); return;
L_08B2C8EC:
    if (ctx.gpr[3] == ctx.gpr[7]) {
    rt.unsupported(0x08B2C8F0u, 0x746E6972u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 15u, 0x08B45200u>(ctx, &aot_mem); return;
    }
    goto L_08B2C8F4;
L_08B2C8F4:
    rt.unsupported(0x08B2C8F4u, 0x4F6C6C41u, "unknown not lowered yet"); return;
L_08B2C900:
    rt.unsupported(0x08B2C900u, 0x76726553u, "unknown not lowered yet"); return;
L_08B2C90C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<115u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<65u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<73u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2C910u, 0x43636F68u, "unknown not lowered yet"); return;
L_08B2C920:
    ctx.execute_vfpu_vscl_ct<73u, 115u, 83u, 1u>();
    rt.unsupported(0x08B2C924u, 0x72657672u, "unknown not lowered yet"); return;
L_08B2C92C:
    rt.unsupported(0x08B2C92Cu, 0x67726154u, "vfpu1 not lowered yet"); return;
L_08B2C93C:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08B2C944u, 0x00007055u, "special? not lowered yet"); return;
L_08B2C948:
    rt.unsupported(0x08B2C948u, 0x47746547u, "cop1? not lowered yet"); return;
L_08B2C954:
    ctx.gpr[14] = (0u & 0u);
    goto L_08B2C958;
L_08B2C958:
    rt.unsupported(0x08B2C958u, 0x61647055u, "vfpu0 not lowered yet"); return;
L_08B2C968:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08B2C970u, 0x756E694Du, "unknown not lowered yet"); return;
L_08B2C978:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    ctx.execute_vfpu_compare3(83u, 101u, 99u, 1u, 6u);
    rt.unsupported(0x08B2C984u, 0x0073646Eu, "special? not lowered yet"); return;
L_08B2C988:
    rt.unsupported(0x08B2C988u, 0x47746553u, "cop1? not lowered yet"); return;
L_08B2C994:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<84u, 121u, 112u, 1u>();
    // nop
    goto L_08B2C9A0;
L_08B2C9A0:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    rt.unsupported(0x08B2C9A4u, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08B2C9B0:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    rt.unsupported(0x08B2C9B4u, 0x726F6353u, "unknown not lowered yet"); return;
L_08B2C9C0:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08B2C9C8u, 0x696D694Cu, "unknown not lowered yet"); return;
L_08B2C9D0:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    rt.unsupported(0x08B2C9D4u, 0x70616C45u, "unknown not lowered yet"); return;
L_08B2C9E0:
    ctx.execute_vfpu_vscl_ct<73u, 115u, 84u, 1u>();
    rt.unsupported(0x08B2C9E4u, 0x61476D61u, "vfpu0 not lowered yet"); return;
L_08B2C9EC:
    if (ctx.gpr[3] == ctx.gpr[5]) {
    rt.unsupported(0x08B2C9F0u, 0x7265776Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 83u, 0x08B49744u>(ctx, &aot_mem); return;
    }
    goto L_08B2C9F4;
L_08B2C9F4:
    rt.unsupported(0x08B2C9F4u, 0x00737075u, "special? not lowered yet"); return;
L_08B2C9F8:
    rt.unsupported(0x08B2C9FCu, 0x50656361u, "control flow in delay slot"); return;
L_08B2CA00:
    rt.unsupported(0x08B2CA00u, 0x7265776Fu, "unknown not lowered yet"); return;
L_08B2CA08:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    ctx.execute_vfpu_vscl_ct<82u, 101u, 118u, 1u>();
    rt.unsupported(0x08B2CA10u, 0x00657372u, "special? not lowered yet"); return;
L_08B2CA14:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    jump_target = 0u;
    ctx.gpr[12] = (0x08B2CA20u);
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B2CA20u) goto L_08B2CA20;
    return;
L_08B2CA1C:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    goto L_08B2CA20;
L_08B2CA20:
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 5u));
    goto L_08B2CA24;
L_08B2CA24:
    rt.unsupported(0x08B2CA24u, 0x6B6E6154u, "unknown not lowered yet"); return;
L_08B2CA30:
    rt.unsupported(0x08B2CA30u, 0x75466F4Eu, "unknown not lowered yet"); return;
L_08B2CA44:
    ctx.execute_vfpu_vminmax(84u, 101u, 97u, 1u, false);
    ctx.execute_vfpu_compare3(67u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B2CA4Cu, 0x00007275u, "special? not lowered yet"); return;
L_08B2CA50:
    ctx.execute_vfpu_compare3(67u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B2CA54u, 0x00007275u, "special? not lowered yet"); return;
L_08B2CA58:
    ctx.execute_vfpu_vminmax(84u, 101u, 97u, 1u, false);
    ctx.execute_vfpu_vscl_ct<78u, 97u, 109u, 1u>();
    // nop
    goto L_08B2CA64;
L_08B2CA64:
    rt.unsupported(0x08B2CA64u, 0x47646E45u, "cop1? not lowered yet"); return;
L_08B2CA6C:
    rt.unsupported(0x08B2CA6Cu, 0x72617453u, "unknown not lowered yet"); return;
L_08B2CA78:
    ctx.execute_vfpu_vscl_ct<68u, 101u, 102u, 1u>();
    rt.unsupported(0x08B2CA7Cu, 0x6E69646Eu, "vfpu3 not lowered yet"); return;
L_08B2CA88:
    rt.unsupported(0x08B2CA88u, 0x776F6853u, "unknown not lowered yet"); return;
L_08B2CA9C:
    rt.unsupported(0x08B2CA9Cu, 0x4D74654Eu, "unknown not lowered yet"); return;
L_08B2CAAC:
    rt.unsupported(0x08B2CAACu, 0x4D74654Eu, "unknown not lowered yet"); return;
L_08B2CABC:
    if (ctx.gpr[3] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<97u, 99u, 107u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 21u, 0x08B45FF8u>(ctx, &aot_mem); return;
    }
    goto L_08B2CAC4;
L_08B2CAC4:
    rt.unsupported(0x08B2CAC4u, 0x736F4C74u, "unknown not lowered yet"); return;
L_08B2CACC:
    rt.unsupported(0x08B2CACCu, 0x746C754Du, "unknown not lowered yet"); return;
L_08B2CAD8:
    rt.unsupported(0x08B2CAD8u, 0x74696157u, "unknown not lowered yet"); return;
L_08B2CAE0:
    rt.unsupported(0x08B2CAE0u, 0x74696157u, "unknown not lowered yet"); return;
L_08B2CAEC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<70u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2CAF0u, 0x756F7247u, "unknown not lowered yet"); return;
L_08B2CB04:
    if (ctx.gpr[27] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<99u, 101u, 110u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 95u, 0x08B4A014u>(ctx, &aot_mem); return;
    }
    goto L_08B2CB0C;
L_08B2CB0C:
    rt.unsupported(0x08B2CB0Cu, 0x79616C50u, "unknown not lowered yet"); return;
L_08B2CB14:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<82u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2CB18u, 0x61507265u, "vfpu0 not lowered yet"); return;
L_08B2CB24:
    rt.unsupported(0x08B2CB24u, 0x7574536Eu, "unknown not lowered yet"); return;
L_08B2CB2C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<82u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2CB30u, 0x61507265u, "vfpu0 not lowered yet"); return;
L_08B2CB3C:
    rt.unsupported(0x08B2CB3Cu, 0x7574536Eu, "unknown not lowered yet"); return;
L_08B2CB48:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<82u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2CB4Cu, 0x75487265u, "unknown not lowered yet"); return;
L_08B2CB58:
    if (ctx.gpr[3] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<97u, 117u, 115u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 22u, 0x08B460A8u>(ctx, &aot_mem); return;
    }
    goto L_08B2CB60;
L_08B2CB60:
    ctx.execute_vfpu_vscl_ct<83u, 99u, 114u, 1u>();
    ctx.execute_vfpu_vscl_ct<101u, 110u, 83u, 1u>();
    rt.unsupported(0x08B2CB68u, 0x7463656Cu, "unknown not lowered yet"); return;
L_08B2CB70:
    rt.unsupported(0x08B2CB70u, 0x776F6853u, "unknown not lowered yet"); return;
L_08B2CB7C:
    rt.unsupported(0x08B2CB7Cu, 0x45746547u, "cop1? not lowered yet"); return;
L_08B2CB94:
    rt.unsupported(0x08B2CB94u, 0x00007372u, "special? not lowered yet"); return;
L_08B2CB98:
    ctx.execute_vfpu_vminmax(84u, 101u, 97u, 1u, false);
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    rt.unsupported(0x08B2CBA0u, 0x72657645u, "unknown not lowered yet"); return;
L_08B2CBAC:
    if (ctx.gpr[3] == ctx.gpr[19]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 10u, 0x08B450D0u>(ctx, &aot_mem); return;
    }
    goto L_08B2CBB4;
L_08B2CBB0:
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
    goto L_08B2CBB4;
L_08B2CBB4:
    rt.unsupported(0x08B2CBB4u, 0x746E4572u, "unknown not lowered yet"); return;
L_08B2CBC4:
    if (ctx.gpr[27] == ctx.gpr[5]) {
    rt.unsupported(0x08B2CBC8u, 0x72657075u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 89u, 0x08B4991Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2CBCC;
L_08B2CBCC:
    rt.unsupported(0x08B2CBCCu, 0x6B617242u, "unknown not lowered yet"); return;
L_08B2CBD8:
    // nop
    goto L_08B2CBDC;
L_08B2CBDC:
    rt.unsupported(0x08B2CBDCu, 0x636E7953u, "vfpu0 not lowered yet"); return;
L_08B2CBE8:
    // nop
    goto L_08B2CBEC;
L_08B2CBEC:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.execute_vfpu_vcmp_ct<32u, 80u, 1u, 10u>();
    rt.unsupported(0x08B2CBF4u, 0x72657961u, "unknown not lowered yet"); return;
L_08B2CC18:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    goto L_08B2CC1C;
L_08B2CC1C:
    rt.unsupported(0x08B2CC1Cu, 0x7543202Au, "unknown not lowered yet"); return;
L_08B2CC2C:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08B2CC30u, 0x74754F20u, "unknown not lowered yet"); return;
L_08B2CC3C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<83u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2CC40u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2CC54:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.execute_vfpu_vscl_ct<42u, 32u, 80u, 1u>();
    rt.unsupported(0x08B2CC5Cu, 0x20737265u, "unknown not lowered yet"); return;
L_08B2CC7C:
    rt.unsupported(0x08B2CC7Cu, 0x72656550u, "unknown not lowered yet"); return;
L_08B2CC88:
    ctx.execute_vfpu_compare3(95u, 95u, 109u, 1u, 6u);
    ctx.gpr[12] = (0u & 0u);
    goto L_08B2CC90;
L_08B2CC90:
    (void)(0u < 0u ? 1u : 0u);
    goto L_08B2CC94;
L_08B2CC94:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B2CCA0u, 0x54454D41u, "control flow in delay slot"); return;
L_08B2CCA4:
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[18]) < 21061 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[1] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    goto L_08B2CCB4;
L_08B2CCB4:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    rt.unsupported(0x08B2CCB8u, 0x70795420u, "unknown not lowered yet"); return;
L_08B2CCC4:
    rt.unsupported(0x08B2CCC4u, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08B2CCD4:
    rt.unsupported(0x08B2CCD4u, 0x726F6353u, "unknown not lowered yet"); return;
L_08B2CCE4:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08B2CCE8u, 0x696D694Cu, "unknown not lowered yet"); return;
L_08B2CCF4:
    ctx.execute_vfpu_vminmax(84u, 101u, 97u, 1u, false);
    ctx.execute_vfpu_vminmax(32u, 71u, 97u, 1u, false);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(14949));
    ctx.gpr[1] = (0u & 0u);
    goto L_08B2CD04;
L_08B2CD04:
    ctx.execute_vfpu_vscl_ct<80u, 111u, 119u, 1u>();
    rt.unsupported(0x08B2CD08u, 0x20707572u, "unknown not lowered yet"); return;
L_08B2CD14:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    ctx.execute_vfpu_vscl_ct<80u, 111u, 119u, 1u>();
    ctx.gpr[16] = (ctx.gpr[19] ^ 30066u);
    // nop
    ctx.pc = 0x09909424u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B2CD28:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    rt.unsupported(0x08B2CD2Cu, 0x76655220u, "unknown not lowered yet"); return;
L_08B2CD38:
    rt.unsupported(0x08B2CD38u, 0x69626D41u, "unknown not lowered yet"); return;
L_08B2CD50:
    rt.unsupported(0x08B2CD50u, 0x69626D41u, "unknown not lowered yet"); return;
L_08B2CD68:
    rt.unsupported(0x08B2CD68u, 0x70696B53u, "unknown not lowered yet"); return;
L_08B2CD7C:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[1] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    goto L_08B2CD9C;
L_08B2CD9C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B2CDA0u, 0x44414552u, "unsupported CFC1 control register"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 15u, 0x08B41AD4u>(ctx, &aot_mem); return;
    }
    goto L_08B2CDA4;
L_08B2CDA4:
    rt.unsupported(0x08B2CDA8u, 0x53545543u, "control flow in delay slot"); return;
L_08B2CDAC:
    rt.unsupported(0x08B2CDACu, 0x454E4543u, "cop1? not lowered yet"); return;
L_08B2CDB8:
    rt.unsupported(0x08B2CDB8u, 0x43534944u, "unknown not lowered yet"); return;
L_08B2CDC4:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B2CDC8u, 0x44525355u, "unsupported CFC1 control register"); return;
    jump_target = ctx.gpr[1];
    ctx.gpr[10] = (0x08B2CDD4u);
    rt.unsupported(0x08B2CDD0u, 0x72746E65u, "unknown not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B2CDD4u) goto L_08B2CDD4;
    return;
L_08B2CDD0:
    rt.unsupported(0x08B2CDD0u, 0x72746E65u, "unknown not lowered yet"); return;
L_08B2CDD4:
    ctx.gpr[19] = (ctx.gpr[19] < static_cast<std::uint32_t>(25961) ? 1u : 0u);
    ctx.gpr[12] = (ctx.gpr[3] & ctx.gpr[20]);
    goto L_08B2CDDC;
L_08B2CDDC:
    rt.unsupported(0x08B2CDDCu, 0x00000072u, "special? not lowered yet"); return;
L_08B2CDE0:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B2CDE4u, 0x74206465u, "unknown not lowered yet"); return;
L_08B2CDF8:
    rt.unsupported(0x08B2CDF8u, 0x00736569u, "special? not lowered yet"); return;
L_08B2CDFC:
    ctx.execute_vfpu_vminmax(99u, 111u, 109u, 1u, false);
    ctx.execute_vfpu_vscl_ct<105u, 116u, 116u, 1u>();
    goto L_08B2CE04;
L_08B2CE04:
    ctx.execute_vfpu_vscl_ct<100u, 45u, 114u, 1u>();
    rt.unsupported(0x08B2CE08u, 0x00000076u, "special? not lowered yet"); return;
L_08B2CE0C:
    rt.unsupported(0x08B2CE0Cu, 0x4E524157u, "unknown not lowered yet"); return;
L_08B2CE14:
    rt.unsupported(0x08B2CE14u, 0x44564420u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B2CE18u, 0x20534920u, "unknown not lowered yet"); return;
L_08B2CE20:
    rt.unsupported(0x08B2CE20u, 0x4420464Fu, "cop1? not lowered yet"); return;
L_08B2CE34:
    rt.unsupported(0x08B2CE34u, 0x69642021u, "unknown not lowered yet"); return;
L_08B2CE50:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 122u, 1u>();
    rt.unsupported(0x08B2CE54u, 0x20666F20u, "unknown not lowered yet"); return;
L_08B2CE64:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 122u, 1u>();
    rt.unsupported(0x08B2CE68u, 0x20666F20u, "unknown not lowered yet"); return;
L_08B2CE7C:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 122u, 1u>();
    rt.unsupported(0x08B2CE80u, 0x20666F20u, "unknown not lowered yet"); return;
L_08B2CE90:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 122u, 1u>();
    rt.unsupported(0x08B2CE94u, 0x20666F20u, "unknown not lowered yet"); return;
L_08B2CEA8:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 122u, 1u>();
    rt.unsupported(0x08B2CEACu, 0x20666F20u, "unknown not lowered yet"); return;
L_08B2CEBC:
    rt.unsupported(0x08B2CEBCu, 0x41454353u, "unknown not lowered yet"); return;
L_08B2CEC8:
    rt.unsupported(0x08B2CEC8u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B2CEE4:
    rt.unsupported(0x08B2CEE4u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B2CF08:
    rt.unsupported(0x08B2CF08u, 0x6E696552u, "vfpu3 not lowered yet"); return;
L_08B2CF30:
    rt.unsupported(0x08B2CF30u, 0x6E696552u, "vfpu3 not lowered yet"); return;
L_08B2CF5C:
    rt.unsupported(0x08B2CF5Cu, 0x21212121u, "unknown not lowered yet"); return;
L_08B2CF74:
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.execute_vfpu_vcmp_ct<77u, 117u, 1u, 0u>();
    ctx.execute_vfpu_vcmp_ct<105u, 112u, 1u, 4u>();
    rt.unsupported(0x08B2CF98u, 0x72657961u, "unknown not lowered yet"); return;
L_08B2CFB4:
    ctx.execute_vfpu_vscl_ct<117u, 114u, 114u, 1u>();
    ctx.gpr[1] = (0u & 0u);
    goto L_08B2CFBC;
L_08B2CFBC:
    ctx.execute_vfpu_compare3(65u, 100u, 104u, 1u, 6u);
    rt.unsupported(0x08B2CFC0u, 0x6E6F4363u, "vfpu3 not lowered yet"); return;
L_08B2CFDC:
    rt.unsupported(0x08B2CFDCu, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B2CFE4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2CFE8u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2CFF8:
    rt.unsupported(0x08B2CFF8u, 0x75746553u, "unknown not lowered yet"); return;
L_08B2D010:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D014u, 0x00306373u, "special? not lowered yet"); return;
L_08B2D018:
    rt.unsupported(0x08B2D018u, 0x75746553u, "unknown not lowered yet"); return;
L_08B2D028:
    rt.unsupported(0x08B2D028u, 0x75746553u, "unknown not lowered yet"); return;
L_08B2D040:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D044u, 0x72637320u, "unknown not lowered yet"); return;
L_08B2D050:
    rt.unsupported(0x08B2D050u, 0x69736F50u, "unknown not lowered yet"); return;
L_08B2D06C:
    rt.unsupported(0x08B2D06Cu, 0x74696E49u, "unknown not lowered yet"); return;
L_08B2D088:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D08Cu, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2D094:
    rt.unsupported(0x08B2D094u, 0x72617453u, "unknown not lowered yet"); return;
L_08B2D0A4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D0A8u, 0x00316373u, "special? not lowered yet"); return;
L_08B2D0AC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D0B0u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2D0B8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<32u, 115u, 99u, 1u>();
    rt.unsupported(0x08B2D0C0u, 0x0000656Eu, "special? not lowered yet"); return;
L_08B2D0C4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D0C8u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2D0D0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D0D4u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2D0DC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D0E0u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2D0E8:
    rt.unsupported(0x08B2D0E8u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B2D0F0:
    ctx.execute_vfpu_compare3(65u, 100u, 104u, 1u, 6u);
    ctx.execute_vfpu_compare3(99u, 32u, 67u, 1u, 6u);
    rt.unsupported(0x08B2D0F8u, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08B2D114:
    rt.unsupported(0x08B2D114u, 0x206D754Eu, "unknown not lowered yet"); return;
L_08B2D138:
    rt.unsupported(0x08B2D138u, 0x72656854u, "unknown not lowered yet"); return;
L_08B2D16C:
    rt.unsupported(0x08B2D16Cu, 0x746C754Du, "unknown not lowered yet"); return;
L_08B2D180:
    rt.unsupported(0x08B2D180u, 0x706F202Eu, "unknown not lowered yet"); return;
L_08B2D190:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B2D194u, 0x754D202Au, "unknown not lowered yet"); return;
L_08B2D1A0:
    ctx.execute_vfpu_vscl_ct<116u, 105u, 109u, 1u>();
    rt.unsupported(0x08B2D1A4u, 0x2074756Fu, "unknown not lowered yet"); return;
L_08B2D1B8:
    if (ctx.gpr[2] != ctx.gpr[12]) {
    rt.unsupported(0x08B2D1BCu, 0x41472049u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 93u, 0x08B426F0u>(ctx, &aot_mem); return;
    }
    goto L_08B2D1C0;
L_08B2D1C0:
    rt.unsupported(0x08B2D1C0u, 0x0000454Du, "special? not lowered yet"); return;
L_08B2D1C4:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B2D1C8u, 0x74206465u, "unknown not lowered yet"); return;
L_08B2D1E4:
    rt.unsupported(0x08B2D1E4u, 0x746C754Du, "unknown not lowered yet"); return;
L_08B2D1EC:
    ctx.execute_vfpu_compare3(101u, 32u, 110u, 1u, 6u);
    ctx.execute_vfpu_compare3(116u, 32u, 99u, 1u, 6u);
    rt.unsupported(0x08B2D1F4u, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08B2D20C:
    rt.unsupported(0x08B2D20Cu, 0x00000A74u, "special? not lowered yet"); return;
L_08B2D210:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D214u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2D224:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D228u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2D22C:
    rt.unsupported(0x08B2D22Cu, 0x67617473u, "vfpu1 not lowered yet"); return;
L_08B2D238:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D23Cu, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2D24C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D250u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2D25C:
    // nop
    goto L_08B2D260;
L_08B2D260:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D264u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2D280:
    rt.unsupported(0x08B2D280u, 0x72614343u, "unknown not lowered yet"); return;
L_08B2D2E0:
    rt.unsupported(0x08B2D2E0u, 0x41454843u, "unknown not lowered yet"); return;
L_08B2D2E8:
    rt.unsupported(0x08B2D2E8u, 0x41454843u, "unknown not lowered yet"); return;
L_08B2D2F0:
    rt.unsupported(0x08B2D2F0u, 0x41454843u, "unknown not lowered yet"); return;
L_08B2D2F8:
    rt.unsupported(0x08B2D2F8u, 0x41454843u, "unknown not lowered yet"); return;
L_08B2D300:
    rt.unsupported(0x08B2D300u, 0x41454843u, "unknown not lowered yet"); return;
L_08B2D308:
    rt.unsupported(0x08B2D308u, 0x61656863u, "vfpu0 not lowered yet"); return;
L_08B2D30C:
    rt.unsupported(0x08B2D30Cu, 0x61657774u, "vfpu0 not lowered yet"); return;
L_08B2D318:
    rt.unsupported(0x08B2D318u, 0x61656863u, "vfpu0 not lowered yet"); return;
L_08B2D324:
    rt.unsupported(0x08B2D324u, 0x61656863u, "vfpu0 not lowered yet"); return;
L_08B2D330:
    rt.unsupported(0x08B2D330u, 0x61656863u, "vfpu0 not lowered yet"); return;
L_08B2D33C:
    rt.unsupported(0x08B2D33Cu, 0x61656863u, "vfpu0 not lowered yet"); return;
L_08B2D348:
    rt.unsupported(0x08B2D348u, 0x61656863u, "vfpu0 not lowered yet"); return;
L_08B2D360:
    ctx.execute_vfpu_vscl_ct<99u, 77u, 112u, 1u>();
    rt.unsupported(0x08B2D364u, 0x616C5067u, "vfpu0 not lowered yet"); return;
L_08B2D374:
    rt.unsupported(0x08B2D374u, 0x444F4D4Bu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B2D378u, 0x4449562Fu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B2D37Cu, 0x4F434F45u, "unknown not lowered yet"); return;
L_08B2D388:
    rt.unsupported(0x08B2D388u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D3B4:
    rt.unsupported(0x08B2D3B4u, 0x444F4D4Bu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B2D3B8u, 0x45504D2Fu, "cop1? not lowered yet"); return;
L_08B2D3C4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B2D3C8;
L_08B2D3C8:
    rt.unsupported(0x08B2D3C8u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D3F0:
    ctx.gpr[4] = (ctx.gpr[26] < static_cast<std::uint32_t>(20301) ? 1u : 0u);
    rt.unsupported(0x08B2D3F4u, 0x4745504Du, "cop1? not lowered yet"); return;
L_08B2D400:
    rt.unsupported(0x08B2D400u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D424:
    rt.unsupported(0x08B2D424u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D448:
    rt.unsupported(0x08B2D448u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D450:
    rt.unsupported(0x08B2D450u, 0x20726F72u, "unknown not lowered yet"); return;
L_08B2D458:
    ctx.execute_vfpu_vscl_ct<101u, 77u, 112u, 1u>();
    rt.unsupported(0x08B2D45Cu, 0x6E695267u, "vfpu3 not lowered yet"); return;
L_08B2D46C:
    if (ctx.gpr[27] == ctx.gpr[13]) {
    rt.unsupported(0x08B2D470u, 0x20657A69u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 26u, 0x08B469A4u>(ctx, &aot_mem); return;
    }
    goto L_08B2D474;
L_08B2D474:
    rt.unsupported(0x08B2D474u, 0x78257830u, "unknown not lowered yet"); return;
L_08B2D47C:
    rt.unsupported(0x08B2D47Cu, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D4A4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<110u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D4A8u, 0x20642520u, "unknown not lowered yet"); return;
L_08B2D4B8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<110u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D4BCu, 0x20642520u, "unknown not lowered yet"); return;
L_08B2D4CC:
    rt.unsupported(0x08B2D4CCu, 0x4F525245u, "unknown not lowered yet"); return;
L_08B2D4FC:
    rt.unsupported(0x08B2D4FCu, 0x4F525245u, "unknown not lowered yet"); return;
L_08B2D528:
    rt.unsupported(0x08B2D528u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D55C:
    rt.unsupported(0x08B2D55Cu, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D580:
    rt.unsupported(0x08B2D580u, 0x4F4D454Du, "unknown not lowered yet"); return;
L_08B2D590:
    ctx.execute_vfpu_vscl_ct<99u, 77u, 112u, 1u>();
    rt.unsupported(0x08B2D594u, 0x616C5067u, "vfpu0 not lowered yet"); return;
L_08B2D5A8:
    rt.unsupported(0x08B2D5A8u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D5CC:
    rt.unsupported(0x08B2D5CCu, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D5F8:
    rt.unsupported(0x08B2D5F8u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D614:
    ctx.execute_vfpu_vminmax(114u, 101u, 97u, 1u, false);
    ctx.execute_vfpu_vscl_ct<83u, 105u, 122u, 1u>();
    rt.unsupported(0x08B2D61Cu, 0x000A2928u, "special? not lowered yet"); return;
L_08B2D620:
    rt.unsupported(0x08B2D620u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D640:
    ctx.execute_vfpu_vscl_ct<99u, 77u, 112u, 1u>();
    rt.unsupported(0x08B2D644u, 0x616C5067u, "vfpu0 not lowered yet"); return;
L_08B2D658:
    rt.unsupported(0x08B2D658u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D678:
    rt.unsupported(0x08B2D678u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D698:
    rt.unsupported(0x08B2D698u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D6AC:
    rt.unsupported(0x08B2D6ACu, 0x72656461u, "unknown not lowered yet"); return;
L_08B2D6B4:
    rt.unsupported(0x08B2D6B4u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D6D4:
    rt.unsupported(0x08B2D6D4u, 0x2029286Du, "unknown not lowered yet"); return;
L_08B2D6E0:
    rt.unsupported(0x08B2D6E0u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D700:
    rt.unsupported(0x08B2D700u, 0x2029286Du, "unknown not lowered yet"); return;
L_08B2D70C:
    rt.unsupported(0x08B2D70Cu, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D714:
    rt.unsupported(0x08B2D714u, 0x20726F72u, "unknown not lowered yet"); return;
L_08B2D734:
    rt.unsupported(0x08B2D734u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D758:
    ctx.gpr[15] = (0u | ctx.gpr[10]);
    goto L_08B2D75C;
L_08B2D75C:
    rt.unsupported(0x08B2D75Cu, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D788:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<110u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D78Cu, 0x20642520u, "unknown not lowered yet"); return;
L_08B2D79C:
    rt.unsupported(0x08B2D79Cu, 0x4F525245u, "unknown not lowered yet"); return;
L_08B2D7A8:
    rt.unsupported(0x08B2D7A8u, 0x20657361u, "unknown not lowered yet"); return;
L_08B2D7C8:
    rt.unsupported(0x08B2D7C8u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D7EC:
    rt.unsupported(0x08B2D7ECu, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D80C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<110u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D810u, 0x20642520u, "unknown not lowered yet"); return;
L_08B2D824:
    rt.unsupported(0x08B2D824u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D838:
    ctx.execute_vfpu_vscl_ct<32u, 116u, 104u, 1u>();
    rt.unsupported(0x08B2D83Cu, 0x756F7320u, "unknown not lowered yet"); return;
L_08B2D850:
    rt.unsupported(0x08B2D850u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D870:
    rt.unsupported(0x08B2D870u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D88C:
    rt.unsupported(0x08B2D88Cu, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D8AC:
    rt.unsupported(0x08B2D8ACu, 0x4745504Du, "cop1? not lowered yet"); return;
L_08B2D8BC:
    (void)(0u & 0u);
    goto L_08B2D8C0;
L_08B2D8C0:
    rt.unsupported(0x08B2D8C0u, 0x4745504Du, "cop1? not lowered yet"); return;
L_08B2D8D0:
    rt.unsupported(0x08B2D8D0u, 0x4745504Du, "cop1? not lowered yet"); return;
L_08B2D8E0:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    rt.unsupported(0x08B2D8ECu, 0x4D79616Cu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 4u, 0x08B38194u>(ctx, &aot_mem); return;
    }
    goto L_08B2D8F0;
L_08B2D8F0:
    ctx.execute_vfpu_vscl_ct<111u, 118u, 105u, 1u>();
    rt.unsupported(0x08B2D8F4u, 0x73252820u, "unknown not lowered yet"); return;
L_08B2D908:
    rt.unsupported(0x08B2D908u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D924:
    rt.unsupported(0x08B2D924u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D94C:
    rt.unsupported(0x08B2D94Cu, 0x726F6261u, "unknown not lowered yet"); return;
L_08B2D960:
    rt.unsupported(0x08B2D960u, 0x4745504Du, "cop1? not lowered yet"); return;
L_08B2D96C:
    rt.unsupported(0x08B2D96Cu, 0x4C424150u, "unknown not lowered yet"); return;
L_08B2D974:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B2D978u, 0x00000072u, "special? not lowered yet"); return;
L_08B2D97C:
    rt.unsupported(0x08B2D97Cu, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D9A8:
    rt.unsupported(0x08B2D9A8u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D9C4:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 25956 ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[11] + static_cast<std::uint32_t>(12320));
    rt.unsupported(0x08B2D9CCu, 0x00000A78u, "special? not lowered yet"); return;
L_08B2D9D0:
    rt.unsupported(0x08B2D9D0u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D9F8:
    rt.unsupported(0x08B2D9F8u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2DA1C:
    rt.unsupported(0x08B2DA1Cu, 0x20292870u, "unknown not lowered yet"); return;
L_08B2DA28:
    ctx.execute_vfpu_vcmp_ct<117u, 108u, 1u, 14u>();
    // nop
    goto L_08B2DA30;
L_08B2DA30:
    rt.unsupported(0x08B2DA30u, 0x61655743u, "vfpu0 not lowered yet"); return;
L_08B2DA48:
    rt.unsupported(0x08B2DA48u, 0x6E6F7246u, "vfpu3 not lowered yet"); return;
L_08B2DA5C:
    // nop
    goto L_08B2DA60;
L_08B2DA60:
    ctx.gpr[1] = (ctx.gpr[27] & 29799u);
    rt.unsupported(0x08B2DA64u, 0x7561705Fu, "unknown not lowered yet"); return;
L_08B2DA70:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    // nop
    goto L_08B2DA78;
L_08B2DA78:
    rt.unsupported(0x08B2DA78u, 0x62756F64u, "vfpu0 not lowered yet"); return;
L_08B2DA84:
    rt.unsupported(0x08B2DA84u, 0x68616A6Bu, "unknown not lowered yet"); return;
L_08B2DA8C:
    ctx.execute_vfpu_vscl_ct<114u, 105u, 115u, 1u>();
    // nop
    goto L_08B2DA94;
L_08B2DA94:
    rt.unsupported(0x08B2DA94u, 0x7370696Cu, "unknown not lowered yet"); return;
L_08B2DA9C:
    rt.unsupported(0x08B2DA9Cu, 0x69646172u, "unknown not lowered yet"); return;
L_08B2DAAC:
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[24]) ? ctx.gpr[3] : ctx.gpr[24]);
    goto L_08B2DAB0;
L_08B2DAB0:
    rt.unsupported(0x08B2DAB0u, 0x73616C66u, "unknown not lowered yet"); return;
L_08B2DABC:
    ctx.execute_vfpu_vscl_ct<108u, 105u, 98u, 1u>();
    rt.unsupported(0x08B2DAC0u, 0x6A797472u, "unknown not lowered yet"); return;
L_08B2DAC8:
    ctx.execute_vfpu_vscl_ct<108u, 105u, 98u, 1u>();
    ctx.execute_vfpu_vhdp(114u, 116u, 121u, 1u);
    rt.unsupported(0x08B2DAD0u, 0x00656572u, "special? not lowered yet"); return;
L_08B2DAD4:
    rt.unsupported(0x08B2DAD4u, 0x635F6566u, "vfpu0 not lowered yet"); return;
L_08B2DAE8:
    rt.unsupported(0x08B2DAE8u, 0x615F6566u, "vfpu0 not lowered yet"); return;
L_08B2DB04:
    rt.unsupported(0x08B2DB04u, 0x615F6566u, "vfpu0 not lowered yet"); return;
L_08B2DB1C:
    rt.unsupported(0x08B2DB1Cu, 0x00317475u, "special? not lowered yet"); return;
L_08B2DB20:
    rt.unsupported(0x08B2DB20u, 0x615F6566u, "vfpu0 not lowered yet"); return;
L_08B2DB3C:
    rt.unsupported(0x08B2DB3Cu, 0x615F6566u, "vfpu0 not lowered yet"); return;
L_08B2DB54:
    rt.unsupported(0x08B2DB54u, 0x00327475u, "special? not lowered yet"); return;
L_08B2DB58:
    rt.unsupported(0x08B2DB58u, 0x615F6566u, "vfpu0 not lowered yet"); return;
L_08B2DB74:
    rt.unsupported(0x08B2DB74u, 0x615F6566u, "vfpu0 not lowered yet"); return;
L_08B2DB8C:
    rt.unsupported(0x08B2DB8Cu, 0x00337475u, "special? not lowered yet"); return;
L_08B2DB90:
    rt.unsupported(0x08B2DB90u, 0x615F6566u, "vfpu0 not lowered yet"); return;
L_08B2DBAC:
    rt.unsupported(0x08B2DBACu, 0x615F6566u, "vfpu0 not lowered yet"); return;
L_08B2DBC4:
    rt.unsupported(0x08B2DBC4u, 0x00347475u, "special? not lowered yet"); return;
L_08B2DBC8:
    rt.unsupported(0x08B2DBC8u, 0x615F6566u, "vfpu0 not lowered yet"); return;
L_08B2DBCC:
    rt.unsupported(0x08B2DBCCu, 0x776F7272u, "unknown not lowered yet"); return;
L_08B2DBE0:
    ctx.gpr[1] = (ctx.gpr[27] & 29799u);
    rt.unsupported(0x08B2DBE4u, 0x7561705Fu, "unknown not lowered yet"); return;
L_08B2DBF4:
    ctx.gpr[1] = (ctx.gpr[27] & 29799u);
    goto L_08B2DBF8;
L_08B2DBF8:
    rt.unsupported(0x08B2DBF8u, 0x7561705Fu, "unknown not lowered yet"); return;
L_08B2DC08:
    ctx.gpr[1] = (ctx.gpr[27] & 29799u);
    goto L_08B2DC0C;
L_08B2DC0C:
    rt.unsupported(0x08B2DC0Cu, 0x7561705Fu, "unknown not lowered yet"); return;
L_08B2DC1C:
    ctx.gpr[1] = (ctx.gpr[27] & 29799u);
    rt.unsupported(0x08B2DC20u, 0x7561705Fu, "unknown not lowered yet"); return;
L_08B2DC24:
    ctx.execute_vfpu_vminmax(115u, 101u, 95u, 1u, false);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<112u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<49u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_d); }
    // nop
    goto L_08B2DC30;
L_08B2DC30:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B2DC34u, 0x63726963u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 105u, 0x08B4ADBCu>(ctx, &aot_mem); return;
    }
    goto L_08B2DC38;
L_08B2DC38:
    if (ctx.gpr[2] == ctx.gpr[31]) {
    ctx.lo = 0u;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 34u, 0x08B471ECu>(ctx, &aot_mem); return;
    }
    goto L_08B2DC40;
L_08B2DC40:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B2DC44u, 0x736F7263u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 106u, 0x08B4ADCCu>(ctx, &aot_mem); return;
    }
    goto L_08B2DC48;
L_08B2DC48:
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 17u, 0x08B45A18u>(ctx, &aot_mem); return;
    }
    goto L_08B2DC50;
L_08B2DC50:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B2DC54u, 0x6E776F64u, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 107u, 0x08B4ADDCu>(ctx, &aot_mem); return;
    }
    goto L_08B2DC58;
L_08B2DC58:
    if (ctx.gpr[2] == ctx.gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 26u, 0x08B41DD8u>(ctx, &aot_mem); return;
    }
    goto L_08B2DC60;
L_08B2DC60:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    ctx.execute_vfpu_vscl_ct<104u, 111u, 109u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 108u, 0x08B4ADECu>(ctx, &aot_mem); return;
    }
    goto L_08B2DC68;
L_08B2DC64:
    ctx.execute_vfpu_vscl_ct<104u, 111u, 109u, 1u>();
    goto L_08B2DC68;
L_08B2DC68:
    if (ctx.gpr[2] == ctx.gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 27u, 0x08B41DE8u>(ctx, &aot_mem); return;
    }
    goto L_08B2DC70;
L_08B2DC70:
    rt.unsupported(0x08B2DC74u, 0x53505F4Cu, "control flow in delay slot"); return;
L_08B2DC78:
    (void)(ctx.hi);
    goto L_08B2DC7C;
L_08B2DC7C:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B2DC80u, 0x7466656Cu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 111u, 0x08B4AE08u>(ctx, &aot_mem); return;
    }
    goto L_08B2DC84;
L_08B2DC84:
    if (ctx.gpr[2] == ctx.gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 29u, 0x08B41E04u>(ctx, &aot_mem); return;
    }
    goto L_08B2DC8C;
L_08B2DC8C:
    rt.unsupported(0x08B2DC90u, 0x53505F52u, "control flow in delay slot"); return;
L_08B2DC94:
    (void)(ctx.hi);
    goto L_08B2DC98;
L_08B2DC98:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B2DC9Cu, 0x68676972u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 113u, 0x08B4AE24u>(ctx, &aot_mem); return;
    }
    goto L_08B2DCA0;
L_08B2DCA0:
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 18u, 0x08B45A74u>(ctx, &aot_mem); return;
    }
    goto L_08B2DCA8;
L_08B2DCA8:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    ctx.execute_vfpu_vscl_ct<115u, 101u, 108u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 114u, 0x08B4AE34u>(ctx, &aot_mem); return;
    }
    goto L_08B2DCB0;
L_08B2DCB0:
    if (ctx.gpr[2] == ctx.gpr[31]) {
    ctx.lo = 0u;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 115u, 0x08B4AE40u>(ctx, &aot_mem); return;
    }
    goto L_08B2DCB8;
L_08B2DCB8:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B2DCBCu, 0x61757173u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 116u, 0x08B4AE44u>(ctx, &aot_mem); return;
    }
    goto L_08B2DCC0;
L_08B2DCC0:
    if (ctx.gpr[2] == ctx.gpr[31]) {
    ctx.lo = 0u;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 35u, 0x08B4728Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DCC8;
L_08B2DCC4:
    ctx.lo = 0u;
    goto L_08B2DCC8;
L_08B2DCC8:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B2DCCCu, 0x72617473u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 117u, 0x08B4AE54u>(ctx, &aot_mem); return;
    }
    goto L_08B2DCD0;
L_08B2DCD0:
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 19u, 0x08B45AA4u>(ctx, &aot_mem); return;
    }
    goto L_08B2DCD8;
L_08B2DCD8:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B2DCDCu, 0x61697274u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 118u, 0x08B4AE64u>(ctx, &aot_mem); return;
    }
    goto L_08B2DCE0;
L_08B2DCE0:
    ctx.execute_vfpu_vscl_ct<110u, 103u, 108u, 1u>();
    if (ctx.gpr[2] == ctx.gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 32u, 0x08B41E64u>(ctx, &aot_mem); return;
    }
    goto L_08B2DCEC;
L_08B2DCEC:
    rt.unsupported(0x08B2DCF0u, 0x505F7075u, "control flow in delay slot"); return;
L_08B2DCF0:
    if (ctx.gpr[2] == ctx.gpr[31]) {
    ctx.lo = 0u;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 93u, 0x08B49EC8u>(ctx, &aot_mem); return;
    }
    goto L_08B2DCF8;
L_08B2DCF4:
    ctx.lo = 0u;
    goto L_08B2DCF8;
L_08B2DCF8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B2DCFCu, 0x0050414Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 77u, 0x08B3F214u>(ctx, &aot_mem); return;
    }
    goto L_08B2DD00;
L_08B2DD00:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[9] >> 9u);
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 78u, 0x08B3F21Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DD08;
L_08B2DD04:
    ctx.gpr[10] = (ctx.gpr[9] >> 9u);
    goto L_08B2DD08;
L_08B2DD08:
    rt.unsupported(0x08B2DD0Cu, 0x00414F4Cu, "control flow in delay slot"); return;
L_08B2DD10:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.lo = ctx.gpr[2];
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 80u, 0x08B3F22Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DD18;
L_08B2DD18:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 29u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 81u, 0x08B3F234u>(ctx, &aot_mem); return;
    }
    goto L_08B2DD20;
L_08B2DD20:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B2DD24u, 0x00445541u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 82u, 0x08B3F23Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DD28;
L_08B2DD28:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[19] << (ctx.gpr[2] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 83u, 0x08B3F244u>(ctx, &aot_mem); return;
    }
    goto L_08B2DD30;
L_08B2DD30:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B2DD34u, 0x0000504Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 84u, 0x08B3F24Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DD38;
L_08B2DD38:
    rt.unsupported(0x08B2DD38u, 0x4F434F4Eu, "unknown not lowered yet"); return;
L_08B2DD40:
    rt.unsupported(0x08B2DD40u, 0x4F435257u, "unknown not lowered yet"); return;
L_08B2DD48:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.lo = ctx.gpr[2];
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 85u, 0x08B3F264u>(ctx, &aot_mem); return;
    }
    goto L_08B2DD50;
L_08B2DD50:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[8] = (ctx.gpr[3] >> 5u);
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 86u, 0x08B3F26Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DD58;
L_08B2DD54:
    ctx.gpr[8] = (ctx.gpr[3] >> 5u);
    goto L_08B2DD58;
L_08B2DD58:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[8] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 87u, 0x08B3F274u>(ctx, &aot_mem); return;
    }
    goto L_08B2DD60;
L_08B2DD60:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[15]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 88u, 0x08B3F27Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DD68;
L_08B2DD68:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.lo = ctx.gpr[2];
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 89u, 0x08B3F284u>(ctx, &aot_mem); return;
    }
    goto L_08B2DD70;
L_08B2DD70:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B2DD74u, 0x0056414Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 90u, 0x08B3F28Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DD78;
L_08B2DD78:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B2DD7Cu, 0x00324154u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 91u, 0x08B3F294u>(ctx, &aot_mem); return;
    }
    goto L_08B2DD80;
L_08B2DD80:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B2DD84u, 0x00314154u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 92u, 0x08B3F29Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DD88;
L_08B2DD84:
    rt.unsupported(0x08B2DD84u, 0x00314154u, "special? not lowered yet"); return;
L_08B2DD88:
    rt.unsupported(0x08B2DD8Cu, 0x0032454Cu, "control flow in delay slot"); return;
L_08B2DD90:
    rt.unsupported(0x08B2DD94u, 0x0031454Cu, "control flow in delay slot"); return;
L_08B2DD98:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[1]) >> 1u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 95u, 0x08B3F2B4u>(ctx, &aot_mem); return;
    }
    goto L_08B2DDA0;
L_08B2DDA0:
    rt.unsupported(0x08B2DDA0u, 0x4E414843u, "unknown not lowered yet"); return;
L_08B2DDA8:
    ctx.execute_vfpu_compare3(117u, 110u, 108u, 1u, 6u);
    rt.unsupported(0x08B2DDACu, 0x6E696461u, "vfpu3 not lowered yet"); return;
L_08B2DDBC:
    rt.unsupported(0x08B2DDBCu, 0x74786574u, "unknown not lowered yet"); return;
L_08B2DDC8:
    rt.unsupported(0x08B2DDC8u, 0x45455246u, "cop1? not lowered yet"); return;
L_08B2DDD0:
    rt.unsupported(0x08B2DDD0u, 0x4E4F5246u, "unknown not lowered yet"); return;
L_08B2DDD8:
    rt.unsupported(0x08B2DDD8u, 0x43414220u, "unknown not lowered yet"); return;
L_08B2DDE8:
    rt.unsupported(0x08B2DDE8u, 0x6E6F7266u, "vfpu3 not lowered yet"); return;
L_08B2DDF4:
    rt.unsupported(0x08B2DDF4u, 0x6E6F7266u, "vfpu3 not lowered yet"); return;
L_08B2DDFC:
    rt.unsupported(0x08B2DDFCu, 0x00000032u, "special? not lowered yet"); return;
L_08B2DE08:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 96u, 0x08B3F324u>(ctx, &aot_mem); return;
    }
    goto L_08B2DE10;
L_08B2DE10:
    if (ctx.gpr[26] == ctx.gpr[4]) {
    rt.unsupported(0x08B2DE14u, 0x0042545Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 97u, 0x08B3F32Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DE18;
L_08B2DE14:
    rt.unsupported(0x08B2DE14u, 0x0042545Fu, "special? not lowered yet"); return;
L_08B2DE18:
    rt.unsupported(0x08B2DE18u, 0x4C414D53u, "unknown not lowered yet"); return;
L_08B2DE20:
    rt.unsupported(0x08B2DE20u, 0x465F5041u, "cop1? not lowered yet"); return;
L_08B2DE24:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B2DE28u, 0x45545942u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 100u, 0x08B3F370u>(ctx, &aot_mem); return;
    }
    goto L_08B2DE2C;
L_08B2DE2C:
    rt.unsupported(0x08B2DE2Cu, 0x203D2053u, "unknown not lowered yet"); return;
L_08B2DE34:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 4u, 0x08B40344u>(ctx, &aot_mem); return;
    }
    goto L_08B2DE3C;
L_08B2DE3C:
    if (ctx.gpr[2] == ctx.gpr[31]) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 102u, 0x08B3F378u>(ctx, &aot_mem); return;
    }
    goto L_08B2DE44;
L_08B2DE44:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<76u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<83u, 1u>(vfpu_d); }
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 98u, 0x08B3F360u>(ctx, &aot_mem); return;
    }
    goto L_08B2DE4C;
L_08B2DE4C:
    // nop
    goto L_08B2DE50;
L_08B2DE50:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.lo = 0u;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 99u, 0x08B3F36Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DE58;
L_08B2DE58:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[19] << (ctx.gpr[2] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 101u, 0x08B3F374u>(ctx, &aot_mem); return;
    }
    goto L_08B2DE60;
L_08B2DE60:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 103u, 0x08B3F37Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DE68;
L_08B2DE64:
    rt.memory().memory_barrier();
    goto L_08B2DE68;
L_08B2DE68:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[16] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 104u, 0x08B3F384u>(ctx, &aot_mem); return;
    }
    goto L_08B2DE70;
L_08B2DE70:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[17] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 105u, 0x08B3F38Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DE78;
L_08B2DE78:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[18] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 106u, 0x08B3F394u>(ctx, &aot_mem); return;
    }
    goto L_08B2DE80;
L_08B2DE80:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[19] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 107u, 0x08B3F39Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DE88;
L_08B2DE88:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[20] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 108u, 0x08B3F3A4u>(ctx, &aot_mem); return;
    }
    goto L_08B2DE90;
L_08B2DE8C:
    ctx.gpr[9] = (ctx.gpr[20] >> (ctx.gpr[1] & 31u));
    goto L_08B2DE90;
L_08B2DE90:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[21] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 109u, 0x08B3F3ACu>(ctx, &aot_mem); return;
    }
    goto L_08B2DE98;
L_08B2DE98:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[22] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 110u, 0x08B3F3B4u>(ctx, &aot_mem); return;
    }
    goto L_08B2DEA0;
L_08B2DEA0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[23] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 111u, 0x08B3F3BCu>(ctx, &aot_mem); return;
    }
    goto L_08B2DEA8;
L_08B2DEA8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[24] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 112u, 0x08B3F3C4u>(ctx, &aot_mem); return;
    }
    goto L_08B2DEB0;
L_08B2DEAC:
    ctx.gpr[9] = (ctx.gpr[24] >> (ctx.gpr[1] & 31u));
    goto L_08B2DEB0;
L_08B2DEB0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[25] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 113u, 0x08B3F3CCu>(ctx, &aot_mem); return;
    }
    goto L_08B2DEB8;
L_08B2DEB8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 114u, 0x08B3F3D4u>(ctx, &aot_mem); return;
    }
    goto L_08B2DEC0;
L_08B2DEC0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B2DEC4u, 0x0000414Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 115u, 0x08B3F3DCu>(ctx, &aot_mem); return;
    }
    goto L_08B2DEC8;
L_08B2DEC8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 25u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 116u, 0x08B3F3E4u>(ctx, &aot_mem); return;
    }
    goto L_08B2DED0;
L_08B2DED0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 25u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 117u, 0x08B3F3ECu>(ctx, &aot_mem); return;
    }
    goto L_08B2DED8;
L_08B2DED8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[8] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 118u, 0x08B3F3F4u>(ctx, &aot_mem); return;
    }
    goto L_08B2DEE0;
L_08B2DEE0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[8] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 119u, 0x08B3F3FCu>(ctx, &aot_mem); return;
    }
    goto L_08B2DEE8;
L_08B2DEE8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 120u, 0x08B3F404u>(ctx, &aot_mem); return;
    }
    goto L_08B2DEF0;
L_08B2DEF0:
    rt.unsupported(0x08B2DEF4u, 0x00434E49u, "control flow in delay slot"); return;
L_08B2DEF4:
    rt.unsupported(0x08B2DEF8u, 0x5F434546u, "control flow in delay slot"); return;
L_08B2DEF8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (0u << (0u & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 122u, 0x08B3F414u>(ctx, &aot_mem); return;
    }
    goto L_08B2DF00;
L_08B2DEFC:
    ctx.gpr[10] = (0u << (0u & 31u));
    goto L_08B2DF00;
L_08B2DF00:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B2DF04u, 0x00005341u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 123u, 0x08B3F41Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DF08;
L_08B2DF08:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[2]) * static_cast<std::uint64_t>(ctx.gpr[19]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 124u, 0x08B3F424u>(ctx, &aot_mem); return;
    }
    goto L_08B2DF10;
L_08B2DF10:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B2DF14u, 0x00004F4Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 125u, 0x08B3F42Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DF18;
L_08B2DF18:
    rt.unsupported(0x08B2DF18u, 0x4D495243u, "unknown not lowered yet"); return;
L_08B2DF20:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[11]) < 9512 ? 1u : 0u);
    // nop
    goto L_08B2DF28;
L_08B2DF28:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2DF2Cu, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2DF30:
    rt.unsupported(0x08B2DF30u, 0x6E6F7266u, "vfpu3 not lowered yet"); return;
L_08B2DF44:
    rt.unsupported(0x08B2DF44u, 0x4F4C4C41u, "unknown not lowered yet"); return;
L_08B2DF48:
    rt.unsupported(0x08B2DF48u, 0x49544143u, "cop2/vfpu not lowered yet"); return;
L_08B2DF54:
    rt.unsupported(0x08B2DF54u, 0x20444E45u, "unknown not lowered yet"); return;
L_08B2DF58:
    rt.unsupported(0x08B2DF58u, 0x4B434142u, "cop2/vfpu not lowered yet"); return;
L_08B2DF64:
    rt.unsupported(0x08B2DF64u, 0x00000A69u, "special? not lowered yet"); return;
L_08B2DF68:
    rt.unsupported(0x08B2DF68u, 0x00647568u, "special? not lowered yet"); return;
L_08B2DF6C:
    rt.unsupported(0x08B2DF6Cu, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B2DF78:
    rt.unsupported(0x08B2DF78u, 0x00000070u, "special? not lowered yet"); return;
L_08B2DF9C:
    rt.unsupported(0x08B2DFA0u, 0x08AD8A54u, "control flow in delay slot"); return;
L_08B2DFBC:
    rt.unsupported(0x08B2DFC0u, 0x08ADA340u, "control flow in delay slot"); return;
L_08B2DFD8:
    rt.unsupported(0x08B2DFDCu, 0x08ADA340u, "control flow in delay slot"); return;
L_08B2DFF0:
    rt.unsupported(0x08B2DFF4u, 0x08ADA340u, "control flow in delay slot"); return;
L_08B2DFF4:
    rt.unsupported(0x08B2DFF8u, 0x08ADA340u, "control flow in delay slot"); return;
L_08B2E014:
    rt.unsupported(0x08B2E018u, 0x08ADA340u, "control flow in delay slot"); return;
L_08B2E038:
    rt.unsupported(0x08B2E03Cu, 0x08ADA340u, "control flow in delay slot"); return;
L_08B2E04C:
    // nop
    rt.unsupported(0x08B2E054u, 0x08ADD25Cu, "control flow in delay slot"); return;
L_08B2E054:
    rt.unsupported(0x08B2E058u, 0x08ADD268u, "control flow in delay slot"); return;
L_08B2E074:
    rt.unsupported(0x08B2E078u, 0x08ADD2F0u, "control flow in delay slot"); return;
L_08B2E098:
    rt.unsupported(0x08B2E09Cu, 0x08ADD518u, "control flow in delay slot"); return;
L_08B2E0BC:
    rt.unsupported(0x08B2E0C0u, 0x08ADD594u, "control flow in delay slot"); return;
L_08B2E0C0:
    rt.unsupported(0x08B2E0C4u, 0x08ADD594u, "control flow in delay slot"); return;
L_08B2E0E0:
    rt.unsupported(0x08B2E0E4u, 0x08ADD59Cu, "control flow in delay slot"); return;
L_08B2E100:
    rt.unsupported(0x08B2E104u, 0x08ADD59Cu, "control flow in delay slot"); return;
L_08B2E120:
    rt.unsupported(0x08B2E124u, 0x08ADD518u, "control flow in delay slot"); return;
L_08B2E144:
    rt.unsupported(0x08B2E148u, 0x08ADD92Cu, "control flow in delay slot"); return;
L_08B2E168:
    rt.unsupported(0x08B2E16Cu, 0x08ADD934u, "control flow in delay slot"); return;
L_08B2E170:
    // nop
    ctx.pc = 0x02B764B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B2E18C:
    rt.unsupported(0x08B2E190u, 0x08ADE5C8u, "control flow in delay slot"); return;
L_08B2E1AC:
    rt.unsupported(0x08B2E1B0u, 0x08ADE5C8u, "control flow in delay slot"); return;
L_08B2E1B0:
    rt.unsupported(0x08B2E1B4u, 0x08ADE5C8u, "control flow in delay slot"); return;
L_08B2E1D4:
    rt.unsupported(0x08B2E1D8u, 0x08ADE4C4u, "control flow in delay slot"); return;
L_08B2E1F8:
    rt.unsupported(0x08B2E1FCu, 0x08ADE5C8u, "control flow in delay slot"); return;
L_08B2E218:
    // nop
    ctx.pc = 0x02B79370u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B2E23C:
    rt.unsupported(0x08B2E240u, 0x08ADF0B0u, "control flow in delay slot"); return;
L_08B2E240:
    rt.unsupported(0x08B2E244u, 0x08ADF0BCu, "control flow in delay slot"); return;
L_08B2E260:
    rt.unsupported(0x08B2E264u, 0x08ADF28Cu, "control flow in delay slot"); return;
L_08B2E284:
    rt.unsupported(0x08B2E288u, 0x08ADF7BCu, "control flow in delay slot"); return;
L_08B2E2A8:
    rt.unsupported(0x08B2E2ACu, 0x08AE190Cu, "control flow in delay slot"); return;
L_08B2E2C4:
    rt.unsupported(0x08B2E2C8u, 0x08AE1EC4u, "control flow in delay slot"); return;
L_08B2E2E4:
    rt.unsupported(0x08B2E2E8u, 0x08AE1EC4u, "control flow in delay slot"); return;
L_08B2E2E8:
    rt.unsupported(0x08B2E2ECu, 0x08AE1EC4u, "control flow in delay slot"); return;
L_08B2E308:
    rt.unsupported(0x08B2E30Cu, 0x08AE1EC4u, "control flow in delay slot"); return;
L_08B2E32C:
    rt.unsupported(0x08B2E330u, 0x08AE1EC4u, "control flow in delay slot"); return;
L_08B2E34C:
    rt.unsupported(0x08B2E350u, 0x08AE0E20u, "control flow in delay slot"); return;
L_08B2E370:
    rt.unsupported(0x08B2E374u, 0x08AE25B4u, "control flow in delay slot"); return;
L_08B2E394:
    rt.unsupported(0x08B2E398u, 0x08AE24C8u, "control flow in delay slot"); return;
L_08B2E3B8:
    rt.unsupported(0x08B2E3BCu, 0x08AE2678u, "control flow in delay slot"); return;
L_08B2E3D8:
    rt.unsupported(0x08B2E3DCu, 0x08AE25F4u, "control flow in delay slot"); return;
L_08B2E3F8:
    rt.unsupported(0x08B2E3FCu, 0x08AE2678u, "control flow in delay slot"); return;
L_08B2E41C:
    rt.unsupported(0x08B2E420u, 0x08AE26D8u, "control flow in delay slot"); return;
L_08B2E438:
    rt.unsupported(0x08B2E43Cu, 0x08AE26FCu, "control flow in delay slot"); return;
L_08B2E454:
    rt.unsupported(0x08B2E458u, 0x08AE26FCu, "control flow in delay slot"); return;
L_08B2E474:
    rt.unsupported(0x08B2E478u, 0x08AE26D8u, "control flow in delay slot"); return;
L_08B2E490:
    rt.unsupported(0x08B2E494u, 0x08AE26FCu, "control flow in delay slot"); return;
L_08B2E4A8:
    rt.unsupported(0x08B2E4A8u, 0x74726170u, "unknown not lowered yet"); return;
L_08B2E4B0:
    // nop
    goto L_08B2E4B4;
L_08B2E4B4:
    rt.unsupported(0x08B2E4B4u, 0x74726170u, "unknown not lowered yet"); return;
L_08B2E4BC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<107u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    // nop
    rt.unsupported(0x08B2E4C4u, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B2E4D4:
    rt.unsupported(0x08B2E4D4u, 0x00000A79u, "special? not lowered yet"); return;
L_08B2E4E8:
    rt.unsupported(0x08B2E4E8u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B2E4F0:
    rt.unsupported(0x08B2E4F0u, 0x454E4F42u, "cop1? not lowered yet"); return;
L_08B2E4F8:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B2E4FCu, 0x004E4941u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 64u, 0x08B3EA08u>(ctx, &aot_mem); return;
    }
    goto L_08B2E500;
L_08B2E500:
    rt.unsupported(0x08B2E500u, 0x48534143u, "cop2/vfpu not lowered yet"); return;
L_08B2E508:
    if (ctx.gpr[2] != ctx.gpr[14]) {
    ctx.gpr[8] = (ctx.gpr[14] >> 5u);
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 59u, 0x08B42218u>(ctx, &aot_mem); return;
    }
    goto L_08B2E510;
L_08B2E510:
    if (static_cast<std::int32_t>(ctx.gpr[18]) <= 0) {
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[1]) * static_cast<std::uint64_t>(ctx.gpr[25]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 103u, 0x08B42E20u>(ctx, &aot_mem); return;
    }
    goto L_08B2E518;
L_08B2E518:
    if (ctx.gpr[2] != ctx.gpr[20]) {
    rt.unsupported(0x08B2E51Cu, 0x00545345u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 124u, 0x08B43A28u>(ctx, &aot_mem); return;
    }
    goto L_08B2E520;
L_08B2E51C:
    rt.unsupported(0x08B2E51Cu, 0x00545345u, "special? not lowered yet"); return;
L_08B2E520:
    rt.unsupported(0x08B2E520u, 0x44414544u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B2E524u, 0x0000594Cu, "syscall not lowered yet"); return;
L_08B2E528:
    if (ctx.gpr[2] == ctx.gpr[14]) {
    ctx.gpr[9] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 61u, 0x08B4223Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2E530;
L_08B2E530:
    if (ctx.gpr[18] != ctx.gpr[9]) {
    rt.unsupported(0x08B2E534u, 0x00524D4Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 105u, 0x08B42E44u>(ctx, &aot_mem); return;
    }
    goto L_08B2E538;
L_08B2E538:
    rt.unsupported(0x08B2E538u, 0x43454C45u, "unknown not lowered yet"); return;
L_08B2E540:
    rt.unsupported(0x08B2E540u, 0x414E4946u, "unknown not lowered yet"); return;
L_08B2E548:
    rt.unsupported(0x08B2E548u, 0x414E4946u, "unknown not lowered yet"); return;
L_08B2E550:
    if (ctx.gpr[26] == ctx.gpr[13]) {
    ctx.gpr[8] = (static_cast<std::uint32_t>(std::countl_one(ctx.gpr[2])));
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 63u, 0x08B42274u>(ctx, &aot_mem); return;
    }
    goto L_08B2E558;
L_08B2E558:
    rt.unsupported(0x08B2E55Cu, 0x004C4548u, "control flow in delay slot"); return;
L_08B2E55C:
    jump_target = ctx.gpr[2];
    rt.unsupported(0x08B2E560u, 0x4E44494Bu, "unknown not lowered yet"); return;
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B2E560:
    rt.unsupported(0x08B2E560u, 0x4E44494Bu, "unknown not lowered yet"); return;
L_08B2E568:
    rt.unsupported(0x08B2E568u, 0x444E414Cu, "unsupported CFC1 control register"); return;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (ctx.gpr[2] & 31u)));
    goto L_08B2E570;
L_08B2E570:
    rt.unsupported(0x08B2E570u, 0x47524F4Du, "cop1? not lowered yet"); return;
L_08B2E578:
    if (ctx.gpr[18] == ctx.gpr[5]) {
    ctx.gpr[9] = (ctx.gpr[19] << (ctx.gpr[2] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 129u, 0x08B43EB8u>(ctx, &aot_mem); return;
    }
    goto L_08B2E580;
L_08B2E580:
    rt.unsupported(0x08B2E580u, 0x4A465552u, "cop2/vfpu not lowered yet"); return;
L_08B2E588:
    rt.unsupported(0x08B2E588u, 0x4F594153u, "unknown not lowered yet"); return;
L_08B2E590:
    rt.unsupported(0x08B2E590u, 0x49434953u, "cop2/vfpu not lowered yet"); return;
L_08B2E598:
    rt.unsupported(0x08B2E598u, 0x4F454854u, "unknown not lowered yet"); return;
L_08B2E5A0:
    if (ctx.gpr[18] == ctx.gpr[20]) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 36u, 0x08B41EC8u>(ctx, &aot_mem); return;
    }
    goto L_08B2E5A8;
L_08B2E5A8:
    rt.unsupported(0x08B2E5A8u, 0x414E4946u, "unknown not lowered yet"); return;
L_08B2E5B0:
    rt.unsupported(0x08B2E5B0u, 0x6B6F6F6Cu, "unknown not lowered yet"); return;
L_08B2E5D4:
    if (static_cast<std::int32_t>(ctx.gpr[18]) <= 0) {
    rt.unsupported(0x08B2E5D8u, 0x46202141u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 125u, 0x08B43AF8u>(ctx, &aot_mem); return;
    }
    goto L_08B2E5DC;
L_08B2E5DC:
    rt.unsupported(0x08B2E5DCu, 0x444E554Fu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B2E5E0u, 0x74756320u, "unknown not lowered yet"); return;
L_08B2E5F8:
    rt.unsupported(0x08B2E5F8u, 0x20544F4Eu, "unknown not lowered yet"); return;
L_08B2E5FC:
    rt.unsupported(0x08B2E5FCu, 0x4E554F46u, "unknown not lowered yet"); return;
L_08B2E610:
    rt.unsupported(0x08B2E610u, 0x61727420u, "vfpu0 not lowered yet"); return;
L_08B2E618:
    rt.unsupported(0x08B2E618u, 0x696D694Cu, "unknown not lowered yet"); return;
L_08B2E63C:
    ctx.execute_vfpu_vscl_ct<71u, 105u, 118u, 1u>();
    rt.unsupported(0x08B2E640u, 0x74756320u, "unknown not lowered yet"); return;
L_08B2E654:
    rt.unsupported(0x08B2E654u, 0x4D494E41u, "unknown not lowered yet"); return;
L_08B2E660:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    goto L_08B2E664;
L_08B2E664:
    rt.unsupported(0x08B2E664u, 0x492E7325u, "cop2/vfpu not lowered yet"); return;
L_08B2E66C:
    rt.unsupported(0x08B2E66Cu, 0x00006272u, "special? not lowered yet"); return;
L_08B2E670:
    rt.unsupported(0x08B2E670u, 0x442E7325u, "cop1? not lowered yet"); return;
L_08B2E680:
    rt.unsupported(0x08B2E680u, 0x616E6966u, "vfpu0 not lowered yet"); return;
L_08B2E688:
    ctx.gpr[5] = (ctx.gpr[1] ^ ctx.gpr[5]);
    goto L_08B2E68C;
L_08B2E68C:
    rt.unsupported(0x08B2E68Cu, 0x432E7325u, "unknown not lowered yet"); return;
L_08B2E694:
    ctx.gpr[13] = (ctx.gpr[3] | ctx.gpr[4]);
    goto L_08B2E698;
L_08B2E698:
    ctx.execute_vfpu_compare3(105u, 110u, 102u, 1u, 6u);
    // nop
    goto L_08B2E6A0;
L_08B2E6A0:
    ctx.execute_vfpu_vscl_ct<109u, 111u, 100u, 1u>();
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B2E6A8;
L_08B2E6A8:
    rt.unsupported(0x08B2E6A8u, 0x74786574u, "unknown not lowered yet"); return;
L_08B2E6B0:
    ctx.execute_vfpu_compare3(117u, 110u, 99u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<109u, 112u, 114u, 1u>();
    rt.unsupported(0x08B2E6B8u, 0x00007373u, "special? not lowered yet"); return;
L_08B2E6BC:
    rt.unsupported(0x08B2E6BCu, 0x61747461u, "vfpu0 not lowered yet"); return;
L_08B2E6C4:
    ctx.execute_vfpu_compare3(114u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B2E6C8u, 0x00006576u, "special? not lowered yet"); return;
L_08B2E6CC:
    ctx.execute_vfpu_vhdp(112u, 101u, 102u, 1u);
    ctx.gpr[12] = (ctx.gpr[3] | ctx.gpr[20]);
    goto L_08B2E6D4;
L_08B2E6D4:
    rt.unsupported(0x08B2E6D4u, 0x72747865u, "unknown not lowered yet"); return;
L_08B2E6E0:
    ctx.gpr[12] = (0u | 0u);
    goto L_08B2E6E4;
L_08B2E6E4:
    rt.unsupported(0x08B2E6E4u, 0x7366666Fu, "unknown not lowered yet"); return;
L_08B2E6EC:
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(26149));
    ctx.execute_vfpu_vhdp(102u, 32u, 37u, 1u);
    // nop
    goto L_08B2E6F8;
L_08B2E6F8:
    { const bool signed_ok = ctx.execute_signed_add(5u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B2E6F8u, 0x00002C20u); return; } }
    goto L_08B2E6FC;
L_08B2E6FC:
    ctx.gpr[12] = (ctx.gpr[9] + static_cast<std::uint32_t>(25637));
    rt.unsupported(0x08B2E700u, 0x73252C64u, "unknown not lowered yet"); return;
L_08B2E708:
    ctx.gpr[12] = (ctx.gpr[9] + static_cast<std::uint32_t>(25637));
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<44u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_d); }
    // nop
    goto L_08B2E714;
L_08B2E714:
    ctx.gpr[12] = (ctx.gpr[9] + static_cast<std::uint32_t>(26149));
    ctx.execute_vfpu_vhdp(102u, 44u, 37u, 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[3]) > static_cast<std::int32_t>(ctx.gpr[19]) ? ctx.gpr[3] : ctx.gpr[19]);
    goto L_08B2E720;
L_08B2E720:
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B2E724;
L_08B2E724:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    ctx.gpr[15] = (0u + 0u);
    goto L_08B2E72C;
L_08B2E72C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2E730u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2E744:
    rt.unsupported(0x08B2E744u, 0x73747543u, "unknown not lowered yet"); return;
L_08B2E790:
    rt.unsupported(0x08B2E790u, 0x72657375u, "unknown not lowered yet"); return;
L_08B2E79C:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 1u));
    goto L_08B2E7A0;
L_08B2E7A0:
    rt.unsupported(0x08B2E7A0u, 0x6978655Fu, "unknown not lowered yet"); return;
L_08B2E7A8:
    rt.unsupported(0x08B2E7A8u, 0x6362696Cu, "vfpu0 not lowered yet"); return;
L_08B2E7D4:
    rt.unsupported(0x08B2E7D4u, 0x72657355u, "unknown not lowered yet"); return;
L_08B2E7E0:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 1u));
    // nop
    goto L_08B2E7E8;
L_08B2E7E8:
    rt.unsupported(0x08B2E7E8u, 0x676E750Au, "vfpu1 not lowered yet"); return;
L_08B2E8FC:
    rt.unsupported(0x08B2E900u, 0x08AEBEF0u, "control flow in delay slot"); return;
L_08B2E96C:
    rt.unsupported(0x08B2E970u, 0x08AEC08Cu, "control flow in delay slot"); return;
L_08B2EA68:
    rt.unsupported(0x08B2EA6Cu, 0x08AEC600u, "control flow in delay slot"); return;
L_08B2EA90:
    rt.unsupported(0x08B2EA90u, 0x4A532D43u, "cop2/vfpu not lowered yet"); return;
L_08B2EA9C:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 9u));
    rt.unsupported(0x08B2EAA0u, 0x494A2D43u, "cop2/vfpu not lowered yet"); return;
L_08B2EAC8:
    rt.unsupported(0x08B2EAC8u, 0x20746F4Eu, "unknown not lowered yet"); return;
L_08B2EAD4:
    rt.unsupported(0x08B2EAD4u, 0x73206F4Eu, "unknown not lowered yet"); return;
L_08B2EAF0:
    rt.unsupported(0x08B2EAF0u, 0x73206F4Eu, "unknown not lowered yet"); return;
L_08B2EB00:
    ctx.execute_vfpu_vscl_ct<73u, 110u, 116u, 1u>();
    rt.unsupported(0x08B2EB04u, 0x70757272u, "unknown not lowered yet"); return;
L_08B2EB18:
    rt.unsupported(0x08B2EB18u, 0x204F2F49u, "unknown not lowered yet"); return;
L_08B2EB24:
    rt.unsupported(0x08B2EB24u, 0x73206F4Eu, "unknown not lowered yet"); return;
L_08B2EB40:
    rt.unsupported(0x08B2EB40u, 0x20677241u, "unknown not lowered yet"); return;
L_08B2EB54:
    rt.unsupported(0x08B2EB54u, 0x63657845u, "vfpu0 not lowered yet"); return;
L_08B2EB68:
    rt.unsupported(0x08B2EB68u, 0x20646142u, "unknown not lowered yet"); return;
L_08B2EB78:
    rt.unsupported(0x08B2EB78u, 0x63206F4Eu, "vfpu0 not lowered yet"); return;
L_08B2EB84:
    ctx.execute_vfpu_vminmax(78u, 111u, 32u, 1u, false);
    rt.unsupported(0x08B2EB88u, 0x2065726Fu, "unknown not lowered yet"); return;
L_08B2EB94:
    rt.unsupported(0x08B2EB94u, 0x00000073u, "special? not lowered yet"); return;
L_08B2EB98:
    rt.unsupported(0x08B2EB98u, 0x20746F4Eu, "unknown not lowered yet"); return;
L_08B2EBAC:
    ctx.execute_vfpu_vminmax(80u, 101u, 114u, 1u, false);
    rt.unsupported(0x08B2EBB0u, 0x69737369u, "unknown not lowered yet"); return;
L_08B2EBB8:
    ctx.execute_vfpu_vscl_ct<101u, 110u, 105u, 1u>();
    (void)(0u & 0u);
    goto L_08B2EBC0;
L_08B2EBC0:
    rt.unsupported(0x08B2EBC0u, 0x20646142u, "unknown not lowered yet"); return;
L_08B2EBCC:
    rt.unsupported(0x08B2EBCCu, 0x636F6C42u, "vfpu0 not lowered yet"); return;
L_08B2EBE4:
    rt.unsupported(0x08B2EBE4u, 0x69766544u, "unknown not lowered yet"); return;
L_08B2EBFC:
    ctx.execute_vfpu_vscl_ct<70u, 105u, 108u, 1u>();
    rt.unsupported(0x08B2EC00u, 0x69786520u, "unknown not lowered yet"); return;
L_08B2EC08:
    rt.unsupported(0x08B2EC08u, 0x736F7243u, "unknown not lowered yet"); return;
L_08B2EC1C:
    rt.unsupported(0x08B2EC1Cu, 0x73206F4Eu, "unknown not lowered yet"); return;
L_08B2EC2C:
    rt.unsupported(0x08B2EC2Cu, 0x20746F4Eu, "unknown not lowered yet"); return;
L_08B2EC38:
    rt.unsupported(0x08B2EC38u, 0x0079726Fu, "special? not lowered yet"); return;
L_08B2EC3C:
    rt.unsupported(0x08B2EC3Cu, 0x61207349u, "vfpu0 not lowered yet"); return;
L_08B2EC4C:
    rt.unsupported(0x08B2EC4Cu, 0x61766E49u, "vfpu0 not lowered yet"); return;
L_08B2EC60:
    rt.unsupported(0x08B2EC60u, 0x206F6F54u, "unknown not lowered yet"); return;
L_08B2EC80:
    rt.unsupported(0x08B2EC80u, 0x206F6F54u, "unknown not lowered yet"); return;
L_08B2EC94:
    rt.unsupported(0x08B2EC94u, 0x20746F4Eu, "unknown not lowered yet"); return;
L_08B2ECAC:
    rt.unsupported(0x08B2ECACu, 0x74786554u, "unknown not lowered yet"); return;
L_08B2ECBC:
    ctx.execute_vfpu_vscl_ct<70u, 105u, 108u, 1u>();
    ctx.execute_vfpu_compare3(32u, 116u, 111u, 1u, 6u);
    rt.unsupported(0x08B2ECC4u, 0x72616C20u, "unknown not lowered yet"); return;
L_08B2ECCC:
    rt.unsupported(0x08B2ECCCu, 0x73206F4Eu, "unknown not lowered yet"); return;
L_08B2ECDC:
    rt.unsupported(0x08B2ECDCu, 0x76656420u, "unknown not lowered yet"); return;
L_08B2ECE4:
    ctx.execute_vfpu_vscl_ct<73u, 108u, 108u, 1u>();
    rt.unsupported(0x08B2ECE8u, 0x206C6167u, "unknown not lowered yet"); return;
L_08B2ECF4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<82u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<111u, 110u, 1u, 13u>();
    rt.unsupported(0x08B2ECFCu, 0x69662079u, "unknown not lowered yet"); return;
L_08B2ED0C:
    rt.unsupported(0x08B2ED0Cu, 0x206F6F54u, "unknown not lowered yet"); return;
L_08B2ED1C:
    rt.unsupported(0x08B2ED1Cu, 0x6B6F7242u, "unknown not lowered yet"); return;
L_08B2ED28:
    rt.unsupported(0x08B2ED28u, 0x6874614Du, "unknown not lowered yet"); return;
L_08B2ED38:
    rt.unsupported(0x08B2ED38u, 0x75736552u, "unknown not lowered yet"); return;
L_08B2ED4C:
    ctx.execute_vfpu_vminmax(78u, 111u, 32u, 1u, false);
    goto L_08B2ED50;
L_08B2ED50:
    rt.unsupported(0x08B2ED50u, 0x61737365u, "vfpu0 not lowered yet"); return;
L_08B2ED68:
    rt.unsupported(0x08B2ED68u, 0x6E656449u, "vfpu3 not lowered yet"); return;
L_08B2ED6C:
    rt.unsupported(0x08B2ED6Cu, 0x69666974u, "unknown not lowered yet"); return;
L_08B2ED7C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<68u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2ED80u, 0x6B636F6Cu, "unknown not lowered yet"); return;
L_08B2ED88:
    ctx.execute_vfpu_vcmp_ct<111u, 32u, 1u, 14u>();
    goto L_08B2ED8C;
L_08B2ED8C:
    rt.unsupported(0x08B2ED8Cu, 0x006B636Fu, "special? not lowered yet"); return;
L_08B2ED90:
    rt.unsupported(0x08B2ED90u, 0x20746F4Eu, "unknown not lowered yet"); return;
L_08B2EDA0:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    goto L_08B2EDA4;
L_08B2EDA4:
    rt.unsupported(0x08B2EDA4u, 0x69206D61u, "unknown not lowered yet"); return;
L_08B2EDB8:
    rt.unsupported(0x08B2EDB8u, 0x73206F4Eu, "unknown not lowered yet"); return;
L_08B2EDCC:
    rt.unsupported(0x08B2EDCCu, 0x6863614Du, "unknown not lowered yet"); return;
L_08B2EDDC:
    rt.unsupported(0x08B2EDDCu, 0x6874206Eu, "unknown not lowered yet"); return;
L_08B2EDEC:
    rt.unsupported(0x08B2EDECu, 0x70206F4Eu, "unknown not lowered yet"); return;
L_08B2EDF8:
    ctx.execute_vfpu_compare3(82u, 101u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08B2EE00u, 0x20736920u, "unknown not lowered yet"); return;
L_08B2EE0C:
    rt.unsupported(0x08B2EE0Cu, 0x74726956u, "unknown not lowered yet"); return;
L_08B2EE24:
    ctx.execute_vfpu_vscl_ct<65u, 100u, 118u, 1u>();
    rt.unsupported(0x08B2EE28u, 0x73697472u, "unknown not lowered yet"); return;
L_08B2EE34:
    ctx.execute_vfpu_compare3(83u, 114u, 109u, 1u, 6u);
    rt.unsupported(0x08B2EE38u, 0x20746E75u, "unknown not lowered yet"); return;
L_08B2EE44:
    ctx.execute_vfpu_vminmax(67u, 111u, 109u, 1u, false);
    rt.unsupported(0x08B2EE48u, 0x63696E75u, "vfpu0 not lowered yet"); return;
L_08B2EE4C:
    ctx.execute_vfpu_compare3(97u, 116u, 105u, 1u, 6u);
    rt.unsupported(0x08B2EE50u, 0x7265206Eu, "unknown not lowered yet"); return;
L_08B2EE58:
    rt.unsupported(0x08B2EE58u, 0x746F7250u, "unknown not lowered yet"); return;
L_08B2EE68:
    rt.unsupported(0x08B2EE68u, 0x746C754Du, "unknown not lowered yet"); return;
L_08B2EE7C:
    rt.unsupported(0x08B2EE7Cu, 0x20646142u, "unknown not lowered yet"); return;
L_08B2EE88:
    rt.unsupported(0x08B2EE88u, 0x6E6E6143u, "vfpu3 not lowered yet"); return;
L_08B2EE8C:
    rt.unsupported(0x08B2EE8Cu, 0x6120746Fu, "vfpu0 not lowered yet"); return;
L_08B2EEA0:
    ctx.execute_vfpu_vscl_ct<104u, 97u, 114u, 1u>();
    rt.unsupported(0x08B2EEA4u, 0x696C2064u, "unknown not lowered yet"); return;
L_08B2EEB0:
    ctx.execute_vfpu_vscl_ct<65u, 99u, 99u, 1u>();
    rt.unsupported(0x08B2EEB4u, 0x6E697373u, "vfpu3 not lowered yet"); return;
L_08B2EEB8:
    rt.unsupported(0x08B2EEB8u, 0x20612067u, "unknown not lowered yet"); return;
L_08B2EED4:
    // nop
    goto L_08B2EED8;
L_08B2EED8:
    rt.unsupported(0x08B2EED8u, 0x62696C2Eu, "vfpu0 not lowered yet"); return;
L_08B2EEF8:
    ctx.execute_vfpu_vscl_ct<65u, 116u, 116u, 1u>();
    rt.unsupported(0x08B2EEFCu, 0x6974706Du, "unknown not lowered yet"); return;
L_08B2EF08:
    rt.unsupported(0x08B2EF08u, 0x69206B6Eu, "unknown not lowered yet"); return;
L_08B2EF38:
    rt.unsupported(0x08B2EF38u, 0x6E6E6143u, "vfpu3 not lowered yet"); return;
L_08B2EF48:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2EF4Cu, 0x62696C20u, "vfpu0 not lowered yet"); return;
L_08B2EF60:
    rt.unsupported(0x08B2EF60u, 0x636E7546u, "vfpu0 not lowered yet"); return;
L_08B2EF68:
    rt.unsupported(0x08B2EF68u, 0x746F6E20u, "unknown not lowered yet"); return;
L_08B2EF7C:
    ctx.execute_vfpu_vminmax(78u, 111u, 32u, 1u, false);
    rt.unsupported(0x08B2EF80u, 0x2065726Fu, "unknown not lowered yet"); return;
L_08B2EF88:
    rt.unsupported(0x08B2EF88u, 0x00000073u, "special? not lowered yet"); return;
L_08B2EF8C:
    ctx.execute_vfpu_vscl_ct<68u, 105u, 114u, 1u>();
    rt.unsupported(0x08B2EF90u, 0x726F7463u, "unknown not lowered yet"); return;
L_08B2EFA0:
    ctx.execute_vfpu_vscl_ct<70u, 105u, 108u, 1u>();
    goto L_08B2EFA4;
L_08B2EFA4:
    rt.unsupported(0x08B2EFA4u, 0x20726F20u, "unknown not lowered yet"); return;
L_08B2EFBC:
    rt.unsupported(0x08B2EFBCu, 0x206F6F54u, "unknown not lowered yet"); return;
L_08B2EFD4:
    rt.unsupported(0x08B2EFD4u, 0x62206F4Eu, "vfpu0 not lowered yet"); return;
L_08B2EFF0:
    rt.unsupported(0x08B2EFF0u, 0x72646441u, "unknown not lowered yet"); return;
L_08B2F020:
    rt.unsupported(0x08B2F020u, 0x746F7250u, "unknown not lowered yet"); return;
L_08B2F040:
    rt.unsupported(0x08B2F040u, 0x6B636F53u, "unknown not lowered yet"); return;
L_08B2F060:
    rt.unsupported(0x08B2F060u, 0x746F7250u, "unknown not lowered yet"); return;
L_08B2F064:
    ctx.execute_vfpu_vcmp_ct<99u, 111u, 1u, 15u>();
    rt.unsupported(0x08B2F068u, 0x746F6E20u, "unknown not lowered yet"); return;
L_08B2F078:
    ctx.gpr[14] = (ctx.gpr[27] + static_cast<std::uint32_t>(24899));
    ctx.execute_vfpu_vscl_ct<116u, 32u, 115u, 1u>();
    rt.unsupported(0x08B2F080u, 0x6120646Eu, "vfpu0 not lowered yet"); return;
L_08B2F09C:
    rt.unsupported(0x08B2F09Cu, 0x6E6E6F43u, "vfpu3 not lowered yet"); return;
L_08B2F0B0:
    rt.unsupported(0x08B2F0B0u, 0x72646441u, "unknown not lowered yet"); return;
L_08B2F0C8:
    rt.unsupported(0x08B2F0C8u, 0x74666F53u, "unknown not lowered yet"); return;
L_08B2F0DC:
    rt.unsupported(0x08B2F0DCu, 0x69746365u, "unknown not lowered yet"); return;
L_08B2F0EC:
    // nop
    rt.unsupported(0x08B2F0F4u, 0x08AED870u, "control flow in delay slot"); return;
L_08B2F0F4:
    rt.unsupported(0x08B2F0F8u, 0x08AED884u, "control flow in delay slot"); return;
L_08B2F108:
    rt.unsupported(0x08B2F10Cu, 0x08AED8E8u, "control flow in delay slot"); return;
L_08B2F12C:
    rt.unsupported(0x08B2F130u, 0x08AED99Cu, "control flow in delay slot"); return;
L_08B2F140:
    rt.unsupported(0x08B2F144u, 0x08AEDA00u, "control flow in delay slot"); return;
L_08B2F150:
    rt.unsupported(0x08B2F154u, 0x08AEDA50u, "control flow in delay slot"); return;
L_08B2F178:
    rt.unsupported(0x08B2F17Cu, 0x08AEDB18u, "control flow in delay slot"); return;
L_08B2F1A0:
    rt.unsupported(0x08B2F1A4u, 0x08AEDB40u, "control flow in delay slot"); return;
L_08B2F1BC:
    rt.unsupported(0x08B2F1C0u, 0x08AEDDD4u, "control flow in delay slot"); return;
L_08B2F1D0:
    rt.unsupported(0x08B2F1D4u, 0x08AEDDD4u, "control flow in delay slot"); return;
L_08B2F1E0:
    rt.unsupported(0x08B2F1E4u, 0x08AEDB68u, "control flow in delay slot"); return;
L_08B2F214:
    rt.unsupported(0x08B2F218u, 0x08AEDDD4u, "control flow in delay slot"); return;
L_08B2F2B8:
    rt.unsupported(0x08B2F2BCu, 0x08AEE220u, "control flow in delay slot"); return;
L_08B2F2BC:
    rt.unsupported(0x08B2F2C0u, 0x08AEE220u, "control flow in delay slot"); return;
L_08B2F370:
    ctx.execute_vfpu_vhdp(45u, 73u, 110u, 1u);
    // nop
    jump_target = ctx.gpr[3];
    ctx.gpr[13] = (0x08B2F380u);
    rt.unsupported(0x08B2F37Cu, 0x004E614Eu, "special? not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B2F380u) goto L_08B2F380;
    return;
L_08B2F380:
    ctx.gpr[18] = (ctx.gpr[25] & 12592u);
    ctx.gpr[22] = (ctx.gpr[25] | 13620u);
    rt.unsupported(0x08B2F388u, 0x62613938u, "vfpu0 not lowered yet"); return;
L_08B2F394:
    ctx.execute_vfpu_vcmp_ct<110u, 117u, 1u, 8u>();
    ctx.gpr[5] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B2F39C;
L_08B2F39C:
    ctx.gpr[18] = (ctx.gpr[25] & 12592u);
    ctx.gpr[22] = (ctx.gpr[25] | 13620u);
    rt.unsupported(0x08B2F3A4u, 0x42413938u, "unknown not lowered yet"); return;
L_08B2F3B0:
    rt.unsupported(0x08B2F3B0u, 0x20677562u, "unknown not lowered yet"); return;
L_08B2F468:
    rt.unsupported(0x08B2F46Cu, 0x08AF013Cu, "control flow in delay slot"); return;
L_08B2F4A0:
    rt.unsupported(0x08B2F4A4u, 0x08AF0230u, "control flow in delay slot"); return;
L_08B2F5A8:
    rt.unsupported(0x08B2F5ACu, 0x08AF068Cu, "control flow in delay slot"); return;
L_08B2F5C8:
    ctx.gpr[18] = (ctx.gpr[25] & 12592u);
    ctx.gpr[22] = (ctx.gpr[25] | 13620u);
    rt.unsupported(0x08B2F5D0u, 0x62613938u, "vfpu0 not lowered yet"); return;
L_08B2F5DC:
    ctx.execute_vfpu_vcmp_ct<110u, 117u, 1u, 8u>();
    ctx.gpr[5] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B2F5E4;
L_08B2F5E4:
    ctx.gpr[18] = (ctx.gpr[25] & 12592u);
    ctx.gpr[22] = (ctx.gpr[25] | 13620u);
    rt.unsupported(0x08B2F5ECu, 0x42413938u, "unknown not lowered yet"); return;
L_08B2F5F8:
    rt.unsupported(0x08B2F5F8u, 0x20677562u, "unknown not lowered yet"); return;
L_08B2F60C:
    rt.unsupported(0x08B2F60Cu, 0x73616220u, "unknown not lowered yet"); return;
L_08B2F688:
    rt.unsupported(0x08B2F68Cu, 0x08AF1EB8u, "control flow in delay slot"); return;
L_08B2F72C:
    rt.unsupported(0x08B2F730u, 0x08AF1EB8u, "control flow in delay slot"); return;
L_08B2F758:
    rt.unsupported(0x08B2F75Cu, 0x08AF19A4u, "control flow in delay slot"); return;
L_08B2F780:
    rt.unsupported(0x08B2F780u, 0x0000002Eu, "special? not lowered yet"); return;
L_08B2F784:
    // nop
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 1u));
    rt.unsupported(0x08B2F78Cu, 0x494A2D43u, "cop2/vfpu not lowered yet"); return;
L_08B2F7A0:
    rt.unsupported(0x08B2F7A0u, 0x40C90FDBu, "unknown not lowered yet"); return;
L_08B2F7D0:
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[25]) < 17162 ? 1u : 0u);
    rt.unsupported(0x08B2F7D4u, 0x6E757220u, "vfpu3 not lowered yet"); return;
L_08B2F7E4:
    ctx.execute_vfpu_vminmax(116u, 101u, 114u, 1u, false);
    rt.unsupported(0x08B2F7E8u, 0x74616E69u, "unknown not lowered yet"); return;
L_08B2F81C:
    rt.unsupported(0x08B2F81Cu, 0x75746572u, "unknown not lowered yet"); return;
L_08B2F850:
    ctx.execute_vfpu_vscl_ct<105u, 110u, 116u, 1u>();
    ctx.execute_vfpu_vcmp_ct<110u, 97u, 1u, 2u>();
    rt.unsupported(0x08B2F858u, 0x72726520u, "unknown not lowered yet"); return;
L_08B2F894:
    rt.unsupported(0x08B2F894u, 0x6E69616Du, "vfpu3 not lowered yet"); return;
L_08B2F8A0:
    ctx.execute_vfpu_compare3(100u, 32u, 109u, 1u, 6u);
    rt.unsupported(0x08B2F8A4u, 0x74206572u, "unknown not lowered yet"); return;
L_08B2F8B4:
    rt.unsupported(0x08B2F8B4u, 0x75702061u, "unknown not lowered yet"); return;
L_08B2F8D8:
    rt.unsupported(0x08B2F8D8u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B2F8F0:
    rt.unsupported(0x08B2F8F0u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B2F90C:
    ctx.execute_vfpu_vscl_ct<102u, 114u, 101u, 1u>();
    rt.unsupported(0x08B2F910u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2F944:
    rt.unsupported(0x08B2F944u, 0x203A7325u, "unknown not lowered yet"); return;
L_08B2F968:
    rt.unsupported(0x08B2F96Cu, 0x08AF55D4u, "control flow in delay slot"); return;
L_08B2F988:
    rt.unsupported(0x08B2F988u, 0x6E695F65u, "vfpu3 not lowered yet"); return;
L_08B2F9A0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2F9B8;
L_08B2F9B8:
    ctx.gpr[18] = (31068u << 16u);
    (void)(ctx.gpr[3] & 25440u);
    ctx.gpr[20] = (rt.memory().aot_load_word_left(ctx.gpr[11] + static_cast<std::uint32_t>(31614), ctx.gpr[20]));
    ctx.gpr[23] = (ctx.gpr[19] & 34931u);
    ctx.gpr[18] = (ctx.gpr[17] & 12850u);
    goto L_08B2F9CC;
L_08B2F9CC:
    rt.unsupported(0x08B2F9CCu, 0x44444446u, "unsupported CFC1 control register"); return;
    goto L_08B2F9D0;
L_08B2F9D0:
    rt.unsupported(0x08B2F9D0u, 0x62733C00u, "vfpu0 not lowered yet"); return;
L_08B2F9DC:
    if (ctx.gpr[27] != ctx.gpr[5]) {
    rt.unsupported(0x08B2F9E0u, 0x4D657661u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 9u, 0x08B4872Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2F9E4;
L_08B2F9E0:
    rt.unsupported(0x08B2F9E0u, 0x4D657661u, "unknown not lowered yet"); return;
L_08B2F9E4:
    ctx.gpr[13] = (ctx.gpr[3] + ctx.gpr[14]);
    ctx.gpr[18] = (31068u << 16u);
    (void)(ctx.gpr[3] & 25440u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(31614))))));
    ctx.gpr[18] = (ctx.gpr[17] & 34163u);
    goto L_08B2F9F8;
L_08B2F9F8:
    ctx.gpr[18] = (ctx.gpr[17] & 12850u);
    rt.unsupported(0x08B2F9FCu, 0x44444446u, "unsupported CFC1 control register"); return;
    goto L_08B2FA00;
L_08B2FA00:
    rt.unsupported(0x08B2FA00u, 0x0032FFF9u, "special? not lowered yet"); return;
L_08B2FA0C:
    rt.unsupported(0x08B2FA0Cu, 0x050A0609u, "regimm? not lowered yet"); return;
L_08B2FA24:
    // nop
    // nop
    // nop
    goto L_08B2FA30;
L_08B2FA30:
    // nop
    // nop
    // nop
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<51u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(-936);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<51u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[14] + static_cast<std::uint32_t>(-1328);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    rt.unsupported(0x08B2FA6Cu, 0xF7DDF8D3u, "vfpu not lowered yet"); return;
L_08B2FA80:
    (void)(ctx.gpr[3] >> 0u);
    (void)(ctx.gpr[6] << (0u & 31u));
    jump_target = 0u;
    (void)(ctx.hi);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B2FAA0:
    (void)(0u << 8u);
    rt.unsupported(0x08B2FAA8u, 0x0C000800u, "control flow in delay slot"); return;
L_08B2FAAC:
    { const bool branch_taken = static_cast<std::int32_t>(0u) <= 0;
    (void)(0u & 8192u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 391u, 0x08B33AB0u>(ctx, &aot_mem); return;
      }
      goto L_08B2FAB4;
    }
L_08B2FAB4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    goto L_08B2FABC;
L_08B2FABC:
    // nop
    ctx.gpr[18] = (31068u << 16u);
    (void)(ctx.gpr[3] & 25440u);
    rt.unsupported(0x08B2FAC8u, 0x75747B7Eu, "unknown not lowered yet"); return;
L_08B2FAD8:
    rt.unsupported(0x08B2FAD8u, 0x40C90FDBu, "unknown not lowered yet"); return;
L_08B2FAF0:
    (void)(0u << 16u);
    rt.memory().aot_store_word_right(ctx.gpr[10] + static_cast<std::uint32_t>(-24793), ctx.gpr[11]);
    ctx.gpr[8] = (32796u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    rt.unsupported(0x08B2FB00u, 0x40C90FDBu, "unknown not lowered yet"); return;
L_08B2FB0C:
    rt.memory().aot_store_word_right(ctx.gpr[10] + static_cast<std::uint32_t>(-24793), ctx.gpr[11]);
    ctx.gpr[8] = (32796u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    (void)(0u << 16u);
    rt.memory().aot_store_word_right(ctx.gpr[21] + static_cast<std::uint32_t>(-11215), ctx.gpr[19]);
    ctx.gpr[10] = (42747u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    (void)(0u << 16u);
    goto L_08B2FB2C;
L_08B2FB2C:
    ctx.gpr[11] = (44145u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[11] = (2303u << 16u);
    ctx.gpr[20] = (5069u << 16u);
    ctx.gpr[9] = (4059u << 16u);
    ctx.gpr[9] = (4059u << 16u);
    goto L_08B2FB4C;
L_08B2FB4C:
    ctx.gpr[9] = (4059u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    // nop
    rt.unsupported(0x08B2FB5Cu, 0x40F00000u, "unknown not lowered yet"); return;
L_08B2FB68:
    // nop
    rt.unsupported(0x08B2FB6Cu, 0xC1E00000u, "unknown not lowered yet"); return;
L_08B2FBE0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FC54;
L_08B2FC54:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FC80;
L_08B2FC80:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FC9C;
L_08B2FC9C:
    // nop
    // nop
    goto L_08B2FCA4;
L_08B2FCA4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FCC0;
L_08B2FCC0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FD70;
L_08B2FD70:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FD98;
L_08B2FD98:
    // nop
    // nop
    // nop
    goto L_08B2FDA4;
L_08B2FDA4:
    // nop
    // nop
    // nop
    goto L_08B2FDB0;
L_08B2FDB0:
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FDC0;
L_08B2FDC0:
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FDD0;
L_08B2FDD0:
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FDE0;
L_08B2FDE0:
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FDF0;
L_08B2FDF0:
    // nop
    // nop
    // nop
    goto L_08B2FDFC;
L_08B2FDFC:
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FE0C;
L_08B2FE0C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FE28;
L_08B2FE28:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FE60;
L_08B2FE60:
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FE70;
L_08B2FE70:
    // nop
    // nop
    // nop
    goto L_08B2FE7C;
L_08B2FE7C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FEB0;
L_08B2FEB0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FECC;
L_08B2FECC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FF1C;
L_08B2FF1C:
    // nop
    // nop
    // nop
    goto L_08B2FF28;
L_08B2FF28:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FF40;
L_08B2FF40:
    rt.unsupported(0x08B2FF44u, 0x08804378u, "control flow in delay slot"); return;
L_08B2FF60:
    rt.unsupported(0x08B2FF64u, 0x088040FCu, "control flow in delay slot"); return;
L_08B2FF78:
    rt.unsupported(0x08B2FF7Cu, 0x088044C8u, "control flow in delay slot"); return;
L_08B2FF88:
    rt.unsupported(0x08B2FF8Cu, 0x0880474Cu, "control flow in delay slot"); return;
L_08B2FF98:
    rt.unsupported(0x08B2FF9Cu, 0x088045E4u, "control flow in delay slot"); return;
L_08B2FFA4:
    // nop
    ctx.pc = 0x02011D30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B2FFB0:
    rt.unsupported(0x08B2FFB4u, 0x08804AF0u, "control flow in delay slot"); return;
L_08B2FFCC:
    rt.unsupported(0x08B2FFD0u, 0x08B0C6B8u, "control flow in delay slot"); return;
}

void recomp_unit_0202(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0202_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_202(Runtime &runtime) {
    runtime.register_generated_unit(202u, 0x08B2C000u, 16384u, &recomp_unit_0202, &recomp_unit_0202_entry);
    runtime.register_function(0x08B2C020u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C028u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C030u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C03Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C088u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C098u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C0CCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C0D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C0DCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C0E4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C0ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C0F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C0F8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C104u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C10Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C128u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C144u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C148u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C14Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C150u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C158u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C168u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C184u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C1A4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C1C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C1DCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C1E4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C1F4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C20Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C21Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C230u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C23Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C244u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C250u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C258u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C260u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C264u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C268u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C270u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C294u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C298u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C29Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C2B8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C2D0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C2E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C2E8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C2F4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C300u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C308u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C318u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C320u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C328u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C338u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C340u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C360u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C364u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C368u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C36Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C370u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C378u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C380u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C384u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C38Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C394u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C39Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C3A4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C3ACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C3B4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C3B8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C3C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C3E8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C400u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C404u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C418u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C430u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C434u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C43Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C45Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C46Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C470u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C484u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C498u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C4A4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C4C0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C4C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C4D0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C500u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C51Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C524u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C548u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C56Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C600u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C62Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C630u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C728u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C72Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C754u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C78Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C7A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C7BCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C7C0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C7C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C7E8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C7F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C820u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C860u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C8E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C8ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C8F4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C900u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C90Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C920u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C92Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C93Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C948u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C954u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C958u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C968u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C978u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C988u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C994u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C9A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C9B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C9C0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C9D0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C9E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C9ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C9F4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C9F8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA00u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA08u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA14u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA1Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA20u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA24u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA30u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA44u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA50u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA64u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA6Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA78u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA88u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA9Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CAACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CABCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CAC4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CACCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CAD8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CAE0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CAECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB04u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB0Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB14u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB24u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB2Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB3Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB48u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB60u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB70u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB7Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB94u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB98u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CBACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CBB0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CBB4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CBC4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CBCCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CBD8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CBDCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CBE8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CBECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC18u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC1Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC2Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC3Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC54u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC7Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC88u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC90u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC94u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CCA4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CCB4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CCC4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CCD4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CCE4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CCF4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD04u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD14u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD28u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD38u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD50u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD68u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD7Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD9Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CDA4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CDACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CDB8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CDC4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CDD0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CDD4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CDDCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CDE0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CDF8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CDFCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE04u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE0Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE14u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE20u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE34u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE50u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE64u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE7Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE90u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CEA8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CEBCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CEC8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CEE4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CF08u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CF30u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CF5Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CF74u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CFB4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CFBCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CFDCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CFE4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CFF8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D010u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D018u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D028u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D040u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D050u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D06Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D088u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D094u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D0A4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D0ACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D0B8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D0C4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D0D0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D0DCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D0E8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D0F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D114u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D138u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D16Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D180u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D190u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D1A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D1B8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D1C0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D1C4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D1E4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D1ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D20Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D210u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D224u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D22Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D238u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D24Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D25Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D260u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D280u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D2E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D2E8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D2F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D2F8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D300u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D308u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D30Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D318u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D324u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D330u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D33Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D348u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D360u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D374u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D388u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D3B4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D3C4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D3C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D3F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D400u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D424u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D448u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D450u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D458u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D46Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D474u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D47Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D4A4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D4B8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D4CCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D4FCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D528u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D55Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D580u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D590u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D5A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D5CCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D5F8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D614u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D620u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D640u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D658u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D678u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D698u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D6ACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D6B4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D6D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D6E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D700u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D70Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D714u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D734u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D758u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D75Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D788u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D79Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D7A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D7C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D7ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D80Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D824u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D838u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D850u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D870u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D88Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D8ACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D8BCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D8C0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D8D0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D8E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D8F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D908u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D924u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D94Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D960u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D96Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D974u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D97Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D9A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D9C4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D9D0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D9F8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA1Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA28u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA30u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA48u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA5Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA60u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA70u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA78u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA84u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA8Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA94u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA9Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DAACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DAB0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DABCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DAC8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DAD4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DAE8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB04u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB1Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB20u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB3Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB54u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB74u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB8Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB90u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DBACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DBC4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DBC8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DBCCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DBE0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DBF4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DBF8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC08u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC0Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC1Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC24u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC30u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC38u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC40u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC48u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC50u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC60u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC64u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC68u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC70u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC78u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC7Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC84u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC8Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC94u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC98u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCA0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCA8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCB0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCB8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCC0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCC4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCC8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCD0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCD8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCE0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCF0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCF4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCF8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD00u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD04u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD08u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD10u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD18u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD20u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD28u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD30u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD38u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD40u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD48u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD50u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD54u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD60u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD68u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD70u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD78u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD80u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD84u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD88u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD90u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD98u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDA0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDA8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDBCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDC8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDD0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDD8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDE8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDF4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDFCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE08u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE10u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE14u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE18u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE20u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE24u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE2Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE34u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE3Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE44u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE4Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE50u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE60u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE64u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE68u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE70u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE78u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE80u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE88u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE8Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE90u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE98u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEA0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEA8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEB0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEB8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEC0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEC8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DED0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DED8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEE0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEE8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEF0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEF4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEF8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEFCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF00u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF08u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF10u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF18u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF20u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF28u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF30u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF44u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF48u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF54u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF64u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF68u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF6Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF78u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF9Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DFBCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DFD8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DFF0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DFF4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E014u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E038u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E04Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E054u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E074u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E098u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E0BCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E0C0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E0E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E100u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E120u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E144u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E168u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E170u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E18Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E1ACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E1B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E1D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E1F8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E218u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E23Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E240u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E260u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E284u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E2A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E2C4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E2E4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E2E8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E308u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E32Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E34Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E370u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E394u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E3B8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E3D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E3F8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E41Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E438u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E454u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E474u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E490u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E4A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E4B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E4B4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E4BCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E4D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E4E8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E4F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E4F8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E500u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E508u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E510u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E518u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E51Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E520u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E528u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E530u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E538u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E540u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E548u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E550u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E558u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E55Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E560u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E568u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E570u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E578u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E580u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E588u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E590u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E598u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5DCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5F8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5FCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E610u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E618u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E63Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E654u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E660u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E664u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E66Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E670u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E680u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E688u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E68Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E694u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E698u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E6A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E6A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E6B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E6BCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E6C4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E6CCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E6D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E6E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E6E4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E6ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E6F8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E6FCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E708u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E714u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E720u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E724u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E72Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E744u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E790u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E79Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E7A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E7A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E7D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E7E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E7E8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E8FCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E96Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EA68u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EA90u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EA9Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EAC8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EAD4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EAF0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EB00u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EB18u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EB24u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EB40u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EB54u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EB68u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EB78u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EB84u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EB94u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EB98u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EBACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EBB8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EBC0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EBCCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EBE4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EBFCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC08u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC1Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC2Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC38u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC3Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC4Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC60u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC80u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC94u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ECACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ECBCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ECCCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ECDCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ECE4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ECF4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED0Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED1Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED28u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED38u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED4Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED50u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED68u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED6Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED7Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED88u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED8Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED90u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EDA0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EDA4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EDB8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EDCCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EDDCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EDECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EDF8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE0Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE24u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE34u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE44u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE4Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE68u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE7Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE88u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE8Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EEA0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EEB0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EEB8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EED4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EED8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EEF8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EF08u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EF38u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EF48u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EF60u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EF68u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EF7Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EF88u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EF8Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EFA0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EFA4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EFBCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EFD4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EFF0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F020u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F040u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F060u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F064u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F078u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F09Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F0B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F0C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F0DCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F0ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F0F4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F108u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F12Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F140u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F150u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F178u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F1A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F1BCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F1D0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F1E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F214u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F2B8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F2BCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F370u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F380u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F394u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F39Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F3B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F468u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F4A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F5A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F5C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F5DCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F5E4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F5F8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F60Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F688u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F72Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F758u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F780u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F784u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F7A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F7D0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F7E4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F81Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F850u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F894u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F8A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F8B4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F8D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F8F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F90Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F944u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F968u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F988u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F9A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F9B8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F9CCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F9D0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F9DCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F9E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F9E4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F9F8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FA00u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FA0Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FA24u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FA30u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FA80u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FAA0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FAACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FAB4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FABCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FAD8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FAF0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FB0Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FB2Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FB4Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FB68u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FBE0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FC54u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FC80u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FC9Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FCA4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FCC0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FD70u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FD98u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FDA4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FDB0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FDC0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FDD0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FDE0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FDF0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FDFCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FE0Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FE28u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FE60u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FE70u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FE7Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FEB0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FECCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FF1Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FF28u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FF40u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FF60u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FF78u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FF88u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FF98u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FFA4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FFB0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FFCCu, &recomp_unit_0202, "recomp_unit_0202");
}
} // namespace psprecomp
