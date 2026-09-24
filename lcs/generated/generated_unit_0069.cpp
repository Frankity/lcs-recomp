#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0069[4094] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0,
    0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 11, 0, 12,
    0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 19, 0, 0, 20, 0, 21, 0, 22, 0, 23,
    0, 24, 0, 0, 25, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 33, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 41, 42, 0, 43, 0, 44, 0, 45,
    0, 46, 47, 0, 48, 0, 49, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 0, 55, 0, 56, 0, 0,
    0, 0, 0, 0, 0, 0, 57, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0,
    61, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0,
    0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 74, 0, 0, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0,
    0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96,
    0, 0, 0, 0, 0, 0, 97, 0, 98, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 104, 0,
    0, 105, 106, 0, 107, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 112, 0, 113, 0, 114, 0, 0, 115, 0, 116,
    0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 124, 0, 125, 0, 0,
    126, 0, 127, 0, 128, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    136, 0, 0, 137, 0, 138, 0, 0, 139, 0, 140, 0, 141, 0, 142, 0, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 0, 0, 148, 0, 149, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 0, 160, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168,
    0, 169, 0, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 176,
    0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 185, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 190, 0, 191,
    0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 209,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0,
    217, 218, 219, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0,
    0, 226, 0, 227, 0, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 231, 232, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 236, 0, 0,
    0, 237, 0, 0, 0, 0, 0, 238, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0,
    0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 249, 0, 0, 250, 0, 251, 0, 252, 0, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 256, 257,
    0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 266,
    0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 281, 0,
    0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 285, 0, 286, 287, 0, 288, 0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 292, 0,
    293, 0, 0, 294, 0, 295, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 298, 0, 0, 299, 0, 300, 0, 0, 301, 302, 0, 0, 0, 0, 0, 303,
    0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 310, 0,
    0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 316, 0, 317, 0, 0, 318, 0, 0,
    0, 319, 0, 0, 320, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0,
    0, 326, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 333,
    0, 334, 0, 335, 0, 336, 0, 337, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 0, 0, 341, 0, 342, 0, 0, 343, 0, 0, 0, 344, 0, 0,
    345, 0, 0, 346, 0, 347, 0, 0, 0, 348, 0, 349, 0, 0, 350, 0, 0, 351, 352, 0, 353, 0, 0, 354, 0, 0, 355, 0, 0, 356, 0, 0,
    0, 357, 0, 358, 0, 0, 0, 359, 0, 0, 0, 360, 0, 361, 362, 0, 0, 363, 0, 0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 0, 369, 0,
    370, 0, 371, 0, 372, 0, 0, 373, 0, 0, 0, 374, 0, 0, 375, 0, 0, 376, 0, 377, 0, 0, 378, 0, 0, 379, 0, 0, 380, 0, 381, 0,
    0, 0, 382, 0, 383, 0, 384, 0, 0, 385, 0, 0, 386, 0, 387, 0, 388, 0, 0, 0, 389, 0, 0, 390, 0, 391, 0, 0, 0, 392, 0, 0,
    393, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 0, 398, 0, 399, 0, 0, 0, 0, 400, 0, 401, 0, 0, 402, 0, 403, 0,
    404, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 407, 408, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413,
    0, 414, 0, 0, 0, 415, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419,
    0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 425, 0, 426, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0,
    0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 433, 0, 0, 0, 0, 434, 0, 0, 435, 436, 0, 437, 0, 438, 0, 0,
    0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 443, 444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0,
    0, 0, 449, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0,
    0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0,
    458, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0,
    0, 467, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    475, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 481, 0, 0, 482, 0,
    483, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0,
    489, 0, 490, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 494,
    0, 0, 495, 0, 0, 496, 0, 497, 0, 0, 498, 0, 0, 0, 499, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0, 0, 0, 504, 505, 0, 0, 0, 506, 0, 507, 0, 0, 508, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 516,
    0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 523, 0, 0, 524, 0,
    0, 525, 0, 0, 526, 0, 527, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 531, 532,
    0, 0, 0, 533, 534, 0, 0, 0, 535, 536, 0, 537, 0, 0, 0, 0, 538, 0, 539, 540, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0,
    545, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0,
    0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0,
    555, 0, 0, 0, 556, 0, 557, 0, 0, 0, 0, 0, 0, 558, 0, 0, 559, 0, 560, 0, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 563, 0,
    564, 0, 565, 0, 0, 566, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 569,
    0, 0, 570, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 572, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 576, 0, 0, 0, 0, 577, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 580, 0, 0,
    0, 581, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 584, 0, 0, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 0, 0, 587,
    0, 588, 0, 0, 589, 0, 590, 0, 0, 591, 0, 592, 0, 0, 593, 594, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 600, 0, 0, 601, 0, 0, 0, 0, 0, 602, 0, 603, 0, 0, 604, 0, 0, 0, 0, 0, 0, 605, 0, 606, 0, 0, 0, 607, 0, 0, 0,
    608, 0, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 613, 0, 614, 0, 0, 0,
    615, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 619, 0, 620, 0, 0, 0, 621, 0, 622, 0, 0, 0, 0, 0, 0, 623, 0, 0, 624, 0, 625, 0, 0, 0, 0, 0, 626,
    0, 627, 0, 628, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 630, 0, 0, 631, 0, 0, 632, 0, 633, 634, 635, 0, 0, 0,
    636, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 640, 0, 641, 0,
    642, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 644, 0, 0, 645, 0, 0, 646, 0, 647, 648, 649, 0, 0, 0, 650, 0, 0,
    0, 651, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 654, 0, 655, 0, 656, 0, 0,
    0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 658, 0, 0, 659, 0, 0, 660, 0, 661, 662, 663, 0, 0, 0, 664, 0, 0, 0, 665, 0,
    0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 668, 0, 669, 0, 670, 0, 0, 0, 0, 0,
    0, 0, 671, 0, 0, 0, 0, 0, 0, 672, 0, 0, 673, 0, 0, 674, 0, 675, 676, 677, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 680,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 682, 0, 683, 0, 0, 0, 0, 0, 0, 0, 684, 0, 685,
    0, 0, 0, 0, 0, 686, 0, 0, 0, 687, 0, 0, 0, 688, 0, 689, 690, 0, 0, 691, 0, 0, 0, 692, 0, 0, 693, 0, 0, 0, 0, 694,
    0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 702, 0, 0, 0, 0, 0, 703, 0, 704, 0, 0, 0, 705, 0, 706, 707, 0,
    0, 708, 0, 0, 0, 709, 0, 0, 710, 0, 711, 0, 0, 0, 712, 0, 0, 713, 0, 714, 0, 0, 0, 0, 0, 0, 715, 0, 0, 716, 0, 0,
    0, 0, 0, 0, 717, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 722, 0, 0, 0, 0, 723, 0, 0, 0, 0,
    724, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 727, 0, 0, 728, 0,
    0, 0, 0, 0, 729, 0, 0, 730, 0, 0, 731, 0, 0, 0, 0, 0, 732, 0, 0, 0, 733, 0, 0, 0, 0, 734, 0, 0, 0, 735, 0, 0,
    736, 0, 0, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0, 0, 739, 0, 0, 0, 740, 0, 0, 741, 0, 0, 0, 0, 742, 0, 0, 0, 0,
    743, 0, 0, 0, 0, 0, 0, 744, 0, 0, 745, 0, 746, 0, 0, 0, 747, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0,
    0, 0, 0, 0, 750, 751, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0,
    0, 0, 0, 0, 0, 755, 0, 756, 0, 0, 0, 0, 0, 757, 0, 758, 0, 0, 0, 0, 0, 0, 0, 759, 0, 760, 761, 0, 762, 0, 0, 0,
    763, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 766, 0, 0, 767,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 769, 0, 770, 0, 771, 0, 772, 0, 0, 0, 0, 773, 0, 774, 0, 775, 0, 0, 0, 776, 0,
    0, 0, 777, 0, 0, 0, 778, 0, 0, 779, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 782, 0, 0, 783, 0, 0,
    0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 786, 0, 0, 0, 787, 0, 0, 788, 0, 0,
    0, 0, 789, 0, 0, 0, 790, 791, 0, 792, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 794, 0, 0, 795, 796, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 798, 0, 799, 0, 800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 801, 0, 802, 0, 0, 0, 0, 803, 0, 0, 0, 804, 0, 0, 0, 0, 805, 0, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 807, 0, 0, 0, 0, 808, 0, 0, 0, 0, 0, 0, 809, 0, 810, 0, 0, 0, 0, 811, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 816, 0, 0,
    0, 817, 0, 0, 0, 0, 818, 0, 819, 0, 0, 0, 0, 820, 0, 821, 0, 0, 0, 0, 822, 0, 823, 0, 0, 0, 0, 824, 0, 825, 0, 0,
    0, 0, 826, 827, 0, 0, 0, 828, 0, 0, 0, 829, 0, 0, 0, 0, 830, 0, 831, 832, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 0,
    0, 834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 835, 0, 0, 836, 0, 0, 0, 0, 0, 0, 837, 0, 838, 839, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 840, 0, 0, 841, 0, 0, 0, 0, 842, 0, 0, 843, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 844, 0, 0, 0, 0,
    845, 0, 846, 0, 0, 0, 0, 0, 0, 847, 0, 0, 0, 848, 849, 0, 0, 0, 850, 0, 0, 851, 0, 0, 0, 852, 0, 0, 0, 0, 853, 0,
    854, 0, 0, 0, 0, 855, 0, 0, 856, 0, 0, 0, 0, 857, 0, 0, 858, 0, 0, 0, 0, 0, 0, 859, 0, 0, 0, 0, 0, 860, 0, 0,
    0, 0, 861, 0, 862, 0, 863, 0, 864, 0, 0, 0, 0, 865, 0, 866, 0, 0, 0, 0, 867, 0, 868, 0, 0, 0, 0, 869, 0, 870,
};
void recomp_unit_0069_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08918000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0069[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08918000;
    case 2u: goto L_0891803C;
    case 3u: goto L_08918044;
    case 4u: goto L_08918050;
    case 5u: goto L_08918074;
    case 6u: goto L_08918088;
    case 7u: goto L_089180B8;
    case 8u: goto L_089180C0;
    case 9u: goto L_089180D8;
    case 10u: goto L_089180EC;
    case 11u: goto L_089180F4;
    case 12u: goto L_089180FC;
    case 13u: goto L_0891810C;
    case 14u: goto L_08918120;
    case 15u: goto L_08918128;
    case 16u: goto L_0891813C;
    case 17u: goto L_08918144;
    case 18u: goto L_08918150;
    case 19u: goto L_08918158;
    case 20u: goto L_08918164;
    case 21u: goto L_0891816C;
    case 22u: goto L_08918174;
    case 23u: goto L_0891817C;
    case 24u: goto L_08918184;
    case 25u: goto L_08918190;
    case 26u: goto L_08918198;
    case 27u: goto L_089181A0;
    case 28u: goto L_089181C0;
    case 29u: goto L_089181E0;
    case 30u: goto L_08918200;
    case 31u: goto L_08918214;
    case 32u: goto L_08918224;
    case 33u: goto L_0891822C;
    case 34u: goto L_08918234;
    case 35u: goto L_08918244;
    case 36u: goto L_08918258;
    case 37u: goto L_08918288;
    case 38u: goto L_089182BC;
    case 39u: goto L_089182CC;
    case 40u: goto L_089182D4;
    case 41u: goto L_089182E0;
    case 42u: goto L_089182E4;
    case 43u: goto L_089182EC;
    case 44u: goto L_089182F4;
    case 45u: goto L_089182FC;
    case 46u: goto L_08918304;
    case 47u: goto L_08918308;
    case 48u: goto L_08918310;
    case 49u: goto L_08918318;
    case 50u: goto L_0891832C;
    case 51u: goto L_08918338;
    case 52u: goto L_08918344;
    case 53u: goto L_08918350;
    case 54u: goto L_0891835C;
    case 55u: goto L_0891836C;
    case 56u: goto L_08918374;
    case 57u: goto L_08918398;
    case 58u: goto L_0891839C;
    case 59u: goto L_089183DC;
    case 60u: goto L_089183EC;
    case 61u: goto L_08918400;
    case 62u: goto L_08918408;
    case 63u: goto L_08918418;
    case 64u: goto L_08918440;
    case 65u: goto L_08918454;
    case 66u: goto L_08918474;
    case 67u: goto L_08918488;
    case 68u: goto L_08918494;
    case 69u: goto L_089184A0;
    case 70u: goto L_089184AC;
    case 71u: goto L_089184B8;
    case 72u: goto L_089184DC;
    case 73u: goto L_089184E0;
    case 74u: goto L_08918504;
    case 75u: goto L_08918514;
    case 76u: goto L_0891851C;
    case 77u: goto L_08918524;
    case 78u: goto L_0891852C;
    case 79u: goto L_08918534;
    case 80u: goto L_08918548;
    case 81u: goto L_0891855C;
    case 82u: goto L_0891856C;
    case 83u: goto L_0891857C;
    case 84u: goto L_08918590;
    case 85u: goto L_089185AC;
    case 86u: goto L_089185D0;
    case 87u: goto L_089185DC;
    case 88u: goto L_089185E8;
    case 89u: goto L_0891860C;
    case 90u: goto L_08918614;
    case 91u: goto L_0891862C;
    case 92u: goto L_08918638;
    case 93u: goto L_08918640;
    case 94u: goto L_08918650;
    case 95u: goto L_08918660;
    case 96u: goto L_0891867C;
    case 97u: goto L_08918698;
    case 98u: goto L_089186A0;
    case 99u: goto L_089186A4;
    case 100u: goto L_089186AC;
    case 101u: goto L_089186D8;
    case 102u: goto L_089186E4;
    case 103u: goto L_089186F0;
    case 104u: goto L_089186F8;
    case 105u: goto L_08918704;
    case 106u: goto L_08918708;
    case 107u: goto L_08918710;
    case 108u: goto L_0891871C;
    case 109u: goto L_08918724;
    case 110u: goto L_0891873C;
    case 111u: goto L_08918750;
    case 112u: goto L_08918758;
    case 113u: goto L_08918760;
    case 114u: goto L_08918768;
    case 115u: goto L_08918774;
    case 116u: goto L_0891877C;
    case 117u: goto L_08918794;
    case 118u: goto L_089187A0;
    case 119u: goto L_089187A8;
    case 120u: goto L_089187B4;
    case 121u: goto L_089187C0;
    case 122u: goto L_089187CC;
    case 123u: goto L_089187D8;
    case 124u: goto L_089187EC;
    case 125u: goto L_089187F4;
    case 126u: goto L_08918800;
    case 127u: goto L_08918808;
    case 128u: goto L_08918810;
    case 129u: goto L_08918828;
    case 130u: goto L_08918830;
    case 131u: goto L_08918840;
    case 132u: goto L_08918848;
    case 133u: goto L_08918850;
    case 134u: goto L_08918858;
    case 135u: goto L_08918860;
    case 136u: goto L_08918880;
    case 137u: goto L_0891888C;
    case 138u: goto L_08918894;
    case 139u: goto L_089188A0;
    case 140u: goto L_089188A8;
    case 141u: goto L_089188B0;
    case 142u: goto L_089188B8;
    case 143u: goto L_089188C4;
    case 144u: goto L_089188CC;
    case 145u: goto L_089188D4;
    case 146u: goto L_089188DC;
    case 147u: goto L_089188E4;
    case 148u: goto L_089188F0;
    case 149u: goto L_089188F8;
    case 150u: goto L_08918900;
    case 151u: goto L_08918924;
    case 152u: goto L_0891892C;
    case 153u: goto L_08918934;
    case 154u: goto L_0891893C;
    case 155u: goto L_08918948;
    case 156u: goto L_08918950;
    case 157u: goto L_08918958;
    case 158u: goto L_08918960;
    case 159u: goto L_08918968;
    case 160u: goto L_08918974;
    case 161u: goto L_08918990;
    case 162u: goto L_089189CC;
    case 163u: goto L_089189D4;
    case 164u: goto L_089189DC;
    case 165u: goto L_089189E4;
    case 166u: goto L_089189EC;
    case 167u: goto L_089189F4;
    case 168u: goto L_089189FC;
    case 169u: goto L_08918A04;
    case 170u: goto L_08918A1C;
    case 171u: goto L_08918A24;
    case 172u: goto L_08918A2C;
    case 173u: goto L_08918A50;
    case 174u: goto L_08918A5C;
    case 175u: goto L_08918A68;
    case 176u: goto L_08918A7C;
    case 177u: goto L_08918A84;
    case 178u: goto L_08918A94;
    case 179u: goto L_08918AAC;
    case 180u: goto L_08918AB4;
    case 181u: goto L_08918ABC;
    case 182u: goto L_08918ACC;
    case 183u: goto L_08918B14;
    case 184u: goto L_08918B1C;
    case 185u: goto L_08918B28;
    case 186u: goto L_08918B3C;
    case 187u: goto L_08918B44;
    case 188u: goto L_08918B54;
    case 189u: goto L_08918B6C;
    case 190u: goto L_08918B74;
    case 191u: goto L_08918B7C;
    case 192u: goto L_08918B8C;
    case 193u: goto L_08918BD4;
    case 194u: goto L_08918BE4;
    case 195u: goto L_08918C00;
    case 196u: goto L_08918C10;
    case 197u: goto L_08918C28;
    case 198u: goto L_08918C34;
    case 199u: goto L_08918C44;
    case 200u: goto L_08918C58;
    case 201u: goto L_08918C80;
    case 202u: goto L_08918C90;
    case 203u: goto L_08918CA4;
    case 204u: goto L_08918CB8;
    case 205u: goto L_08918CC0;
    case 206u: goto L_08918CE0;
    case 207u: goto L_08918CE8;
    case 208u: goto L_08918CF0;
    case 209u: goto L_08918CFC;
    case 210u: goto L_08918D2C;
    case 211u: goto L_08918D44;
    case 212u: goto L_08918D4C;
    case 213u: goto L_08918D54;
    case 214u: goto L_08918D60;
    case 215u: goto L_08918D6C;
    case 216u: goto L_08918D78;
    case 217u: goto L_08918D80;
    case 218u: goto L_08918D84;
    case 219u: goto L_08918D88;
    case 220u: goto L_08918D98;
    case 221u: goto L_08918DAC;
    case 222u: goto L_08918DB4;
    case 223u: goto L_08918DC4;
    case 224u: goto L_08918DE4;
    case 225u: goto L_08918DEC;
    case 226u: goto L_08918E04;
    case 227u: goto L_08918E0C;
    case 228u: goto L_08918E1C;
    case 229u: goto L_08918E28;
    case 230u: goto L_08918E34;
    case 231u: goto L_08918E3C;
    case 232u: goto L_08918E40;
    case 233u: goto L_08918E48;
    case 234u: goto L_08918E58;
    case 235u: goto L_08918E6C;
    case 236u: goto L_08918E74;
    case 237u: goto L_08918E84;
    case 238u: goto L_08918E9C;
    case 239u: goto L_08918EA4;
    case 240u: goto L_08918EAC;
    case 241u: goto L_08918EF8;
    case 242u: goto L_08918F04;
    case 243u: goto L_08918F24;
    case 244u: goto L_08918F2C;
    case 245u: goto L_08918F58;
    case 246u: goto L_08918FEC;
    case 247u: goto L_08919010;
    case 248u: goto L_0891901C;
    case 249u: goto L_0891902C;
    case 250u: goto L_08919038;
    case 251u: goto L_08919040;
    case 252u: goto L_08919048;
    case 253u: goto L_08919058;
    case 254u: goto L_08919064;
    case 255u: goto L_08919070;
    case 256u: goto L_08919078;
    case 257u: goto L_0891907C;
    case 258u: goto L_0891908C;
    case 259u: goto L_08919098;
    case 260u: goto L_089190A8;
    case 261u: goto L_089190B0;
    case 262u: goto L_089190C4;
    case 263u: goto L_089190D0;
    case 264u: goto L_089190DC;
    case 265u: goto L_089190F0;
    case 266u: goto L_089190FC;
    case 267u: goto L_08919108;
    case 268u: goto L_0891911C;
    case 269u: goto L_08919128;
    case 270u: goto L_08919134;
    case 271u: goto L_08919148;
    case 272u: goto L_08919154;
    case 273u: goto L_08919164;
    case 274u: goto L_08919170;
    case 275u: goto L_0891918C;
    case 276u: goto L_089191B0;
    case 277u: goto L_089191BC;
    case 278u: goto L_089191CC;
    case 279u: goto L_089191D8;
    case 280u: goto L_089191E4;
    case 281u: goto L_089191F8;
    case 282u: goto L_08919204;
    case 283u: goto L_08919218;
    case 284u: goto L_0891922C;
    case 285u: goto L_08919238;
    case 286u: goto L_08919240;
    case 287u: goto L_08919244;
    case 288u: goto L_0891924C;
    case 289u: goto L_08919254;
    case 290u: goto L_08919260;
    case 291u: goto L_0891926C;
    case 292u: goto L_08919278;
    case 293u: goto L_08919280;
    case 294u: goto L_0891928C;
    case 295u: goto L_08919294;
    case 296u: goto L_089192A8;
    case 297u: goto L_089192B4;
    case 298u: goto L_089192C0;
    case 299u: goto L_089192CC;
    case 300u: goto L_089192D4;
    case 301u: goto L_089192E0;
    case 302u: goto L_089192E4;
    case 303u: goto L_089192FC;
    case 304u: goto L_08919318;
    case 305u: goto L_08919320;
    case 306u: goto L_08919330;
    case 307u: goto L_08919344;
    case 308u: goto L_08919358;
    case 309u: goto L_08919364;
    case 310u: goto L_08919378;
    case 311u: goto L_0891938C;
    case 312u: goto L_08919398;
    case 313u: goto L_089193AC;
    case 314u: goto L_089193C0;
    case 315u: goto L_089193CC;
    case 316u: goto L_089193E0;
    case 317u: goto L_089193E8;
    case 318u: goto L_089193F4;
    case 319u: goto L_08919404;
    case 320u: goto L_08919410;
    case 321u: goto L_0891941C;
    case 322u: goto L_0891942C;
    case 323u: goto L_0891943C;
    case 324u: goto L_08919448;
    case 325u: goto L_08919478;
    case 326u: goto L_08919484;
    case 327u: goto L_08919494;
    case 328u: goto L_089194A0;
    case 329u: goto L_089194B4;
    case 330u: goto L_089194C8;
    case 331u: goto L_089194DC;
    case 332u: goto L_089194F0;
    case 333u: goto L_089194FC;
    case 334u: goto L_08919504;
    case 335u: goto L_0891950C;
    case 336u: goto L_08919514;
    case 337u: goto L_0891951C;
    case 338u: goto L_08919528;
    case 339u: goto L_08919534;
    case 340u: goto L_08919540;
    case 341u: goto L_08919550;
    case 342u: goto L_08919558;
    case 343u: goto L_08919564;
    case 344u: goto L_08919574;
    case 345u: goto L_08919580;
    case 346u: goto L_0891958C;
    case 347u: goto L_08919594;
    case 348u: goto L_089195A4;
    case 349u: goto L_089195AC;
    case 350u: goto L_089195B8;
    case 351u: goto L_089195C4;
    case 352u: goto L_089195C8;
    case 353u: goto L_089195D0;
    case 354u: goto L_089195DC;
    case 355u: goto L_089195E8;
    case 356u: goto L_089195F4;
    case 357u: goto L_08919604;
    case 358u: goto L_0891960C;
    case 359u: goto L_0891961C;
    case 360u: goto L_0891962C;
    case 361u: goto L_08919634;
    case 362u: goto L_08919638;
    case 363u: goto L_08919644;
    case 364u: goto L_08919650;
    case 365u: goto L_08919658;
    case 366u: goto L_08919660;
    case 367u: goto L_08919668;
    case 368u: goto L_08919670;
    case 369u: goto L_08919678;
    case 370u: goto L_08919680;
    case 371u: goto L_08919688;
    case 372u: goto L_08919690;
    case 373u: goto L_0891969C;
    case 374u: goto L_089196AC;
    case 375u: goto L_089196B8;
    case 376u: goto L_089196C4;
    case 377u: goto L_089196CC;
    case 378u: goto L_089196D8;
    case 379u: goto L_089196E4;
    case 380u: goto L_089196F0;
    case 381u: goto L_089196F8;
    case 382u: goto L_08919708;
    case 383u: goto L_08919710;
    case 384u: goto L_08919718;
    case 385u: goto L_08919724;
    case 386u: goto L_08919730;
    case 387u: goto L_08919738;
    case 388u: goto L_08919740;
    case 389u: goto L_08919750;
    case 390u: goto L_0891975C;
    case 391u: goto L_08919764;
    case 392u: goto L_08919774;
    case 393u: goto L_08919780;
    case 394u: goto L_08919788;
    case 395u: goto L_08919798;
    case 396u: goto L_089197A4;
    case 397u: goto L_089197B0;
    case 398u: goto L_089197C0;
    case 399u: goto L_089197C8;
    case 400u: goto L_089197DC;
    case 401u: goto L_089197E4;
    case 402u: goto L_089197F0;
    case 403u: goto L_089197F8;
    case 404u: goto L_08919800;
    case 405u: goto L_08919814;
    case 406u: goto L_08919820;
    case 407u: goto L_0891982C;
    case 408u: goto L_08919830;
    case 409u: goto L_08919854;
    case 410u: goto L_08919880;
    case 411u: goto L_089198A8;
    case 412u: goto L_089198D0;
    case 413u: goto L_089198FC;
    case 414u: goto L_08919904;
    case 415u: goto L_08919914;
    case 416u: goto L_08919918;
    case 417u: goto L_08919934;
    case 418u: goto L_08919948;
    case 419u: goto L_0891997C;
    case 420u: goto L_0891999C;
    case 421u: goto L_089199CC;
    case 422u: goto L_089199D4;
    case 423u: goto L_08919A20;
    case 424u: goto L_08919A30;
    case 425u: goto L_08919A40;
    case 426u: goto L_08919A48;
    case 427u: goto L_08919A4C;
    case 428u: goto L_08919A5C;
    case 429u: goto L_08919A78;
    case 430u: goto L_08919A94;
    case 431u: goto L_08919AB0;
    case 432u: goto L_08919AB8;
    case 433u: goto L_08919AC0;
    case 434u: goto L_08919AD4;
    case 435u: goto L_08919AE0;
    case 436u: goto L_08919AE4;
    case 437u: goto L_08919AEC;
    case 438u: goto L_08919AF4;
    case 439u: goto L_08919B08;
    case 440u: goto L_08919B30;
    case 441u: goto L_08919B48;
    case 442u: goto L_08919B5C;
    case 443u: goto L_08919B84;
    case 444u: goto L_08919B88;
    case 445u: goto L_08919B94;
    case 446u: goto L_08919BC8;
    case 447u: goto L_08919BD4;
    case 448u: goto L_08919BF8;
    case 449u: goto L_08919C08;
    case 450u: goto L_08919C18;
    case 451u: goto L_08919C24;
    case 452u: goto L_08919C44;
    case 453u: goto L_08919C58;
    case 454u: goto L_08919C60;
    case 455u: goto L_08919C84;
    case 456u: goto L_08919CD8;
    case 457u: goto L_08919CEC;
    case 458u: goto L_08919D00;
    case 459u: goto L_08919D08;
    case 460u: goto L_08919D1C;
    case 461u: goto L_08919D34;
    case 462u: goto L_08919D48;
    case 463u: goto L_08919D60;
    case 464u: goto L_08919D98;
    case 465u: goto L_08919DEC;
    case 466u: goto L_08919DF8;
    case 467u: goto L_08919E04;
    case 468u: goto L_08919E10;
    case 469u: goto L_08919E24;
    case 470u: goto L_08919E30;
    case 471u: goto L_08919E44;
    case 472u: goto L_08919E5C;
    case 473u: goto L_08919EA4;
    case 474u: goto L_08919EB0;
    case 475u: goto L_08919F00;
    case 476u: goto L_08919F0C;
    case 477u: goto L_08919F1C;
    case 478u: goto L_08919F2C;
    case 479u: goto L_08919F3C;
    case 480u: goto L_08919F64;
    case 481u: goto L_08919F6C;
    case 482u: goto L_08919F78;
    case 483u: goto L_08919F80;
    case 484u: goto L_08919F8C;
    case 485u: goto L_08919F98;
    case 486u: goto L_08919FB8;
    case 487u: goto L_08919FEC;
    case 488u: goto L_08919FF4;
    case 489u: goto L_0891A000;
    case 490u: goto L_0891A008;
    case 491u: goto L_0891A014;
    case 492u: goto L_0891A03C;
    case 493u: goto L_0891A070;
    case 494u: goto L_0891A07C;
    case 495u: goto L_0891A088;
    case 496u: goto L_0891A094;
    case 497u: goto L_0891A09C;
    case 498u: goto L_0891A0A8;
    case 499u: goto L_0891A0B8;
    case 500u: goto L_0891A0C4;
    case 501u: goto L_0891A100;
    case 502u: goto L_0891A128;
    case 503u: goto L_0891A130;
    case 504u: goto L_0891A148;
    case 505u: goto L_0891A14C;
    case 506u: goto L_0891A15C;
    case 507u: goto L_0891A164;
    case 508u: goto L_0891A170;
    case 509u: goto L_0891A198;
    case 510u: goto L_0891A1AC;
    case 511u: goto L_0891A1C0;
    case 512u: goto L_0891A1D4;
    case 513u: goto L_0891A238;
    case 514u: goto L_0891A240;
    case 515u: goto L_0891A26C;
    case 516u: goto L_0891A27C;
    case 517u: goto L_0891A288;
    case 518u: goto L_0891A2C4;
    case 519u: goto L_0891A2DC;
    case 520u: goto L_0891A30C;
    case 521u: goto L_0891A34C;
    case 522u: goto L_0891A364;
    case 523u: goto L_0891A36C;
    case 524u: goto L_0891A378;
    case 525u: goto L_0891A384;
    case 526u: goto L_0891A390;
    case 527u: goto L_0891A398;
    case 528u: goto L_0891A3A4;
    case 529u: goto L_0891A3B4;
    case 530u: goto L_0891A3F0;
    case 531u: goto L_0891A3F8;
    case 532u: goto L_0891A3FC;
    case 533u: goto L_0891A40C;
    case 534u: goto L_0891A410;
    case 535u: goto L_0891A420;
    case 536u: goto L_0891A424;
    case 537u: goto L_0891A42C;
    case 538u: goto L_0891A440;
    case 539u: goto L_0891A448;
    case 540u: goto L_0891A44C;
    case 541u: goto L_0891A46C;
    case 542u: goto L_0891A4BC;
    case 543u: goto L_0891A568;
    case 544u: goto L_0891A574;
    case 545u: goto L_0891A580;
    case 546u: goto L_0891A58C;
    case 547u: goto L_0891A5B4;
    case 548u: goto L_0891A5C0;
    case 549u: goto L_0891A5F4;
    case 550u: goto L_0891A60C;
    case 551u: goto L_0891A638;
    case 552u: goto L_0891A654;
    case 553u: goto L_0891A660;
    case 554u: goto L_0891A674;
    case 555u: goto L_0891A680;
    case 556u: goto L_0891A690;
    case 557u: goto L_0891A698;
    case 558u: goto L_0891A6B4;
    case 559u: goto L_0891A6C0;
    case 560u: goto L_0891A6C8;
    case 561u: goto L_0891A6DC;
    case 562u: goto L_0891A6EC;
    case 563u: goto L_0891A6F8;
    case 564u: goto L_0891A700;
    case 565u: goto L_0891A708;
    case 566u: goto L_0891A714;
    case 567u: goto L_0891A72C;
    case 568u: goto L_0891A758;
    case 569u: goto L_0891A77C;
    case 570u: goto L_0891A788;
    case 571u: goto L_0891A798;
    case 572u: goto L_0891A7B4;
    case 573u: goto L_0891A7BC;
    case 574u: goto L_0891A7C8;
    case 575u: goto L_0891A7E0;
    case 576u: goto L_0891A808;
    case 577u: goto L_0891A81C;
    case 578u: goto L_0891A828;
    case 579u: goto L_0891A85C;
    case 580u: goto L_0891A874;
    case 581u: goto L_0891A884;
    case 582u: goto L_0891A88C;
    case 583u: goto L_0891A8B4;
    case 584u: goto L_0891A8C0;
    case 585u: goto L_0891A8D8;
    case 586u: goto L_0891A8E4;
    case 587u: goto L_0891A8FC;
    case 588u: goto L_0891A904;
    case 589u: goto L_0891A910;
    case 590u: goto L_0891A918;
    case 591u: goto L_0891A924;
    case 592u: goto L_0891A92C;
    case 593u: goto L_0891A938;
    case 594u: goto L_0891A93C;
    case 595u: goto L_0891A940;
    case 596u: goto L_0891A98C;
    case 597u: goto L_0891A99C;
    case 598u: goto L_0891A9BC;
    case 599u: goto L_0891A9C4;
    case 600u: goto L_0891AA04;
    case 601u: goto L_0891AA10;
    case 602u: goto L_0891AA28;
    case 603u: goto L_0891AA30;
    case 604u: goto L_0891AA3C;
    case 605u: goto L_0891AA58;
    case 606u: goto L_0891AA60;
    case 607u: goto L_0891AA70;
    case 608u: goto L_0891AA80;
    case 609u: goto L_0891AA98;
    case 610u: goto L_0891AAA8;
    case 611u: goto L_0891AAB8;
    case 612u: goto L_0891AAC8;
    case 613u: goto L_0891AAE8;
    case 614u: goto L_0891AAF0;
    case 615u: goto L_0891AB00;
    case 616u: goto L_0891AB1C;
    case 617u: goto L_0891AB54;
    case 618u: goto L_0891AB5C;
    case 619u: goto L_0891AB94;
    case 620u: goto L_0891AB9C;
    case 621u: goto L_0891ABAC;
    case 622u: goto L_0891ABB4;
    case 623u: goto L_0891ABD0;
    case 624u: goto L_0891ABDC;
    case 625u: goto L_0891ABE4;
    case 626u: goto L_0891ABFC;
    case 627u: goto L_0891AC04;
    case 628u: goto L_0891AC0C;
    case 629u: goto L_0891AC2C;
    case 630u: goto L_0891AC48;
    case 631u: goto L_0891AC54;
    case 632u: goto L_0891AC60;
    case 633u: goto L_0891AC68;
    case 634u: goto L_0891AC6C;
    case 635u: goto L_0891AC70;
    case 636u: goto L_0891AC80;
    case 637u: goto L_0891AC90;
    case 638u: goto L_0891ACA0;
    case 639u: goto L_0891ACE8;
    case 640u: goto L_0891ACF0;
    case 641u: goto L_0891ACF8;
    case 642u: goto L_0891AD00;
    case 643u: goto L_0891AD20;
    case 644u: goto L_0891AD3C;
    case 645u: goto L_0891AD48;
    case 646u: goto L_0891AD54;
    case 647u: goto L_0891AD5C;
    case 648u: goto L_0891AD60;
    case 649u: goto L_0891AD64;
    case 650u: goto L_0891AD74;
    case 651u: goto L_0891AD84;
    case 652u: goto L_0891AD94;
    case 653u: goto L_0891ADDC;
    case 654u: goto L_0891ADE4;
    case 655u: goto L_0891ADEC;
    case 656u: goto L_0891ADF4;
    case 657u: goto L_0891AE14;
    case 658u: goto L_0891AE30;
    case 659u: goto L_0891AE3C;
    case 660u: goto L_0891AE48;
    case 661u: goto L_0891AE50;
    case 662u: goto L_0891AE54;
    case 663u: goto L_0891AE58;
    case 664u: goto L_0891AE68;
    case 665u: goto L_0891AE78;
    case 666u: goto L_0891AE88;
    case 667u: goto L_0891AED0;
    case 668u: goto L_0891AED8;
    case 669u: goto L_0891AEE0;
    case 670u: goto L_0891AEE8;
    case 671u: goto L_0891AF08;
    case 672u: goto L_0891AF24;
    case 673u: goto L_0891AF30;
    case 674u: goto L_0891AF3C;
    case 675u: goto L_0891AF44;
    case 676u: goto L_0891AF48;
    case 677u: goto L_0891AF4C;
    case 678u: goto L_0891AF5C;
    case 679u: goto L_0891AF6C;
    case 680u: goto L_0891AF7C;
    case 681u: goto L_0891AFC4;
    case 682u: goto L_0891AFCC;
    case 683u: goto L_0891AFD4;
    case 684u: goto L_0891AFF4;
    case 685u: goto L_0891AFFC;
    case 686u: goto L_0891B014;
    case 687u: goto L_0891B024;
    case 688u: goto L_0891B034;
    case 689u: goto L_0891B03C;
    case 690u: goto L_0891B040;
    case 691u: goto L_0891B04C;
    case 692u: goto L_0891B05C;
    case 693u: goto L_0891B068;
    case 694u: goto L_0891B07C;
    case 695u: goto L_0891B088;
    case 696u: goto L_0891B0B0;
    case 697u: goto L_0891B1F4;
    case 698u: goto L_0891B220;
    case 699u: goto L_0891B228;
    case 700u: goto L_0891B24C;
    case 701u: goto L_0891B2B0;
    case 702u: goto L_0891B2BC;
    case 703u: goto L_0891B2D4;
    case 704u: goto L_0891B2DC;
    case 705u: goto L_0891B2EC;
    case 706u: goto L_0891B2F4;
    case 707u: goto L_0891B2F8;
    case 708u: goto L_0891B304;
    case 709u: goto L_0891B314;
    case 710u: goto L_0891B320;
    case 711u: goto L_0891B328;
    case 712u: goto L_0891B338;
    case 713u: goto L_0891B344;
    case 714u: goto L_0891B34C;
    case 715u: goto L_0891B368;
    case 716u: goto L_0891B374;
    case 717u: goto L_0891B390;
    case 718u: goto L_0891B398;
    case 719u: goto L_0891B3AC;
    case 720u: goto L_0891B3F0;
    case 721u: goto L_0891B44C;
    case 722u: goto L_0891B458;
    case 723u: goto L_0891B46C;
    case 724u: goto L_0891B480;
    case 725u: goto L_0891B4A4;
    case 726u: goto L_0891B4E0;
    case 727u: goto L_0891B4EC;
    case 728u: goto L_0891B4F8;
    case 729u: goto L_0891B510;
    case 730u: goto L_0891B51C;
    case 731u: goto L_0891B528;
    case 732u: goto L_0891B540;
    case 733u: goto L_0891B550;
    case 734u: goto L_0891B564;
    case 735u: goto L_0891B574;
    case 736u: goto L_0891B580;
    case 737u: goto L_0891B598;
    case 738u: goto L_0891B5A8;
    case 739u: goto L_0891B5BC;
    case 740u: goto L_0891B5CC;
    case 741u: goto L_0891B5D8;
    case 742u: goto L_0891B5EC;
    case 743u: goto L_0891B600;
    case 744u: goto L_0891B61C;
    case 745u: goto L_0891B628;
    case 746u: goto L_0891B630;
    case 747u: goto L_0891B640;
    case 748u: goto L_0891B654;
    case 749u: goto L_0891B678;
    case 750u: goto L_0891B690;
    case 751u: goto L_0891B694;
    case 752u: goto L_0891B6A8;
    case 753u: goto L_0891B6C0;
    case 754u: goto L_0891B6F8;
    case 755u: goto L_0891B714;
    case 756u: goto L_0891B71C;
    case 757u: goto L_0891B734;
    case 758u: goto L_0891B73C;
    case 759u: goto L_0891B75C;
    case 760u: goto L_0891B764;
    case 761u: goto L_0891B768;
    case 762u: goto L_0891B770;
    case 763u: goto L_0891B780;
    case 764u: goto L_0891B78C;
    case 765u: goto L_0891B864;
    case 766u: goto L_0891B870;
    case 767u: goto L_0891B87C;
    case 768u: goto L_0891B8A4;
    case 769u: goto L_0891B8AC;
    case 770u: goto L_0891B8B4;
    case 771u: goto L_0891B8BC;
    case 772u: goto L_0891B8C4;
    case 773u: goto L_0891B8D8;
    case 774u: goto L_0891B8E0;
    case 775u: goto L_0891B8E8;
    case 776u: goto L_0891B8F8;
    case 777u: goto L_0891B908;
    case 778u: goto L_0891B918;
    case 779u: goto L_0891B924;
    case 780u: goto L_0891B930;
    case 781u: goto L_0891B950;
    case 782u: goto L_0891B968;
    case 783u: goto L_0891B974;
    case 784u: goto L_0891B988;
    case 785u: goto L_0891B9C8;
    case 786u: goto L_0891B9D8;
    case 787u: goto L_0891B9E8;
    case 788u: goto L_0891B9F4;
    case 789u: goto L_0891BA08;
    case 790u: goto L_0891BA18;
    case 791u: goto L_0891BA1C;
    case 792u: goto L_0891BA24;
    case 793u: goto L_0891BA3C;
    case 794u: goto L_0891BA60;
    case 795u: goto L_0891BA6C;
    case 796u: goto L_0891BA70;
    case 797u: goto L_0891BAA8;
    case 798u: goto L_0891BAB8;
    case 799u: goto L_0891BAC0;
    case 800u: goto L_0891BAC8;
    case 801u: goto L_0891BB08;
    case 802u: goto L_0891BB10;
    case 803u: goto L_0891BB24;
    case 804u: goto L_0891BB34;
    case 805u: goto L_0891BB48;
    case 806u: goto L_0891BB5C;
    case 807u: goto L_0891BB88;
    case 808u: goto L_0891BB9C;
    case 809u: goto L_0891BBB8;
    case 810u: goto L_0891BBC0;
    case 811u: goto L_0891BBD4;
    case 812u: goto L_0891BBE8;
    case 813u: goto L_0891BC14;
    case 814u: goto L_0891BC30;
    case 815u: goto L_0891BC60;
    case 816u: goto L_0891BC74;
    case 817u: goto L_0891BC84;
    case 818u: goto L_0891BC98;
    case 819u: goto L_0891BCA0;
    case 820u: goto L_0891BCB4;
    case 821u: goto L_0891BCBC;
    case 822u: goto L_0891BCD0;
    case 823u: goto L_0891BCD8;
    case 824u: goto L_0891BCEC;
    case 825u: goto L_0891BCF4;
    case 826u: goto L_0891BD08;
    case 827u: goto L_0891BD0C;
    case 828u: goto L_0891BD1C;
    case 829u: goto L_0891BD2C;
    case 830u: goto L_0891BD40;
    case 831u: goto L_0891BD48;
    case 832u: goto L_0891BD4C;
    case 833u: goto L_0891BD60;
    case 834u: goto L_0891BD84;
    case 835u: goto L_0891BDB8;
    case 836u: goto L_0891BDC4;
    case 837u: goto L_0891BDE0;
    case 838u: goto L_0891BDE8;
    case 839u: goto L_0891BDEC;
    case 840u: goto L_0891BE14;
    case 841u: goto L_0891BE20;
    case 842u: goto L_0891BE34;
    case 843u: goto L_0891BE40;
    case 844u: goto L_0891BE6C;
    case 845u: goto L_0891BE80;
    case 846u: goto L_0891BE88;
    case 847u: goto L_0891BEA4;
    case 848u: goto L_0891BEB4;
    case 849u: goto L_0891BEB8;
    case 850u: goto L_0891BEC8;
    case 851u: goto L_0891BED4;
    case 852u: goto L_0891BEE4;
    case 853u: goto L_0891BEF8;
    case 854u: goto L_0891BF00;
    case 855u: goto L_0891BF14;
    case 856u: goto L_0891BF20;
    case 857u: goto L_0891BF34;
    case 858u: goto L_0891BF40;
    case 859u: goto L_0891BF5C;
    case 860u: goto L_0891BF74;
    case 861u: goto L_0891BF88;
    case 862u: goto L_0891BF90;
    case 863u: goto L_0891BF98;
    case 864u: goto L_0891BFA0;
    case 865u: goto L_0891BFB4;
    case 866u: goto L_0891BFBC;
    case 867u: goto L_0891BFD0;
    case 868u: goto L_0891BFD8;
    case 869u: goto L_0891BFEC;
    case 870u: goto L_0891BFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08918000:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7016), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7015), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7044), ctx.gpr[30]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7036), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 37 ? 1u : 0u);
    ctx.gpr[6] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7040), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08918234;
      }
      goto L_0891803C;
    }
