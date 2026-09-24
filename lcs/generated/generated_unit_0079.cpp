#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0079[4089] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0,
    0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17,
    0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0,
    0, 0, 25, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0,
    0, 0, 0, 32, 0, 0, 33, 0, 34, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0,
    44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 50, 51, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 58, 0, 59,
    0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0,
    0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 76, 0, 77,
    0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0,
    84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 102, 0, 103, 0, 0, 0, 0, 104, 0, 0, 105, 0, 106, 0,
    107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0,
    0, 118, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0,
    124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 127, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 131, 0, 132, 0, 133, 0,
    134, 0, 0, 135, 0, 0, 136, 0, 137, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 142, 0, 0, 143, 0,
    0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149,
    0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 153, 0, 154, 0, 0, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161,
    0, 162, 0, 163, 0, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 169, 0, 170, 0, 171, 0, 0, 0, 172, 0, 173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 0, 0, 180,
    0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0,
    187, 0, 0, 188, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 193, 0, 194, 0, 195, 0, 0, 0, 196, 0, 197, 0, 198, 0, 199, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0, 0, 205, 0, 0, 0,
    206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 0, 216, 0,
    0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 225,
    0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0,
    232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0,
    238, 0, 0, 0, 239, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 244, 0, 245, 0, 246, 0, 247, 0, 248,
    0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0,
    0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 260, 261, 0, 0, 262, 0, 0, 0, 263, 0, 0,
    0, 0, 264, 0, 0, 0, 265, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 270, 0, 271, 0, 0, 272, 0, 0,
    0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0,
    279, 0, 0, 0, 280, 0, 281, 0, 282, 0, 283, 0, 284, 0, 285, 0, 286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0,
    0, 0, 293, 0, 294, 0, 0, 0, 295, 0, 296, 0, 0, 297, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0,
    0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 305, 0, 306, 0, 307, 0, 308, 0, 0, 309, 0, 0, 310, 0, 311,
    0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 315, 0, 316, 0, 0, 317, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0,
    0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 324, 0, 0, 0, 325, 0, 326, 0, 327,
    0, 328, 0, 329, 0, 330, 0, 331, 0, 0, 332, 0, 0, 0, 333, 0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 0, 339, 0, 0, 0, 0, 0,
    340, 0, 341, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0,
    0, 0, 347, 0, 0, 348, 0, 0, 0, 349, 0, 350, 0, 351, 0, 0, 352, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0,
    355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362,
    0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 365, 0, 366, 0, 367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0,
    0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0,
    378, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0,
    0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0,
    0, 0, 392, 0, 393, 0, 394, 0, 395, 0, 396, 0, 397, 0, 398, 0, 399, 0, 400, 0, 401, 0, 402, 0, 403, 0, 404, 0, 405, 0, 406, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0,
    0, 0, 0, 0, 0, 0, 411, 0, 412, 0, 413, 0, 414, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0,
    419, 0, 0, 0, 0, 0, 420, 0, 0, 421, 0, 422, 0, 423, 0, 424, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428,
    0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0,
    0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    441, 0, 0, 0, 0, 442, 0, 0, 443, 0, 0, 444, 0, 0, 445, 0, 0, 446, 0, 0, 447, 0, 0, 448, 0, 0, 449, 0, 0, 450, 0, 0,
    451, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0, 455, 0, 0, 456, 0, 0, 457, 0, 0, 458, 0, 0, 459, 0, 0, 460, 0, 0, 461, 0,
    0, 462, 0, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 466, 0, 0, 467, 0, 0, 468, 0, 0, 469, 0, 0, 470, 0, 0, 471, 0, 0, 472,
    0, 0, 473, 0, 0, 474, 0, 0, 475, 0, 0, 476, 0, 0, 477, 0, 0, 478, 0, 0, 479, 0, 0, 480, 0, 0, 481, 0, 0, 482, 0, 483,
    0, 484, 0, 485, 0, 486, 0, 487, 0, 488, 0, 489, 0, 490, 0, 491, 0, 492, 0, 493, 0, 494, 0, 495, 0, 496, 0, 497, 0, 498, 0, 499,
    0, 500, 0, 501, 0, 502, 0, 503, 0, 504, 0, 505, 0, 506, 0, 507, 0, 508, 0, 509, 0, 510, 0, 511, 0, 512, 0, 513, 0, 514, 0, 515,
    0, 516, 0, 517, 0, 518, 0, 519, 0, 520, 0, 521, 0, 522, 0, 523, 524, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 527, 0,
    528, 0, 0, 529, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 532, 0, 0, 533, 0, 0, 0,
    534, 535, 0, 536, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 540, 0, 0, 541, 0,
    0, 0, 542, 543, 0, 544, 0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 551, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 553, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0,
    0, 0, 556, 0, 557, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 560, 0, 0, 561, 0, 0,
    0, 0, 562, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 567, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    569, 0, 0, 0, 570, 0, 0, 571, 0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 580, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 586, 0, 0, 587,
    0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 593,
    0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 595, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 599, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 601, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 0, 607, 0, 608, 0,
    609, 0, 610, 0, 0, 0, 0, 611, 0, 612, 613, 0, 614, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 617, 0, 618, 0, 0,
    0, 619, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 0,
    623, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 627, 0, 0, 0, 0, 0, 0,
    628, 0, 0, 0, 0, 629, 0, 0, 630, 0, 631, 0, 0, 632, 0, 0, 0, 0, 0, 0, 633, 634, 0, 0, 635, 0, 0, 636, 0, 637, 0, 0,
    0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 640, 0, 641, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 651, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 653, 0, 0, 654, 0, 0, 655, 0, 0, 0, 0, 0, 0, 656,
    0, 657, 0, 658, 0, 0, 0, 659, 0, 660, 0, 661, 0, 662, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0,
    0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 668, 0, 669, 0, 670, 0, 671, 0, 0, 0, 672, 0,
    0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 674, 0, 675, 0, 0, 0, 676, 0, 677, 0, 678, 0, 0, 0, 679, 0, 0, 0, 0, 0,
    680, 0, 681, 0, 682, 0, 683, 0, 684, 0, 685, 0, 0, 0, 686, 0, 0, 687, 0, 688, 0, 689, 690, 0, 691, 0, 0, 0, 0, 0, 0, 692,
    0, 0, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 695, 0, 0, 696, 0, 0, 0, 697, 0, 0, 0, 698, 0, 699, 0, 700, 0, 701, 0, 702,
    0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 705, 0, 706, 0, 707, 0, 0, 0, 708, 0, 709, 0, 710, 0, 0,
    711, 0, 0, 712, 0, 0, 0, 713, 0, 0, 714, 0, 715, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0,
    0, 718, 0, 719, 0, 0, 0, 720, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    723, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0,
    728, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 735, 736, 0, 737, 0, 738, 0, 0, 0, 0,
    739, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 742, 0, 743, 0, 744, 0, 0, 745, 0, 0, 746, 0, 0, 0,
    747, 0, 0, 748, 0, 749, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 753, 0, 0, 0, 754, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 756, 0,
    757, 0, 0, 0, 758, 0, 759, 0, 760, 0, 0, 0, 761, 0, 0, 762, 0, 0, 0, 763, 0, 764, 0, 765, 0, 0, 766, 0, 767, 0, 768, 0,
    769, 0, 770, 0, 0, 0, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0,
    0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 777, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 780, 0,
    0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 0, 0, 0, 784,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 0, 0, 0, 0, 787, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 790, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 793, 794, 0, 795, 796, 0, 0, 0, 797, 0, 0, 0,
    798, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 800, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 802, 0, 803, 0, 0, 0, 0, 804, 0, 0,
    0, 0, 0, 805, 0, 0, 0, 0, 806, 0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 809, 0,
    810, 0, 0, 0, 811, 0, 812, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 814, 0, 815, 0, 816, 0, 817, 0, 0, 0, 818, 0, 819,
    0, 0, 820, 0, 0, 0, 0, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0,
    823, 0, 0, 0, 824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 825,
    0, 0, 0, 0, 0, 0, 0, 0, 826, 0, 827, 0, 0, 0, 828, 0, 829, 830, 0, 0, 831, 0, 832, 0, 0, 833, 0, 834, 0, 835, 0, 0,
    0, 836, 0, 0, 837, 0, 838, 0, 0, 839, 840, 0, 0, 0, 0, 0, 0, 0, 0, 841, 0, 0, 0, 0, 842, 0, 843, 0, 844, 0, 0, 845,
    0, 846, 0, 0, 0, 847, 0, 848, 0, 0, 0, 0, 0, 849, 0, 0, 0, 850, 0, 851, 0, 0, 0, 0, 852,
};
void recomp_unit_0079_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08940000u;
        entry_id = (entry_delta < 16356u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0079[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08940000;
    case 2u: goto L_08940014;
    case 3u: goto L_0894002C;
    case 4u: goto L_08940034;
    case 5u: goto L_0894003C;
    case 6u: goto L_08940048;
    case 7u: goto L_08940058;
    case 8u: goto L_08940064;
    case 9u: goto L_08940088;
    case 10u: goto L_0894009C;
    case 11u: goto L_089400C8;
    case 12u: goto L_089400D0;
    case 13u: goto L_089400D8;
    case 14u: goto L_089400EC;
    case 15u: goto L_08940104;
    case 16u: goto L_08940164;
    case 17u: goto L_0894017C;
    case 18u: goto L_08940184;
    case 19u: goto L_089401A8;
    case 20u: goto L_089401B0;
    case 21u: goto L_089401BC;
    case 22u: goto L_089401CC;
    case 23u: goto L_089401DC;
    case 24u: goto L_089401E4;
    case 25u: goto L_08940208;
    case 26u: goto L_0894020C;
    case 27u: goto L_08940234;
    case 28u: goto L_0894023C;
    case 29u: goto L_08940248;
    case 30u: goto L_08940264;
    case 31u: goto L_08940270;
    case 32u: goto L_0894028C;
    case 33u: goto L_08940298;
    case 34u: goto L_089402A0;
    case 35u: goto L_089402A8;
    case 36u: goto L_089402B4;
    case 37u: goto L_089402E4;
    case 38u: goto L_08940300;
    case 39u: goto L_08940354;
    case 40u: goto L_089403A8;
    case 41u: goto L_089403C0;
    case 42u: goto L_089403D0;
    case 43u: goto L_089403F4;
    case 44u: goto L_08940400;
    case 45u: goto L_08940440;
    case 46u: goto L_0894044C;
    case 47u: goto L_089404A4;
    case 48u: goto L_089404B0;
    case 49u: goto L_089404BC;
    case 50u: goto L_089404C4;
    case 51u: goto L_089404C8;
    case 52u: goto L_089404D4;
    case 53u: goto L_089404E4;
    case 54u: goto L_08940510;
    case 55u: goto L_08940518;
    case 56u: goto L_08940564;
    case 57u: goto L_0894056C;
    case 58u: goto L_08940574;
    case 59u: goto L_0894057C;
    case 60u: goto L_08940584;
    case 61u: goto L_0894059C;
    case 62u: goto L_089405AC;
    case 63u: goto L_089405B8;
    case 64u: goto L_089405C0;
    case 65u: goto L_089405E8;
    case 66u: goto L_0894060C;
    case 67u: goto L_08940614;
    case 68u: goto L_08940650;
    case 69u: goto L_0894066C;
    case 70u: goto L_08940694;
    case 71u: goto L_0894069C;
    case 72u: goto L_089406B4;
    case 73u: goto L_089406BC;
    case 74u: goto L_089406D4;
    case 75u: goto L_089406DC;
    case 76u: goto L_089406F4;
    case 77u: goto L_089406FC;
    case 78u: goto L_08940714;
    case 79u: goto L_0894071C;
    case 80u: goto L_08940734;
    case 81u: goto L_0894073C;
    case 82u: goto L_08940760;
    case 83u: goto L_08940768;
    case 84u: goto L_08940780;
    case 85u: goto L_08940788;
    case 86u: goto L_089407A8;
    case 87u: goto L_089407B0;
    case 88u: goto L_089407C0;
    case 89u: goto L_089407C8;
    case 90u: goto L_089407D0;
    case 91u: goto L_089407D8;
    case 92u: goto L_089407E0;
    case 93u: goto L_089407E8;
    case 94u: goto L_089407F0;
    case 95u: goto L_089407F8;
    case 96u: goto L_08940820;
    case 97u: goto L_08940844;
    case 98u: goto L_08940864;
    case 99u: goto L_0894089C;
    case 100u: goto L_089408A8;
    case 101u: goto L_089408BC;
    case 102u: goto L_089408C8;
    case 103u: goto L_089408D0;
    case 104u: goto L_089408E4;
    case 105u: goto L_089408F0;
    case 106u: goto L_089408F8;
    case 107u: goto L_08940900;
    case 108u: goto L_08940908;
    case 109u: goto L_08940910;
    case 110u: goto L_08940918;
    case 111u: goto L_08940920;
    case 112u: goto L_08940928;
    case 113u: goto L_08940938;
    case 114u: goto L_08940954;
    case 115u: goto L_0894095C;
    case 116u: goto L_08940968;
    case 117u: goto L_08940974;
    case 118u: goto L_08940984;
    case 119u: goto L_08940994;
    case 120u: goto L_089409A0;
    case 121u: goto L_089409C0;
    case 122u: goto L_089409D4;
    case 123u: goto L_089409F4;
    case 124u: goto L_08940A00;
    case 125u: goto L_08940A0C;
    case 126u: goto L_08940A2C;
    case 127u: goto L_08940A30;
    case 128u: goto L_08940A38;
    case 129u: goto L_08940A4C;
    case 130u: goto L_08940A64;
    case 131u: goto L_08940A68;
    case 132u: goto L_08940A70;
    case 133u: goto L_08940A78;
    case 134u: goto L_08940A80;
    case 135u: goto L_08940A8C;
    case 136u: goto L_08940A98;
    case 137u: goto L_08940AA0;
    case 138u: goto L_08940AAC;
    case 139u: goto L_08940AC0;
    case 140u: goto L_08940ADC;
    case 141u: goto L_08940AE4;
    case 142u: goto L_08940AEC;
    case 143u: goto L_08940AF8;
    case 144u: goto L_08940B08;
    case 145u: goto L_08940B14;
    case 146u: goto L_08940B38;
    case 147u: goto L_08940B4C;
    case 148u: goto L_08940B74;
    case 149u: goto L_08940B7C;
    case 150u: goto L_08940B84;
    case 151u: goto L_08940B94;
    case 152u: goto L_08940BAC;
    case 153u: goto L_08940BB4;
    case 154u: goto L_08940BBC;
    case 155u: goto L_08940BCC;
    case 156u: goto L_08940BD4;
    case 157u: goto L_08940BDC;
    case 158u: goto L_08940BE4;
    case 159u: goto L_08940BEC;
    case 160u: goto L_08940BF4;
    case 161u: goto L_08940BFC;
    case 162u: goto L_08940C04;
    case 163u: goto L_08940C0C;
    case 164u: goto L_08940C18;
    case 165u: goto L_08940C28;
    case 166u: goto L_08940C34;
    case 167u: goto L_08940C58;
    case 168u: goto L_08940C6C;
    case 169u: goto L_08940C94;
    case 170u: goto L_08940C9C;
    case 171u: goto L_08940CA4;
    case 172u: goto L_08940CB4;
    case 173u: goto L_08940CBC;
    case 174u: goto L_08940CC4;
    case 175u: goto L_08940CCC;
    case 176u: goto L_08940CD4;
    case 177u: goto L_08940CDC;
    case 178u: goto L_08940CE4;
    case 179u: goto L_08940CEC;
    case 180u: goto L_08940CFC;
    case 181u: goto L_08940D0C;
    case 182u: goto L_08940D18;
    case 183u: goto L_08940D38;
    case 184u: goto L_08940D4C;
    case 185u: goto L_08940D70;
    case 186u: goto L_08940D78;
    case 187u: goto L_08940D80;
    case 188u: goto L_08940D8C;
    case 189u: goto L_08940D9C;
    case 190u: goto L_08940DA8;
    case 191u: goto L_08940DCC;
    case 192u: goto L_08940DE0;
    case 193u: goto L_08940E08;
    case 194u: goto L_08940E10;
    case 195u: goto L_08940E18;
    case 196u: goto L_08940E28;
    case 197u: goto L_08940E30;
    case 198u: goto L_08940E38;
    case 199u: goto L_08940E40;
    case 200u: goto L_08940E44;
    case 201u: goto L_08940E4C;
    case 202u: goto L_08940E54;
    case 203u: goto L_08940E5C;
    case 204u: goto L_08940E64;
    case 205u: goto L_08940E70;
    case 206u: goto L_08940E80;
    case 207u: goto L_08940E9C;
    case 208u: goto L_08940EB4;
    case 209u: goto L_08940EBC;
    case 210u: goto L_08940EC4;
    case 211u: goto L_08940ECC;
    case 212u: goto L_08940ED4;
    case 213u: goto L_08940EDC;
    case 214u: goto L_08940EE4;
    case 215u: goto L_08940EEC;
    case 216u: goto L_08940EF8;
    case 217u: goto L_08940F04;
    case 218u: goto L_08940F10;
    case 219u: goto L_08940F1C;
    case 220u: goto L_08940F38;
    case 221u: goto L_08940F48;
    case 222u: goto L_08940F50;
    case 223u: goto L_08940F60;
    case 224u: goto L_08940F70;
    case 225u: goto L_08940F7C;
    case 226u: goto L_08940F9C;
    case 227u: goto L_08940FA8;
    case 228u: goto L_08940FB0;
    case 229u: goto L_08940FBC;
    case 230u: goto L_08940FD4;
    case 231u: goto L_08940FF4;
    case 232u: goto L_08941000;
    case 233u: goto L_0894102C;
    case 234u: goto L_08941034;
    case 235u: goto L_0894103C;
    case 236u: goto L_0894106C;
    case 237u: goto L_08941074;
    case 238u: goto L_08941080;
    case 239u: goto L_08941090;
    case 240u: goto L_08941098;
    case 241u: goto L_089410A4;
    case 242u: goto L_089410C0;
    case 243u: goto L_089410D4;
    case 244u: goto L_089410DC;
    case 245u: goto L_089410E4;
    case 246u: goto L_089410EC;
    case 247u: goto L_089410F4;
    case 248u: goto L_089410FC;
    case 249u: goto L_08941108;
    case 250u: goto L_08941114;
    case 251u: goto L_08941120;
    case 252u: goto L_08941130;
    case 253u: goto L_0894114C;
    case 254u: goto L_08941160;
    case 255u: goto L_08941184;
    case 256u: goto L_089411A4;
    case 257u: goto L_089411B4;
    case 258u: goto L_089411C0;
    case 259u: goto L_089411CC;
    case 260u: goto L_089411D4;
    case 261u: goto L_089411D8;
    case 262u: goto L_089411E4;
    case 263u: goto L_089411F4;
    case 264u: goto L_08941208;
    case 265u: goto L_08941218;
    case 266u: goto L_08941220;
    case 267u: goto L_08941228;
    case 268u: goto L_08941250;
    case 269u: goto L_08941258;
    case 270u: goto L_08941260;
    case 271u: goto L_08941268;
    case 272u: goto L_08941274;
    case 273u: goto L_08941284;
    case 274u: goto L_08941290;
    case 275u: goto L_089412B4;
    case 276u: goto L_089412C8;
    case 277u: goto L_089412F0;
    case 278u: goto L_089412F8;
    case 279u: goto L_08941300;
    case 280u: goto L_08941310;
    case 281u: goto L_08941318;
    case 282u: goto L_08941320;
    case 283u: goto L_08941328;
    case 284u: goto L_08941330;
    case 285u: goto L_08941338;
    case 286u: goto L_08941340;
    case 287u: goto L_08941348;
    case 288u: goto L_08941370;
    case 289u: goto L_08941394;
    case 290u: goto L_089413B4;
    case 291u: goto L_089413EC;
    case 292u: goto L_089413F8;
    case 293u: goto L_08941408;
    case 294u: goto L_08941410;
    case 295u: goto L_08941420;
    case 296u: goto L_08941428;
    case 297u: goto L_08941434;
    case 298u: goto L_08941440;
    case 299u: goto L_08941450;
    case 300u: goto L_08941460;
    case 301u: goto L_0894146C;
    case 302u: goto L_0894148C;
    case 303u: goto L_089414A0;
    case 304u: goto L_089414C0;
    case 305u: goto L_089414C4;
    case 306u: goto L_089414CC;
    case 307u: goto L_089414D4;
    case 308u: goto L_089414DC;
    case 309u: goto L_089414E8;
    case 310u: goto L_089414F4;
    case 311u: goto L_089414FC;
    case 312u: goto L_08941508;
    case 313u: goto L_0894151C;
    case 314u: goto L_08941534;
    case 315u: goto L_0894153C;
    case 316u: goto L_08941544;
    case 317u: goto L_08941550;
    case 318u: goto L_08941560;
    case 319u: goto L_0894156C;
    case 320u: goto L_08941590;
    case 321u: goto L_089415A4;
    case 322u: goto L_089415CC;
    case 323u: goto L_089415D4;
    case 324u: goto L_089415DC;
    case 325u: goto L_089415EC;
    case 326u: goto L_089415F4;
    case 327u: goto L_089415FC;
    case 328u: goto L_08941604;
    case 329u: goto L_0894160C;
    case 330u: goto L_08941614;
    case 331u: goto L_0894161C;
    case 332u: goto L_08941628;
    case 333u: goto L_08941638;
    case 334u: goto L_08941640;
    case 335u: goto L_08941648;
    case 336u: goto L_08941650;
    case 337u: goto L_08941658;
    case 338u: goto L_08941660;
    case 339u: goto L_08941668;
    case 340u: goto L_08941680;
    case 341u: goto L_08941688;
    case 342u: goto L_08941698;
    case 343u: goto L_089416A8;
    case 344u: goto L_089416B4;
    case 345u: goto L_089416D4;
    case 346u: goto L_089416E8;
    case 347u: goto L_08941708;
    case 348u: goto L_08941714;
    case 349u: goto L_08941724;
    case 350u: goto L_0894172C;
    case 351u: goto L_08941734;
    case 352u: goto L_08941740;
    case 353u: goto L_08941750;
    case 354u: goto L_0894175C;
    case 355u: goto L_08941780;
    case 356u: goto L_08941794;
    case 357u: goto L_089417BC;
    case 358u: goto L_089417C4;
    case 359u: goto L_08941800;
    case 360u: goto L_089418B8;
    case 361u: goto L_089418DC;
    case 362u: goto L_089418FC;
    case 363u: goto L_0894191C;
    case 364u: goto L_0894192C;
    case 365u: goto L_08941934;
    case 366u: goto L_0894193C;
    case 367u: goto L_08941944;
    case 368u: goto L_08941954;
    case 369u: goto L_08941964;
    case 370u: goto L_08941974;
    case 371u: goto L_08941984;
    case 372u: goto L_089419A0;
    case 373u: goto L_089419B0;
    case 374u: goto L_089419C0;
    case 375u: goto L_089419D0;
    case 376u: goto L_089419E4;
    case 377u: goto L_089419F4;
    case 378u: goto L_08941A00;
    case 379u: goto L_08941A08;
    case 380u: goto L_08941A20;
    case 381u: goto L_08941A30;
    case 382u: goto L_08941AA0;
    case 383u: goto L_08941AC8;
    case 384u: goto L_08941AD4;
    case 385u: goto L_08941AEC;
    case 386u: goto L_08941AF4;
    case 387u: goto L_08941B08;
    case 388u: goto L_08941B14;
    case 389u: goto L_08941B28;
    case 390u: goto L_08941B5C;
    case 391u: goto L_08941B70;
    case 392u: goto L_08941B88;
    case 393u: goto L_08941B90;
    case 394u: goto L_08941B98;
    case 395u: goto L_08941BA0;
    case 396u: goto L_08941BA8;
    case 397u: goto L_08941BB0;
    case 398u: goto L_08941BB8;
    case 399u: goto L_08941BC0;
    case 400u: goto L_08941BC8;
    case 401u: goto L_08941BD0;
    case 402u: goto L_08941BD8;
    case 403u: goto L_08941BE0;
    case 404u: goto L_08941BE8;
    case 405u: goto L_08941BF0;
    case 406u: goto L_08941BF8;
    case 407u: goto L_08941C3C;
    case 408u: goto L_08941C4C;
    case 409u: goto L_08941C70;
    case 410u: goto L_08941C78;
    case 411u: goto L_08941C98;
    case 412u: goto L_08941CA0;
    case 413u: goto L_08941CA8;
    case 414u: goto L_08941CB0;
    case 415u: goto L_08941CBC;
    case 416u: goto L_08941CD0;
    case 417u: goto L_08941CE8;
    case 418u: goto L_08941CF0;
    case 419u: goto L_08941D00;
    case 420u: goto L_08941D18;
    case 421u: goto L_08941D24;
    case 422u: goto L_08941D2C;
    case 423u: goto L_08941D34;
    case 424u: goto L_08941D3C;
    case 425u: goto L_08941D40;
    case 426u: goto L_08941D54;
    case 427u: goto L_08941D74;
    case 428u: goto L_08941DFC;
    case 429u: goto L_08941E10;
    case 430u: goto L_08941E24;
    case 431u: goto L_08941E3C;
    case 432u: goto L_08941E50;
    case 433u: goto L_08941E60;
    case 434u: goto L_08941E78;
    case 435u: goto L_08941E8C;
    case 436u: goto L_08941EA0;
    case 437u: goto L_08941EB8;
    case 438u: goto L_08941ECC;
    case 439u: goto L_08941EDC;
    case 440u: goto L_08941FC4;
    case 441u: goto L_08942000;
    case 442u: goto L_08942014;
    case 443u: goto L_08942020;
    case 444u: goto L_0894202C;
    case 445u: goto L_08942038;
    case 446u: goto L_08942044;
    case 447u: goto L_08942050;
    case 448u: goto L_0894205C;
    case 449u: goto L_08942068;
    case 450u: goto L_08942074;
    case 451u: goto L_08942080;
    case 452u: goto L_0894208C;
    case 453u: goto L_08942098;
    case 454u: goto L_089420A4;
    case 455u: goto L_089420B0;
    case 456u: goto L_089420BC;
    case 457u: goto L_089420C8;
    case 458u: goto L_089420D4;
    case 459u: goto L_089420E0;
    case 460u: goto L_089420EC;
    case 461u: goto L_089420F8;
    case 462u: goto L_08942104;
    case 463u: goto L_08942110;
    case 464u: goto L_0894211C;
    case 465u: goto L_08942128;
    case 466u: goto L_08942134;
    case 467u: goto L_08942140;
    case 468u: goto L_0894214C;
    case 469u: goto L_08942158;
    case 470u: goto L_08942164;
    case 471u: goto L_08942170;
    case 472u: goto L_0894217C;
    case 473u: goto L_08942188;
    case 474u: goto L_08942194;
    case 475u: goto L_089421A0;
    case 476u: goto L_089421AC;
    case 477u: goto L_089421B8;
    case 478u: goto L_089421C4;
    case 479u: goto L_089421D0;
    case 480u: goto L_089421DC;
    case 481u: goto L_089421E8;
    case 482u: goto L_089421F4;
    case 483u: goto L_089421FC;
    case 484u: goto L_08942204;
    case 485u: goto L_0894220C;
    case 486u: goto L_08942214;
    case 487u: goto L_0894221C;
    case 488u: goto L_08942224;
    case 489u: goto L_0894222C;
    case 490u: goto L_08942234;
    case 491u: goto L_0894223C;
    case 492u: goto L_08942244;
    case 493u: goto L_0894224C;
    case 494u: goto L_08942254;
    case 495u: goto L_0894225C;
    case 496u: goto L_08942264;
    case 497u: goto L_0894226C;
    case 498u: goto L_08942274;
    case 499u: goto L_0894227C;
    case 500u: goto L_08942284;
    case 501u: goto L_0894228C;
    case 502u: goto L_08942294;
    case 503u: goto L_0894229C;
    case 504u: goto L_089422A4;
    case 505u: goto L_089422AC;
    case 506u: goto L_089422B4;
    case 507u: goto L_089422BC;
    case 508u: goto L_089422C4;
    case 509u: goto L_089422CC;
    case 510u: goto L_089422D4;
    case 511u: goto L_089422DC;
    case 512u: goto L_089422E4;
    case 513u: goto L_089422EC;
    case 514u: goto L_089422F4;
    case 515u: goto L_089422FC;
    case 516u: goto L_08942304;
    case 517u: goto L_0894230C;
    case 518u: goto L_08942314;
    case 519u: goto L_0894231C;
    case 520u: goto L_08942324;
    case 521u: goto L_0894232C;
    case 522u: goto L_08942334;
    case 523u: goto L_0894233C;
    case 524u: goto L_08942340;
    case 525u: goto L_08942348;
    case 526u: goto L_0894236C;
    case 527u: goto L_08942378;
    case 528u: goto L_08942380;
    case 529u: goto L_0894238C;
    case 530u: goto L_08942398;
    case 531u: goto L_089423D8;
    case 532u: goto L_089423E4;
    case 533u: goto L_089423F0;
    case 534u: goto L_08942400;
    case 535u: goto L_08942404;
    case 536u: goto L_0894240C;
    case 537u: goto L_08942414;
    case 538u: goto L_08942420;
    case 539u: goto L_08942460;
    case 540u: goto L_0894246C;
    case 541u: goto L_08942478;
    case 542u: goto L_08942488;
    case 543u: goto L_0894248C;
    case 544u: goto L_08942494;
    case 545u: goto L_0894249C;
    case 546u: goto L_089424AC;
    case 547u: goto L_089424C4;
    case 548u: goto L_0894252C;
    case 549u: goto L_08942550;
    case 550u: goto L_08942564;
    case 551u: goto L_08942570;
    case 552u: goto L_08942598;
    case 553u: goto L_089425AC;
    case 554u: goto L_089425B0;
    case 555u: goto L_089425F4;
    case 556u: goto L_08942608;
    case 557u: goto L_08942610;
    case 558u: goto L_08942618;
    case 559u: goto L_0894265C;
    case 560u: goto L_08942668;
    case 561u: goto L_08942674;
    case 562u: goto L_08942688;
    case 563u: goto L_0894268C;
    case 564u: goto L_089426B8;
    case 565u: goto L_08942714;
    case 566u: goto L_08942728;
    case 567u: goto L_08942730;
    case 568u: goto L_08942738;
    case 569u: goto L_08942780;
    case 570u: goto L_08942790;
    case 571u: goto L_0894279C;
    case 572u: goto L_089427B0;
    case 573u: goto L_089427B8;
    case 574u: goto L_089427E4;
    case 575u: goto L_08942840;
    case 576u: goto L_08942854;
    case 577u: goto L_0894285C;
    case 578u: goto L_08942870;
    case 579u: goto L_089428B0;
    case 580u: goto L_089428B8;
    case 581u: goto L_089428C0;
    case 582u: goto L_08942920;
    case 583u: goto L_08942938;
    case 584u: goto L_08942950;
    case 585u: goto L_08942964;
    case 586u: goto L_08942970;
    case 587u: goto L_0894297C;
    case 588u: goto L_0894298C;
    case 589u: goto L_0894299C;
    case 590u: goto L_089429B4;
    case 591u: goto L_089429CC;
    case 592u: goto L_089429E4;
    case 593u: goto L_089429FC;
    case 594u: goto L_08942A14;
    case 595u: goto L_08942A2C;
    case 596u: goto L_08942A3C;
    case 597u: goto L_08942AAC;
    case 598u: goto L_08942AE4;
    case 599u: goto L_08942AF8;
    case 600u: goto L_08942B3C;
    case 601u: goto L_08942B48;
    case 602u: goto L_08942B50;
    case 603u: goto L_08942B98;
    case 604u: goto L_08942C2C;
    case 605u: goto L_08942C48;
    case 606u: goto L_08942C64;
    case 607u: goto L_08942C70;
    case 608u: goto L_08942C78;
    case 609u: goto L_08942C80;
    case 610u: goto L_08942C88;
    case 611u: goto L_08942C9C;
    case 612u: goto L_08942CA4;
    case 613u: goto L_08942CA8;
    case 614u: goto L_08942CB0;
    case 615u: goto L_08942CB8;
    case 616u: goto L_08942CCC;
    case 617u: goto L_08942CEC;
    case 618u: goto L_08942CF4;
    case 619u: goto L_08942D04;
    case 620u: goto L_08942D20;
    case 621u: goto L_08942D5C;
    case 622u: goto L_08942D6C;
    case 623u: goto L_08942D80;
    case 624u: goto L_08942DA0;
    case 625u: goto L_08942DC8;
    case 626u: goto L_08942DD8;
    case 627u: goto L_08942DE4;
    case 628u: goto L_08942E00;
    case 629u: goto L_08942E14;
    case 630u: goto L_08942E20;
    case 631u: goto L_08942E28;
    case 632u: goto L_08942E34;
    case 633u: goto L_08942E50;
    case 634u: goto L_08942E54;
    case 635u: goto L_08942E60;
    case 636u: goto L_08942E6C;
    case 637u: goto L_08942E74;
    case 638u: goto L_08942E88;
    case 639u: goto L_08942EAC;
    case 640u: goto L_08942EB8;
    case 641u: goto L_08942EC0;
    case 642u: goto L_08942EC8;
    case 643u: goto L_08942F0C;
    case 644u: goto L_08942F20;
    case 645u: goto L_08942F28;
    case 646u: goto L_08942F4C;
    case 647u: goto L_08942F70;
    case 648u: goto L_08942FA0;
    case 649u: goto L_08942FAC;
    case 650u: goto L_08942FDC;
    case 651u: goto L_08942FE8;
    case 652u: goto L_0894303C;
    case 653u: goto L_08943048;
    case 654u: goto L_08943054;
    case 655u: goto L_08943060;
    case 656u: goto L_0894307C;
    case 657u: goto L_08943084;
    case 658u: goto L_0894308C;
    case 659u: goto L_0894309C;
    case 660u: goto L_089430A4;
    case 661u: goto L_089430AC;
    case 662u: goto L_089430B4;
    case 663u: goto L_089430C4;
    case 664u: goto L_089430E4;
    case 665u: goto L_089430F4;
    case 666u: goto L_08943114;
    case 667u: goto L_08943140;
    case 668u: goto L_08943150;
    case 669u: goto L_08943158;
    case 670u: goto L_08943160;
    case 671u: goto L_08943168;
    case 672u: goto L_08943178;
    case 673u: goto L_08943198;
    case 674u: goto L_089431B0;
    case 675u: goto L_089431B8;
    case 676u: goto L_089431C8;
    case 677u: goto L_089431D0;
    case 678u: goto L_089431D8;
    case 679u: goto L_089431E8;
    case 680u: goto L_08943200;
    case 681u: goto L_08943208;
    case 682u: goto L_08943210;
    case 683u: goto L_08943218;
    case 684u: goto L_08943220;
    case 685u: goto L_08943228;
    case 686u: goto L_08943238;
    case 687u: goto L_08943244;
    case 688u: goto L_0894324C;
    case 689u: goto L_08943254;
    case 690u: goto L_08943258;
    case 691u: goto L_08943260;
    case 692u: goto L_0894327C;
    case 693u: goto L_08943294;
    case 694u: goto L_089432A4;
    case 695u: goto L_089432B0;
    case 696u: goto L_089432BC;
    case 697u: goto L_089432CC;
    case 698u: goto L_089432DC;
    case 699u: goto L_089432E4;
    case 700u: goto L_089432EC;
    case 701u: goto L_089432F4;
    case 702u: goto L_089432FC;
    case 703u: goto L_0894330C;
    case 704u: goto L_0894332C;
    case 705u: goto L_08943344;
    case 706u: goto L_0894334C;
    case 707u: goto L_08943354;
    case 708u: goto L_08943364;
    case 709u: goto L_0894336C;
    case 710u: goto L_08943374;
    case 711u: goto L_08943380;
    case 712u: goto L_0894338C;
    case 713u: goto L_0894339C;
    case 714u: goto L_089433A8;
    case 715u: goto L_089433B0;
    case 716u: goto L_089433D0;
    case 717u: goto L_089433E8;
    case 718u: goto L_08943404;
    case 719u: goto L_0894340C;
    case 720u: goto L_0894341C;
    case 721u: goto L_08943430;
    case 722u: goto L_0894344C;
    case 723u: goto L_08943480;
    case 724u: goto L_0894348C;
    case 725u: goto L_089434B4;
    case 726u: goto L_089434CC;
    case 727u: goto L_089434F0;
    case 728u: goto L_08943500;
    case 729u: goto L_08943508;
    case 730u: goto L_08943534;
    case 731u: goto L_08943544;
    case 732u: goto L_08943564;
    case 733u: goto L_08943590;
    case 734u: goto L_089435CC;
    case 735u: goto L_089435D8;
    case 736u: goto L_089435DC;
    case 737u: goto L_089435E4;
    case 738u: goto L_089435EC;
    case 739u: goto L_08943600;
    case 740u: goto L_08943610;
    case 741u: goto L_08943630;
    case 742u: goto L_08943648;
    case 743u: goto L_08943650;
    case 744u: goto L_08943658;
    case 745u: goto L_08943664;
    case 746u: goto L_08943670;
    case 747u: goto L_08943680;
    case 748u: goto L_0894368C;
    case 749u: goto L_08943694;
    case 750u: goto L_089436B4;
    case 751u: goto L_089436D8;
    case 752u: goto L_08943734;
    case 753u: goto L_0894373C;
    case 754u: goto L_0894374C;
    case 755u: goto L_0894375C;
    case 756u: goto L_08943778;
    case 757u: goto L_08943780;
    case 758u: goto L_08943790;
    case 759u: goto L_08943798;
    case 760u: goto L_089437A0;
    case 761u: goto L_089437B0;
    case 762u: goto L_089437BC;
    case 763u: goto L_089437CC;
    case 764u: goto L_089437D4;
    case 765u: goto L_089437DC;
    case 766u: goto L_089437E8;
    case 767u: goto L_089437F0;
    case 768u: goto L_089437F8;
    case 769u: goto L_08943800;
    case 770u: goto L_08943808;
    case 771u: goto L_08943830;
    case 772u: goto L_08943854;
    case 773u: goto L_08943868;
    case 774u: goto L_08943888;
    case 775u: goto L_089438B0;
    case 776u: goto L_089438E4;
    case 777u: goto L_08943910;
    case 778u: goto L_08943920;
    case 779u: goto L_08943944;
    case 780u: goto L_08943978;
    case 781u: goto L_08943990;
    case 782u: goto L_089439AC;
    case 783u: goto L_089439D8;
    case 784u: goto L_089439FC;
    case 785u: goto L_08943A34;
    case 786u: goto L_08943A58;
    case 787u: goto L_08943A74;
    case 788u: goto L_08943AB8;
    case 789u: goto L_08943AC8;
    case 790u: goto L_08943B04;
    case 791u: goto L_08943B0C;
    case 792u: goto L_08943B40;
    case 793u: goto L_08943B50;
    case 794u: goto L_08943B54;
    case 795u: goto L_08943B5C;
    case 796u: goto L_08943B60;
    case 797u: goto L_08943B70;
    case 798u: goto L_08943B80;
    case 799u: goto L_08943B98;
    case 800u: goto L_08943BAC;
    case 801u: goto L_08943BBC;
    case 802u: goto L_08943BD8;
    case 803u: goto L_08943BE0;
    case 804u: goto L_08943BF4;
    case 805u: goto L_08943C0C;
    case 806u: goto L_08943C20;
    case 807u: goto L_08943C28;
    case 808u: goto L_08943C58;
    case 809u: goto L_08943CF8;
    case 810u: goto L_08943D00;
    case 811u: goto L_08943D10;
    case 812u: goto L_08943D18;
    case 813u: goto L_08943D34;
    case 814u: goto L_08943D4C;
    case 815u: goto L_08943D54;
    case 816u: goto L_08943D5C;
    case 817u: goto L_08943D64;
    case 818u: goto L_08943D74;
    case 819u: goto L_08943D7C;
    case 820u: goto L_08943D88;
    case 821u: goto L_08943DB0;
    case 822u: goto L_08943DEC;
    case 823u: goto L_08943E00;
    case 824u: goto L_08943E10;
    case 825u: goto L_08943E7C;
    case 826u: goto L_08943EA0;
    case 827u: goto L_08943EA8;
    case 828u: goto L_08943EB8;
    case 829u: goto L_08943EC0;
    case 830u: goto L_08943EC4;
    case 831u: goto L_08943ED0;
    case 832u: goto L_08943ED8;
    case 833u: goto L_08943EE4;
    case 834u: goto L_08943EEC;
    case 835u: goto L_08943EF4;
    case 836u: goto L_08943F04;
    case 837u: goto L_08943F10;
    case 838u: goto L_08943F18;
    case 839u: goto L_08943F24;
    case 840u: goto L_08943F28;
    case 841u: goto L_08943F4C;
    case 842u: goto L_08943F60;
    case 843u: goto L_08943F68;
    case 844u: goto L_08943F70;
    case 845u: goto L_08943F7C;
    case 846u: goto L_08943F84;
    case 847u: goto L_08943F94;
    case 848u: goto L_08943F9C;
    case 849u: goto L_08943FB4;
    case 850u: goto L_08943FC4;
    case 851u: goto L_08943FCC;
    case 852u: goto L_08943FE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08940000:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08940014u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 493u, 0x0893A834u>(ctx, &aot_mem) && ctx.pc == 0x08940014u) goto L_08940014;
    return;
L_08940014:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08940034;
      }
      goto L_0894002C;
    }
