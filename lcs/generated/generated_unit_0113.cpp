#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0113[4092] = {
    1, 0, 2, 3, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0,
    0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 18,
    0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 21, 0, 22, 0, 23, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 31, 0, 32,
    0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 0, 42, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0,
    45, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 52, 0, 0, 53,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 58, 0,
    0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65,
    0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 71, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0,
    0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0,
    88, 0, 0, 89, 0, 90, 0, 0, 0, 91, 0, 0, 92, 93, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 97,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0,
    0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 109, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 114,
    0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 119, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0,
    0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137,
    0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148,
    0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0,
    0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 163, 0, 164, 165, 0, 0, 0, 0, 0, 0, 166,
    0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 173, 0,
    174, 0, 0, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0,
    0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 0, 197, 0, 198, 0, 199,
    0, 200, 0, 201, 0, 202, 0, 0, 203, 0, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0,
    0, 212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0,
    220, 0, 0, 221, 0, 0, 0, 222, 0, 223, 0, 0, 0, 224, 0, 225, 0, 226, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 233, 0, 234,
    0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0,
    242, 0, 243, 0, 0, 244, 0, 245, 0, 0, 246, 0, 247, 0, 248, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 256, 0, 257,
    0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 264,
    0, 265, 0, 0, 266, 0, 267, 0, 0, 268, 0, 269, 0, 270, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 277, 0,
    0, 278, 0, 279, 0, 280, 0, 281, 0, 282, 0, 0, 283, 0, 284, 0, 0, 285, 0, 0, 0, 0, 286, 0, 287, 288, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 294, 0,
    0, 295, 0, 0, 296, 0, 297, 0, 298, 0, 0, 0, 299, 0, 0, 300, 0, 301, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 306,
    0, 307, 0, 308, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 0, 312, 0, 313, 314, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0,
    321, 0, 322, 0, 323, 324, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 327, 0, 328, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0,
    331, 0, 332, 0, 0, 333, 0, 334, 0, 335, 0, 336, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 341,
    0, 342, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 346, 0, 0, 0, 347, 0, 348, 0, 0, 349, 0, 350, 0, 0, 351, 0, 0, 352, 0, 0, 0, 353, 0, 354, 0, 355, 0, 0, 0, 356, 0,
    0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0,
    0, 0, 0, 0, 0, 368, 0, 369, 0, 370, 0, 0, 0, 0, 0, 371, 0, 372, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0,
    376, 0, 0, 0, 0, 0, 377, 0, 0, 378, 0, 379, 0, 380, 0, 381, 0, 382, 0, 383, 0, 0, 384, 0, 385, 0, 0, 386, 0, 387, 0, 0,
    0, 388, 0, 389, 0, 0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0,
    0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 398, 0, 399, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0,
    0, 403, 0, 404, 0, 405, 0, 406, 0, 407, 0, 0, 408, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 412, 0, 413, 0, 0, 414,
    0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0,
    419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0,
    425, 0, 0, 426, 0, 0, 0, 427, 0, 428, 0, 0, 429, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0,
    0, 438, 0, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 0,
    0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 448, 0,
    0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0,
    454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 458, 0, 459, 0, 460, 0, 461, 0, 462,
    0, 463, 0, 464, 0, 465, 0, 466, 0, 0, 467, 0, 0, 468, 0, 469, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 473, 0, 474,
    0, 475, 0, 476, 0, 477, 0, 0, 478, 0, 0, 479, 0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 0, 482, 0, 483, 0, 484, 0, 485, 0, 486,
    0, 487, 0, 488, 0, 0, 489, 0, 0, 490, 0, 0, 491, 0, 492, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0,
    496, 0, 497, 0, 498, 0, 499, 0, 500, 0, 501, 0, 502, 0, 0, 503, 0, 504, 0, 505, 506, 0, 507, 0, 0, 0, 508, 0, 509, 0, 510, 0,
    0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 516, 0, 0, 517,
    0, 518, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 521, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0,
    525, 0, 0, 0, 0, 0, 0, 0, 526, 0, 527, 0, 528, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0, 0, 0, 0, 0, 534,
    0, 0, 535, 0, 0, 536, 537, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0,
    0, 0, 0, 0, 0, 543, 0, 544, 0, 0, 545, 0, 0, 546, 0, 547, 0, 0, 548, 549, 0, 0, 0, 550, 0, 551, 0, 0, 0, 0, 0, 552,
    0, 553, 0, 554, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 557, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 560, 0, 0, 561, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 563, 0, 0, 0, 0, 0, 0, 564, 565, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 568,
    0, 0, 0, 569, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 572, 0, 0, 573, 0, 0, 0, 574, 0, 575,
    0, 576, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 578, 579, 0, 0, 580, 581, 0, 0, 582, 0, 583, 0, 0, 584, 0, 585, 0, 0, 0, 586, 0, 0, 587, 0, 588, 0, 0, 589, 0, 590, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 592, 0, 0, 0, 593, 0, 0, 0, 594, 0, 0, 595, 0, 0, 596, 597,
    0, 0, 0, 598, 599, 0, 600, 601, 0, 0, 602, 0, 603, 0, 0, 604, 0, 605, 0, 0, 0, 606, 0, 0, 607, 0, 608, 0, 0, 609, 0, 610,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 0, 613, 0, 0, 0, 614, 0, 615, 0, 0, 616, 617, 0,
    0, 0, 618, 619, 620, 0, 621, 0, 622, 0, 0, 623, 624, 0, 0, 625, 0, 626, 0, 0, 627, 0, 628, 0, 0, 0, 629, 0, 0, 0, 630, 0,
    0, 0, 631, 0, 632, 0, 0, 633, 0, 634, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 636, 0, 0, 0, 637, 0, 0, 0, 638,
    639, 0, 0, 640, 641, 0, 0, 0, 642, 643, 0, 644, 645, 0, 0, 646, 0, 647, 0, 0, 648, 0, 649, 0, 0, 0, 650, 0, 0, 0, 651, 0,
    0, 0, 652, 0, 653, 0, 0, 654, 0, 655, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 657, 0, 0, 0, 658, 0, 0, 0, 659,
    660, 0, 0, 661, 662, 0, 0, 0, 663, 664, 665, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 670, 0, 0, 671, 0, 672, 0, 673, 0, 0, 0, 674, 0,
    675, 0, 676, 0, 677, 0, 678, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 681, 0, 682, 0, 0, 683, 0, 684, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 685, 0, 686, 0, 687, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 689, 0, 690, 0, 0, 0, 0, 691, 0, 0,
    0, 0, 692, 0, 0, 693, 0, 694, 0, 695, 0, 0, 0, 696, 0, 0, 697, 0, 698, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 700, 0, 701,
    0, 0, 702, 0, 703, 0, 704, 0, 705, 0, 706, 0, 707, 0, 0, 0, 0, 708, 0, 0, 0, 0, 709, 0, 0, 0, 710, 0, 0, 0, 0, 0,
    711, 0, 0, 0, 712, 0, 0, 713, 0, 714, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 717, 0, 0, 0, 0, 718,
    0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0,
    0, 0, 721, 0, 722, 0, 723, 0, 724, 0, 725, 0, 726, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 729, 0,
    0, 0, 730, 0, 731, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 734, 0,
    0, 0, 735, 0, 736, 0, 0, 0, 0, 737, 0, 0, 738, 0, 0, 0, 739, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 741, 742, 0, 743,
    0, 744, 0, 745, 0, 0, 0, 0, 0, 746, 0, 747, 0, 0, 748, 0, 0, 0, 0, 749, 0, 750, 0, 0, 751, 0, 0, 752, 0, 0, 753, 0,
    0, 0, 0, 754, 0, 0, 0, 0, 755, 0, 0, 0, 0, 756, 0, 757, 0, 758, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 761,
    0, 0, 0, 0, 762, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 766, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769, 770, 0, 0, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 772, 773, 0, 0, 0, 0, 0, 0, 0, 0, 774, 0, 775,
    776, 0, 0, 0, 0, 0, 777, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 780, 0, 0, 781, 0, 0, 782, 0, 0, 783, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 784, 0, 785, 786, 0, 0, 0, 0, 787, 0, 0, 788, 0, 0, 789, 0, 790, 791, 0, 0, 792,
    0, 793, 0, 0, 0, 794, 795, 0, 0, 796, 0, 0, 0, 0, 797, 798, 0, 799, 0, 0, 800, 0, 0, 0, 801, 0, 802, 0, 0, 803, 0, 804,
    0, 0, 0, 0, 805, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 807,
    808, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 809, 0, 810, 0, 0, 0, 0, 0, 0, 811, 0, 0, 812, 0, 0, 0, 0, 813, 0,
    0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 815, 0, 0, 816, 0, 0, 817, 0, 0, 818, 0, 819, 0, 0, 0, 820, 821, 0, 0, 0, 0,
    0, 0, 822, 0, 823, 0, 0, 0, 0, 0, 824, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 826, 0, 827, 0, 0, 0, 0, 0, 828, 0, 0,
    0, 0, 829, 0, 0, 0, 830, 0, 0, 0, 831, 0, 832, 0, 0, 0, 833, 0, 834, 0, 0, 835, 0, 836, 0, 0, 837, 0, 838, 839, 0, 840,
    0, 841, 0, 0, 0, 0, 0, 0, 0, 842, 0, 0, 843, 0, 0, 0, 0, 844, 0, 0, 0, 0, 0, 845, 0, 0, 846, 0, 0, 0, 0, 0,
    0, 847, 0, 848, 0, 0, 0, 0, 0, 849, 0, 0, 0, 0, 850, 0, 0, 0, 851, 0, 0, 852, 0, 0, 853, 0, 854, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 855, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 856, 0, 0, 0, 0, 0, 857, 0, 0, 0,
    0, 0, 858, 0, 859, 860, 0, 0, 861, 0, 0, 862, 0, 0, 0, 0, 863, 0, 0, 0, 864, 0, 0, 0, 865, 0, 0, 0, 0, 0, 866, 0,
    0, 867, 0, 868, 0, 0, 0, 0, 869, 0, 0, 0, 0, 0, 870, 0, 0, 0, 0, 0, 871, 0, 0, 0, 0, 0, 872, 0, 873, 874, 0, 0,
    875, 0, 0, 876, 0, 0, 0, 0, 877, 0, 0, 0, 878, 0, 0, 0, 879, 0, 0, 0, 0, 0, 880, 0, 0, 881, 0, 882, 0, 0, 0, 0,
    883, 0, 0, 0, 0, 0, 884, 0, 0, 0, 0, 0, 0, 885, 0, 0, 0, 0, 0, 886, 0, 887, 888, 0, 0, 889, 0, 0, 0, 890, 0, 0,
    0, 0, 891, 0, 0, 0, 892, 0, 0, 0, 893, 0, 0, 894, 0, 0, 0, 0, 0, 895, 0, 0, 896, 0, 897, 0, 0, 0, 0, 898, 0, 0,
    0, 0, 0, 899, 0, 0, 0, 0, 0, 900, 0, 0, 0, 0, 0, 901, 0, 902, 903, 0, 0, 904, 0, 0, 905, 0, 0, 0, 0, 906, 0, 0,
    0, 907, 0, 0, 0, 908, 0, 0, 0, 0, 0, 909, 0, 0, 910, 0, 911, 0, 0, 0, 0, 912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 913, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 914, 0, 0, 0, 0, 0, 915, 0, 0, 0, 0, 0, 916,
    0, 917, 918, 0, 0, 919, 0, 0, 920, 0, 0, 0, 921, 0, 922, 0, 923, 0, 924, 0, 0, 0, 925, 0, 926, 0, 0, 927, 0, 928, 0, 0,
    0, 929, 0, 0, 0, 0, 0, 930, 0, 0, 0, 0, 931, 0, 0, 0, 0, 0, 932, 0, 0, 0, 0, 0, 933, 0, 0, 0, 0, 0, 934, 0,
    935, 936, 0, 0, 937, 0, 0, 938, 0, 0, 0, 939, 0, 940, 0, 941, 0, 942, 0, 0, 0, 943, 0, 944, 0, 945, 0, 946,
};
void recomp_unit_0113_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089C8004u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0113[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089C8004;
    case 2u: goto L_089C800C;
    case 3u: goto L_089C8010;
    case 4u: goto L_089C8018;
    case 5u: goto L_089C8028;
    case 6u: goto L_089C8038;
    case 7u: goto L_089C8040;
    case 8u: goto L_089C8070;
    case 9u: goto L_089C8080;
    case 10u: goto L_089C80CC;
    case 11u: goto L_089C80FC;
    case 12u: goto L_089C8108;
    case 13u: goto L_089C8128;
    case 14u: goto L_089C8144;
    case 15u: goto L_089C8154;
    case 16u: goto L_089C8164;
    case 17u: goto L_089C8174;
    case 18u: goto L_089C8180;
    case 19u: goto L_089C8190;
    case 20u: goto L_089C8198;
    case 21u: goto L_089C81B0;
    case 22u: goto L_089C81B8;
    case 23u: goto L_089C81C0;
    case 24u: goto L_089C81CC;
    case 25u: goto L_089C81E0;
    case 26u: goto L_089C8234;
    case 27u: goto L_089C8240;
    case 28u: goto L_089C8248;
    case 29u: goto L_089C8268;
    case 30u: goto L_089C8270;
    case 31u: goto L_089C8278;
    case 32u: goto L_089C8280;
    case 33u: goto L_089C829C;
    case 34u: goto L_089C82A4;
    case 35u: goto L_089C82B0;
    case 36u: goto L_089C82BC;
    case 37u: goto L_089C82D4;
    case 38u: goto L_089C82DC;
    case 39u: goto L_089C831C;
    case 40u: goto L_089C832C;
    case 41u: goto L_089C8338;
    case 42u: goto L_089C8344;
    case 43u: goto L_089C8348;
    case 44u: goto L_089C8370;
    case 45u: goto L_089C8384;
    case 46u: goto L_089C8390;
    case 47u: goto L_089C839C;
    case 48u: goto L_089C83A8;
    case 49u: goto L_089C8444;
    case 50u: goto L_089C845C;
    case 51u: goto L_089C846C;
    case 52u: goto L_089C8474;
    case 53u: goto L_089C8480;
    case 54u: goto L_089C84B0;
    case 55u: goto L_089C84C0;
    case 56u: goto L_089C84E0;
    case 57u: goto L_089C84E8;
    case 58u: goto L_089C84FC;
    case 59u: goto L_089C850C;
    case 60u: goto L_089C852C;
    case 61u: goto L_089C8534;
    case 62u: goto L_089C8540;
    case 63u: goto L_089C8548;
    case 64u: goto L_089C8570;
    case 65u: goto L_089C8580;
    case 66u: goto L_089C859C;
    case 67u: goto L_089C85B8;
    case 68u: goto L_089C85C0;
    case 69u: goto L_089C85D8;
    case 70u: goto L_089C85E4;
    case 71u: goto L_089C8608;
    case 72u: goto L_089C8610;
    case 73u: goto L_089C861C;
    case 74u: goto L_089C8624;
    case 75u: goto L_089C8640;
    case 76u: goto L_089C866C;
    case 77u: goto L_089C8674;
    case 78u: goto L_089C867C;
    case 79u: goto L_089C86E4;
    case 80u: goto L_089C86F4;
    case 81u: goto L_089C8718;
    case 82u: goto L_089C8720;
    case 83u: goto L_089C872C;
    case 84u: goto L_089C8744;
    case 85u: goto L_089C8754;
    case 86u: goto L_089C876C;
    case 87u: goto L_089C877C;
    case 88u: goto L_089C8784;
    case 89u: goto L_089C8790;
    case 90u: goto L_089C8798;
    case 91u: goto L_089C87A8;
    case 92u: goto L_089C87B4;
    case 93u: goto L_089C87B8;
    case 94u: goto L_089C87C4;
    case 95u: goto L_089C87DC;
    case 96u: goto L_089C87EC;
    case 97u: goto L_089C8800;
    case 98u: goto L_089C8814;
    case 99u: goto L_089C8844;
    case 100u: goto L_089C8864;
    case 101u: goto L_089C8878;
    case 102u: goto L_089C8890;
    case 103u: goto L_089C889C;
    case 104u: goto L_089C88B8;
    case 105u: goto L_089C88CC;
    case 106u: goto L_089C88E4;
    case 107u: goto L_089C88F0;
    case 108u: goto L_089C892C;
    case 109u: goto L_089C8930;
    case 110u: goto L_089C8948;
    case 111u: goto L_089C8954;
    case 112u: goto L_089C8960;
    case 113u: goto L_089C8974;
    case 114u: goto L_089C8980;
    case 115u: goto L_089C8990;
    case 116u: goto L_089C89A4;
    case 117u: goto L_089C89C8;
    case 118u: goto L_089C8A04;
    case 119u: goto L_089C8A08;
    case 120u: goto L_089C8A20;
    case 121u: goto L_089C8A28;
    case 122u: goto L_089C8A34;
    case 123u: goto L_089C8A48;
    case 124u: goto L_089C8A54;
    case 125u: goto L_089C8A60;
    case 126u: goto L_089C8A74;
    case 127u: goto L_089C8A98;
    case 128u: goto L_089C8AB0;
    case 129u: goto L_089C8ABC;
    case 130u: goto L_089C8AD4;
    case 131u: goto L_089C8AE0;
    case 132u: goto L_089C8AFC;
    case 133u: goto L_089C8B20;
    case 134u: goto L_089C8B28;
    case 135u: goto L_089C8B48;
    case 136u: goto L_089C8B5C;
    case 137u: goto L_089C8B80;
    case 138u: goto L_089C8B9C;
    case 139u: goto L_089C8BB0;
    case 140u: goto L_089C8C04;
    case 141u: goto L_089C8C0C;
    case 142u: goto L_089C8C28;
    case 143u: goto L_089C8C30;
    case 144u: goto L_089C8C9C;
    case 145u: goto L_089C8CB8;
    case 146u: goto L_089C8CD4;
    case 147u: goto L_089C8CE4;
    case 148u: goto L_089C8D00;
    case 149u: goto L_089C8D14;
    case 150u: goto L_089C8D24;
    case 151u: goto L_089C8D2C;
    case 152u: goto L_089C8D44;
    case 153u: goto L_089C8D4C;
    case 154u: goto L_089C8D60;
    case 155u: goto L_089C8D84;
    case 156u: goto L_089C8D94;
    case 157u: goto L_089C8DA8;
    case 158u: goto L_089C8DB8;
    case 159u: goto L_089C8DE8;
    case 160u: goto L_089C8E08;
    case 161u: goto L_089C8E38;
    case 162u: goto L_089C8E40;
    case 163u: goto L_089C8E58;
    case 164u: goto L_089C8E60;
    case 165u: goto L_089C8E64;
    case 166u: goto L_089C8E80;
    case 167u: goto L_089C8E98;
    case 168u: goto L_089C8EA0;
    case 169u: goto L_089C8EB8;
    case 170u: goto L_089C8ED8;
    case 171u: goto L_089C8EE8;
    case 172u: goto L_089C8EF4;
    case 173u: goto L_089C8EFC;
    case 174u: goto L_089C8F04;
    case 175u: goto L_089C8F14;
    case 176u: goto L_089C8F1C;
    case 177u: goto L_089C8F24;
    case 178u: goto L_089C8F2C;
    case 179u: goto L_089C8F34;
    case 180u: goto L_089C8F3C;
    case 181u: goto L_089C8F54;
    case 182u: goto L_089C8F5C;
    case 183u: goto L_089C8F74;
    case 184u: goto L_089C8FC8;
    case 185u: goto L_089C8FD4;
    case 186u: goto L_089C8FF0;
    case 187u: goto L_089C8FFC;
    case 188u: goto L_089C9008;
    case 189u: goto L_089C9018;
    case 190u: goto L_089C9028;
    case 191u: goto L_089C9034;
    case 192u: goto L_089C9044;
    case 193u: goto L_089C904C;
    case 194u: goto L_089C9054;
    case 195u: goto L_089C905C;
    case 196u: goto L_089C9064;
    case 197u: goto L_089C9070;
    case 198u: goto L_089C9078;
    case 199u: goto L_089C9080;
    case 200u: goto L_089C9088;
    case 201u: goto L_089C9090;
    case 202u: goto L_089C9098;
    case 203u: goto L_089C90A4;
    case 204u: goto L_089C90B0;
    case 205u: goto L_089C90B8;
    case 206u: goto L_089C90C0;
    case 207u: goto L_089C90C8;
    case 208u: goto L_089C90D0;
    case 209u: goto L_089C90D8;
    case 210u: goto L_089C90E4;
    case 211u: goto L_089C90FC;
    case 212u: goto L_089C9108;
    case 213u: goto L_089C9110;
    case 214u: goto L_089C9118;
    case 215u: goto L_089C9120;
    case 216u: goto L_089C9128;
    case 217u: goto L_089C9150;
    case 218u: goto L_089C9168;
    case 219u: goto L_089C9178;
    case 220u: goto L_089C9184;
    case 221u: goto L_089C9190;
    case 222u: goto L_089C91A0;
    case 223u: goto L_089C91A8;
    case 224u: goto L_089C91B8;
    case 225u: goto L_089C91C0;
    case 226u: goto L_089C91C8;
    case 227u: goto L_089C91CC;
    case 228u: goto L_089C91F8;
    case 229u: goto L_089C9230;
    case 230u: goto L_089C9248;
    case 231u: goto L_089C925C;
    case 232u: goto L_089C926C;
    case 233u: goto L_089C9278;
    case 234u: goto L_089C9280;
    case 235u: goto L_089C92A4;
    case 236u: goto L_089C92AC;
    case 237u: goto L_089C92B8;
    case 238u: goto L_089C92C0;
    case 239u: goto L_089C92D8;
    case 240u: goto L_089C92E8;
    case 241u: goto L_089C92F8;
    case 242u: goto L_089C9304;
    case 243u: goto L_089C930C;
    case 244u: goto L_089C9318;
    case 245u: goto L_089C9320;
    case 246u: goto L_089C932C;
    case 247u: goto L_089C9334;
    case 248u: goto L_089C933C;
    case 249u: goto L_089C9340;
    case 250u: goto L_089C9370;
    case 251u: goto L_089C93A8;
    case 252u: goto L_089C93C0;
    case 253u: goto L_089C93D4;
    case 254u: goto L_089C93E4;
    case 255u: goto L_089C93F0;
    case 256u: goto L_089C93F8;
    case 257u: goto L_089C9400;
    case 258u: goto L_089C9410;
    case 259u: goto L_089C9418;
    case 260u: goto L_089C943C;
    case 261u: goto L_089C9454;
    case 262u: goto L_089C9464;
    case 263u: goto L_089C9474;
    case 264u: goto L_089C9480;
    case 265u: goto L_089C9488;
    case 266u: goto L_089C9494;
    case 267u: goto L_089C949C;
    case 268u: goto L_089C94A8;
    case 269u: goto L_089C94B0;
    case 270u: goto L_089C94B8;
    case 271u: goto L_089C94BC;
    case 272u: goto L_089C94EC;
    case 273u: goto L_089C953C;
    case 274u: goto L_089C9548;
    case 275u: goto L_089C9560;
    case 276u: goto L_089C956C;
    case 277u: goto L_089C957C;
    case 278u: goto L_089C9588;
    case 279u: goto L_089C9590;
    case 280u: goto L_089C9598;
    case 281u: goto L_089C95A0;
    case 282u: goto L_089C95A8;
    case 283u: goto L_089C95B4;
    case 284u: goto L_089C95BC;
    case 285u: goto L_089C95C8;
    case 286u: goto L_089C95DC;
    case 287u: goto L_089C95E4;
    case 288u: goto L_089C95E8;
    case 289u: goto L_089C9610;
    case 290u: goto L_089C9644;
    case 291u: goto L_089C9650;
    case 292u: goto L_089C9664;
    case 293u: goto L_089C9670;
    case 294u: goto L_089C967C;
    case 295u: goto L_089C9688;
    case 296u: goto L_089C9694;
    case 297u: goto L_089C969C;
    case 298u: goto L_089C96A4;
    case 299u: goto L_089C96B4;
    case 300u: goto L_089C96C0;
    case 301u: goto L_089C96C8;
    case 302u: goto L_089C96D4;
    case 303u: goto L_089C96E0;
    case 304u: goto L_089C96EC;
    case 305u: goto L_089C96F8;
    case 306u: goto L_089C9700;
    case 307u: goto L_089C9708;
    case 308u: goto L_089C9710;
    case 309u: goto L_089C971C;
    case 310u: goto L_089C9728;
    case 311u: goto L_089C9734;
    case 312u: goto L_089C9744;
    case 313u: goto L_089C974C;
    case 314u: goto L_089C9750;
    case 315u: goto L_089C9758;
    case 316u: goto L_089C97AC;
    case 317u: goto L_089C97B4;
    case 318u: goto L_089C97CC;
    case 319u: goto L_089C97DC;
    case 320u: goto L_089C97EC;
    case 321u: goto L_089C9804;
    case 322u: goto L_089C980C;
    case 323u: goto L_089C9814;
    case 324u: goto L_089C9818;
    case 325u: goto L_089C9828;
    case 326u: goto L_089C9838;
    case 327u: goto L_089C9844;
    case 328u: goto L_089C984C;
    case 329u: goto L_089C985C;
    case 330u: goto L_089C986C;
    case 331u: goto L_089C9884;
    case 332u: goto L_089C988C;
    case 333u: goto L_089C9898;
    case 334u: goto L_089C98A0;
    case 335u: goto L_089C98A8;
    case 336u: goto L_089C98B0;
    case 337u: goto L_089C98C0;
    case 338u: goto L_089C98D0;
    case 339u: goto L_089C98E8;
    case 340u: goto L_089C98F0;
    case 341u: goto L_089C9900;
    case 342u: goto L_089C9908;
    case 343u: goto L_089C990C;
    case 344u: goto L_089C9934;
    case 345u: goto L_089C9974;
    case 346u: goto L_089C9988;
    case 347u: goto L_089C9998;
    case 348u: goto L_089C99A0;
    case 349u: goto L_089C99AC;
    case 350u: goto L_089C99B4;
    case 351u: goto L_089C99C0;
    case 352u: goto L_089C99CC;
    case 353u: goto L_089C99DC;
    case 354u: goto L_089C99E4;
    case 355u: goto L_089C99EC;
    case 356u: goto L_089C99FC;
    case 357u: goto L_089C9A10;
    case 358u: goto L_089C9A18;
    case 359u: goto L_089C9A4C;
    case 360u: goto L_089C9A58;
    case 361u: goto L_089C9A90;
    case 362u: goto L_089C9A9C;
    case 363u: goto L_089C9AB8;
    case 364u: goto L_089C9AC4;
    case 365u: goto L_089C9AD4;
    case 366u: goto L_089C9AE4;
    case 367u: goto L_089C9AF4;
    case 368u: goto L_089C9B18;
    case 369u: goto L_089C9B20;
    case 370u: goto L_089C9B28;
    case 371u: goto L_089C9B40;
    case 372u: goto L_089C9B48;
    case 373u: goto L_089C9B50;
    case 374u: goto L_089C9B60;
    case 375u: goto L_089C9B70;
    case 376u: goto L_089C9B84;
    case 377u: goto L_089C9B9C;
    case 378u: goto L_089C9BA8;
    case 379u: goto L_089C9BB0;
    case 380u: goto L_089C9BB8;
    case 381u: goto L_089C9BC0;
    case 382u: goto L_089C9BC8;
    case 383u: goto L_089C9BD0;
    case 384u: goto L_089C9BDC;
    case 385u: goto L_089C9BE4;
    case 386u: goto L_089C9BF0;
    case 387u: goto L_089C9BF8;
    case 388u: goto L_089C9C08;
    case 389u: goto L_089C9C10;
    case 390u: goto L_089C9C1C;
    case 391u: goto L_089C9C24;
    case 392u: goto L_089C9C48;
    case 393u: goto L_089C9C4C;
    case 394u: goto L_089C9C7C;
    case 395u: goto L_089C9C98;
    case 396u: goto L_089C9CB4;
    case 397u: goto L_089C9CBC;
    case 398u: goto L_089C9CC4;
    case 399u: goto L_089C9CCC;
    case 400u: goto L_089C9CD4;
    case 401u: goto L_089C9CE8;
    case 402u: goto L_089C9CF8;
    case 403u: goto L_089C9D08;
    case 404u: goto L_089C9D10;
    case 405u: goto L_089C9D18;
    case 406u: goto L_089C9D20;
    case 407u: goto L_089C9D28;
    case 408u: goto L_089C9D34;
    case 409u: goto L_089C9D3C;
    case 410u: goto L_089C9D50;
    case 411u: goto L_089C9D64;
    case 412u: goto L_089C9D6C;
    case 413u: goto L_089C9D74;
    case 414u: goto L_089C9D80;
    case 415u: goto L_089C9D98;
    case 416u: goto L_089C9DBC;
    case 417u: goto L_089C9DDC;
    case 418u: goto L_089C9DF4;
    case 419u: goto L_089C9E04;
    case 420u: goto L_089C9E1C;
    case 421u: goto L_089C9E34;
    case 422u: goto L_089C9E3C;
    case 423u: goto L_089C9E50;
    case 424u: goto L_089C9E64;
    case 425u: goto L_089C9E84;
    case 426u: goto L_089C9E90;
    case 427u: goto L_089C9EA0;
    case 428u: goto L_089C9EA8;
    case 429u: goto L_089C9EB4;
    case 430u: goto L_089C9EBC;
    case 431u: goto L_089C9ECC;
    case 432u: goto L_089C9EE8;
    case 433u: goto L_089C9F00;
    case 434u: goto L_089C9F38;
    case 435u: goto L_089C9F54;
    case 436u: goto L_089C9F60;
    case 437u: goto L_089C9F70;
    case 438u: goto L_089C9F88;
    case 439u: goto L_089C9FA0;
    case 440u: goto L_089C9FA8;
    case 441u: goto L_089C9FC8;
    case 442u: goto L_089C9FDC;
    case 443u: goto L_089C9FF8;
    case 444u: goto L_089CA00C;
    case 445u: goto L_089CA044;
    case 446u: goto L_089CA060;
    case 447u: goto L_089CA06C;
    case 448u: goto L_089CA07C;
    case 449u: goto L_089CA094;
    case 450u: goto L_089CA0AC;
    case 451u: goto L_089CA0B4;
    case 452u: goto L_089CA0D4;
    case 453u: goto L_089CA0E8;
    case 454u: goto L_089CA104;
    case 455u: goto L_089CA118;
    case 456u: goto L_089CA144;
    case 457u: goto L_089CA158;
    case 458u: goto L_089CA160;
    case 459u: goto L_089CA168;
    case 460u: goto L_089CA170;
    case 461u: goto L_089CA178;
    case 462u: goto L_089CA180;
    case 463u: goto L_089CA188;
    case 464u: goto L_089CA190;
    case 465u: goto L_089CA198;
    case 466u: goto L_089CA1A0;
    case 467u: goto L_089CA1AC;
    case 468u: goto L_089CA1B8;
    case 469u: goto L_089CA1C0;
    case 470u: goto L_089CA1C8;
    case 471u: goto L_089CA1E8;
    case 472u: goto L_089CA1F0;
    case 473u: goto L_089CA1F8;
    case 474u: goto L_089CA200;
    case 475u: goto L_089CA208;
    case 476u: goto L_089CA210;
    case 477u: goto L_089CA218;
    case 478u: goto L_089CA224;
    case 479u: goto L_089CA230;
    case 480u: goto L_089CA238;
    case 481u: goto L_089CA240;
    case 482u: goto L_089CA260;
    case 483u: goto L_089CA268;
    case 484u: goto L_089CA270;
    case 485u: goto L_089CA278;
    case 486u: goto L_089CA280;
    case 487u: goto L_089CA288;
    case 488u: goto L_089CA290;
    case 489u: goto L_089CA29C;
    case 490u: goto L_089CA2A8;
    case 491u: goto L_089CA2B4;
    case 492u: goto L_089CA2BC;
    case 493u: goto L_089CA2C4;
    case 494u: goto L_089CA2CC;
    case 495u: goto L_089CA2EC;
    case 496u: goto L_089CA304;
    case 497u: goto L_089CA30C;
    case 498u: goto L_089CA314;
    case 499u: goto L_089CA31C;
    case 500u: goto L_089CA324;
    case 501u: goto L_089CA32C;
    case 502u: goto L_089CA334;
    case 503u: goto L_089CA340;
    case 504u: goto L_089CA348;
    case 505u: goto L_089CA350;
    case 506u: goto L_089CA354;
    case 507u: goto L_089CA35C;
    case 508u: goto L_089CA36C;
    case 509u: goto L_089CA374;
    case 510u: goto L_089CA37C;
    case 511u: goto L_089CA3A0;
    case 512u: goto L_089CA3AC;
    case 513u: goto L_089CA3C0;
    case 514u: goto L_089CA3DC;
    case 515u: goto L_089CA3EC;
    case 516u: goto L_089CA3F4;
    case 517u: goto L_089CA400;
    case 518u: goto L_089CA408;
    case 519u: goto L_089CA418;
    case 520u: goto L_089CA420;
    case 521u: goto L_089CA434;
    case 522u: goto L_089CA43C;
    case 523u: goto L_089CA460;
    case 524u: goto L_089CA470;
    case 525u: goto L_089CA484;
    case 526u: goto L_089CA4A4;
    case 527u: goto L_089CA4AC;
    case 528u: goto L_089CA4B4;
    case 529u: goto L_089CA4C4;
    case 530u: goto L_089CA4CC;
    case 531u: goto L_089CA4EC;
    case 532u: goto L_089CA55C;
    case 533u: goto L_089CA564;
    case 534u: goto L_089CA580;
    case 535u: goto L_089CA58C;
    case 536u: goto L_089CA598;
    case 537u: goto L_089CA59C;
    case 538u: goto L_089CA5AC;
    case 539u: goto L_089CA5B4;
    case 540u: goto L_089CA5D0;
    case 541u: goto L_089CA5F0;
    case 542u: goto L_089CA5FC;
    case 543u: goto L_089CA618;
    case 544u: goto L_089CA620;
    case 545u: goto L_089CA62C;
    case 546u: goto L_089CA638;
    case 547u: goto L_089CA640;
    case 548u: goto L_089CA64C;
    case 549u: goto L_089CA650;
    case 550u: goto L_089CA660;
    case 551u: goto L_089CA668;
    case 552u: goto L_089CA680;
    case 553u: goto L_089CA688;
    case 554u: goto L_089CA690;
    case 555u: goto L_089CA6A4;
    case 556u: goto L_089CA6B4;
    case 557u: goto L_089CA6C0;
    case 558u: goto L_089CA6CC;
    case 559u: goto L_089CA6E4;
    case 560u: goto L_089CA6EC;
    case 561u: goto L_089CA6F8;
    case 562u: goto L_089CA72C;
    case 563u: goto L_089CA734;
    case 564u: goto L_089CA750;
    case 565u: goto L_089CA754;
    case 566u: goto L_089CA760;
    case 567u: goto L_089CA774;
    case 568u: goto L_089CA780;
    case 569u: goto L_089CA790;
    case 570u: goto L_089CA794;
    case 571u: goto L_089CA7C4;
    case 572u: goto L_089CA7DC;
    case 573u: goto L_089CA7E8;
    case 574u: goto L_089CA7F8;
    case 575u: goto L_089CA800;
    case 576u: goto L_089CA808;
    case 577u: goto L_089CA810;
    case 578u: goto L_089CA888;
    case 579u: goto L_089CA88C;
    case 580u: goto L_089CA898;
    case 581u: goto L_089CA89C;
    case 582u: goto L_089CA8A8;
    case 583u: goto L_089CA8B0;
    case 584u: goto L_089CA8BC;
    case 585u: goto L_089CA8C4;
    case 586u: goto L_089CA8D4;
    case 587u: goto L_089CA8E0;
    case 588u: goto L_089CA8E8;
    case 589u: goto L_089CA8F4;
    case 590u: goto L_089CA8FC;
    case 591u: goto L_089CA92C;
    case 592u: goto L_089CA944;
    case 593u: goto L_089CA954;
    case 594u: goto L_089CA964;
    case 595u: goto L_089CA970;
    case 596u: goto L_089CA97C;
    case 597u: goto L_089CA980;
    case 598u: goto L_089CA990;
    case 599u: goto L_089CA994;
    case 600u: goto L_089CA99C;
    case 601u: goto L_089CA9A0;
    case 602u: goto L_089CA9AC;
    case 603u: goto L_089CA9B4;
    case 604u: goto L_089CA9C0;
    case 605u: goto L_089CA9C8;
    case 606u: goto L_089CA9D8;
    case 607u: goto L_089CA9E4;
    case 608u: goto L_089CA9EC;
    case 609u: goto L_089CA9F8;
    case 610u: goto L_089CAA00;
    case 611u: goto L_089CAA2C;
    case 612u: goto L_089CAA44;
    case 613u: goto L_089CAA54;
    case 614u: goto L_089CAA64;
    case 615u: goto L_089CAA6C;
    case 616u: goto L_089CAA78;
    case 617u: goto L_089CAA7C;
    case 618u: goto L_089CAA8C;
    case 619u: goto L_089CAA90;
    case 620u: goto L_089CAA94;
    case 621u: goto L_089CAA9C;
    case 622u: goto L_089CAAA4;
    case 623u: goto L_089CAAB0;
    case 624u: goto L_089CAAB4;
    case 625u: goto L_089CAAC0;
    case 626u: goto L_089CAAC8;
    case 627u: goto L_089CAAD4;
    case 628u: goto L_089CAADC;
    case 629u: goto L_089CAAEC;
    case 630u: goto L_089CAAFC;
    case 631u: goto L_089CAB0C;
    case 632u: goto L_089CAB14;
    case 633u: goto L_089CAB20;
    case 634u: goto L_089CAB28;
    case 635u: goto L_089CAB48;
    case 636u: goto L_089CAB60;
    case 637u: goto L_089CAB70;
    case 638u: goto L_089CAB80;
    case 639u: goto L_089CAB84;
    case 640u: goto L_089CAB90;
    case 641u: goto L_089CAB94;
    case 642u: goto L_089CABA4;
    case 643u: goto L_089CABA8;
    case 644u: goto L_089CABB0;
    case 645u: goto L_089CABB4;
    case 646u: goto L_089CABC0;
    case 647u: goto L_089CABC8;
    case 648u: goto L_089CABD4;
    case 649u: goto L_089CABDC;
    case 650u: goto L_089CABEC;
    case 651u: goto L_089CABFC;
    case 652u: goto L_089CAC0C;
    case 653u: goto L_089CAC14;
    case 654u: goto L_089CAC20;
    case 655u: goto L_089CAC28;
    case 656u: goto L_089CAC48;
    case 657u: goto L_089CAC60;
    case 658u: goto L_089CAC70;
    case 659u: goto L_089CAC80;
    case 660u: goto L_089CAC84;
    case 661u: goto L_089CAC90;
    case 662u: goto L_089CAC94;
    case 663u: goto L_089CACA4;
    case 664u: goto L_089CACA8;
    case 665u: goto L_089CACAC;
    case 666u: goto L_089CACB4;
    case 667u: goto L_089CACE4;
    case 668u: goto L_089CAD18;
    case 669u: goto L_089CAD48;
    case 670u: goto L_089CAD50;
    case 671u: goto L_089CAD5C;
    case 672u: goto L_089CAD64;
    case 673u: goto L_089CAD6C;
    case 674u: goto L_089CAD7C;
    case 675u: goto L_089CAD84;
    case 676u: goto L_089CAD8C;
    case 677u: goto L_089CAD94;
    case 678u: goto L_089CAD9C;
    case 679u: goto L_089CADA4;
    case 680u: goto L_089CADD0;
    case 681u: goto L_089CADD8;
    case 682u: goto L_089CADE0;
    case 683u: goto L_089CADEC;
    case 684u: goto L_089CADF4;
    case 685u: goto L_089CAE20;
    case 686u: goto L_089CAE28;
    case 687u: goto L_089CAE30;
    case 688u: goto L_089CAE4C;
    case 689u: goto L_089CAE5C;
    case 690u: goto L_089CAE64;
    case 691u: goto L_089CAE78;
    case 692u: goto L_089CAE8C;
    case 693u: goto L_089CAE98;
    case 694u: goto L_089CAEA0;
    case 695u: goto L_089CAEA8;
    case 696u: goto L_089CAEB8;
    case 697u: goto L_089CAEC4;
    case 698u: goto L_089CAECC;
    case 699u: goto L_089CAEE4;
    case 700u: goto L_089CAEF8;
    case 701u: goto L_089CAF00;
    case 702u: goto L_089CAF0C;
    case 703u: goto L_089CAF14;
    case 704u: goto L_089CAF1C;
    case 705u: goto L_089CAF24;
    case 706u: goto L_089CAF2C;
    case 707u: goto L_089CAF34;
    case 708u: goto L_089CAF48;
    case 709u: goto L_089CAF5C;
    case 710u: goto L_089CAF6C;
    case 711u: goto L_089CAF84;
    case 712u: goto L_089CAF94;
    case 713u: goto L_089CAFA0;
    case 714u: goto L_089CAFA8;
    case 715u: goto L_089CAFBC;
    case 716u: goto L_089CAFDC;
    case 717u: goto L_089CAFEC;
    case 718u: goto L_089CB000;
    case 719u: goto L_089CB020;
    case 720u: goto L_089CB068;
    case 721u: goto L_089CB08C;
    case 722u: goto L_089CB094;
    case 723u: goto L_089CB09C;
    case 724u: goto L_089CB0A4;
    case 725u: goto L_089CB0AC;
    case 726u: goto L_089CB0B4;
    case 727u: goto L_089CB0CC;
    case 728u: goto L_089CB0F0;
    case 729u: goto L_089CB0FC;
    case 730u: goto L_089CB10C;
    case 731u: goto L_089CB114;
    case 732u: goto L_089CB134;
    case 733u: goto L_089CB160;
    case 734u: goto L_089CB17C;
    case 735u: goto L_089CB18C;
    case 736u: goto L_089CB194;
    case 737u: goto L_089CB1A8;
    case 738u: goto L_089CB1B4;
    case 739u: goto L_089CB1C4;
    case 740u: goto L_089CB1D8;
    case 741u: goto L_089CB1F4;
    case 742u: goto L_089CB1F8;
    case 743u: goto L_089CB200;
    case 744u: goto L_089CB208;
    case 745u: goto L_089CB210;
    case 746u: goto L_089CB228;
    case 747u: goto L_089CB230;
    case 748u: goto L_089CB23C;
    case 749u: goto L_089CB250;
    case 750u: goto L_089CB258;
    case 751u: goto L_089CB264;
    case 752u: goto L_089CB270;
    case 753u: goto L_089CB27C;
    case 754u: goto L_089CB290;
    case 755u: goto L_089CB2A4;
    case 756u: goto L_089CB2B8;
    case 757u: goto L_089CB2C0;
    case 758u: goto L_089CB2C8;
    case 759u: goto L_089CB2D0;
    case 760u: goto L_089CB2F4;
    case 761u: goto L_089CB300;
    case 762u: goto L_089CB314;
    case 763u: goto L_089CB324;
    case 764u: goto L_089CB354;
    case 765u: goto L_089CB3C0;
    case 766u: goto L_089CB3C4;
    case 767u: goto L_089CB3E0;
    case 768u: goto L_089CB414;
    case 769u: goto L_089CB444;
    case 770u: goto L_089CB448;
    case 771u: goto L_089CB46C;
    case 772u: goto L_089CB4D0;
    case 773u: goto L_089CB4D4;
    case 774u: goto L_089CB4F8;
    case 775u: goto L_089CB500;
    case 776u: goto L_089CB504;
    case 777u: goto L_089CB51C;
    case 778u: goto L_089CB528;
    case 779u: goto L_089CB548;
    case 780u: goto L_089CB558;
    case 781u: goto L_089CB564;
    case 782u: goto L_089CB570;
    case 783u: goto L_089CB57C;
    case 784u: goto L_089CB5B0;
    case 785u: goto L_089CB5B8;
    case 786u: goto L_089CB5BC;
    case 787u: goto L_089CB5D0;
    case 788u: goto L_089CB5DC;
    case 789u: goto L_089CB5E8;
    case 790u: goto L_089CB5F0;
    case 791u: goto L_089CB5F4;
    case 792u: goto L_089CB600;
    case 793u: goto L_089CB608;
    case 794u: goto L_089CB618;
    case 795u: goto L_089CB61C;
    case 796u: goto L_089CB628;
    case 797u: goto L_089CB63C;
    case 798u: goto L_089CB640;
    case 799u: goto L_089CB648;
    case 800u: goto L_089CB654;
    case 801u: goto L_089CB664;
    case 802u: goto L_089CB66C;
    case 803u: goto L_089CB678;
    case 804u: goto L_089CB680;
    case 805u: goto L_089CB694;
    case 806u: goto L_089CB6A4;
    case 807u: goto L_089CB700;
    case 808u: goto L_089CB704;
    case 809u: goto L_089CB738;
    case 810u: goto L_089CB740;
    case 811u: goto L_089CB75C;
    case 812u: goto L_089CB768;
    case 813u: goto L_089CB77C;
    case 814u: goto L_089CB7A0;
    case 815u: goto L_089CB7B0;
    case 816u: goto L_089CB7BC;
    case 817u: goto L_089CB7C8;
    case 818u: goto L_089CB7D4;
    case 819u: goto L_089CB7DC;
    case 820u: goto L_089CB7EC;
    case 821u: goto L_089CB7F0;
    case 822u: goto L_089CB80C;
    case 823u: goto L_089CB814;
    case 824u: goto L_089CB82C;
    case 825u: goto L_089CB83C;
    case 826u: goto L_089CB858;
    case 827u: goto L_089CB860;
    case 828u: goto L_089CB878;
    case 829u: goto L_089CB88C;
    case 830u: goto L_089CB89C;
    case 831u: goto L_089CB8AC;
    case 832u: goto L_089CB8B4;
    case 833u: goto L_089CB8C4;
    case 834u: goto L_089CB8CC;
    case 835u: goto L_089CB8D8;
    case 836u: goto L_089CB8E0;
    case 837u: goto L_089CB8EC;
    case 838u: goto L_089CB8F4;
    case 839u: goto L_089CB8F8;
    case 840u: goto L_089CB900;
    case 841u: goto L_089CB908;
    case 842u: goto L_089CB928;
    case 843u: goto L_089CB934;
    case 844u: goto L_089CB948;
    case 845u: goto L_089CB960;
    case 846u: goto L_089CB96C;
    case 847u: goto L_089CB988;
    case 848u: goto L_089CB990;
    case 849u: goto L_089CB9A8;
    case 850u: goto L_089CB9BC;
    case 851u: goto L_089CB9CC;
    case 852u: goto L_089CB9D8;
    case 853u: goto L_089CB9E4;
    case 854u: goto L_089CB9EC;
    case 855u: goto L_089CBA14;
    case 856u: goto L_089CBA5C;
    case 857u: goto L_089CBA74;
    case 858u: goto L_089CBA8C;
    case 859u: goto L_089CBA94;
    case 860u: goto L_089CBA98;
    case 861u: goto L_089CBAA4;
    case 862u: goto L_089CBAB0;
    case 863u: goto L_089CBAC4;
    case 864u: goto L_089CBAD4;
    case 865u: goto L_089CBAE4;
    case 866u: goto L_089CBAFC;
    case 867u: goto L_089CBB08;
    case 868u: goto L_089CBB10;
    case 869u: goto L_089CBB24;
    case 870u: goto L_089CBB3C;
    case 871u: goto L_089CBB54;
    case 872u: goto L_089CBB6C;
    case 873u: goto L_089CBB74;
    case 874u: goto L_089CBB78;
    case 875u: goto L_089CBB84;
    case 876u: goto L_089CBB90;
    case 877u: goto L_089CBBA4;
    case 878u: goto L_089CBBB4;
    case 879u: goto L_089CBBC4;
    case 880u: goto L_089CBBDC;
    case 881u: goto L_089CBBE8;
    case 882u: goto L_089CBBF0;
    case 883u: goto L_089CBC04;
    case 884u: goto L_089CBC1C;
    case 885u: goto L_089CBC38;
    case 886u: goto L_089CBC50;
    case 887u: goto L_089CBC58;
    case 888u: goto L_089CBC5C;
    case 889u: goto L_089CBC68;
    case 890u: goto L_089CBC78;
    case 891u: goto L_089CBC8C;
    case 892u: goto L_089CBC9C;
    case 893u: goto L_089CBCAC;
    case 894u: goto L_089CBCB8;
    case 895u: goto L_089CBCD0;
    case 896u: goto L_089CBCDC;
    case 897u: goto L_089CBCE4;
    case 898u: goto L_089CBCF8;
    case 899u: goto L_089CBD10;
    case 900u: goto L_089CBD28;
    case 901u: goto L_089CBD40;
    case 902u: goto L_089CBD48;
    case 903u: goto L_089CBD4C;
    case 904u: goto L_089CBD58;
    case 905u: goto L_089CBD64;
    case 906u: goto L_089CBD78;
    case 907u: goto L_089CBD88;
    case 908u: goto L_089CBD98;
    case 909u: goto L_089CBDB0;
    case 910u: goto L_089CBDBC;
    case 911u: goto L_089CBDC4;
    case 912u: goto L_089CBDD8;
    case 913u: goto L_089CBE08;
    case 914u: goto L_089CBE50;
    case 915u: goto L_089CBE68;
    case 916u: goto L_089CBE80;
    case 917u: goto L_089CBE88;
    case 918u: goto L_089CBE8C;
    case 919u: goto L_089CBE98;
    case 920u: goto L_089CBEA4;
    case 921u: goto L_089CBEB4;
    case 922u: goto L_089CBEBC;
    case 923u: goto L_089CBEC4;
    case 924u: goto L_089CBECC;
    case 925u: goto L_089CBEDC;
    case 926u: goto L_089CBEE4;
    case 927u: goto L_089CBEF0;
    case 928u: goto L_089CBEF8;
    case 929u: goto L_089CBF08;
    case 930u: goto L_089CBF20;
    case 931u: goto L_089CBF34;
    case 932u: goto L_089CBF4C;
    case 933u: goto L_089CBF64;
    case 934u: goto L_089CBF7C;
    case 935u: goto L_089CBF84;
    case 936u: goto L_089CBF88;
    case 937u: goto L_089CBF94;
    case 938u: goto L_089CBFA0;
    case 939u: goto L_089CBFB0;
    case 940u: goto L_089CBFB8;
    case 941u: goto L_089CBFC0;
    case 942u: goto L_089CBFC8;
    case 943u: goto L_089CBFD8;
    case 944u: goto L_089CBFE0;
    case 945u: goto L_089CBFE8;
    case 946u: goto L_089CBFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089C8004:
    ctx.gpr[31] = (0x089C800Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x089C800Cu) goto L_089C800C;
    return;
L_089C800C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20932)));
    goto L_089C8010;