L_0891803C:
    ctx.gpr[31] = (0x08918044u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08918044u) goto L_08918044;
    return;
L_08918044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08918050u);
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08918050u) goto L_08918050;
    return;
L_08918050:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[31] = (0x08918074u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-7032), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08918074u) goto L_08918074;
    return;
L_08918074:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x08918088u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7028), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08918088u) goto L_08918088;
    return;
L_08918088:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7024), ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7032)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089180F4;
      }
      goto L_089180B8;
    }
L_089180B8:
    ctx.gpr[31] = (0x089180C0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x089180C0u) goto L_089180C0;
    return;
L_089180C0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089180EC;
      }
      goto L_089180D8;
    }
L_089180D8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089180EC;
L_089180EC:
    ctx.gpr[31] = (0x089180F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 242u, 0x08A7D590u>(ctx, &aot_mem) && ctx.pc == 0x089180F4u) goto L_089180F4;
    return;
L_089180F4:
    ctx.gpr[31] = (0x089180FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089180FCu) goto L_089180FC;
    return;
L_089180FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3228)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    ctx.gpr[31] = (0x0891810Cu);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3228), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0891810Cu) goto L_0891810C;
    return;
L_0891810C:
    ctx.gpr[6] = (50298u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7032)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08918120u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 460u, 0x088D6300u>(ctx, &aot_mem) && ctx.pc == 0x08918120u) goto L_08918120;
    return;