L_0894002C:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08940034;
L_08940034:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 880u, 0x0893FC00u>(ctx, &aot_mem); return;
      }
      goto L_0894003C;
    }
L_0894003C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08940058;
      }
      goto L_08940048;
    }
L_08940048:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08940064;
      }
      goto L_08940058;
    }
L_08940058:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08940064;
L_08940064:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_08940088;
    }
    goto L_08940088;
L_08940088:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089400C8;
      }
      goto L_0894009C;
    }
L_0894009C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(215), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30248)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089400C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x089400C8u) goto L_089400C8;
    return;
L_089400C8:
    ctx.gpr[31] = (0x089400D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x089400D0u) goto L_089400D0;
    return;
L_089400D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 880u, 0x0893FC00u>(ctx, &aot_mem); return;
      }
      goto L_089400D8;
    }
L_089400D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0894069C;
      }
      goto L_089400EC;
    }
L_089400EC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30928)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08940104:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[19] = (ctx.gpr[19] & 7u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 3u));
    ctx.gpr[4] = (ctx.gpr[4] >> 29u);
    ctx.gpr[20] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 3u));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[5] >> 29u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940234;
      }
      goto L_08940164;
    }
L_08940164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] << 5u);
      if (branch_taken) {
          goto L_08940184;
      }
      goto L_0894017C;
    }