L_089C8010:
    ctx.gpr[31] = (0x089C8018u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 139u, 0x08A0899Cu>(ctx, &aot_mem) && ctx.pc == 0x089C8018u) goto L_089C8018;
    return;
L_089C8018:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(27460), ctx.gpr[4]);
    goto L_089C8028;
L_089C8028:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 938u, 0x089C7DF4u>(ctx, &aot_mem); return;
      }
      goto L_089C8038;
    }
L_089C8038:
    ctx.gpr[31] = (0x089C8040u);
    ctx.gpr[4] = (0u | 0u);
    goto L_089CB020;
L_089C8040:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8070:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C8080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089C8080u) goto L_089C8080;
    return;
L_089C8080:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[1] = (ctx.gpr[5] << 1u);
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(37)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28452));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C80CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7456), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6284), 0u);
    ctx.gpr[4] = (0u | 157u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C80FCu);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CACE4;
L_089C80FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8108:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8198;
      }
      goto L_089C8128;
    }
L_089C8128:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C8144u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9596));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089C8144u) goto L_089C8144;
    return;
L_089C8144:
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-17560));
      if (branch_taken) {
          goto L_089C8164;
      }
      goto L_089C8154;
    }
L_089C8154:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C8164u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9572));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089C8164u) goto L_089C8164;
    return;