L_08918120:
    ctx.gpr[31] = (0x08918128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08918128u) goto L_08918128;
    return;
L_08918128:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7072)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 30000u);
    ctx.gpr[31] = (0x0891813Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x0891813Cu) goto L_0891813C;
    return;
L_0891813C:
    ctx.gpr[31] = (0x08918144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08918144u) goto L_08918144;
    return;
L_08918144:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7072)));
    ctx.gpr[31] = (0x08918150u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 609u, 0x0899F378u>(ctx, &aot_mem) && ctx.pc == 0x08918150u) goto L_08918150;
    return;
L_08918150:
    ctx.gpr[31] = (0x08918158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08918158u) goto L_08918158;
    return;
L_08918158:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7072)));
    ctx.gpr[31] = (0x08918164u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 19u, 0x08944130u>(ctx, &aot_mem) && ctx.pc == 0x08918164u) goto L_08918164;
    return;
L_08918164:
    ctx.gpr[31] = (0x0891816Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891816Cu) goto L_0891816C;
    return;
L_0891816C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918234;
      }
      goto L_08918174;
    }
L_08918174:
    ctx.gpr[31] = (0x0891817Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0891817Cu) goto L_0891817C;
    return;
L_0891817C:
    ctx.gpr[31] = (0x08918184u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08918184u) goto L_08918184;
    return;
L_08918184:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[31] = (0x08918190u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 596u, 0x0899F290u>(ctx, &aot_mem) && ctx.pc == 0x08918190u) goto L_08918190;
    return;
L_08918190:
    ctx.gpr[31] = (0x08918198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08918198u) goto L_08918198;
    return;
L_08918198:
    ctx.gpr[31] = (0x089181A0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089181A0u) goto L_089181A0;
    return;
L_089181A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x089181C0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089181C0u) goto L_089181C0;
    return;
L_089181C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x089181E0u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089181E0u) goto L_089181E0;
    return;
L_089181E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08918200u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08918200u) goto L_08918200;
    return;
L_08918200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08918214;
    }
    goto L_08918214;
L_08918214:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08918224u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 679u, 0x0899F80Cu>(ctx, &aot_mem) && ctx.pc == 0x08918224u) goto L_08918224;
    return;
L_08918224:
    ctx.gpr[31] = (0x0891822Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0891822Cu) goto L_0891822C;
    return;
L_0891822C:
    ctx.gpr[31] = (0x08918234u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 207u, 0x08944E30u>(ctx, &aot_mem) && ctx.pc == 0x08918234u) goto L_08918234;
    return;
L_08918234:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7016)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918258;
      }
      goto L_08918244;
    }
L_08918244:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 94u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08918258u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08918258u) goto L_08918258;
    return;
L_08918258:
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
L_08918288:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(-7076)));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6360));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08918398;
      }
      goto L_089182BC;
    }
L_089182BC:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7072)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[4] = (0u | 42u);
      if (branch_taken) {
          goto L_08918318;
      }
      goto L_089182CC;
    }
L_089182CC:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[6] = (0u | 39u);
      if (branch_taken) {
          goto L_089182E4;
      }
      goto L_089182D4;
    }
L_089182D4:
    ctx.gpr[4] = (0u | 23u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08918318;
      }
      goto L_089182E0;
    }
L_089182E0:
    ctx.gpr[6] = (0u | 39u);
    goto L_089182E4;
L_089182E4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 40u);
      if (branch_taken) {
          goto L_089182F4;
      }
      goto L_089182EC;
    }
L_089182EC:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08918318;
      }
      goto L_089182F4;
    }
L_089182F4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 31u);
      if (branch_taken) {
          goto L_08918308;
      }
      goto L_089182FC;
    }
L_089182FC:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08918318;
      }
      goto L_08918304;
    }
L_08918304:
    ctx.gpr[4] = (0u | 31u);
    goto L_08918308;
L_08918308:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 15u);
      if (branch_taken) {
          goto L_08918398;
      }
      goto L_08918310;
    }
L_08918310:
    if (ctx.gpr[7] != ctx.gpr[4]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
        goto L_0891839C;
    }
    goto L_08918318;
L_08918318:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7068)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891835C;
      }
      goto L_0891832C;
    }
L_0891832C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0891835C;
      }
      goto L_08918338;
    }
L_08918338:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7064)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0891835C;
      }
      goto L_08918344;
    }
L_08918344:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7060)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0891835C;
      }
      goto L_08918350;
    }
L_08918350:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7056)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
        goto L_0891839C;
    }
    goto L_0891835C;
L_0891835C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7015)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918374;
      }
      goto L_0891836C;
    }
L_0891836C:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
        goto L_0891839C;
    }
    goto L_08918374;
L_08918374:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7052)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7052), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[5] = (0u | 98u);
    ctx.gpr[31] = (0x08918398u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08918398u) goto L_08918398;
    return;
L_08918398:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    goto L_0891839C;
L_0891839C:
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10960));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7872)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7872), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
        goto L_089183EC;
    }
    goto L_089183DC;
L_089183DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08918400;
      }
      goto L_089183EC;
    }
L_089183EC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08918400;
L_08918400:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918418;
      }
      goto L_08918408;
    }
L_08918408:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7828), ctx.gpr[5]);
    goto L_08918418;
L_08918418:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7560)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7560), ctx.gpr[5]);
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
L_08918440:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08918454:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(-7076)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089184DC;
      }
      goto L_08918474;
    }
L_08918474:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7068)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089184B8;
      }
      goto L_08918488;
    }
L_08918488:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_089184B8;
      }
      goto L_08918494;
    }
L_08918494:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7064)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_089184B8;
      }
      goto L_089184A0;
    }
L_089184A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7060)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_089184B8;
      }
      goto L_089184AC;
    }
L_089184AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7056)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
        goto L_089184E0;
    }
    goto L_089184B8;
L_089184B8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7052)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7052), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[5] = (0u | 99u);
    ctx.gpr[31] = (0x089184DCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x089184DCu) goto L_089184DC;
    return;
L_089184DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    goto L_089184E0;
L_089184E0:
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10960));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08918504u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x08918504u) goto L_08918504;
    return;
L_08918504:
    ctx.gpr[16] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891856C;
      }
      goto L_08918514;
    }
L_08918514:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08918548;
      }
      goto L_0891851C;
    }
L_0891851C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08918548;
      }
      goto L_08918524;
    }
L_08918524:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891855C;
      }
      goto L_0891852C;
    }
L_0891852C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0891855C;
      }
      goto L_08918534;
    }
L_08918534:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7860)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7860), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0891856C;
      }
      goto L_08918548;
    }
L_08918548:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0891856C;
      }
      goto L_0891855C;
    }
L_0891855C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7852)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7852), ctx.gpr[5]);
    goto L_0891856C;
L_0891856C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891857C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-7076)));
    ctx.gpr[2] = (ctx.gpr[4] ^ 1u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08918590:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-7076)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_089185D0;
      }
      goto L_089185AC;
    }
L_089185AC:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-7076), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(25812), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x089185D0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7036), ctx.gpr[4]);
    goto L_089186AC;
L_089185D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089185DC:
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10960));
    goto L_089185E8;
L_089185E8:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 240 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089185E8;
      }
      goto L_0891860C;
    }
L_0891860C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08918614:
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10960));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891862C:
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08918698;
      }
      goto L_08918638;
    }
L_08918638:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08918698;
      }
      goto L_08918640;
    }
L_08918640:
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(500));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
        goto L_0891867C;
    }
    goto L_08918650;
L_08918650:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-500));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_089186A0;
      }
      goto L_08918660;
    }
L_08918660:
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (0u | 500u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[2] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_089186A4;
      }
      goto L_0891867C;
    }