L_0894017C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_089401A8;
      }
      goto L_08940184;
    }
L_08940184:
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    goto L_089401A8;
L_089401A8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0894020C;
      }
      goto L_089401B0;
    }
L_089401B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089401CC;
      }
      goto L_089401BC;
    }
L_089401BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0894020C;
      }
      goto L_089401CC;
    }
L_089401CC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089401DCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 131u, 0x089388DCu>(ctx, &aot_mem) && ctx.pc == 0x089401DCu) goto L_089401DC;
    return;
L_089401DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0894020C;
      }
      goto L_089401E4;
    }
L_089401E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(156));
    ctx.gpr[31] = (0x08940208u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08940208u) goto L_08940208;
    return;
L_08940208:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0894020C;
L_0894020C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[5] >> 29u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940164;
      }
      goto L_08940234;
    }
L_08940234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894069C;
      }
      goto L_0894023C;
    }
L_0894023C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940298;
      }
      goto L_08940248;
    }
L_08940248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08940270;
      }
      goto L_08940264;
    }
L_08940264:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08940270;
L_08940270:
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089402A0;
      }
      goto L_0894028C;
    }
L_0894028C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089402A0;
      }
      goto L_08940298;
    }
L_08940298:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089402A0;
L_089402A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894069C;
      }
      goto L_089402A8;
    }
L_089402A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0894056C;
      }
      goto L_089402B4;
    }
L_089402B4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089402E4;
    }
    goto L_089402E4;
L_089402E4:
    ctx.gpr[4] = (16288u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55676u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08940354;
      }
      goto L_08940300;
    }
L_08940300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1328), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1332), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1336), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1328));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089403A8;
      }
      goto L_08940354;
    }
L_08940354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (16204u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089403A8;
L_089403A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08940564;
      }
      goto L_089403C0;
    }
L_089403C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089403D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 530u, 0x08AFE33Cu>(ctx, &aot_mem) && ctx.pc == 0x089403D0u) goto L_089403D0;
    return;
L_089403D0:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6856), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (0u | 125u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(216)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08940400;
      }
      goto L_089403F4;
    }
L_089403F4:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08940400;
L_08940400:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[6] = (18676u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(616)));
    ctx.gpr[5] = (ctx.gpr[6] | 9216u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (16840u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (2230u << 16u);
        goto L_0894044C;
    }
    goto L_08940440;
L_08940440:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2230u << 16u);
    goto L_0894044C;
L_0894044C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6844)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[17] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089404D4;
      }
      goto L_089404A4;
    }
L_089404A4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089404B0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089404B0u) goto L_089404B0;
    return;
L_089404B0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089404C8;
      }
      goto L_089404BC;
    }
L_089404BC:
    ctx.gpr[31] = (0x089404C4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089404C4u) goto L_089404C4;
    return;
L_089404C4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089404C8;
L_089404C8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_089404D4;
L_089404D4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x089404E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30360));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089404E4u) goto L_089404E4;
    return;
L_089404E4:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 5000u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08940510u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 372u, 0x0887A19Cu>(ctx, &aot_mem) && ctx.pc == 0x08940510u) goto L_08940510;
    return;
L_08940510:
    ctx.gpr[31] = (0x08940518u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 479u, 0x0889E6ECu>(ctx, &aot_mem) && ctx.pc == 0x08940518u) goto L_08940518;
    return;
L_08940518:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7832)));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7832), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30248)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08940564u);
    ctx.gpr[6] = (0u | 74u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x08940564u) goto L_08940564;
    return;
L_08940564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940574;
      }
      goto L_0894056C;
    }
L_0894056C:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08940574;
L_08940574:
    ctx.gpr[31] = (0x0894057Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 393u, 0x0893A344u>(ctx, &aot_mem) && ctx.pc == 0x0894057Cu) goto L_0894057C;
    return;
L_0894057C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894069C;
      }
      goto L_08940584;
    }
L_08940584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089405B8;
      }
      goto L_0894059C;
    }
L_0894059C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089405ACu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 398u, 0x0893A398u>(ctx, &aot_mem) && ctx.pc == 0x089405ACu) goto L_089405AC;
    return;
L_089405AC:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0894060C;
      }
      goto L_089405B8;
    }
L_089405B8:
    ctx.gpr[31] = (0x089405C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089405C0u) goto L_089405C0;
    return;
L_089405C0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-128));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (14673u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089405E8u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089405E8u) goto L_089405E8;
    return;
L_089405E8:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-128));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894060Cu);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 398u, 0x0893A398u>(ctx, &aot_mem) && ctx.pc == 0x0894060Cu) goto L_0894060C;
    return;
L_0894060C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894069C;
      }
      goto L_08940614;
    }
L_08940614:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08940650;
    }
    goto L_08940650;
L_08940650:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08940694;
      }
      goto L_0894066C;
    }
L_0894066C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30248)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08940694u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x08940694u) goto L_08940694;
    return;
L_08940694:
    ctx.gpr[31] = (0x0894069Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 393u, 0x0893A344u>(ctx, &aot_mem) && ctx.pc == 0x0894069Cu) goto L_0894069C;
    return;
L_0894069C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (0u | 23u);
    ctx.gpr[5] = (ctx.gpr[5] & 31u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089407A8;
      }
      goto L_089406B4;
    }
L_089406B4:
    ctx.gpr[31] = (0x089406BCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089406BCu) goto L_089406BC;
    return;