L_089C8164:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_089C8174;
L_089C8174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089C8180u);
    ctx.gpr[5] = (0u | 5u);
    goto L_089CACE4;
L_089C8180:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C8174;
      }
      goto L_089C8190;
    }
L_089C8190:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C81CC;
      }
      goto L_089C8198;
    }
L_089C8198:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[31] = (0x089C81B0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 391u, 0x088724E0u>(ctx, &aot_mem) && ctx.pc == 0x089C81B0u) goto L_089C81B0;
    return;
L_089C81B0:
    ctx.gpr[31] = (0x089C81B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 322u, 0x089EDF3Cu>(ctx, &aot_mem) && ctx.pc == 0x089C81B8u) goto L_089C81B8;
    return;
L_089C81B8:
    ctx.gpr[31] = (0x089C81C0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 244u, 0x089ED98Cu>(ctx, &aot_mem) && ctx.pc == 0x089C81C0u) goto L_089C81C0;
    return;
L_089C81C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C81CCu);
    ctx.gpr[5] = (0u | 4u);
    goto L_089CACE4;
L_089C81CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C81E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6284)));
    ctx.gpr[17] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[21] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[22] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[18] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    goto L_089C8234;
L_089C8234:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6284), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C8248;
      }
      goto L_089C8240;
    }
L_089C8240:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6284), 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089C8248;
L_089C8248:
    ctx.gpr[8] = (ctx.gpr[5] << 2u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[18]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-7552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8278;
      }
      goto L_089C8268;
    }
L_089C8268:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089C8234;
      }
      goto L_089C8270;
    }
L_089C8270:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[19] << 4u);
      if (branch_taken) {
          goto L_089C8280;
      }
      goto L_089C8278;
    }
L_089C8278:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C8348;
      }
      goto L_089C8280;
    }
L_089C8280:
    ctx.gpr[9] = (ctx.gpr[19] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(13)));
    ctx.gpr[9] = (ctx.gpr[9] & 131u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089C8234;
      }
      goto L_089C829C;
    }
L_089C829C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_089C82B0;
      }
      goto L_089C82A4;
    }
L_089C82A4:
    ctx.gpr[9] = (ctx.gpr[19] << 2u);
    ctx.gpr[9] = (ctx.gpr[11] + ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_089C82B0;
L_089C82B0:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) > 0;
    // nop
      if (branch_taken) {
          goto L_089C8234;
      }
      goto L_089C82BC;
    }
L_089C82BC:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[8] ^ 1u);
    ctx.gpr[8] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8234;
      }
      goto L_089C82D4;
    }
L_089C82D4:
    ctx.gpr[31] = (0x089C82DCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x089C82DCu) goto L_089C82DC;
    return;
L_089C82DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7456)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7456), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6284)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7552), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089C832C;
      }
      goto L_089C831C;
    }
L_089C831C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C832C;
L_089C832C:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(69))))));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089C8344;
      }
      goto L_089C8338;
    }
L_089C8338:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C8344u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 339u, 0x089EE0B0u>(ctx, &aot_mem) && ctx.pc == 0x089C8344u) goto L_089C8344;
    return;
L_089C8344:
    ctx.gpr[2] = (0u | 1u);
    goto L_089C8348;
L_089C8348:
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
L_089C8370:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 262u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C8384u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CACE4;
L_089C8384:
    ctx.gpr[4] = (0u | 292u);
    ctx.gpr[31] = (0x089C8390u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CACE4;
L_089C8390:
    ctx.gpr[4] = (0u | 273u);
    ctx.gpr[31] = (0x089C839Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CACE4;
L_089C839C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C83A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[30]);
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[30] = (2229u << 16u);
    ctx.gpr[23] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9512));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9476));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9432));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9400));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[21] = (2226u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-9524));
    goto L_089C8444;
L_089C8444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C86E4;
      }
      goto L_089C845C;
    }
L_089C845C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x089C846Cu);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 364u, 0x089C5824u>(ctx, &aot_mem) && ctx.pc == 0x089C846Cu) goto L_089C846C;
    return;
L_089C846C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C86E4;
      }
      goto L_089C8474;
    }
L_089C8474:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8534;
      }
      goto L_089C8480;
    }
L_089C8480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_089C84C0;
      }
      goto L_089C84B0;
    }
L_089C84B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C84C0;
L_089C84C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C84E8;
      }
      goto L_089C84E0;
    }
L_089C84E0:
    ctx.gpr[31] = (0x089C84E8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089C84E8u) goto L_089C84E8;
    return;
L_089C84E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28284)));
      if (branch_taken) {
          goto L_089C850C;
      }
      goto L_089C84FC;
    }
L_089C84FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C850C;
L_089C850C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[16]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x089C852Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089C852Cu) goto L_089C852C;
    return;
L_089C852C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C86E4;
      }
      goto L_089C8534;
    }
L_089C8534:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6100 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C8610;
      }
      goto L_089C8540;
    }