L_0891867C:
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (0u | 500u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[2] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_089186A4;
      }
      goto L_08918698;
    }
L_08918698:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089186A4;
      }
      goto L_089186A0;
    }
L_089186A0:
    ctx.gpr[2] = (0u | 255u);
    goto L_089186A4;
L_089186A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089186AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7072)));
    ctx.gpr[4] = (0u | 42u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089186E4;
      }
      goto L_089186D8;
    }
L_089186D8:
    ctx.gpr[17] = (0u | 23u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08918708;
      }
      goto L_089186E4;
    }
L_089186E4:
    ctx.gpr[4] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 40u);
      if (branch_taken) {
          goto L_089186F8;
      }
      goto L_089186F0;
    }
L_089186F0:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08918704;
      }
      goto L_089186F8;
    }
L_089186F8:
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08918708;
      }
      goto L_08918704;
    }
L_08918704:
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[17]) < 37 ? 1u : 0u);
    goto L_08918708;
L_08918708:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08918758;
      }
      goto L_08918710;
    }
L_08918710:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7032)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918758;
      }
      goto L_0891871C;
    }
L_0891871C:
    ctx.gpr[31] = (0x08918724u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08918724u) goto L_08918724;
    return;
L_08918724:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08918750;
      }
      goto L_0891873C;
    }
L_0891873C:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08918750;
L_08918750:
    ctx.gpr[31] = (0x08918758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 244u, 0x08A7D5B4u>(ctx, &aot_mem) && ctx.pc == 0x08918758u) goto L_08918758;
    return;
L_08918758:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089187EC;
      }
      goto L_08918760;
    }
L_08918760:
    ctx.gpr[31] = (0x08918768u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08918768u) goto L_08918768;
    return;
L_08918768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08918774u);
    ctx.gpr[18] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08918774u) goto L_08918774;
    return;
L_08918774:
    ctx.gpr[31] = (0x0891877Cu);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0891877Cu) goto L_0891877C;
    return;
L_0891877C:
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[18] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08918794u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08918794u) goto L_08918794;
    return;
L_08918794:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x089187A0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 576u, 0x0899F198u>(ctx, &aot_mem) && ctx.pc == 0x089187A0u) goto L_089187A0;
    return;
L_089187A0:
    ctx.gpr[31] = (0x089187A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089187A8u) goto L_089187A8;
    return;
L_089187A8:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[31] = (0x089187B4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1428), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089187B4u) goto L_089187B4;
    return;
L_089187B4:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[31] = (0x089187C0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1440), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089187C0u) goto L_089187C0;
    return;
L_089187C0:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[31] = (0x089187CCu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1436), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089187CCu) goto L_089187CC;
    return;
L_089187CC:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[31] = (0x089187D8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1432), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089187D8u) goto L_089187D8;
    return;
L_089187D8:
    ctx.gpr[6] = (50298u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089187ECu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 460u, 0x088D6300u>(ctx, &aot_mem) && ctx.pc == 0x089187ECu) goto L_089187EC;
    return;
L_089187EC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918840;
      }
      goto L_089187F4;
    }
L_089187F4:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[31] = (0x08918800u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7032)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08918800u) goto L_08918800;
    return;
L_08918800:
    ctx.gpr[31] = (0x08918808u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08918808u) goto L_08918808;
    return;
L_08918808:
    ctx.gpr[31] = (0x08918810u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08918810u) goto L_08918810;
    return;
L_08918810:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7032)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7028)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08918828u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08918828u) goto L_08918828;
    return;
L_08918828:
    ctx.gpr[31] = (0x08918830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08918830u) goto L_08918830;
    return;
L_08918830:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7024)));
    ctx.gpr[31] = (0x08918840u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 609u, 0x0899F378u>(ctx, &aot_mem) && ctx.pc == 0x08918840u) goto L_08918840;
    return;
L_08918840:
    ctx.gpr[31] = (0x08918848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08918848u) goto L_08918848;
    return;
L_08918848:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891893C;
      }
      goto L_08918850;
    }
L_08918850:
    ctx.gpr[31] = (0x08918858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08918858u) goto L_08918858;
    return;
L_08918858:
    ctx.gpr[31] = (0x08918860u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08918860u) goto L_08918860;
    return;
L_08918860:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08918880u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08918880u) goto L_08918880;
    return;
L_08918880:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x0891888Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 576u, 0x0899F198u>(ctx, &aot_mem) && ctx.pc == 0x0891888Cu) goto L_0891888C;
    return;
L_0891888C:
    ctx.gpr[31] = (0x08918894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08918894u) goto L_08918894;
    return;
L_08918894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1568)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089188CC;
      }
      goto L_089188A0;
    }
L_089188A0:
    ctx.gpr[31] = (0x089188A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089188A8u) goto L_089188A8;
    return;
L_089188A8:
    ctx.gpr[31] = (0x089188B0u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089188B0u) goto L_089188B0;
    return;
L_089188B0:
    ctx.gpr[31] = (0x089188B8u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089188B8u) goto L_089188B8;
    return;
L_089188B8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[31] = (0x089188C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 596u, 0x0899F290u>(ctx, &aot_mem) && ctx.pc == 0x089188C4u) goto L_089188C4;
    return;
L_089188C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089188F0;
      }
      goto L_089188CC;
    }
L_089188CC:
    ctx.gpr[31] = (0x089188D4u);
    ctx.gpr[16] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089188D4u) goto L_089188D4;
    return;
L_089188D4:
    ctx.gpr[31] = (0x089188DCu);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089188DCu) goto L_089188DC;
    return;
L_089188DC:
    ctx.gpr[31] = (0x089188E4u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089188E4u) goto L_089188E4;
    return;
L_089188E4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[31] = (0x089188F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 596u, 0x0899F290u>(ctx, &aot_mem) && ctx.pc == 0x089188F0u) goto L_089188F0;
    return;
L_089188F0:
    ctx.gpr[31] = (0x089188F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089188F8u) goto L_089188F8;
    return;
L_089188F8:
    ctx.gpr[31] = (0x08918900u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08918900u) goto L_08918900;
    return;
L_08918900:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08918924u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 19u, 0x08944130u>(ctx, &aot_mem) && ctx.pc == 0x08918924u) goto L_08918924;
    return;
L_08918924:
    ctx.gpr[31] = (0x0891892Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0891892Cu) goto L_0891892C;
    return;
L_0891892C:
    ctx.gpr[31] = (0x08918934u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 754u, 0x08887BD4u>(ctx, &aot_mem) && ctx.pc == 0x08918934u) goto L_08918934;
    return;
L_08918934:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918974;
      }
      goto L_0891893C;
    }
L_0891893C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08918948u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 331u, 0x088EE3ACu>(ctx, &aot_mem) && ctx.pc == 0x08918948u) goto L_08918948;
    return;
L_08918948:
    ctx.gpr[31] = (0x08918950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 160u, 0x08868FC4u>(ctx, &aot_mem) && ctx.pc == 0x08918950u) goto L_08918950;
    return;
L_08918950:
    ctx.gpr[31] = (0x08918958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08918958u) goto L_08918958;
    return;
L_08918958:
    ctx.gpr[31] = (0x08918960u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 321u, 0x088D5678u>(ctx, &aot_mem) && ctx.pc == 0x08918960u) goto L_08918960;
    return;
L_08918960:
    ctx.gpr[31] = (0x08918968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08918968u) goto L_08918968;
    return;
L_08918968:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1724), 0u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(664), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08918974;
L_08918974:
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
L_08918990:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-7076)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089189DC;
      }
      goto L_089189CC;
    }
L_089189CC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08918F2C;
      }
      goto L_089189D4;
    }
L_089189D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089189F4;
      }
      goto L_089189DC;
    }
L_089189DC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08918DB4;
      }
      goto L_089189E4;
    }
L_089189E4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08918F2C;
      }
      goto L_089189EC;
    }
L_089189EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918F2C;
      }
      goto L_089189F4;
    }
L_089189F4:
    ctx.gpr[31] = (0x089189FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x089189FCu) goto L_089189FC;
    return;
L_089189FC:
    ctx.gpr[31] = (0x08918A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x08918A04u) goto L_08918A04;
    return;
L_08918A04:
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08918A1Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x08918A1Cu) goto L_08918A1C;
    return;
L_08918A1C:
    ctx.gpr[31] = (0x08918A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x08918A24u) goto L_08918A24;
    return;
L_08918A24:
    ctx.gpr[31] = (0x08918A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x08918A2Cu) goto L_08918A2C;
    return;
L_08918A2C:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7036)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7016)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918B1C;
      }
      goto L_08918A50;
    }
L_08918A50:
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(3000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08918BD4;
      }
      goto L_08918A5C;
    }
L_08918A5C:
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(11000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918BD4;
      }
      goto L_08918A68;
    }
L_08918A68:
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08918A7Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08918A7Cu) goto L_08918A7C;
    return;
L_08918A7C:
    ctx.gpr[31] = (0x08918A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x08918A84u) goto L_08918A84;
    return;
L_08918A84:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 3000u);
    ctx.gpr[31] = (0x08918A94u);
    ctx.gpr[6] = (0u | 11000u);
    goto L_0891862C;
L_08918A94:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 128u);
    ctx.gpr[31] = (0x08918AACu);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08918AACu) goto L_08918AAC;
    return;
L_08918AAC:
    ctx.gpr[31] = (0x08918AB4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08918AB4u) goto L_08918AB4;
    return;
L_08918AB4:
    ctx.gpr[31] = (0x08918ABCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08918ABCu) goto L_08918ABC;
    return;
L_08918ABC:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7020)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918B14;
      }
      goto L_08918ACC;
    }
L_08918ACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] >> 31u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08918B14u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08918B14u) goto L_08918B14;
    return;
L_08918B14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918BD4;
      }
      goto L_08918B1C;
    }
L_08918B1C:
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(8000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918BD4;
      }
      goto L_08918B28;
    }
L_08918B28:
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08918B3Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08918B3Cu) goto L_08918B3C;
    return;
L_08918B3C:
    ctx.gpr[31] = (0x08918B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x08918B44u) goto L_08918B44;
    return;
L_08918B44:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08918B54u);
    ctx.gpr[6] = (0u | 8000u);
    goto L_0891862C;
L_08918B54:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 128u);
    ctx.gpr[31] = (0x08918B6Cu);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08918B6Cu) goto L_08918B6C;
    return;
L_08918B6C:
    ctx.gpr[31] = (0x08918B74u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08918B74u) goto L_08918B74;
    return;
L_08918B74:
    ctx.gpr[31] = (0x08918B7Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08918B7Cu) goto L_08918B7C;
    return;
L_08918B7C:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7020)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918BD4;
      }
      goto L_08918B8C;
    }
L_08918B8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] >> 31u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08918BD4u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08918BD4u) goto L_08918BD4;
    return;
L_08918BD4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7044)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08918C34;
      }
      goto L_08918BE4;
    }
L_08918BE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7036)));
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(4001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08918C10;
      }
      goto L_08918C00;
    }
L_08918C00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918C34;
      }
      goto L_08918C10;
    }
L_08918C10:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (0u | 194u);
    ctx.gpr[6] = (0u | 165u);
    ctx.gpr[7] = (0u | 120u);
    ctx.gpr[31] = (0x08918C28u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08918C28u) goto L_08918C28;
    return;
L_08918C28:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08918C34u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 679u, 0x08917904u>(ctx, &aot_mem) && ctx.pc == 0x08918C34u) goto L_08918C34;
    return;
L_08918C34:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08918DAC;
      }
      goto L_08918C44;
    }
L_08918C44:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7052)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08918DAC;
      }
      goto L_08918C58;
    }
L_08918C58:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7048)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17840));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[18] = (2227u << 16u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 0u);
        goto L_08918C80;
    }
    goto L_08918C80;
L_08918C80:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 0 ? 1u : 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
        goto L_08918C90;
    }
    goto L_08918C90;
L_08918C90:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08918CA4u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(9176));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08918CA4u) goto L_08918CA4;
    return;
L_08918CA4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(9176));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5392));
    ctx.gpr[31] = (0x08918CB8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A542E8u>(ctx, &aot_mem) && ctx.pc == 0x08918CB8u) goto L_08918CB8;
    return;
L_08918CB8:
    ctx.gpr[31] = (0x08918CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 512u, 0x089870E8u>(ctx, &aot_mem) && ctx.pc == 0x08918CC0u) goto L_08918CC0;
    return;
L_08918CC0:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[19] = (2228u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 200u);
    ctx.gpr[6] = (0u | 200u);
    ctx.gpr[31] = (0x08918CE0u);
    ctx.gpr[7] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08918CE0u) goto L_08918CE0;
    return;
L_08918CE0:
    ctx.gpr[31] = (0x08918CE8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08918CE8u) goto L_08918CE8;
    return;
L_08918CE8:
    ctx.gpr[31] = (0x08918CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 226u, 0x08A55174u>(ctx, &aot_mem) && ctx.pc == 0x08918CF0u) goto L_08918CF0;
    return;
L_08918CF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08918CFCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08918CFCu) goto L_08918CFC;
    return;
L_08918CFC:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17386u << 16u);
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17136u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08918D2Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08918D2Cu) goto L_08918D2C;
    return;
L_08918D2C:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 200u);
    ctx.gpr[6] = (0u | 200u);
    ctx.gpr[31] = (0x08918D44u);
    ctx.gpr[7] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08918D44u) goto L_08918D44;
    return;
L_08918D44:
    ctx.gpr[31] = (0x08918D4Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08918D4Cu) goto L_08918D4C;
    return;
L_08918D4C:
    ctx.gpr[31] = (0x08918D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x08918D54u) goto L_08918D54;
    return;
L_08918D54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[22] = ctx.fpr[24] - ctx.fpr[22];
      if (branch_taken) {
          goto L_08918D88;
      }
      goto L_08918D60;
    }
L_08918D60:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08918D6Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08918D6Cu) goto L_08918D6C;
    return;
L_08918D6C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918D84;
      }
      goto L_08918D78;
    }
L_08918D78:
    ctx.gpr[31] = (0x08918D80u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08918D80u) goto L_08918D80;
    return;
L_08918D80:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08918D84;
L_08918D84:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    goto L_08918D88;
L_08918D88:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08918D98u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17848));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08918D98u) goto L_08918D98;
    return;
L_08918D98:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08918DACu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08918DACu) goto L_08918DAC;
    return;
L_08918DAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918F2C;
      }
      goto L_08918DB4;
    }
L_08918DB4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7016)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918F24;
      }
      goto L_08918DC4;
    }
L_08918DC4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7036)));
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(5000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918F24;
      }
      goto L_08918DE4;
    }
L_08918DE4:
    ctx.gpr[31] = (0x08918DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x08918DECu) goto L_08918DEC;
    return;
L_08918DEC:
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08918E04u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x08918E04u) goto L_08918E04;
    return;
L_08918E04:
    ctx.gpr[31] = (0x08918E0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x08918E0Cu) goto L_08918E0C;
    return;
L_08918E0C:
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_08918E48;
      }
      goto L_08918E1C;
    }
L_08918E1C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08918E28u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08918E28u) goto L_08918E28;
    return;
L_08918E28:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918E40;
      }
      goto L_08918E34;
    }
L_08918E34:
    ctx.gpr[31] = (0x08918E3Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08918E3Cu) goto L_08918E3C;
    return;
L_08918E3C:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08918E40;
L_08918E40:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[19]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_08918E48;
L_08918E48:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08918E58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17856));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08918E58u) goto L_08918E58;
    return;
L_08918E58:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08918E6Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08918E6Cu) goto L_08918E6C;
    return;
L_08918E6C:
    ctx.gpr[31] = (0x08918E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x08918E74u) goto L_08918E74;
    return;
L_08918E74:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08918E84u);
    ctx.gpr[6] = (0u | 5000u);
    goto L_0891862C;
L_08918E84:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 128u);
    ctx.gpr[31] = (0x08918E9Cu);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08918E9Cu) goto L_08918E9C;
    return;
L_08918E9C:
    ctx.gpr[31] = (0x08918EA4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08918EA4u) goto L_08918EA4;
    return;
L_08918EA4:
    ctx.gpr[31] = (0x08918EACu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08918EACu) goto L_08918EAC;
    return;
L_08918EAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08918F04;
      }
      goto L_08918EF8;
    }
L_08918EF8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    goto L_08918F04;
L_08918F04:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08918F24u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08918F24u) goto L_08918F24;
    return;
L_08918F24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918F2C;
      }
      goto L_08918F2C;
    }
L_08918F2C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
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
L_08918F58:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27196)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27192)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27220)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[3] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(27200), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2227u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(27208), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(27204), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(27212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(27224), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08918FEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08919010u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17864));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08919010u) goto L_08919010;
    return;
L_08919010:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891901Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BF20u>(ctx, &aot_mem) && ctx.pc == 0x0891901Cu) goto L_0891901C;
    return;
L_0891901C:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891902Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B580u>(ctx, &aot_mem) && ctx.pc == 0x0891902Cu) goto L_0891902C;
    return;
L_0891902C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919038u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 657u, 0x0890BB10u>(ctx, &aot_mem) && ctx.pc == 0x08919038u) goto L_08919038;
    return;
L_08919038:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089190A8;
      }
      goto L_08919040;
    }
L_08919040:
    ctx.gpr[31] = (0x08919048u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 548u, 0x0890B414u>(ctx, &aot_mem) && ctx.pc == 0x08919048u) goto L_08919048;
    return;
L_08919048:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919058u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08919058u) goto L_08919058;
    return;
L_08919058:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[6] = (2225u << 16u);
      if (branch_taken) {
          goto L_0891907C;
      }
      goto L_08919064;
    }
L_08919064:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919070u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 581u, 0x0890B728u>(ctx, &aot_mem) && ctx.pc == 0x08919070u) goto L_08919070;
    return;
L_08919070:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891908C;
      }
      goto L_08919078;
    }
L_08919078:
    ctx.gpr[6] = (2225u << 16u);
    goto L_0891907C;