L_089406BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089407A8;
      }
      goto L_089406D4;
    }
L_089406D4:
    ctx.gpr[31] = (0x089406DCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089406DCu) goto L_089406DC;
    return;
L_089406DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089407A8;
      }
      goto L_089406F4;
    }
L_089406F4:
    ctx.gpr[31] = (0x089406FCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089406FCu) goto L_089406FC;
    return;
L_089406FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(740)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089407A8;
      }
      goto L_08940714;
    }
L_08940714:
    ctx.gpr[31] = (0x0894071Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0894071Cu) goto L_0894071C;
    return;
L_0894071C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(756)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089407A8;
      }
      goto L_08940734;
    }
L_08940734:
    ctx.gpr[31] = (0x0894073Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0894073Cu) goto L_0894073C;
    return;
L_0894073C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(776)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089407A8;
      }
      goto L_08940760;
    }
L_08940760:
    ctx.gpr[31] = (0x08940768u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08940768u) goto L_08940768;
    return;
L_08940768:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(792)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089407A8;
      }
      goto L_08940780;
    }
L_08940780:
    ctx.gpr[31] = (0x08940788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08940788u) goto L_08940788;
    return;
L_08940788:
    ctx.gpr[9] = (17302u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 39u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089407A8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 580u, 0x088DEE94u>(ctx, &aot_mem) && ctx.pc == 0x089407A8u) goto L_089407A8;
    return;
L_089407A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089417C4;
      }
      goto L_089407B0;
    }
L_089407B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940954;
      }
      goto L_089407C0;
    }
L_089407C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08940A78;
      }
      goto L_089407C8;
    }
L_089407C8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0894095C;
      }
      goto L_089407D0;
    }
L_089407D0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08940AEC;
      }
      goto L_089407D8;
    }
L_089407D8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08940954;
      }
      goto L_089407E0;
    }
L_089407E0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08940B84;
      }
      goto L_089407E8;
    }
L_089407E8:
    ctx.gpr[31] = (0x089407F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x089407F0u) goto L_089407F0;
    return;
L_089407F0:
    ctx.gpr[31] = (0x089407F8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089407F8u) goto L_089407F8;
    return;
L_089407F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(800)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08940820u);
    ctx.fpr[22] = ctx.fpr[14] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08940820u) goto L_08940820;
    return;
L_08940820:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(816)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[13];
    ctx.gpr[31] = (0x08940844u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08940844u) goto L_08940844;
    return;
L_08940844:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(836)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x08940864u);
    ctx.fpr[24] = ctx.fpr[17] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08940864u) goto L_08940864;
    return;
L_08940864:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(852)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089408A8;
      }
      goto L_0894089C;
    }
L_0894089C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089408E4;
      }
      goto L_089408A8;
    }
L_089408A8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940954;
      }
      goto L_089408BC;
    }
L_089408BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089408C8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 276u, 0x0893969Cu>(ctx, &aot_mem) && ctx.pc == 0x089408C8u) goto L_089408C8;
    return;
L_089408C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940954;
      }
      goto L_089408D0;
    }
L_089408D0:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08940954;
      }
      goto L_089408E4;
    }
L_089408E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940954;
      }
      goto L_089408F0;
    }
L_089408F0:
    ctx.gpr[31] = (0x089408F8u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x089408F8u) goto L_089408F8;
    return;
L_089408F8:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08940954;
      }
      goto L_08940900;
    }
L_08940900:
    ctx.gpr[31] = (0x08940908u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 91u, 0x089386B8u>(ctx, &aot_mem) && ctx.pc == 0x08940908u) goto L_08940908;
    return;
L_08940908:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940954;
      }
      goto L_08940910;
    }
L_08940910:
    ctx.gpr[31] = (0x08940918u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 331u, 0x08939D08u>(ctx, &aot_mem) && ctx.pc == 0x08940918u) goto L_08940918;
    return;
L_08940918:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940954;
      }
      goto L_08940920;
    }
L_08940920:
    ctx.gpr[31] = (0x08940928u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08940928u) goto L_08940928;
    return;
L_08940928:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.gpr[31] = (0x08940938u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08940938u) goto L_08940938;
    return;
L_08940938:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    goto L_08940954;
L_08940954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089417C4;
      }
      goto L_0894095C;
    }
L_0894095C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940974;
      }
      goto L_08940968;
    }
L_08940968:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (0x08940974u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 295u, 0x08939888u>(ctx, &aot_mem) && ctx.pc == 0x08940974u) goto L_08940974;
    return;
L_08940974:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08940994;
      }
      goto L_08940984;
    }
L_08940984:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089409A0;
      }
      goto L_08940994;
    }
L_08940994:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089409A0;
L_089409A0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089409C0;
    }
    goto L_089409C0;
L_089409C0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08940A68;
      }
      goto L_089409D4;
    }
L_089409D4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30248)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 74u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089409F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x089409F4u) goto L_089409F4;
    return;
L_089409F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940A64;
      }
      goto L_08940A00;
    }
L_08940A00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940A2C;
      }
      goto L_08940A0C;
    }
L_08940A0C:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08940A30;
      }
      goto L_08940A2C;
    }
L_08940A2C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_08940A30;
L_08940A30:
    ctx.gpr[31] = (0x08940A38u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08940A38u) goto L_08940A38;
    return;
L_08940A38:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[31] = (0x08940A4Cu);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08940A4Cu) goto L_08940A4C;
    return;
L_08940A4C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08940A68;
      }
      goto L_08940A64;
    }
L_08940A64:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_08940A68;
L_08940A68:
    ctx.gpr[31] = (0x08940A70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x08940A70u) goto L_08940A70;
    return;
L_08940A70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940954;
      }
      goto L_08940A78;
    }
L_08940A78:
    ctx.gpr[31] = (0x08940A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08940A80u) goto L_08940A80;
    return;
L_08940A80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08940AE4;
      }
      goto L_08940A8C;
    }
L_08940A8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940AE4;
      }
      goto L_08940A98;
    }
L_08940A98:
    ctx.gpr[31] = (0x08940AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08940AA0u) goto L_08940AA0;
    return;
L_08940AA0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08940AACu);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08940AACu) goto L_08940AAC;
    return;
L_08940AAC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08940AC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 493u, 0x0893A834u>(ctx, &aot_mem) && ctx.pc == 0x08940AC0u) goto L_08940AC0;
    return;
L_08940AC0:
    ctx.gpr[4] = (17296u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08940AE4;
      }
      goto L_08940ADC;
    }
L_08940ADC:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08940AE4;
L_08940AE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940954;
      }
      goto L_08940AEC;
    }
L_08940AEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08940B08;
      }
      goto L_08940AF8;
    }
L_08940AF8:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08940B14;
      }
      goto L_08940B08;
    }
L_08940B08:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08940B14;
L_08940B14:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_08940B38;
    }
    goto L_08940B38;
L_08940B38:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08940B74;
      }
      goto L_08940B4C;
    }
L_08940B4C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30248)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08940B74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x08940B74u) goto L_08940B74;
    return;
L_08940B74:
    ctx.gpr[31] = (0x08940B7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x08940B7Cu) goto L_08940B7C;
    return;
L_08940B7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940954;
      }
      goto L_08940B84;
    }
L_08940B84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08940BB4;
      }
      goto L_08940B94;
    }
L_08940B94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940BB4;
      }
      goto L_08940BAC;
    }
L_08940BAC:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08940BB4;
L_08940BB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940954;
      }
      goto L_08940BBC;
    }
L_08940BBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08940BE4;
      }
      goto L_08940BCC;
    }
L_08940BCC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08940BDC;
      }
      goto L_08940BD4;
    }
L_08940BD4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08940BFC;
      }
      goto L_08940BDC;
    }
L_08940BDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089417C4;
      }
      goto L_08940BE4;
    }
L_08940BE4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08940C04;
      }
      goto L_08940BEC;
    }
L_08940BEC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940BDC;
      }
      goto L_08940BF4;
    }
L_08940BF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940C0C;
      }
      goto L_08940BFC;
    }
L_08940BFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940BDC;
      }
      goto L_08940C04;
    }
L_08940C04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940BDC;
      }
      goto L_08940C0C;
    }
L_08940C0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08940C28;
      }
      goto L_08940C18;
    }
L_08940C18:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08940C34;
      }
      goto L_08940C28;
    }
L_08940C28:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08940C34;
L_08940C34:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_08940C58;
    }
    goto L_08940C58;
L_08940C58:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08940C94;
      }
      goto L_08940C6C;
    }
L_08940C6C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30248)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08940C94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x08940C94u) goto L_08940C94;
    return;
L_08940C94:
    ctx.gpr[31] = (0x08940C9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x08940C9Cu) goto L_08940C9C;
    return;
L_08940C9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940BDC;
      }
      goto L_08940CA4;
    }
L_08940CA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08940CCC;
      }
      goto L_08940CB4;
    }
L_08940CB4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08940CC4;
      }
      goto L_08940CBC;
    }
L_08940CBC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08940CE4;
      }
      goto L_08940CC4;
    }
L_08940CC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089417C4;
      }
      goto L_08940CCC;
    }
L_08940CCC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08940CEC;
      }
      goto L_08940CD4;
    }
L_08940CD4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940CC4;
      }
      goto L_08940CDC;
    }
L_08940CDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940D80;
      }
      goto L_08940CE4;
    }
L_08940CE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940CC4;
      }
      goto L_08940CEC;
    }
L_08940CEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08940D0C;
      }
      goto L_08940CFC;
    }
L_08940CFC:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08940D18;
      }
      goto L_08940D0C;
    }
L_08940D0C:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08940D18;
L_08940D18:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08940D38;
    }
    goto L_08940D38;
L_08940D38:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08940D70;
      }
      goto L_08940D4C;
    }
L_08940D4C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30248)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 74u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08940D70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x08940D70u) goto L_08940D70;
    return;
L_08940D70:
    ctx.gpr[31] = (0x08940D78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x08940D78u) goto L_08940D78;
    return;
L_08940D78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940CC4;
      }
      goto L_08940D80;
    }
L_08940D80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08940D9C;
      }
      goto L_08940D8C;
    }
L_08940D8C:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08940DA8;
      }
      goto L_08940D9C;
    }
L_08940D9C:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08940DA8;
L_08940DA8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_08940DCC;
    }
    goto L_08940DCC;
L_08940DCC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08940E08;
      }
      goto L_08940DE0;
    }
L_08940DE0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30248)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08940E08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x08940E08u) goto L_08940E08;
    return;
L_08940E08:
    ctx.gpr[31] = (0x08940E10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x08940E10u) goto L_08940E10;
    return;
L_08940E10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940CC4;
      }
      goto L_08940E18;
    }
L_08940E18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08940E44;
      }
      goto L_08940E28;
    }
L_08940E28:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08940E54;
      }
      goto L_08940E30;
    }
L_08940E30:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0894103C;
      }
      goto L_08940E38;
    }
L_08940E38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940E5C;
      }
      goto L_08940E40;
    }
L_08940E40:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    goto L_08940E44;
L_08940E44:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08940F50;
      }
      goto L_08940E4C;
    }
L_08940E4C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08941268;
      }
      goto L_08940E54;
    }
L_08940E54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089417C4;
      }
      goto L_08940E5C;
    }
L_08940E5C:
    ctx.gpr[31] = (0x08940E64u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08940E64u) goto L_08940E64;
    return;
L_08940E64:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(896)));
    ctx.gpr[31] = (0x08940E70u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08940E70u) goto L_08940E70;
    return;
L_08940E70:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(916)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08940E80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 493u, 0x0893A834u>(ctx, &aot_mem) && ctx.pc == 0x08940E80u) goto L_08940E80;
    return;
L_08940E80:
    ctx.gpr[4] = (17249u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16675u << 16u);
      if (branch_taken) {
          goto L_08940EC4;
      }
      goto L_08940E9C;
    }
L_08940E9C:
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08940ED4;
      }
      goto L_08940EB4;
    }
L_08940EB4:
    ctx.gpr[31] = (0x08940EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08940EBCu) goto L_08940EBC;
    return;
L_08940EBC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940ED4;
      }
      goto L_08940EC4;
    }
L_08940EC4:
    ctx.gpr[31] = (0x08940ECCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 331u, 0x08939D08u>(ctx, &aot_mem) && ctx.pc == 0x08940ECCu) goto L_08940ECC;
    return;
L_08940ECC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940F10;
      }
      goto L_08940ED4;
    }
L_08940ED4:
    ctx.gpr[31] = (0x08940EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08940EDCu) goto L_08940EDC;
    return;
L_08940EDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940F1C;
      }
      goto L_08940EE4;
    }
L_08940EE4:
    ctx.gpr[31] = (0x08940EECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08940EECu) goto L_08940EEC;
    return;
L_08940EEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08940EF8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 348u, 0x08939ECCu>(ctx, &aot_mem) && ctx.pc == 0x08940EF8u) goto L_08940EF8;
    return;
L_08940EF8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08940F04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 462u, 0x0893A6BCu>(ctx, &aot_mem) && ctx.pc == 0x08940F04u) goto L_08940F04;
    return;
L_08940F04:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940F1C;
      }
      goto L_08940F10;
    }
L_08940F10:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08940F48;
      }
      goto L_08940F1C;
    }
L_08940F1C:
    ctx.gpr[4] = (17817u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08940F48;
      }
      goto L_08940F38;
    }
L_08940F38:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08940F48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 360u, 0x08939FDCu>(ctx, &aot_mem) && ctx.pc == 0x08940F48u) goto L_08940F48;
    return;
L_08940F48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940E54;
      }
      goto L_08940F50;
    }
L_08940F50:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08940F70;
      }
      goto L_08940F60;
    }
L_08940F60:
    ctx.gpr[4] = (15627u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 17302u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08940F7C;
      }
      goto L_08940F70;
    }
L_08940F70:
    ctx.gpr[4] = (15755u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 17302u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08940F7C;
L_08940F7C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08940F9C;
    }
    goto L_08940F9C;
L_08940F9C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08940FA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 237u, 0x089392F8u>(ctx, &aot_mem) && ctx.pc == 0x08940FA8u) goto L_08940FA8;
    return;
L_08940FA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940FBC;
      }
      goto L_08940FB0;
    }
L_08940FB0:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0894102C;
      }
      goto L_08940FBC;
    }
L_08940FBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894102C;
      }
      goto L_08940FD4;
    }
L_08940FD4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30248)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 74u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08940FF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x08940FF4u) goto L_08940FF4;
    return;
L_08940FF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08941000u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 116u, 0x0893C8B4u>(ctx, &aot_mem) && ctx.pc == 0x08941000u) goto L_08941000;
    return;
L_08941000:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[2] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30328));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894102Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 549u, 0x0893AC60u>(ctx, &aot_mem) && ctx.pc == 0x0894102Cu) goto L_0894102C;
    return;
L_0894102C:
    ctx.gpr[31] = (0x08941034u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x08941034u) goto L_08941034;
    return;
L_08941034:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940E54;
      }
      goto L_0894103C;
    }
L_0894103C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941098;
      }
      goto L_0894106C;
    }
L_0894106C:
    ctx.gpr[31] = (0x08941074u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08941074u) goto L_08941074;
    return;
L_08941074:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(944)));
    ctx.gpr[31] = (0x08941080u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08941080u) goto L_08941080;
    return;
L_08941080:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(964)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08941090u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 493u, 0x0893A834u>(ctx, &aot_mem) && ctx.pc == 0x08941090u) goto L_08941090;
    return;
L_08941090:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089410A4;
      }
      goto L_08941098;
    }
L_08941098:
    ctx.gpr[4] = (32639u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65535u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089410A4;
L_089410A4:
    ctx.gpr[4] = (16634u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 57671u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17096u << 16u);
      if (branch_taken) {
          goto L_089410E4;
      }
      goto L_089410C0;
    }
L_089410C0:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08941260;
      }
      goto L_089410D4;
    }
L_089410D4:
    ctx.gpr[31] = (0x089410DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x089410DCu) goto L_089410DC;
    return;
L_089410DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941260;
      }
      goto L_089410E4;
    }
L_089410E4:
    ctx.gpr[31] = (0x089410ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x089410ECu) goto L_089410EC;
    return;