L_089C8540:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2227u << 16u);
      if (branch_taken) {
          goto L_089C8610;
      }
      goto L_089C8548;
    }
L_089C8548:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27840)));
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4900));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[17] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C8580;
      }
      goto L_089C8570;
    }
L_089C8570:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_089C859C;
      }
      goto L_089C8580;
    }
L_089C8580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    ctx.gpr[6] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32));
    goto L_089C859C;
L_089C859C:
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C85C0;
      }
      goto L_089C85B8;
    }
L_089C85B8:
    ctx.gpr[31] = (0x089C85C0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089C85C0u) goto L_089C85C0;
    return;
L_089C85C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x089C85D8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 582u, 0x0892F9ECu>(ctx, &aot_mem) && ctx.pc == 0x089C85D8u) goto L_089C85D8;
    return;
L_089C85D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C85E4u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 665u, 0x0892FF6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C85E4u) goto L_089C85E4;
    return;
L_089C85E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C8608u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089C8608u) goto L_089C8608;
    return;
L_089C8608:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C86E4;
      }
      goto L_089C8610;
    }
L_089C8610:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6115 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C8674;
      }
      goto L_089C861C;
    }
L_089C861C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8674;
      }
      goto L_089C8624;
    }
L_089C8624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6100));
    ctx.gpr[31] = (0x089C8640u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 246u, 0x08985A54u>(ctx, &aot_mem) && ctx.pc == 0x089C8640u) goto L_089C8640;
    return;
L_089C8640:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C866Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089C866Cu) goto L_089C866C;
    return;
L_089C866C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C86E4;
      }
      goto L_089C8674;
    }
L_089C8674:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C86E4;
      }
      goto L_089C867C;
    }
L_089C867C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6115));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-8072)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[31] = (0x089C86E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089C86E4u) goto L_089C86E4;
    return;
L_089C86E4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6175 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089C8444;
      }
      goto L_089C86F4;
    }
L_089C86F4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26768)));
    ctx.gpr[18] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-9360));
    ctx.gpr[19] = (32768u << 16u);
    goto L_089C8718;
L_089C8718:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C87C4;
      }
      goto L_089C8720;
    }
L_089C8720:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C87C4;
      }
      goto L_089C872C;
    }
L_089C872C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
      if (branch_taken) {
          goto L_089C87B8;
      }
      goto L_089C8744;
    }
L_089C8744:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C87B8;
      }
      goto L_089C8754;
    }
L_089C8754:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    goto L_089C876C;
L_089C876C:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_089C877C;
    }
    goto L_089C877C;
L_089C877C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8798;
      }
      goto L_089C8784;
    }
L_089C8784:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089C8798;
      }
      goto L_089C8790;
    }
L_089C8790:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C87A8;
      }
      goto L_089C8798;
    }
L_089C8798:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C876C;
      }
      goto L_089C87A8;
    }
L_089C87A8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C87B4u);
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089C87B4u) goto L_089C87B4;
    return;
L_089C87B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089C87B8;
L_089C87B8:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[16] < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_089C8718;
      }
      goto L_089C87C4;
    }
L_089C87C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089C87DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9340));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C87DCu) goto L_089C87DC;
    return;
L_089C87DC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089C87ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9312));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C87ECu) goto L_089C87EC;
    return;
L_089C87EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9284));
    ctx.gpr[31] = (0x089C8800u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C8800u) goto L_089C8800;
    return;
L_089C8800:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9256));
    ctx.gpr[31] = (0x089C8814u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C8814u) goto L_089C8814;
    return;
L_089C8814:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8844:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C8864u);
    ctx.gpr[6] = (0u | 1u);
    goto L_089C8AE0;
L_089C8864:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8878:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2205u << 16u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C8890u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30652));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 212u, 0x08AA5084u>(ctx, &aot_mem) && ctx.pc == 0x089C8890u) goto L_089C8890;
    return;
L_089C8890:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C889C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C88B8u);
    ctx.gpr[5] = (0u | 2u);
    goto L_089C8BB0;
L_089C88B8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C88CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2205u << 16u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C88E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30564));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 212u, 0x08AA5084u>(ctx, &aot_mem) && ctx.pc == 0x089C88E4u) goto L_089C88E4;
    return;
L_089C88E4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C88F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089C89A4;
      }
      goto L_089C892C;
    }
L_089C892C:
    ctx.gpr[17] = (2230u << 16u);
    goto L_089C8930;
L_089C8930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8960;
      }
      goto L_089C8948;
    }
L_089C8948:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x089C8954u);
    ctx.gpr[6] = (0u | 1u);
    goto L_089C8AE0;
L_089C8954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C8960;
L_089C8960:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-29296)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8990;
      }
      goto L_089C8974;
    }
L_089C8974:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8990;
      }
      goto L_089C8980;
    }
L_089C8980:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x089C8990u);
    ctx.gpr[6] = (0u | 1u);
    goto L_089C8AE0;
L_089C8990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C8930;
      }
      goto L_089C89A4;
    }
L_089C89A4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_089C89C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089C8A74;
      }
      goto L_089C8A04;
    }
L_089C8A04:
    ctx.gpr[17] = (2230u << 16u);
    goto L_089C8A08;
L_089C8A08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8A34;
      }
      goto L_089C8A20;
    }
L_089C8A20:
    ctx.gpr[31] = (0x089C8A28u);
    ctx.gpr[5] = (0u | 2u);
    goto L_089C8BB0;
L_089C8A28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C8A34;
L_089C8A34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-29296)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8A60;
      }
      goto L_089C8A48;
    }
L_089C8A48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8A60;
      }
      goto L_089C8A54;
    }
L_089C8A54:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x089C8A60u);
    ctx.gpr[5] = (0u | 2u);
    goto L_089C8BB0;
L_089C8A60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C8A08;
      }
      goto L_089C8A74;
    }
L_089C8A74:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_089C8A98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2205u << 16u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C8AB0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30480));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 212u, 0x08AA5084u>(ctx, &aot_mem) && ctx.pc == 0x089C8AB0u) goto L_089C8AB0;
    return;
L_089C8AB0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8ABC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2205u << 16u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C8AD4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30264));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 212u, 0x08AA5084u>(ctx, &aot_mem) && ctx.pc == 0x089C8AD4u) goto L_089C8AD4;
    return;
L_089C8AD4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8AE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8B28;
      }
      goto L_089C8AFC;
    }
L_089C8AFC:
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-26768));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26768)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8B28;
      }
      goto L_089C8B20;
    }
L_089C8B20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8B9C;
      }
      goto L_089C8B28;
    }
L_089C8B28:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6048));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C8B48u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 113u, 0x08B04758u>(ctx, &aot_mem) && ctx.pc == 0x089C8B48u) goto L_089C8B48;
    return;
L_089C8B48:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C8B5Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 88u, 0x08B04518u>(ctx, &aot_mem) && ctx.pc == 0x089C8B5Cu) goto L_089C8B5C;
    return;
L_089C8B5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_089C8B9C;
      }
      goto L_089C8B80;
    }
L_089C8B80:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28304));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089C8B9C;
L_089C8B9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8BB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6048));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[8]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C8C04;
L_089C8C04:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
        goto L_089C8C30;
    }
    goto L_089C8C0C;
L_089C8C0C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] ^ ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
        goto L_089C8C30;
    }
    goto L_089C8C28;
L_089C8C28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C8C04;
      }
      goto L_089C8C30;
    }
L_089C8C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] ^ ctx.gpr[8]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8CD4;
      }
      goto L_089C8C9C;
    }
L_089C8C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.gpr[31] = (0x089C8CB8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 101u, 0x08B04684u>(ctx, &aot_mem) && ctx.pc == 0x089C8CB8u) goto L_089C8CB8;
    return;
L_089C8CB8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28304));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089C8CD4;
L_089C8CD4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8CE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (32768u << 16u);
      if (branch_taken) {
          goto L_089C8D4C;
      }
      goto L_089C8D00;
    }
L_089C8D00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089C8D24;
      }
      goto L_089C8D14;
    }
L_089C8D14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8D2C;
      }
      goto L_089C8D24;
    }
L_089C8D24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8D44;
      }
      goto L_089C8D2C;
    }
L_089C8D2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089C8D44u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C8D44u) goto L_089C8D44;
    return;
L_089C8D44:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8D00;
      }
      goto L_089C8D4C;
    }
L_089C8D4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8D60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089C8EA0;
      }
      goto L_089C8D84;
    }
L_089C8D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089C8E98;
      }
      goto L_089C8D94;
    }
L_089C8D94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8E98;
      }
      goto L_089C8DA8;
    }
L_089C8DA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089C8E98;
      }
      goto L_089C8DB8;
    }
L_089C8DB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[17]);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[5] = (0u - ctx.gpr[5]);
        goto L_089C8DE8;
    }
    goto L_089C8DE8;
L_089C8DE8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089C8E40;
      }
      goto L_089C8E08;
    }
L_089C8E08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[16]);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[5] = (0u - ctx.gpr[5]);
        goto L_089C8E60;
    }
    goto L_089C8E38;
L_089C8E38:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C8E64;
      }
      goto L_089C8E40;
    }
L_089C8E40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089C8E58u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C8E58u) goto L_089C8E58;
    return;
L_089C8E58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8EA0;
      }
      goto L_089C8E60;
    }
L_089C8E60:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_089C8E64;
L_089C8E64:
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C8E98;
      }
      goto L_089C8E80;
    }
L_089C8E80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089C8E98u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C8E98u) goto L_089C8E98;
    return;
L_089C8E98:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8D84;
      }
      goto L_089C8EA0;
    }
L_089C8EA0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8EB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C8F5C;
      }
      goto L_089C8ED8;
    }
L_089C8ED8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089C8F54;
      }
      goto L_089C8EE8;
    }
L_089C8EE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20436)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_089C8F04;
    }
    goto L_089C8EF4;
L_089C8EF4:
    ctx.gpr[31] = (0x089C8EFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x089C8EFCu) goto L_089C8EFC;
    return;
L_089C8EFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089C8F04;
L_089C8F04:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8F3C;
      }
      goto L_089C8F14;
    }
L_089C8F14:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
        goto L_089C8F2C;
    }
    goto L_089C8F1C;
L_089C8F1C:
    ctx.gpr[31] = (0x089C8F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x089C8F24u) goto L_089C8F24;
    return;
L_089C8F24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    goto L_089C8F2C;
L_089C8F2C:
    ctx.gpr[31] = (0x089C8F34u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 91u, 0x089507FCu>(ctx, &aot_mem) && ctx.pc == 0x089C8F34u) goto L_089C8F34;
    return;
L_089C8F34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8F54;
      }
      goto L_089C8F3C;
    }
L_089C8F3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089C8F54u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C8F54u) goto L_089C8F54;
    return;
L_089C8F54:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8ED8;
      }
      goto L_089C8F5C;
    }
L_089C8F5C:
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
L_089C8F74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7404)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-7428));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    ctx.gpr[20] = (0u | 20u);
      if (branch_taken) {
          goto L_089C90E4;
      }
      goto L_089C8FC8;
    }
L_089C8FC8:
    ctx.gpr[22] = (2230u << 16u);
    ctx.gpr[23] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_089C8FD4;
L_089C8FD4:
    ctx.gpr[5] = (ctx.gpr[18] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(9)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[16]);
    ctx.gpr[21] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8FFC;
      }
      goto L_089C8FF0;
    }
L_089C8FF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089C90D8;
      }
      goto L_089C8FFC;
    }
L_089C8FFC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9054;
      }
      goto L_089C9008;
    }
L_089C9008:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C9028;
      }
      goto L_089C9018;
    }
L_089C9018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C9028;
L_089C9028:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089C9044;
      }
      goto L_089C9034;
    }
L_089C9034:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28284)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089C90D8;
      }
      goto L_089C9044;
    }
L_089C9044:
    ctx.gpr[31] = (0x089C904Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x089C904Cu) goto L_089C904C;
    return;
L_089C904C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C91CC;
      }
      goto L_089C9054;
    }
L_089C9054:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 6100 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C9098;
      }
      goto L_089C905C;
    }
L_089C905C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9098;
      }
      goto L_089C9064;
    }
L_089C9064:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-4900));
    ctx.gpr[31] = (0x089C9070u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 665u, 0x0892FF6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C9070u) goto L_089C9070;
    return;
L_089C9070:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_089C9034;
      }
      goto L_089C9078;
    }
L_089C9078:
    ctx.gpr[31] = (0x089C9080u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_089C9610;
L_089C9080:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9034;
      }
      goto L_089C9088;
    }
L_089C9088:
    ctx.gpr[31] = (0x089C9090u);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(4900));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x089C9090u) goto L_089C9090;
    return;
L_089C9090:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C91CC;
      }
      goto L_089C9098;
    }
L_089C9098:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 6115 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9034;
      }
      goto L_089C90A4;
    }
L_089C90A4:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-6115));
    ctx.gpr[31] = (0x089C90B0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 552u, 0x08A8B3FCu>(ctx, &aot_mem) && ctx.pc == 0x089C90B0u) goto L_089C90B0;
    return;
L_089C90B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_089C9034;
      }
      goto L_089C90B8;
    }
L_089C90B8:
    ctx.gpr[31] = (0x089C90C0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_089C9758;
L_089C90C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9034;
      }
      goto L_089C90C8;
    }
L_089C90C8:
    ctx.gpr[31] = (0x089C90D0u);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x089C90D0u) goto L_089C90D0;
    return;
L_089C90D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C91CC;
      }
      goto L_089C90D8;
    }
L_089C90D8:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C8FD4;
      }
      goto L_089C90E4;
    }
L_089C90E4:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7456)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C9110;
      }
      goto L_089C90FC;
    }
L_089C90FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29520)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9128;
      }
      goto L_089C9108;
    }
L_089C9108:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9128;
      }
      goto L_089C9110;
    }
L_089C9110:
    ctx.gpr[31] = (0x089C9118u);
    // nop
    goto L_089C81E0;
L_089C9118:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9128;
      }
      goto L_089C9120;
    }
L_089C9120:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C91CC;
      }
      goto L_089C9128;
    }
L_089C9128:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32444));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (0u | 4899u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(19596));
    goto L_089C9150;
L_089C9150:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] ^ 1u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9190;
      }
      goto L_089C9168;
    }
L_089C9168:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(13)));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089C9190;
      }
      goto L_089C9178;
    }
L_089C9178:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_089C9184;
    }
    goto L_089C9184;
L_089C9184:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C91A8;
      }
      goto L_089C9190;
    }
L_089C9190:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_089C9150;
      }
      goto L_089C91A0;
    }
L_089C91A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C91C8;
      }
      goto L_089C91A8;
    }
L_089C91A8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C91B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9168));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089C91B8u) goto L_089C91B8;
    return;
L_089C91B8:
    ctx.gpr[31] = (0x089C91C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x089C91C0u) goto L_089C91C0;
    return;
L_089C91C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C91CC;
      }
      goto L_089C91C8;
    }
L_089C91C8:
    ctx.gpr[2] = (0u | 0u);
    goto L_089C91CC;
L_089C91CC:
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
L_089C91F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089C933C;
      }
      goto L_089C9230;
    }
L_089C9230:
    ctx.gpr[30] = (2233u << 16u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-26768));
    ctx.gpr[19] = (32768u << 16u);
    ctx.gpr[21] = (2229u << 16u);
    ctx.gpr[22] = (2230u << 16u);
    ctx.gpr[23] = (2229u << 16u);
    goto L_089C9248;
L_089C9248:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089C9278;
      }
      goto L_089C925C;
    }
L_089C925C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9278;
      }
      goto L_089C926C;
    }
L_089C926C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9280;
      }
      goto L_089C9278;
    }
L_089C9278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9334;
      }
      goto L_089C9280;
    }
L_089C9280:
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (ctx.gpr[20] << 4u);
    ctx.gpr[6] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9334;
      }
      goto L_089C92A4;
    }
L_089C92A4:
    ctx.gpr[31] = (0x089C92ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089C92ACu) goto L_089C92AC;
    return;
L_089C92AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1296)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C92C0;
      }
      goto L_089C92B8;
    }
L_089C92B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9334;
      }
      goto L_089C92C0;
    }
L_089C92C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089C92D8u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C92D8u) goto L_089C92D8;
    return;
L_089C92D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089C92F8;
      }
      goto L_089C92E8;
    }
L_089C92E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C92F8;
L_089C92F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9334;
      }
      goto L_089C9304;
    }
L_089C9304:
    ctx.gpr[31] = (0x089C930Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x089C930Cu) goto L_089C930C;
    return;
L_089C930C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C9318u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 756u, 0x089C7228u>(ctx, &aot_mem) && ctx.pc == 0x089C9318u) goto L_089C9318;
    return;
L_089C9318:
    ctx.gpr[31] = (0x089C9320u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 839u, 0x08AA3F84u>(ctx, &aot_mem) && ctx.pc == 0x089C9320u) goto L_089C9320;
    return;
L_089C9320:
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9334;
      }
      goto L_089C932C;
    }
L_089C932C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C9340;
      }
      goto L_089C9334;
    }
L_089C9334:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9248;
      }
      goto L_089C933C;
    }
L_089C933C:
    ctx.gpr[2] = (0u | 0u);
    goto L_089C9340;
L_089C9340:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9370:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089C94B8;
      }
      goto L_089C93A8;
    }
L_089C93A8:
    ctx.gpr[30] = (2233u << 16u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-26768));
    ctx.gpr[19] = (32768u << 16u);
    ctx.gpr[21] = (2229u << 16u);
    ctx.gpr[22] = (2230u << 16u);
    ctx.gpr[23] = (2229u << 16u);
    goto L_089C93C0;
L_089C93C0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089C9410;
      }
      goto L_089C93D4;
    }
L_089C93D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9410;
      }
      goto L_089C93E4;
    }
L_089C93E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9410;
      }
      goto L_089C93F0;
    }
L_089C93F0:
    ctx.gpr[31] = (0x089C93F8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 746u, 0x08A2F818u>(ctx, &aot_mem) && ctx.pc == 0x089C93F8u) goto L_089C93F8;
    return;
L_089C93F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9418;
      }
      goto L_089C9400;
    }
L_089C9400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9418;
      }
      goto L_089C9410;
    }
L_089C9410:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C94B0;
      }
      goto L_089C9418;
    }
L_089C9418:
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (ctx.gpr[20] << 4u);
    ctx.gpr[6] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C94B0;
      }
      goto L_089C943C;
    }
L_089C943C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089C9454u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C9454u) goto L_089C9454;
    return;
L_089C9454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089C9474;
      }
      goto L_089C9464;
    }
L_089C9464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C9474;
L_089C9474:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C94B0;
      }
      goto L_089C9480;
    }
L_089C9480:
    ctx.gpr[31] = (0x089C9488u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x089C9488u) goto L_089C9488;
    return;
L_089C9488:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C9494u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 756u, 0x089C7228u>(ctx, &aot_mem) && ctx.pc == 0x089C9494u) goto L_089C9494;
    return;
L_089C9494:
    ctx.gpr[31] = (0x089C949Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 839u, 0x08AA3F84u>(ctx, &aot_mem) && ctx.pc == 0x089C949Cu) goto L_089C949C;
    return;