L_0891907C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0891908Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17872));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 361u, 0x08A4B144u>(ctx, &aot_mem) && ctx.pc == 0x0891908Cu) goto L_0891908C;
    return;
L_0891908C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919098u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x08919098u) goto L_08919098;
    return;
L_08919098:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089190A8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 545u, 0x0890B3A8u>(ctx, &aot_mem) && ctx.pc == 0x089190A8u) goto L_089190A8;
    return;
L_089190A8:
    ctx.gpr[31] = (0x089190B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 4u, 0x0890C064u>(ctx, &aot_mem) && ctx.pc == 0x089190B0u) goto L_089190B0;
    return;
L_089190B0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089190C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17896));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BC28u>(ctx, &aot_mem) && ctx.pc == 0x089190C4u) goto L_089190C4;
    return;
L_089190C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089190D0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x089190D0u) goto L_089190D0;
    return;
L_089190D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089190DCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 25u, 0x0890C210u>(ctx, &aot_mem) && ctx.pc == 0x089190DCu) goto L_089190DC;
    return;
L_089190DC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x089190F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17904));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BC28u>(ctx, &aot_mem) && ctx.pc == 0x089190F0u) goto L_089190F0;
    return;
L_089190F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089190FCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x089190FCu) goto L_089190FC;
    return;
L_089190FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919108u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 25u, 0x0890C210u>(ctx, &aot_mem) && ctx.pc == 0x08919108u) goto L_08919108;
    return;
L_08919108:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x0891911Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17912));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BC28u>(ctx, &aot_mem) && ctx.pc == 0x0891911Cu) goto L_0891911C;
    return;
L_0891911C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919128u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BF20u>(ctx, &aot_mem) && ctx.pc == 0x08919128u) goto L_08919128;
    return;
L_08919128:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919134u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 548u, 0x08A4BD14u>(ctx, &aot_mem) && ctx.pc == 0x08919134u) goto L_08919134;
    return;
L_08919134:
    ctx.gpr[17] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08919148u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 530u, 0x08A4BC0Cu>(ctx, &aot_mem) && ctx.pc == 0x08919148u) goto L_08919148;
    return;
L_08919148:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919154u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x08919154u) goto L_08919154;
    return;
L_08919154:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[31] = (0x08919164u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 31u, 0x0890C2D0u>(ctx, &aot_mem) && ctx.pc == 0x08919164u) goto L_08919164;
    return;
L_08919164:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919170u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x08919170u) goto L_08919170;
    return;
L_08919170:
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
L_0891918C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089191B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17864));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x089191B0u) goto L_089191B0;
    return;
L_089191B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089191BCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BF20u>(ctx, &aot_mem) && ctx.pc == 0x089191BCu) goto L_089191BC;
    return;
L_089191BC:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089191CCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B580u>(ctx, &aot_mem) && ctx.pc == 0x089191CCu) goto L_089191CC;
    return;
L_089191CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089191D8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 657u, 0x0890BB10u>(ctx, &aot_mem) && ctx.pc == 0x089191D8u) goto L_089191D8;
    return;
L_089191D8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089191F8;
      }
      goto L_089191E4;
    }
L_089191E4:
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x089191F8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17920));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 361u, 0x08A4B144u>(ctx, &aot_mem) && ctx.pc == 0x089191F8u) goto L_089191F8;
    return;
L_089191F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919204u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x08919204u) goto L_08919204;
    return;
L_08919204:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08919218u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17904));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BC28u>(ctx, &aot_mem) && ctx.pc == 0x08919218u) goto L_08919218;
    return;
L_08919218:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x0891922Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17912));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BC28u>(ctx, &aot_mem) && ctx.pc == 0x0891922Cu) goto L_0891922C;
    return;
L_0891922C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919238u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BF20u>(ctx, &aot_mem) && ctx.pc == 0x08919238u) goto L_08919238;
    return;
L_08919238:
    ctx.gpr[31] = (0x08919240u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 674u, 0x0890BBF0u>(ctx, &aot_mem) && ctx.pc == 0x08919240u) goto L_08919240;
    return;
L_08919240:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08919244;
L_08919244:
    ctx.gpr[31] = (0x0891924Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 82u, 0x0890C708u>(ctx, &aot_mem) && ctx.pc == 0x0891924Cu) goto L_0891924C;
    return;
L_0891924C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089192D4;
      }
      goto L_08919254;
    }
L_08919254:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919260u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x08919260u) goto L_08919260;
    return;
L_08919260:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891926Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BF20u>(ctx, &aot_mem) && ctx.pc == 0x0891926Cu) goto L_0891926C;
    return;
L_0891926C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919278u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 657u, 0x0890BB10u>(ctx, &aot_mem) && ctx.pc == 0x08919278u) goto L_08919278;
    return;
L_08919278:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08919294;
      }
      goto L_08919280;
    }
L_08919280:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891928Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x0891928Cu) goto L_0891928C;
    return;
L_0891928C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08919244;
      }
      goto L_08919294;
    }
L_08919294:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089192A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17944));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BC28u>(ctx, &aot_mem) && ctx.pc == 0x089192A8u) goto L_089192A8;
    return;
L_089192A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089192B4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x089192B4u) goto L_089192B4;
    return;
L_089192B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089192C0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 25u, 0x0890C210u>(ctx, &aot_mem) && ctx.pc == 0x089192C0u) goto L_089192C0;
    return;
L_089192C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089192CCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x089192CCu) goto L_089192CC;
    return;
L_089192CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089192E4;
      }
      goto L_089192D4;
    }
L_089192D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089192E0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x089192E0u) goto L_089192E0;
    return;
L_089192E0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_089192E4;
L_089192E4:
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
L_089192FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919320;
      }
      goto L_08919318;
    }
L_08919318:
    ctx.gpr[31] = (0x08919320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08919320u) goto L_08919320;
    return;
L_08919320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08919330u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 4u, 0x0890C064u>(ctx, &aot_mem) && ctx.pc == 0x08919330u) goto L_08919330;
    return;
L_08919330:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08919344u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17952));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BC28u>(ctx, &aot_mem) && ctx.pc == 0x08919344u) goto L_08919344;
    return;
L_08919344:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08919358u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28692));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BDECu>(ctx, &aot_mem) && ctx.pc == 0x08919358u) goto L_08919358;
    return;
L_08919358:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919364u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 25u, 0x0890C210u>(ctx, &aot_mem) && ctx.pc == 0x08919364u) goto L_08919364;
    return;
L_08919364:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08919378u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17960));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BC28u>(ctx, &aot_mem) && ctx.pc == 0x08919378u) goto L_08919378;
    return;
L_08919378:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0891938Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28276));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BDECu>(ctx, &aot_mem) && ctx.pc == 0x0891938Cu) goto L_0891938C;
    return;
L_0891938C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919398u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 25u, 0x0890C210u>(ctx, &aot_mem) && ctx.pc == 0x08919398u) goto L_08919398;
    return;
L_08919398:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089193ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17968));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BC28u>(ctx, &aot_mem) && ctx.pc == 0x089193ACu) goto L_089193AC;
    return;
L_089193AC:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089193C0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27576));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BDECu>(ctx, &aot_mem) && ctx.pc == 0x089193C0u) goto L_089193C0;
    return;
L_089193C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089193CCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 25u, 0x0890C210u>(ctx, &aot_mem) && ctx.pc == 0x089193CCu) goto L_089193CC;
    return;
L_089193CC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x089193E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17912));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BC28u>(ctx, &aot_mem) && ctx.pc == 0x089193E0u) goto L_089193E0;
    return;
L_089193E0:
    ctx.gpr[31] = (0x089193E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 4u, 0x0890C064u>(ctx, &aot_mem) && ctx.pc == 0x089193E8u) goto L_089193E8;
    return;
L_089193E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089193F4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 25u, 0x0890C210u>(ctx, &aot_mem) && ctx.pc == 0x089193F4u) goto L_089193F4;
    return;
L_089193F4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919404u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17864));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08919404u) goto L_08919404;
    return;
L_08919404:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919410u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B580u>(ctx, &aot_mem) && ctx.pc == 0x08919410u) goto L_08919410;
    return;
L_08919410:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891941Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 25u, 0x0890C210u>(ctx, &aot_mem) && ctx.pc == 0x0891941Cu) goto L_0891941C;
    return;
L_0891941C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891942C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891943Cu);
    // nop
    goto L_08919448;
L_0891943C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08919448:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08919478u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17864));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08919478u) goto L_08919478;
    return;
L_08919478:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919484u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BF20u>(ctx, &aot_mem) && ctx.pc == 0x08919484u) goto L_08919484;
    return;
L_08919484:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919494u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B580u>(ctx, &aot_mem) && ctx.pc == 0x08919494u) goto L_08919494;
    return;
L_08919494:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089194A0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x089194A0u) goto L_089194A0;
    return;
L_089194A0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089194B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17944));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BC28u>(ctx, &aot_mem) && ctx.pc == 0x089194B4u) goto L_089194B4;
    return;
L_089194B4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089194C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17896));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BC28u>(ctx, &aot_mem) && ctx.pc == 0x089194C8u) goto L_089194C8;
    return;
L_089194C8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x089194DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17904));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BC28u>(ctx, &aot_mem) && ctx.pc == 0x089194DCu) goto L_089194DC;
    return;
L_089194DC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x089194F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17912));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BC28u>(ctx, &aot_mem) && ctx.pc == 0x089194F0u) goto L_089194F0;
    return;
L_089194F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089194FCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BF20u>(ctx, &aot_mem) && ctx.pc == 0x089194FCu) goto L_089194FC;
    return;
L_089194FC:
    ctx.gpr[31] = (0x08919504u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 674u, 0x0890BBF0u>(ctx, &aot_mem) && ctx.pc == 0x08919504u) goto L_08919504;
    return;
L_08919504:
    ctx.gpr[18] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891950C;
L_0891950C:
    ctx.gpr[31] = (0x08919514u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 82u, 0x0890C708u>(ctx, &aot_mem) && ctx.pc == 0x08919514u) goto L_08919514;
    return;
L_08919514:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919738;
      }
      goto L_0891951C;
    }
L_0891951C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919528u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x08919528u) goto L_08919528;
    return;
L_08919528:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919534u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BF20u>(ctx, &aot_mem) && ctx.pc == 0x08919534u) goto L_08919534;
    return;
L_08919534:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919540u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x08919540u) goto L_08919540;
    return;
L_08919540:
    ctx.gpr[19] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919550u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x08919550u) goto L_08919550;
    return;
L_08919550:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919724;
      }
      goto L_08919558;
    }
L_08919558:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08919564u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x08919564u) goto L_08919564;
    return;
L_08919564:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919574u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x08919574u) goto L_08919574;
    return;
L_08919574:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919580u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BF20u>(ctx, &aot_mem) && ctx.pc == 0x08919580u) goto L_08919580;
    return;
L_08919580:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891958Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x0891958Cu) goto L_0891958C;
    return;
L_0891958C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089195A4;
      }
      goto L_08919594;
    }
L_08919594:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089195A4u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 50u, 0x0890C488u>(ctx, &aot_mem) && ctx.pc == 0x089195A4u) goto L_089195A4;
    return;
L_089195A4:
    ctx.gpr[31] = (0x089195ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x089195ACu) goto L_089195AC;
    return;
L_089195AC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089195C8;
      }
      goto L_089195B8;
    }
L_089195B8:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x089195C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x089195C4u) goto L_089195C4;
    return;
L_089195C4:
    ctx.gpr[20] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_089195C8;
L_089195C8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919718;
      }
      goto L_089195D0;
    }
L_089195D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089195DCu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x089195DCu) goto L_089195DC;
    return;
L_089195DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089195E8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BF20u>(ctx, &aot_mem) && ctx.pc == 0x089195E8u) goto L_089195E8;
    return;
L_089195E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089195F4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 657u, 0x0890BB10u>(ctx, &aot_mem) && ctx.pc == 0x089195F4u) goto L_089195F4;
    return;
L_089195F4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919604u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x08919604u) goto L_08919604;
    return;
L_08919604:
    ctx.gpr[31] = (0x0891960Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x0891960Cu) goto L_0891960C;
    return;
L_0891960C:
    ctx.gpr[21] = (ctx.gpr[2] - ctx.gpr[19]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08919634;
      }
      goto L_0891961C;
    }
L_0891961C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0891962Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 545u, 0x0890B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0891962Cu) goto L_0891962C;
    return;
L_0891962C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919638;
      }
      goto L_08919634;
    }
L_08919634:
    ctx.gpr[21] = (0u | 0u);
    goto L_08919638;
L_08919638:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08919644u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 390u, 0x088BA204u>(ctx, &aot_mem) && ctx.pc == 0x08919644u) goto L_08919644;
    return;
L_08919644:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089196CC;
      }
      goto L_08919650;
    }
L_08919650:
    ctx.gpr[31] = (0x08919658u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x08919658u) goto L_08919658;
    return;
L_08919658:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089196CC;
      }
      goto L_08919660;
    }
L_08919660:
    ctx.gpr[31] = (0x08919668u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08919668u) goto L_08919668;
    return;
L_08919668:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08919690;
      }
      goto L_08919670;
    }
L_08919670:
    ctx.gpr[31] = (0x08919678u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x08919678u) goto L_08919678;
    return;
L_08919678:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089196CC;
      }
      goto L_08919680;
    }
L_08919680:
    ctx.gpr[31] = (0x08919688u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08919688u) goto L_08919688;
    return;
L_08919688:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089196CC;
      }
      goto L_08919690;
    }
L_08919690:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891969Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x0891969Cu) goto L_0891969C;
    return;
L_0891969C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089196ACu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 545u, 0x0890B3A8u>(ctx, &aot_mem) && ctx.pc == 0x089196ACu) goto L_089196AC;
    return;
L_089196AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089196B8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 25u, 0x0890C210u>(ctx, &aot_mem) && ctx.pc == 0x089196B8u) goto L_089196B8;
    return;
L_089196B8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089196C4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x089196C4u) goto L_089196C4;
    return;
L_089196C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919718;
      }
      goto L_089196CC;
    }
L_089196CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089196D8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x089196D8u) goto L_089196D8;
    return;
L_089196D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089196E4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x089196E4u) goto L_089196E4;
    return;
L_089196E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089196F0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 25u, 0x0890C210u>(ctx, &aot_mem) && ctx.pc == 0x089196F0u) goto L_089196F0;
    return;
L_089196F0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919718;
      }
      goto L_089196F8;
    }
L_089196F8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919708u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 545u, 0x0890B3A8u>(ctx, &aot_mem) && ctx.pc == 0x08919708u) goto L_08919708;
    return;
L_08919708:
    ctx.gpr[31] = (0x08919710u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 80u, 0x0890C6E8u>(ctx, &aot_mem) && ctx.pc == 0x08919710u) goto L_08919710;
    return;
L_08919710:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919830;
      }
      goto L_08919718;
    }
L_08919718:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919724u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x08919724u) goto L_08919724;
    return;
L_08919724:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919730u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x08919730u) goto L_08919730;
    return;
L_08919730:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0891950C;
      }
      goto L_08919738;
    }
L_08919738:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    goto L_08919740;
L_08919740:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08919750u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BFF0u>(ctx, &aot_mem) && ctx.pc == 0x08919750u) goto L_08919750;
    return;
L_08919750:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891975Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x0891975Cu) goto L_0891975C;
    return;
L_0891975C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08919788;
      }
      goto L_08919764;
    }
L_08919764:
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919774u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 530u, 0x08A4BC0Cu>(ctx, &aot_mem) && ctx.pc == 0x08919774u) goto L_08919774;
    return;
L_08919774:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089197F8;
      }
      goto L_08919780;
    }
L_08919780:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919820;
      }
      goto L_08919788;
    }
L_08919788:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919798u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x08919798u) goto L_08919798;
    return;
L_08919798:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089197A4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BF20u>(ctx, &aot_mem) && ctx.pc == 0x089197A4u) goto L_089197A4;
    return;
L_089197A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089197B0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x089197B0u) goto L_089197B0;
    return;
L_089197B0:
    ctx.gpr[20] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089197C0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x089197C0u) goto L_089197C0;
    return;
L_089197C0:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089197E4;
      }
      goto L_089197C8;
    }
L_089197C8:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089197DCu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 31u, 0x0890C2D0u>(ctx, &aot_mem) && ctx.pc == 0x089197DCu) goto L_089197DC;
    return;
L_089197DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089197F0;
      }
      goto L_089197E4;
    }
L_089197E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089197F0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x089197F0u) goto L_089197F0;
    return;
L_089197F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919740;
      }
      goto L_089197F8;
    }
L_089197F8:
    ctx.gpr[31] = (0x08919800u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 674u, 0x0890BBF0u>(ctx, &aot_mem) && ctx.pc == 0x08919800u) goto L_08919800;
    return;
L_08919800:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919814u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 31u, 0x0890C2D0u>(ctx, &aot_mem) && ctx.pc == 0x08919814u) goto L_08919814;
    return;
L_08919814:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089197F8;
      }
      goto L_08919820;
    }
L_08919820:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891982Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x0891982Cu) goto L_0891982C;
    return;
L_0891982C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08919830;
L_08919830:
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
L_08919854:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    ctx.gpr[2] = (0u | 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08919880:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089198A8:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(51)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(80))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089198D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089198FCu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 558u, 0x089274C8u>(ctx, &aot_mem) && ctx.pc == 0x089198FCu) goto L_089198FC;
    return;
L_089198FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919918;
      }
      goto L_08919904;
    }
L_08919904:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08919918;
      }
      goto L_08919914;
    }
L_08919914:
    ctx.gpr[18] = (0u | 1u);
    goto L_08919918;
L_08919918:
    ctx.gpr[2] = (ctx.gpr[18] & 255u);
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
L_08919934:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08919948u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 667u, 0x08AC3EE8u>(ctx, &aot_mem) && ctx.pc == 0x08919948u) goto L_08919948;
    return;