L_089410EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941220;
      }
      goto L_089410F4;
    }
L_089410F4:
    ctx.gpr[31] = (0x089410FCu);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 90u, 0x0893C698u>(ctx, &aot_mem) && ctx.pc == 0x089410FCu) goto L_089410FC;
    return;
L_089410FC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08941108u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 462u, 0x0893A6BCu>(ctx, &aot_mem) && ctx.pc == 0x08941108u) goto L_08941108;
    return;
L_08941108:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08941220;
      }
      goto L_08941114;
    }
L_08941114:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941260;
      }
      goto L_08941120;
    }
L_08941120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08941130u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08941130u) goto L_08941130;
    return;
L_08941130:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0894114Cu);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0894114Cu) goto L_0894114C;
    return;
L_0894114C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
      if (branch_taken) {
          goto L_08941218;
      }
      goto L_08941160;
    }
L_08941160:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16840u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08941218;
      }
      goto L_08941184;
    }
L_08941184:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6848)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(18001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08941218;
      }
      goto L_089411A4;
    }
L_089411A4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089411E4;
      }
      goto L_089411B4;
    }
L_089411B4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089411C0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089411C0u) goto L_089411C0;
    return;
L_089411C0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089411D8;
      }
      goto L_089411CC;
    }
L_089411CC:
    ctx.gpr[31] = (0x089411D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089411D4u) goto L_089411D4;
    return;
L_089411D4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089411D8;
L_089411D8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_089411E4;
L_089411E4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x089411F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089411F4u) goto L_089411F4;
    return;
L_089411F4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08941208u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08941208u) goto L_08941208;
    return;
L_08941208:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6848), ctx.gpr[4]);
    goto L_08941218;
L_08941218:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941260;
      }
      goto L_08941220;
    }
L_08941220:
    ctx.gpr[31] = (0x08941228u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 116u, 0x0893C8B4u>(ctx, &aot_mem) && ctx.pc == 0x08941228u) goto L_08941228;
    return;
L_08941228:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[2] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30328));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08941250u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 576u, 0x0893AEB8u>(ctx, &aot_mem) && ctx.pc == 0x08941250u) goto L_08941250;
    return;
L_08941250:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941260;
      }
      goto L_08941258;
    }
L_08941258:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08941260;
L_08941260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940E54;
      }
      goto L_08941268;
    }
L_08941268:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08941284;
      }
      goto L_08941274;
    }
L_08941274:
    ctx.gpr[4] = (15568u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 58720u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08941290;
      }
      goto L_08941284;
    }
L_08941284:
    ctx.gpr[4] = (15731u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46662u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08941290;
L_08941290:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_089412B4;
    }
    goto L_089412B4;
L_089412B4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089412F0;
      }
      goto L_089412C8;
    }
L_089412C8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30248)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089412F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x089412F0u) goto L_089412F0;
    return;
L_089412F0:
    ctx.gpr[31] = (0x089412F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x089412F8u) goto L_089412F8;
    return;
L_089412F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940E54;
      }
      goto L_08941300;
    }
L_08941300:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08941328;
      }
      goto L_08941310;
    }
L_08941310:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08941338;
      }
      goto L_08941318;
    }
L_08941318:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089414D4;
      }
      goto L_08941320;
    }
L_08941320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941340;
      }
      goto L_08941328;
    }
L_08941328:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08941428;
      }
      goto L_08941330;
    }
L_08941330:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08941544;
      }
      goto L_08941338;
    }
L_08941338:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089417C4;
      }
      goto L_08941340;
    }
L_08941340:
    ctx.gpr[31] = (0x08941348u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08941348u) goto L_08941348;
    return;
L_08941348:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(976)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08941370u);
    ctx.fpr[22] = ctx.fpr[14] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08941370u) goto L_08941370;
    return;
L_08941370:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(992)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[13];
    ctx.gpr[31] = (0x08941394u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08941394u) goto L_08941394;
    return;
L_08941394:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1012)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x089413B4u);
    ctx.fpr[24] = ctx.fpr[17] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089413B4u) goto L_089413B4;
    return;
L_089413B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1028)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08941420;
      }
      goto L_089413EC;
    }
L_089413EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941420;
      }
      goto L_089413F8;
    }
L_089413F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08941408u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 162u, 0x08938BE8u>(ctx, &aot_mem) && ctx.pc == 0x08941408u) goto L_08941408;
    return;
L_08941408:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941420;
      }
      goto L_08941410;
    }
L_08941410:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08941420;
L_08941420:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941338;
      }
      goto L_08941428;
    }
L_08941428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941440;
      }
      goto L_08941434;
    }
L_08941434:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (0x08941440u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 295u, 0x08939888u>(ctx, &aot_mem) && ctx.pc == 0x08941440u) goto L_08941440;
    return;
L_08941440:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08941460;
      }
      goto L_08941450;
    }
L_08941450:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894146C;
      }
      goto L_08941460;
    }
L_08941460:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0894146C;
L_0894146C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0894148C;
    }
    goto L_0894148C;
L_0894148C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089414C4;
      }
      goto L_089414A0;
    }
L_089414A0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30248)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 74u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089414C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x089414C0u) goto L_089414C0;
    return;
L_089414C0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_089414C4;
L_089414C4:
    ctx.gpr[31] = (0x089414CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x089414CCu) goto L_089414CC;
    return;
L_089414CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941338;
      }
      goto L_089414D4;
    }
L_089414D4:
    ctx.gpr[31] = (0x089414DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x089414DCu) goto L_089414DC;
    return;
L_089414DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894153C;
      }
      goto L_089414E8;
    }
L_089414E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894153C;
      }
      goto L_089414F4;
    }
L_089414F4:
    ctx.gpr[31] = (0x089414FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x089414FCu) goto L_089414FC;
    return;
L_089414FC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08941508u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08941508u) goto L_08941508;
    return;
L_08941508:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0894151Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 493u, 0x0893A834u>(ctx, &aot_mem) && ctx.pc == 0x0894151Cu) goto L_0894151C;
    return;
L_0894151C:
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894153C;
      }
      goto L_08941534;
    }
L_08941534:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0894153C;
L_0894153C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941338;
      }
      goto L_08941544;
    }
L_08941544:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08941560;
      }
      goto L_08941550;
    }
L_08941550:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894156C;
      }
      goto L_08941560;
    }
L_08941560:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0894156C;
L_0894156C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_08941590;
    }
    goto L_08941590;
L_08941590:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089415CC;
      }
      goto L_089415A4;
    }
L_089415A4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30248)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089415CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x089415CCu) goto L_089415CC;
    return;
L_089415CC:
    ctx.gpr[31] = (0x089415D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x089415D4u) goto L_089415D4;
    return;
L_089415D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941338;
      }
      goto L_089415DC;
    }
L_089415DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08941604;
      }
      goto L_089415EC;
    }
L_089415EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089417C4;
      }
      goto L_089415F4;
    }
L_089415F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_0894161C;
      }
      goto L_089415FC;
    }
L_089415FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089417C4;
      }
      goto L_08941604;
    }
L_08941604:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08941688;
      }
      goto L_0894160C;
    }
L_0894160C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08941734;
      }
      goto L_08941614;
    }
L_08941614:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089417C4;
      }
      goto L_0894161C;
    }
L_0894161C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941680;
      }
      goto L_08941628;
    }
L_08941628:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08941638u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 131u, 0x089388DCu>(ctx, &aot_mem) && ctx.pc == 0x08941638u) goto L_08941638;
    return;
L_08941638:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941680;
      }
      goto L_08941640;
    }
L_08941640:
    ctx.gpr[31] = (0x08941648u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 331u, 0x08939D08u>(ctx, &aot_mem) && ctx.pc == 0x08941648u) goto L_08941648;
    return;
L_08941648:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08941680;
      }
      goto L_08941650;
    }
L_08941650:
    ctx.gpr[31] = (0x08941658u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 237u, 0x089392F8u>(ctx, &aot_mem) && ctx.pc == 0x08941658u) goto L_08941658;
    return;
L_08941658:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941680;
      }
      goto L_08941660;
    }
L_08941660:
    ctx.gpr[31] = (0x08941668u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08941668u) goto L_08941668;
    return;
L_08941668:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    goto L_08941680;
L_08941680:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089417C4;
      }
      goto L_08941688;
    }
L_08941688:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_089416A8;
      }
      goto L_08941698;
    }
L_08941698:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089416B4;
      }
      goto L_089416A8;
    }
L_089416A8:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089416B4;
L_089416B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089416D4;
    }
    goto L_089416D4;
L_089416D4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08941724;
      }
      goto L_089416E8;
    }
L_089416E8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30248)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 74u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08941708u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x08941708u) goto L_08941708;
    return;
L_08941708:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08941714u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08941714u) goto L_08941714;
    return;
L_08941714:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08941724;
L_08941724:
    ctx.gpr[31] = (0x0894172Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x0894172Cu) goto L_0894172C;
    return;
L_0894172C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089417C4;
      }
      goto L_08941734;
    }
L_08941734:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08941750;
      }
      goto L_08941740;
    }
L_08941740:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894175C;
      }
      goto L_08941750;
    }
L_08941750:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0894175C;
L_0894175C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_08941780;
    }
    goto L_08941780;
L_08941780:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089417BC;
      }
      goto L_08941794;
    }
L_08941794:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30248)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089417BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x089417BCu) goto L_089417BC;
    return;
L_089417BC:
    ctx.gpr[31] = (0x089417C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x089417C4u) goto L_089417C4;
    return;
L_089417C4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1392)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1396)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1400)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1404)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1408)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1416)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1420)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1424)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1432)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1436)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1440)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1456));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941800:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16128u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[17] = ctx.fpr[16] + ctx.fpr[17];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[18] = ctx.fpr[13] + ctx.fpr[16];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[17] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[14] = ctx.fpr[17] + ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(20720)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
        goto L_089418B8;
    }
    goto L_089418B8;
L_089418B8:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
        goto L_089418DC;
    }
    goto L_089418DC;
L_089418DC:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[18] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 99 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
        goto L_089418FC;
    }
    goto L_089418FC;
L_089418FC:
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[19] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 99 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
        goto L_0894191C;
    }
    goto L_0894191C;
L_0894191C:
    ctx.gpr[5] = (0u | 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08941934;
      }
      goto L_0894192C;
    }
L_0894192C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(20720), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08941944;
      }
      goto L_08941934;
    }
L_08941934:
    ctx.gpr[31] = (0x0894193Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 166u, 0x088C4CA0u>(ctx, &aot_mem) && ctx.pc == 0x0894193Cu) goto L_0894193C;
    return;
L_0894193C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(20720), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08941944;
L_08941944:
    ctx.gpr[20] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[23] << 5u);
      if (branch_taken) {
          goto L_089419F4;
      }
      goto L_08941954;
    }
L_08941954:
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[5] << 2u);
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[4]);
    ctx.gpr[22] = (2227u << 16u);
    goto L_08941964;
L_08941964:
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_089419E4;
      }
      goto L_08941974;
    }
L_08941974:
    ctx.gpr[30] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[30] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[30] = (ctx.gpr[4] - ctx.gpr[30]);
    goto L_08941984;
L_08941984:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[23] = (ctx.gpr[5] + ctx.gpr[30]);
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x089419A0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 514u, 0x0893AA00u>(ctx, &aot_mem) && ctx.pc == 0x089419A0u) goto L_089419A0;
    return;
L_089419A0:
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089419B0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 514u, 0x0893AA00u>(ctx, &aot_mem) && ctx.pc == 0x089419B0u) goto L_089419B0;
    return;
L_089419B0:
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089419C0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 514u, 0x0893AA00u>(ctx, &aot_mem) && ctx.pc == 0x089419C0u) goto L_089419C0;
    return;
L_089419C0:
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089419D0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 514u, 0x0893AA00u>(ctx, &aot_mem) && ctx.pc == 0x089419D0u) goto L_089419D0;
    return;
L_089419D0:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08941984;
      }
      goto L_089419E4;
    }
L_089419E4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08941964;
      }
      goto L_089419F4;
    }
L_089419F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08941AEC;
      }
      goto L_08941A00;
    }
L_08941A00:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941AEC;
      }
      goto L_08941A08;
    }
L_08941A08:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08941AEC;
      }
      goto L_08941A20;
    }
L_08941A20:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(210)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08941AEC;
      }
      goto L_08941A30;
    }
L_08941A30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = ctx.fpr[17] - ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[18] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[16] = ctx.fpr[19] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08941AEC;
      }
      goto L_08941AA0;
    }
L_08941AA0:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08941AD4;
      }
      goto L_08941AC8;
    }
L_08941AC8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08941AEC;
      }
      goto L_08941AD4;
    }
L_08941AD4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08941AEC;
L_08941AEC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941B08;
      }
      goto L_08941AF4;
    }
L_08941AF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 512u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_08941B08;
L_08941B08:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941B28;
      }
      goto L_08941B14;
    }
L_08941B14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08941B28;
L_08941B28:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08941B5C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08941BF0;
      }
      goto L_08941B70;
    }
L_08941B70:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30960)));
    jump_target = ctx.gpr[1];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941B88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08941BB8;
      }
      goto L_08941B90;
    }
L_08941B90:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
        goto L_08941BA8;
    }
    goto L_08941B98;
L_08941B98:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08941BB0;
      }
      goto L_08941BA0;
    }
L_08941BA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941BB8;
      }
      goto L_08941BA8;
    }
L_08941BA8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941BB8;
      }
      goto L_08941BB0;
    }
L_08941BB0:
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08941BB8;
L_08941BB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941BF0;
      }
      goto L_08941BC0;
    }
L_08941BC0:
    if (static_cast<std::int32_t>(ctx.gpr[5]) > 0) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
        goto L_08941BD8;
    }
    goto L_08941BC8;
L_08941BC8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08941BE8;
      }
      goto L_08941BD0;
    }
L_08941BD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941BE8;
      }
      goto L_08941BD8;
    }
L_08941BD8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941BE8;
      }
      goto L_08941BE0;
    }
L_08941BE0:
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08941BE8;
L_08941BE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941BF0;
      }
      goto L_08941BF0;
    }
L_08941BF0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941BF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11600));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08941C3Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 399u, 0x0893A3A0u>(ctx, &aot_mem) && ctx.pc == 0x08941C3Cu) goto L_08941C3C;
    return;
L_08941C3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08941C70;
      }
      goto L_08941C4C;
    }
L_08941C4C:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08941C70;
L_08941C70:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08941C98;
      }
      goto L_08941C78;
    }
L_08941C78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08941C98;
L_08941C98:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941CB0;
      }
      goto L_08941CA0;
    }
L_08941CA0:
    ctx.gpr[31] = (0x08941CA8u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 64u, 0x0893C49Cu>(ctx, &aot_mem) && ctx.pc == 0x08941CA8u) goto L_08941CA8;
    return;
L_08941CA8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08941CBC;
      }
      goto L_08941CB0;
    }
L_08941CB0:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08941CBC;
L_08941CBC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08941D18;
      }
      goto L_08941CD0;
    }
L_08941CD0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31088)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941CE8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08941D18;
      }
      goto L_08941CF0;
    }
L_08941CF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[16]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08941D18;
      }
      goto L_08941D00;
    }
L_08941D00:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08941D18;
      }
      goto L_08941D18;
    }
L_08941D18:
    ctx.gpr[4] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08941D34;
      }
      goto L_08941D24;
    }
L_08941D24:
    ctx.gpr[31] = (0x08941D2Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 393u, 0x0893A344u>(ctx, &aot_mem) && ctx.pc == 0x08941D2Cu) goto L_08941D2C;
    return;
L_08941D2C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08941D40;
      }
      goto L_08941D34;
    }
L_08941D34:
    ctx.gpr[31] = (0x08941D3Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x08941D3Cu) goto L_08941D3C;
    return;
L_08941D3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    goto L_08941D40;
L_08941D40:
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08941D54;
    }
    goto L_08941D54;
L_08941D54:
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
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
L_08941D74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[17] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7000)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[16];
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[19];
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(11600));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    if (ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
        goto L_08941DFC;
    }
    goto L_08941DFC;
L_08941DFC:
    ctx.fpr[4] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[4]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[4] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
        goto L_08941E10;
    }
    goto L_08941E10;