L_089C949C:
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C94B0;
      }
      goto L_089C94A8;
    }
L_089C94A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C94BC;
      }
      goto L_089C94B0;
    }
L_089C94B0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C93C0;
      }
      goto L_089C94B8;
    }
L_089C94B8:
    ctx.gpr[2] = (0u | 0u);
    goto L_089C94BC;
L_089C94BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C94EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28284)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[18] = (2u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7404)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-7428));
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[22] = (2233u << 16u);
      if (branch_taken) {
          goto L_089C95DC;
      }
      goto L_089C953C;
    }
L_089C953C:
    ctx.gpr[19] = (0u | 20u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-26768));
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    goto L_089C9548;
L_089C9548:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089C95C8;
      }
      goto L_089C9560;
    }
L_089C9560:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 6100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C95C8;
      }
      goto L_089C956C;
    }
L_089C956C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C95C8;
      }
      goto L_089C957C;
    }
L_089C957C:
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4900));
    ctx.gpr[31] = (0x089C9588u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 665u, 0x0892FF6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C9588u) goto L_089C9588;
    return;
L_089C9588:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C95C8;
      }
      goto L_089C9590;
    }
L_089C9590:
    ctx.gpr[31] = (0x089C9598u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_089C9610;
L_089C9598:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C95C8;
      }
      goto L_089C95A0;
    }
L_089C95A0:
    ctx.gpr[31] = (0x089C95A8u);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(4900));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x089C95A8u) goto L_089C95A8;
    return;
L_089C95A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C95B4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 756u, 0x089C7228u>(ctx, &aot_mem) && ctx.pc == 0x089C95B4u) goto L_089C95B4;
    return;
L_089C95B4:
    ctx.gpr[31] = (0x089C95BCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 839u, 0x08AA3F84u>(ctx, &aot_mem) && ctx.pc == 0x089C95BCu) goto L_089C95BC;
    return;
L_089C95BC:
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C95E4;
      }
      goto L_089C95C8;
    }
L_089C95C8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C9548;
      }
      goto L_089C95DC;
    }
L_089C95DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C95E8;
      }
      goto L_089C95E4;
    }
L_089C95E4:
    ctx.gpr[2] = (0u | 1u);
    goto L_089C95E8;
L_089C95E8:
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
L_089C9610:
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7388)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[9] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7368));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[9];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
      if (branch_taken) {
          goto L_089C96A4;
      }
      goto L_089C9644;
    }
L_089C9644:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (0u | 20u);
    ctx.gpr[11] = (ctx.gpr[10] - ctx.gpr[8]);
    goto L_089C9650;
L_089C9650:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[11]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[2]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9688;
      }
      goto L_089C9664;
    }
L_089C9664:
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[11] = (0u | 0u);
      if (branch_taken) {
          goto L_089C967C;
      }
      goto L_089C9670;
    }
L_089C9670:
    ctx.gpr[11] = (ctx.gpr[2] << 2u);
    ctx.gpr[11] = (ctx.gpr[5] + ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    goto L_089C967C;
L_089C967C:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(30))))));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C969C;
      }
      goto L_089C9688;
    }
L_089C9688:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[9];
    ctx.gpr[11] = (ctx.gpr[10] - ctx.gpr[8]);
      if (branch_taken) {
          goto L_089C9650;
      }
      goto L_089C9694;
    }
L_089C9694:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C96A4;
      }
      goto L_089C969C;
    }
L_089C969C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C9750;
      }
      goto L_089C96A4;
    }
L_089C96A4:
    ctx.gpr[8] = (2277u << 16u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-6024));
    goto L_089C96B4;
L_089C96B4:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[7];
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[11]) < 4900 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C96EC;
      }
      goto L_089C96C0;
    }
L_089C96C0:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C96EC;
      }
      goto L_089C96C8;
    }
L_089C96C8:
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_089C96E0;
      }
      goto L_089C96D4;
    }
L_089C96D4:
    ctx.gpr[10] = (ctx.gpr[11] << 2u);
    ctx.gpr[10] = (ctx.gpr[5] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    goto L_089C96E0;
L_089C96E0:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(30))))));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C9700;
      }
      goto L_089C96EC;
    }
L_089C96EC:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[7];
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[11]) < 4900 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C9708;
      }
      goto L_089C96F8;
    }
L_089C96F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9734;
      }
      goto L_089C9700;
    }
L_089C9700:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C9750;
      }
      goto L_089C9708;
    }
L_089C9708:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9734;
      }
      goto L_089C9710;
    }
L_089C9710:
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_089C9728;
      }
      goto L_089C971C;
    }
L_089C971C:
    ctx.gpr[10] = (ctx.gpr[11] << 2u);
    ctx.gpr[10] = (ctx.gpr[5] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    goto L_089C9728;
L_089C9728:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(30))))));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C974C;
      }
      goto L_089C9734;
    }
L_089C9734:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C96B4;
      }
      goto L_089C9744;
    }
L_089C9744:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C9750;
      }
      goto L_089C974C;
    }
L_089C974C:
    ctx.gpr[2] = (0u | 1u);
    goto L_089C9750;
L_089C9750:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9758:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7388)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-7368));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[21] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    ctx.gpr[22] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C9828;
      }
      goto L_089C97AC;
    }
L_089C97AC:
    ctx.gpr[20] = (0u | 20u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_089C97B4;
L_089C97B4:
    ctx.gpr[5] = (ctx.gpr[18] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9818;
      }
      goto L_089C97CC;
    }
L_089C97CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C97EC;
      }
      goto L_089C97DC;
    }
L_089C97DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C97EC;
L_089C97EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(72));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089C9804u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C9804u) goto L_089C9804;
    return;
L_089C9804:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089C9814;
      }
      goto L_089C980C;
    }
L_089C980C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C990C;
      }
      goto L_089C9814;
    }
L_089C9814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28284)));
    goto L_089C9818;
L_089C9818:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C97B4;
      }
      goto L_089C9828;
    }
L_089C9828:
    ctx.gpr[18] = (2277u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-6024));
    goto L_089C9838;
L_089C9838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4900 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C988C;
      }
      goto L_089C9844;
    }
L_089C9844:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C988C;
      }
      goto L_089C984C;
    }
L_089C984C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089C986C;
      }
      goto L_089C985C;
    }
L_089C985C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C986C;
L_089C986C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089C9884u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C9884u) goto L_089C9884;
    return;
L_089C9884:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089C98A0;
      }
      goto L_089C988C;
    }
L_089C988C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4900 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C98A8;
      }
      goto L_089C9898;
    }
L_089C9898:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C98F0;
      }
      goto L_089C98A0;
    }
L_089C98A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C990C;
      }
      goto L_089C98A8;
    }
L_089C98A8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C98F0;
      }
      goto L_089C98B0;
    }
L_089C98B0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089C98D0;
      }
      goto L_089C98C0;
    }
L_089C98C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C98D0;
L_089C98D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089C98E8u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C98E8u) goto L_089C98E8;
    return;
L_089C98E8:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089C9908;
      }
      goto L_089C98F0;
    }
L_089C98F0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C9838;
      }
      goto L_089C9900;
    }
L_089C9900:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C990C;
      }
      goto L_089C9908;
    }
L_089C9908:
    ctx.gpr[2] = (0u | 1u);
    goto L_089C990C;
L_089C990C:
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
L_089C9934:
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-8064)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-7568)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[9] = (32768u << 16u);
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C9988;
      }
      goto L_089C9974;
    }
L_089C9974:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7560)));
    ctx.gpr[11] = (ctx.gpr[2] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9998;
      }
      goto L_089C9988;
    }
L_089C9988:
    ctx.gpr[13] = (0u | 0u);
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (ctx.gpr[7] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_089C99A0;
      }
      goto L_089C9998;
    }
L_089C9998:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9A10;
      }
      goto L_089C99A0;
    }
L_089C99A0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-7568)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C99B4;
      }
      goto L_089C99AC;
    }
L_089C99AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C99EC;
      }
      goto L_089C99B4;
    }
L_089C99B4:
    ctx.gpr[11] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C99CC;
      }
      goto L_089C99C0;
    }
L_089C99C0:
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089C99DC;
      }
      goto L_089C99CC;
    }
L_089C99CC:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7560)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[11]);
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[2]);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    goto L_089C99DC;
L_089C99DC:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C99EC;
      }
      goto L_089C99E4;
    }
L_089C99E4:
    ctx.gpr[9] = (ctx.gpr[2] | 0u);
    ctx.gpr[10] = (ctx.gpr[13] | 0u);
    goto L_089C99EC;
L_089C99EC:
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[13]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C99A0;
      }
      goto L_089C99FC;
    }
L_089C99FC:
    ctx.gpr[4] = (ctx.gpr[10] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-8064), ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7568)));
    goto L_089C9A10;
L_089C9A10:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9A18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C9A4Cu);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 345u, 0x08A8A37Cu>(ctx, &aot_mem) && ctx.pc == 0x089C9A4Cu) goto L_089C9A4C;
    return;
L_089C9A4C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9C10;
      }
      goto L_089C9A58;
    }
L_089C9A58:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[19] = (ctx.gpr[20] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6024));
    ctx.gpr[20] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26768));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[23] = (2229u << 16u);
    goto L_089C9A90;
L_089C9A90:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089C9BF8;
      }
      goto L_089C9A9C;
    }
L_089C9A9C:
    ctx.gpr[16] = (ctx.gpr[17] << 4u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089C9AB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 363u, 0x089C581Cu>(ctx, &aot_mem) && ctx.pc == 0x089C9AB8u) goto L_089C9AB8;
    return;
L_089C9AB8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9BD0;
      }
      goto L_089C9AC4;
    }
L_089C9AC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C9AE4;
      }
      goto L_089C9AD4;
    }
L_089C9AD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C9AE4;
L_089C9AE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C9BD0;
      }
      goto L_089C9AF4;
    }
L_089C9AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7456)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28308)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9BD0;
      }
      goto L_089C9B18;
    }
L_089C9B18:
    ctx.gpr[31] = (0x089C9B20u);
    // nop
    goto L_089C81E0;
L_089C9B20:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9BD0;
      }
      goto L_089C9B28;
    }
L_089C9B28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[4] & 131u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9B50;
      }
      goto L_089C9B40;
    }
L_089C9B40:
    ctx.gpr[31] = (0x089C9B48u);
    // nop
    goto L_089CA7C4;
L_089C9B48:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089C9BD0;
      }
      goto L_089C9B50;
    }
L_089C9B50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C9B70;
      }
      goto L_089C9B60;
    }
L_089C9B60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C9B70;
L_089C9B70:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[31] = (0x089C9B84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x089C9B84u) goto L_089C9B84;
    return;
L_089C9B84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (ctx.gpr[4] & 131u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089C9BB0;
      }
      goto L_089C9B9C;
    }
L_089C9B9C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089C9BA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089CACE4;
L_089C9BA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9BC8;
      }
      goto L_089C9BB0;
    }
L_089C9BB0:
    ctx.gpr[31] = (0x089C9BB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 665u, 0x0892FF6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C9BB8u) goto L_089C9BB8;
    return;
L_089C9BB8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9BC8;
      }
      goto L_089C9BC0;
    }
L_089C9BC0:
    ctx.gpr[31] = (0x089C9BC8u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4900));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x089C9BC8u) goto L_089C9BC8;
    return;
L_089C9BC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9BF8;
      }
      goto L_089C9BD0;
    }
L_089C9BD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089C9BDCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 542u, 0x089CE110u>(ctx, &aot_mem) && ctx.pc == 0x089C9BDCu) goto L_089C9BDC;
    return;
L_089C9BDC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9BF0;
      }
      goto L_089C9BE4;
    }
L_089C9BE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089C9BF0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x089C9BF0u) goto L_089C9BF0;
    return;
L_089C9BF0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    goto L_089C9BF8;
L_089C9BF8:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C9A90;
      }
      goto L_089C9C08;
    }
L_089C9C08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C9C4C;
      }
      goto L_089C9C10;
    }
L_089C9C10:
    ctx.gpr[5] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 250u);
      if (branch_taken) {
          goto L_089C9C48;
      }
      goto L_089C9C1C;
    }
L_089C9C1C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C9C48;
      }
      goto L_089C9C24;
    }
L_089C9C24:
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[20] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-6024));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6268), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_089C9C48;
L_089C9C48:
    ctx.gpr[2] = (0u | 0u);
    goto L_089C9C4C;
L_089C9C4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9C7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C9C98u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 540u, 0x08A96588u>(ctx, &aot_mem) && ctx.pc == 0x089C9C98u) goto L_089C9C98;
    return;
L_089C9C98:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6024));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C9CC4;
      }
      goto L_089C9CB4;
    }
L_089C9CB4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C9D80;
      }
      goto L_089C9CBC;
    }
L_089C9CBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9D3C;
      }
      goto L_089C9CC4;
    }
L_089C9CC4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C9D64;
      }
      goto L_089C9CCC;
    }
L_089C9CCC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9D80;
      }
      goto L_089C9CD4;
    }
L_089C9CD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x089C9CE8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 345u, 0x08A8A37Cu>(ctx, &aot_mem) && ctx.pc == 0x089C9CE8u) goto L_089C9CE8;
    return;
L_089C9CE8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C9D28;
      }
      goto L_089C9CF8;
    }
L_089C9CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 101 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9D10;
      }
      goto L_089C9D08;
    }
L_089C9D08:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_089C9D10;
L_089C9D10:
    ctx.gpr[31] = (0x089C9D18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 345u, 0x08A8A37Cu>(ctx, &aot_mem) && ctx.pc == 0x089C9D18u) goto L_089C9D18;
    return;
L_089C9D18:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C9D3C;
      }
      goto L_089C9D20;
    }
L_089C9D20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9D80;
      }
      goto L_089C9D28;
    }
L_089C9D28:
    ctx.gpr[5] = (0u | 250u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C9D3C;
      }
      goto L_089C9D34;
    }
L_089C9D34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9D80;
      }
      goto L_089C9D3C;
    }
L_089C9D3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x089C9D50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 338u, 0x08A8A2C0u>(ctx, &aot_mem) && ctx.pc == 0x089C9D50u) goto L_089C9D50;
    return;
L_089C9D50:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-600));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C9D80;
      }
      goto L_089C9D64;
    }
L_089C9D64:
    ctx.gpr[31] = (0x089C9D6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C9A18;
L_089C9D6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9D80;
      }
      goto L_089C9D74;
    }
L_089C9D74:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6268), ctx.gpr[4]);
    goto L_089C9D80;
L_089C9D80:
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
L_089C9D98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089C9E3C;
      }
      goto L_089C9DBC;
    }
L_089C9DBC:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089C9DDCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 363u, 0x089C581Cu>(ctx, &aot_mem) && ctx.pc == 0x089C9DDCu) goto L_089C9DDC;
    return;
L_089C9DDC:
    ctx.gpr[6] = (ctx.gpr[2] << 11u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9E1C;
      }
      goto L_089C9DF4;
    }
L_089C9DF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9E1C;
      }
      goto L_089C9E04;
    }
L_089C9E04:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9E3C;
      }
      goto L_089C9E1C;
    }
L_089C9E1C:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C9E34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9096));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089C9E34u) goto L_089C9E34;
    return;
L_089C9E34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C9EE8;
      }
      goto L_089C9E3C;
    }
L_089C9E3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (116u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25976));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C9EA8;
      }
      goto L_089C9E50;
    }
L_089C9E50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9EA8;
      }
      goto L_089C9E64;
    }
L_089C9E64:
    ctx.gpr[4] = (116u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25976));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089C9E84u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 559u, 0x0886AFD0u>(ctx, &aot_mem) && ctx.pc == 0x089C9E84u) goto L_089C9E84;
    return;
L_089C9E84:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089C9EBC;
      }
      goto L_089C9E90;
    }
L_089C9E90:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4900));
    ctx.gpr[31] = (0x089C9EA0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 608u, 0x0892FB3Cu>(ctx, &aot_mem) && ctx.pc == 0x089C9EA0u) goto L_089C9EA0;
    return;
L_089C9EA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9ECC;
      }
      goto L_089C9EA8;
    }
L_089C9EA8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C9EB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9028));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089C9EB4u) goto L_089C9EB4;
    return;
L_089C9EB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C9EE8;
      }
      goto L_089C9EBC;
    }
L_089C9EBC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C9ECCu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 608u, 0x0892FB3Cu>(ctx, &aot_mem) && ctx.pc == 0x089C9ECCu) goto L_089C9ECC;
    return;
L_089C9ECC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 1u);
    goto L_089C9EE8;
L_089C9EE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9F00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089C9F38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 363u, 0x089C581Cu>(ctx, &aot_mem) && ctx.pc == 0x089C9F38u) goto L_089C9F38;
    return;
L_089C9F38:
    ctx.gpr[4] = (24942u << 16u);
    ctx.gpr[5] = (ctx.gpr[2] << 11u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(26989));
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089C9F88;
      }
      goto L_089C9F54;
    }
L_089C9F54:
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9F88;
      }
      goto L_089C9F60;
    }
L_089C9F60:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9F88;
      }
      goto L_089C9F70;
    }
L_089C9F70:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9FA8;
      }
      goto L_089C9F88;
    }
L_089C9F88:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C9FA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8992));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089C9FA0u) goto L_089C9FA0;
    return;
L_089C9FA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C9FF8;
      }
      goto L_089C9FA8;
    }
L_089C9FA8:
    ctx.gpr[4] = (24942u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26989));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089C9FC8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 559u, 0x0886AFD0u>(ctx, &aot_mem) && ctx.pc == 0x089C9FC8u) goto L_089C9FC8;
    return;
L_089C9FC8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6115));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C9FDCu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 424u, 0x08A8A898u>(ctx, &aot_mem) && ctx.pc == 0x089C9FDCu) goto L_089C9FDC;
    return;
L_089C9FDC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 1u);
    goto L_089C9FF8;
L_089C9FF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CA00C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089CA044u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 363u, 0x089C581Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA044u) goto L_089CA044;
    return;
L_089CA044:
    ctx.gpr[4] = (25455u << 16u);
    ctx.gpr[5] = (ctx.gpr[2] << 11u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(27698));
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089CA094;
      }
      goto L_089CA060;
    }
L_089CA060:
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA094;
      }
      goto L_089CA06C;
    }
L_089CA06C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA094;
      }
      goto L_089CA07C;
    }
L_089CA07C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA0B4;
      }
      goto L_089CA094;
    }
L_089CA094:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CA0ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8928));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089CA0ACu) goto L_089CA0AC;
    return;
L_089CA0AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA104;
      }
      goto L_089CA0B4;
    }
L_089CA0B4:
    ctx.gpr[4] = (25455u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27698));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089CA0D4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 559u, 0x0886AFD0u>(ctx, &aot_mem) && ctx.pc == 0x089CA0D4u) goto L_089CA0D4;
    return;
L_089CA0D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6100));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089CA0E8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 250u, 0x08985A98u>(ctx, &aot_mem) && ctx.pc == 0x089CA0E8u) goto L_089CA0E8;
    return;
L_089CA0E8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 1u);
    goto L_089CA104;
L_089CA104:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CA118:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA180;
      }
      goto L_089CA144;
    }