L_08919948:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19300));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(122), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(124), static_cast<std::uint16_t>(0u));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891997C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891999Cu);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 667u, 0x08AC3EE8u>(ctx, &aot_mem) && ctx.pc == 0x0891999Cu) goto L_0891999C;
    return;
L_0891999C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19300));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(122), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(124), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089199CCu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089199CCu) goto L_089199CC;
    return;
L_089199CC:
    ctx.gpr[31] = (0x089199D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 227u, 0x08A823DCu>(ctx, &aot_mem) && ctx.pc == 0x089199D4u) goto L_089199D4;
    return;
L_089199D4:
    ctx.gpr[4] = (ctx.gpr[2] << 5u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30592));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(50)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(38)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[31] = (0x08919A20u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x08919A20u) goto L_08919A20;
    return;
L_08919A20:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[31] = (0x08919A30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08919A30u) goto L_08919A30;
    return;
L_08919A30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08919A4C;
      }
      goto L_08919A40;
    }
L_08919A40:
    ctx.gpr[31] = (0x08919A48u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089198A8;
L_08919A48:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08919A4C;
L_08919A4C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919A5Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 147u, 0x08AC5138u>(ctx, &aot_mem) && ctx.pc == 0x08919A5Cu) goto L_08919A5C;
    return;
L_08919A5C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08919A78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08919AF4;
      }
      goto L_08919A94;
    }
L_08919A94:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19300));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08919AB8;
      }
      goto L_08919AB0;
    }
L_08919AB0:
    ctx.gpr[31] = (0x08919AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 159u, 0x08A8193Cu>(ctx, &aot_mem) && ctx.pc == 0x08919AB8u) goto L_08919AB8;
    return;
L_08919AB8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08919AE4;
      }
      goto L_08919AC0;
    }
L_08919AC0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9628));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08919AD4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 115u, 0x08AC4DBCu>(ctx, &aot_mem) && ctx.pc == 0x08919AD4u) goto L_08919AD4;
    return;
L_08919AD4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08919AE0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 7u, 0x08AC4044u>(ctx, &aot_mem) && ctx.pc == 0x08919AE0u) goto L_08919AE0;
    return;
L_08919AE0:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08919AE4;
L_08919AE4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919AF4;
      }
      goto L_08919AEC;
    }
L_08919AEC:
    ctx.gpr[31] = (0x08919AF4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08919AF4u) goto L_08919AF4;
    return;
L_08919AF4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08919B08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08919B30u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 36u, 0x08AC43FCu>(ctx, &aot_mem) && ctx.pc == 0x08919B30u) goto L_08919B30;
    return;
L_08919B30:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[31] = (0x08919B48u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08919B48u) goto L_08919B48;
    return;
L_08919B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08919B88;
      }
      goto L_08919B5C;
    }
L_08919B5C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(118)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(117)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08919B84u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 210u, 0x08A84FC8u>(ctx, &aot_mem) && ctx.pc == 0x08919B84u) goto L_08919B84;
    return;
L_08919B84:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    goto L_08919B88;
L_08919B88:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08919B94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 227u, 0x08A823DCu>(ctx, &aot_mem) && ctx.pc == 0x08919B94u) goto L_08919B94;
    return;
L_08919B94:
    ctx.gpr[4] = (ctx.gpr[2] << 5u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30592));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
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
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(51)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08919C08;
      }
      goto L_08919BC8;
    }
L_08919BC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_08919C08;
      }
      goto L_08919BD4;
    }
L_08919BD4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919C08;
      }
      goto L_08919BF8;
    }
L_08919BF8:
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08919C08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17984));
    goto L_08919854;
L_08919C08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08919C60;
      }
      goto L_08919C18;
    }
L_08919C18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919C60;
      }
      goto L_08919C24;
    }
L_08919C24:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(33))))));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08919C44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18016));
    goto L_08919854;
L_08919C44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(33))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08919C60;
      }
      goto L_08919C58;
    }
L_08919C58:
    ctx.gpr[31] = (0x08919C60u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 23u, 0x08A80EDCu>(ctx, &aot_mem) && ctx.pc == 0x08919C60u) goto L_08919C60;
    return;
L_08919C60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08919C84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
      if (branch_taken) {
          goto L_08919D08;
      }
      goto L_08919CD8;
    }
L_08919CD8:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08919CECu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08919CECu) goto L_08919CEC;
    return;
L_08919CEC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08919D00u);
    ctx.gpr[7] = (0u | 255u);
    goto L_0891A46C;
L_08919D00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08919D48;
      }
      goto L_08919D08;
    }
L_08919D08:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08919D1Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08919D1Cu) goto L_08919D1C;
    return;
L_08919D1C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[31] = (0x08919D34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 130u, 0x08AC4F78u>(ctx, &aot_mem) && ctx.pc == 0x08919D34u) goto L_08919D34;
    return;
L_08919D34:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08919D48u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_0891A3B4;
L_08919D48:
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
L_08919D60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919DEC;
      }
      goto L_08919D98;
    }
L_08919D98:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08919DEC;
L_08919DEC:
    ctx.gpr[4] = (ctx.gpr[16] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919E04;
      }
      goto L_08919DF8;
    }
L_08919DF8:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08919E04u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 113u, 0x08A5CD94u>(ctx, &aot_mem) && ctx.pc == 0x08919E04u) goto L_08919E04;
    return;
L_08919E04:
    ctx.gpr[4] = (ctx.gpr[16] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919E24;
      }
      goto L_08919E10;
    }
L_08919E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08919E24;
L_08919E24:
    ctx.gpr[4] = (ctx.gpr[16] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919E44;
      }
      goto L_08919E30;
    }
L_08919E30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08919E44;
L_08919E44:
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
L_08919E5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-7213)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08919EA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x08919EA4u) goto L_08919EA4;
    return;
L_08919EA4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08919EB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    ctx.gpr[31] = (0x08919F00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18064));
    goto L_08919854;
L_08919F00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08919F2C;
    }
    goto L_08919F0C;
L_08919F0C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x08919F1Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08919F1Cu) goto L_08919F1C;
    return;
L_08919F1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08919F2C;
L_08919F2C:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[20] = (2232u << 16u);
      if (branch_taken) {
          goto L_08919F6C;
      }
      goto L_08919F3C;
    }
L_08919F3C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919F80;
      }
      goto L_08919F64;
    }
L_08919F64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A008;
      }
      goto L_08919F6C;
    }
L_08919F6C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08919F78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18088));
    goto L_08919854;
L_08919F78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A288;
      }
      goto L_08919F80;
    }
L_08919F80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919FF4;
      }
      goto L_08919F8C;
    }
L_08919F8C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08919F98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18136));
    goto L_08919854;
L_08919F98:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08919FB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18168));
    goto L_08919854;
L_08919FB8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-7214)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[31] = (0x08919FECu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x08919FECu) goto L_08919FEC;
    return;
L_08919FEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A000;
      }
      goto L_08919FF4;
    }
L_08919FF4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891A000u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18216));
    goto L_08919854;
L_0891A000:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A288;
      }
      goto L_0891A008;
    }
L_0891A008:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (ctx.gpr[17] + static_cast<std::uint32_t>(124));
      if (branch_taken) {
          goto L_0891A240;
      }
      goto L_0891A014;
    }
L_0891A014:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (20352u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(57));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (0u | 0u);
    goto L_0891A03C;
L_0891A03C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_0891A070;
    }
    goto L_0891A070;
L_0891A070:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_0891A170;
    }
    goto L_0891A07C;
L_0891A07C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0891A088u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A7DE0u>(ctx, &aot_mem) && ctx.pc == 0x0891A088u) goto L_0891A088;
    return;
L_0891A088:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A164;
      }
      goto L_0891A094;
    }
L_0891A094:
    ctx.gpr[31] = (0x0891A09Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 123u, 0x08A34C08u>(ctx, &aot_mem) && ctx.pc == 0x0891A09Cu) goto L_0891A09C;
    return;
L_0891A09C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891A0C4;
      }
      goto L_0891A0A8;
    }
L_0891A0A8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891A0B8u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0891A0B8u) goto L_0891A0B8;
    return;
L_0891A0B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(57)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891A0C4;
L_0891A0C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891A164;
      }
      goto L_0891A100;
    }
L_0891A100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(144)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
      if (branch_taken) {
          goto L_0891A130;
      }
      goto L_0891A128;
    }
L_0891A128:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_0891A14C;
      }
      goto L_0891A130;
    }
L_0891A130:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
        goto L_0891A148;
    }
    goto L_0891A148;
L_0891A148:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    goto L_0891A14C;
L_0891A14C:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_0891A15C;
    }
    goto L_0891A15C;
L_0891A15C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0891A164;
L_0891A164:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891A03C;
      }
      goto L_0891A170;
    }
L_0891A170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
        goto L_0891A1AC;
    }
    goto L_0891A198;
L_0891A198:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
      if (branch_taken) {
          goto L_0891A1D4;
      }
      goto L_0891A1AC;
    }
L_0891A1AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
        goto L_0891A1C0;
    }
    goto L_0891A1C0;
L_0891A1C0:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    goto L_0891A1D4;
L_0891A1D4:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(160))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[6] = (ctx.gpr[21] << 16u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(84))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(122));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(160))))));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (0x0891A238u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18272));
    goto L_08919854;
L_0891A238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A288;
      }
      goto L_0891A240;
    }
L_0891A240:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(160))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_0891A288;
      }
      goto L_0891A26C;
    }
L_0891A26C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0891A27Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18300));
    goto L_08919854;
L_0891A27C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(160))))));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    goto L_0891A288;
L_0891A288:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891A2C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891A2DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 227u, 0x08A823DCu>(ctx, &aot_mem) && ctx.pc == 0x0891A2DCu) goto L_0891A2DC;
    return;
L_0891A2DC:
    ctx.gpr[4] = (ctx.gpr[2] << 5u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30592));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0891A30Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18348));
    goto L_08919854;
L_0891A30C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[4] = (ctx.gpr[6] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
        goto L_0891A34C;
    }
    goto L_0891A34C;
L_0891A34C:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x0891A364u);
    ctx.gpr[8] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 29u, 0x08A8438Cu>(ctx, &aot_mem) && ctx.pc == 0x0891A364u) goto L_0891A364;
    return;
L_0891A364:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A3A4;
      }
      goto L_0891A36C;
    }
L_0891A36C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891A378u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18380));
    goto L_08919854;
L_0891A378:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A398;
      }
      goto L_0891A384;
    }
L_0891A384:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891A390u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18424));
    goto L_08919854;
L_0891A390:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A3A4;
      }
      goto L_0891A398;
    }
L_0891A398:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891A3A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18460));
    goto L_08919854;
L_0891A3A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891A3B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891A3F0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 563u, 0x0892751Cu>(ctx, &aot_mem) && ctx.pc == 0x0891A3F0u) goto L_0891A3F0;
    return;
L_0891A3F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A3FC;
      }
      goto L_0891A3F8;
    }
L_0891A3F8:
    ctx.gpr[20] = (0u | 2u);
    goto L_0891A3FC;
L_0891A3FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891A410;
      }
      goto L_0891A40C;
    }
L_0891A40C:
    ctx.gpr[20] = (ctx.gpr[20] | 4u);
    goto L_0891A410;
L_0891A410:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(33))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(33))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891A424;
      }
      goto L_0891A420;
    }
L_0891A420:
    ctx.gpr[20] = (ctx.gpr[20] | 8u);
    goto L_0891A424;
L_0891A424:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A448;
      }
      goto L_0891A42C;
    }
L_0891A42C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891A440u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_0891A46C;
L_0891A440:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0891A44C;
      }
      goto L_0891A448;
    }
L_0891A448:
    ctx.gpr[2] = (0u | 0u);
    goto L_0891A44C;
L_0891A44C:
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
L_0891A46C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (ctx.gpr[7] & 1u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0891A568;
      }
      goto L_0891A4BC;
    }
L_0891A4BC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(118)));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891A568;
L_0891A568:
    ctx.gpr[4] = (ctx.gpr[16] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A580;
      }
      goto L_0891A574;
    }
L_0891A574:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0891A580u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 106u, 0x08A5C89Cu>(ctx, &aot_mem) && ctx.pc == 0x0891A580u) goto L_0891A580;
    return;
L_0891A580:
    ctx.gpr[4] = (ctx.gpr[16] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A5B4;
      }
      goto L_0891A58C;
    }
L_0891A58C:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0891A5B4;
L_0891A5B4:
    ctx.gpr[4] = (ctx.gpr[16] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A5F4;
      }
      goto L_0891A5C0;
    }
L_0891A5C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(33))))));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891A5F4;
L_0891A5F4:
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
L_0891A60C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891A638u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18500));
    goto L_08919854;
L_0891A638:
    ctx.gpr[17] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[17]));
    ctx.gpr[17] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(6), ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5)));
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5736));
      if (branch_taken) {
          goto L_0891A6C8;
      }
      goto L_0891A654;
    }
L_0891A654:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891A660u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18544));
    goto L_08919854;
L_0891A660:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x0891A674u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x0891A674u) goto L_0891A674;
    return;
L_0891A674:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A6C0;
      }
      goto L_0891A680;
    }
L_0891A680:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891A690u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 429u, 0x088A9DFCu>(ctx, &aot_mem) && ctx.pc == 0x0891A690u) goto L_0891A690;
    return;
L_0891A690:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), 0u);
      if (branch_taken) {
          goto L_0891A6B4;
      }
      goto L_0891A698;
    }
L_0891A698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0891A6B4u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891A6B4u) goto L_0891A6B4;
    return;
L_0891A6B4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891A6C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18564));
    goto L_08919854;
L_0891A6C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A714;
      }
      goto L_0891A6C8;
    }
L_0891A6C8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891A6DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18596));
    goto L_08919854;
L_0891A6DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891A6ECu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x0891A6ECu) goto L_0891A6EC;
    return;
L_0891A6EC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A708;
      }
      goto L_0891A6F8;
    }
L_0891A6F8:
    ctx.gpr[31] = (0x0891A700u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0891A2C4;
L_0891A700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A714;
      }
      goto L_0891A708;
    }
L_0891A708:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891A714u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18636));
    goto L_08919854;
L_0891A714:
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
L_0891A72C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891A758u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18668));
    goto L_08919854;
L_0891A758:
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(6), ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x0891A77Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x0891A77Cu) goto L_0891A77C;
    return;
L_0891A77C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A7BC;
      }
      goto L_0891A788;
    }
L_0891A788:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891A798u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 637u, 0x088A7CE4u>(ctx, &aot_mem) && ctx.pc == 0x0891A798u) goto L_0891A798;
    return;
L_0891A798:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[31] = (0x0891A7B4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08919EB0;
L_0891A7B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A7C8;
      }
      goto L_0891A7BC;
    }
L_0891A7BC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891A7C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18700));
    goto L_08919854;
L_0891A7C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891A7E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891A81C;
      }
      goto L_0891A808;
    }
L_0891A808:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(122))))));
    ctx.gpr[31] = (0x0891A81Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18748));
    goto L_08919854;
L_0891A81C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(122));
      if (branch_taken) {
          goto L_0891AA80;
      }
      goto L_0891A828;
    }
L_0891A828:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AA80;
      }
      goto L_0891A85C;
    }
L_0891A85C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x0891A874u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18756));
    goto L_08919854;
L_0891A874:
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0891A884u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18780));
    goto L_08919854;
L_0891A884:
    ctx.gpr[31] = (0x0891A88Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 227u, 0x08A823DCu>(ctx, &aot_mem) && ctx.pc == 0x0891A88Cu) goto L_0891A88C;
    return;
L_0891A88C:
    ctx.gpr[4] = (ctx.gpr[2] << 5u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30592));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(51)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891AA80;
      }
      goto L_0891A8B4;
    }
L_0891A8B4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891A8C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18812));
    goto L_08919854;
L_0891A8C0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(50)));
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[6] = (0u | 19u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5736));
      if (branch_taken) {
          goto L_0891A8E4;
      }
      goto L_0891A8D8;
    }
L_0891A8D8:
    ctx.gpr[6] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0891A9C4;
      }
      goto L_0891A8E4;
    }
L_0891A8E4:
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(38)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0891A904;
      }
      goto L_0891A8FC;
    }
L_0891A8FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0891A93C;
      }
      goto L_0891A904;
    }
L_0891A904:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(274)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0891A918;
      }
      goto L_0891A910;
    }
L_0891A910:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_0891A93C;
      }
      goto L_0891A918;
    }
L_0891A918:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0891A92C;
      }
      goto L_0891A924;
    }
L_0891A924:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_0891A93C;
      }
      goto L_0891A92C;
    }
L_0891A92C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(294)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891A940;
      }
      goto L_0891A938;
    }
L_0891A938:
    ctx.gpr[5] = (0u | 8u);
    goto L_0891A93C;
L_0891A93C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_0891A940;
L_0891A940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[8] = (0u | 6u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-7212)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0891A98Cu);
    ctx.gpr[7] = (0u | 1u);
    goto L_0891AB1C;
L_0891A98C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0891A99Cu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x0891A99Cu) goto L_0891A99C;
    return;
L_0891A99C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0891A9BCu);
    ctx.gpr[8] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 29u, 0x08A8438Cu>(ctx, &aot_mem) && ctx.pc == 0x0891A9BCu) goto L_0891A9BC;
    return;
L_0891A9BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AA80;
      }
      goto L_0891A9C4;
    }
L_0891A9C4:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-7213)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(38));
      if (branch_taken) {
          goto L_0891AA30;
      }
      goto L_0891AA04;
    }
L_0891AA04:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891AA10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18840));
    goto L_08919854;
L_0891AA10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0891AA28u);
    ctx.gpr[7] = (0u | 1u);
    goto L_0891A60C;
L_0891AA28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AA80;
      }
      goto L_0891AA30;
    }
L_0891AA30:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891AA3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18880));
    goto L_08919854;
L_0891AA3C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0891AA58u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 29u, 0x08A8438Cu>(ctx, &aot_mem) && ctx.pc == 0x0891AA58u) goto L_0891AA58;
    return;
L_0891AA58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AA80;
      }
      goto L_0891AA60;
    }