L_08941E10:
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_fpu_condition((ctx.fpr[4] < ctx.fpr[3]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[4]));
        goto L_08941E24;
    }
    goto L_08941E24;
L_08941E24:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[3]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
        goto L_08941E3C;
    }
    goto L_08941E3C;
L_08941E3C:
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_fpu_condition((ctx.fpr[3] <= ctx.fpr[1]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[3]));
        goto L_08941E50;
    }
    goto L_08941E50;
L_08941E50:
    ctx.set_fpu_condition((ctx.fpr[2] < ctx.fpr[1]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
        goto L_08941E60;
    }
    goto L_08941E60;
L_08941E60:
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[1]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
        goto L_08941E78;
    }
    goto L_08941E78;
L_08941E78:
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[2]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
        goto L_08941E8C;
    }
    goto L_08941E8C;
L_08941E8C:
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[2]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
        goto L_08941EA0;
    }
    goto L_08941EA0;
L_08941EA0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[1]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
        goto L_08941EB8;
    }
    goto L_08941EB8;
L_08941EB8:
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[2]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
        goto L_08941ECC;
    }
    goto L_08941ECC;
L_08941ECC:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[2]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
        goto L_08941EDC;
    }
    goto L_08941EDC;
L_08941EDC:
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[17] - ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[2] + ctx.fpr[1];
    ctx.gpr[7] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[17] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(148), 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(152), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(212), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(215), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7000)));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08941FC4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08941BF8;
L_08941FC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7000)));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-7000), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942000:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(126)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942334;
      }
      goto L_08942014;
    }
L_08942014:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894232C;
      }
      goto L_08942020;
    }
L_08942020:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942324;
      }
      goto L_0894202C;
    }
L_0894202C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(178)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894231C;
      }
      goto L_08942038;
    }
L_08942038:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942314;
      }
      goto L_08942044;
    }
L_08942044:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(182)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894230C;
      }
      goto L_08942050;
    }
L_08942050:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942304;
      }
      goto L_0894205C;
    }
L_0894205C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(186)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089422FC;
      }
      goto L_08942068;
    }
L_08942068:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089422F4;
      }
      goto L_08942074;
    }
L_08942074:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(190)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089422EC;
      }
      goto L_08942080;
    }
L_08942080:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089422E4;
      }
      goto L_0894208C;
    }
L_0894208C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(194)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089422DC;
      }
      goto L_08942098;
    }
L_08942098:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089422D4;
      }
      goto L_089420A4;
    }
L_089420A4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(198)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089422CC;
      }
      goto L_089420B0;
    }
L_089420B0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089422C4;
      }
      goto L_089420BC;
    }
L_089420BC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089422BC;
      }
      goto L_089420C8;
    }
L_089420C8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(210)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089422B4;
      }
      goto L_089420D4;
    }
L_089420D4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089422AC;
      }
      goto L_089420E0;
    }
L_089420E0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089422A4;
      }
      goto L_089420EC;
    }
L_089420EC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894229C;
      }
      goto L_089420F8;
    }
L_089420F8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942294;
      }
      goto L_08942104;
    }
L_08942104:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894228C;
      }
      goto L_08942110;
    }
L_08942110:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(138)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942284;
      }
      goto L_0894211C;
    }
L_0894211C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894227C;
      }
      goto L_08942128;
    }
L_08942128:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(142)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942274;
      }
      goto L_08942134;
    }
L_08942134:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894226C;
      }
      goto L_08942140;
    }
L_08942140:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(146)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942264;
      }
      goto L_0894214C;
    }
L_0894214C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894225C;
      }
      goto L_08942158;
    }
L_08942158:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(150)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942254;
      }
      goto L_08942164;
    }
L_08942164:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894224C;
      }
      goto L_08942170;
    }
L_08942170:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942244;
      }
      goto L_0894217C;
    }
L_0894217C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(158)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894223C;
      }
      goto L_08942188;
    }
L_08942188:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942234;
      }
      goto L_08942194;
    }
L_08942194:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(162)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894222C;
      }
      goto L_089421A0;
    }
L_089421A0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942224;
      }
      goto L_089421AC;
    }
L_089421AC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(166)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894221C;
      }
      goto L_089421B8;
    }
L_089421B8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942214;
      }
      goto L_089421C4;
    }
L_089421C4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894220C;
      }
      goto L_089421D0;
    }
L_089421D0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(172)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942204;
      }
      goto L_089421DC;
    }
L_089421DC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(174)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089421FC;
      }
      goto L_089421E8;
    }
L_089421E8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(562)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894233C;
      }
      goto L_089421F4;
    }
L_089421F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_089421FC;
    }
L_089421FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_08942204;
    }
L_08942204:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_0894220C;
    }
L_0894220C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_08942214;
    }
L_08942214:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_0894221C;
    }
L_0894221C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_08942224;
    }
L_08942224:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_0894222C;
    }
L_0894222C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_08942234;
    }
L_08942234:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_0894223C;
    }
L_0894223C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_08942244;
    }
L_08942244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_0894224C;
    }
L_0894224C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_08942254;
    }
L_08942254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_0894225C;
    }
L_0894225C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_08942264;
    }
L_08942264:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_0894226C;
    }
L_0894226C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_08942274;
    }
L_08942274:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_0894227C;
    }
L_0894227C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_08942284;
    }
L_08942284:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_0894228C;
    }
L_0894228C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_08942294;
    }
L_08942294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_0894229C;
    }
L_0894229C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_089422A4;
    }
L_089422A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_089422AC;
    }
L_089422AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_089422B4;
    }
L_089422B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_089422BC;
    }
L_089422BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_089422C4;
    }
L_089422C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_089422CC;
    }
L_089422CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_089422D4;
    }
L_089422D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_089422DC;
    }
L_089422DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_089422E4;
    }
L_089422E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_089422EC;
    }
L_089422EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_089422F4;
    }
L_089422F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_089422FC;
    }
L_089422FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_08942304;
    }
L_08942304:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_0894230C;
    }
L_0894230C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_08942314;
    }
L_08942314:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_0894231C;
    }
L_0894231C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_08942324;
    }
L_08942324:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_0894232C;
    }
L_0894232C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_08942334;
    }
L_08942334:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08942340;
      }
      goto L_0894233C;
    }
L_0894233C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08942340;
L_08942340:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942348:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (2275u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(11600));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0894236C;
L_0894236C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08942380;
      }
      goto L_08942378;
    }
L_08942378:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894249C;
      }
      goto L_08942380;
    }
L_08942380:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894238Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 399u, 0x0893A3A0u>(ctx, &aot_mem) && ctx.pc == 0x0894238Cu) goto L_0894238C;
    return;
L_0894238C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942414;
      }
      goto L_08942398;
    }
L_08942398:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 8u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089423E4;
      }
      goto L_089423D8;
    }
L_089423D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_089423E4;
L_089423E4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942404;
      }
      goto L_089423F0;
    }
L_089423F0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08942400u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 392u, 0x0893A288u>(ctx, &aot_mem) && ctx.pc == 0x08942400u) goto L_08942400;
    return;
L_08942400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08942404;
L_08942404:
    ctx.gpr[31] = (0x0894240Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x0894240Cu) goto L_0894240C;
    return;
L_0894240C:
    ctx.gpr[31] = (0x08942414u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x08942414u) goto L_08942414;
    return;
L_08942414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894249C;
      }
      goto L_08942420;
    }
L_08942420:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 8u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894246C;
      }
      goto L_08942460;
    }
L_08942460:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_0894246C;
L_0894246C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894248C;
      }
      goto L_08942478;
    }
L_08942478:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08942488u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 392u, 0x0893A288u>(ctx, &aot_mem) && ctx.pc == 0x08942488u) goto L_08942488;
    return;
L_08942488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_0894248C;
L_0894248C:
    ctx.gpr[31] = (0x08942494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08942494u) goto L_08942494;
    return;
L_08942494:
    ctx.gpr[31] = (0x0894249Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x0894249Cu) goto L_0894249C;
    return;
L_0894249C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(224));
      if (branch_taken) {
          goto L_0894236C;
      }
      goto L_089424AC;
    }
L_089424AC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089424C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-480));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[30]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894252Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 517u, 0x08A06634u>(ctx, &aot_mem) && ctx.pc == 0x0894252Cu) goto L_0894252C;
    return;
L_0894252C:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17204u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[22] / ctx.fpr[24];
    ctx.gpr[31] = (0x08942550u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 493u, 0x08A05FF8u>(ctx, &aot_mem) && ctx.pc == 0x08942550u) goto L_08942550;
    return;
L_08942550:
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08942564u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(558)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08942564u) goto L_08942564;
    return;
L_08942564:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08942570u);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08942570u) goto L_08942570;
    return;
L_08942570:
    ctx.gpr[4] = (16549u << 16u);
    ctx.gpr[18] = (65532u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 24642u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089425B0;
      }
      goto L_08942598;
    }
L_08942598:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(558)));
    ctx.gpr[31] = (0x089425ACu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 194u, 0x0883D0B8u>(ctx, &aot_mem) && ctx.pc == 0x089425ACu) goto L_089425AC;
    return;
L_089425AC:
    ctx.gpr[21] = (ctx.gpr[16] | 0u);
    goto L_089425B0;
L_089425B0:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[22] / ctx.fpr[24];
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x089425F4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x089425F4u) goto L_089425F4;
    return;
L_089425F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[31] = (0x08942608u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08942608u) goto L_08942608;
    return;
L_08942608:
    ctx.gpr[31] = (0x08942610u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08942610u) goto L_08942610;
    return;
L_08942610:
    ctx.gpr[31] = (0x08942618u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x08942618u) goto L_08942618;
    return;
L_08942618:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(560)));
    ctx.gpr[31] = (0x0894265Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x0894265Cu) goto L_0894265C;
    return;
L_0894265C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08942668u);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08942668u) goto L_08942668;
    return;
L_08942668:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894268C;
      }
      goto L_08942674;
    }
L_08942674:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(560)));
    ctx.gpr[31] = (0x08942688u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 194u, 0x0883D0B8u>(ctx, &aot_mem) && ctx.pc == 0x08942688u) goto L_08942688;
    return;
L_08942688:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    goto L_0894268C;
L_0894268C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (16564u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 31457u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089426B8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 90u, 0x08938690u>(ctx, &aot_mem) && ctx.pc == 0x089426B8u) goto L_089426B8;
    return;
L_089426B8:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[22] / ctx.fpr[24];
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08942714u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x08942714u) goto L_08942714;
    return;
L_08942714:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[31] = (0x08942728u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08942728u) goto L_08942728;
    return;
L_08942728:
    ctx.gpr[31] = (0x08942730u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08942730u) goto L_08942730;
    return;
L_08942730:
    ctx.gpr[31] = (0x08942738u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x08942738u) goto L_08942738;
    return;
L_08942738:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(562)));
    ctx.gpr[31] = (0x08942780u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08942780u) goto L_08942780;
    return;
L_08942780:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u | 496u);
    ctx.gpr[31] = (0x08942790u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08942790u) goto L_08942790;
    return;
L_08942790:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
        goto L_089427B8;
    }
    goto L_0894279C;
L_0894279C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(562)));
    ctx.gpr[31] = (0x089427B0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 194u, 0x0883D0B8u>(ctx, &aot_mem) && ctx.pc == 0x089427B0u) goto L_089427B0;
    return;
L_089427B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    goto L_089427B8;
L_089427B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (49332u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 31457u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089427E4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 90u, 0x08938690u>(ctx, &aot_mem) && ctx.pc == 0x089427E4u) goto L_089427E4;
    return;
L_089427E4:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[22] / ctx.fpr[24];
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08942840u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x08942840u) goto L_08942840;
    return;
L_08942840:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[31] = (0x08942854u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08942854u) goto L_08942854;
    return;
L_08942854:
    ctx.gpr[31] = (0x0894285Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x0894285Cu) goto L_0894285C;
    return;
L_0894285C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08942870u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x08942870u) goto L_08942870;
    return;
L_08942870:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (65532u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x089428B0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x089428B0u) goto L_089428B0;
    return;
L_089428B0:
    ctx.gpr[31] = (0x089428B8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x089428B8u) goto L_089428B8;
    return;
L_089428B8:
    ctx.gpr[31] = (0x089428C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x089428C0u) goto L_089428C0;
    return;
L_089428C0:
    ctx.gpr[4] = (49216u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49248u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08942920u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 90u, 0x08938690u>(ctx, &aot_mem) && ctx.pc == 0x08942920u) goto L_08942920;
    return;
L_08942920:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08942938u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 90u, 0x08938690u>(ctx, &aot_mem) && ctx.pc == 0x08942938u) goto L_08942938;
    return;
L_08942938:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08942950u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 90u, 0x08938690u>(ctx, &aot_mem) && ctx.pc == 0x08942950u) goto L_08942950;
    return;
L_08942950:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08942964u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08942964u) goto L_08942964;
    return;
L_08942964:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08942970u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08942970u) goto L_08942970;
    return;
L_08942970:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0894297Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x0894297Cu) goto L_0894297C;
    return;
L_0894297C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(30376));
    ctx.gpr[31] = (0x0894298Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x0894298Cu) goto L_0894298C;
    return;
L_0894298C:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0894299Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x0894299Cu) goto L_0894299C;
    return;
L_0894299C:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[20]);
    ctx.gpr[31] = (0x089429B4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x089429B4u) goto L_089429B4;
    return;
L_089429B4:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[20]);
    ctx.gpr[31] = (0x089429CCu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x089429CCu) goto L_089429CC;
    return;
L_089429CC:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[20]);
    ctx.gpr[31] = (0x089429E4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x089429E4u) goto L_089429E4;
    return;
L_089429E4:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[20]);
    ctx.gpr[31] = (0x089429FCu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x089429FCu) goto L_089429FC;
    return;
L_089429FC:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[20]);
    ctx.gpr[31] = (0x08942A14u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08942A14u) goto L_08942A14;
    return;
L_08942A14:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[20]);
    ctx.gpr[31] = (0x08942A2Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08942A2Cu) goto L_08942A2C;
    return;
L_08942A2C:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08942A3Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08942A3Cu) goto L_08942A3C;
    return;
L_08942A3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[12]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.gpr[31] = (0x08942AACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 89u, 0x08938664u>(ctx, &aot_mem) && ctx.pc == 0x08942AACu) goto L_08942AAC;
    return;
L_08942AAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[0];
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08942AE4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08941D74;
L_08942AE4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[31] = (0x08942AF8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 34u, 0x0893C260u>(ctx, &aot_mem) && ctx.pc == 0x08942AF8u) goto L_08942AF8;
    return;
L_08942AF8:
    ctx.gpr[4] = (ctx.gpr[16] << 8u);
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11600));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(212), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(215), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942B50;
      }
      goto L_08942B3C;
    }
L_08942B3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942B50;
      }
      goto L_08942B48;
    }
L_08942B48:
    ctx.gpr[31] = (0x08942B50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08942B50u) goto L_08942B50;
    return;
L_08942B50:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942B98:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30540)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2228u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30544)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30516)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2228u << 16u);
    ctx.gpr[10] = (2228u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2228u << 16u);
    ctx.gpr[3] = (2228u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-30536), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2228u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-30528), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-30532), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30524), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-30512), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942C2C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942C48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08942CB8;
      }
      goto L_08942C64;
    }
L_08942C64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08942C78;
      }
      goto L_08942C70;
    }
L_08942C70:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08942C78;
L_08942C78:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942C88;
      }
      goto L_08942C80;
    }
L_08942C80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08942C88;
L_08942C88:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08942CA8;
    }
    goto L_08942C9C;
L_08942C9C:
    ctx.gpr[31] = (0x08942CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 170u, 0x088E8DC4u>(ctx, &aot_mem) && ctx.pc == 0x08942CA4u) goto L_08942CA4;
    return;
L_08942CA4:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08942CA8;
L_08942CA8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942CB8;
      }
      goto L_08942CB0;
    }
L_08942CB0:
    ctx.gpr[31] = (0x08942CB8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08942CB8u) goto L_08942CB8;
    return;
L_08942CB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942CCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08942CF4;
      }
      goto L_08942CEC;
    }