L_089CA144:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-7004))))));
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_089CA178;
      }
      goto L_089CA158;
    }
L_089CA158:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CA178;
      }
      goto L_089CA160;
    }
L_089CA160:
    ctx.gpr[31] = (0x089CA168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA168u) goto L_089CA168;
    return;
L_089CA168:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA188;
      }
      goto L_089CA170;
    }
L_089CA170:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA1C0;
      }
      goto L_089CA178;
    }
L_089CA178:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA4CC;
      }
      goto L_089CA180;
    }
L_089CA180:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA4CC;
      }
      goto L_089CA188;
    }
L_089CA188:
    ctx.gpr[31] = (0x089CA190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA190u) goto L_089CA190;
    return;
L_089CA190:
    ctx.gpr[31] = (0x089CA198u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 361u, 0x08ACD76Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA198u) goto L_089CA198;
    return;
L_089CA198:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA1C0;
      }
      goto L_089CA1A0;
    }
L_089CA1A0:
    ctx.gpr[4] = (0u | 158u);
    ctx.gpr[31] = (0x089CA1ACu);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CACE4;
L_089CA1AC:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x089CA1B8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CACE4;
L_089CA1B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA1F0;
      }
      goto L_089CA1C0;
    }
L_089CA1C0:
    ctx.gpr[31] = (0x089CA1C8u);
    ctx.gpr[4] = (0u | 158u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA1C8u) goto L_089CA1C8;
    return;
L_089CA1C8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3172)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA1F0;
      }
      goto L_089CA1E8;
    }
L_089CA1E8:
    ctx.gpr[31] = (0x089CA1F0u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA1F0u) goto L_089CA1F0;
    return;
L_089CA1F0:
    ctx.gpr[31] = (0x089CA1F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA1F8u) goto L_089CA1F8;
    return;
L_089CA1F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA238;
      }
      goto L_089CA200;
    }
L_089CA200:
    ctx.gpr[31] = (0x089CA208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA208u) goto L_089CA208;
    return;
L_089CA208:
    ctx.gpr[31] = (0x089CA210u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 369u, 0x08ACD7B8u>(ctx, &aot_mem) && ctx.pc == 0x089CA210u) goto L_089CA210;
    return;
L_089CA210:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA238;
      }
      goto L_089CA218;
    }
L_089CA218:
    ctx.gpr[4] = (0u | 148u);
    ctx.gpr[31] = (0x089CA224u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CACE4;
L_089CA224:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x089CA230u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CACE4;
L_089CA230:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA268;
      }
      goto L_089CA238;
    }
L_089CA238:
    ctx.gpr[31] = (0x089CA240u);
    ctx.gpr[4] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA240u) goto L_089CA240;
    return;
L_089CA240:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2972)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA268;
      }
      goto L_089CA260;
    }
L_089CA260:
    ctx.gpr[31] = (0x089CA268u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA268u) goto L_089CA268;
    return;
L_089CA268:
    ctx.gpr[31] = (0x089CA270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA270u) goto L_089CA270;
    return;
L_089CA270:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA2BC;
      }
      goto L_089CA278;
    }
L_089CA278:
    ctx.gpr[31] = (0x089CA280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA280u) goto L_089CA280;
    return;
L_089CA280:
    ctx.gpr[31] = (0x089CA288u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 377u, 0x08ACD804u>(ctx, &aot_mem) && ctx.pc == 0x089CA288u) goto L_089CA288;
    return;
L_089CA288:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA2BC;
      }
      goto L_089CA290;
    }
L_089CA290:
    ctx.gpr[4] = (0u | 162u);
    ctx.gpr[31] = (0x089CA29Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CACE4;
L_089CA29C:
    ctx.gpr[4] = (0u | 163u);
    ctx.gpr[31] = (0x089CA2A8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CACE4;
L_089CA2A8:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x089CA2B4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CACE4;
L_089CA2B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA30C;
      }
      goto L_089CA2BC;
    }
L_089CA2BC:
    ctx.gpr[31] = (0x089CA2C4u);
    ctx.gpr[4] = (0u | 163u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA2C4u) goto L_089CA2C4;
    return;
L_089CA2C4:
    ctx.gpr[31] = (0x089CA2CCu);
    ctx.gpr[4] = (0u | 162u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA2CCu) goto L_089CA2CC;
    return;
L_089CA2CC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3272)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA30C;
      }
      goto L_089CA2EC;
    }
L_089CA2EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3252)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA30C;
      }
      goto L_089CA304;
    }
L_089CA304:
    ctx.gpr[31] = (0x089CA30Cu);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA30Cu) goto L_089CA30C;
    return;
L_089CA30C:
    ctx.gpr[31] = (0x089CA314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA314u) goto L_089CA314;
    return;
L_089CA314:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA348;
      }
      goto L_089CA31C;
    }
L_089CA31C:
    ctx.gpr[31] = (0x089CA324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA324u) goto L_089CA324;
    return;
L_089CA324:
    ctx.gpr[31] = (0x089CA32Cu);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 385u, 0x08ACD850u>(ctx, &aot_mem) && ctx.pc == 0x089CA32Cu) goto L_089CA32C;
    return;
L_089CA32C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089CA348;
      }
      goto L_089CA334;
    }
L_089CA334:
    ctx.gpr[4] = (0u | 199u);
    ctx.gpr[31] = (0x089CA340u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CACE4;
L_089CA340:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27452)));
      if (branch_taken) {
          goto L_089CA354;
      }
      goto L_089CA348;
    }
L_089CA348:
    ctx.gpr[31] = (0x089CA350u);
    ctx.gpr[4] = (0u | 199u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA350u) goto L_089CA350;
    return;
L_089CA350:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27452)));
    goto L_089CA354;
L_089CA354:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA374;
      }
      goto L_089CA35C;
    }
L_089CA35C:
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28260)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[17] = (2229u << 16u);
      if (branch_taken) {
          goto L_089CA37C;
      }
      goto L_089CA36C;
    }
L_089CA36C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA4C4;
      }
      goto L_089CA374;
    }
L_089CA374:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA4CC;
      }
      goto L_089CA37C;
    }
L_089CA37C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7456)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28308)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA4CC;
      }
      goto L_089CA3A0;
    }
L_089CA3A0:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089CA3ACu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089CA3ACu) goto L_089CA3AC;
    return;
L_089CA3AC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089CA3C0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 391u, 0x088724E0u>(ctx, &aot_mem) && ctx.pc == 0x089CA3C0u) goto L_089CA3C0;
    return;
L_089CA3C0:
    ctx.gpr[20] = (2277u << 16u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-5744));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[29] | 0u);
    goto L_089CA3DC;
L_089CA3DC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA420;
      }
      goto L_089CA3EC;
    }
L_089CA3EC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA400;
      }
      goto L_089CA3F4;
    }
L_089CA3F4:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) > 0;
    // nop
      if (branch_taken) {
          goto L_089CA418;
      }
      goto L_089CA400;
    }
L_089CA400:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089CA420;
      }
      goto L_089CA408;
    }
L_089CA408:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(34)));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_089CA420;
      }
      goto L_089CA418;
    }
L_089CA418:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    goto L_089CA420;
L_089CA420:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CA3DC;
      }
      goto L_089CA434;
    }
L_089CA434:
    ctx.gpr[31] = (0x089CA43Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 244u, 0x089ED98Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA43Cu) goto L_089CA43C;
    return;
L_089CA43C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_089CA4B4;
      }
      goto L_089CA460;
    }
L_089CA460:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA484;
      }
      goto L_089CA470;
    }
L_089CA470:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089CA484;
L_089CA484:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7340)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(70))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[16] << (ctx.gpr[6] & 31u));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA4B4;
      }
      goto L_089CA4A4;
    }
L_089CA4A4:
    ctx.gpr[31] = (0x089CA4ACu);
    ctx.gpr[5] = (0u | 4u);
    goto L_089CACE4;
L_089CA4AC:
    ctx.gpr[4] = (0u | 350u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-28260), ctx.gpr[4]);
    goto L_089CA4B4;
L_089CA4B4:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089CA4CC;
      }
      goto L_089CA4C4;
    }
L_089CA4C4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-28260), ctx.gpr[4]);
    goto L_089CA4CC;
L_089CA4CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CA4EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    ctx.gpr[23] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7456)));
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-28308)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.gpr[20] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[18] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[30] = (2230u << 16u);
      if (branch_taken) {
          goto L_089CA5D0;
      }
      goto L_089CA55C;
    }
L_089CA55C:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[23] = (0u | 1u);
    goto L_089CA564;
L_089CA564:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6284)));
    ctx.gpr[8] = (ctx.gpr[5] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[18]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-7552)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089CA58C;
      }
      goto L_089CA580;
    }
L_089CA580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7456)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CA5B4;
      }
      goto L_089CA58C;
    }
L_089CA58C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6284), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089CA59C;
      }
      goto L_089CA598;
    }
L_089CA598:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6284), 0u);
    goto L_089CA59C;
L_089CA59C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA564;
      }
      goto L_089CA5AC;
    }
L_089CA5AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7456)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089CA5B4;
L_089CA5B4:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7456), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6284)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[21] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_089CA734;
      }
      goto L_089CA5D0;
    }
L_089CA5D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6284)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[7] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7552)));
    ctx.gpr[22] = (2229u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11604)));
    goto L_089CA5F0;
L_089CA5F0:
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
      if (branch_taken) {
          goto L_089CA640;
      }
      goto L_089CA5FC;
    }
L_089CA5FC:
    ctx.gpr[11] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(13)));
    ctx.gpr[8] = (ctx.gpr[8] & 131u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089CA640;
      }
      goto L_089CA618;
    }
L_089CA618:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA62C;
      }
      goto L_089CA620;
    }
L_089CA620:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_089CA62C;
L_089CA62C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA640;
      }
      goto L_089CA638;
    }
L_089CA638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA680;
      }
      goto L_089CA640;
    }
L_089CA640:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6284), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089CA650;
      }
      goto L_089CA64C;
    }
L_089CA64C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6284), 0u);
    goto L_089CA650;
L_089CA650:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA668;
      }
      goto L_089CA660;
    }
L_089CA660:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089CA680;
      }
      goto L_089CA668;
    }
L_089CA668:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6284)));
    ctx.gpr[7] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7552)));
      if (branch_taken) {
          goto L_089CA5F0;
      }
      goto L_089CA680;
    }
L_089CA680:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089CA6E4;
      }
      goto L_089CA688;
    }
L_089CA688:
    ctx.gpr[31] = (0x089CA690u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x089CA690u) goto L_089CA690;
    return;
L_089CA690:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_089CA6B4;
      }
      goto L_089CA6A4;
    }
L_089CA6A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CA6B4;
L_089CA6B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(69))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089CA6CC;
      }
      goto L_089CA6C0;
    }
L_089CA6C0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089CA6CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 339u, 0x089EE0B0u>(ctx, &aot_mem) && ctx.pc == 0x089CA6CCu) goto L_089CA6CC;
    return;
L_089CA6CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6284)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[21] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_089CA734;
      }
      goto L_089CA6E4;
    }
L_089CA6E4:
    ctx.gpr[31] = (0x089CA6ECu);
    // nop
    goto L_089CA7C4;
L_089CA6EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089CA72C;
      }
      goto L_089CA6F8;
    }
L_089CA6F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6284), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7456)));
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7456), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6284)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[21] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_089CA734;
      }
      goto L_089CA72C;
    }
L_089CA72C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA794;
      }
      goto L_089CA734;
    }
L_089CA734:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-7552), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6284)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6284), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CA754;
      }
      goto L_089CA750;
    }
L_089CA750:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6284), 0u);
    goto L_089CA754;
L_089CA754:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA774;
      }
      goto L_089CA760;
    }
L_089CA760:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CA774;
L_089CA774:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(69))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089CA790;
      }
      goto L_089CA780;
    }
L_089CA780:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(72))))));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x089CA790u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 336u, 0x089EE03Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA790u) goto L_089CA790;
    return;
L_089CA790:
    ctx.gpr[2] = (ctx.gpr[23] | 0u);
    goto L_089CA794;
L_089CA794:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CA7C4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_089CA7DC;
L_089CA7DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7552)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CA800;
      }
      goto L_089CA7E8;
    }
L_089CA7E8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CA7DC;
      }
      goto L_089CA7F8;
    }
L_089CA7F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA808;
      }
      goto L_089CA800;
    }
L_089CA800:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089CA808;
      }
      goto L_089CA808;
    }
L_089CA808:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CA810:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-6272)));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[16];
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089CAA9C;
      }
      goto L_089CA888;
    }
L_089CA888:
    ctx.gpr[22] = (2227u << 16u);
    goto L_089CA88C;
L_089CA88C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA99C;
      }
      goto L_089CA898;
    }
L_089CA898:
    ctx.gpr[30] = (0u | 2u);
    goto L_089CA89C;
L_089CA89C:
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[30]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089CA8B0;
      }
      goto L_089CA8A8;
    }
L_089CA8A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CA980;
      }
      goto L_089CA8B0;
    }
L_089CA8B0:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA8C4;
      }
      goto L_089CA8BC;
    }
L_089CA8BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089CA994;
      }
      goto L_089CA8C4;
    }
L_089CA8C4:
    ctx.gpr[23] = (0u - ctx.gpr[30]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[21] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CA980;
      }
      goto L_089CA8D4;
    }
L_089CA8D4:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[23]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089CA8E8;
      }
      goto L_089CA8E0;
    }
L_089CA8E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CA970;
      }
      goto L_089CA8E8;
    }
L_089CA8E8:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 100 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
        goto L_089CA8FC;
    }
    goto L_089CA8F4;
L_089CA8F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6276)));
      if (branch_taken) {
          goto L_089CA980;
      }
      goto L_089CA8FC;
    }
L_089CA8FC:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[30] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[31] = (0x089CA92Cu);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[30]);
    goto L_089C8CE4;
L_089CA92C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6276)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-6272)));
    ctx.gpr[31] = (0x089CA944u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_089C8D60;
L_089CA944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[31] = (0x089CA954u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    goto L_089C8CE4;
L_089CA954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[31] = (0x089CA964u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    goto L_089C8CE4;
L_089CA964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-6272)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089CA970;
L_089CA970:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA8D4;
      }
      goto L_089CA97C;
    }
L_089CA97C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6276)));
    goto L_089CA980;
L_089CA980:
    ctx.gpr[30] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[30]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA89C;
      }
      goto L_089CA990;
    }
L_089CA990:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_089CA994;
L_089CA994:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-6276), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089CAA94;
      }
      goto L_089CA99C;
    }
L_089CA99C:
    ctx.gpr[23] = (0u | 2u);
    goto L_089CA9A0;
L_089CA9A0:
    ctx.gpr[19] = (ctx.gpr[5] - ctx.gpr[23]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089CA9B4;
      }
      goto L_089CA9AC;
    }
L_089CA9AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CAA90;
      }
      goto L_089CA9B4;
    }
L_089CA9B4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA9C8;
      }
      goto L_089CA9C0;
    }
L_089CA9C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAA7C;
      }
      goto L_089CA9C8;
    }
L_089CA9C8:
    ctx.gpr[21] = (0u - ctx.gpr[23]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CAA7C;
      }
      goto L_089CA9D8;
    }
L_089CA9D8:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[21]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089CA9EC;
      }
      goto L_089CA9E4;
    }
L_089CA9E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CAA6C;
      }
      goto L_089CA9EC;
    }
L_089CA9EC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 100 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
        goto L_089CAA00;
    }
    goto L_089CA9F8;
L_089CA9F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6276)));
      if (branch_taken) {
          goto L_089CAA7C;
      }
      goto L_089CAA00;
    }
L_089CAA00:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[30] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[31] = (0x089CAA2Cu);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[30]);
    goto L_089C8CE4;
L_089CAA2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6276)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-6272)));
    ctx.gpr[31] = (0x089CAA44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_089C8D60;
L_089CAA44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[31] = (0x089CAA54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    goto L_089C8CE4;
L_089CAA54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[31] = (0x089CAA64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    goto L_089C8CE4;
L_089CAA64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-6272)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_089CAA6C;
L_089CAA6C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA9D8;
      }
      goto L_089CAA78;
    }
L_089CAA78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6276)));
    goto L_089CAA7C;
L_089CAA7C:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[23]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA9A0;
      }
      goto L_089CAA8C;
    }
L_089CAA8C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089CAA90;
L_089CAA90:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-6276), ctx.gpr[5]);
    goto L_089CAA94;
L_089CAA94:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089CA88C;
      }
      goto L_089CAA9C;
    }
L_089CAA9C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[16] = (2227u << 16u);
      if (branch_taken) {
          goto L_089CACB4;
      }
      goto L_089CAAA4;
    }
L_089CAAA4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CABB0;
      }
      goto L_089CAAB0;
    }
L_089CAAB0:
    ctx.gpr[23] = (0u | 2u);
    goto L_089CAAB4;
L_089CAAB4:
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[23]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089CAAC8;
      }
      goto L_089CAAC0;
    }
L_089CAAC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CAB94;
      }
      goto L_089CAAC8;
    }
L_089CAAC8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CAADC;
      }
      goto L_089CAAD4;
    }
L_089CAAD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089CABA8;
      }
      goto L_089CAADC;
    }
L_089CAADC:
    ctx.gpr[22] = (0u - ctx.gpr[23]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CAB94;
      }
      goto L_089CAAEC;
    }
L_089CAAEC:
    ctx.gpr[4] = (ctx.gpr[21] << 5u);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[5] << 2u);
    ctx.gpr[21] = (ctx.gpr[21] - ctx.gpr[4]);
    goto L_089CAAFC;
L_089CAAFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6276)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089CAB14;
      }
      goto L_089CAB0C;
    }
L_089CAB0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CAB84;
      }
      goto L_089CAB14;
    }
L_089CAB14:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CAB28;
      }
      goto L_089CAB20;
    }
L_089CAB20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-6272)));
      if (branch_taken) {
          goto L_089CAB94;
      }
      goto L_089CAB28;
    }
L_089CAB28:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[30] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[31] = (0x089CAB48u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[30]);
    goto L_089C8CE4;
L_089CAB48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6276)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-6272)));
    ctx.gpr[31] = (0x089CAB60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_089C8D60;
L_089CAB60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[31] = (0x089CAB70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    goto L_089C8CE4;
L_089CAB70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[31] = (0x089CAB80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    goto L_089C8CE4;
L_089CAB80:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_089CAB84;
L_089CAB84:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAAFC;
      }
      goto L_089CAB90;
    }
L_089CAB90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-6272)));
    goto L_089CAB94;
L_089CAB94:
    ctx.gpr[23] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CAAB4;
      }
      goto L_089CABA4;
    }
L_089CABA4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_089CABA8;
L_089CABA8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-6272), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CACAC;
      }
      goto L_089CABB0;
    }
L_089CABB0:
    ctx.gpr[19] = (0u | 2u);
    goto L_089CABB4;
L_089CABB4:
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[19]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089CABC8;
      }
      goto L_089CABC0;
    }
L_089CABC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CACA8;
      }
      goto L_089CABC8;
    }
L_089CABC8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CABDC;
      }
      goto L_089CABD4;
    }
L_089CABD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAC94;
      }
      goto L_089CABDC;
    }