L_0891AA60:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x0891AA70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18924));
    goto L_08919854;
L_0891AA70:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891AA80u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x0891AA80u) goto L_0891AA80;
    return;
L_0891AA80:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[31] = (0x0891AA98u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x0891AA98u) goto L_0891AA98;
    return;
L_0891AA98:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[31] = (0x0891AAA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x0891AAA8u) goto L_0891AAA8;
    return;
L_0891AAA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_0891AAF0;
      }
      goto L_0891AAB8;
    }
L_0891AAB8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x0891AAC8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 227u, 0x08A823DCu>(ctx, &aot_mem) && ctx.pc == 0x0891AAC8u) goto L_0891AAC8;
    return;
L_0891AAC8:
    ctx.gpr[4] = (ctx.gpr[2] << 5u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30592));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0891AAE8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_089198A8;
L_0891AAE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_0891AAF0;
L_0891AAF0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0891AB00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 147u, 0x08AC5138u>(ctx, &aot_mem) && ctx.pc == 0x0891AB00u) goto L_0891AB00;
    return;
L_0891AB00:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891AB1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891AB54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18992));
    goto L_08919854;
L_0891AB54:
    ctx.gpr[31] = (0x0891AB5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0891AB5Cu) goto L_0891AB5C;
    return;
L_0891AB5C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 22u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7236)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[19] = (2232u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0891AFFC;
      }
      goto L_0891AB94;
    }
L_0891AB94:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AFCC;
      }
      goto L_0891AB9C;
    }
L_0891AB9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 55u);
      if (branch_taken) {
          goto L_0891AFCC;
      }
      goto L_0891ABAC;
    }
L_0891ABAC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891AFCC;
      }
      goto L_0891ABB4;
    }
L_0891ABB4:
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0891ABD0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19012));
    goto L_08919854;
L_0891ABD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_0891AFCC;
      }
      goto L_0891ABDC;
    }
L_0891ABDC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0891AFCC;
      }
      goto L_0891ABE4;
    }
L_0891ABE4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19168)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891ABFC:
    ctx.gpr[31] = (0x0891AC04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 319u, 0x08945584u>(ctx, &aot_mem) && ctx.pc == 0x0891AC04u) goto L_0891AC04;
    return;
L_0891AC04:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891ACE8;
      }
      goto L_0891AC0C;
    }
L_0891AC0C:
    ctx.gpr[4] = (ctx.gpr[20] << 3u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0891AC2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 334u, 0x08945630u>(ctx, &aot_mem) && ctx.pc == 0x0891AC2Cu) goto L_0891AC2C;
    return;
L_0891AC2C:
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25456));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(10384));
      if (branch_taken) {
          goto L_0891AC70;
      }
      goto L_0891AC48;
    }
L_0891AC48:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x0891AC54u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0891AC54u) goto L_0891AC54;
    return;
L_0891AC54:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AC6C;
      }
      goto L_0891AC60;
    }
L_0891AC60:
    ctx.gpr[31] = (0x0891AC68u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0891AC68u) goto L_0891AC68;
    return;
L_0891AC68:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_0891AC6C;
L_0891AC6C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24444), ctx.gpr[21]);
    goto L_0891AC70;
L_0891AC70:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0891AC80u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19040));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0891AC80u) goto L_0891AC80;
    return;
L_0891AC80:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[31] = (0x0891AC90u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 286u, 0x08879A6Cu>(ctx, &aot_mem) && ctx.pc == 0x0891AC90u) goto L_0891AC90;
    return;
L_0891AC90:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891ACA0u);
    ctx.gpr[5] = (0u | 203u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x0891ACA0u) goto L_0891ACA0;
    return;
L_0891ACA0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 203u);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(51), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(54), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 203u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (ctx.gpr[2] | 0u);
    ctx.gpr[10] = (0u | 127u);
    ctx.gpr[11] = (0u | 20u);
    ctx.gpr[31] = (0x0891ACE8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 956u, 0x08A9B858u>(ctx, &aot_mem) && ctx.pc == 0x0891ACE8u) goto L_0891ACE8;
    return;
L_0891ACE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AFCC;
      }
      goto L_0891ACF0;
    }
L_0891ACF0:
    ctx.gpr[31] = (0x0891ACF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 319u, 0x08945584u>(ctx, &aot_mem) && ctx.pc == 0x0891ACF8u) goto L_0891ACF8;
    return;
L_0891ACF8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891ADDC;
      }
      goto L_0891AD00;
    }
L_0891AD00:
    ctx.gpr[4] = (ctx.gpr[20] << 3u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0891AD20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 339u, 0x08945688u>(ctx, &aot_mem) && ctx.pc == 0x0891AD20u) goto L_0891AD20;
    return;
L_0891AD20:
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25456));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(10384));
      if (branch_taken) {
          goto L_0891AD64;
      }
      goto L_0891AD3C;
    }
L_0891AD3C:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x0891AD48u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0891AD48u) goto L_0891AD48;
    return;
L_0891AD48:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AD60;
      }
      goto L_0891AD54;
    }
L_0891AD54:
    ctx.gpr[31] = (0x0891AD5Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0891AD5Cu) goto L_0891AD5C;
    return;
L_0891AD5C:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_0891AD60;
L_0891AD60:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24444), ctx.gpr[21]);
    goto L_0891AD64;
L_0891AD64:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0891AD74u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19048));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0891AD74u) goto L_0891AD74;
    return;
L_0891AD74:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[31] = (0x0891AD84u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 286u, 0x08879A6Cu>(ctx, &aot_mem) && ctx.pc == 0x0891AD84u) goto L_0891AD84;
    return;
L_0891AD84:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891AD94u);
    ctx.gpr[5] = (0u | 203u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x0891AD94u) goto L_0891AD94;
    return;
L_0891AD94:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 203u);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(51), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(54), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 203u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (ctx.gpr[2] | 0u);
    ctx.gpr[10] = (0u | 127u);
    ctx.gpr[11] = (0u | 20u);
    ctx.gpr[31] = (0x0891ADDCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 956u, 0x08A9B858u>(ctx, &aot_mem) && ctx.pc == 0x0891ADDCu) goto L_0891ADDC;
    return;
L_0891ADDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AFCC;
      }
      goto L_0891ADE4;
    }
L_0891ADE4:
    ctx.gpr[31] = (0x0891ADECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 319u, 0x08945584u>(ctx, &aot_mem) && ctx.pc == 0x0891ADECu) goto L_0891ADEC;
    return;
L_0891ADEC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891AED0;
      }
      goto L_0891ADF4;
    }
L_0891ADF4:
    ctx.gpr[4] = (ctx.gpr[20] << 3u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0891AE14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 344u, 0x089456E8u>(ctx, &aot_mem) && ctx.pc == 0x0891AE14u) goto L_0891AE14;
    return;
L_0891AE14:
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25456));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(10384));
      if (branch_taken) {
          goto L_0891AE58;
      }
      goto L_0891AE30;
    }
L_0891AE30:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x0891AE3Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0891AE3Cu) goto L_0891AE3C;
    return;
L_0891AE3C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AE54;
      }
      goto L_0891AE48;
    }
L_0891AE48:
    ctx.gpr[31] = (0x0891AE50u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0891AE50u) goto L_0891AE50;
    return;
L_0891AE50:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_0891AE54;
L_0891AE54:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24444), ctx.gpr[21]);
    goto L_0891AE58;
L_0891AE58:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0891AE68u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19056));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0891AE68u) goto L_0891AE68;
    return;
L_0891AE68:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[31] = (0x0891AE78u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 286u, 0x08879A6Cu>(ctx, &aot_mem) && ctx.pc == 0x0891AE78u) goto L_0891AE78;
    return;
L_0891AE78:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891AE88u);
    ctx.gpr[5] = (0u | 203u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x0891AE88u) goto L_0891AE88;
    return;
L_0891AE88:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 203u);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(51), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(54), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 203u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (ctx.gpr[2] | 0u);
    ctx.gpr[10] = (0u | 127u);
    ctx.gpr[11] = (0u | 20u);
    ctx.gpr[31] = (0x0891AED0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 956u, 0x08A9B858u>(ctx, &aot_mem) && ctx.pc == 0x0891AED0u) goto L_0891AED0;
    return;
L_0891AED0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AFCC;
      }
      goto L_0891AED8;
    }
L_0891AED8:
    ctx.gpr[31] = (0x0891AEE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 319u, 0x08945584u>(ctx, &aot_mem) && ctx.pc == 0x0891AEE0u) goto L_0891AEE0;
    return;
L_0891AEE0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891AFC4;
      }
      goto L_0891AEE8;
    }
L_0891AEE8:
    ctx.gpr[4] = (ctx.gpr[20] << 3u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0891AF08u);
    ctx.gpr[4] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 764u, 0x08917F1Cu>(ctx, &aot_mem) && ctx.pc == 0x0891AF08u) goto L_0891AF08;
    return;
L_0891AF08:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-25456));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(10384));
      if (branch_taken) {
          goto L_0891AF4C;
      }
      goto L_0891AF24;
    }
L_0891AF24:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x0891AF30u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0891AF30u) goto L_0891AF30;
    return;
L_0891AF30:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AF48;
      }
      goto L_0891AF3C;
    }
L_0891AF3C:
    ctx.gpr[31] = (0x0891AF44u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0891AF44u) goto L_0891AF44;
    return;
L_0891AF44:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_0891AF48;
L_0891AF48:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24444), ctx.gpr[21]);
    goto L_0891AF4C;
L_0891AF4C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0891AF5Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19064));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0891AF5Cu) goto L_0891AF5C;
    return;
L_0891AF5C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[31] = (0x0891AF6Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 286u, 0x08879A6Cu>(ctx, &aot_mem) && ctx.pc == 0x0891AF6Cu) goto L_0891AF6C;
    return;
L_0891AF6C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0891AF7Cu);
    ctx.gpr[5] = (0u | 203u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x0891AF7Cu) goto L_0891AF7C;
    return;
L_0891AF7C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 203u);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(51), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(54), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 203u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (ctx.gpr[2] | 0u);
    ctx.gpr[10] = (0u | 127u);
    ctx.gpr[11] = (0u | 20u);
    ctx.gpr[31] = (0x0891AFC4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 956u, 0x08A9B858u>(ctx, &aot_mem) && ctx.pc == 0x0891AFC4u) goto L_0891AFC4;
    return;
L_0891AFC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AFCC;
      }
      goto L_0891AFCC;
    }
L_0891AFCC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B088;
      }
      goto L_0891AFD4;
    }
L_0891AFD4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891AFF4u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A878Cu>(ctx, &aot_mem) && ctx.pc == 0x0891AFF4u) goto L_0891AFF4;
    return;
L_0891AFF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B088;
      }
      goto L_0891AFFC;
    }
L_0891AFFC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0891B014u);
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(19072));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 665u, 0x088A7EF0u>(ctx, &aot_mem) && ctx.pc == 0x0891B014u) goto L_0891B014;
    return;
L_0891B014:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891B024u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x0891B024u) goto L_0891B024;
    return;
L_0891B024:
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-21280)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-21280)));
        goto L_0891B040;
    }
    goto L_0891B034;
L_0891B034:
    ctx.gpr[31] = (0x0891B03Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x0891B03Cu) goto L_0891B03C;
    return;
L_0891B03C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-21280)));
    goto L_0891B040;
L_0891B040:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x0891B04Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x0891B04Cu) goto L_0891B04C;
    return;
L_0891B04C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891B05Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x0891B05Cu) goto L_0891B05C;
    return;
L_0891B05C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891B068u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 781u, 0x0883BFA4u>(ctx, &aot_mem) && ctx.pc == 0x0891B068u) goto L_0891B068;
    return;
L_0891B068:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0891B088;
      }
      goto L_0891B07C;
    }
L_0891B07C:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891B088u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x0891B088u) goto L_0891B088;
    return;
L_0891B088:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B0B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27236)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27232)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[16] / ctx.fpr[12];
    ctx.gpr[12] = (2227u << 16u);
    ctx.gpr[6] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(27240), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[8] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(27260)));
    ctx.gpr[18] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-7213), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-7213)));
    ctx.gpr[12] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[3] = (2232u << 16u);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[13] = (2225u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(6008));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(27248), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(19112));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[3]);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-7214), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[13]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-7214)));
    ctx.gpr[15] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(27244), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[2] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[14] = (2225u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[11] = (15744u << 16u);
    ctx.gpr[8] = (ctx.gpr[14] + static_cast<std::uint32_t>(19128));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[3]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-7212), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-7212)));
    ctx.gpr[24] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[25] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(27252), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[7] << 2u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(27256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19144));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(27264), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B1F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    ctx.gpr[2] = (0u | 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B220:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B228:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891B24Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19200));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x0891B24Cu) goto L_0891B24C;
    return;
L_0891B24C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7200), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7168), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-8148), ctx.gpr[17]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8132), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8136), 0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31856), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7012), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7008), 0u);
    ctx.gpr[31] = (0x0891B2B0u);
    // nop
    goto L_0891B220;
L_0891B2B0:
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[31] = (0x0891B2BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11440));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 339u, 0x089D99D8u>(ctx, &aot_mem) && ctx.pc == 0x0891B2BCu) goto L_0891B2BC;
    return;
L_0891B2BC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100), 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[31] = (0x0891B2D4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8148)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 149u, 0x08864AB0u>(ctx, &aot_mem) && ctx.pc == 0x0891B2D4u) goto L_0891B2D4;
    return;
L_0891B2D4:
    ctx.gpr[31] = (0x0891B2DCu);
    // nop
    ctx.pc = 0x08B0BBE4u;
    return;
L_0891B2DC:
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(27332), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B2F8;
      }
      goto L_0891B2EC;
    }
L_0891B2EC:
    ctx.gpr[31] = (0x0891B2F4u);
    // nop
    ctx.pc = 0x08B0BBECu;
    return;
L_0891B2F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(27332), ctx.gpr[2]);
    goto L_0891B2F8;
L_0891B2F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B368;
      }
      goto L_0891B304;
    }
L_0891B304:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(19224));
    ctx.gpr[31] = (0x0891B314u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0891B1F4;
L_0891B314:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891B320u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19256));
    goto L_0891B1F4;
L_0891B320:
    ctx.gpr[31] = (0x0891B328u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0891B1F4;
L_0891B328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B344;
      }
      goto L_0891B338;
    }
L_0891B338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27332)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().memory_barrier();
    goto L_0891B344;
L_0891B344:
    ctx.gpr[31] = (0x0891B34Cu);
    // nop
    ctx.pc = 0x08B0B81Cu;
    return;
L_0891B34C:
    ctx.gpr[4] = (18804u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 9216u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27336), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0891B368;
L_0891B368:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891B374u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19288));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x0891B374u) goto L_0891B374;
    return;
L_0891B374:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_0891B390:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B398:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-8132), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B3AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[17] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-8132), ctx.gpr[4]);
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(11440));
    ctx.gpr[31] = (0x0891B3F0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 343u, 0x089D9A7Cu>(ctx, &aot_mem) && ctx.pc == 0x0891B3F0u) goto L_0891B3F0;
    return;
L_0891B3F0:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (18576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8128)));
    ctx.gpr[4] = (19124u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8136)));
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[4] = (16128u << 16u);
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891B458;
      }
      goto L_0891B44C;
    }
L_0891B44C:
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          goto L_0891B46C;
      }
      goto L_0891B458;
    }
L_0891B458:
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[9] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    goto L_0891B46C;
L_0891B46C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7012), ctx.gpr[4]);
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B4A4;
      }
      goto L_0891B480;
    }
L_0891B480:
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[10]);
    ctx.gpr[10] = (72u << 16u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[10]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[10] = (ctx.hi);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(27340), ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7012), ctx.gpr[4]);
    goto L_0891B4A4;
L_0891B4A4:
    ctx.gpr[9] = (5u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-32768));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(27324)));
    ctx.gpr[9] = (ctx.gpr[11] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(27324), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-7200)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7168)));
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-25849)));
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B510;
      }
      goto L_0891B4E0;
    }
L_0891B4E0:
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
      if (branch_taken) {
          goto L_0891B4F8;
      }
      goto L_0891B4EC;
    }
L_0891B4EC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    goto L_0891B4F8;
L_0891B4F8:
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8124), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7012), 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0891B510;
L_0891B510:
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
      if (branch_taken) {
          goto L_0891B528;
      }
      goto L_0891B51C;
    }
L_0891B51C:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    goto L_0891B528;
L_0891B528:
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[13];
        goto L_0891B550;
    }
    goto L_0891B540;
L_0891B540:
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_0891B564;
      }
      goto L_0891B550;
    }
L_0891B550:
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[9] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    goto L_0891B564;
L_0891B564:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-8148), ctx.gpr[8]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
      if (branch_taken) {
          goto L_0891B580;
      }
      goto L_0891B574;
    }
L_0891B574:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    goto L_0891B580;
L_0891B580:
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
        goto L_0891B5A8;
    }
    goto L_0891B598;
L_0891B598:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_0891B5BC;
      }
      goto L_0891B5A8;
    }
L_0891B5A8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_0891B5BC;
L_0891B5BC:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-8136), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0891B5D8;
      }
      goto L_0891B5CC;
    }
L_0891B5CC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0891B5D8;
L_0891B5D8:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-8144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0891B5ECu);
    // nop
    goto L_0891B220;
L_0891B5EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8144)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891B630;
      }
      goto L_0891B600;
    }
L_0891B600:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-7200)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7168)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-25849)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0891B630;
      }
      goto L_0891B61C;
    }
L_0891B61C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1420)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B630;
      }
      goto L_0891B628;
    }
L_0891B628:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-8144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0891B630;
L_0891B630:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0891B640u);
    // nop
    goto L_0891B220;
L_0891B640:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-7004))))));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891B694;
      }
      goto L_0891B654;
    }
L_0891B654:
    ctx.gpr[4] = (16469u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 21845u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8148)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0891B678;
    }
    goto L_0891B678;