L_08942CEC:
    ctx.gpr[31] = (0x08942CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 170u, 0x088E8DC4u>(ctx, &aot_mem) && ctx.pc == 0x08942CF4u) goto L_08942CF4;
    return;
L_08942CF4:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08942D04u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 665u, 0x08AA31B4u>(ctx, &aot_mem) && ctx.pc == 0x08942D04u) goto L_08942D04;
    return;
L_08942D04:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942D20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08942D80;
      }
      goto L_08942D5C;
    }
L_08942D5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x08942D6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942D6Cu) goto L_08942D6C;
    return;
L_08942D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08942D5C;
      }
      goto L_08942D80;
    }
L_08942D80:
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
L_08942DA0:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942DC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08942DD8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08942DD8u) goto L_08942DD8;
    return;
L_08942DD8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942DE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08942E74;
      }
      goto L_08942E00;
    }
L_08942E00:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18428));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[31] = (0x08942E14u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 240u, 0x08ACCF64u>(ctx, &aot_mem) && ctx.pc == 0x08942E14u) goto L_08942E14;
    return;
L_08942E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3232)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942E54;
      }
      goto L_08942E20;
    }
L_08942E20:
    ctx.gpr[31] = (0x08942E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x08942E28u) goto L_08942E28;
    return;
L_08942E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3232)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942E50;
      }
      goto L_08942E34;
    }
L_08942E34:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08942E50u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942E50u) goto L_08942E50;
    return;
L_08942E50:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3232), 0u);
    goto L_08942E54;
L_08942E54:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08942E60u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 369u, 0x089A63D4u>(ctx, &aot_mem) && ctx.pc == 0x08942E60u) goto L_08942E60;
    return;
L_08942E60:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942E74;
      }
      goto L_08942E6C;
    }
L_08942E6C:
    ctx.gpr[31] = (0x08942E74u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 253u, 0x0899DA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08942E74u) goto L_08942E74;
    return;
L_08942E74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942E88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08942EACu);
    ctx.gpr[4] = (0u | 3248u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 251u, 0x0899DA4Cu>(ctx, &aot_mem) && ctx.pc == 0x08942EACu) goto L_08942EAC;
    return;
L_08942EAC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
      if (branch_taken) {
          goto L_08942EC8;
      }
      goto L_08942EB8;
    }
L_08942EB8:
    ctx.gpr[31] = (0x08942EC0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 487u, 0x08946228u>(ctx, &aot_mem) && ctx.pc == 0x08942EC0u) goto L_08942EC0;
    return;
L_08942EC0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
    goto L_08942EC8;
L_08942EC8:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08942F0Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x08942F0Cu) goto L_08942F0C;
    return;
L_08942F0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08942F20u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08942F20u) goto L_08942F20;
    return;
L_08942F20:
    ctx.gpr[31] = (0x08942F28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08942F28u) goto L_08942F28;
    return;
L_08942F28:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17146u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08942F4C;
    }
    goto L_08942F4C;
L_08942F4C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1722), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942F70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08942FA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x08942FA0u) goto L_08942FA0;
    return;
L_08942FA0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942FAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08942FDCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08942FDCu) goto L_08942FDC;
    return;
L_08942FDC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942FE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (50298u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    goto L_0894303C;
L_0894303C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08943048u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x08943048u) goto L_08943048;
    return;
L_08943048:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089430E4;
      }
      goto L_08943054;
    }
L_08943054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x08943060u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 489u, 0x08A8AEF8u>(ctx, &aot_mem) && ctx.pc == 0x08943060u) goto L_08943060;
    return;
L_08943060:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_0894309C;
      }
      goto L_0894307C;
    }
L_0894307C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0894308C;
      }
      goto L_08943084;
    }
L_08943084:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089430AC;
      }
      goto L_0894308C;
    }
L_0894308C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_0894307C;
      }
      goto L_0894309C;
    }
L_0894309C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089430AC;
      }
      goto L_089430A4;
    }
L_089430A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089430AC;
      }
      goto L_089430AC;
    }
L_089430AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089430E4;
      }
      goto L_089430B4;
    }
L_089430B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x089430C4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089430C4u) goto L_089430C4;
    return;
L_089430C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089430E4;
L_089430E4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0894303C;
      }
      goto L_089430F4;
    }
L_089430F4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943114:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3229)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08943158;
      }
      goto L_08943140;
    }
L_08943140:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943160;
      }
      goto L_08943150;
    }
L_08943150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089432FC;
      }
      goto L_08943158;
    }
L_08943158:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089433B0;
      }
      goto L_08943160;
    }
L_08943160:
    ctx.gpr[31] = (0x08943168u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 116u, 0x08A98458u>(ctx, &aot_mem) && ctx.pc == 0x08943168u) goto L_08943168;
    return;
L_08943168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089432F4;
      }
      goto L_08943178;
    }
L_08943178:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08943198u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08943198u) goto L_08943198;
    return;
L_08943198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089432F4;
      }
      goto L_089431B0;
    }
L_089431B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089432F4;
      }
      goto L_089431B8;
    }
L_089431B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[17] = (0u | 45u);
      if (branch_taken) {
          goto L_089432F4;
      }
      goto L_089431C8;
    }
L_089431C8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089432F4;
      }
      goto L_089431D0;
    }
L_089431D0:
    ctx.gpr[31] = (0x089431D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 870u, 0x08A975E8u>(ctx, &aot_mem) && ctx.pc == 0x089431D8u) goto L_089431D8;
    return;
L_089431D8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089431E8u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 879u, 0x08A9764Cu>(ctx, &aot_mem) && ctx.pc == 0x089431E8u) goto L_089431E8;
    return;
L_089431E8:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (0u | 2u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089432A4;
      }
      goto L_08943200;
    }
L_08943200:
    ctx.gpr[31] = (0x08943208u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 107u, 0x088D4980u>(ctx, &aot_mem) && ctx.pc == 0x08943208u) goto L_08943208;
    return;
L_08943208:
    ctx.gpr[31] = (0x08943210u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 207u, 0x08944E30u>(ctx, &aot_mem) && ctx.pc == 0x08943210u) goto L_08943210;
    return;
L_08943210:
    ctx.gpr[31] = (0x08943218u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 92u, 0x089A0714u>(ctx, &aot_mem) && ctx.pc == 0x08943218u) goto L_08943218;
    return;
L_08943218:
    ctx.gpr[31] = (0x08943220u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 61u, 0x089A04ACu>(ctx, &aot_mem) && ctx.pc == 0x08943220u) goto L_08943220;
    return;
L_08943220:
    ctx.gpr[31] = (0x08943228u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 727u, 0x0899FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08943228u) goto L_08943228;
    return;
L_08943228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08943260;
      }
      goto L_08943238;
    }
L_08943238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943258;
      }
      goto L_08943244;
    }
L_08943244:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_08943258;
    }
    goto L_0894324C;
L_0894324C:
    ctx.gpr[31] = (0x08943254u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08943254u) goto L_08943254;
    return;
L_08943254:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_08943258;
L_08943258:
    ctx.gpr[31] = (0x08943260u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x08943260u) goto L_08943260;
    return;
L_08943260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (16640u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0894327Cu);
    ctx.gpr[6] = (0u | 147u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x0894327Cu) goto L_0894327C;
    return;
L_0894327C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08943294u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13396));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x08943294u) goto L_08943294;
    return;
L_08943294:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089432F4;
      }
      goto L_089432A4;
    }
L_089432A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2950)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089432EC;
      }
      goto L_089432B0;
    }
L_089432B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2968)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089432EC;
      }
      goto L_089432BC;
    }
L_089432BC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089432CCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 72u, 0x089B0398u>(ctx, &aot_mem) && ctx.pc == 0x089432CCu) goto L_089432CC;
    return;
L_089432CC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2950), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2968), 0u);
    ctx.gpr[31] = (0x089432DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 107u, 0x088D4980u>(ctx, &aot_mem) && ctx.pc == 0x089432DCu) goto L_089432DC;
    return;
L_089432DC:
    ctx.gpr[31] = (0x089432E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 207u, 0x08944E30u>(ctx, &aot_mem) && ctx.pc == 0x089432E4u) goto L_089432E4;
    return;
L_089432E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089432F4;
      }
      goto L_089432EC;
    }
L_089432EC:
    ctx.gpr[31] = (0x089432F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 104u, 0x089A4788u>(ctx, &aot_mem) && ctx.pc == 0x089432F4u) goto L_089432F4;
    return;
L_089432F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089433B0;
      }
      goto L_089432FC;
    }
L_089432FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089433B0;
      }
      goto L_0894330C;
    }
L_0894330C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x0894332Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x0894332Cu) goto L_0894332C;
    return;
L_0894332C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089433B0;
      }
      goto L_08943344;
    }
L_08943344:
    ctx.gpr[31] = (0x0894334Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 98u, 0x08A983B8u>(ctx, &aot_mem) && ctx.pc == 0x0894334Cu) goto L_0894334C;
    return;
L_0894334C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089433B0;
      }
      goto L_08943354;
    }
L_08943354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089433B0;
      }
      goto L_08943364;
    }
L_08943364:
    ctx.gpr[31] = (0x0894336Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 107u, 0x088D4980u>(ctx, &aot_mem) && ctx.pc == 0x0894336Cu) goto L_0894336C;
    return;
L_0894336C:
    ctx.gpr[31] = (0x08943374u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 207u, 0x08944E30u>(ctx, &aot_mem) && ctx.pc == 0x08943374u) goto L_08943374;
    return;
L_08943374:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2950)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089433A8;
      }
      goto L_08943380;
    }
L_08943380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2968)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089433A8;
      }
      goto L_0894338C;
    }
L_0894338C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894339Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 72u, 0x089B0398u>(ctx, &aot_mem) && ctx.pc == 0x0894339Cu) goto L_0894339C;
    return;
L_0894339C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2950), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2968), 0u);
      if (branch_taken) {
          goto L_089433B0;
      }
      goto L_089433A8;
    }
L_089433A8:
    ctx.gpr[31] = (0x089433B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 104u, 0x089A4788u>(ctx, &aot_mem) && ctx.pc == 0x089433B0u) goto L_089433B0;
    return;
L_089433B0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
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
L_089433D0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2936)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2940)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08943404;
      }
      goto L_089433E8;
    }
L_089433E8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (16128u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2936), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08943404;
L_08943404:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894340C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943430;
      }
      goto L_0894341C;
    }
L_0894341C:
    ctx.gpr[5] = (17658u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2940), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2936), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08943500;
      }
      goto L_08943430;
    }
L_08943430:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2936)));
    ctx.gpr[5] = (49942u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2944)));
      if (branch_taken) {
          goto L_089434B4;
      }
      goto L_0894344C;
    }
L_0894344C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(356)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089434B4;
      }
      goto L_08943480;
    }
L_08943480:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2995)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_089434B4;
      }
      goto L_0894348C;
    }
L_0894348C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2936), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2944), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089434B4;
L_089434B4:
    ctx.gpr[5] = (17402u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08943500;
      }
      goto L_089434CC;
    }
L_089434CC:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2940)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2944), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (17658u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08943500;
      }
      goto L_089434F0;
    }
L_089434F0:
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2940), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08943500;
L_08943500:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943508:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08943534u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 870u, 0x08A975E8u>(ctx, &aot_mem) && ctx.pc == 0x08943534u) goto L_08943534;
    return;
L_08943534:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08943544u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 879u, 0x08A9764Cu>(ctx, &aot_mem) && ctx.pc == 0x08943544u) goto L_08943544;
    return;
L_08943544:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08943564u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 241u, 0x08A1D350u>(ctx, &aot_mem) && ctx.pc == 0x08943564u) goto L_08943564;
    return;
L_08943564:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = ctx.fpr[14] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16457u << 16u);
      if (branch_taken) {
          goto L_08943610;
      }
      goto L_08943590;
    }
L_08943590:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089435D8;
      }
      goto L_089435CC;
    }
L_089435CC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1754), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089435DC;
      }
      goto L_089435D8;
    }
L_089435D8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1754), static_cast<std::uint8_t>(0u));
    goto L_089435DC;
L_089435DC:
    ctx.gpr[31] = (0x089435E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 136u, 0x08A98578u>(ctx, &aot_mem) && ctx.pc == 0x089435E4u) goto L_089435E4;
    return;
L_089435E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (17008u << 16u);
      if (branch_taken) {
          goto L_08943610;
      }
      goto L_089435EC;
    }
L_089435EC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08943610;
      }
      goto L_08943600;
    }
L_08943600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_08943610;
L_08943610:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08943630u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08943630u) goto L_08943630;
    return;
L_08943630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943694;
      }
      goto L_08943648;
    }
L_08943648:
    ctx.gpr[31] = (0x08943650u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 98u, 0x08A983B8u>(ctx, &aot_mem) && ctx.pc == 0x08943650u) goto L_08943650;
    return;
L_08943650:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943694;
      }
      goto L_08943658;
    }
L_08943658:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2950)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0894368C;
      }
      goto L_08943664;
    }
L_08943664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2968)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894368C;
      }
      goto L_08943670;
    }
L_08943670:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08943680u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 72u, 0x089B0398u>(ctx, &aot_mem) && ctx.pc == 0x08943680u) goto L_08943680;
    return;
L_08943680:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2950), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2968), 0u);
      if (branch_taken) {
          goto L_08943694;
      }
      goto L_0894368C;
    }
L_0894368C:
    ctx.gpr[31] = (0x08943694u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 104u, 0x089A4788u>(ctx, &aot_mem) && ctx.pc == 0x08943694u) goto L_08943694;
    return;
L_08943694:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089436B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x089436D8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 651u, 0x0894B150u>(ctx, &aot_mem) && ctx.pc == 0x089436D8u) goto L_089436D8;
    return;
L_089436D8:
    ctx.gpr[4] = (49942u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2936)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17302u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] | 52429u);
    ctx.gpr[19] = (2232u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.gpr[31] = (0x08943734u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 97u, 0x08A983B0u>(ctx, &aot_mem) && ctx.pc == 0x08943734u) goto L_08943734;
    return;
L_08943734:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_08943780;
      }
      goto L_0894373C;
    }
L_0894373C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943780;
      }
      goto L_0894374C;
    }
L_0894374C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08943780;
      }
      goto L_0894375C;
    }
L_0894375C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u | 60000u);
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08943778u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 659u, 0x08887620u>(ctx, &aot_mem) && ctx.pc == 0x08943778u) goto L_08943778;
    return;
L_08943778:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089437CC;
      }
      goto L_08943780;
    }
L_08943780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089437CC;
      }
      goto L_08943790;
    }
L_08943790:
    ctx.gpr[31] = (0x08943798u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 97u, 0x08A983B0u>(ctx, &aot_mem) && ctx.pc == 0x08943798u) goto L_08943798;
    return;
L_08943798:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089437B0;
      }
      goto L_089437A0;
    }
L_089437A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089437CC;
      }
      goto L_089437B0;
    }
L_089437B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089437BCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 686u, 0x088877F4u>(ctx, &aot_mem) && ctx.pc == 0x089437BCu) goto L_089437BC;
    return;
L_089437BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089437CC;
L_089437CC:
    ctx.gpr[31] = (0x089437D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 79u, 0x08A982F0u>(ctx, &aot_mem) && ctx.pc == 0x089437D4u) goto L_089437D4;
    return;
L_089437D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089437F8;
      }
      goto L_089437DC;
    }
L_089437DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089437F8;
      }
      goto L_089437E8;
    }
L_089437E8:
    ctx.gpr[31] = (0x089437F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089437F0u) goto L_089437F0;
    return;
L_089437F0:
    ctx.gpr[31] = (0x089437F8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 331u, 0x088EE3ACu>(ctx, &aot_mem) && ctx.pc == 0x089437F8u) goto L_089437F8;
    return;
L_089437F8:
    ctx.gpr[31] = (0x08943800u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 9u, 0x08A98040u>(ctx, &aot_mem) && ctx.pc == 0x08943800u) goto L_08943800;
    return;
L_08943800:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_08943920;
    }
    goto L_08943808;
L_08943808:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1444)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_08943920;
    }
    goto L_08943830;
L_08943830:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1432)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089438B0;
      }
      goto L_08943854;
    }
L_08943854:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 59u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08943868u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08943868u) goto L_08943868;
    return;