L_089CABDC:
    ctx.gpr[21] = (0u - ctx.gpr[19]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CAC94;
      }
      goto L_089CABEC;
    }
L_089CABEC:
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[5] << 2u);
    ctx.gpr[22] = (ctx.gpr[22] - ctx.gpr[4]);
    goto L_089CABFC;
L_089CABFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6276)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089CAC14;
      }
      goto L_089CAC0C;
    }
L_089CAC0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CAC84;
      }
      goto L_089CAC14;
    }
L_089CAC14:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CAC28;
      }
      goto L_089CAC20;
    }
L_089CAC20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-6272)));
      if (branch_taken) {
          goto L_089CAC94;
      }
      goto L_089CAC28;
    }
L_089CAC28:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[23] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[31] = (0x089CAC48u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[23]);
    goto L_089C8CE4;
L_089CAC48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6276)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-6272)));
    ctx.gpr[31] = (0x089CAC60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_089C8D60;
L_089CAC60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[31] = (0x089CAC70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    goto L_089C8CE4;
L_089CAC70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[31] = (0x089CAC80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    goto L_089C8CE4;
L_089CAC80:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_089CAC84;
L_089CAC84:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CABFC;
      }
      goto L_089CAC90;
    }
L_089CAC90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-6272)));
    goto L_089CAC94;
L_089CAC94:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CABB4;
      }
      goto L_089CACA4;
    }
L_089CACA4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089CACA8;
L_089CACA8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-6272), ctx.gpr[4]);
    goto L_089CACAC;
L_089CACAC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089CAAA4;
      }
      goto L_089CACB4;
    }
L_089CACB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CACE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-29564)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4900 ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089CAD48;
      }
      goto L_089CAD18;
    }
L_089CAD18:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CAD48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8852));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 475u, 0x089C60FCu>(ctx, &aot_mem) && ctx.pc == 0x089CAD48u) goto L_089CAD48;
    return;
L_089CAD48:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[18] = (2230u << 16u);
      if (branch_taken) {
          goto L_089CADA4;
      }
      goto L_089CAD50;
    }
L_089CAD50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20436)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_089CAD6C;
    }
    goto L_089CAD5C;
L_089CAD5C:
    ctx.gpr[31] = (0x089CAD64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x089CAD64u) goto L_089CAD64;
    return;
L_089CAD64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089CAD6C;
L_089CAD6C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CADA4;
      }
      goto L_089CAD7C;
    }
L_089CAD7C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089CAD94;
      }
      goto L_089CAD84;
    }
L_089CAD84:
    ctx.gpr[31] = (0x089CAD8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x089CAD8Cu) goto L_089CAD8C;
    return;
L_089CAD8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089CAD94;
L_089CAD94:
    ctx.gpr[31] = (0x089CAD9Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 91u, 0x089507FCu>(ctx, &aot_mem) && ctx.pc == 0x089CAD9Cu) goto L_089CAD9C;
    return;
L_089CAD9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CADD8;
      }
      goto L_089CADA4;
    }
L_089CADA4:
    ctx.gpr[18] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[6];
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_089CADE0;
      }
      goto L_089CADD0;
    }
L_089CADD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAE20;
      }
      goto L_089CADD8;
    }
L_089CADD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB000;
      }
      goto L_089CADE0;
    }
L_089CADE0:
    ctx.gpr[8] = (ctx.gpr[17] & 8u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[5] & 8u);
      if (branch_taken) {
          goto L_089CAE30;
      }
      goto L_089CADEC;
    }
L_089CADEC:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CAE30;
      }
      goto L_089CADF4;
    }
L_089CADF4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6280)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6280), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
      if (branch_taken) {
          goto L_089CAE30;
      }
      goto L_089CAE20;
    }
L_089CAE20:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAE30;
      }
      goto L_089CAE28;
    }
L_089CAE28:
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[17] = (ctx.gpr[17] & ctx.gpr[8]);
    goto L_089CAE30;
L_089CAE30:
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089CAF00;
      }
      goto L_089CAE4C;
    }
L_089CAE4C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAEB8;
      }
      goto L_089CAE5C;
    }
L_089CAE5C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAEB8;
      }
      goto L_089CAE64;
    }
L_089CAE64:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089CAE8C;
      }
      goto L_089CAE78;
    }
L_089CAE78:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089CAE8C;
L_089CAE8C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 3u);
      if (branch_taken) {
          goto L_089CAEA8;
      }
      goto L_089CAE98;
    }
L_089CAE98:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 4u);
      if (branch_taken) {
          goto L_089CAEA8;
      }
      goto L_089CAEA0;
    }
L_089CAEA0:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089CAEB8;
      }
      goto L_089CAEA8;
    }
L_089CAEA8:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_089CAEB8;
L_089CAEB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAEF8;
      }
      goto L_089CAEC4;
    }
L_089CAEC4:
    ctx.gpr[31] = (0x089CAECCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 362u, 0x089C57FCu>(ctx, &aot_mem) && ctx.pc == 0x089CAECCu) goto L_089CAECC;
    return;
L_089CAECC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (ctx.gpr[5] & 131u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CAEF8;
      }
      goto L_089CAEE4;
    }
L_089CAEE4:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7428));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x089CAEF8u);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 361u, 0x089C57E0u>(ctx, &aot_mem) && ctx.pc == 0x089CAEF8u) goto L_089CAEF8;
    return;
L_089CAEF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB000;
      }
      goto L_089CAF00;
    }
L_089CAF00:
    ctx.gpr[7] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089CAF24;
      }
      goto L_089CAF0C;
    }
L_089CAF0C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089CAF24;
      }
      goto L_089CAF14;
    }
L_089CAF14:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAF2C;
      }
      goto L_089CAF1C;
    }
L_089CAF1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAFEC;
      }
      goto L_089CAF24;
    }
L_089CAF24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB000;
      }
      goto L_089CAF2C;
    }
L_089CAF2C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAFA8;
      }
      goto L_089CAF34;
    }
L_089CAF34:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089CAF5C;
      }
      goto L_089CAF48;
    }
L_089CAF48:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CAF5C;
L_089CAF5C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CAF6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4900));
    goto L_089CACE4;
L_089CAF6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CAF84u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CAF84u) goto L_089CAF84;
    return;
L_089CAF84:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089CAFA0;
      }
      goto L_089CAF94;
    }
L_089CAF94:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(6115));
    ctx.gpr[31] = (0x089CAFA0u);
    ctx.gpr[5] = (0u | 4u);
    goto L_089CACE4;
L_089CAFA0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[18]);
    goto L_089CAFA8;
L_089CAFA8:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7388));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x089CAFBCu);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 361u, 0x089C57E0u>(ctx, &aot_mem) && ctx.pc == 0x089CAFBCu) goto L_089CAFBC;
    return;
L_089CAFBC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8060)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8060), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_089CAFEC;
      }
      goto L_089CAFDC;
    }
L_089CAFDC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6280)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6280), ctx.gpr[6]);
    goto L_089CAFEC;
L_089CAFEC:
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_089CB000;
L_089CB000:
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
L_089CB020:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-28252)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (2230u << 16u);
      if (branch_taken) {
          goto L_089CB094;
      }
      goto L_089CB068;
    }
L_089CB068:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28252), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (2u << 16u);
    ctx.gpr[18] = (2277u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-7388));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-6024));
    ctx.gpr[21] = (2229u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (2u << 16u);
      if (branch_taken) {
          goto L_089CB09C;
      }
      goto L_089CB08C;
    }
L_089CB08C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB09C;
      }
      goto L_089CB094;
    }
L_089CB094:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089CB324;
      }
      goto L_089CB09C;
    }
L_089CB09C:
    ctx.gpr[31] = (0x089CB0A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 561u, 0x089C6670u>(ctx, &aot_mem) && ctx.pc == 0x089CB0A4u) goto L_089CB0A4;
    return;
L_089CB0A4:
    ctx.gpr[31] = (0x089CB0ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 353u, 0x08A8A3E4u>(ctx, &aot_mem) && ctx.pc == 0x089CB0ACu) goto L_089CB0AC;
    return;
L_089CB0AC:
    ctx.gpr[31] = (0x089CB0B4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089C9934;
L_089CB0B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7364)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089CB2F4;
      }
      goto L_089CB0CC;
    }
L_089CB0CC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8808));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8780));
    ctx.gpr[22] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-26768));
    ctx.gpr[23] = (2230u << 16u);
    goto L_089CB0F0;
L_089CB0F0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x089CB0FCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 498u, 0x089CDDC8u>(ctx, &aot_mem) && ctx.pc == 0x089CB0FCu) goto L_089CB0FC;
    return;
L_089CB0FC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089CB114;
      }
      goto L_089CB10C;
    }
L_089CB10C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB2F4;
      }
      goto L_089CB114;
    }
L_089CB114:
    ctx.gpr[16] = (ctx.gpr[17] << 4u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x089CB134u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 362u, 0x089C57FCu>(ctx, &aot_mem) && ctx.pc == 0x089CB134u) goto L_089CB134;
    return;
L_089CB134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-8060)));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-8060), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6024), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (ctx.gpr[7] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_089CB17C;
      }
      goto L_089CB160;
    }
L_089CB160:
    ctx.gpr[5] = (ctx.gpr[7] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-6280)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-6280), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[16]);
    goto L_089CB17C;
L_089CB17C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089CB18Cu);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 364u, 0x089C5824u>(ctx, &aot_mem) && ctx.pc == 0x089CB18Cu) goto L_089CB18C;
    return;
L_089CB18C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB230;
      }
      goto L_089CB194;
    }
L_089CB194:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[31] = (0x089CB1A8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089CB1A8u) goto L_089CB1A8;
    return;
L_089CB1A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089CB1B4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x089CB1B4u) goto L_089CB1B4;
    return;
L_089CB1B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] << 11u);
    ctx.gpr[31] = (0x089CB1C4u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x089CB1C4u) goto L_089CB1C4;
    return;
L_089CB1C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 11u);
    ctx.gpr[31] = (0x089CB1D8u);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x089CB1D8u) goto L_089CB1D8;
    return;
L_089CB1D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089CB1F4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 338u, 0x08A8A2C0u>(ctx, &aot_mem) && ctx.pc == 0x089CB1F4u) goto L_089CB1F4;
    return;
L_089CB1F4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_089CB1F8;
L_089CB1F8:
    ctx.gpr[31] = (0x089CB200u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 354u, 0x08A8A3F0u>(ctx, &aot_mem) && ctx.pc == 0x089CB200u) goto L_089CB200;
    return;
L_089CB200:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CB210;
      }
      goto L_089CB208;
    }
L_089CB208:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CB23C;
      }
      goto L_089CB210;
    }
L_089CB210:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[31] = (0x089CB228u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 338u, 0x08A8A2C0u>(ctx, &aot_mem) && ctx.pc == 0x089CB228u) goto L_089CB228;
    return;
L_089CB228:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089CB1F8;
      }
      goto L_089CB230;
    }
L_089CB230:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089CB2D0;
      }
      goto L_089CB23C;
    }
L_089CB23C:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089CB250u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 542u, 0x089CE110u>(ctx, &aot_mem) && ctx.pc == 0x089CB250u) goto L_089CB250;
    return;
L_089CB250:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CB270;
      }
      goto L_089CB258;
    }
L_089CB258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089CB264u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089CB264u) goto L_089CB264;
    return;
L_089CB264:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089CB270u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x089CB270u) goto L_089CB270;
    return;
L_089CB270:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089CB2D0;
      }
      goto L_089CB27C;
    }
L_089CB27C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CB2A4;
      }
      goto L_089CB290;
    }
L_089CB290:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CB2A4;
L_089CB2A4:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_089CB2C8;
      }
      goto L_089CB2B8;
    }
L_089CB2B8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_089CB2C8;
      }
      goto L_089CB2C0;
    }
L_089CB2C0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CB2D0;
      }
      goto L_089CB2C8;
    }
L_089CB2C8:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089CB2D0;
L_089CB2D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7388));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7364)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089CB0F0;
      }
      goto L_089CB2F4;
    }
L_089CB2F4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089CB300;
L_089CB300:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CB300;
      }
      goto L_089CB314;
    }
L_089CB314:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-28252), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (0u | 1u);
    goto L_089CB324;
L_089CB324:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CB354:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[31]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8184)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6048));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (2277u << 16u);
        goto L_089CB448;
    }
    goto L_089CB3C0;
L_089CB3C0:
    ctx.gpr[5] = (2277u << 16u);
    goto L_089CB3C4;
L_089CB3C4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6048));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2277u << 16u);
      if (branch_taken) {
          goto L_089CB414;
      }
      goto L_089CB3E0;
    }
L_089CB3E0:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6048));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089CB46C;
      }
      goto L_089CB414;
    }
L_089CB414:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6048));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2277u << 16u);
      if (branch_taken) {
          goto L_089CB3C4;
      }
      goto L_089CB444;
    }
L_089CB444:
    ctx.gpr[4] = (2277u << 16u);
    goto L_089CB448;
L_089CB448:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6048));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    goto L_089CB46C;
L_089CB46C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6048));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[7]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_089CB704;
    }
    goto L_089CB4D0;
L_089CB4D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_089CB4D4;
L_089CB4D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CB504;
      }
      goto L_089CB4F8;
    }
L_089CB4F8:
    ctx.gpr[31] = (0x089CB500u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 146u, 0x08B04A74u>(ctx, &aot_mem) && ctx.pc == 0x089CB500u) goto L_089CB500;
    return;
L_089CB500:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089CB504;
L_089CB504:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x089CB51Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 805u, 0x08AA3CB8u>(ctx, &aot_mem) && ctx.pc == 0x089CB51Cu) goto L_089CB51C;
    return;
L_089CB51C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089CB694;
      }
      goto L_089CB528;
    }
L_089CB528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.gpr[31] = (0x089CB548u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6048));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 101u, 0x08B04684u>(ctx, &aot_mem) && ctx.pc == 0x089CB548u) goto L_089CB548;
    return;
L_089CB548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_089CB57C;
    }
    goto L_089CB558;
L_089CB558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_089CB570;
    }
    goto L_089CB564;
L_089CB564:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089CB570;
L_089CB570:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CB694;
      }
      goto L_089CB57C;
    }
L_089CB57C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089CB5B8;
      }
      goto L_089CB5B0;
    }
L_089CB5B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(200));
      if (branch_taken) {
          goto L_089CB5BC;
      }
      goto L_089CB5B8;
    }
L_089CB5B8:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(204));
    goto L_089CB5BC;
L_089CB5BC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089CB5F4;
      }
      goto L_089CB5D0;
    }
L_089CB5D0:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[31] = (0x089CB5DCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x089CB5DCu) goto L_089CB5DC;
    return;
L_089CB5DC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_089CB5F4;
      }
      goto L_089CB5E8;
    }
L_089CB5E8:
    ctx.gpr[31] = (0x089CB5F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x089CB5F0u) goto L_089CB5F0;
    return;
L_089CB5F0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_089CB5F4;
L_089CB5F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089CB608;
      }
      goto L_089CB600;
    }
L_089CB600:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089CB61C;
      }
      goto L_089CB608;
    }
L_089CB608:
    ctx.gpr[21] = (ctx.gpr[17] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089CB618u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x089CB618u) goto L_089CB618;
    return;
L_089CB618:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[21]);
    goto L_089CB61C;
L_089CB61C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
        goto L_089CB640;
    }
    goto L_089CB628;
L_089CB628:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CB628;
      }
      goto L_089CB63C;
    }
L_089CB63C:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089CB640;
L_089CB640:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089CB66C;
      }
      goto L_089CB648;
    }
L_089CB648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[21] = (ctx.gpr[4] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_089CB66C;
      }
      goto L_089CB654;
    }
L_089CB654:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CB664u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x089CB664u) goto L_089CB664;
    return;
L_089CB664:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_089CB66C;
      }
      goto L_089CB66C;
    }
L_089CB66C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089CB680;
      }
      goto L_089CB678;
    }
L_089CB678:
    ctx.gpr[31] = (0x089CB680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x089CB680u) goto L_089CB680;
    return;
L_089CB680:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_089CB694;
L_089CB694:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x089CB6A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 805u, 0x08AA3CB8u>(ctx, &aot_mem) && ctx.pc == 0x089CB6A4u) goto L_089CB6A4;
    return;
L_089CB6A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6048));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
        goto L_089CB4D4;
    }
    goto L_089CB700;
L_089CB700:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089CB704;
L_089CB704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2277u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6048));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 2u));
    ctx.gpr[31] = (0x089CB738u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 113u, 0x08B04758u>(ctx, &aot_mem) && ctx.pc == 0x089CB738u) goto L_089CB738;
    return;
L_089CB738:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB768;
      }
      goto L_089CB740;
    }
L_089CB740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[31] = (0x089CB75Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6048));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 88u, 0x08B04518u>(ctx, &aot_mem) && ctx.pc == 0x089CB75Cu) goto L_089CB75C;
    return;
L_089CB75C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CB740;
      }
      goto L_089CB768;
    }
L_089CB768:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2368));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089CB9CC;
      }
      goto L_089CB77C;
    }
L_089CB77C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (25455u << 16u);
    ctx.gpr[18] = (ctx.gpr[19] - ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27698));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089CB8CC;
      }
      goto L_089CB7A0;
    }
L_089CB7A0:
    ctx.gpr[5] = (24942u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26989));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (116u << 16u);
      if (branch_taken) {
          goto L_089CB8E0;
      }
      goto L_089CB7B0;
    }
L_089CB7B0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25976));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (109u << 16u);
      if (branch_taken) {
          goto L_089CB7DC;
      }
      goto L_089CB7BC;
    }
L_089CB7BC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25708));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CB8F4;
      }
      goto L_089CB7C8;
    }
L_089CB7C8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089CB7D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8748));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089CB7D4u) goto L_089CB7D4;
    return;
L_089CB7D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB8F8;
      }
      goto L_089CB7DC;
    }
L_089CB7DC:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 1200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB8C4;
      }
      goto L_089CB7EC;
    }
L_089CB7EC:
    ctx.gpr[4] = (2227u << 16u);
    goto L_089CB7F0;
L_089CB7F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27840)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2227u << 16u);
      if (branch_taken) {
          goto L_089CB814;
      }
      goto L_089CB80C;
    }
L_089CB80C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CB82C;
      }
      goto L_089CB814;
    }
L_089CB814:
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
    ctx.gpr[5] = (ctx.gpr[22] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27840)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089CB82C;
L_089CB82C:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089CB8B4;
      }
      goto L_089CB83C;
    }
L_089CB83C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27840)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2227u << 16u);
      if (branch_taken) {
          goto L_089CB860;
      }
      goto L_089CB858;
    }
L_089CB858:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CB878;
      }
      goto L_089CB860;
    }
L_089CB860:
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
    ctx.gpr[5] = (ctx.gpr[22] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27840)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089CB878;
L_089CB878:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CB8B4;
      }
      goto L_089CB88C;
    }
L_089CB88C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089CB89Cu);
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8728));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 582u, 0x0892F9ECu>(ctx, &aot_mem) && ctx.pc == 0x089CB89Cu) goto L_089CB89C;
    return;