L_0891B678:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-8144), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8132)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(60));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_0891B690;
    }
    goto L_0891B690;
L_0891B690:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-8148), ctx.gpr[5]);
    goto L_0891B694;
L_0891B694:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8092)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891B6C0;
      }
      goto L_0891B6A8;
    }
L_0891B6A8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-8144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8132)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-8148), ctx.gpr[4]);
    goto L_0891B6C0;
L_0891B6C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100), ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B6F8:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31856)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31856), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B714;
      }
      goto L_0891B714;
    }
L_0891B714:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B71C:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31856)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31856), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B734;
      }
      goto L_0891B734;
    }
L_0891B734:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B73C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8128)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891B764;
      }
      goto L_0891B75C;
    }
L_0891B75C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0891B768;
      }
      goto L_0891B764;
    }
L_0891B764:
    ctx.gpr[2] = (0u | 0u);
    goto L_0891B768;
L_0891B768:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B770:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7200), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B780:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7200), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B78C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27276)));
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27280), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27272)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27284), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27300)));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27304)));
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27312), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[31] = (0x0891B864u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11440));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 333u, 0x089D9978u>(ctx, &aot_mem) && ctx.pc == 0x0891B864u) goto L_0891B864;
    return;
L_0891B864:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0891B870u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27344));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0891B870u) goto L_0891B870;
    return;
L_0891B870:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B87C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-5));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B924;
      }
      goto L_0891B8A4;
    }
L_0891B8A4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0891B8F8;
      }
      goto L_0891B8AC;
    }
L_0891B8AC:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0891B8E8;
      }
      goto L_0891B8B4;
    }
L_0891B8B4:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891B908;
      }
      goto L_0891B8BC;
    }
L_0891B8BC:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0891B918;
      }
      goto L_0891B8C4;
    }
L_0891B8C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5)));
    ctx.gpr[6] = (ctx.gpr[6] & 17u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B8E0;
      }
      goto L_0891B8D8;
    }
L_0891B8D8:
    ctx.gpr[31] = (0x0891B8E0u);
    // nop
    goto L_0891B87C;
L_0891B8E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B924;
      }
      goto L_0891B8E8;
    }
L_0891B8E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0891B924;
      }
      goto L_0891B8F8;
    }
L_0891B8F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0891B924;
      }
      goto L_0891B908;
    }
L_0891B908:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0891B924;
      }
      goto L_0891B918;
    }
L_0891B918:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_0891B924;
L_0891B924:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B930:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891B974;
      }
      goto L_0891B950;
    }
L_0891B950:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 254u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x0891B968u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_0891B87C;
L_0891B968:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B950;
      }
      goto L_0891B974;
    }
L_0891B974:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B988:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891BA70;
      }
      goto L_0891B9C8;
    }
L_0891B9C8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 17u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B9E8;
      }
      goto L_0891B9D8;
    }
L_0891B9D8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B9F4;
      }
      goto L_0891B9E8;
    }
L_0891B9E8:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0891BA60;
      }
      goto L_0891B9F4;
    }
L_0891B9F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.gpr[6] = (ctx.gpr[6] & 8u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0891BA1C;
      }
      goto L_0891BA08;
    }
L_0891BA08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x0891BA18u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 7u, 0x08AA80E8u>(ctx, &aot_mem) && ctx.pc == 0x0891BA18u) goto L_0891BA18;
    return;
L_0891BA18:
    ctx.gpr[5] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_0891BA1C;
L_0891BA1C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BA3C;
      }
      goto L_0891BA24;
    }
L_0891BA24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5)));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 253u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0891BA60;
      }
      goto L_0891BA3C;
    }
L_0891BA3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_0891BA60;
L_0891BA60:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B9C8;
      }
      goto L_0891BA6C;
    }
L_0891BA6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_0891BA70;
L_0891BA70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
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
L_0891BAA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_0891BAC0;
      }
      goto L_0891BAB8;
    }
L_0891BAB8:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_0891BAC0;
L_0891BAC0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891BAC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(5)));
    ctx.gpr[7] = (ctx.gpr[7] | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891BB48;
      }
      goto L_0891BB08;
    }
L_0891BB08:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[6] = (0u | 0u);
    goto L_0891BB10;
L_0891BB10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891BB34;
      }
      goto L_0891BB24;
    }
L_0891BB24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5)));
    ctx.gpr[7] = (ctx.gpr[7] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_0891BB34;
L_0891BB34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0891BB10;
      }
      goto L_0891BB48;
    }
L_0891BB48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0891BB88;
      }
      goto L_0891BB5C;
    }
L_0891BB5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891BB5C;
      }
      goto L_0891BB88;
    }
L_0891BB88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0891BBD4;
      }
      goto L_0891BB9C;
    }
L_0891BB9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 17u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891BBC0;
      }
      goto L_0891BBB8;
    }
L_0891BBB8:
    ctx.gpr[31] = (0x0891BBC0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0891B87C;
L_0891BBC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891BB9C;
      }
      goto L_0891BBD4;
    }
L_0891BBD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0891BC14;
      }
      goto L_0891BBE8;
    }
L_0891BBE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5)));
    ctx.gpr[6] = (ctx.gpr[6] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0891BBE8;
      }
      goto L_0891BC14;
    }
L_0891BC14:
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
L_0891BC30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891BCBC;
      }
      goto L_0891BC60;
    }
L_0891BC60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(7)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0891BCB4;
      }
      goto L_0891BC74;
    }
L_0891BC74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BCA0;
      }
      goto L_0891BC84;
    }
L_0891BC84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 17u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891BCA0;
      }
      goto L_0891BC98;
    }
L_0891BC98:
    ctx.gpr[31] = (0x0891BCA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891B87C;
L_0891BCA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(7)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0891BC74;
      }
      goto L_0891BCB4;
    }
L_0891BCB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BD60;
      }
      goto L_0891BCBC;
    }
L_0891BCBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 17u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891BCD8;
      }
      goto L_0891BCD0;
    }
L_0891BCD0:
    ctx.gpr[31] = (0x0891BCD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891B87C;
L_0891BCD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 17u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891BCF4;
      }
      goto L_0891BCEC;
    }
L_0891BCEC:
    ctx.gpr[31] = (0x0891BCF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891B87C;
L_0891BCF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(7)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_0891BD60;
      }
      goto L_0891BD08;
    }
L_0891BD08:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    goto L_0891BD0C;
L_0891BD0C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BD4C;
      }
      goto L_0891BD1C;
    }
L_0891BD1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BD48;
      }
      goto L_0891BD2C;
    }
L_0891BD2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 17u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891BD48;
      }
      goto L_0891BD40;
    }
L_0891BD40:
    ctx.gpr[31] = (0x0891BD48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891B87C;
L_0891BD48:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_0891BD4C;
L_0891BD4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(7)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891BD0C;
      }
      goto L_0891BD60;
    }
L_0891BD60:
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
L_0891BD84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[8] = (0u | 24u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 16u);
      if (branch_taken) {
          goto L_0891BDE8;
      }
      goto L_0891BDB8;
    }
L_0891BDB8:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_0891BDEC;
    }
    goto L_0891BDC4;
L_0891BDC4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x0891BDE0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 269u, 0x088B9708u>(ctx, &aot_mem) && ctx.pc == 0x0891BDE0u) goto L_0891BDE0;
    return;
L_0891BDE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_0891BDE8;
L_0891BDE8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_0891BDEC;
L_0891BDEC:
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[6] >> 29u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 3u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 90u);
      if (branch_taken) {
          goto L_0891BE34;
      }
      goto L_0891BE14;
    }
L_0891BE14:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BE34;
      }
      goto L_0891BE20;
    }
L_0891BE20:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x0891BE34u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 266u, 0x088B9698u>(ctx, &aot_mem) && ctx.pc == 0x0891BE34u) goto L_0891BE34;
    return;
L_0891BE34:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891BE40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891BE88;
      }
      goto L_0891BE6C;
    }
L_0891BE6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 17u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891BE88;
      }
      goto L_0891BE80;
    }
L_0891BE80:
    ctx.gpr[31] = (0x0891BE88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891B87C;
L_0891BE88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0891BEC8;
      }
      goto L_0891BEA4;
    }
L_0891BEA4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[18] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BEB8;
      }
      goto L_0891BEB4;
    }
L_0891BEB4:
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    goto L_0891BEB8;
L_0891BEB8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BEA4;
      }
      goto L_0891BEC8;
    }
L_0891BEC8:
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BF14;
      }
      goto L_0891BED4;
    }
L_0891BED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BF00;
      }
      goto L_0891BEE4;
    }
L_0891BEE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 17u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891BF00;
      }
      goto L_0891BEF8;
    }
L_0891BEF8:
    ctx.gpr[31] = (0x0891BF00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891B87C;
L_0891BF00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BED4;
      }
      goto L_0891BF14;
    }
L_0891BF14:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BF34;
      }
      goto L_0891BF20;
    }
L_0891BF20:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BF20;
      }
      goto L_0891BF34;
    }
L_0891BF34:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891BF40u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_0891BD84;
L_0891BF40:
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
L_0891BF5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 3u, 0x0891C014u>(ctx, &aot_mem); return;
      }
      goto L_0891BF74;
    }
L_0891BF74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_0891BFF4;
      }
      goto L_0891BF88;
    }
L_0891BF88:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_0891BFD8;
      }
      goto L_0891BF90;
    }
L_0891BF90:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_0891BFBC;
      }
      goto L_0891BF98;
    }
L_0891BF98:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 2u, 0x0891C008u>(ctx, &aot_mem); return;
      }
      goto L_0891BFA0;
    }
L_0891BFA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0891BFB4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 117u, 0x0891C8E8u>(ctx, &aot_mem) && ctx.pc == 0x0891BFB4u) goto L_0891BFB4;
    return;
L_0891BFB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 2u, 0x0891C008u>(ctx, &aot_mem); return;
      }
      goto L_0891BFBC;
    }
L_0891BFBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0891BFD0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_0891BC30;
L_0891BFD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 2u, 0x0891C008u>(ctx, &aot_mem); return;
      }
      goto L_0891BFD8;
    }
L_0891BFD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x0891BFECu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_0891BE40;
L_0891BFEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 2u, 0x0891C008u>(ctx, &aot_mem); return;
      }
      goto L_0891BFF4;
    }
L_0891BFF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    ctx.pc = 0x0891C000u; return;
}

void recomp_unit_0069(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0069_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_69(Runtime &runtime) {
    runtime.register_generated_unit(69u, 0x08918000u, 16384u, &recomp_unit_0069, &recomp_unit_0069_entry);
    runtime.register_function(0x08918000u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891803Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918044u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918050u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918074u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918088u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891810Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918120u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918128u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891813Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918144u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918150u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918158u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918164u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891816Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918174u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891817Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918184u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918190u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918198u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089181A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089181C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089181E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918200u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918214u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918224u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891822Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918234u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918244u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918258u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918288u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918304u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918308u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918310u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918318u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891832Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918338u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918344u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918350u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891835Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891836Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918374u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918398u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891839Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089183DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089183ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918400u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918408u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918418u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918440u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918454u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918474u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918488u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918494u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089184A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089184ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089184B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089184DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089184E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918504u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918514u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891851Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918524u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891852Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918534u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918548u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891855Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891856Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891857Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918590u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089185ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089185D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089185DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089185E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891860Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918614u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891862Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918638u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918640u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918650u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918660u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891867Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918698u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918704u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918708u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918710u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891871Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918724u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891873Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918750u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918758u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918760u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918768u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918774u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891877Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918794u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918800u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918808u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918810u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918828u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918830u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918840u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918848u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918850u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918858u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918860u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918880u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891888Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918894u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188B0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918900u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918924u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891892Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918934u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891893Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918948u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918950u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918958u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918960u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918968u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918974u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918990u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089189CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089189D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089189DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089189E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089189ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089189F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089189FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A04u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A1Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A24u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A2Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A50u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A5Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A68u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A7Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A94u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918AACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918AB4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918ABCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918ACCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B14u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B1Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B28u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B3Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B44u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B54u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B6Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B74u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B7Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B8Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918BD4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918BE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C00u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C10u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C28u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C44u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C58u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C80u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C90u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918CA4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918CB8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918CC0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918CE0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918CE8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918CF0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918CFCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D2Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D44u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D4Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D54u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D60u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D6Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D78u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D80u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D88u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D98u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918DACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918DB4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918DC4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918DE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918DECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E04u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E0Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E1Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E28u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E3Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E40u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E48u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E58u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E6Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E74u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E9Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918EA4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918EACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918EF8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F04u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F24u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F2Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F58u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918FECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919010u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891901Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891902Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919038u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919040u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919048u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919058u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919064u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919070u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919078u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891907Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891908Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919098u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190B0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919108u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891911Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919128u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919134u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919148u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919154u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919164u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919170u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891918Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089191B0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089191BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089191CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089191D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089191E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089191F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919204u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919218u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891922Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919238u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919240u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919244u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891924Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919254u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919260u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891926Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919278u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919280u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891928Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919294u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089192A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089192B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089192C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089192CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089192D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089192E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089192E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089192FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919318u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919320u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919330u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919344u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919358u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919364u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919378u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891938Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919398u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919404u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919410u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891941Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891942Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891943Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919448u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919478u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919484u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919494u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089194A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089194B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089194C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089194DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089194F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089194FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919504u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891950Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919514u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891951Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919528u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919534u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919540u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919550u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919558u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919564u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919574u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919580u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891958Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919594u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919604u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891960Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891961Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891962Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919634u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919638u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919644u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919650u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919658u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919660u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919668u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919670u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919678u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919680u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919688u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919690u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891969Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919708u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919710u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919718u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919724u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919730u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919738u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919740u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919750u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891975Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919764u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919774u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919780u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919788u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919798u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089197A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089197B0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089197C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089197C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089197DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089197E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089197F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089197F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919800u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919814u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919820u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891982Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919830u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919854u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919880u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089198A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089198D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089198FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919904u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919914u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919918u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919934u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919948u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891997Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891999Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089199CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089199D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A20u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A30u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A40u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A48u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A4Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A5Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A78u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A94u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919AB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919AB8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919AC0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919AD4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919AE0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919AE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919AECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919AF4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B30u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B48u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B5Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B88u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B94u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919BC8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919BD4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919BF8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C18u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C24u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C44u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C58u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C60u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919CD8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919CECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D00u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D1Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D48u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D60u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D98u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919DECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919DF8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E04u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E10u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E24u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E30u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E44u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E5Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919EA4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919EB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F00u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F0Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F1Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F2Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F3Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F64u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F6Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F78u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F80u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F8Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F98u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919FB8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919FECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919FF4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A000u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A008u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A014u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A03Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A070u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A07Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A088u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A094u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A09Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A0A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A0B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A0C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A100u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A128u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A130u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A148u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A14Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A15Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A164u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A170u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A198u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A1ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A1C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A1D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A238u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A240u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A26Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A27Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A288u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A2C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A2DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A30Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A34Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A364u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A36Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A378u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A384u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A390u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A398u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A40Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A410u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A420u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A424u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A42Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A440u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A448u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A44Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A46Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A4BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A568u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A574u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A580u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A58Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A5B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A5C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A5F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A60Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A638u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A654u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A660u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A674u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A680u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A690u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A698u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A6B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A6C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A6C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A6DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A6ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A6F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A700u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A708u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A714u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A72Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A758u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A77Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A788u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A798u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A7B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A7BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A7C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A7E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A808u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A81Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A828u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A85Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A874u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A884u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A88Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A904u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A910u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A918u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A924u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A92Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A938u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A93Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A940u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A98Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A99Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A9BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A9C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA04u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA10u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA28u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA30u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA3Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA58u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA60u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA70u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA80u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA98u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AAA8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AAB8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AAC8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AAE8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AAF0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB00u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB1Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB54u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB5Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB94u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB9Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ABACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ABB4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ABD0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ABDCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ABE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ABFCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC04u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC0Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC2Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC48u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC54u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC60u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC68u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC6Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC70u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC80u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC90u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ACA0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ACE8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ACF0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ACF8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD00u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD20u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD3Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD48u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD54u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD5Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD60u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD64u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD74u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD94u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ADDCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ADE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ADECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ADF4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AE14u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AE30u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AE3Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AE48u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AE50u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AE54u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AE58u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AE68u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AE78u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AE88u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AED0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AED8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AEE0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AEE8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF24u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF30u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF3Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF44u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF48u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF4Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF5Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF6Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF7Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AFC4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AFCCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AFD4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AFF4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AFFCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B014u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B024u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B034u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B03Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B040u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B04Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B05Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B068u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B07Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B088u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B0B0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B1F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B220u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B228u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B24Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B2B0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B2BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B2D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B2DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B2ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B2F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B2F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B304u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B314u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B320u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B328u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B338u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B344u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B34Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B368u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B374u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B390u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B398u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B3ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B3F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B44Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B458u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B46Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B480u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B4A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B4E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B4ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B4F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B510u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B51Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B528u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B540u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B550u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B564u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B574u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B580u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B598u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B5A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B5BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B5CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B5D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B5ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B600u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B61Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B628u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B630u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B640u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B654u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B678u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B690u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B694u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B6A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B6C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B6F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B714u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B71Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B734u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B73Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B75Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B764u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B768u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B770u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B780u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B78Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B864u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B870u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B87Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B908u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B918u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B924u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B930u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B950u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B968u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B974u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B988u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B9C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B9D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B9E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B9F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA18u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA1Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA24u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA3Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA60u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA6Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA70u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BAA8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BAB8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BAC0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BAC8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB10u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB24u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB48u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB5Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB88u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB9Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BBB8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BBC0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BBD4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BBE8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC14u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC30u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC60u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC74u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC98u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BCA0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BCB4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BCBCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BCD0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BCD8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BCECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BCF4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD0Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD1Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD2Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD40u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD48u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD4Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD60u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BDB8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BDC4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BDE0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BDE8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BDECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE14u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE20u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE40u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE6Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE80u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE88u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BEA4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BEB4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BEB8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BEC8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BED4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BEE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BEF8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF00u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF14u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF20u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF40u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF5Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF74u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF88u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF90u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF98u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BFA0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BFB4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BFBCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BFD0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BFD8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BFECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BFF4u, &recomp_unit_0069, "recomp_unit_0069");
}
} // namespace psprecomp