L_08943868:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08943888u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08943888u) goto L_08943888;
    return;
L_08943888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1444), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08943A34;
      }
      goto L_089438B0;
    }
L_089438B0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089438E4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08942DA0;
L_089438E4:
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08943910u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 187u, 0x08855100u>(ctx, &aot_mem) && ctx.pc == 0x08943910u) goto L_08943910;
    return;
L_08943910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3212), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943A34;
      }
      goto L_08943920;
    }
L_08943920:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1444)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08943A34;
      }
      goto L_08943944;
    }
L_08943944:
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
        goto L_08943990;
    }
    goto L_08943978;
L_08943978:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089439AC;
      }
      goto L_08943990;
    }
L_08943990:
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[4] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089439AC;
L_089439AC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1444)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943A34;
      }
      goto L_089439D8;
    }
L_089439D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1432)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08943A34;
      }
      goto L_089439FC;
    }
L_089439FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 57u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08943A34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x08943A34u) goto L_08943A34;
    return;
L_08943A34:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08943A58u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 328u, 0x08855A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08943A58u) goto L_08943A58;
    return;
L_08943A58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943A74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x08943AB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 870u, 0x08A975E8u>(ctx, &aot_mem) && ctx.pc == 0x08943AB8u) goto L_08943AB8;
    return;
L_08943AB8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08943AC8u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 879u, 0x08A9764Cu>(ctx, &aot_mem) && ctx.pc == 0x08943AC8u) goto L_08943AC8;
    return;
L_08943AC8:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[20] = std::sqrt(ctx.fpr[13]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08943B5C;
      }
      goto L_08943B04;
    }
L_08943B04:
    ctx.gpr[31] = (0x08943B0Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08943B0Cu) goto L_08943B0C;
    return;
L_08943B0C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (15759u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08943B50;
      }
      goto L_08943B40;
    }
L_08943B40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2932)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08943B54;
      }
      goto L_08943B50;
    }
L_08943B50:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08943B54;
L_08943B54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943B60;
      }
      goto L_08943B5C;
    }
L_08943B5C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08943B60;
L_08943B60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 41u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
        goto L_08943D18;
    }
    goto L_08943B70;
L_08943B70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943D00;
      }
      goto L_08943B80;
    }
L_08943B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
        goto L_08943D18;
    }
    goto L_08943B98;
L_08943B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
        goto L_08943D18;
    }
    goto L_08943BAC;
L_08943BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16153u << 16u);
      if (branch_taken) {
          goto L_08943BD8;
      }
      goto L_08943BBC;
    }
L_08943BBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(312)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
        goto L_08943D18;
    }
    goto L_08943BD8;
L_08943BD8:
    ctx.gpr[31] = (0x08943BE0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(292)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08943BE0u) goto L_08943BE0;
    return;
L_08943BE0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08943BF4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08943BF4u) goto L_08943BF4;
    return;
L_08943BF4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30140)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30144)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08943C0Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08943C0Cu) goto L_08943C0C;
    return;
L_08943C0C:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08943C20u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 524u, 0x08AF6874u>(ctx, &aot_mem) && ctx.pc == 0x08943C20u) goto L_08943C20;
    return;
L_08943C20:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
        goto L_08943D18;
    }
    goto L_08943C28;
L_08943C28:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
        goto L_08943D18;
    }
    goto L_08943C58;
L_08943C58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (15502u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64012u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49216u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08943CF8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08943CF8u) goto L_08943CF8;
    return;
L_08943CF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
      if (branch_taken) {
          goto L_08943D18;
      }
      goto L_08943D00;
    }
L_08943D00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
        goto L_08943D18;
    }
    goto L_08943D10;
L_08943D10:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    goto L_08943D18;
L_08943D18:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08943D34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08943D34u) goto L_08943D34;
    return;
L_08943D34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943D64;
      }
      goto L_08943D4C;
    }
L_08943D4C:
    ctx.gpr[31] = (0x08943D54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 136u, 0x08A98578u>(ctx, &aot_mem) && ctx.pc == 0x08943D54u) goto L_08943D54;
    return;
L_08943D54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943D64;
      }
      goto L_08943D5C;
    }
L_08943D5C:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(852), ctx.gpr[4]);
    goto L_08943D64;
L_08943D64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08943D7C;
      }
      goto L_08943D74;
    }
L_08943D74:
    ctx.gpr[31] = (0x08943D7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 866u, 0x08947B9Cu>(ctx, &aot_mem) && ctx.pc == 0x08943D7Cu) goto L_08943D7C;
    return;
L_08943D7C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08943D88u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08943114;
L_08943D88:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943DB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08943EB8;
      }
      goto L_08943DEC;
    }
L_08943DEC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943EA8;
      }
      goto L_08943E00;
    }
L_08943E00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 211u);
      if (branch_taken) {
          goto L_08943EA8;
      }
      goto L_08943E10;
    }
L_08943E10:
    ctx.gpr[5] = (0u | 27u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 212u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 213u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 214u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 148u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8072)));
    ctx.gpr[19] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-30168)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08943E7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 654u, 0x08A96CDCu>(ctx, &aot_mem) && ctx.pc == 0x08943E7Cu) goto L_08943E7C;
    return;
L_08943E7C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08943EC0;
      }
      goto L_08943EA0;
    }
L_08943EA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943EC4;
      }
      goto L_08943EA8;
    }
L_08943EA8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 15u, 0x089440BCu>(ctx, &aot_mem); return;
      }
      goto L_08943EB8;
    }
L_08943EB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 15u, 0x089440BCu>(ctx, &aot_mem); return;
      }
      goto L_08943EC0;
    }
L_08943EC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08943EC4;
L_08943EC4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 30001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 3u, 0x08944040u>(ctx, &aot_mem); return;
      }
      goto L_08943ED0;
    }
L_08943ED0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08943EF4;
      }
      goto L_08943ED8;
    }
L_08943ED8:
    ctx.gpr[6] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 13u);
      if (branch_taken) {
          goto L_08943EF4;
      }
      goto L_08943EE4;
    }
L_08943EE4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08943EF4;
      }
      goto L_08943EEC;
    }
L_08943EEC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 3u, 0x08944040u>(ctx, &aot_mem); return;
      }
      goto L_08943EF4;
    }
L_08943EF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-30168)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08943F04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08943F04u) goto L_08943F04;
    return;
L_08943F04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 15u, 0x089440BCu>(ctx, &aot_mem); return;
      }
      goto L_08943F10;
    }
L_08943F10:
    ctx.gpr[31] = (0x08943F18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 347u, 0x0897235Cu>(ctx, &aot_mem) && ctx.pc == 0x08943F18u) goto L_08943F18;
    return;
L_08943F18:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[19] = (0u | 36u);
      if (branch_taken) {
          goto L_08943F7C;
      }
      goto L_08943F24;
    }
L_08943F24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8072)));
    goto L_08943F28;
L_08943F28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943F68;
      }
      goto L_08943F4C;
    }
L_08943F4C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943F68;
      }
      goto L_08943F60;
    }
L_08943F60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08943F7C;
      }
      goto L_08943F68;
    }
L_08943F68:
    ctx.gpr[31] = (0x08943F70u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 343u, 0x088658B8u>(ctx, &aot_mem) && ctx.pc == 0x08943F70u) goto L_08943F70;
    return;
L_08943F70:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8072)));
        goto L_08943F28;
    }
    goto L_08943F7C;
L_08943F7C:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 15u, 0x089440BCu>(ctx, &aot_mem); return;
      }
      goto L_08943F84;
    }
L_08943F84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 15u, 0x089440BCu>(ctx, &aot_mem); return;
      }
      goto L_08943F94;
    }
L_08943F94:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 15u, 0x089440BCu>(ctx, &aot_mem); return;
      }
      goto L_08943F9C;
    }
L_08943F9C:
    ctx.gpr[18] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-30136)));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 25001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 15u, 0x089440BCu>(ctx, &aot_mem); return;
      }
      goto L_08943FB4;
    }
L_08943FB4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30128)));
    ctx.gpr[22] = (2228u << 16u);
    goto L_08943FC4;
L_08943FC4:
    ctx.gpr[31] = (0x08943FCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08943FCCu) goto L_08943FCC;
    return;
L_08943FCC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08943FE0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08943FE0u) goto L_08943FE0;
    return;
L_08943FE0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-30132)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
      if (branch_taken) {
          goto L_08943FC4;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 1u, 0x08944000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0079(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0079_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_79(Runtime &runtime) {
    runtime.register_generated_unit(79u, 0x08940000u, 16384u, &recomp_unit_0079, &recomp_unit_0079_entry);
    runtime.register_function(0x08940000u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940014u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894002Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940034u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894003Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940048u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940058u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940064u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940088u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894009Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089400C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089400D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089400D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089400ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940104u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940164u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894017Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940184u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940208u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894020Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940234u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894023Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940248u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940264u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940270u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894028Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940298u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089402A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089402A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089402B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089402E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940300u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940354u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089403A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089403C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089403D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089403F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940400u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940440u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894044Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089404A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089404B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089404BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089404C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089404C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089404D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089404E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940510u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940518u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940564u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894056Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940574u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894057Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940584u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894059Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089405ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089405B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089405C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089405E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894060Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940614u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940650u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894066Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940694u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894069Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940714u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894071Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940734u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894073Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940760u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940768u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940780u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940788u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940820u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940844u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940864u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894089Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089408A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089408BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089408C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089408D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089408E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089408F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089408F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940900u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940908u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940910u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940918u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940920u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940928u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940938u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940954u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894095Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940968u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940974u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940984u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940994u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089409A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089409C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089409D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089409F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A00u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A0Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A2Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A30u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A38u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A4Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A64u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A68u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A78u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A80u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A8Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A98u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940AA0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940AACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940AC0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940ADCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940AE4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940AECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940AF8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B08u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B14u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B38u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B4Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B74u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B7Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B84u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B94u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940BACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940BB4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940BBCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940BCCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940BD4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940BDCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940BE4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940BECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940BF4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940BFCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C04u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C0Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C18u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C28u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C34u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C58u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C6Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C94u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C9Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940CA4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940CB4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940CBCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940CC4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940CCCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940CD4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940CDCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940CE4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940CECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940CFCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D0Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D18u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D38u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D4Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D78u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D80u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D8Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D9Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940DA8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940DCCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940DE0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E08u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E10u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E18u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E28u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E30u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E38u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E40u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E44u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E4Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E54u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E5Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E64u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E80u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E9Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940EB4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940EBCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940EC4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940ECCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940ED4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940EDCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940EE4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940EECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940EF8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F04u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F10u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F1Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F38u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F48u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F50u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F60u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F7Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F9Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940FA8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940FB0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940FBCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940FD4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940FF4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941000u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894102Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941034u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894103Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894106Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941074u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941080u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941090u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941098u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089410A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089410C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089410D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089410DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089410E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089410ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089410F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089410FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941108u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941114u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941120u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941130u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894114Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941160u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941184u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089411A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089411B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089411C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089411CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089411D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089411D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089411E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089411F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941208u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941218u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941220u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941228u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941250u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941258u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941260u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941268u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941274u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941284u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941290u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089412B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089412C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089412F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089412F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941300u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941310u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941318u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941320u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941328u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941330u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941338u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941340u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941348u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941370u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941394u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089413B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089413ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089413F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941408u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941410u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941420u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941428u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941434u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941440u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941450u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941460u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894146Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894148Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941508u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894151Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941534u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894153Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941544u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941550u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941560u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894156Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941590u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089415A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089415CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089415D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089415DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089415ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089415F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089415FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941604u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894160Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941614u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894161Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941628u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941638u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941640u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941648u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941650u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941658u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941660u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941668u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941680u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941688u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941698u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089416A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089416B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089416D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089416E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941708u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941714u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941724u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894172Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941734u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941740u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941750u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894175Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941780u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941794u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089417BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089417C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941800u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089418B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089418DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089418FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894191Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894192Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941934u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894193Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941944u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941954u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941964u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941974u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941984u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089419A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089419B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089419C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089419D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089419E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089419F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A00u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A08u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A20u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A30u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941AA0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941AC8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941AD4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941AECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941AF4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B08u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B14u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B28u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B5Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B88u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B90u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B98u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941BA0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941BA8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941BB0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941BB8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941BC0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941BC8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941BD0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941BD8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941BE0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941BE8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941BF0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941BF8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C3Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C4Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C78u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C98u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941CA0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941CA8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941CB0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941CBCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941CD0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941CE8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941CF0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941D00u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941D18u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941D24u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941D2Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941D34u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941D3Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941D40u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941D54u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941D74u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941DFCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E10u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E24u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E3Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E50u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E60u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E78u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E8Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941EA0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941EB8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941ECCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941EDCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941FC4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942000u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942014u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942020u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894202Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942038u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942044u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942050u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894205Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942068u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942074u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942080u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894208Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942098u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942104u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942110u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894211Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942128u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942134u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942140u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894214Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942158u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942164u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942170u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894217Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942188u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942194u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942204u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894220Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942214u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894221Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942224u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894222Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942234u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894223Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942244u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894224Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942254u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894225Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942264u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894226Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942274u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894227Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942284u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894228Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942294u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894229Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942304u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894230Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942314u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894231Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942324u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894232Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942334u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894233Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942340u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942348u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894236Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942378u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942380u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894238Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942398u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089423D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089423E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089423F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942400u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942404u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894240Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942414u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942420u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942460u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894246Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942478u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942488u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894248Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942494u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894249Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089424ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089424C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894252Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942550u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942564u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942570u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942598u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089425ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089425B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089425F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942608u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942610u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942618u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894265Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942668u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942674u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942688u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894268Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089426B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942714u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942728u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942730u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942738u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942780u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942790u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894279Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089427B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089427B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089427E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942840u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942854u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894285Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942870u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089428B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089428B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089428C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942920u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942938u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942950u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942964u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942970u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894297Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894298Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894299Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089429B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089429CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089429E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089429FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942A14u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942A2Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942A3Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942AACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942AE4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942AF8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942B3Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942B48u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942B50u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942B98u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C2Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C48u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C64u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C78u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C80u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C88u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C9Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942CA4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942CA8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942CB0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942CB8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942CCCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942CECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942CF4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D04u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D20u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D5Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D6Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D80u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942DA0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942DC8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942DD8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942DE4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E00u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E14u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E20u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E28u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E34u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E50u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E54u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E60u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E6Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E74u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E88u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942EACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942EB8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942EC0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942EC8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942F0Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942F20u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942F28u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942F4Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942F70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942FA0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942FACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942FDCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942FE8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894303Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943048u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943054u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943060u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894307Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943084u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894308Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894309Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089430A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089430ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089430B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089430C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089430E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089430F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943114u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943140u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943150u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943158u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943160u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943168u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943178u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943198u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089431B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089431B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089431C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089431D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089431D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089431E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943200u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943208u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943210u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943218u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943220u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943228u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943238u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943244u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894324Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943254u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943258u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943260u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894327Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943294u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894330Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894332Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943344u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894334Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943354u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943364u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894336Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943374u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943380u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894338Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894339Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089433A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089433B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089433D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089433E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943404u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894340Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894341Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943430u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894344Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943480u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894348Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089434B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089434CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089434F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943500u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943508u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943534u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943544u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943564u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943590u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089435CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089435D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089435DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089435E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089435ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943600u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943610u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943630u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943648u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943650u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943658u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943664u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943670u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943680u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894368Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943694u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089436B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089436D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943734u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894373Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894374Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894375Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943778u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943780u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943790u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943798u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089437A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089437B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089437BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089437CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089437D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089437DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089437E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089437F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089437F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943800u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943808u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943830u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943854u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943868u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943888u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089438B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089438E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943910u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943920u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943944u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943978u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943990u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089439ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089439D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089439FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943A34u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943A58u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943A74u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943AB8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943AC8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B04u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B0Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B40u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B50u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B54u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B5Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B60u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B80u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B98u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943BACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943BBCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943BD8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943BE0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943BF4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943C0Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943C20u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943C28u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943C58u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943CF8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D00u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D10u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D18u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D34u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D4Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D54u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D5Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D64u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D74u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D7Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D88u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943DB0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943DECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E00u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E10u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E7Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943EA0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943EA8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943EB8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943EC0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943EC4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943ED0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943ED8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943EE4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943EECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943EF4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F04u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F10u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F18u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F24u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F28u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F4Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F60u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F68u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F7Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F84u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F94u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F9Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943FB4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943FC4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943FCCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943FE0u, &recomp_unit_0079, "recomp_unit_0079");
}
} // namespace psprecomp