L_089CB89C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089CB8ACu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089CB8ACu) goto L_089CB8AC;
    return;
L_089CB8AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089CB8C4;
      }
      goto L_089CB8B4;
    }
L_089CB8B4:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 1200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089CB7F0;
      }
      goto L_089CB8C4;
    }
L_089CB8C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB8F8;
      }
      goto L_089CB8CC;
    }
L_089CB8CC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089CB8D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8700));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089CB8D8u) goto L_089CB8D8;
    return;
L_089CB8D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB8F8;
      }
      goto L_089CB8E0;
    }
L_089CB8E0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089CB8ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8676));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 340u, 0x089C5694u>(ctx, &aot_mem) && ctx.pc == 0x089CB8ECu) goto L_089CB8EC;
    return;
L_089CB8EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB8F8;
      }
      goto L_089CB8F4;
    }
L_089CB8F4:
    ctx.gpr[20] = (0u | 0u);
    goto L_089CB8F8;
L_089CB8F8:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CB908;
      }
      goto L_089CB900;
    }
L_089CB900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB9BC;
      }
      goto L_089CB908;
    }
L_089CB908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089CB960;
      }
      goto L_089CB928;
    }
L_089CB928:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB948;
      }
      goto L_089CB934;
    }
L_089CB934:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    goto L_089CB948;
L_089CB948:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089CB928;
      }
      goto L_089CB960;
    }
L_089CB960:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089CB9BC;
      }
      goto L_089CB96C;
    }
L_089CB96C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27840)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2227u << 16u);
      if (branch_taken) {
          goto L_089CB990;
      }
      goto L_089CB988;
    }
L_089CB988:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_089CB9A8;
      }
      goto L_089CB990;
    }
L_089CB990:
    ctx.gpr[4] = (ctx.gpr[21] << 5u);
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27840)));
    ctx.gpr[21] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_089CB9A8;
L_089CB9A8:
    ctx.gpr[5] = (2204u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089CB9BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22432));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 64u, 0x08A0CEDCu>(ctx, &aot_mem) && ctx.pc == 0x089CB9BCu) goto L_089CB9BC;
    return;
L_089CB9BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089CB77C;
      }
      goto L_089CB9CC;
    }
L_089CB9CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089CB9EC;
      }
      goto L_089CB9D8;
    }
L_089CB9D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB9EC;
      }
      goto L_089CB9E4;
    }
L_089CB9E4:
    ctx.gpr[31] = (0x089CB9ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x089CB9ECu) goto L_089CB9EC;
    return;
L_089CB9EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CBA14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15308)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089CBB24;
      }
      goto L_089CBA5C;
    }
L_089CBA5C:
    ctx.gpr[21] = (ctx.gpr[22] << 5u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[18] = (2229u << 16u);
    goto L_089CBA74;
L_089CBA74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089CBA94;
    }
    goto L_089CBA8C;
L_089CBA8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBA98;
      }
      goto L_089CBA94;
    }
L_089CBA94:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_089CBA98;
L_089CBA98:
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBB10;
      }
      goto L_089CBAA4;
    }
L_089CBAA4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(90)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_089CBB10;
      }
      goto L_089CBAB0;
    }
L_089CBAB0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBAD4;
      }
      goto L_089CBAC4;
    }
L_089CBAC4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089CBAD4;
L_089CBAD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBB10;
      }
      goto L_089CBAE4;
    }
L_089CBAE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089CBAFCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CBAFCu) goto L_089CBAFC;
    return;
L_089CBAFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBB10;
      }
      goto L_089CBB08;
    }
L_089CBB08:
    ctx.gpr[31] = (0x089CBB10u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x089CBB10u) goto L_089CBB10;
    return;
L_089CBB10:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_089CBA74;
      }
      goto L_089CBB24;
    }
L_089CBB24:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15304)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089CBC04;
      }
      goto L_089CBB3C;
    }
L_089CBB3C:
    ctx.gpr[21] = (ctx.gpr[22] << 5u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[18] = (2229u << 16u);
    goto L_089CBB54;
L_089CBB54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089CBB74;
    }
    goto L_089CBB6C;
L_089CBB6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBB78;
      }
      goto L_089CBB74;
    }
L_089CBB74:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_089CBB78;
L_089CBB78:
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBBF0;
      }
      goto L_089CBB84;
    }
L_089CBB84:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(90)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_089CBBF0;
      }
      goto L_089CBB90;
    }
L_089CBB90:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBBB4;
      }
      goto L_089CBBA4;
    }
L_089CBBA4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089CBBB4;
L_089CBBB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBBF0;
      }
      goto L_089CBBC4;
    }
L_089CBBC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089CBBDCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CBBDCu) goto L_089CBBDC;
    return;
L_089CBBDC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBBF0;
      }
      goto L_089CBBE8;
    }
L_089CBBE8:
    ctx.gpr[31] = (0x089CBBF0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x089CBBF0u) goto L_089CBBF0;
    return;
L_089CBBF0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_089CBB54;
      }
      goto L_089CBC04;
    }
L_089CBC04:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089CBCF8;
      }
      goto L_089CBC1C;
    }
L_089CBC1C:
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[19] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[23] = (2229u << 16u);
    goto L_089CBC38;
L_089CBC38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_089CBC58;
    }
    goto L_089CBC50;
L_089CBC50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBC5C;
      }
      goto L_089CBC58;
    }
L_089CBC58:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_089CBC5C;
L_089CBC5C:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBCE4;
      }
      goto L_089CBC68;
    }
L_089CBC68:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(90)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089CBCE4;
      }
      goto L_089CBC78;
    }
L_089CBC78:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBC9C;
      }
      goto L_089CBC8C;
    }
L_089CBC8C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089CBC9C;
L_089CBC9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBCE4;
      }
      goto L_089CBCAC;
    }
L_089CBCAC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089CBCE4;
      }
      goto L_089CBCB8;
    }
L_089CBCB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089CBCD0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CBCD0u) goto L_089CBCD0;
    return;
L_089CBCD0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBCE4;
      }
      goto L_089CBCDC;
    }
L_089CBCDC:
    ctx.gpr[31] = (0x089CBCE4u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x089CBCE4u) goto L_089CBCE4;
    return;
L_089CBCE4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-544));
      if (branch_taken) {
          goto L_089CBC38;
      }
      goto L_089CBCF8;
    }
L_089CBCF8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15296)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089CBDD8;
      }
      goto L_089CBD10;
    }
L_089CBD10:
    ctx.gpr[18] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[21] = (2229u << 16u);
    goto L_089CBD28;
L_089CBD28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_089CBD48;
    }
    goto L_089CBD40;
L_089CBD40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBD4C;
      }
      goto L_089CBD48;
    }
L_089CBD48:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    goto L_089CBD4C;
L_089CBD4C:
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBDC4;
      }
      goto L_089CBD58;
    }
L_089CBD58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(90)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_089CBDC4;
      }
      goto L_089CBD64;
    }
L_089CBD64:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBD88;
      }
      goto L_089CBD78;
    }
L_089CBD78:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CBD88;
L_089CBD88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBDC4;
      }
      goto L_089CBD98;
    }
L_089CBD98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089CBDB0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CBDB0u) goto L_089CBDB0;
    return;
L_089CBDB0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBDC4;
      }
      goto L_089CBDBC;
    }
L_089CBDBC:
    ctx.gpr[31] = (0x089CBDC4u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x089CBDC4u) goto L_089CBDC4;
    return;
L_089CBDC4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_089CBD28;
      }
      goto L_089CBDD8;
    }
L_089CBDD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CBE08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15308)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089CBF34;
      }
      goto L_089CBE50;
    }
L_089CBE50:
    ctx.gpr[19] = (ctx.gpr[18] << 5u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[30] = (0u | 13u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[23] = (128u << 16u);
    ctx.gpr[22] = (256u << 16u);
    goto L_089CBE68;
L_089CBE68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_089CBE88;
    }
    goto L_089CBE80;
L_089CBE80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBE8C;
      }
      goto L_089CBE88;
    }
L_089CBE88:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_089CBE8C;
L_089CBE8C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBF20;
      }
      goto L_089CBE98;
    }
L_089CBE98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBF20;
      }
      goto L_089CBEA4;
    }
L_089CBEA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(91)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CBEBC;
      }
      goto L_089CBEB4;
    }
L_089CBEB4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBEC4;
      }
      goto L_089CBEBC;
    }
L_089CBEBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089CBEC4;
      }
      goto L_089CBEC4;
    }
L_089CBEC4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBF20;
      }
      goto L_089CBECC;
    }
L_089CBECC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
      if (branch_taken) {
          goto L_089CBEE4;
      }
      goto L_089CBEDC;
    }
L_089CBEDC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBF20;
      }
      goto L_089CBEE4;
    }
L_089CBEE4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
      if (branch_taken) {
          goto L_089CBEF8;
      }
      goto L_089CBEF0;
    }
L_089CBEF0:
    ctx.gpr[31] = (0x089CBEF8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089CACE4;
L_089CBEF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBF20;
      }
      goto L_089CBF08;
    }
L_089CBF08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CBF20u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CBF20u) goto L_089CBF20;
    return;
L_089CBF20:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_089CBE68;
      }
      goto L_089CBF34;
    }
L_089CBF34:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15304)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 3u, 0x089CC02Cu>(ctx, &aot_mem); return;
      }
      goto L_089CBF4C;
    }
L_089CBF4C:
    ctx.gpr[19] = (ctx.gpr[18] << 5u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[30] = (0u | 13u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[23] = (128u << 16u);
    ctx.gpr[22] = (256u << 16u);
    goto L_089CBF64;
L_089CBF64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_089CBF84;
    }
    goto L_089CBF7C;
L_089CBF7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBF88;
      }
      goto L_089CBF84;
    }
L_089CBF84:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_089CBF88;
L_089CBF88:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 2u, 0x089CC018u>(ctx, &aot_mem); return;
      }
      goto L_089CBF94;
    }
L_089CBF94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 2u, 0x089CC018u>(ctx, &aot_mem); return;
      }
      goto L_089CBFA0;
    }
L_089CBFA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(91)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CBFB8;
      }
      goto L_089CBFB0;
    }
L_089CBFB0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBFC0;
      }
      goto L_089CBFB8;
    }
L_089CBFB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089CBFC0;
      }
      goto L_089CBFC0;
    }
L_089CBFC0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 2u, 0x089CC018u>(ctx, &aot_mem); return;
      }
      goto L_089CBFC8;
    }
L_089CBFC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
      if (branch_taken) {
          goto L_089CBFE0;
      }
      goto L_089CBFD8;
    }
L_089CBFD8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 2u, 0x089CC018u>(ctx, &aot_mem); return;
      }
      goto L_089CBFE0;
    }
L_089CBFE0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
      if (branch_taken) {
          goto L_089CBFF0;
      }
      goto L_089CBFE8;
    }
L_089CBFE8:
    ctx.gpr[31] = (0x089CBFF0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089CACE4;
L_089CBFF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 2u, 0x089CC018u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 1u, 0x089CC000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0113(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0113_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_113(Runtime &runtime) {
    runtime.register_generated_unit(113u, 0x089C8000u, 16384u, &recomp_unit_0113, &recomp_unit_0113_entry);
    runtime.register_function(0x089C8004u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C800Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8010u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8018u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8028u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8038u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8040u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8070u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8080u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C80CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C80FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8108u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8128u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8144u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8154u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8164u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8174u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8180u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8190u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8198u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C81B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C81B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C81C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C81CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C81E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8234u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8240u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8248u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8268u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8270u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8278u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8280u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C829Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C82A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C82B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C82BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C82D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C82DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C831Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C832Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8338u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8344u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8348u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8370u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8384u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8390u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C839Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C83A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8444u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C845Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C846Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8474u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8480u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C84B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C84C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C84E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C84E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C84FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C850Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C852Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8534u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8540u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8548u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8570u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8580u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C859Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C85B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C85C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C85D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C85E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8608u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8610u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C861Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8624u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8640u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C866Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8674u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C867Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8718u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8720u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C872Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8744u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8754u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C876Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C877Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8784u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8790u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8798u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C87A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C87B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C87B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C87C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C87DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C87ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8800u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8814u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8844u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8864u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8878u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8890u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C889Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C88B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C88CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C88E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C88F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C892Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8930u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8948u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8954u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8960u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8974u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8980u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8990u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C89A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C89C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A04u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A34u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A48u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A54u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A60u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A74u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A98u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8AB0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8ABCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8AD4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8AE0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8AFCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8B20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8B28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8B48u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8B5Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8B80u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8B9Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8BB0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C04u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C0Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C30u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C9Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8CB8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8CD4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8CE4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D00u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D14u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D24u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D44u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D4Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D60u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D84u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D94u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8DA8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8DB8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8DE8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E38u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E40u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E58u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E60u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E80u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E98u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8EA0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8EB8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8ED8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8EE8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8EF4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8EFCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F04u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F14u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F1Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F24u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F34u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F3Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F54u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F5Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F74u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8FC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8FD4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8FF0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8FFCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9008u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9018u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9028u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9034u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9044u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C904Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9054u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C905Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9064u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9070u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9078u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9080u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9088u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9090u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9098u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C90A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C90B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C90B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C90C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C90C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C90D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C90D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C90E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C90FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9108u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9110u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9118u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9120u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9128u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9150u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9168u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9178u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9184u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9190u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C91A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C91A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C91B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C91C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C91C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C91CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C91F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9230u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9248u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C925Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C926Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9278u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9280u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C92A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C92ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C92B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C92C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C92D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C92E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C92F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9304u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C930Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9318u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9320u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C932Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9334u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C933Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9340u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9370u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C93A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C93C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C93D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C93E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C93F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C93F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9400u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9410u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9418u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C943Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9454u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9464u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9474u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9480u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9488u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9494u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C949Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C94A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C94B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C94B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C94BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C94ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C953Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9548u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9560u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C956Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C957Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9588u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9590u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9598u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C95A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C95A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C95B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C95BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C95C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C95DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C95E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C95E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9610u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9644u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9650u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9664u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9670u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C967Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9688u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9694u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C969Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C96A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C96B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C96C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C96C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C96D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C96E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C96ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C96F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9700u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9708u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9710u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C971Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9728u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9734u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9744u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C974Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9750u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9758u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9804u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C980Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9814u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9818u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9828u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9838u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9844u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C984Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C985Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C986Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9884u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C988Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9898u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9900u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9908u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C990Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9934u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9974u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9988u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9998u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C99A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C99ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C99B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C99C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C99CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C99DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C99E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C99ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C99FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A18u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A4Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A58u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A90u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A9Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9AB8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9AC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9AD4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9AE4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9AF4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B18u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B40u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B48u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B50u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B60u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B70u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B84u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B9Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9BA8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9BB0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9BB8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9BC0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9BC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9BD0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9BDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9BE4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9BF0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9BF8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C1Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C24u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C48u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C4Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C7Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C98u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9CB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9CBCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9CC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9CCCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9CD4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9CE8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9CF8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D18u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D34u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D3Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D50u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D74u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D80u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D98u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9DBCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9DDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9DF4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E04u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E1Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E34u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E3Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E50u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E84u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E90u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9EA0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9EA8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9EB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9EBCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9ECCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9EE8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F00u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F38u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F54u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F60u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F70u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F88u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FA0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FA8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FF8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA00Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA044u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA060u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA06Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA07Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA094u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA104u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA118u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA144u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA158u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA160u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA168u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA170u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA178u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA180u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA188u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA190u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA198u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA200u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA208u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA210u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA218u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA224u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA230u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA238u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA240u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA260u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA268u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA270u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA278u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA280u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA288u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA290u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA29Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA2A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA2B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA2BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA2C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA2CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA2ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA304u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA30Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA314u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA31Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA324u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA32Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA334u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA340u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA348u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA350u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA354u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA35Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA36Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA374u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA37Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA400u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA408u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA418u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA420u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA434u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA43Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA460u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA470u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA484u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA4A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA4ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA4B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA4C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA4CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA4ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA55Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA564u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA580u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA58Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA598u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA59Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA5ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA5B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA5D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA5F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA5FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA618u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA620u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA62Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA638u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA640u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA64Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA650u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA660u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA668u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA680u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA688u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA690u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA6A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA6B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA6C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA6CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA6E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA6ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA6F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA72Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA734u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA750u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA754u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA760u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA774u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA780u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA790u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA794u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA7C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA7DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA7E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA7F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA800u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA808u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA810u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA888u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA88Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA898u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA89Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA92Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA944u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA954u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA964u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA970u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA97Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA980u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA990u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA994u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA99Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA00u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA44u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA54u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA78u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA7Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA8Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA90u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA94u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA9Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAB0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAC0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAD4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAADCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAFCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB0Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB14u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB48u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB60u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB70u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB80u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB84u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB90u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB94u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABA8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABB0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABC0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABD4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABFCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC0Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC14u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC48u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC60u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC70u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC80u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC84u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC90u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC94u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CACA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CACA8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CACACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CACB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CACE4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD18u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD48u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD50u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD5Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD7Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD84u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD8Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD94u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD9Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADD0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADD8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADE0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADF4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE30u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE4Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE5Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE78u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE8Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE98u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAEA0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAEA8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAEB8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAEC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAECCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAEE4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAEF8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF00u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF0Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF14u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF1Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF24u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF34u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF48u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF5Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF84u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF94u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAFA0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAFA8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAFBCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAFDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAFECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB000u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB020u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB068u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB08Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB094u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB09Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB0A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB0ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB0B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB0CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB0F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB0FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB10Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB114u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB134u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB160u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB17Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB18Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB194u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB1A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB1B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB1C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB1D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB1F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB1F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB200u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB208u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB210u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB228u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB230u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB23Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB250u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB258u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB264u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB270u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB27Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB290u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB2A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB2B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB2C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB2C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB2D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB2F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB300u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB314u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB324u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB354u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB3C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB3C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB3E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB414u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB444u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB448u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB46Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB4D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB4D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB4F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB500u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB504u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB51Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB528u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB548u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB558u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB564u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB570u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB57Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB600u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB608u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB618u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB61Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB628u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB63Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB640u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB648u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB654u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB664u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB66Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB678u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB680u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB694u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB6A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB700u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB704u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB738u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB740u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB75Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB768u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB77Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB7A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB7B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB7BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB7C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB7D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB7DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB7ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB7F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB80Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB814u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB82Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB83Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB858u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB860u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB878u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB88Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB89Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB8ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB8B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB8C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB8CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB8D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB8E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB8ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB8F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB8F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB900u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB908u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB928u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB934u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB948u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB960u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB96Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB988u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB990u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB9A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB9BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB9CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB9D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB9E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB9ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA14u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA5Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA74u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA8Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA94u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA98u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBAA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBAB0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBAC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBAD4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBAE4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBAFCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB24u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB3Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB54u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB74u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB78u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB84u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB90u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBBA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBBB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBBC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBBDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBBE8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBBF0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC04u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC1Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC38u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC50u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC58u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC5Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC68u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC78u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC8Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC9Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBCACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBCB8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBCD0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBCDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBCE4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBCF8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD40u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD48u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD4Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD58u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD78u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD88u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD98u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBDB0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBDBCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBDC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBDD8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE50u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE68u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE80u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE88u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE8Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE98u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBEA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBEB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBEBCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBEC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBECCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBEDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBEE4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBEF0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBEF8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF34u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF4Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF7Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF84u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF88u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF94u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFA0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFB0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFB8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFC0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFD8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFE0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFE8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFF0u, &recomp_unit_0113, "recomp_unit_0113");
}
} // namespace psprecomp
